#include "clCabPgtSegmentoN3Three.h"

char* setCharBufferSGN3(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCabPgtSegmentoN3Three::clCabPgtSegmentoN3Three()
{
}


clCabPgtSegmentoN3Three::~clCabPgtSegmentoN3Three()
{
}

char * clCabPgtSegmentoN3Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case enuCrtb_013N3_N002:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Crtb_013N3_N002, _Crtb_013N3_N002); break;
	case enuTidc_023N3_N003:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Tidc_023N3_N003, _Tidc_023N3_N003); break;
	case enuIdct_033N3_N004:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Idct_033N3_N004, _Idct_033N3_N004); break;
	case enuIdtb_043N3_N005:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Idtb_043N3_N005, _Idtb_043N3_N005); break;
	case enuApur_053N3_N006:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Apur_053N3_N006, _Apur_053N3_N006); break;
	case enuRbrt_063N3_N010:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Rbrt_063N3_N010, _Rbrt_063N3_N010); break;
	case enuRper_073N3_N011:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Rper_073N3_N011, _Rper_073N3_N011); break;
	case enuVlrp_083N3_G042:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Vlrp_083N3_G042, _Vlrp_083N3_G042); break;
	case enuVmul_093N3_G048:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Vmul_093N3_G048, _Vmul_093N3_G048); break;
	case enuVjre_103N3_G047:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Vjre_103N3_G047, _Vjre_103N3_G047); break;
	case enuCnab_113N3_G004:  _retorno = setCharBufferSGN3(clCabPgtSegmentoN3Three::m_Cnab_113N3_G004, _Cnab_113N3_G004); break;

	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoN3Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCrtb_013N3_N002:  memcpy(clCabPgtSegmentoN3Three::m_Crtb_013N3_N002, v_Incoming_Data, _Crtb_013N3_N002); break;
	case enuTidc_023N3_N003:  memcpy(clCabPgtSegmentoN3Three::m_Tidc_023N3_N003, v_Incoming_Data, _Tidc_023N3_N003); break;
	case enuIdct_033N3_N004:  memcpy(clCabPgtSegmentoN3Three::m_Idct_033N3_N004, v_Incoming_Data, _Idct_033N3_N004); break;
	case enuIdtb_043N3_N005:  memcpy(clCabPgtSegmentoN3Three::m_Idtb_043N3_N005, v_Incoming_Data, _Idtb_043N3_N005); break;
	case enuApur_053N3_N006:  memcpy(clCabPgtSegmentoN3Three::m_Apur_053N3_N006, v_Incoming_Data, _Apur_053N3_N006); break;
	case enuRbrt_063N3_N010:  memcpy(clCabPgtSegmentoN3Three::m_Rbrt_063N3_N010, v_Incoming_Data, _Rbrt_063N3_N010); break;
	case enuRper_073N3_N011:  memcpy(clCabPgtSegmentoN3Three::m_Rper_073N3_N011, v_Incoming_Data, _Rper_073N3_N011); break;
	case enuVlrp_083N3_G042:  memcpy(clCabPgtSegmentoN3Three::m_Vlrp_083N3_G042, v_Incoming_Data, _Vlrp_083N3_G042); break;
	case enuVmul_093N3_G048:  memcpy(clCabPgtSegmentoN3Three::m_Vmul_093N3_G048, v_Incoming_Data, _Vmul_093N3_G048); break;
	case enuVjre_103N3_G047:  memcpy(clCabPgtSegmentoN3Three::m_Vjre_103N3_G047, v_Incoming_Data, _Vjre_103N3_G047); break;
	case enuCnab_113N3_G004:  memcpy(clCabPgtSegmentoN3Three::m_Cnab_113N3_G004, v_Incoming_Data, _Cnab_113N3_G004); break;
	default:
		break;
	}
}
