#include "clCabPgtSegmentoWThree.h"

char* setCharBufferSGW(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCabPgtSegmentoWThree::clCabPgtSegmentoWThree()
{
}


clCabPgtSegmentoWThree::~clCabPgtSegmentoWThree()
{
}

char * clCabPgtSegmentoWThree::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos) {

	case enuCban_013W_G001:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Cban_013W_G001, _Cban_013W_G001); break;
	case enuLots_023W_G002:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Lots_023W_G002, _Lots_023W_G002); break;
	case enuRgst_033W_G003:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Rgst_033W_G003, _Rgst_033W_G003); break;
	case enuOper_043W_G038:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Oper_043W_G038, _Oper_043W_G038); break;
	case enuSegm_053W_G039:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Segm_053W_G039, _Segm_053W_G039); break;
	case enuCseg_063W_N023:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Cseg_063W_N023, _Cseg_063W_N023); break;
	case enuIdif_073W_N024:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Idif_073W_N024, _Idif_073W_N024); break;
	case enuCpl1_083W_N025:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Cpl1_083W_N025, _Cpl1_083W_N025); break;
	case enuCpl2_093W_N025:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Cpl2_093W_N025, _Cpl2_093W_N025); break;
	case enuCpl3_103W_N027:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Cpl3_103W_N027, _Cpl3_103W_N027); break;
	case enuCptb_103W_N026:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Cptb_103W_N026, _Cptb_103W_N026); break;
	case enuResv_113W_G004:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Resv_113W_G004, _Resv_113W_G004); break;
	case enuOccr_123W_G059:  _retorno = setCharBufferSGW(clCabPgtSegmentoWThree::m_Occr_123W_G059, _Occr_123W_G059); break;
	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoWThree::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCban_013W_G001:  memcpy(clCabPgtSegmentoWThree::m_Cban_013W_G001, v_Incoming_Data, _Cban_013W_G001); break;
	case enuLots_023W_G002:  memcpy(clCabPgtSegmentoWThree::m_Lots_023W_G002, v_Incoming_Data, _Lots_023W_G002); break;
	case enuRgst_033W_G003:  memcpy(clCabPgtSegmentoWThree::m_Rgst_033W_G003, v_Incoming_Data, _Rgst_033W_G003); break;
	case enuOper_043W_G038:  memcpy(clCabPgtSegmentoWThree::m_Oper_043W_G038, v_Incoming_Data, _Oper_043W_G038); break;
	case enuSegm_053W_G039:  memcpy(clCabPgtSegmentoWThree::m_Segm_053W_G039, v_Incoming_Data, _Segm_053W_G039); break;
	case enuCseg_063W_N023:  memcpy(clCabPgtSegmentoWThree::m_Cseg_063W_N023, v_Incoming_Data, _Cseg_063W_N023); break;
	case enuIdif_073W_N024:  memcpy(clCabPgtSegmentoWThree::m_Idif_073W_N024, v_Incoming_Data, _Idif_073W_N024); break;
	case enuCpl1_083W_N025:  memcpy(clCabPgtSegmentoWThree::m_Cpl1_083W_N025, v_Incoming_Data, _Cpl1_083W_N025); break;
	case enuCpl2_093W_N025:  memcpy(clCabPgtSegmentoWThree::m_Cpl2_093W_N025, v_Incoming_Data, _Cpl2_093W_N025); break;
	case enuCpl3_103W_N027:  memcpy(clCabPgtSegmentoWThree::m_Cpl3_103W_N027, v_Incoming_Data, _Cpl3_103W_N027); break;
	case enuCptb_103W_N026:  memcpy(clCabPgtSegmentoWThree::m_Cptb_103W_N026, v_Incoming_Data, _Cptb_103W_N026); break;
	case enuResv_113W_G004:  memcpy(clCabPgtSegmentoWThree::m_Resv_113W_G004, v_Incoming_Data, _Resv_113W_G004); break;
	case enuOccr_123W_G059:  memcpy(clCabPgtSegmentoWThree::m_Occr_123W_G059, v_Incoming_Data, _Occr_123W_G059); break;
	default:
		break;
	}

}
