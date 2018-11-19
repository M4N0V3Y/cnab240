#include "clCnabCobSegmentoY51.h"

char* setCOBCharBufferY51(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabCobSegmentoY51::clCnabCobSegmentoY51()
{
}


clCnabCobSegmentoY51::~clCnabCobSegmentoY51()
{
}

char * clCnabCobSegmentoY51::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case  enuCban_013Y51_G001:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Cban_013Y51_G001, _Cban_013Y51_G001);  break;
	case  enuLots_023Y51_G002:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Lots_023Y51_G002, _Lots_023Y51_G002);  break;
	case  enuRgst_033Y51_G003:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Rgst_033Y51_G003, _Rgst_033Y51_G003);  break;
	case  enuOper_043Y51_G038:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Oper_043Y51_G038, _Oper_043Y51_G038);  break;
	case  enuSegm_053Y51_G039:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Segm_053Y51_G039, _Segm_053Y51_G039);  break;
	case  enuCnab_063Y51_G004:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Cnab_063Y51_G004, _Cnab_063Y51_G004);  break;
	case  enuCmov_073Y51_C004:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Cmov_073Y51_C004, _Cmov_073Y51_C004);  break;
	case  enuRgop_083Y51_G067:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Rgop_083Y51_G067, _Rgop_083Y51_G067);  break;
	case  enuNf01_093Y51_C067:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Nf01_093Y51_C067, _Nf01_093Y51_C067);  break;
	case  enuVlnf_103Y51_C068:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Vlnf_103Y51_C068, _Vlnf_103Y51_C068);  break;
	case  enuDtem_113Y51_C069:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Dtem_113Y51_C069, _Dtem_113Y51_C069);  break;
	case  enuNf02_123Y51_C067:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Nf02_123Y51_C067, _Nf02_123Y51_C067);  break;
	case  enuVlnf_133Y51_C068:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Vlnf_133Y51_C068, _Vlnf_133Y51_C068);  break;
	case  enuDtem_143Y51_C069:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Dtem_143Y51_C069, _Dtem_143Y51_C069);  break;
	case  enuNf03_153Y51_C067:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Nf03_153Y51_C067, _Nf03_153Y51_C067);  break;
	case  enuVlnf_163Y51_C068:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Vlnf_163Y51_C068, _Vlnf_163Y51_C068);  break;
	case  enuDtem_173Y51_C069:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Dtem_173Y51_C069, _Dtem_173Y51_C069);  break;
	case  enuNf04_183Y51_C067:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Nf04_183Y51_C067, _Nf04_183Y51_C067);  break;
	case  enuVlnf_193Y51_C068:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Vlnf_193Y51_C068, _Vlnf_193Y51_C068);  break;
	case  enuDtem_203Y51_C069:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Dtem_203Y51_C069, _Dtem_203Y51_C069);  break;
	case  enuNf05_213Y51_C067:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Nf05_213Y51_C067, _Nf05_213Y51_C067);  break;
	case  enuVlnf_223Y51_C068:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Vlnf_223Y51_C068, _Vlnf_223Y51_C068);  break;
	case  enuDtem_233Y51_C069:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Dtem_233Y51_C069, _Dtem_233Y51_C069);  break;
	case  enuCnab_243Y51_G004:   _retorno = setCOBCharBufferY51(clCnabCobSegmentoY51::m_Cnab_243Y51_G004, _Cnab_243Y51_G004);  break;
	default:
		break;
	}
	return _retorno;
}



void clCnabCobSegmentoY51::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case  enuCban_013Y51_G001:   memcpy(clCnabCobSegmentoY51::m_Cban_013Y51_G001, v_Incoming_Data, _Cban_013Y51_G001);  break;
	case  enuLots_023Y51_G002:   memcpy(clCnabCobSegmentoY51::m_Lots_023Y51_G002, v_Incoming_Data, _Lots_023Y51_G002);  break;
	case  enuRgst_033Y51_G003:   memcpy(clCnabCobSegmentoY51::m_Rgst_033Y51_G003, v_Incoming_Data, _Rgst_033Y51_G003);  break;
	case  enuOper_043Y51_G038:   memcpy(clCnabCobSegmentoY51::m_Oper_043Y51_G038, v_Incoming_Data, _Oper_043Y51_G038);  break;
	case  enuSegm_053Y51_G039:   memcpy(clCnabCobSegmentoY51::m_Segm_053Y51_G039, v_Incoming_Data, _Segm_053Y51_G039);  break;
	case  enuCnab_063Y51_G004:   memcpy(clCnabCobSegmentoY51::m_Cnab_063Y51_G004, v_Incoming_Data, _Cnab_063Y51_G004);  break;
	case  enuCmov_073Y51_C004:   memcpy(clCnabCobSegmentoY51::m_Cmov_073Y51_C004, v_Incoming_Data, _Cmov_073Y51_C004);  break;
	case  enuRgop_083Y51_G067:   memcpy(clCnabCobSegmentoY51::m_Rgop_083Y51_G067, v_Incoming_Data, _Rgop_083Y51_G067);  break;
	case  enuNf01_093Y51_C067:   memcpy(clCnabCobSegmentoY51::m_Nf01_093Y51_C067, v_Incoming_Data, _Nf01_093Y51_C067);  break;
	case  enuVlnf_103Y51_C068:   memcpy(clCnabCobSegmentoY51::m_Vlnf_103Y51_C068, v_Incoming_Data, _Vlnf_103Y51_C068);  break;
	case  enuDtem_113Y51_C069:   memcpy(clCnabCobSegmentoY51::m_Dtem_113Y51_C069, v_Incoming_Data, _Dtem_113Y51_C069);  break;
	case  enuNf02_123Y51_C067:   memcpy(clCnabCobSegmentoY51::m_Nf02_123Y51_C067, v_Incoming_Data, _Nf02_123Y51_C067);  break;
	case  enuVlnf_133Y51_C068:   memcpy(clCnabCobSegmentoY51::m_Vlnf_133Y51_C068, v_Incoming_Data, _Vlnf_133Y51_C068);  break;
	case  enuDtem_143Y51_C069:   memcpy(clCnabCobSegmentoY51::m_Dtem_143Y51_C069, v_Incoming_Data, _Dtem_143Y51_C069);  break;
	case  enuNf03_153Y51_C067:   memcpy(clCnabCobSegmentoY51::m_Nf03_153Y51_C067, v_Incoming_Data, _Nf03_153Y51_C067);  break;
	case  enuVlnf_163Y51_C068:   memcpy(clCnabCobSegmentoY51::m_Vlnf_163Y51_C068, v_Incoming_Data, _Vlnf_163Y51_C068);  break;
	case  enuDtem_173Y51_C069:   memcpy(clCnabCobSegmentoY51::m_Dtem_173Y51_C069, v_Incoming_Data, _Dtem_173Y51_C069);  break;
	case  enuNf04_183Y51_C067:   memcpy(clCnabCobSegmentoY51::m_Nf04_183Y51_C067, v_Incoming_Data, _Nf04_183Y51_C067);  break;
	case  enuVlnf_193Y51_C068:   memcpy(clCnabCobSegmentoY51::m_Vlnf_193Y51_C068, v_Incoming_Data, _Vlnf_193Y51_C068);  break;
	case  enuDtem_203Y51_C069:   memcpy(clCnabCobSegmentoY51::m_Dtem_203Y51_C069, v_Incoming_Data, _Dtem_203Y51_C069);  break;
	case  enuNf05_213Y51_C067:   memcpy(clCnabCobSegmentoY51::m_Nf05_213Y51_C067, v_Incoming_Data, _Nf05_213Y51_C067);  break;
	case  enuVlnf_223Y51_C068:   memcpy(clCnabCobSegmentoY51::m_Vlnf_223Y51_C068, v_Incoming_Data, _Vlnf_223Y51_C068);  break;
	case  enuDtem_233Y51_C069:   memcpy(clCnabCobSegmentoY51::m_Dtem_233Y51_C069, v_Incoming_Data, _Dtem_233Y51_C069);  break;
	case  enuCnab_243Y51_G004:   memcpy(clCnabCobSegmentoY51::m_Cnab_243Y51_G004, v_Incoming_Data, _Cnab_243Y51_G004);  break;

	default:
		break;
	}
}
