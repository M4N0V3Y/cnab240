#include "clCabPgtSegmentoN7Three.h"

char* setCharBufferSGN7(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCabPgtSegmentoN7Three::clCabPgtSegmentoN7Three()
{
}


clCabPgtSegmentoN7Three::~clCabPgtSegmentoN7Three()
{
}

char * clCabPgtSegmentoN7Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case enuCrtb_013N7_N002:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Crtb_013N7_N002, _Crtb_013N7_N002); break;
	case enuTidc_023N7_N003:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Tidc_023N7_N003, _Tidc_023N7_N003); break;
	case enuIdct_033N7_N004:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Idct_033N7_N004, _Idct_033N7_N004); break;
	case enuIdtb_043N7_N005:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Idtb_043N7_N005, _Idtb_043N7_N005); break;
	case enuAnob_053N7_N015:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Anob_053N7_N015, _Anob_053N7_N015); break;
	case enuRnva_063N7_N016:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Rnva_063N7_N016, _Rnva_063N7_N016); break;
	case enuEstd_073N7_G036:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Estd_073N7_G036, _Estd_073N7_G036); break;
	case enuCdmn_083N7_N017:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Cdmn_083N7_N017, _Cdmn_083N7_N017); break;
	case enuPlac_093N7_N018:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Plac_093N7_N018, _Plac_093N7_N018); break;
	case enuOppg_103N7_N019:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Oppg_103N7_N019, _Oppg_103N7_N019); break;
	case enuOprt_113N7_N020:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Oprt_113N7_N020, _Oprt_113N7_N020); break;
	case enuNrnv_123N7_N016:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Nrnv_123N7_N016, _Nrnv_123N7_N016); break;
	case enuCnab_133N7_G004:  _retorno = setCharBufferSGN7(clCabPgtSegmentoN7Three::m_Cnab_133N7_G004, _Cnab_133N7_G004); break;

	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoN7Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCrtb_013N7_N002:    memcpy(clCabPgtSegmentoN7Three::m_Crtb_013N7_N002, v_Incoming_Data, _Crtb_013N7_N002); break;
	case enuTidc_023N7_N003:    memcpy(clCabPgtSegmentoN7Three::m_Tidc_023N7_N003, v_Incoming_Data, _Tidc_023N7_N003); break;
	case enuIdct_033N7_N004:    memcpy(clCabPgtSegmentoN7Three::m_Idct_033N7_N004, v_Incoming_Data, _Idct_033N7_N004); break;
	case enuIdtb_043N7_N005:    memcpy(clCabPgtSegmentoN7Three::m_Idtb_043N7_N005, v_Incoming_Data, _Idtb_043N7_N005); break;
	case enuAnob_053N7_N015:    memcpy(clCabPgtSegmentoN7Three::m_Anob_053N7_N015, v_Incoming_Data, _Anob_053N7_N015); break;
	case enuRnva_063N7_N016:    memcpy(clCabPgtSegmentoN7Three::m_Rnva_063N7_N016, v_Incoming_Data, _Rnva_063N7_N016); break;
	case enuEstd_073N7_G036:    memcpy(clCabPgtSegmentoN7Three::m_Estd_073N7_G036, v_Incoming_Data, _Estd_073N7_G036); break;
	case enuCdmn_083N7_N017:    memcpy(clCabPgtSegmentoN7Three::m_Cdmn_083N7_N017, v_Incoming_Data, _Cdmn_083N7_N017); break;
	case enuPlac_093N7_N018:    memcpy(clCabPgtSegmentoN7Three::m_Plac_093N7_N018, v_Incoming_Data, _Plac_093N7_N018); break;
	case enuOppg_103N7_N019:    memcpy(clCabPgtSegmentoN7Three::m_Oppg_103N7_N019, v_Incoming_Data, _Oppg_103N7_N019); break;
	case enuOprt_113N7_N020:    memcpy(clCabPgtSegmentoN7Three::m_Oprt_113N7_N020, v_Incoming_Data, _Oprt_113N7_N020); break;
	case enuNrnv_123N7_N016:    memcpy(clCabPgtSegmentoN7Three::m_Nrnv_123N7_N016, v_Incoming_Data, _Nrnv_123N7_N016); break;
	case enuCnab_133N7_G004:    memcpy(clCabPgtSegmentoN7Three::m_Cnab_133N7_G004, v_Incoming_Data, _Cnab_133N7_G004); break;

	default:
		break;
	}
}