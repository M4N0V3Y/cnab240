#include "clCabPgtSegmentoW1Three.h"

char* setCharBufferSGW1(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCabPgtSegmentoW1Three::clCabPgtSegmentoW1Three()
{
}


clCabPgtSegmentoW1Three::~clCabPgtSegmentoW1Three()
{
}

char * clCabPgtSegmentoW1Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos) {
	case enuIdtb_103W_N027:  _retorno = setCharBufferSGW1(clCabPgtSegmentoW1Three::m_Idtb_103W_N027, _Idtb_103W_N027);  break;
	case enuCrtb_103W_N002:  _retorno = setCharBufferSGW1(clCabPgtSegmentoW1Three::m_Crtb_103W_N002, _Crtb_103W_N002);  break;
	case enuTidc_103W_N003:  _retorno = setCharBufferSGW1(clCabPgtSegmentoW1Three::m_Tidc_103W_N003, _Tidc_103W_N003);  break;
	case enuIdct_103W_N004:  _retorno = setCharBufferSGW1(clCabPgtSegmentoW1Three::m_Idct_103W_N004, _Idct_103W_N004);  break;
	case enuFgts_103W_N021:  _retorno = setCharBufferSGW1(clCabPgtSegmentoW1Three::m_Fgts_103W_N021, _Fgts_103W_N021);  break;
	case enuLacr_103W_N028:  _retorno = setCharBufferSGW1(clCabPgtSegmentoW1Three::m_Lacr_103W_N028, _Lacr_103W_N028);  break;
	case enuLadv_103W_N029:  _retorno = setCharBufferSGW1(clCabPgtSegmentoW1Three::m_Ladv_103W_N029, _Ladv_103W_N029);  break;
	case enuCnab_103W_G004:  _retorno = setCharBufferSGW1(clCabPgtSegmentoW1Three::m_Cnab_103W_G004, _Cnab_103W_G004);  break;
	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoW1Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuIdtb_103W_N027:  memcpy(clCabPgtSegmentoW1Three::m_Idtb_103W_N027, v_Incoming_Data, _Idtb_103W_N027);  break;
	case enuCrtb_103W_N002:  memcpy(clCabPgtSegmentoW1Three::m_Crtb_103W_N002, v_Incoming_Data, _Crtb_103W_N002);  break;
	case enuTidc_103W_N003:  memcpy(clCabPgtSegmentoW1Three::m_Tidc_103W_N003, v_Incoming_Data, _Tidc_103W_N003);  break;
	case enuIdct_103W_N004:  memcpy(clCabPgtSegmentoW1Three::m_Idct_103W_N004, v_Incoming_Data, _Idct_103W_N004);  break;
	case enuFgts_103W_N021:  memcpy(clCabPgtSegmentoW1Three::m_Fgts_103W_N021, v_Incoming_Data, _Fgts_103W_N021);  break;
	case enuLacr_103W_N028:  memcpy(clCabPgtSegmentoW1Three::m_Lacr_103W_N028, v_Incoming_Data, _Lacr_103W_N028);  break;
	case enuLadv_103W_N029:  memcpy(clCabPgtSegmentoW1Three::m_Ladv_103W_N029, v_Incoming_Data, _Ladv_103W_N029);  break;
	case enuCnab_103W_G004:  memcpy(clCabPgtSegmentoW1Three::m_Cnab_103W_G004, v_Incoming_Data, _Cnab_103W_G004);  break;
	default:
		break;
	}

}
