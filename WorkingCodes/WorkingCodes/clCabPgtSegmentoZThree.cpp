#include "clCabPgtSegmentoZThree.h"

char* setCharBufferSGZ(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCabPgtSegmentoZThree::clCabPgtSegmentoZThree()
{
}


clCabPgtSegmentoZThree::~clCabPgtSegmentoZThree()
{
}

char * clCabPgtSegmentoZThree::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos) {
	case enuCban_013Z_G001:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Cban_013Z_G001, _Cban_013Z_G001);   break;
	case enuLots_023Z_G002:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Lots_023Z_G002, _Lots_023Z_G002);   break;
	case enuRgst_033Z_G003:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Rgst_033Z_G003, _Rgst_033Z_G003);   break;
	case enuOper_043Z_G038:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Oper_043Z_G038, _Oper_043Z_G038);   break;
	case enuSegm_053Z_G039:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Segm_053Z_G039, _Segm_053Z_G039);   break;
	case enuAutt_063Z_Z001:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Autt_063Z_Z001, _Autt_063Z_Z001);   break;
	case enuCbnk_083Z_Z002:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Cbnk_083Z_Z002, _Cbnk_083Z_Z002);   break;
	case enuRsrv_093Z_G004:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Rsrv_093Z_G004, _Rsrv_093Z_G004);   break;
	case enuOccr_103Z_G059:  _retorno = setCharBufferSGZ(clCabPgtSegmentoZThree::m_Occr_103Z_G059, _Occr_103Z_G059);   break;
	default:
		break;
	}
	return _retorno;
}


void clCabPgtSegmentoZThree::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos) {
	case enuCban_013Z_G001:   memcpy(clCabPgtSegmentoZThree::m_Cban_013Z_G001, v_Incoming_Data, _Cban_013Z_G001);   break;
	case enuLots_023Z_G002:   memcpy(clCabPgtSegmentoZThree::m_Lots_023Z_G002, v_Incoming_Data, _Lots_023Z_G002);   break;
	case enuRgst_033Z_G003:   memcpy(clCabPgtSegmentoZThree::m_Rgst_033Z_G003, v_Incoming_Data, _Rgst_033Z_G003);   break;
	case enuOper_043Z_G038:   memcpy(clCabPgtSegmentoZThree::m_Oper_043Z_G038, v_Incoming_Data, _Oper_043Z_G038);   break;
	case enuSegm_053Z_G039:   memcpy(clCabPgtSegmentoZThree::m_Segm_053Z_G039, v_Incoming_Data, _Segm_053Z_G039);   break;
	case enuAutt_063Z_Z001:   memcpy(clCabPgtSegmentoZThree::m_Autt_063Z_Z001, v_Incoming_Data, _Autt_063Z_Z001);   break;
	case enuCbnk_083Z_Z002:   memcpy(clCabPgtSegmentoZThree::m_Cbnk_083Z_Z002, v_Incoming_Data, _Cbnk_083Z_Z002);   break;
	case enuRsrv_093Z_G004:   memcpy(clCabPgtSegmentoZThree::m_Rsrv_093Z_G004, v_Incoming_Data, _Rsrv_093Z_G004);   break;
	case enuOccr_103Z_G059:   memcpy(clCabPgtSegmentoZThree::m_Occr_103Z_G059, v_Incoming_Data, _Occr_103Z_G059);   break;

	default:
		break;
	}

}
