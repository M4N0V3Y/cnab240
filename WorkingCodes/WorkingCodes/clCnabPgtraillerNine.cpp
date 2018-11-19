#include "clCnabPgtraillerNine.h"

char* setCharBufferTN(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCnabPgtraillerNine::clCnabPgtraillerNine()
{
}


clCnabPgtraillerNine::~clCnabPgtraillerNine()
{
}

char * clCnabPgtraillerNine::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case enuCban_019_g001:
		_retorno = setCharBufferTN(clCnabPgtraillerNine::m_Cban_019_G001, _Cban_019_g001);
		break;
		//
	case enuLots_029_g002:
		_retorno = setCharBufferTN(clCnabPgtraillerNine::m_Lots_029_G002,_Lots_029_g002);
		break;
		//
	case enuRgst_039_g003:
		_retorno = setCharBufferTN(clCnabPgtraillerNine::m_Rgst_039_G003,_Rgst_039_g003);
		break;
		//
	case enuCnab_049_g004:
		_retorno = setCharBufferTN(clCnabPgtraillerNine::m_Cnab_049_G004,_Cnab_049_g004);
		break;
		//
	case enuTotl_059_g049:
		_retorno = setCharBufferTN(clCnabPgtraillerNine::m_Totl_059_G049,_Totl_059_g049);
		break;
		//
	case enuQtrg_069_g056:
		_retorno = setCharBufferTN(clCnabPgtraillerNine::m_Qtrg_069_G056,_Qtrg_069_g056);
		break;
		//
	case enuQtcc_079_g073:
		_retorno = setCharBufferTN(clCnabPgtraillerNine::m_Qtcc_079_G073,_Qtcc_079_g073);
		break;
		//
	case enuRsfb_089_g004:
		_retorno = setCharBufferTN(clCnabPgtraillerNine::m_Rsfb_089_G004,_Rsfb_089_g004);
		break;
		//
	default:
		break;
	}
	return _retorno;
}

void clCnabPgtraillerNine::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCban_019_g001:
		memcpy(clCnabPgtraillerNine::m_Cban_019_G001, v_Incoming_Data, _Cban_019_g001);
		break;
		//
	case enuLots_029_g002:
		memcpy(clCnabPgtraillerNine::m_Lots_029_G002, v_Incoming_Data, _Lots_029_g002);
		break;
		//
	case enuRgst_039_g003:
		memcpy(clCnabPgtraillerNine::m_Rgst_039_G003, v_Incoming_Data, _Rgst_039_g003);
		break;
		//
	case enuCnab_049_g004:
		memcpy(clCnabPgtraillerNine::m_Cnab_049_G004, v_Incoming_Data, _Cnab_049_g004);
		break;
		//
	case enuTotl_059_g049:
		memcpy(clCnabPgtraillerNine::m_Totl_059_G049, v_Incoming_Data, _Totl_059_g049);
		break;
		//
	case enuQtrg_069_g056:
		memcpy(clCnabPgtraillerNine::m_Qtrg_069_G056, v_Incoming_Data, _Qtrg_069_g056);
		break;
		//
	case enuQtcc_079_g073:
		memcpy(clCnabPgtraillerNine::m_Qtcc_079_G073, v_Incoming_Data, _Qtcc_079_g073);
		break;
		//
	case enuRsfb_089_g004:
		memcpy(clCnabPgtraillerNine::m_Rsfb_089_G004, v_Incoming_Data, _Rsfb_089_g004);
		break;
		//
	default:
		break;
	}
}
