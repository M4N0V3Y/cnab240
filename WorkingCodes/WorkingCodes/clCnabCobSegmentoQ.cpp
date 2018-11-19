#include "clCnabCobSegmentoQ.h"

char* setCOBCharBufferQ(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCnabCobSegmentoQ::clCnabCobSegmentoQ()
{
}


clCnabCobSegmentoQ::~clCnabCobSegmentoQ()
{
}

char * clCnabCobSegmentoQ::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case enuCban_013Q_G001:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Cban_013Q_G001, _Cban_013Q_G001);  break;
	case enuLots_023Q_G002:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Lots_023Q_G002, _Lots_023Q_G002);  break;
	case enuRgst_033Q_G003:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Rgst_033Q_G003, _Rgst_033Q_G003);  break;
	case enuOper_043Q_G038:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Oper_043Q_G038, _Oper_043Q_G038);  break;
	case enuSegm_053Q_G039:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Segm_053Q_G039, _Segm_053Q_G039);  break;
	case enuCnab_063Q_G004:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Cnab_063Q_G004, _Cnab_063Q_G004);  break;
	case enuCmov_073Q_C004:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Cmov_073Q_C004, _Cmov_073Q_C004);  break;
	case enuTpem_083Q_G005:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Tpem_083Q_G005, _Tpem_083Q_G005);  break;
	case enuCnpj_093Q_G006:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Cnpj_093Q_G006, _Cnpj_093Q_G006);  break;
	case enuNome_103Q_G013:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Nome_103Q_G013, _Nome_103Q_G013);  break;
	case enuLgrd_113Q_G032:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Lgrd_113Q_G032, _Lgrd_113Q_G032);  break;
	case enuBair_123Q_G032:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Bair_123Q_G032, _Bair_123Q_G032);  break;
	case enuNcep_133Q_G034:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Ncep_133Q_G034, _Ncep_133Q_G034);  break;
	case enuCcep_143Q_G035:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Ccep_143Q_G035, _Ccep_143Q_G035);  break;
	case enuCidd_153Q_G033:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Cidd_153Q_G033, _Cidd_153Q_G033);  break;
	case enuEstd_163Q_G036:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Estd_163Q_G036, _Estd_163Q_G036);  break;
	case enuTpem_173Q_G005:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Tpem_173Q_G005, _Tpem_173Q_G005);  break;
	case enuCnpj_183Q_G006:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Cnpj_183Q_G006, _Cnpj_183Q_G006);  break;
	case enuNome_193Q_G013:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Nome_193Q_G013, _Nome_193Q_G013);  break;
	case enuCbnk_203Q_C031:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Cbnk_203Q_C031, _Cbnk_203Q_C031);  break;
	case enuNbnk_213Q_C032:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Nbnk_213Q_C032, _Nbnk_213Q_C032);  break;
	case enuCnab_223Q_G004:  _retorno = setCOBCharBufferQ(clCnabCobSegmentoQ::m_Cnab_223Q_G004, _Cnab_223Q_G004);  break;
	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoQ::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCban_013Q_G001:  memcpy(clCnabCobSegmentoQ::m_Cban_013Q_G001, v_Incoming_Data, _Cban_013Q_G001);  break;
	case enuLots_023Q_G002:  memcpy(clCnabCobSegmentoQ::m_Lots_023Q_G002, v_Incoming_Data, _Lots_023Q_G002);  break;
	case enuRgst_033Q_G003:  memcpy(clCnabCobSegmentoQ::m_Rgst_033Q_G003, v_Incoming_Data, _Rgst_033Q_G003);  break;
	case enuOper_043Q_G038:  memcpy(clCnabCobSegmentoQ::m_Oper_043Q_G038, v_Incoming_Data, _Oper_043Q_G038);  break;
	case enuSegm_053Q_G039:  memcpy(clCnabCobSegmentoQ::m_Segm_053Q_G039, v_Incoming_Data, _Segm_053Q_G039);  break;
	case enuCnab_063Q_G004:  memcpy(clCnabCobSegmentoQ::m_Cnab_063Q_G004, v_Incoming_Data, _Cnab_063Q_G004);  break;
	case enuCmov_073Q_C004:  memcpy(clCnabCobSegmentoQ::m_Cmov_073Q_C004, v_Incoming_Data, _Cmov_073Q_C004);  break;
	case enuTpem_083Q_G005:  memcpy(clCnabCobSegmentoQ::m_Tpem_083Q_G005, v_Incoming_Data, _Tpem_083Q_G005);  break;
	case enuCnpj_093Q_G006:  memcpy(clCnabCobSegmentoQ::m_Cnpj_093Q_G006, v_Incoming_Data, _Cnpj_093Q_G006);  break;
	case enuNome_103Q_G013:  memcpy(clCnabCobSegmentoQ::m_Nome_103Q_G013, v_Incoming_Data, _Nome_103Q_G013);  break;
	case enuLgrd_113Q_G032:  memcpy(clCnabCobSegmentoQ::m_Lgrd_113Q_G032, v_Incoming_Data, _Lgrd_113Q_G032);  break;
	case enuBair_123Q_G032:  memcpy(clCnabCobSegmentoQ::m_Bair_123Q_G032, v_Incoming_Data, _Bair_123Q_G032);  break;
	case enuNcep_133Q_G034:  memcpy(clCnabCobSegmentoQ::m_Ncep_133Q_G034, v_Incoming_Data, _Ncep_133Q_G034);  break;
	case enuCcep_143Q_G035:  memcpy(clCnabCobSegmentoQ::m_Ccep_143Q_G035, v_Incoming_Data, _Ccep_143Q_G035);  break;
	case enuCidd_153Q_G033:  memcpy(clCnabCobSegmentoQ::m_Cidd_153Q_G033, v_Incoming_Data, _Cidd_153Q_G033);  break;
	case enuEstd_163Q_G036:  memcpy(clCnabCobSegmentoQ::m_Estd_163Q_G036, v_Incoming_Data, _Estd_163Q_G036);  break;
	case enuTpem_173Q_G005:  memcpy(clCnabCobSegmentoQ::m_Tpem_173Q_G005, v_Incoming_Data, _Tpem_173Q_G005);  break;
	case enuCnpj_183Q_G006:  memcpy(clCnabCobSegmentoQ::m_Cnpj_183Q_G006, v_Incoming_Data, _Cnpj_183Q_G006);  break;
	case enuNome_193Q_G013:  memcpy(clCnabCobSegmentoQ::m_Nome_193Q_G013, v_Incoming_Data, _Nome_193Q_G013);  break;
	case enuCbnk_203Q_C031:  memcpy(clCnabCobSegmentoQ::m_Cbnk_203Q_C031, v_Incoming_Data, _Cbnk_203Q_C031);  break;
	case enuNbnk_213Q_C032:  memcpy(clCnabCobSegmentoQ::m_Nbnk_213Q_C032, v_Incoming_Data, _Nbnk_213Q_C032);  break;
	case enuCnab_223Q_G004:  memcpy(clCnabCobSegmentoQ::m_Cnab_223Q_G004, v_Incoming_Data, _Cnab_223Q_G004);  break;

	default:
		break;
	}

}
