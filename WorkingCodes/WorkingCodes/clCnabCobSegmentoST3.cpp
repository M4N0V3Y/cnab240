#include "clCnabCobSegmentoST3.h"

char* setCOBCharBufferST3(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabCobSegmentoST3::clCnabCobSegmentoST3()
{
}


clCnabCobSegmentoST3::~clCnabCobSegmentoST3()
{
}

char * clCnabCobSegmentoST3::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case   enuTpprA_083S_C040:    _retorno = setCOBCharBufferST3(clCnabCobSegmentoST3::m_TpprA_083S_C040, _TpprA_083S_C040); break;
	case	enuMsg5_093S_C037:	  _retorno = setCOBCharBufferST3(clCnabCobSegmentoST3::m_Msg5_093S_C037, _Msg5_093S_C037); break;
	case	enuMsg6_103S_C037:	  _retorno = setCOBCharBufferST3(clCnabCobSegmentoST3::m_Msg6_103S_C037, _Msg6_103S_C037); break;
	case	enuMsg7_113S_C037:	  _retorno = setCOBCharBufferST3(clCnabCobSegmentoST3::m_Msg7_113S_C037, _Msg7_113S_C037); break;
	case	enuMsg8_123S_C037:	  _retorno = setCOBCharBufferST3(clCnabCobSegmentoST3::m_Msg8_123S_C037, _Msg8_123S_C037); break;
	case	enuMsg9_133S_C037:	  _retorno = setCOBCharBufferST3(clCnabCobSegmentoST3::m_Msg9_133S_C037, _Msg9_133S_C037); break;
	case	enuCnab_143S_G004:	  _retorno = setCOBCharBufferST3(clCnabCobSegmentoST3::m_Cnab_143S_G004, _Cnab_143S_G004); break;
	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoST3::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case   enuTpprA_083S_C040:  memcpy(clCnabCobSegmentoST3::m_TpprA_083S_C040, v_Incoming_Data, _TpprA_083S_C040); break;
	case	enuMsg5_093S_C037:	memcpy(clCnabCobSegmentoST3::m_Msg5_093S_C037, v_Incoming_Data, _Msg5_093S_C037); break;
	case	enuMsg6_103S_C037:	memcpy(clCnabCobSegmentoST3::m_Msg6_103S_C037, v_Incoming_Data, _Msg6_103S_C037); break;
	case	enuMsg7_113S_C037:	memcpy(clCnabCobSegmentoST3::m_Msg7_113S_C037, v_Incoming_Data, _Msg7_113S_C037); break;
	case	enuMsg8_123S_C037:	memcpy(clCnabCobSegmentoST3::m_Msg8_123S_C037, v_Incoming_Data, _Msg8_123S_C037); break;
	case	enuMsg9_133S_C037:	memcpy(clCnabCobSegmentoST3::m_Msg9_133S_C037, v_Incoming_Data, _Msg9_133S_C037); break;
	case	enuCnab_143S_G004:	memcpy(clCnabCobSegmentoST3::m_Cnab_143S_G004, v_Incoming_Data, _Cnab_143S_G004); break;
	default:
		break;
	}
}
