#include "clCabPgtSegmentoNThree.h"

char* setCharBufferSGN(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCabPgtSegmentoNThree::clCabPgtSegmentoNThree()
{
}


clCabPgtSegmentoNThree::~clCabPgtSegmentoNThree()
{
}

char * clCabPgtSegmentoNThree::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{

	case enuCban_013N_G001: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Cban_013N_G001, _Cban_013N_G001); break;
	case enuLots_023N_G002: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Lots_023N_G002, _Lots_023N_G002); break;
	case enuRgst_033N_G003: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Rgst_033N_G003, _Rgst_033N_G003); break;
	case enuOper_043N_G038: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Oper_043N_G038, _Oper_043N_G038); break;
	case enuSegm_053N_G039: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Segm_053N_G039, _Segm_053N_G039); break;
	case enuTmov_063N_G060: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Tmov_063N_G060, _Tmov_063N_G060); break;
	case enuCmov_073N_G061: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Cmov_073N_G061, _Cmov_073N_G061); break;
	case enuNucl_083N_G064: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Nucl_083N_G064, _Nucl_083N_G064); break;
	case enuNubk_093N_G043: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Nubk_093N_G043, _Nubk_093N_G043); break;
	case enuNmcn_103N_G013: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Nmcn_103N_G013, _Nmcn_103N_G013); break;
	case enuDtpg_113N_P009: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Dtpg_113N_P009, _Dtpg_113N_P009); break;
	case enuVlpg_123N_P010: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Vlpg_123N_P010, _Vlpg_123N_P010); break;
	case enuInfc_133N_GNNN: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Infc_133N_GNNN, _Infc_133N_GNNN); break;
	case enuOccr_143N_G059: _retorno = setCharBufferSGN(clCabPgtSegmentoNThree::m_Occr_143N_G059, _Occr_143N_G059); break;

	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoNThree::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{

	case enuCban_013N_G001:  memcpy(clCabPgtSegmentoNThree::m_Cban_013N_G001, v_Incoming_Data, _Cban_013N_G001); break;
	case enuLots_023N_G002:  memcpy(clCabPgtSegmentoNThree::m_Lots_023N_G002, v_Incoming_Data, _Lots_023N_G002); break;
	case enuRgst_033N_G003:  memcpy(clCabPgtSegmentoNThree::m_Rgst_033N_G003, v_Incoming_Data, _Rgst_033N_G003); break;
	case enuOper_043N_G038:  memcpy(clCabPgtSegmentoNThree::m_Oper_043N_G038, v_Incoming_Data, _Oper_043N_G038); break;
	case enuSegm_053N_G039:  memcpy(clCabPgtSegmentoNThree::m_Segm_053N_G039, v_Incoming_Data, _Segm_053N_G039); break;
	case enuTmov_063N_G060:  memcpy(clCabPgtSegmentoNThree::m_Tmov_063N_G060, v_Incoming_Data, _Tmov_063N_G060); break;
	case enuCmov_073N_G061:  memcpy(clCabPgtSegmentoNThree::m_Cmov_073N_G061, v_Incoming_Data, _Cmov_073N_G061); break;
	case enuNucl_083N_G064:  memcpy(clCabPgtSegmentoNThree::m_Nucl_083N_G064, v_Incoming_Data, _Nucl_083N_G064); break;
	case enuNubk_093N_G043:  memcpy(clCabPgtSegmentoNThree::m_Nubk_093N_G043, v_Incoming_Data, _Nubk_093N_G043); break;
	case enuNmcn_103N_G013:  memcpy(clCabPgtSegmentoNThree::m_Nmcn_103N_G013, v_Incoming_Data, _Nmcn_103N_G013); break;
	case enuDtpg_113N_P009:  memcpy(clCabPgtSegmentoNThree::m_Dtpg_113N_P009, v_Incoming_Data, _Dtpg_113N_P009); break;
	case enuVlpg_123N_P010:  memcpy(clCabPgtSegmentoNThree::m_Vlpg_123N_P010, v_Incoming_Data, _Vlpg_123N_P010); break;
	case enuInfc_133N_GNNN:  memcpy(clCabPgtSegmentoNThree::m_Infc_133N_GNNN, v_Incoming_Data, _Infc_133N_GNNN); break;
	case enuOccr_143N_G059:  memcpy(clCabPgtSegmentoNThree::m_Occr_143N_G059, v_Incoming_Data, _Occr_143N_G059); break;

	default:
		break;
	}
}
