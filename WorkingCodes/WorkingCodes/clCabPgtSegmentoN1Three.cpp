#include "clCabPgtSegmentoN1Three.h"

char* setCharBufferSGN1(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCabPgtSegmentoN1Three::clCabPgtSegmentoN1Three()
{
}


clCabPgtSegmentoN1Three::~clCabPgtSegmentoN1Three()
{
}

char * clCabPgtSegmentoN1Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case enuCrtb_013N1_N002: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Crtb_013N1_N002,_Crtb_013N1_N002); break;
	case enuTidc_023N1_N003: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Tidc_023N1_N003,_Tidc_023N1_N003); break;
	case enuIdct_033N1_N004: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Idct_033N1_N004,_Idct_033N1_N004); break;
	case enuIdtb_043N1_N005: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Idtb_043N1_N005,_Idtb_043N1_N005); break;
	case enuMean_053N1_N006: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Mean_053N1_N006,_Mean_053N1_N006); break;
	case enuVlrt_063N1_G055: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Vlrt_063N1_G055,_Vlrt_063N1_G055); break;
	case enuVlro_073N1_G054: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Vlro_073N1_G054,_Vlro_073N1_G054); break;
	case enuCrmo_083N1_N007: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Crmo_083N1_N007,_Crmo_083N1_N007); break;
	case enuCnab_093N1_G004: _retorno = setCharBufferSGN1(clCabPgtSegmentoN1Three::m_Cnab_093N1_G004,_Cnab_093N1_G004); break;

	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoN1Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCrtb_013N1_N002: memcpy(clCabPgtSegmentoN1Three::m_Crtb_013N1_N002, v_Incoming_Data, _Crtb_013N1_N002); break;
	case enuTidc_023N1_N003: memcpy(clCabPgtSegmentoN1Three::m_Tidc_023N1_N003, v_Incoming_Data, _Tidc_023N1_N003); break;
	case enuIdct_033N1_N004: memcpy(clCabPgtSegmentoN1Three::m_Idct_033N1_N004, v_Incoming_Data, _Idct_033N1_N004); break;
	case enuIdtb_043N1_N005: memcpy(clCabPgtSegmentoN1Three::m_Idtb_043N1_N005, v_Incoming_Data, _Idtb_043N1_N005); break;
	case enuMean_053N1_N006: memcpy(clCabPgtSegmentoN1Three::m_Mean_053N1_N006, v_Incoming_Data, _Mean_053N1_N006); break;
	case enuVlrt_063N1_G055: memcpy(clCabPgtSegmentoN1Three::m_Vlrt_063N1_G055, v_Incoming_Data, _Vlrt_063N1_G055); break;
	case enuVlro_073N1_G054: memcpy(clCabPgtSegmentoN1Three::m_Vlro_073N1_G054, v_Incoming_Data, _Vlro_073N1_G054); break;
	case enuCrmo_083N1_N007: memcpy(clCabPgtSegmentoN1Three::m_Crmo_083N1_N007, v_Incoming_Data, _Crmo_083N1_N007); break;
	case enuCnab_093N1_G004: memcpy(clCabPgtSegmentoN1Three::m_Cnab_093N1_G004, v_Incoming_Data, _Cnab_093N1_G004); break;

	default:
		break;
	}
}