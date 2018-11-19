#include "ClCabPgtSegmentoOThree.h"

char* setCharBufferSGO(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

ClCabPgtSegmentoOThree::ClCabPgtSegmentoOThree()
{
}


ClCabPgtSegmentoOThree::~ClCabPgtSegmentoOThree()
{
}

char * ClCabPgtSegmentoOThree::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case enuCban_013O_G001: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Cban_013O_G001, _Cban_013O_G001); 
		break;
	case enuLots_023O_G002: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Lots_023O_G002, _Lots_023O_G002); 
		break;
	case enuRgst_033O_G003: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Rgst_033O_G003, _Rgst_033O_G003); 
		break;
	case enuOper_043O_G038: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Oper_043O_G038, _Oper_043O_G038); 
		break;
	case enuSegm_053O_G039: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Segm_053O_G039, _Segm_053O_G039); 
		break;
	case enuTmov_063O_G060: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Tmov_063O_G060, _Tmov_063O_G060); 
		break;
	case enuCmov_073O_G061: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Cmov_073O_G061, _Cmov_073O_G061); 
		break;
	case enuBarr_083O_N001: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Barr_083O_N001, _Barr_083O_N001); 
		break;
	case enuNmor_093O_G013: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Nmor_093O_G013, _Nmor_093O_G013); 
		break;
	case enuDtvn_103O_G044: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Dtvn_103O_G044, _Dtvn_103O_G044); 
		break;
	case enuDtpg_113O_P009: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Dtpg_113O_P009, _Dtpg_113O_P009); 
		break;
	case enuVlpg_123O_P004: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Vlpg_123O_P004, _Vlpg_123O_P004); 
		break;
	case enuNucl_133O_G064: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Nucl_133O_G064, _Nucl_133O_G064); 
		break;
	case enuNubk_143O_G043: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Nubk_143O_G043, _Nubk_143O_G043); 
		break;
	case enuCnab_153O_G004: 
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Cnab_153O_G004, _Cnab_153O_G004); 
		break;
	case enuOccr_163O_G059:
		_retorno = setCharBufferSGO(ClCabPgtSegmentoOThree::m_Occr_163O_G059, _Occr_163O_G059);
		break;
	default:
		break;
	}
	return _retorno;
}

void ClCabPgtSegmentoOThree::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCban_013O_G001:  
		memcpy(ClCabPgtSegmentoOThree::m_Cban_013O_G001, v_Incoming_Data, _Cban_013O_G001); 
		break;
	case enuLots_023O_G002:  
		memcpy(ClCabPgtSegmentoOThree::m_Lots_023O_G002, v_Incoming_Data, _Lots_023O_G002); 
		break;
	case enuRgst_033O_G003:  
		memcpy(ClCabPgtSegmentoOThree::m_Rgst_033O_G003, v_Incoming_Data, _Rgst_033O_G003); 
		break;
	case enuOper_043O_G038:  
		memcpy(ClCabPgtSegmentoOThree::m_Oper_043O_G038, v_Incoming_Data, _Oper_043O_G038); 
		break;
	case enuSegm_053O_G039:  
		memcpy(ClCabPgtSegmentoOThree::m_Segm_053O_G039, v_Incoming_Data, _Segm_053O_G039); 
		break;
	case enuTmov_063O_G060:  
		memcpy(ClCabPgtSegmentoOThree::m_Tmov_063O_G060, v_Incoming_Data, _Tmov_063O_G060); 
		break;
	case enuCmov_073O_G061:  
		memcpy(ClCabPgtSegmentoOThree::m_Cmov_073O_G061, v_Incoming_Data, _Cmov_073O_G061); 
		break;
	case enuBarr_083O_N001:  
		memcpy(ClCabPgtSegmentoOThree::m_Barr_083O_N001, v_Incoming_Data, _Barr_083O_N001); 
		break;
	case enuNmor_093O_G013:  
		memcpy(ClCabPgtSegmentoOThree::m_Nmor_093O_G013, v_Incoming_Data, _Nmor_093O_G013); 
		break;
	case enuDtvn_103O_G044:  
		memcpy(ClCabPgtSegmentoOThree::m_Dtvn_103O_G044, v_Incoming_Data, _Dtvn_103O_G044); 
		break;
	case enuDtpg_113O_P009:  
		memcpy(ClCabPgtSegmentoOThree::m_Dtpg_113O_P009, v_Incoming_Data, _Dtpg_113O_P009); 
		break;
	case enuVlpg_123O_P004:  
		memcpy(ClCabPgtSegmentoOThree::m_Vlpg_123O_P004, v_Incoming_Data, _Vlpg_123O_P004); 
		break;
	case enuNucl_133O_G064:  
		memcpy(ClCabPgtSegmentoOThree::m_Nucl_133O_G064, v_Incoming_Data, _Nucl_133O_G064); 
		break;
	case enuNubk_143O_G043:  
		memcpy(ClCabPgtSegmentoOThree::m_Nubk_143O_G043, v_Incoming_Data, _Nubk_143O_G043); 
		break;
	case enuCnab_153O_G004:  
		memcpy(ClCabPgtSegmentoOThree::m_Cnab_153O_G004, v_Incoming_Data, _Cnab_153O_G004); 
		break;
	case enuOccr_163O_G059:
		memcpy(ClCabPgtSegmentoOThree::m_Occr_163O_G059, v_Incoming_Data, _Occr_163O_G059);
		break;

	default:
		break;
	}
}
