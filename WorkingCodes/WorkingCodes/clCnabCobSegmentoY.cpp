#include "clCnabCobSegmentoY.h"

char* setCOBCharBufferY(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabCobSegmentoY::clCnabCobSegmentoY()
{
}


clCnabCobSegmentoY::~clCnabCobSegmentoY()
{
}

char * clCnabCobSegmentoY::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case   enuCban_013Y_G001:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Cban_013Y_G001, _Cban_013Y_G001);  break;
	case   enuLots_023Y_G002:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Lots_023Y_G002, _Lots_023Y_G002);  break;
	case   enuRgst_033Y_G003:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Rgst_033Y_G003, _Rgst_033Y_G003);  break;
	case   enuOper_043Y_G038:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Oper_043Y_G038, _Oper_043Y_G038);  break;
	case   enuSegm_053Y_G039:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Segm_053Y_G039, _Segm_053Y_G039);  break;
	case   enuCnab_063Y_G004:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Cnab_063Y_G004, _Cnab_063Y_G004);  break;
	case   enuCmov_073Y_C004:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Cmov_073Y_C004, _Cmov_073Y_C004);  break;
	case   enuRgop_083Y_G067:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Rgop_083Y_G067, _Rgop_083Y_G067);  break;
	case   enuTpem_093Y_G005:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Tpem_093Y_G005, _Tpem_093Y_G005);  break;
	case   enuCnpj_103Y_G006:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Cnpj_103Y_G006, _Cnpj_103Y_G006);  break;
	case   enuNome_113Y_C060:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Nome_113Y_C060, _Nome_113Y_C060);  break;
	case   enuLgrd_123Y_G032:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Lgrd_123Y_G032, _Lgrd_123Y_G032);  break;
	case   enuBair_133Y_G032:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Bair_133Y_G032, _Bair_133Y_G032);  break;
	case   enuNcep_143Y_G034:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Ncep_143Y_G034, _Ncep_143Y_G034);  break;
	case   enuCcep_153Y_G035:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Ccep_153Y_G035, _Ccep_153Y_G035);  break;
	case   enuCidd_163Y_G033:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Cidd_163Y_G033, _Cidd_163Y_G033);  break;
	case   enuEstd_173Y_G036:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Estd_173Y_G036, _Estd_173Y_G036);  break;
	case   enuCnab_183Y_G004:   _retorno = setCOBCharBufferY(clCnabCobSegmentoY::m_Cnab_183Y_G004, _Cnab_183Y_G004);  break;
	default:
		break;
	}
	return _retorno;
}
void clCnabCobSegmentoY::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case   enuCban_013Y_G001:     memcpy(clCnabCobSegmentoY::m_Cban_013Y_G001, v_Incoming_Data, _Cban_013Y_G001);  break;
	case   enuLots_023Y_G002:     memcpy(clCnabCobSegmentoY::m_Lots_023Y_G002, v_Incoming_Data, _Lots_023Y_G002);  break;
	case   enuRgst_033Y_G003:     memcpy(clCnabCobSegmentoY::m_Rgst_033Y_G003, v_Incoming_Data, _Rgst_033Y_G003);  break;
	case   enuOper_043Y_G038:     memcpy(clCnabCobSegmentoY::m_Oper_043Y_G038, v_Incoming_Data, _Oper_043Y_G038);  break;
	case   enuSegm_053Y_G039:     memcpy(clCnabCobSegmentoY::m_Segm_053Y_G039, v_Incoming_Data, _Segm_053Y_G039);  break;
	case   enuCnab_063Y_G004:     memcpy(clCnabCobSegmentoY::m_Cnab_063Y_G004, v_Incoming_Data, _Cnab_063Y_G004);  break;
	case   enuCmov_073Y_C004:     memcpy(clCnabCobSegmentoY::m_Cmov_073Y_C004, v_Incoming_Data, _Cmov_073Y_C004);  break;
	case   enuRgop_083Y_G067:     memcpy(clCnabCobSegmentoY::m_Rgop_083Y_G067, v_Incoming_Data, _Rgop_083Y_G067);  break;
	case   enuTpem_093Y_G005:     memcpy(clCnabCobSegmentoY::m_Tpem_093Y_G005, v_Incoming_Data, _Tpem_093Y_G005);  break;
	case   enuCnpj_103Y_G006:     memcpy(clCnabCobSegmentoY::m_Cnpj_103Y_G006, v_Incoming_Data, _Cnpj_103Y_G006);  break;
	case   enuNome_113Y_C060:     memcpy(clCnabCobSegmentoY::m_Nome_113Y_C060, v_Incoming_Data, _Nome_113Y_C060);  break;
	case   enuLgrd_123Y_G032:     memcpy(clCnabCobSegmentoY::m_Lgrd_123Y_G032, v_Incoming_Data, _Lgrd_123Y_G032);  break;
	case   enuBair_133Y_G032:     memcpy(clCnabCobSegmentoY::m_Bair_133Y_G032, v_Incoming_Data, _Bair_133Y_G032);  break;
	case   enuNcep_143Y_G034:     memcpy(clCnabCobSegmentoY::m_Ncep_143Y_G034, v_Incoming_Data, _Ncep_143Y_G034);  break;
	case   enuCcep_153Y_G035:     memcpy(clCnabCobSegmentoY::m_Ccep_153Y_G035, v_Incoming_Data, _Ccep_153Y_G035);  break;
	case   enuCidd_163Y_G033:     memcpy(clCnabCobSegmentoY::m_Cidd_163Y_G033, v_Incoming_Data, _Cidd_163Y_G033);  break;
	case   enuEstd_173Y_G036:     memcpy(clCnabCobSegmentoY::m_Estd_173Y_G036, v_Incoming_Data, _Estd_173Y_G036);  break;
	case   enuCnab_183Y_G004:     memcpy(clCnabCobSegmentoY::m_Cnab_183Y_G004, v_Incoming_Data, _Cnab_183Y_G004);  break;
	default:
		break;
	}
}
