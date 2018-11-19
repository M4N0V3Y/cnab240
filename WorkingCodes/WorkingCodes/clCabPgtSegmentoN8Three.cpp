#include "clCabPgtSegmentoN8Three.h"

char* setCharBufferSGN8(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCabPgtSegmentoN8Three::clCabPgtSegmentoN8Three()
{
}


clCabPgtSegmentoN8Three::~clCabPgtSegmentoN8Three()
{
}

char * clCabPgtSegmentoN8Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos) {
	case enuCrtb_013N8_N002:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Crtb_013N8_N002, _Crtb_013N8_N002); break;
	case enuTidc_023N8_N003:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Tidc_023N8_N003, _Tidc_023N8_N003); break;
	case enuIdct_033N8_N004:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Idct_033N8_N004, _Idct_033N8_N004); break;
	case enuIecm_043N8_N012:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Iecm_043N8_N012, _Iecm_043N8_N012); break;
	case enuDcor_033N8_N022:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Dcor_033N8_N022, _Dcor_033N8_N022); break;
	case enuVlrp_043N8_G042:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Vlrp_043N8_G042, _Vlrp_043N8_G042); break;
	case enuCrmo_053N8_N007:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Crmo_053N8_N007, _Crmo_053N8_N007); break;
	case enuVmor_063N8_G047:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Vmor_063N8_G047, _Vmor_063N8_G047); break;
	case enuVmul_073N8_G048:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Vmul_073N8_G048, _Vmul_073N8_G048); break;
	case enuDtvn_083N8_G044:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Dtvn_083N8_G044, _Dtvn_083N8_G044); break;
	case enuVpar_093N8_N006:_retorno = setCharBufferSGN8(clCabPgtSegmentoN8Three::m_Vpar_093N8_N006, _Vpar_093N8_N006); break;
	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoN8Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{

	case enuCrtb_013N8_N002:  memcpy(clCabPgtSegmentoN8Three::m_Crtb_013N8_N002, v_Incoming_Data, _Crtb_013N8_N002); break;
	case enuTidc_023N8_N003:  memcpy(clCabPgtSegmentoN8Three::m_Tidc_023N8_N003, v_Incoming_Data, _Tidc_023N8_N003); break;
	case enuIdct_033N8_N004:  memcpy(clCabPgtSegmentoN8Three::m_Idct_033N8_N004, v_Incoming_Data, _Idct_033N8_N004); break;
	case enuIecm_043N8_N012:  memcpy(clCabPgtSegmentoN8Three::m_Iecm_043N8_N012, v_Incoming_Data, _Iecm_043N8_N012); break;
	case enuDcor_033N8_N022:  memcpy(clCabPgtSegmentoN8Three::m_Dcor_033N8_N022, v_Incoming_Data, _Dcor_033N8_N022); break;
	case enuVlrp_043N8_G042:  memcpy(clCabPgtSegmentoN8Three::m_Vlrp_043N8_G042, v_Incoming_Data, _Vlrp_043N8_G042); break;
	case enuCrmo_053N8_N007:  memcpy(clCabPgtSegmentoN8Three::m_Crmo_053N8_N007, v_Incoming_Data, _Crmo_053N8_N007); break;
	case enuVmor_063N8_G047:  memcpy(clCabPgtSegmentoN8Three::m_Vmor_063N8_G047, v_Incoming_Data, _Vmor_063N8_G047); break;
	case enuVmul_073N8_G048:  memcpy(clCabPgtSegmentoN8Three::m_Vmul_073N8_G048, v_Incoming_Data, _Vmul_073N8_G048); break;
	case enuDtvn_083N8_G044:  memcpy(clCabPgtSegmentoN8Three::m_Dtvn_083N8_G044, v_Incoming_Data, _Dtvn_083N8_G044); break;
	case enuVpar_093N8_N006:  memcpy(clCabPgtSegmentoN8Three::m_Vpar_093N8_N006, v_Incoming_Data, _Vpar_093N8_N006); break;

	default:
		break;
	}
}
