#include "ClCabPgtSegmentoAThree.h"


char* setCharBufferSGA(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

ClCabPgtSegmentoAThree::ClCabPgtSegmentoAThree()
{
}


ClCabPgtSegmentoAThree::~ClCabPgtSegmentoAThree()
{
}

char * ClCabPgtSegmentoAThree::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case enuCban_013a_G001:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Cban_013a_G001, _Cban_013a_G001);
		break;
	case enuLots_023a_G002:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Lots_023a_G002, _Lots_023a_G002);
		break;
	case enuRgst_033a_G003:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Rgst_033a_G003, _Rgst_033a_G003);
		break;
	case enuOper_043a_G038:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Oper_043a_G038, _Oper_043a_G038);
		break;
	case enuSrvc_053a_G039:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Srvc_053a_G039, _Srvc_053a_G039);
		break;
	case enuTmov_063a_G060:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Tmov_063a_G060, _Tmov_063a_G060);
		break;
	case enuCins_073a_G061:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Cins_073a_G061, _Cins_073a_G061);
		break;
	case enuCamr_083a_P001:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Camr_083a_P001, _Camr_083a_P001);
		break;
	case enuBnkf_093a_P002:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Bnkf_093a_P002, _Bnkf_093a_P002);
		break;
	case enuAgen_103a_G008:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Agen_103a_G008, _Agen_103a_G008);
		break;
	case enuAgdv_113a_G009:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Agdv_113a_G009, _Agdv_113a_G009);
		break;
	case enuCont_123a_G010:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Cont_123a_G010, _Cont_123a_G010);
		break;
	case enuCtdv_133a_G011:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Ctdv_133a_G011, _Ctdv_133a_G011);
		break;
	case enuAgct_143a_G012:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Agct_143a_G012, _Agct_143a_G012);
		break;
	case enuNomf_153a_G013:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Nomf_153a_G013, _Nomf_153a_G013);
		break;
	case enuCrdt_163a_G064:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Crdt_163a_G064, _Crdt_163a_G064);
		break;
	case enuDtpg_173a_P009:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Dtpg_173a_P009, _Dtpg_173a_P009);
		break;
	case enuMoed_183a_G040:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Moed_183a_G040, _Moed_183a_G040);
		break;
	case enuQtde_193a_G041:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Qtde_193a_G041, _Qtde_193a_G041);
		break;
	case enuVlor_203a_P010:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Vlor_203a_P010, _Vlor_203a_P010);
		break;
	case enuNbnk_213a_G043:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Nbnk_213a_G043, _Nbnk_213a_G043);
		break;
	case enuDtrl_223a_P003:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Dtrl_223a_P003, _Dtrl_223a_P003);
		break;
	case enuVlrl_233a_P004:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Vlrl_233a_P004, _Vlrl_233a_P004);
		break;
	case enuInf2_243a_G031:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Inf2_243a_G031, _Inf2_243a_G031);
		break;
	case enuCdoc_253a_P005:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Cdoc_253a_P005, _Cdoc_253a_P005);
		break;
	case enuCtde_263a_P011:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Ctde_263a_P011, _Ctde_263a_P011);
		break;
	case enuCcpl_273a_P013:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Ccpl_273a_P013, _Ccpl_273a_P013);
		break;
	case enuCnab_283a_G004:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Cnab_283a_G004, _Cnab_283a_G004);
		break;
	case enuAvso_293a_P006:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Avso_293a_P006, _Avso_293a_P006);
		break;
	case enuOccr_293a_G059:
		_retorno = setCharBufferSGA(ClCabPgtSegmentoAThree::m_Occr_293a_G059, _Occr_293a_G059);
		break;

	default:
		break;
	}
	return _retorno;

}

void ClCabPgtSegmentoAThree::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCban_013a_G001:
		memcpy(ClCabPgtSegmentoAThree::m_Cban_013a_G001, v_Incoming_Data, _Cban_013a_G001);
		break;
	case enuLots_023a_G002:
		memcpy(ClCabPgtSegmentoAThree::m_Lots_023a_G002, v_Incoming_Data, _Lots_023a_G002);
		break;
	case enuRgst_033a_G003:
		memcpy(ClCabPgtSegmentoAThree::m_Rgst_033a_G003, v_Incoming_Data, _Rgst_033a_G003);
		break;
	case enuOper_043a_G038:
		memcpy(ClCabPgtSegmentoAThree::m_Oper_043a_G038, v_Incoming_Data, _Oper_043a_G038);
		break;
	case enuSrvc_053a_G039:
		memcpy(ClCabPgtSegmentoAThree::m_Srvc_053a_G039, v_Incoming_Data, _Srvc_053a_G039);
		break;
	case enuTmov_063a_G060:
		memcpy(ClCabPgtSegmentoAThree::m_Tmov_063a_G060, v_Incoming_Data, _Tmov_063a_G060);
		break;
	case enuCins_073a_G061:
		memcpy(ClCabPgtSegmentoAThree::m_Cins_073a_G061, v_Incoming_Data, _Cins_073a_G061);
		break;
	case enuCamr_083a_P001:
		memcpy(ClCabPgtSegmentoAThree::m_Camr_083a_P001, v_Incoming_Data, _Camr_083a_P001);
		break;
	case enuBnkf_093a_P002:
		memcpy(ClCabPgtSegmentoAThree::m_Bnkf_093a_P002, v_Incoming_Data, _Bnkf_093a_P002);
		break;
	case enuAgen_103a_G008:
		memcpy(ClCabPgtSegmentoAThree::m_Agen_103a_G008, v_Incoming_Data, _Agen_103a_G008);
		break;
	case enuAgdv_113a_G009:
		memcpy(ClCabPgtSegmentoAThree::m_Agdv_113a_G009, v_Incoming_Data, _Agdv_113a_G009);
		break;
	case enuCont_123a_G010:
		memcpy(ClCabPgtSegmentoAThree::m_Cont_123a_G010, v_Incoming_Data, _Cont_123a_G010);
		break;
	case enuCtdv_133a_G011:
		memcpy(ClCabPgtSegmentoAThree::m_Ctdv_133a_G011, v_Incoming_Data, _Ctdv_133a_G011);
		break;
	case enuAgct_143a_G012:
		memcpy(ClCabPgtSegmentoAThree::m_Agct_143a_G012, v_Incoming_Data, _Agct_143a_G012);
		break;
	case enuNomf_153a_G013:
		memcpy(ClCabPgtSegmentoAThree::m_Nomf_153a_G013, v_Incoming_Data, _Nomf_153a_G013);
		break;
	case enuCrdt_163a_G064:
		memcpy(ClCabPgtSegmentoAThree::m_Crdt_163a_G064, v_Incoming_Data, _Crdt_163a_G064);
		break;
	case enuDtpg_173a_P009:
		memcpy(ClCabPgtSegmentoAThree::m_Dtpg_173a_P009, v_Incoming_Data, _Dtpg_173a_P009);
		break;
	case enuMoed_183a_G040:
		memcpy(ClCabPgtSegmentoAThree::m_Moed_183a_G040, v_Incoming_Data, _Moed_183a_G040);
		break;
	case enuQtde_193a_G041:
		memcpy(ClCabPgtSegmentoAThree::m_Qtde_193a_G041, v_Incoming_Data, _Qtde_193a_G041);
		break;
	case enuVlor_203a_P010:
		memcpy(ClCabPgtSegmentoAThree::m_Vlor_203a_P010, v_Incoming_Data, _Vlor_203a_P010);
		break;
	case enuNbnk_213a_G043:
		memcpy(ClCabPgtSegmentoAThree::m_Nbnk_213a_G043, v_Incoming_Data, _Nbnk_213a_G043);
		break;
	case enuDtrl_223a_P003:
		memcpy(ClCabPgtSegmentoAThree::m_Dtrl_223a_P003, v_Incoming_Data, _Dtrl_223a_P003);
		break;
	case enuVlrl_233a_P004:
		memcpy(ClCabPgtSegmentoAThree::m_Vlrl_233a_P004, v_Incoming_Data, _Vlrl_233a_P004);
		break;
	case enuInf2_243a_G031:
		memcpy(ClCabPgtSegmentoAThree::m_Inf2_243a_G031, v_Incoming_Data, _Inf2_243a_G031);
		break;
	case enuCdoc_253a_P005:
		memcpy(ClCabPgtSegmentoAThree::m_Cdoc_253a_P005, v_Incoming_Data, _Cdoc_253a_P005);
		break;
	case enuCtde_263a_P011:
		memcpy(ClCabPgtSegmentoAThree::m_Ctde_263a_P011, v_Incoming_Data, _Ctde_263a_P011);
		break;
	case enuCcpl_273a_P013:
		memcpy(ClCabPgtSegmentoAThree::m_Ccpl_273a_P013, v_Incoming_Data, _Ccpl_273a_P013);
		break;
	case enuCnab_283a_G004:
		memcpy(ClCabPgtSegmentoAThree::m_Cnab_283a_G004, v_Incoming_Data, _Cnab_283a_G004);
		break;
	case enuAvso_293a_P006:
		memcpy(ClCabPgtSegmentoAThree::m_Avso_293a_P006, v_Incoming_Data, _Avso_293a_P006);
		break;
	case enuOccr_293a_G059:
		memcpy(ClCabPgtSegmentoAThree::m_Occr_293a_G059, v_Incoming_Data, _Occr_293a_G059);
		break;
	default:
		break;
	}
}
