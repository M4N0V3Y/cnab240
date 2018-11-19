#include "clCnabPgtraillerFive.h"

char* setCharBufferTF(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabPgtraillerFive::clCnabPgtraillerFive()
{
}


clCnabPgtraillerFive::~clCnabPgtraillerFive()
{
}

char * clCnabPgtraillerFive::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case enuCban_015_G001:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Cban_015_G001, _Cban_015_G001);
		break;
		//
	case enuLots_025_G002:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Lots_025_G002, _Lots_025_G002);
		break;
		//
	case enuRgst_035_G003:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Rgst_035_G003, _Rgst_035_G003);
		break;
		//
	case enuCnab_045_G004:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Cnab_045_G004, _Cnab_045_G004);
		break;
		//
	case enuTotl_055_G057:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Totl_055_G057, _Totl_055_G057);
		break;
		//
	case enuSvlr_065_P007:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Svlr_065_P007, _Svlr_065_P007);
		break;
		//
	case enuQtmd_075_G058:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Qtmd_075_G058, _Qtmd_075_G058);
		break;
		//
	case enuNavd_085_G066:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Navd_085_G066, _Navd_085_G066);
		break;
		//					
	case enuCnab_095_G004:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Cnab_095_G004, _Cnab_095_G004);
		break;
		//
	case enuOccr_105_G059:
		_retorno = setCharBufferTF(clCnabPgtraillerFive::m_Occr_105_G059, _Occr_105_G059);
		break;
		//
	default:
		break;
	}
	return _retorno;
}

void clCnabPgtraillerFive::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCban_015_G001:
		memcpy(clCnabPgtraillerFive::m_Cban_015_G001, v_Incoming_Data, _Cban_015_G001);
		break;
		//
	case enuLots_025_G002:
		memcpy(clCnabPgtraillerFive::m_Lots_025_G002, v_Incoming_Data, _Lots_025_G002);
		break;
		//
	case enuRgst_035_G003:
		memcpy(clCnabPgtraillerFive::m_Rgst_035_G003, v_Incoming_Data, _Rgst_035_G003);
		break;
		//
	case enuCnab_045_G004:
		memcpy(clCnabPgtraillerFive::m_Cnab_045_G004, v_Incoming_Data, _Cnab_045_G004);
		break;
		//
	case enuTotl_055_G057:
		memcpy(clCnabPgtraillerFive::m_Totl_055_G057, v_Incoming_Data, _Totl_055_G057);
		break;
		//
	case enuSvlr_065_P007:
		memcpy(clCnabPgtraillerFive::m_Svlr_065_P007, v_Incoming_Data, _Svlr_065_P007);
		break;
		//
	case enuQtmd_075_G058:
		memcpy(clCnabPgtraillerFive::m_Qtmd_075_G058, v_Incoming_Data, _Qtmd_075_G058);
		break;
		//
	case enuNavd_085_G066:
		memcpy(clCnabPgtraillerFive::m_Navd_085_G066, v_Incoming_Data, _Navd_085_G066);
		break;
		//
	case enuCnab_095_G004:
		memcpy(clCnabPgtraillerFive::m_Cnab_095_G004, v_Incoming_Data, _Cnab_095_G004);
		break;
		//
	case enuOccr_105_G059:
		memcpy(clCnabPgtraillerFive::m_Occr_105_G059, v_Incoming_Data, _Occr_105_G059);
		break;
	default:
		break;
	}
}