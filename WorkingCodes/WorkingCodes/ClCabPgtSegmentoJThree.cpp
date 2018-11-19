#include "ClCabPgtSegmentoJThree.h"

char* setCharBufferSGJ(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

ClCabPgtSegmentoJThree::ClCabPgtSegmentoJThree()
{
}


ClCabPgtSegmentoJThree::~ClCabPgtSegmentoJThree()
{
}

char * ClCabPgtSegmentoJThree::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;

	switch (_enumPos)
	{
	case enuCban_013J_G001:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Cban_013J_G001, _Cban_013J_G001);
		break;

	case enuLots_023J_G002:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Lots_023J_G002, _Lots_023J_G002);
		break;

	case enuRgst_033J_G003:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Rgst_033J_G003, _Rgst_033J_G003);
		break;

	case enuOper_043J_G038:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Oper_043J_G038, _Oper_043J_G038);
		break;

	case enuSrvc_053J_G039:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Srvc_053J_G039, _Srvc_053J_G039);
		break;

	case enuTmov_063J_G060:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Tmov_063J_G060, _Tmov_063J_G060);
		break;

	case enuCmov_073J_G061:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Cmov_073J_G061, _Cmov_073J_G061);
		break;

	case enuBarr_083J_G063:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Barr_083J_G063, _Barr_083J_G063);
		break;

	case enuNomb_093J_G013:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Nomb_093J_G013, _Nomb_093J_G013);
		break;

	case enuDtvn_103J_G044:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Dtvn_103J_G044, _Dtvn_103J_G044);
		break;

	case enuVlrt_113J_G042:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Vlrt_113J_G042, _Vlrt_113J_G042);
		break;

	case enuDesc_123J_L002:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Desc_123J_L002, _Desc_123J_L002);
		break;

	case enuAcrs_133J_L003:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Acrs_133J_L003, _Acrs_133J_L003);
		break;

	case enuDtpg_143J_P009:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Dtpg_143J_P009, _Dtpg_143J_P009);
		break;

	case enuVlrp_153J_P010:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Vlrp_153J_P010, _Vlrp_153J_P010);
		break;

	case enuQtmd_163J_G041:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Qtmd_163J_G041, _Qtmd_163J_G041);
		break;

	case enuRfpg_173J_G064:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Rfpg_173J_G064, _Rfpg_173J_G064);
		break;

	case enuNbnk_183J_G043:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Nbnk_183J_G043, _Nbnk_183J_G043);
		break;

	case enuMoed_193J_G065:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Moed_193J_G065, _Moed_193J_G065);
		break;

	case enuCnab_203J_G004:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Cnab_203J_G004, _Cnab_203J_G004);
		break;

	case enuOccr_213J_G059:
		_retorno = setCharBufferSGJ(ClCabPgtSegmentoJThree::m_Occr_213J_G059, _Occr_213J_G059);
		break;

	default:
		break;
	}
	return _retorno;
}

void ClCabPgtSegmentoJThree::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{

	switch (_enumPos)
	{
	case enuCban_013J_G001:
		memcpy(ClCabPgtSegmentoJThree::m_Cban_013J_G001, v_Incoming_Data, _Cban_013J_G001);
		break;

	case enuLots_023J_G002:
		memcpy(ClCabPgtSegmentoJThree::m_Lots_023J_G002, v_Incoming_Data, _Lots_023J_G002);
		break;

	case enuRgst_033J_G003:
		memcpy(ClCabPgtSegmentoJThree::m_Rgst_033J_G003, v_Incoming_Data, _Rgst_033J_G003);
		break;

	case enuOper_043J_G038:
		memcpy(ClCabPgtSegmentoJThree::m_Oper_043J_G038, v_Incoming_Data, _Oper_043J_G038);
		break;

	case enuSrvc_053J_G039:
		memcpy(ClCabPgtSegmentoJThree::m_Srvc_053J_G039, v_Incoming_Data, _Srvc_053J_G039);
		break;

	case enuTmov_063J_G060:
		memcpy(ClCabPgtSegmentoJThree::m_Tmov_063J_G060, v_Incoming_Data, _Tmov_063J_G060);
		break;

	case enuCmov_073J_G061:
		memcpy(ClCabPgtSegmentoJThree::m_Cmov_073J_G061, v_Incoming_Data, _Cmov_073J_G061);
		break;

	case enuBarr_083J_G063:
		memcpy(ClCabPgtSegmentoJThree::m_Barr_083J_G063, v_Incoming_Data, _Barr_083J_G063);
		break;

	case enuNomb_093J_G013:
		memcpy(ClCabPgtSegmentoJThree::m_Nomb_093J_G013, v_Incoming_Data, _Nomb_093J_G013);
		break;

	case enuDtvn_103J_G044:
		memcpy(ClCabPgtSegmentoJThree::m_Dtvn_103J_G044, v_Incoming_Data, _Dtvn_103J_G044);
		break;

	case enuVlrt_113J_G042:
		memcpy(ClCabPgtSegmentoJThree::m_Vlrt_113J_G042, v_Incoming_Data, _Vlrt_113J_G042);
		break;

	case enuDesc_123J_L002:
		memcpy(ClCabPgtSegmentoJThree::m_Desc_123J_L002, v_Incoming_Data, _Desc_123J_L002);
		break;

	case enuAcrs_133J_L003:
		memcpy(ClCabPgtSegmentoJThree::m_Acrs_133J_L003, v_Incoming_Data, _Acrs_133J_L003);
		break;

	case enuDtpg_143J_P009:
		memcpy(ClCabPgtSegmentoJThree::m_Dtpg_143J_P009, v_Incoming_Data, _Dtpg_143J_P009);
		break;

	case enuVlrp_153J_P010:
		memcpy(ClCabPgtSegmentoJThree::m_Vlrp_153J_P010, v_Incoming_Data, _Vlrp_153J_P010);
		break;

	case enuQtmd_163J_G041:
		memcpy(ClCabPgtSegmentoJThree::m_Qtmd_163J_G041, v_Incoming_Data, _Qtmd_163J_G041);
		break;

	case enuRfpg_173J_G064:
		memcpy(ClCabPgtSegmentoJThree::m_Rfpg_173J_G064, v_Incoming_Data, _Rfpg_173J_G064);
		break;

	case enuNbnk_183J_G043:
		memcpy(ClCabPgtSegmentoJThree::m_Nbnk_183J_G043, v_Incoming_Data, _Nbnk_183J_G043);
		break;

	case enuMoed_193J_G065:
		memcpy(ClCabPgtSegmentoJThree::m_Moed_193J_G065, v_Incoming_Data, _Moed_193J_G065);
		break;

	case enuCnab_203J_G004:
		memcpy(ClCabPgtSegmentoJThree::m_Cnab_203J_G004, v_Incoming_Data, _Cnab_203J_G004);
		break;

	case enuOccr_213J_G059:
		memcpy(ClCabPgtSegmentoJThree::m_Occr_213J_G059, v_Incoming_Data, _Occr_213J_G059);
		break;

	default:
		break;
	}
}
