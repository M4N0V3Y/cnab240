#include "clCnabCobHeaderOne.h"

char* setCOBCharBuffer(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabCobHeaderOne::clCnabCobHeaderOne()
{
}


clCnabCobHeaderOne::~clCnabCobHeaderOne()
{
}

char * clCnabCobHeaderOne::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case enuCCban_011_G001:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Cban_011_G001, _Cban_011_G001);  break;
	case enuCLots_021_G002:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Lots_021_G002, _Lots_021_G002);  break;
	case enuCRgst_031_G003:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Rgst_031_G003, _Rgst_031_G003);  break;
	case enuCOper_041_G028:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Oper_041_G028, _Oper_041_G028);  break;
	case enuCSrvc_051_G025:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Srvc_051_G025, _Srvc_051_G025);  break;
	case enuCCnab_061_G004:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Cnab_061_G004, _Cnab_061_G004);  break;
	case enuCLayt_071_G030:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Layt_071_G030, _Layt_071_G030);  break;
	case enuCCnab_081_G004:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Cnab_081_G004, _Cnab_081_G004);  break;
	case enuCTpem_091_G005:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Tpem_091_G005, _Tpem_091_G005);  break;
	case enuCCnpj_101_G006:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Cnpj_101_G006, _Cnpj_101_G006);  break;
	case enuCCnvb_111_G007:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Cnvb_111_G007, _Cnvb_111_G007);  break;
	case enuCAgen_121_G008:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Agen_121_G008, _Agen_121_G008);  break;
	case enuCAgdv_131_G009:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Agdv_131_G009, _Agdv_131_G009);  break;
	case enuCCont_141_G010:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Cont_141_G010, _Cont_141_G010);  break;
	case enuCCtdv_151_G011:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Ctdv_151_G011, _Ctdv_151_G011);  break;
	case enuCAgct_161_G012:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Agct_161_G012, _Agct_161_G012);  break;
	case enuCRzsc_171_G013:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Rzsc_171_G013, _Rzsc_171_G013);  break;
	case enuCInf1_181_C073:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Inf1_181_C073, _Inf1_181_C073);  break;
	case enuCInf2_191_C073:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Inf2_191_C073, _Inf2_191_C073);  break;
	case enuCCtco_201_G079:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Ctco_201_G079, _Ctco_201_G079);  break;
	case enuCDtgv_211_G068:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Dtgv_211_G068, _Dtgv_211_G068);  break;
	case enuCDtcr_221_C003:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Dtcr_221_C003, _Dtcr_221_C003);  break;
	case enuCCnab_231_G004:   _retorno = setCOBCharBuffer(clCnabCobHeaderOne::m_Cnab_231_G004, _Cnab_231_G004);  break;

	default:
		break;
	}
	return _retorno;
}

void clCnabCobHeaderOne::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCCban_011_G001:   memcpy(clCnabCobHeaderOne::m_Cban_011_G001, v_Incoming_Data, _Cban_011_G001);  break;
	case enuCLots_021_G002:   memcpy(clCnabCobHeaderOne::m_Lots_021_G002, v_Incoming_Data, _Lots_021_G002);  break;
	case enuCRgst_031_G003:   memcpy(clCnabCobHeaderOne::m_Rgst_031_G003, v_Incoming_Data, _Rgst_031_G003);  break;
	case enuCOper_041_G028:   memcpy(clCnabCobHeaderOne::m_Oper_041_G028, v_Incoming_Data, _Oper_041_G028);  break;
	case enuCSrvc_051_G025:   memcpy(clCnabCobHeaderOne::m_Srvc_051_G025, v_Incoming_Data, _Srvc_051_G025);  break;
	case enuCCnab_061_G004:   memcpy(clCnabCobHeaderOne::m_Cnab_061_G004, v_Incoming_Data, _Cnab_061_G004);  break;
	case enuCLayt_071_G030:   memcpy(clCnabCobHeaderOne::m_Layt_071_G030, v_Incoming_Data, _Layt_071_G030);  break;
	case enuCCnab_081_G004:   memcpy(clCnabCobHeaderOne::m_Cnab_081_G004, v_Incoming_Data, _Cnab_081_G004);  break;
	case enuCTpem_091_G005:   memcpy(clCnabCobHeaderOne::m_Tpem_091_G005, v_Incoming_Data, _Tpem_091_G005);  break;
	case enuCCnpj_101_G006:   memcpy(clCnabCobHeaderOne::m_Cnpj_101_G006, v_Incoming_Data, _Cnpj_101_G006);  break;
	case enuCCnvb_111_G007:   memcpy(clCnabCobHeaderOne::m_Cnvb_111_G007, v_Incoming_Data, _Cnvb_111_G007);  break;
	case enuCAgen_121_G008:   memcpy(clCnabCobHeaderOne::m_Agen_121_G008, v_Incoming_Data, _Agen_121_G008);  break;
	case enuCAgdv_131_G009:   memcpy(clCnabCobHeaderOne::m_Agdv_131_G009, v_Incoming_Data, _Agdv_131_G009);  break;
	case enuCCont_141_G010:   memcpy(clCnabCobHeaderOne::m_Cont_141_G010, v_Incoming_Data, _Cont_141_G010);  break;
	case enuCCtdv_151_G011:   memcpy(clCnabCobHeaderOne::m_Ctdv_151_G011, v_Incoming_Data, _Ctdv_151_G011);  break;
	case enuCAgct_161_G012:   memcpy(clCnabCobHeaderOne::m_Agct_161_G012, v_Incoming_Data, _Agct_161_G012);  break;
	case enuCRzsc_171_G013:   memcpy(clCnabCobHeaderOne::m_Rzsc_171_G013, v_Incoming_Data, _Rzsc_171_G013);  break;
	case enuCInf1_181_C073:   memcpy(clCnabCobHeaderOne::m_Inf1_181_C073, v_Incoming_Data, _Inf1_181_C073);  break;
	case enuCInf2_191_C073:   memcpy(clCnabCobHeaderOne::m_Inf2_191_C073, v_Incoming_Data, _Inf2_191_C073);  break;
	case enuCCtco_201_G079:   memcpy(clCnabCobHeaderOne::m_Ctco_201_G079, v_Incoming_Data, _Ctco_201_G079);  break;
	case enuCDtgv_211_G068:   memcpy(clCnabCobHeaderOne::m_Dtgv_211_G068, v_Incoming_Data, _Dtgv_211_G068);  break;
	case enuCDtcr_221_C003:   memcpy(clCnabCobHeaderOne::m_Dtcr_221_C003, v_Incoming_Data, _Dtcr_221_C003);  break;
	case enuCCnab_231_G004:   memcpy(clCnabCobHeaderOne::m_Cnab_231_G004, v_Incoming_Data, _Cnab_231_G004);  break;

	default:
		break;
	}
}