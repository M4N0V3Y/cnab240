#include "ClCabPgtSegmentoJ52Three.h"

char* setCharBufferSGJ52(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

ClCabPgtSegmentoJ52Three::ClCabPgtSegmentoJ52Three()
{
}


ClCabPgtSegmentoJ52Three::~ClCabPgtSegmentoJ52Three()
{
}

char * ClCabPgtSegmentoJ52Three::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case enuCban_014J52_G001: 
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Cban_014J52_G001, _Cban_014J52_G001); 
		break;
	case enuLots_024J52_G002:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Lots_024J52_G002, _Lots_024J52_G002); 
		break;
	case enuRgst_034J52_G003:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Rgst_034J52_G003, _Rgst_034J52_G003); 
		break;
	case enuOper_044J52_G038:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Oper_044J52_G038, _Oper_044J52_G038); 
		break;
	case enuSegm_054J52_G039:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Segm_054J52_G039, _Segm_054J52_G039); 
		break;
	case enuCnab_064J52_G004:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Cnab_064J52_G004, _Cnab_064J52_G004); 
		break;
	case enuCmov_074J52_C004:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Cmov_074J52_C004, _Cmov_074J52_C004); 
		break;
	case enuRgop_084J52_G067:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Rgop_084J52_G067, _Rgop_084J52_G067); 
		break;
	case enuTpdc_094J52_G005:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Tpdc_094J52_G005, _Tpdc_094J52_G005); 
		break;
	case enuCpfj_104J52_G006:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Cpfj_104J52_G006, _Cpfj_104J52_G006); 
		break;
	case enuNmpg_114J52_G013:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Nmpg_114J52_G013, _Nmpg_114J52_G013); 
		break;
	case enuTpdc_124J52_G005:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Tpdc_124J52_G005, _Tpdc_124J52_G005); 
		break;
	case enuCpfj_134J52_G006:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Cpfj_134J52_G006, _Cpfj_134J52_G006); 
		break;
	case enuNmbn_144J52_G013:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Nmbn_144J52_G013, _Nmbn_144J52_G013); 
		break;
	case enuTpdc_154J52_G005:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Tpdc_154J52_G005, _Tpdc_154J52_G005); 
		break;
	case enuCpfj_164J52_G006:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Cpfj_164J52_G006, _Cpfj_164J52_G006); 
		break;
	case enuNmpg_174J52_G013:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Nmpg_174J52_G013, _Nmpg_174J52_G013); 
		break;
	case enuRsfb_184J52_G004:  
		_retorno = setCharBufferSGJ52(ClCabPgtSegmentoJ52Three::m_Rsfb_184J52_G004, _Rsfb_184J52_G004); 
		break;
	default:
		break;
	}
	return _retorno;
}

void ClCabPgtSegmentoJ52Three::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case enuCban_014J52_G001:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Cban_014J52_G001, v_Incoming_Data, _Cban_014J52_G001);  
		break;
	case enuLots_024J52_G002:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Lots_024J52_G002, v_Incoming_Data, _Lots_024J52_G002);  
		break;
	case enuRgst_034J52_G003:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Rgst_034J52_G003, v_Incoming_Data, _Rgst_034J52_G003);  
		break;
	case enuOper_044J52_G038:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Oper_044J52_G038, v_Incoming_Data, _Oper_044J52_G038);  
		break;
	case enuSegm_054J52_G039:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Segm_054J52_G039, v_Incoming_Data, _Segm_054J52_G039);  
		break;
	case enuCnab_064J52_G004:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Cnab_064J52_G004, v_Incoming_Data, _Cnab_064J52_G004);  
		break;
	case enuCmov_074J52_C004:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Cmov_074J52_C004, v_Incoming_Data, _Cmov_074J52_C004);  
		break;
	case enuRgop_084J52_G067:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Rgop_084J52_G067, v_Incoming_Data, _Rgop_084J52_G067);  
		break;
	case enuTpdc_094J52_G005:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Tpdc_094J52_G005, v_Incoming_Data, _Tpdc_094J52_G005);  
		break;
	case enuCpfj_104J52_G006:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Cpfj_104J52_G006, v_Incoming_Data, _Cpfj_104J52_G006);  
		break;
	case enuNmpg_114J52_G013:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Nmpg_114J52_G013, v_Incoming_Data, _Nmpg_114J52_G013);  
		break;
	case enuTpdc_124J52_G005:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Tpdc_124J52_G005, v_Incoming_Data, _Tpdc_124J52_G005);  
		break;
	case enuCpfj_134J52_G006:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Cpfj_134J52_G006, v_Incoming_Data, _Cpfj_134J52_G006);  
		break;
	case enuNmbn_144J52_G013:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Nmbn_144J52_G013, v_Incoming_Data, _Nmbn_144J52_G013);  
		break;
	case enuTpdc_154J52_G005:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Tpdc_154J52_G005, v_Incoming_Data, _Tpdc_154J52_G005);  
		break;
	case enuCpfj_164J52_G006:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Cpfj_164J52_G006, v_Incoming_Data, _Cpfj_164J52_G006);  
		break;
	case enuNmpg_174J52_G013:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Nmpg_174J52_G013, v_Incoming_Data, _Nmpg_174J52_G013);  
		break;
	case enuRsfb_184J52_G004:  
		memcpy(ClCabPgtSegmentoJ52Three::m_Rsfb_184J52_G004, v_Incoming_Data, _Rsfb_184J52_G004);  
		break;

	default:
		break;
	}
}
