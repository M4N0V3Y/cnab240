#include "clCabPgtSegmentoN4Three.h"

char* setCharBufferSGN4(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCabPgtSegmentoN4Three::clCabPgtSegmentoN4Three()
{
}


clCabPgtSegmentoN4Three::~clCabPgtSegmentoN4Three()
{
}

char * clCabPgtSegmentoN4Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case enuCrtb_013N4_N002: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Crtb_013N4_N002, _Crtb_013N4_N002); break;
	case enuTidc_023N4_N003: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Tidc_023N4_N003, _Tidc_023N4_N003); break;
	case enuIdct_033N4_N004: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Idct_033N4_N004, _Idct_033N4_N004); break;
	case enuIdtb_043N4_N005: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Idtb_043N4_N005, _Idtb_043N4_N005); break;
	case enuDtvn_053N4_G044: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Dtvn_053N4_G044, _Dtvn_053N4_G044); break;
	case enuIecm_063N4_N012: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Iecm_063N4_N012, _Iecm_063N4_N012); break;
	case enuDvat_073N4_N013: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Dvat_073N4_N013, _Dvat_073N4_N013); break;
	case enuRefr_083N4_N006: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Refr_083N4_N006, _Refr_083N4_N006); break;
	case enuNnot_093N4_N014: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Nnot_093N4_N014, _Nnot_093N4_N014); break;
	case enuVlrc_103N4_G042: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Vlrc_103N4_G042, _Vlrc_103N4_G042); break;
	case enuVjre_113N4_G047: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Vjre_113N4_G047, _Vjre_113N4_G047); break;
	case enuVmul_123N4_G048: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Vmul_123N4_G048, _Vmul_123N4_G048); break;
	case enuCnab_133N4_G004: _retorno = setCharBufferSGN4(clCabPgtSegmentoN4Three::m_Cnab_133N4_G004, _Cnab_133N4_G004); break;
	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoN4Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCrtb_013N4_N002:   memcpy(clCabPgtSegmentoN4Three::m_Crtb_013N4_N002, v_Incoming_Data, _Crtb_013N4_N002); break;
	case enuTidc_023N4_N003:   memcpy(clCabPgtSegmentoN4Three::m_Tidc_023N4_N003, v_Incoming_Data, _Tidc_023N4_N003); break;
	case enuIdct_033N4_N004:   memcpy(clCabPgtSegmentoN4Three::m_Idct_033N4_N004, v_Incoming_Data, _Idct_033N4_N004); break;
	case enuIdtb_043N4_N005:   memcpy(clCabPgtSegmentoN4Three::m_Idtb_043N4_N005, v_Incoming_Data, _Idtb_043N4_N005); break;
	case enuDtvn_053N4_G044:   memcpy(clCabPgtSegmentoN4Three::m_Dtvn_053N4_G044, v_Incoming_Data, _Dtvn_053N4_G044); break;
	case enuIecm_063N4_N012:   memcpy(clCabPgtSegmentoN4Three::m_Iecm_063N4_N012, v_Incoming_Data, _Iecm_063N4_N012); break;
	case enuDvat_073N4_N013:   memcpy(clCabPgtSegmentoN4Three::m_Dvat_073N4_N013, v_Incoming_Data, _Dvat_073N4_N013); break;
	case enuRefr_083N4_N006:   memcpy(clCabPgtSegmentoN4Three::m_Refr_083N4_N006, v_Incoming_Data, _Refr_083N4_N006); break;
	case enuNnot_093N4_N014:   memcpy(clCabPgtSegmentoN4Three::m_Nnot_093N4_N014, v_Incoming_Data, _Nnot_093N4_N014); break;
	case enuVlrc_103N4_G042:   memcpy(clCabPgtSegmentoN4Three::m_Vlrc_103N4_G042, v_Incoming_Data, _Vlrc_103N4_G042); break;
	case enuVjre_113N4_G047:   memcpy(clCabPgtSegmentoN4Three::m_Vjre_113N4_G047, v_Incoming_Data, _Vjre_113N4_G047); break;
	case enuVmul_123N4_G048:   memcpy(clCabPgtSegmentoN4Three::m_Vmul_123N4_G048, v_Incoming_Data, _Vmul_123N4_G048); break;
	case enuCnab_133N4_G004:   memcpy(clCabPgtSegmentoN4Three::m_Cnab_133N4_G004, v_Incoming_Data, _Cnab_133N4_G004); break;
	default:
		break;
	}
}
