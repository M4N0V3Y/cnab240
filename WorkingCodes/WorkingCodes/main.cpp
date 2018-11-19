#include <cstdio>
#include "clCnabPgtHeaderZero.h"
#include "clCnabPgtraillerNine.h"
#include <limits> // std::numeric_limits
#include <ctime>

#define _CNAB_BUFFER_SZ 241

//*---------------------- struct order


	typedef int64_t  Price;
	typedef uint32_t Quantity;
	typedef uint32_t Cost;
	typedef int64_t  OrderId;
	typedef uint32_t FillId;
	typedef uint32_t ChangeId;
	typedef uint64_t Stamp;

	typedef time_t  TimeStamp;
	typedef int64_t  MessageId;

	const Price   MARKET_ORDER_PRICE(0);
	const Price   PRICE_UNCHANGED(0);
	const int32_t SIZE_UNCHANGED(0);
	const bool SELL(false);
	const bool BUY(true);

	


typedef struct Order {
	OrderId  m_id;
	Price    m_price; // in cents
	Quantity m_quantity;
	Quantity m_quantityFilled;
	Stamp    m_timeNano;
	bool     m_isBuy;
	bool     m_isCancelled;
	Price    m_avgPrice;
	int64_t  m_expire; // Expected to be seconds since epoch
	
	Order() {};

	Order(OrderId id_, Price price_, Quantity quantity_,
		Stamp    timeNano_,
		bool     isBuy_,
		Quantity quantityFilled_ = 0,
		bool     isCancelled = false,
		Price    avgPrice_ = 0,
		int64_t  expire_ = 0)
		: m_id(id_)
		, m_price(price_)
		, m_quantity(quantity_)
		, m_quantityFilled(quantityFilled_)
		, m_timeNano(timeNano_)
		, m_isBuy(isBuy_)
		, m_isCancelled(isCancelled)
		, m_avgPrice(avgPrice_)
		, m_expire(expire_)
	{
	}

	inline Quantity GetOpenQty()
	{
		return m_quantity - m_quantityFilled;
	}

	inline bool HasOpenQty()
	{
		return (m_quantity - m_quantityFilled) == 0 ? true : false;
	}

	inline void UpdateAvgPrice(const Price crossPrice_, const Quantity filledQty_)
	{
		const float DIVISOR = m_quantityFilled + filledQty_;
		// Catch divide by 0
		if (0 == (DIVISOR))
		{
			m_avgPrice = 0;
			return;
		}
		/*m_avgPrice = nearbyint((long double)((long double)(m_avgPrice
			* (long double)m_quantityFilled)
			+ ((long double)crossPrice_
				* (long double)filledQty_))
			/ (long double)((long double)m_quantityFilled + (long double)filledQty_));*/

		m_quantityFilled += filledQty_;
	}
} Order;

template<class T> struct Envelope {
	TimeStamp m_DateTime;
	MessageId m_MessageId;
	T* m_Obj_Ptr;
	Envelope() {
		m_MessageId = GetNextGUID();
		m_DateTime = std::time(0);};

private:
	MessageId GetNextGUID() {  
								//TODO -- implement some HASH generation 
								return rand() % 1000 + 1;; };
};




// END of order

template <class T> class ParseObject2Ptr {
public:

	//------------------------------------------------------------------//
	/* Decoder methods
	* object => char*
	* object => void*
	*/
	char * Object2CharBuffer(T* Object_) {
		void* ObjectVoid_Ptr = malloc(m_size_);
		memcpy(ObjectVoid_Ptr, Object_, m_size_);
		char* BufferLine_ = reinterpret_cast<char*> (malloc(m_size_));
		memset(BufferLine_, ' ', m_size_);
		BufferLine_ = reinterpret_cast<char*>(ObjectVoid_Ptr);
		return BufferLine_;
	}
	void * Object2ByteBuffer(T* Object_)  {
		void* ObjectVoid_Ptr = malloc(m_size_);
		memcpy(ObjectVoid_Ptr, Object_, m_size_);
		return ObjectVoid_Ptr;
	}
	// Encoders for Objects
	//
	T* ParseStr2Obj(char* DataBuffer) {
		T* Order_Ptr = &Obj_;
		void* OrderV_Ptr = malloc(m_size_);
		memcpy(OrderV_Ptr, DataBuffer, m_size_);

		Order_Ptr = reinterpret_cast<T*> (OrderV_Ptr);
		return Order_Ptr;
	}
	T* ParseByte2Obj(void* DataBuffer) {
		T* Order_Ptr = &Obj_;
		void* OrderV_Ptr = malloc(m_size_);
		memcpy(Order_Ptr, DataBuffer, m_size_);
		Order_Ptr = reinterpret_cast<T*> (DataBuffer);
		return Order_Ptr;
	}
	//-----------------------------
private:
	const static size_t m_size_ = sizeof(T);
	T Obj_ = T();
};


int main()
{
	setlocale(LC_ALL, "Brasil");
	clCnabPgtraillerNine* oCNABPgtraillerNine = new clCnabPgtraillerNine();
	clCnabPgtHeaderZero* oCNABPageHeader = new clCnabPgtHeaderZero();
	oCNABPageHeader->settAttributeMember(enuCban_010_G001, "033");
	oCNABPageHeader->settAttributeMember(enuLots_020_G002, "1234");
	oCNABPageHeader->settAttributeMember(enuRgst_030_G003, "0"); // Registro  HEADER de página
	oCNABPageHeader->settAttributeMember(enuCnab_040_G004, "012345678");
	oCNABPageHeader->settAttributeMember(enuTpem_050_G005, "0"); // Tipo CNPJ/CPF - 0/1
	oCNABPageHeader->settAttributeMember(enuCnpj_060_G006, "07514164000186");
	oCNABPageHeader->settAttributeMember(enuCnvb_070_G007, "99900000000100000000"); // Cod Conv no Banco
	oCNABPageHeader->settAttributeMember(enuAgen_080_G008, "03635");
	oCNABPageHeader->settAttributeMember(enuAgdv_090_G009, "0");
	oCNABPageHeader->settAttributeMember(enuCont_100_G010, "010000059556"); // CC
	oCNABPageHeader->settAttributeMember(enuCtdv_110_G011, "8"); // DV
	oCNABPageHeader->settAttributeMember(enuAgct_120_G012, "0");
	oCNABPageHeader->settAttributeMember(enuRzsc_130_G013, "INFO PRAGMA PESQ DESENV SW LTD");
	oCNABPageHeader->settAttributeMember(enuNmbk_140_G014, "BANCO SANTANDER DO BRASIL S.A.");
	oCNABPageHeader->settAttributeMember(enuFebr_150_G015, "          ");
	oCNABPageHeader->settAttributeMember(enuRmrt_160_G016, "0"); // REMESSA OU RETORNO
	oCNABPageHeader->settAttributeMember(enuDtgr_170_G017, "21012018");
	oCNABPageHeader->settAttributeMember(enuHrgr_180_G018, "171700");
	oCNABPageHeader->settAttributeMember(enuNseq_190_G019, "000001");
	oCNABPageHeader->settAttributeMember(enuLayt_200_G020, "100"); // TIPO DE LAYOUT
	oCNABPageHeader->settAttributeMember(enuDnsg_210_G021, "56000"); //
	oCNABPageHeader->settAttributeMember(enuRsrv_220_G022, "**** RESRV BANCO ***");
	oCNABPageHeader->settAttributeMember(enuRsre_230_G023, "**** RESRV EMPRS ***");
	oCNABPageHeader->settAttributeMember(enuRsfb_240_G004, "** RESERVADO FEBRABAN/CNAB **");

	Envelope<clCnabPgtHeaderZero>* envelopePH = new Envelope<clCnabPgtHeaderZero>();
	envelopePH->m_Obj_Ptr = oCNABPageHeader;

	Order* order = new Order(70000001, 125, 73.21, 100, 100001, BUY);
	//ParseObject2Ptr<Envelope> * EnvParser = new ParseObject2Ptr<Envelope>();

	Envelope<Order>* envelope = new Envelope<Order>();
	envelope->m_Obj_Ptr = order;
	//
    //Trailler Nine
	oCNABPgtraillerNine->settAttributeMember(enuCban_019_g001, "033");
	oCNABPgtraillerNine->settAttributeMember(enuLots_029_g002, "1234");
	oCNABPgtraillerNine->settAttributeMember(enuRgst_039_g003, "9"); // Registro Trailler Página
	oCNABPgtraillerNine->settAttributeMember(enuCnab_049_g004, "** CNB **");
	oCNABPgtraillerNine->settAttributeMember(enuTotl_059_g049, "000254");
	oCNABPgtraillerNine->settAttributeMember(enuQtrg_069_g056, "000245");
	oCNABPgtraillerNine->settAttributeMember(enuQtcc_079_g073, "000242");
	oCNABPgtraillerNine->settAttributeMember(enuRsfb_089_g004, _RESERVADOCNABFEBRABAN);

	ParseObject2Ptr<clCnabPgtHeaderZero> * objDumpParser = new ParseObject2Ptr<clCnabPgtHeaderZero>();
	ParseObject2Ptr<clCnabPgtraillerNine> * objDumpParserT = new ParseObject2Ptr<clCnabPgtraillerNine>();

	ParseObject2Ptr<Order> * OrderParser = new ParseObject2Ptr<Order>();
	char* OrderBuffer_Ptr = OrderParser->Object2CharBuffer(order);
	Order* orderNew = OrderParser->ParseStr2Obj(OrderBuffer_Ptr);
	void * OrderVoid_Ptr = OrderParser->Object2ByteBuffer(order);
	Order* orderNew2 = OrderParser->ParseByte2Obj(OrderVoid_Ptr);
	//
	ParseObject2Ptr<Envelope<Order>> * EnvParser = new ParseObject2Ptr<Envelope<Order>>();
	char* EnvBuffer_Ptr = EnvParser->Object2CharBuffer(envelope);
	void* EnvVoid_ptr   = EnvParser->Object2ByteBuffer(envelope);
	Envelope<Order>* newEnvelop_Ptr1 = EnvParser->ParseStr2Obj(EnvBuffer_Ptr);
	Envelope<Order>* newEnvelop_Ptr2 = EnvParser->ParseByte2Obj(EnvVoid_ptr);
	//
	char* oCNABPgHeaderLine = objDumpParser->Object2CharBuffer(oCNABPageHeader);// , _CNAB_BUFFER_SZ);
	//char* oCNABPgHeaderLine = objDumpParser->dumpCnabPgHeaderZero(oCNABPageHeader);
	char* oCNABPgTraillerLine = objDumpParserT->Object2CharBuffer(oCNABPgtraillerNine);// , _CNAB_BUFFER_SZ);
	//char* oCNABPgTraillerLine = objDumpParserT->dumpCnabPgHeaderZero(oCNABPgtraillerNine);

	std::cout << "CNAB Teste" << std::endl;
	std::cout << "Dados Registro de cabecalho: " << std::endl;
	std::cout << std::endl;
	std::cout << oCNABPgHeaderLine << std::endl;
	std::cout << std::endl;
	std::cout << "Dados Registro de trailler: " << std::endl;
	std::cout << std::endl;
	std::cout << oCNABPgTraillerLine << std::endl;

	clCnabPgtHeaderZero * o2_CNABPageHeader = objDumpParser->ParseStr2Obj(oCNABPgHeaderLine);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Numero do Banco: " << o2_CNABPageHeader->getAttributeMember(enuCban_010_G001) << " Nome do banco: " << o2_CNABPageHeader->getAttributeMember(enuNmbk_140_G014) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Numero do CNPJ: " << o2_CNABPageHeader->getAttributeMember(enuCnpj_060_G006) << " Razao social: " << o2_CNABPageHeader->getAttributeMember(enuRzsc_130_G013) << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	// CREATE TABLE 001
	std::cout << "CREATE TABLE CNAB_PGTHEADER_ZERO( ";

	int index = 0;
	int coluna = 0;
	for (index = enuCban_010_G001; index <( enuRsfb_240_G004 +1); index++) {
		if (coluna > 4) {   std::cout << std::endl;
							coluna = 0;
						}
		std::cout << _CNAB_PGTHEADER_ZERO_ColumnNames[index] << " " << _CNAB_PGTHEADER_ZERO_ColumnTypes[index];
		if(index<enuRsfb_240_G004) std::cout << ", ";
		coluna++;
	}
	// CREATE TABLE 002
	std::cout << "CREATE TABLE CNAB_PGTHEADER_ONE( ";

	index = 0;
	coluna = 0;
	for (index = enuCban_011_G001; index <(enuOccr_281_G059 + 1); index++) {
		if (coluna > 4) {
			std::cout << std::endl;
			coluna = 0;
		}
		std::cout << _CNAB_PGTHEADER_ONE_ColumnNames[index] << " " << _CNAB_PGTHEADER_ONE_ColumnTypes[index];
		if (index<enuOccr_281_G059) std::cout << ", ";
		coluna++;
	}
	// CREATE TABLE 003
	std::cout << "); " << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "CREATE TABLE CNAB_PGTRAILLER_NINE( ";
	index = 0;
	coluna = 0;

	for (index = enuCban_019_g001; index <(enuRsfb_089_g004 + 1); index++) {
		if (coluna > 4) {
			std::cout << std::endl;
			coluna = 0;
		}
		std::cout << _CNAB_PGTTRAILLER_NINE_ColumnNames[index] << " " << _CNAB_PGTTRAILLER_NINE_ColumnTypes[index];
		if (index<enuRsfb_089_g004) std::cout << ", ";
		coluna++;
	    }
		std::cout << "); " << std::endl;

		// CREATE TABLE 004
		std::cout << "); " << std::endl;

		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << "CREATE TABLE CNAB_PGT_SEGA_3( ";
		index = 0;
		coluna = 0;

		for (index = enuCban_013a_G001; index <(enuOccr_293a_G059 + 1); index++) {
			if (coluna > 4) {
				std::cout << std::endl;
				coluna = 0;
			}
			std::cout << _CNAB_PGTSEGMENTOA_ColumnNames[index] << " " << _CNAB_PGTSEGMENTOA_ColumnTypes[index];
			if (index<enuOccr_293a_G059) std::cout << ", ";
			coluna++;
		}
		std::cout << "); " << std::endl;

    return 0;
}

