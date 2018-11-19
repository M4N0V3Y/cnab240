#include "ClCabPgtSegmentoBThree.h"

char* setCharBufferSGB(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

ClCabPgtSegmentoBThree::ClCabPgtSegmentoBThree()
{
}


ClCabPgtSegmentoBThree::~ClCabPgtSegmentoBThree()
{
}

char * ClCabPgtSegmentoBThree::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case enuCban_013b_G001:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Cban_013b_G001, _Cban_013b_G001); 
		break;
	case enuLots_023b_G002:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Lots_023b_G002, _Lots_023b_G002); 
		break;
	case enuRgst_033b_G003:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Rgst_033b_G003, _Rgst_033b_G003); 
		break;
	case enuOper_043b_G038:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Oper_043b_G038, _Oper_043b_G038); 
		break;
	case enuSrvc_053b_G039:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Srvc_053b_G039, _Srvc_053b_G039); 
		break;
	case enuCnab_063b_G004:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Cnab_063b_G004, _Cnab_063b_G004); 
		break;
	case enuTpem_073b_G005:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Tpem_073b_G005, _Tpem_073b_G005); 
		break;
	case enuCnpj_083b_G006:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Cnpj_083b_G006, _Cnpj_083b_G006); 
		break;
	case enuLgrd_093b_G032:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Lgrd_093b_G032, _Lgrd_093b_G032); 
		break;
	case enuNumr_103b_G032:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Numr_103b_G032, _Numr_103b_G032); 
		break;
	case enuCmpl_113b_G032:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Cmpl_113b_G032, _Cmpl_113b_G032); 
		break;
	case enuBair_123b_G032:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Bair_123b_G032, _Bair_123b_G032); 
		break;
	case enuCidd_133b_G033:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Cidd_133b_G033, _Cidd_133b_G033); 
		break;
	case enuNcep_143b_G034:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Ncep_143b_G034, _Ncep_143b_G034); 
		break;
	case enuCcep_153b_G035:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Ccep_153b_G035, _Ccep_153b_G035); 
		break;
	case enuEstd_163b_G036:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Estd_163b_G036, _Estd_163b_G036); 
		break;
	case enuDtvn_173b_G044:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Dtvn_173b_G044, _Dtvn_173b_G044); 
		break;
	case enuVlrd_183b_G042:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Vlrd_183b_G042, _Vlrd_183b_G042); 
		break;
	case enuAbtm_193b_G045:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Abtm_193b_G045, _Abtm_193b_G045); 
		break;
	case enuDesc_203b_G046:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Desc_203b_G046, _Desc_203b_G046); 
		break;
	case enuMora_213b_G047:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Mora_213b_G047, _Mora_213b_G047); 
		break;
	case enuMult_223b_G048:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Mult_223b_G048, _Mult_223b_G048); 
		break;
	case enuCodd_233b_P008:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Codd_233b_P008, _Codd_233b_P008); 
		break;
	case enuAvso_243b_P006:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Avso_243b_P006, _Avso_243b_P006); 
		break;
	case enuCbug_253b_P012:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Cbug_253b_P012, _Cbug_253b_P012); 
		break;
	case enuIspb_263b_P015:
		_retorno = setCharBufferSGB(ClCabPgtSegmentoBThree::m_Ispb_263b_P015, _Ispb_263b_P015); 
		break;
	
	default:
		break;
	}

	return _retorno;
}

void ClCabPgtSegmentoBThree::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{

	case enuCban_013b_G001:
		memcpy(ClCabPgtSegmentoBThree::m_Cban_013b_G001, v_Incoming_Data, _Cban_013b_G001); 
		break;
	case enuLots_023b_G002:
		memcpy(ClCabPgtSegmentoBThree::m_Lots_023b_G002, v_Incoming_Data, _Lots_023b_G002); 
		break;
	case enuRgst_033b_G003:
		memcpy(ClCabPgtSegmentoBThree::m_Rgst_033b_G003, v_Incoming_Data, _Rgst_033b_G003); 
		break;
	case enuOper_043b_G038:
		memcpy(ClCabPgtSegmentoBThree::m_Oper_043b_G038, v_Incoming_Data, _Oper_043b_G038); 
		break;
	case enuSrvc_053b_G039:
		memcpy(ClCabPgtSegmentoBThree::m_Srvc_053b_G039, v_Incoming_Data, _Srvc_053b_G039); 
		break;
	case enuCnab_063b_G004:
		memcpy(ClCabPgtSegmentoBThree::m_Cnab_063b_G004, v_Incoming_Data, _Cnab_063b_G004); 
		break;
	case enuTpem_073b_G005:
		memcpy(ClCabPgtSegmentoBThree::m_Tpem_073b_G005, v_Incoming_Data, _Tpem_073b_G005); 
		break;
	case enuCnpj_083b_G006:
		memcpy(ClCabPgtSegmentoBThree::m_Cnpj_083b_G006, v_Incoming_Data, _Cnpj_083b_G006); 
		break;
	case enuLgrd_093b_G032:
		memcpy(ClCabPgtSegmentoBThree::m_Lgrd_093b_G032, v_Incoming_Data, _Lgrd_093b_G032); 
		break;
	case enuNumr_103b_G032:
		memcpy(ClCabPgtSegmentoBThree::m_Numr_103b_G032, v_Incoming_Data, _Numr_103b_G032); 
		break;
	case enuCmpl_113b_G032:
		memcpy(ClCabPgtSegmentoBThree::m_Cmpl_113b_G032, v_Incoming_Data, _Cmpl_113b_G032); 
		break;
	case enuBair_123b_G032:
		memcpy(ClCabPgtSegmentoBThree::m_Bair_123b_G032, v_Incoming_Data, _Bair_123b_G032); 
		break;
	case enuCidd_133b_G033:
		memcpy(ClCabPgtSegmentoBThree::m_Cidd_133b_G033, v_Incoming_Data, _Cidd_133b_G033); 
		break;
	case enuNcep_143b_G034:
		memcpy(ClCabPgtSegmentoBThree::m_Ncep_143b_G034, v_Incoming_Data, _Ncep_143b_G034); 
		break;
	case enuCcep_153b_G035:
		memcpy(ClCabPgtSegmentoBThree::m_Ccep_153b_G035, v_Incoming_Data, _Ccep_153b_G035); 
		break;
	case enuEstd_163b_G036:
		memcpy(ClCabPgtSegmentoBThree::m_Estd_163b_G036, v_Incoming_Data, _Estd_163b_G036); 
		break;
	case enuDtvn_173b_G044:
		memcpy(ClCabPgtSegmentoBThree::m_Dtvn_173b_G044, v_Incoming_Data, _Dtvn_173b_G044); 
		break;
	case enuVlrd_183b_G042:
		memcpy(ClCabPgtSegmentoBThree::m_Vlrd_183b_G042, v_Incoming_Data, _Vlrd_183b_G042); 
		break;
	case enuAbtm_193b_G045:
		memcpy(ClCabPgtSegmentoBThree::m_Abtm_193b_G045, v_Incoming_Data, _Abtm_193b_G045); 
		break;
	case enuDesc_203b_G046:
		memcpy(ClCabPgtSegmentoBThree::m_Desc_203b_G046, v_Incoming_Data, _Desc_203b_G046); 
		break;
	case enuMora_213b_G047:
		memcpy(ClCabPgtSegmentoBThree::m_Mora_213b_G047, v_Incoming_Data, _Mora_213b_G047); 
		break;
	case enuMult_223b_G048:
		memcpy(ClCabPgtSegmentoBThree::m_Mult_223b_G048, v_Incoming_Data, _Mult_223b_G048); 
		break;
	case enuCodd_233b_P008:
		memcpy(ClCabPgtSegmentoBThree::m_Codd_233b_P008, v_Incoming_Data, _Codd_233b_P008); 
		break;
	case enuAvso_243b_P006:
		memcpy(ClCabPgtSegmentoBThree::m_Avso_243b_P006, v_Incoming_Data, _Avso_243b_P006); 
		break;
	case enuCbug_253b_P012:
		memcpy(ClCabPgtSegmentoBThree::m_Cbug_253b_P012, v_Incoming_Data, _Cbug_253b_P012); 
		break;
	case enuIspb_263b_P015:
		memcpy(ClCabPgtSegmentoBThree::m_Ispb_263b_P015, v_Incoming_Data, _Ispb_263b_P015); 
		break;
	default:
		break;
	}
}
