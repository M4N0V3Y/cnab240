#include "clCnabCobSegmentoY50.h"

char* setCOBCharBufferY50(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}



clCnabCobSegmentoY50::clCnabCobSegmentoY50()
{
}


clCnabCobSegmentoY50::~clCnabCobSegmentoY50()
{
}

char * clCnabCobSegmentoY50::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{

	case enuCban_013Y50_G001:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Cban_013Y50_G001, _Cban_013Y50_G001);  break;
	case enuLots_023Y50_G002:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Lots_023Y50_G002, _Lots_023Y50_G002);  break;
	case enuRgst_033Y50_G003:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Rgst_033Y50_G003, _Rgst_033Y50_G003);  break;
	case enuOper_043Y50_G038:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Oper_043Y50_G038, _Oper_043Y50_G038);  break;
	case enuSegm_053Y50_G039:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Segm_053Y50_G039, _Segm_053Y50_G039);  break;
	case enuCnab_063Y50_G004:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Cnab_063Y50_G004, _Cnab_063Y50_G004);  break;
	case enuCmov_073Y50_C004:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Cmov_073Y50_C004, _Cmov_073Y50_C004);  break;
	case enuRgop_083Y50_G067:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Rgop_083Y50_G067, _Rgop_083Y50_G067);  break;
	case enuAgen_093Y50_G008:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Agen_093Y50_G008, _Agen_093Y50_G008);  break;
	case enuAgdv_103Y50_G009:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Agdv_103Y50_G009, _Agdv_103Y50_G009);  break;
	case enuCont_113Y50_G010:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Cont_113Y50_G010, _Cont_113Y50_G010);  break;
	case enuCtdv_123Y50_G011:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Ctdv_123Y50_G011, _Ctdv_123Y50_G011);  break;
	case enuAgct_133Y50_G012:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Agct_133Y50_G012, _Agct_133Y50_G012);  break;
	case enuNbkn_143Y50_G069:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Nbkn_143Y50_G069, _Nbkn_143Y50_G069);  break;
	case enuCrtb_153Y50_C061:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Crtb_153Y50_C061, _Crtb_153Y50_C061);  break;
	case enuTpvl_163Y50_C062:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Tpvl_163Y50_C062, _Tpvl_163Y50_C062);  break;
	case enuPcvl_173Y50_C074:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Pcvl_173Y50_C074, _Pcvl_173Y50_C074);  break;
	case enuCban_183Y50_G001:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Cban_183Y50_G001, _Cban_183Y50_G001);  break;
	case enuAgen_193Y50_G008:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Agen_193Y50_G008, _Agen_193Y50_G008);  break;
	case enuAgdv_203Y50_G009:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Agdv_203Y50_G009, _Agdv_203Y50_G009);  break;
	case enuCont_213Y50_G010:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Cont_213Y50_G010, _Cont_213Y50_G010);  break;
	case enuCtdv_223Y50_G011:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Ctdv_223Y50_G011, _Ctdv_223Y50_G011);  break;
	case enuAgct_233Y50_G012:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Agct_233Y50_G012, _Agct_233Y50_G012);  break;
	case enuNomb_243Y50_G013:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Nomb_243Y50_G013, _Nomb_243Y50_G013);  break;
	case enuParc_253Y50_C063:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Parc_253Y50_C063, _Parc_253Y50_C063);  break;
	case enuQtdd_263Y50_C064:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Qtdd_263Y50_C064, _Qtdd_263Y50_C064);  break;
	case enuDtcr_273Y50_C065:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Dtcr_273Y50_C065, _Dtcr_273Y50_C065);  break;
	case enuMotr_283Y50_C066:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Motr_283Y50_C066, _Motr_283Y50_C066);  break;
	case enuIspb_293Y50_P015:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Ispb_293Y50_P015, _Ispb_293Y50_P015);  break;
	case enuCnab_303Y50_G004:  _retorno = setCOBCharBufferY50(clCnabCobSegmentoY50::m_Cnab_303Y50_G004, _Cnab_303Y50_G004);  break;

	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoY50::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{

	case enuCban_013Y50_G001:  memcpy(clCnabCobSegmentoY50::m_Cban_013Y50_G001, v_Incoming_Data, _Cban_013Y50_G001);  break;
	case enuLots_023Y50_G002:  memcpy(clCnabCobSegmentoY50::m_Lots_023Y50_G002, v_Incoming_Data, _Lots_023Y50_G002);  break;
	case enuRgst_033Y50_G003:  memcpy(clCnabCobSegmentoY50::m_Rgst_033Y50_G003, v_Incoming_Data, _Rgst_033Y50_G003);  break;
	case enuOper_043Y50_G038:  memcpy(clCnabCobSegmentoY50::m_Oper_043Y50_G038, v_Incoming_Data, _Oper_043Y50_G038);  break;
	case enuSegm_053Y50_G039:  memcpy(clCnabCobSegmentoY50::m_Segm_053Y50_G039, v_Incoming_Data, _Segm_053Y50_G039);  break;
	case enuCnab_063Y50_G004:  memcpy(clCnabCobSegmentoY50::m_Cnab_063Y50_G004, v_Incoming_Data, _Cnab_063Y50_G004);  break;
	case enuCmov_073Y50_C004:  memcpy(clCnabCobSegmentoY50::m_Cmov_073Y50_C004, v_Incoming_Data, _Cmov_073Y50_C004);  break;
	case enuRgop_083Y50_G067:  memcpy(clCnabCobSegmentoY50::m_Rgop_083Y50_G067, v_Incoming_Data, _Rgop_083Y50_G067);  break;
	case enuAgen_093Y50_G008:  memcpy(clCnabCobSegmentoY50::m_Agen_093Y50_G008, v_Incoming_Data, _Agen_093Y50_G008);  break;
	case enuAgdv_103Y50_G009:  memcpy(clCnabCobSegmentoY50::m_Agdv_103Y50_G009, v_Incoming_Data, _Agdv_103Y50_G009);  break;
	case enuCont_113Y50_G010:  memcpy(clCnabCobSegmentoY50::m_Cont_113Y50_G010, v_Incoming_Data, _Cont_113Y50_G010);  break;
	case enuCtdv_123Y50_G011:  memcpy(clCnabCobSegmentoY50::m_Ctdv_123Y50_G011, v_Incoming_Data, _Ctdv_123Y50_G011);  break;
	case enuAgct_133Y50_G012:  memcpy(clCnabCobSegmentoY50::m_Agct_133Y50_G012, v_Incoming_Data, _Agct_133Y50_G012);  break;
	case enuNbkn_143Y50_G069:  memcpy(clCnabCobSegmentoY50::m_Nbkn_143Y50_G069, v_Incoming_Data, _Nbkn_143Y50_G069);  break;
	case enuCrtb_153Y50_C061:  memcpy(clCnabCobSegmentoY50::m_Crtb_153Y50_C061, v_Incoming_Data, _Crtb_153Y50_C061);  break;
	case enuTpvl_163Y50_C062:  memcpy(clCnabCobSegmentoY50::m_Tpvl_163Y50_C062, v_Incoming_Data, _Tpvl_163Y50_C062);  break;
	case enuPcvl_173Y50_C074:  memcpy(clCnabCobSegmentoY50::m_Pcvl_173Y50_C074, v_Incoming_Data, _Pcvl_173Y50_C074);  break;
	case enuCban_183Y50_G001:  memcpy(clCnabCobSegmentoY50::m_Cban_183Y50_G001, v_Incoming_Data, _Cban_183Y50_G001);  break;
	case enuAgen_193Y50_G008:  memcpy(clCnabCobSegmentoY50::m_Agen_193Y50_G008, v_Incoming_Data, _Agen_193Y50_G008);  break;
	case enuAgdv_203Y50_G009:  memcpy(clCnabCobSegmentoY50::m_Agdv_203Y50_G009, v_Incoming_Data, _Agdv_203Y50_G009);  break;
	case enuCont_213Y50_G010:  memcpy(clCnabCobSegmentoY50::m_Cont_213Y50_G010, v_Incoming_Data, _Cont_213Y50_G010);  break;
	case enuCtdv_223Y50_G011:  memcpy(clCnabCobSegmentoY50::m_Ctdv_223Y50_G011, v_Incoming_Data, _Ctdv_223Y50_G011);  break;
	case enuAgct_233Y50_G012:  memcpy(clCnabCobSegmentoY50::m_Agct_233Y50_G012, v_Incoming_Data, _Agct_233Y50_G012);  break;
	case enuNomb_243Y50_G013:  memcpy(clCnabCobSegmentoY50::m_Nomb_243Y50_G013, v_Incoming_Data, _Nomb_243Y50_G013);  break;
	case enuParc_253Y50_C063:  memcpy(clCnabCobSegmentoY50::m_Parc_253Y50_C063, v_Incoming_Data, _Parc_253Y50_C063);  break;
	case enuQtdd_263Y50_C064:  memcpy(clCnabCobSegmentoY50::m_Qtdd_263Y50_C064, v_Incoming_Data, _Qtdd_263Y50_C064);  break;
	case enuDtcr_273Y50_C065:  memcpy(clCnabCobSegmentoY50::m_Dtcr_273Y50_C065, v_Incoming_Data, _Dtcr_273Y50_C065);  break;
	case enuMotr_283Y50_C066:  memcpy(clCnabCobSegmentoY50::m_Motr_283Y50_C066, v_Incoming_Data, _Motr_283Y50_C066);  break;
	case enuIspb_293Y50_P015:  memcpy(clCnabCobSegmentoY50::m_Ispb_293Y50_P015, v_Incoming_Data, _Ispb_293Y50_P015);  break;
	case enuCnab_303Y50_G004:  memcpy(clCnabCobSegmentoY50::m_Cnab_303Y50_G004, v_Incoming_Data, _Cnab_303Y50_G004);  break;

	default:
		break;
	}
}
