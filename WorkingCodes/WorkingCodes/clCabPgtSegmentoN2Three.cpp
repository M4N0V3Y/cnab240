#include "clCabPgtSegmentoN2Three.h"

char* setCharBufferSGN2(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCabPgtSegmentoN2Three::clCabPgtSegmentoN2Three()
{
}


clCabPgtSegmentoN2Three::~clCabPgtSegmentoN2Three()
{
}

char * clCabPgtSegmentoN2Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{

	case enuCrtb_013N2_N002: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Crtb_013N2_N002, _Crtb_013N2_N002); break;
	case enuTidc_023N2_N003: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Tidc_023N2_N003, _Tidc_023N2_N003); break;
	case enuIdct_033N2_N004: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Idct_033N2_N004, _Idct_033N2_N004); break;
	case enuIdtb_043N2_N005: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Idtb_043N2_N005, _Idtb_043N2_N005); break;
	case enuApur_053N2_N008: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Apur_053N2_N008, _Apur_053N2_N008); break;
	case enuNref_063N2_N009: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Nref_063N2_N009, _Nref_063N2_N009); break;
	case enuVlrp_073N2_G042: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Vlrp_073N2_G042, _Vlrp_073N2_G042); break;
	case enuVmul_083N2_G048: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Vmul_083N2_G048, _Vmul_083N2_G048); break;
	case enuVjre_093N2_G047: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Vjre_093N2_G047, _Vjre_093N2_G047); break;
	case enuDtvn_103N2_G044: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Dtvn_103N2_G044, _Dtvn_103N2_G044); break;
	case enuCnab_113N2_G004: _retorno = setCharBufferSGN2(clCabPgtSegmentoN2Three::m_Cnab_113N2_G004, _Cnab_113N2_G004); break;

	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoN2Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{

	case enuCrtb_013N2_N002: memcpy(clCabPgtSegmentoN2Three::m_Crtb_013N2_N002, v_Incoming_Data, _Crtb_013N2_N002); break;
	case enuTidc_023N2_N003: memcpy(clCabPgtSegmentoN2Three::m_Tidc_023N2_N003, v_Incoming_Data, _Tidc_023N2_N003); break;
	case enuIdct_033N2_N004: memcpy(clCabPgtSegmentoN2Three::m_Idct_033N2_N004, v_Incoming_Data, _Idct_033N2_N004); break;
	case enuIdtb_043N2_N005: memcpy(clCabPgtSegmentoN2Three::m_Idtb_043N2_N005, v_Incoming_Data, _Idtb_043N2_N005); break;
	case enuApur_053N2_N008: memcpy(clCabPgtSegmentoN2Three::m_Apur_053N2_N008, v_Incoming_Data, _Apur_053N2_N008); break;
	case enuNref_063N2_N009: memcpy(clCabPgtSegmentoN2Three::m_Nref_063N2_N009, v_Incoming_Data, _Nref_063N2_N009); break;
	case enuVlrp_073N2_G042: memcpy(clCabPgtSegmentoN2Three::m_Vlrp_073N2_G042, v_Incoming_Data, _Vlrp_073N2_G042); break;
	case enuVmul_083N2_G048: memcpy(clCabPgtSegmentoN2Three::m_Vmul_083N2_G048, v_Incoming_Data, _Vmul_083N2_G048); break;
	case enuVjre_093N2_G047: memcpy(clCabPgtSegmentoN2Three::m_Vjre_093N2_G047, v_Incoming_Data, _Vjre_093N2_G047); break;
	case enuDtvn_103N2_G044: memcpy(clCabPgtSegmentoN2Three::m_Dtvn_103N2_G044, v_Incoming_Data, _Dtvn_103N2_G044); break;
	case enuCnab_113N2_G004: memcpy(clCabPgtSegmentoN2Three::m_Cnab_113N2_G004, v_Incoming_Data, _Cnab_113N2_G004); break;

	default:
		break;
	}
}