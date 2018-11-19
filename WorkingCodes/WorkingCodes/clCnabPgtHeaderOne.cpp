#include "clCnabPgtHeaderOne.h"

char* setCharBuffer(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabPgtHeaderOne::clCnabPgtHeaderOne()
{
}


clCnabPgtHeaderOne::~clCnabPgtHeaderOne()
{
}

char * clCnabPgtHeaderOne::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
		
	case enuCban_011_G001:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Cban_011_G001, _Cban_011_G001);
		break;
	case enuLots_021_G002:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Lots_021_G002, _Lots_021_G002);
		break;			
	case enuRgst_031_G003:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Rgst_031_G003, _Rgst_031_G003);
		break;			
	case enuOper_041_G028:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Oper_041_G028, _Oper_041_G028);
		break;
	case enuSrvc_051_G025:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Srvc_051_G025, _Srvc_051_G025);
		break;
	case enuFlan_061_G029:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Flan_061_G029, _Flan_061_G029);
		break;
	case enuLayt_071_G030:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Layt_071_G030, _Layt_071_G030);
		break;
	case enuCnab_081_G004:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Cnab_081_G004, _Cnab_081_G004);
		break;
	case enuTpem_091_G005:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Tpem_091_G005, _Tpem_091_G005);
		break;
	case enuCnpj_101_G006:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Cnpj_101_G006, _Cnpj_101_G006);
		break;
	case enuCnvb_111_G007:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Cnvb_111_G007, _Cnvb_111_G007);
		break;
	case enuAgen_121_G008:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Agen_121_G008, _Agen_121_G008);
		break;
	case enuAgdv_131_G009:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Agdv_131_G009, _Agdv_131_G009);
		break;
	case enuCont_141_G010:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Cont_141_G010, _Cont_141_G010);
		break;
	case enuCtdv_151_G011:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Ctdv_151_G011, _Ctdv_151_G011);
		break;
	case enuAgct_161_G012:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Agct_161_G012, _Agct_161_G012);
		break;
	case enuRzsc_171_G013:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Rzsc_171_G013, _Rzsc_171_G013);
		break;
	case enuMnsg_181_G031:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Mnsg_181_G031, _Mnsg_181_G031);
		break;
	case enuLgrd_191_G032:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Lgrd_191_G032, _Lgrd_191_G032);
		break;
	case enuNumr_201_G032:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Numr_201_G032, _Numr_201_G032);
		break;			
	case enuCmpl_211_G032:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Cmpl_211_G032, _Cmpl_211_G032);
		break;
	case enuCidd_221_C033:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Cidd_221_C033, _Cidd_221_C033);
		break;
	case enuNcep_231_G034:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Ncep_231_G034, _Ncep_231_G034);
		break;
	case enuCcep_241_G035:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Ccep_241_G035, _Ccep_241_G035);
		break;
	case enuEstd_251_G036:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Estd_251_G036, _Estd_251_G036);
		break;
	case enuFpgt_261_P014:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Fpgt_261_P014, _Fpgt_261_P014);
		break;
	case enuRsfb_271_G004:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Rsfb_271_G004, _Rsfb_271_G004);
		break;		
	case enuOccr_281_G059:
		_retorno = setCharBuffer(clCnabPgtHeaderOne::m_Occr_281_G059, _Occr_281_G059);
		break;

	default:
		break;
	}
	return _retorno;

}

void clCnabPgtHeaderOne::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{

	switch (_enumPos)
	{		
	case enuCban_011_G001:
		memcpy(clCnabPgtHeaderOne::m_Cban_011_G001, v_Incoming_Data,_Cban_011_G001);
		break;
	case enuLots_021_G002:		
		memcpy(clCnabPgtHeaderOne::m_Lots_021_G002, v_Incoming_Data,_Lots_021_G002);
		break;
	case enuRgst_031_G003:
		memcpy(clCnabPgtHeaderOne::m_Rgst_031_G003, v_Incoming_Data,_Rgst_031_G003);
		break;
	case enuOper_041_G028:
		memcpy(clCnabPgtHeaderOne::m_Oper_041_G028, v_Incoming_Data,_Oper_041_G028);
		break;
	case enuSrvc_051_G025:
		memcpy(clCnabPgtHeaderOne::m_Srvc_051_G025, v_Incoming_Data,_Srvc_051_G025);
		break;
	case enuFlan_061_G029:
		memcpy(clCnabPgtHeaderOne::m_Flan_061_G029, v_Incoming_Data,_Flan_061_G029);
		break;
	case enuLayt_071_G030:
		memcpy(clCnabPgtHeaderOne::m_Layt_071_G030, v_Incoming_Data,_Layt_071_G030);
		break;
	case enuCnab_081_G004:
		memcpy(clCnabPgtHeaderOne::m_Cnab_081_G004, v_Incoming_Data,_Cnab_081_G004);
		break;
	case enuTpem_091_G005:
		memcpy(clCnabPgtHeaderOne::m_Tpem_091_G005, v_Incoming_Data,_Tpem_091_G005);
		break;
	case enuCnpj_101_G006:
		memcpy(clCnabPgtHeaderOne::m_Cnpj_101_G006, v_Incoming_Data,_Cnpj_101_G006);
		break;
	case enuCnvb_111_G007:
		memcpy(clCnabPgtHeaderOne::m_Cnvb_111_G007, v_Incoming_Data,_Cnvb_111_G007);
		break;
	case enuAgen_121_G008:
		memcpy(clCnabPgtHeaderOne::m_Agen_121_G008, v_Incoming_Data,_Agen_121_G008);
		break;
	case enuAgdv_131_G009:
		memcpy(clCnabPgtHeaderOne::m_Agdv_131_G009, v_Incoming_Data,_Agdv_131_G009);
		break;
	case enuCont_141_G010:
		memcpy(clCnabPgtHeaderOne::m_Cont_141_G010, v_Incoming_Data,_Cont_141_G010);
		break;
	case enuCtdv_151_G011:
		memcpy(clCnabPgtHeaderOne::m_Ctdv_151_G011, v_Incoming_Data,_Ctdv_151_G011);
		break;
	case enuAgct_161_G012:
		memcpy(clCnabPgtHeaderOne::m_Agct_161_G012, v_Incoming_Data,_Agct_161_G012);
		break;
	case enuRzsc_171_G013:
		memcpy(clCnabPgtHeaderOne::m_Rzsc_171_G013, v_Incoming_Data,_Rzsc_171_G013);
		break;
	case enuMnsg_181_G031:
		memcpy(clCnabPgtHeaderOne::m_Mnsg_181_G031, v_Incoming_Data,_Mnsg_181_G031);
		break;
	case enuLgrd_191_G032:
		memcpy(clCnabPgtHeaderOne::m_Lgrd_191_G032, v_Incoming_Data,_Lgrd_191_G032);
		break;
	case enuNumr_201_G032:
		memcpy(clCnabPgtHeaderOne::m_Numr_201_G032, v_Incoming_Data,_Numr_201_G032);
		break;
	case enuCmpl_211_G032:
		memcpy(clCnabPgtHeaderOne::m_Cmpl_211_G032, v_Incoming_Data,_Cmpl_211_G032);
		break;
	case enuCidd_221_C033:
		memcpy(clCnabPgtHeaderOne::m_Cidd_221_C033, v_Incoming_Data,_Cidd_221_C033);
		break;
	case enuNcep_231_G034:
		memcpy(clCnabPgtHeaderOne::m_Ncep_231_G034, v_Incoming_Data,_Ncep_231_G034);
		break;
	case enuCcep_241_G035:
		memcpy(clCnabPgtHeaderOne::m_Ccep_241_G035, v_Incoming_Data,_Ccep_241_G035);
		break;
	case enuEstd_251_G036:
		memcpy(clCnabPgtHeaderOne::m_Estd_251_G036, v_Incoming_Data,_Estd_251_G036);
		break;
	case enuFpgt_261_P014:
		memcpy(clCnabPgtHeaderOne::m_Fpgt_261_P014, v_Incoming_Data,_Fpgt_261_P014);
		break;
	case enuRsfb_271_G004:
		memcpy(clCnabPgtHeaderOne::m_Rsfb_271_G004, v_Incoming_Data,_Rsfb_271_G004);
		break;
	case enuOccr_281_G059:
		memcpy(clCnabPgtHeaderOne::m_Occr_281_G059, v_Incoming_Data,_Occr_281_G059);
		break;

	default:
		break;
	}

}
