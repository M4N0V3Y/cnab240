#include "clCnabCobSegmentoY52.h"

char* setCOBCharBufferY52(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabCobSegmentoY52::clCnabCobSegmentoY52()
{
}


clCnabCobSegmentoY52::~clCnabCobSegmentoY52()
{
}

char * clCnabCobSegmentoY52::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case  enuCban_013Y52_G001:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Cban_013Y52_G001, _Cban_013Y52_G001);  break;
	case  enuLots_023Y52_G002:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Lots_023Y52_G002, _Lots_023Y52_G002);  break;
	case  enuRgst_033Y52_G003:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Rgst_033Y52_G003, _Rgst_033Y52_G003);  break;
	case  enuOper_043Y52_G038:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Oper_043Y52_G038, _Oper_043Y52_G038);  break;
	case  enuSegm_053Y52_G039:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Segm_053Y52_G039, _Segm_053Y52_G039);  break;
	case  enuCnab_063Y52_G004:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Cnab_063Y52_G004, _Cnab_063Y52_G004);  break;
	case  enuCmov_073Y52_C004:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Cmov_073Y52_C004, _Cmov_073Y52_C004);  break;
	case  enuRgop_083Y52_G067:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Rgop_083Y52_G067, _Rgop_083Y52_G067);  break;
	case  enuNf01_093Y52_C067:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Nf01_093Y52_C067, _Nf01_093Y52_C067);  break;
	case  enuVlnf_103Y52_C068:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Vlnf_103Y52_C068, _Vlnf_103Y52_C068);  break;
	case  enuDtem_113Y52_C069:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Dtem_113Y52_C069, _Dtem_113Y52_C069);  break;
	case  enuDanf_123Y52_C083:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Danf_123Y52_C083, _Danf_123Y52_C083);  break;
	case  enuNf02_133Y52_C067:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Nf02_133Y52_C067, _Nf02_133Y52_C067);  break;
	case  enuVlnf_143Y52_C068:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Vlnf_143Y52_C068, _Vlnf_143Y52_C068);  break;
	case  enuDtem_153Y52_C069:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Dtem_153Y52_C069, _Dtem_153Y52_C069);  break;
	case  enuDanf_163Y52_C083:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Danf_163Y52_C083, _Danf_163Y52_C083);  break;
	case  enuCnab_173Y52_G004:    _retorno = setCOBCharBufferY52(clCnabCobSegmentoY52::m_Cnab_173Y52_G004, _Cnab_173Y52_G004);  break;

	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoY52::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case  enuCban_013Y52_G001:     memcpy(clCnabCobSegmentoY52::m_Cban_013Y52_G001, v_Incoming_Data, _Cban_013Y52_G001);  break;
	case  enuLots_023Y52_G002:     memcpy(clCnabCobSegmentoY52::m_Lots_023Y52_G002, v_Incoming_Data, _Lots_023Y52_G002);  break;
	case  enuRgst_033Y52_G003:     memcpy(clCnabCobSegmentoY52::m_Rgst_033Y52_G003, v_Incoming_Data, _Rgst_033Y52_G003);  break;
	case  enuOper_043Y52_G038:     memcpy(clCnabCobSegmentoY52::m_Oper_043Y52_G038, v_Incoming_Data, _Oper_043Y52_G038);  break;
	case  enuSegm_053Y52_G039:     memcpy(clCnabCobSegmentoY52::m_Segm_053Y52_G039, v_Incoming_Data, _Segm_053Y52_G039);  break;
	case  enuCnab_063Y52_G004:     memcpy(clCnabCobSegmentoY52::m_Cnab_063Y52_G004, v_Incoming_Data, _Cnab_063Y52_G004);  break;
	case  enuCmov_073Y52_C004:     memcpy(clCnabCobSegmentoY52::m_Cmov_073Y52_C004, v_Incoming_Data, _Cmov_073Y52_C004);  break;
	case  enuRgop_083Y52_G067:     memcpy(clCnabCobSegmentoY52::m_Rgop_083Y52_G067, v_Incoming_Data, _Rgop_083Y52_G067);  break;
	case  enuNf01_093Y52_C067:     memcpy(clCnabCobSegmentoY52::m_Nf01_093Y52_C067, v_Incoming_Data, _Nf01_093Y52_C067);  break;
	case  enuVlnf_103Y52_C068:     memcpy(clCnabCobSegmentoY52::m_Vlnf_103Y52_C068, v_Incoming_Data, _Vlnf_103Y52_C068);  break;
	case  enuDtem_113Y52_C069:     memcpy(clCnabCobSegmentoY52::m_Dtem_113Y52_C069, v_Incoming_Data, _Dtem_113Y52_C069);  break;
	case  enuDanf_123Y52_C083:     memcpy(clCnabCobSegmentoY52::m_Danf_123Y52_C083, v_Incoming_Data, _Danf_123Y52_C083);  break;
	case  enuNf02_133Y52_C067:     memcpy(clCnabCobSegmentoY52::m_Nf02_133Y52_C067, v_Incoming_Data, _Nf02_133Y52_C067);  break;
	case  enuVlnf_143Y52_C068:     memcpy(clCnabCobSegmentoY52::m_Vlnf_143Y52_C068, v_Incoming_Data, _Vlnf_143Y52_C068);  break;
	case  enuDtem_153Y52_C069:     memcpy(clCnabCobSegmentoY52::m_Dtem_153Y52_C069, v_Incoming_Data, _Dtem_153Y52_C069);  break;
	case  enuDanf_163Y52_C083:     memcpy(clCnabCobSegmentoY52::m_Danf_163Y52_C083, v_Incoming_Data, _Danf_163Y52_C083);  break;
	case  enuCnab_173Y52_G004:     memcpy(clCnabCobSegmentoY52::m_Cnab_173Y52_G004, v_Incoming_Data, _Cnab_173Y52_G004);  break;

	default:
		break;
	}
}