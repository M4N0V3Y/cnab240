#include "clCnabCobSegmentoS.h"

char* setCOBCharBufferS(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabCobSegmentoS::clCnabCobSegmentoS()
{
	o_CnabCobSegmentoST1O2 = nullptr;
	o_CnabCobSegmentoST3 = nullptr;
}


clCnabCobSegmentoS::~clCnabCobSegmentoS()
{
}

char * clCnabCobSegmentoS::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case   enuCban_013S_G001:     _retorno = setCOBCharBufferS(clCnabCobSegmentoS::m_Cban_013S_G001, _Cban_013S_G001);  break;
	case   enuLots_023S_G002:     _retorno = setCOBCharBufferS(clCnabCobSegmentoS::m_Lots_023S_G002, _Lots_023S_G002);  break;
	case   enuRgst_033S_G003:     _retorno = setCOBCharBufferS(clCnabCobSegmentoS::m_Rgst_033S_G003, _Rgst_033S_G003);  break;
	case   enuOper_043S_G038:     _retorno = setCOBCharBufferS(clCnabCobSegmentoS::m_Oper_043S_G038, _Oper_043S_G038);  break;
	case   enuSegm_053S_G039:     _retorno = setCOBCharBufferS(clCnabCobSegmentoS::m_Segm_053S_G039, _Segm_053S_G039);  break;
	case   enuCnab_063S_G004:     _retorno = setCOBCharBufferS(clCnabCobSegmentoS::m_Cnab_063S_G004, _Cnab_063S_G004);  break;
	case   enuCmov_073S_C004:     _retorno = setCOBCharBufferS(clCnabCobSegmentoS::m_Cmov_073S_C004, _Cmov_073S_C004);  break;
	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoS::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case   enuCban_013S_G001:    memcpy(clCnabCobSegmentoS::m_Cban_013S_G001, v_Incoming_Data, _Cban_013S_G001);  break;
	case   enuLots_023S_G002:    memcpy(clCnabCobSegmentoS::m_Lots_023S_G002, v_Incoming_Data, _Lots_023S_G002);  break;
	case   enuRgst_033S_G003:    memcpy(clCnabCobSegmentoS::m_Rgst_033S_G003, v_Incoming_Data, _Rgst_033S_G003);  break;
	case   enuOper_043S_G038:    memcpy(clCnabCobSegmentoS::m_Oper_043S_G038, v_Incoming_Data, _Oper_043S_G038);  break;
	case   enuSegm_053S_G039:    memcpy(clCnabCobSegmentoS::m_Segm_053S_G039, v_Incoming_Data, _Segm_053S_G039);  break;
	case   enuCnab_063S_G004:    memcpy(clCnabCobSegmentoS::m_Cnab_063S_G004, v_Incoming_Data, _Cnab_063S_G004);  break;
	case   enuCmov_073S_C004:    memcpy(clCnabCobSegmentoS::m_Cmov_073S_C004, v_Incoming_Data, _Cmov_073S_C004);  break;
	default:
		break;
	}
}