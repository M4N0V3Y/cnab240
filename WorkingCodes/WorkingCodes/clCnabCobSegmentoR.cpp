#include "clCnabCobSegmentoR.h"

char* setCOBCharBufferR(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCnabCobSegmentoR::clCnabCobSegmentoR()
{
}


clCnabCobSegmentoR::~clCnabCobSegmentoR()
{
}

char * clCnabCobSegmentoR::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case  enuCban_013R_G001:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Cban_013R_G001, _Cban_013R_G001);  break;
	case  enuLots_023R_G002:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Lots_023R_G002, _Lots_023R_G002);  break;
	case  enuRgst_033R_G003:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Rgst_033R_G003, _Rgst_033R_G003);  break;
	case  enuOper_043R_G038:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Oper_043R_G038, _Oper_043R_G038);  break;
	case  enuSegm_053R_G039:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Segm_053R_G039, _Segm_053R_G039);  break;
	case  enuCnab_063R_G004:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Cnab_063R_G004, _Cnab_063R_G004);  break;
	case  enuCmov_073R_C004:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Cmov_073R_C004, _Cmov_073R_C004);  break;
	case  enuDesc_083R_C021:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Desc_083R_C021, _Desc_083R_C021);  break;
	case  enuDtds_093R_C022:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Dtds_093R_C022, _Dtds_093R_C022);  break;
	case  enuVlds_103R_C023:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Vlds_103R_C023, _Vlds_103R_C023);  break;
	case  enuDesc_113R_C021:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Desc_113R_C021, _Desc_113R_C021);  break;
	case  enuDtds_123R_C022:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Dtds_123R_C022, _Dtds_123R_C022);  break;
	case  enuVlds_133R_C023:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Vlds_133R_C023, _Vlds_133R_C023);  break;
	case  enuMult_143R_G073:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Mult_143R_G073, _Mult_143R_G073);  break;
	case  enuDtmu_153R_G074:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Dtmu_153R_G074, _Dtmu_153R_G074);  break;
	case  enuVlmu_163R_G075:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Vlmu_163R_G075, _Vlmu_163R_G075);  break;
	case  enuInfp_173R_C036:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Infp_173R_C036, _Infp_173R_C036);  break;
	case  enuInf3_183R_C037:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Inf3_183R_C037, _Inf3_183R_C037);  break;
	case  enuInf4_193R_C037:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Inf4_193R_C037, _Inf4_193R_C037);  break;
	case  enuCnab_203R_G004:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Cnab_203R_G004, _Cnab_203R_G004);  break;
	case  enuCocr_213R_C038:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Cocr_213R_C038, _Cocr_213R_C038);  break;
	case  enuDdeb_223R_G001:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Ddeb_223R_G001, _Ddeb_223R_G001);  break;
	case  enuAgen_233R_G008:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Agen_233R_G008, _Agen_233R_G008);  break;
	case  enuAgdv_243R_G009:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Agdv_243R_G009, _Agdv_243R_G009);  break;
	case  enuCont_253R_G010:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Cont_253R_G010, _Cont_253R_G010);  break;
	case  enuCtdv_263R_G011:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Ctdv_263R_G011, _Ctdv_263R_G011);  break;
	case  enuAgct_273R_G012:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Agct_273R_G012, _Agct_273R_G012);  break;
	case  enuIead_283R_C039:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Iead_283R_C039, _Iead_283R_C039);  break;
	case  enuCnab_293R_G004:   _retorno = setCOBCharBufferR(clCnabCobSegmentoR::m_Cnab_293R_G004, _Cnab_293R_G004);  break;
		default:
			break;
	}
	return _retorno;
}

void clCnabCobSegmentoR::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case  enuCban_013R_G001:    memcpy(clCnabCobSegmentoR::m_Cban_013R_G001, v_Incoming_Data, _Cban_013R_G001);  break;
	case  enuLots_023R_G002:    memcpy(clCnabCobSegmentoR::m_Lots_023R_G002, v_Incoming_Data, _Lots_023R_G002);  break;
	case  enuRgst_033R_G003:    memcpy(clCnabCobSegmentoR::m_Rgst_033R_G003, v_Incoming_Data, _Rgst_033R_G003);  break;
	case  enuOper_043R_G038:    memcpy(clCnabCobSegmentoR::m_Oper_043R_G038, v_Incoming_Data, _Oper_043R_G038);  break;
	case  enuSegm_053R_G039:    memcpy(clCnabCobSegmentoR::m_Segm_053R_G039, v_Incoming_Data, _Segm_053R_G039);  break;
	case  enuCnab_063R_G004:    memcpy(clCnabCobSegmentoR::m_Cnab_063R_G004, v_Incoming_Data, _Cnab_063R_G004);  break;
	case  enuCmov_073R_C004:    memcpy(clCnabCobSegmentoR::m_Cmov_073R_C004, v_Incoming_Data, _Cmov_073R_C004);  break;
	case  enuDesc_083R_C021:    memcpy(clCnabCobSegmentoR::m_Desc_083R_C021, v_Incoming_Data, _Desc_083R_C021);  break;
	case  enuDtds_093R_C022:    memcpy(clCnabCobSegmentoR::m_Dtds_093R_C022, v_Incoming_Data, _Dtds_093R_C022);  break;
	case  enuVlds_103R_C023:    memcpy(clCnabCobSegmentoR::m_Vlds_103R_C023, v_Incoming_Data, _Vlds_103R_C023);  break;
	case  enuDesc_113R_C021:    memcpy(clCnabCobSegmentoR::m_Desc_113R_C021, v_Incoming_Data, _Desc_113R_C021);  break;
	case  enuDtds_123R_C022:    memcpy(clCnabCobSegmentoR::m_Dtds_123R_C022, v_Incoming_Data, _Dtds_123R_C022);  break;
	case  enuVlds_133R_C023:    memcpy(clCnabCobSegmentoR::m_Vlds_133R_C023, v_Incoming_Data, _Vlds_133R_C023);  break;
	case  enuMult_143R_G073:    memcpy(clCnabCobSegmentoR::m_Mult_143R_G073, v_Incoming_Data, _Mult_143R_G073);  break;
	case  enuDtmu_153R_G074:    memcpy(clCnabCobSegmentoR::m_Dtmu_153R_G074, v_Incoming_Data, _Dtmu_153R_G074);  break;
	case  enuVlmu_163R_G075:    memcpy(clCnabCobSegmentoR::m_Vlmu_163R_G075, v_Incoming_Data, _Vlmu_163R_G075);  break;
	case  enuInfp_173R_C036:    memcpy(clCnabCobSegmentoR::m_Infp_173R_C036, v_Incoming_Data, _Infp_173R_C036);  break;
	case  enuInf3_183R_C037:    memcpy(clCnabCobSegmentoR::m_Inf3_183R_C037, v_Incoming_Data, _Inf3_183R_C037);  break;
	case  enuInf4_193R_C037:    memcpy(clCnabCobSegmentoR::m_Inf4_193R_C037, v_Incoming_Data, _Inf4_193R_C037);  break;
	case  enuCnab_203R_G004:    memcpy(clCnabCobSegmentoR::m_Cnab_203R_G004, v_Incoming_Data, _Cnab_203R_G004);  break;
	case  enuCocr_213R_C038:    memcpy(clCnabCobSegmentoR::m_Cocr_213R_C038, v_Incoming_Data, _Cocr_213R_C038);  break;
	case  enuDdeb_223R_G001:    memcpy(clCnabCobSegmentoR::m_Ddeb_223R_G001, v_Incoming_Data, _Ddeb_223R_G001);  break;
	case  enuAgen_233R_G008:    memcpy(clCnabCobSegmentoR::m_Agen_233R_G008, v_Incoming_Data, _Agen_233R_G008);  break;
	case  enuAgdv_243R_G009:    memcpy(clCnabCobSegmentoR::m_Agdv_243R_G009, v_Incoming_Data, _Agdv_243R_G009);  break;
	case  enuCont_253R_G010:    memcpy(clCnabCobSegmentoR::m_Cont_253R_G010, v_Incoming_Data, _Cont_253R_G010);  break;
	case  enuCtdv_263R_G011:    memcpy(clCnabCobSegmentoR::m_Ctdv_263R_G011, v_Incoming_Data, _Ctdv_263R_G011);  break;
	case  enuAgct_273R_G012:    memcpy(clCnabCobSegmentoR::m_Agct_273R_G012, v_Incoming_Data, _Agct_273R_G012);  break;
	case  enuIead_283R_C039:    memcpy(clCnabCobSegmentoR::m_Iead_283R_C039, v_Incoming_Data, _Iead_283R_C039);  break;
	case  enuCnab_293R_G004:    memcpy(clCnabCobSegmentoR::m_Cnab_293R_G004, v_Incoming_Data, _Cnab_293R_G004);  break;

		default:
			break;
	}

}
