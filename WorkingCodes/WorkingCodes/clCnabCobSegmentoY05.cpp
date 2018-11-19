#include "clCnabCobSegmentoY05.h"

char* setCOBCharBufferY05(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCnabCobSegmentoY05::clCnabCobSegmentoY05()
{
}


clCnabCobSegmentoY05::~clCnabCobSegmentoY05()
{
}

char * clCnabCobSegmentoY05::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case   enuCban_015Y_G001:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cban_015Y_G001, _Cban_015Y_G001);  break;
	case   enuLots_025Y_G002:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Lots_025Y_G002, _Lots_025Y_G002);  break;
	case   enuRgst_035Y_G003:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Rgst_035Y_G003, _Rgst_035Y_G003);  break;
	case   enuOper_045Y_G038:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Oper_045Y_G038, _Oper_045Y_G038);  break;
	case   enuSegm_055Y_G039:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Segm_055Y_G039, _Segm_055Y_G039);  break;
	case   enuCnab_065Y_G004:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cnab_065Y_G004, _Cnab_065Y_G004);  break;
	case   enuCmov_075Y_C044:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cmov_075Y_C044, _Cmov_075Y_C044);  break;
	case   enuRgop_085Y_G067:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Rgop_085Y_G067, _Rgop_085Y_G067);  break;
	case   enuCmc7_095Y_C076:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cmc7_095Y_C076, _Cmc7_095Y_C076);  break;
	case   enuCmc7_105Y_C076:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cmc7_105Y_C076, _Cmc7_105Y_C076);  break;
	case   enuCmc7_115Y_C076:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cmc7_115Y_C076, _Cmc7_115Y_C076);  break;
	case   enuCmc7_125Y_C076:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cmc7_125Y_C076, _Cmc7_125Y_C076);  break;
	case   enuCmc7_135Y_C076:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cmc7_135Y_C076, _Cmc7_135Y_C076);  break;
	case   enuCmc7_145Y_C076:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cmc7_145Y_C076, _Cmc7_145Y_C076);  break;
	case   enuCnab_155Y_G004:  _retorno = setCOBCharBufferY05(clCnabCobSegmentoY05::m_Cnab_155Y_G004, _Cnab_155Y_G004);  break;

	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoY05::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{

	case   enuCban_015Y_G001:     memcpy(clCnabCobSegmentoY05::m_Cban_015Y_G001, v_Incoming_Data, _Cban_015Y_G001);  break;
	case   enuLots_025Y_G002:     memcpy(clCnabCobSegmentoY05::m_Lots_025Y_G002, v_Incoming_Data, _Lots_025Y_G002);  break;
	case   enuRgst_035Y_G003:     memcpy(clCnabCobSegmentoY05::m_Rgst_035Y_G003, v_Incoming_Data, _Rgst_035Y_G003);  break;
	case   enuOper_045Y_G038:     memcpy(clCnabCobSegmentoY05::m_Oper_045Y_G038, v_Incoming_Data, _Oper_045Y_G038);  break;
	case   enuSegm_055Y_G039:     memcpy(clCnabCobSegmentoY05::m_Segm_055Y_G039, v_Incoming_Data, _Segm_055Y_G039);  break;
	case   enuCnab_065Y_G004:     memcpy(clCnabCobSegmentoY05::m_Cnab_065Y_G004, v_Incoming_Data, _Cnab_065Y_G004);  break;
	case   enuCmov_075Y_C044:     memcpy(clCnabCobSegmentoY05::m_Cmov_075Y_C044, v_Incoming_Data, _Cmov_075Y_C044);  break;
	case   enuRgop_085Y_G067:     memcpy(clCnabCobSegmentoY05::m_Rgop_085Y_G067, v_Incoming_Data, _Rgop_085Y_G067);  break;
	case   enuCmc7_095Y_C076:     memcpy(clCnabCobSegmentoY05::m_Cmc7_095Y_C076, v_Incoming_Data, _Cmc7_095Y_C076);  break;
	case   enuCmc7_105Y_C076:     memcpy(clCnabCobSegmentoY05::m_Cmc7_105Y_C076, v_Incoming_Data, _Cmc7_105Y_C076);  break;
	case   enuCmc7_115Y_C076:     memcpy(clCnabCobSegmentoY05::m_Cmc7_115Y_C076, v_Incoming_Data, _Cmc7_115Y_C076);  break;
	case   enuCmc7_125Y_C076:     memcpy(clCnabCobSegmentoY05::m_Cmc7_125Y_C076, v_Incoming_Data, _Cmc7_125Y_C076);  break;
	case   enuCmc7_135Y_C076:     memcpy(clCnabCobSegmentoY05::m_Cmc7_135Y_C076, v_Incoming_Data, _Cmc7_135Y_C076);  break;
	case   enuCmc7_145Y_C076:     memcpy(clCnabCobSegmentoY05::m_Cmc7_145Y_C076, v_Incoming_Data, _Cmc7_145Y_C076);  break;
	case   enuCnab_155Y_G004:     memcpy(clCnabCobSegmentoY05::m_Cnab_155Y_G004, v_Incoming_Data, _Cnab_155Y_G004);  break;

	default:
		break;
	}
}
