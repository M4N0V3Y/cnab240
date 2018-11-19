#include "clCnabCobSegmentoY04.h"

char* setCOBCharBufferY04(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCnabCobSegmentoY04::clCnabCobSegmentoY04()
{
}


clCnabCobSegmentoY04::~clCnabCobSegmentoY04()
{
}

char * clCnabCobSegmentoY04::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case  enuCban_014Y_G001:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Cban_014Y_G001, _Cban_014Y_G001);  break;
	case  enuLots_024Y_G002:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Lots_024Y_G002, _Lots_024Y_G002);  break;
	case  enuRgst_034Y_G003:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Rgst_034Y_G003, _Rgst_034Y_G003);  break;
	case  enuOper_044Y_G038:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Oper_044Y_G038, _Oper_044Y_G038);  break;
	case  enuSegm_054Y_G039:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Segm_054Y_G039, _Segm_054Y_G039);  break;
	case  enuCnab_064Y_G004:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Cnab_064Y_G004, _Cnab_064Y_G004);  break;
	case  enuCmov_074Y_C004:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Cmov_074Y_C004, _Cmov_074Y_C004);  break;
	case  enuRgop_084Y_G067:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Rgop_084Y_G067, _Rgop_084Y_G067);  break;
	case  enuEmal_094Y_G032:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Emal_094Y_G032, _Emal_094Y_G032);  break;
	case  enuDdcl_104Y_G032:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Ddcl_104Y_G032, _Ddcl_104Y_G032);  break;
	case  enuNcel_114Y_G032:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Ncel_114Y_G032, _Ncel_114Y_G032);  break;
	case  enuCnab_124Y_G004:   _retorno = setCOBCharBufferY04(clCnabCobSegmentoY04::m_Cnab_124Y_G004, _Cnab_124Y_G004);  break;
	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoY04::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case  enuCban_014Y_G001:   memcpy(clCnabCobSegmentoY04::m_Cban_014Y_G001, v_Incoming_Data, _Cban_014Y_G001);  break;
	case  enuLots_024Y_G002:   memcpy(clCnabCobSegmentoY04::m_Lots_024Y_G002, v_Incoming_Data, _Lots_024Y_G002);  break;
	case  enuRgst_034Y_G003:   memcpy(clCnabCobSegmentoY04::m_Rgst_034Y_G003, v_Incoming_Data, _Rgst_034Y_G003);  break;
	case  enuOper_044Y_G038:   memcpy(clCnabCobSegmentoY04::m_Oper_044Y_G038, v_Incoming_Data, _Oper_044Y_G038);  break;
	case  enuSegm_054Y_G039:   memcpy(clCnabCobSegmentoY04::m_Segm_054Y_G039, v_Incoming_Data, _Segm_054Y_G039);  break;
	case  enuCnab_064Y_G004:   memcpy(clCnabCobSegmentoY04::m_Cnab_064Y_G004, v_Incoming_Data, _Cnab_064Y_G004);  break;
	case  enuCmov_074Y_C004:   memcpy(clCnabCobSegmentoY04::m_Cmov_074Y_C004, v_Incoming_Data, _Cmov_074Y_C004);  break;
	case  enuRgop_084Y_G067:   memcpy(clCnabCobSegmentoY04::m_Rgop_084Y_G067, v_Incoming_Data, _Rgop_084Y_G067);  break;
	case  enuEmal_094Y_G032:   memcpy(clCnabCobSegmentoY04::m_Emal_094Y_G032, v_Incoming_Data, _Emal_094Y_G032);  break;
	case  enuDdcl_104Y_G032:   memcpy(clCnabCobSegmentoY04::m_Ddcl_104Y_G032, v_Incoming_Data, _Ddcl_104Y_G032);  break;
	case  enuNcel_114Y_G032:   memcpy(clCnabCobSegmentoY04::m_Ncel_114Y_G032, v_Incoming_Data, _Ncel_114Y_G032);  break;
	case  enuCnab_124Y_G004:   memcpy(clCnabCobSegmentoY04::m_Cnab_124Y_G004, v_Incoming_Data, _Cnab_124Y_G004);  break;
	default:
		break;
	}
}