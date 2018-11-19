#include "clCnabCobSegmentoST1O2.h"

char* setCOBCharBufferST1O2(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabCobSegmentoST1O2::clCnabCobSegmentoST1O2()
{
}


clCnabCobSegmentoST1O2::~clCnabCobSegmentoST1O2()
{
}

char * clCnabCobSegmentoST1O2::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case   enuTppr_083S_C040:   _retorno = setCOBCharBufferST1O2(clCnabCobSegmentoST1O2::m_Tppr_083S_C040, _Tppr_083S_C040);  break;
	case   enuNlin_093S_C041:   _retorno = setCOBCharBufferST1O2(clCnabCobSegmentoST1O2::m_Nlin_093S_C041, _Nlin_093S_C041);  break;
	case   enuMsge_103S_C042:   _retorno = setCOBCharBufferST1O2(clCnabCobSegmentoST1O2::m_Msge_103S_C042, _Msge_103S_C042);  break;
	case   enuTpfn_113S_C043:   _retorno = setCOBCharBufferST1O2(clCnabCobSegmentoST1O2::m_Tpfn_113S_C043, _Tpfn_113S_C043);  break;
	case   enuCnab_123S_G004:   _retorno = setCOBCharBufferST1O2(clCnabCobSegmentoST1O2::m_Cnab_123S_G004, _Cnab_123S_G004);  break;
	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoST1O2::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case   enuTppr_083S_C040:   memcpy(clCnabCobSegmentoST1O2::m_Tppr_083S_C040, v_Incoming_Data, _Tppr_083S_C040);  break;
	case   enuNlin_093S_C041:   memcpy(clCnabCobSegmentoST1O2::m_Nlin_093S_C041, v_Incoming_Data, _Nlin_093S_C041);  break;
	case   enuMsge_103S_C042:   memcpy(clCnabCobSegmentoST1O2::m_Msge_103S_C042, v_Incoming_Data, _Msge_103S_C042);  break;
	case   enuTpfn_113S_C043:   memcpy(clCnabCobSegmentoST1O2::m_Tpfn_113S_C043, v_Incoming_Data, _Tpfn_113S_C043);  break;
	case   enuCnab_123S_G004:   memcpy(clCnabCobSegmentoST1O2::m_Cnab_123S_G004, v_Incoming_Data, _Cnab_123S_G004);  break;
	default:
		break;
	}
}