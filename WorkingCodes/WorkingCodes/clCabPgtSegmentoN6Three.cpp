#include "clCabPgtSegmentoN6Three.h"

char* setCharBufferSGN6(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}



clCabPgtSegmentoN6Three::clCabPgtSegmentoN6Three()
{
}


clCabPgtSegmentoN6Three::~clCabPgtSegmentoN6Three()
{
}

char * clCabPgtSegmentoN6Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case  enuCrtb_013N6_N002: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Crtb_013N6_N002, _Crtb_013N6_N002);  break;
	case  enuTidc_023N6_N003: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Tidc_023N6_N003, _Tidc_023N6_N003);  break;
	case  enuIdct_033N6_N004: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Idct_033N6_N004, _Idct_033N6_N004);  break;
	case  enuIdtb_043N6_N005: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Idtb_043N6_N005, _Idtb_043N6_N005);  break;
	case  enuAnob_053N6_N015: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Anob_053N6_N015, _Anob_053N6_N015);  break;
	case  enuRnva_063N6_N016: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Rnva_063N6_N016, _Rnva_063N6_N016);  break;
	case  enuEstd_073N6_G036: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Estd_073N6_G036, _Estd_073N6_G036);  break;
	case  enuCdmn_083N6_N017: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Cdmn_083N6_N017, _Cdmn_083N6_N017);  break;
	case  enuPlac_093N6_N018: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Plac_093N6_N018, _Plac_093N6_N018);  break;
	case  enuOppg_103N6_N019: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Oppg_103N6_N019, _Oppg_103N6_N019);  break;
	case  enuNrnv_113N6_N016: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Nrnv_113N6_N016, _Nrnv_113N6_N016);  break;
	case  enuCnab_123N6_G004: _retorno = setCharBufferSGN6(clCabPgtSegmentoN6Three::m_Cnab_123N6_G004, _Cnab_123N6_G004);  break;
	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoN6Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case  enuCrtb_013N6_N002:   memcpy(clCabPgtSegmentoN6Three::m_Crtb_013N6_N002, v_Incoming_Data, _Crtb_013N6_N002);  break;
	case  enuTidc_023N6_N003:   memcpy(clCabPgtSegmentoN6Three::m_Tidc_023N6_N003, v_Incoming_Data, _Tidc_023N6_N003);  break;
	case  enuIdct_033N6_N004:   memcpy(clCabPgtSegmentoN6Three::m_Idct_033N6_N004, v_Incoming_Data, _Idct_033N6_N004);  break;
	case  enuIdtb_043N6_N005:   memcpy(clCabPgtSegmentoN6Three::m_Idtb_043N6_N005, v_Incoming_Data, _Idtb_043N6_N005);  break;
	case  enuAnob_053N6_N015:   memcpy(clCabPgtSegmentoN6Three::m_Anob_053N6_N015, v_Incoming_Data, _Anob_053N6_N015);  break;
	case  enuRnva_063N6_N016:   memcpy(clCabPgtSegmentoN6Three::m_Rnva_063N6_N016, v_Incoming_Data, _Rnva_063N6_N016);  break;
	case  enuEstd_073N6_G036:   memcpy(clCabPgtSegmentoN6Three::m_Estd_073N6_G036, v_Incoming_Data, _Estd_073N6_G036);  break;
	case  enuCdmn_083N6_N017:   memcpy(clCabPgtSegmentoN6Three::m_Cdmn_083N6_N017, v_Incoming_Data, _Cdmn_083N6_N017);  break;
	case  enuPlac_093N6_N018:   memcpy(clCabPgtSegmentoN6Three::m_Plac_093N6_N018, v_Incoming_Data, _Plac_093N6_N018);  break;
	case  enuOppg_103N6_N019:   memcpy(clCabPgtSegmentoN6Three::m_Oppg_103N6_N019, v_Incoming_Data, _Oppg_103N6_N019);  break;
	case  enuNrnv_113N6_N016:   memcpy(clCabPgtSegmentoN6Three::m_Nrnv_113N6_N016, v_Incoming_Data, _Nrnv_113N6_N016);  break;
	case  enuCnab_123N6_G004:   memcpy(clCabPgtSegmentoN6Three::m_Cnab_123N6_G004, v_Incoming_Data, _Cnab_123N6_G004);  break;

	default:
		break;
	}
}
