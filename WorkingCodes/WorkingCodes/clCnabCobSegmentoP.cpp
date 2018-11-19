#include "clCnabCobSegmentoP.h"

char* setCOBCharBufferP(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}


clCnabCobSegmentoP::clCnabCobSegmentoP()
{
}


clCnabCobSegmentoP::~clCnabCobSegmentoP()
{
}

char * clCnabCobSegmentoP::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case  enuCban_013P_G001:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Cban_013P_G001,  _Cban_013P_G001);  break;
	case  enuLots_023P_G002:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Lots_023P_G002,  _Lots_023P_G002);  break;
	case  enuRgst_033P_G003:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Rgst_033P_G003,  _Rgst_033P_G003);  break;
	case  enuOper_043P_G038:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Oper_043P_G038,  _Oper_043P_G038);  break;
	case  enuSegm_053P_G039:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Segm_053P_G039,  _Segm_053P_G039);  break;
	case  enuCnab_063P_G004:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Cnab_063P_G004,  _Cnab_063P_G004);  break;
	case  enuCmov_073P_C004:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Cmov_073P_C004,  _Cmov_073P_C004);  break;
	case  enuAgen_083P_G008:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Agen_083P_G008,  _Agen_083P_G008);  break;
	case  enuAgdv_093P_G009:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Agdv_093P_G009,  _Agdv_093P_G009);  break;
	case  enuCont_103P_G010:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Cont_103P_G010,  _Cont_103P_G010);  break;
	case  enuCtdv_113P_G011:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Ctdv_113P_G011,  _Ctdv_113P_G011);  break;
	case  enuAgct_123P_G012:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Agct_123P_G012,  _Agct_123P_G012);  break;
	case  enuNbkn_133P_G069:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Nbkn_133P_G069,  _Nbkn_133P_G069);  break;
	case  enuCart_143P_C006:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Cart_143P_C006,  _Cart_143P_C006);  break;
	case  enuFcad_153P_C007:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Fcad_153P_C007,  _Fcad_153P_C007);  break;
	case  enuTpdc_163P_C008:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Tpdc_163P_C008,  _Tpdc_163P_C008);  break;
	case  enuEmit_173P_C009:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Emit_173P_C009,  _Emit_173P_C009);  break;
	case  enuDist_183P_C010:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Dist_183P_C010,  _Dist_183P_C010);  break;
	case  enuNdoc_193P_C011:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Ndoc_193P_C011,  _Ndoc_193P_C011);  break;
	case  enuDtvn_203P_C012:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Dtvn_203P_C012,  _Dtvn_203P_C012);  break;
	case  enuVlrt_213P_G070:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Vlrt_213P_G070,  _Vlrt_213P_G070);  break;
	case  enuAgec_223P_C014:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Agec_223P_C014,  _Agec_223P_C014);  break;
	case  enuAgdv_233P_G009:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Agdv_233P_G009,  _Agdv_233P_G009);  break;
	case  enuEspt_243P_C015:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Espt_243P_C015,  _Espt_243P_C015);  break;
	case  enuAcei_253P_C016:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Acei_253P_C016,  _Acei_253P_C016);  break;
	case  enuDtem_263P_G071:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Dtem_263P_G071,  _Dtem_263P_G071);  break;
	case  enuJurs_273P_C018:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Jurs_273P_C018,  _Jurs_273P_C018);  break;
	case  enuDtjm_283P_C019:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Dtjm_283P_C019,  _Dtjm_283P_C019);  break;
	case  enuJurm_293P_C020:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Jurm_293P_C020,  _Jurm_293P_C020);  break;
	case  enuCdes_303P_C021:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Cdes_303P_C021,  _Cdes_303P_C021);  break;
	case  enuDtde_313P_C022:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Dtde_313P_C022,  _Dtde_313P_C022);  break;
	case  enuVlrd_323P_C023:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Vlrd_323P_C023,  _Vlrd_323P_C023);  break;
	case  enuViof_333P_C024:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Viof_333P_C024,  _Viof_333P_C024);  break;
	case  enuVabt_343P_G045:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Vabt_343P_G045,  _Vabt_343P_G045);  break;
	case  enuNcre_353P_G072:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Ncre_353P_G072,  _Ncre_353P_G072);  break;
	case  enuProt_363P_C026:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Prot_363P_C026,  _Prot_363P_C026);  break;
	case  enuPpro_373P_C027:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Ppro_373P_C027,  _Ppro_373P_C027);  break;
	case  enuCbax_383P_C028:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Cbax_383P_C028,  _Cbax_383P_C028);  break;
	case  enuPbax_393P_C029:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Pbax_393P_C029,  _Pbax_393P_C029);  break;
	case  enuCmoe_403P_G065:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Cmoe_403P_G065,  _Cmoe_403P_G065);  break;
	case  enuNcon_413P_C030:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Ncon_413P_C030,  _Ncon_413P_C030);  break;
	case  enuLivr_423P_C077:    _retorno = setCOBCharBufferP(clCnabCobSegmentoP::m_Livr_423P_C077,  _Livr_423P_C077);  break;

	default:
		break;
	}
	return _retorno;
}

void clCnabCobSegmentoP::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case  enuCban_013P_G001:     memcpy(clCnabCobSegmentoP::m_Cban_013P_G001, v_Incoming_Data, _Cban_013P_G001);  break;
	case  enuLots_023P_G002:     memcpy(clCnabCobSegmentoP::m_Lots_023P_G002, v_Incoming_Data, _Lots_023P_G002);  break;
	case  enuRgst_033P_G003:     memcpy(clCnabCobSegmentoP::m_Rgst_033P_G003, v_Incoming_Data, _Rgst_033P_G003);  break;
	case  enuOper_043P_G038:     memcpy(clCnabCobSegmentoP::m_Oper_043P_G038, v_Incoming_Data, _Oper_043P_G038);  break;
	case  enuSegm_053P_G039:     memcpy(clCnabCobSegmentoP::m_Segm_053P_G039, v_Incoming_Data, _Segm_053P_G039);  break;
	case  enuCnab_063P_G004:     memcpy(clCnabCobSegmentoP::m_Cnab_063P_G004, v_Incoming_Data, _Cnab_063P_G004);  break;
	case  enuCmov_073P_C004:     memcpy(clCnabCobSegmentoP::m_Cmov_073P_C004, v_Incoming_Data, _Cmov_073P_C004);  break;
	case  enuAgen_083P_G008:     memcpy(clCnabCobSegmentoP::m_Agen_083P_G008, v_Incoming_Data, _Agen_083P_G008);  break;
	case  enuAgdv_093P_G009:     memcpy(clCnabCobSegmentoP::m_Agdv_093P_G009, v_Incoming_Data, _Agdv_093P_G009);  break;
	case  enuCont_103P_G010:     memcpy(clCnabCobSegmentoP::m_Cont_103P_G010, v_Incoming_Data, _Cont_103P_G010);  break;
	case  enuCtdv_113P_G011:     memcpy(clCnabCobSegmentoP::m_Ctdv_113P_G011, v_Incoming_Data, _Ctdv_113P_G011);  break;
	case  enuAgct_123P_G012:     memcpy(clCnabCobSegmentoP::m_Agct_123P_G012, v_Incoming_Data, _Agct_123P_G012);  break;
	case  enuNbkn_133P_G069:     memcpy(clCnabCobSegmentoP::m_Nbkn_133P_G069, v_Incoming_Data, _Nbkn_133P_G069);  break;
	case  enuCart_143P_C006:     memcpy(clCnabCobSegmentoP::m_Cart_143P_C006, v_Incoming_Data, _Cart_143P_C006);  break;
	case  enuFcad_153P_C007:     memcpy(clCnabCobSegmentoP::m_Fcad_153P_C007, v_Incoming_Data, _Fcad_153P_C007);  break;
	case  enuTpdc_163P_C008:     memcpy(clCnabCobSegmentoP::m_Tpdc_163P_C008, v_Incoming_Data, _Tpdc_163P_C008);  break;
	case  enuEmit_173P_C009:     memcpy(clCnabCobSegmentoP::m_Emit_173P_C009, v_Incoming_Data, _Emit_173P_C009);  break;
	case  enuDist_183P_C010:     memcpy(clCnabCobSegmentoP::m_Dist_183P_C010, v_Incoming_Data, _Dist_183P_C010);  break;
	case  enuNdoc_193P_C011:     memcpy(clCnabCobSegmentoP::m_Ndoc_193P_C011, v_Incoming_Data, _Ndoc_193P_C011);  break;
	case  enuDtvn_203P_C012:     memcpy(clCnabCobSegmentoP::m_Dtvn_203P_C012, v_Incoming_Data, _Dtvn_203P_C012);  break;
	case  enuVlrt_213P_G070:     memcpy(clCnabCobSegmentoP::m_Vlrt_213P_G070, v_Incoming_Data, _Vlrt_213P_G070);  break;
	case  enuAgec_223P_C014:     memcpy(clCnabCobSegmentoP::m_Agec_223P_C014, v_Incoming_Data, _Agec_223P_C014);  break;
	case  enuAgdv_233P_G009:     memcpy(clCnabCobSegmentoP::m_Agdv_233P_G009, v_Incoming_Data, _Agdv_233P_G009);  break;
	case  enuEspt_243P_C015:     memcpy(clCnabCobSegmentoP::m_Espt_243P_C015, v_Incoming_Data, _Espt_243P_C015);  break;
	case  enuAcei_253P_C016:     memcpy(clCnabCobSegmentoP::m_Acei_253P_C016, v_Incoming_Data, _Acei_253P_C016);  break;
	case  enuDtem_263P_G071:     memcpy(clCnabCobSegmentoP::m_Dtem_263P_G071, v_Incoming_Data, _Dtem_263P_G071);  break;
	case  enuJurs_273P_C018:     memcpy(clCnabCobSegmentoP::m_Jurs_273P_C018, v_Incoming_Data, _Jurs_273P_C018);  break;
	case  enuDtjm_283P_C019:     memcpy(clCnabCobSegmentoP::m_Dtjm_283P_C019, v_Incoming_Data, _Dtjm_283P_C019);  break;
	case  enuJurm_293P_C020:     memcpy(clCnabCobSegmentoP::m_Jurm_293P_C020, v_Incoming_Data, _Jurm_293P_C020);  break;
	case  enuCdes_303P_C021:     memcpy(clCnabCobSegmentoP::m_Cdes_303P_C021, v_Incoming_Data, _Cdes_303P_C021);  break;
	case  enuDtde_313P_C022:     memcpy(clCnabCobSegmentoP::m_Dtde_313P_C022, v_Incoming_Data, _Dtde_313P_C022);  break;
	case  enuVlrd_323P_C023:     memcpy(clCnabCobSegmentoP::m_Vlrd_323P_C023, v_Incoming_Data, _Vlrd_323P_C023);  break;
	case  enuViof_333P_C024:     memcpy(clCnabCobSegmentoP::m_Viof_333P_C024, v_Incoming_Data, _Viof_333P_C024);  break;
	case  enuVabt_343P_G045:     memcpy(clCnabCobSegmentoP::m_Vabt_343P_G045, v_Incoming_Data, _Vabt_343P_G045);  break;
	case  enuNcre_353P_G072:     memcpy(clCnabCobSegmentoP::m_Ncre_353P_G072, v_Incoming_Data, _Ncre_353P_G072);  break;
	case  enuProt_363P_C026:     memcpy(clCnabCobSegmentoP::m_Prot_363P_C026, v_Incoming_Data, _Prot_363P_C026);  break;
	case  enuPpro_373P_C027:     memcpy(clCnabCobSegmentoP::m_Ppro_373P_C027, v_Incoming_Data, _Ppro_373P_C027);  break;
	case  enuCbax_383P_C028:     memcpy(clCnabCobSegmentoP::m_Cbax_383P_C028, v_Incoming_Data, _Cbax_383P_C028);  break;
	case  enuPbax_393P_C029:     memcpy(clCnabCobSegmentoP::m_Pbax_393P_C029, v_Incoming_Data, _Pbax_393P_C029);  break;
	case  enuCmoe_403P_G065:     memcpy(clCnabCobSegmentoP::m_Cmoe_403P_G065, v_Incoming_Data, _Cmoe_403P_G065);  break;
	case  enuNcon_413P_C030:     memcpy(clCnabCobSegmentoP::m_Ncon_413P_C030, v_Incoming_Data, _Ncon_413P_C030);  break;
	case  enuLivr_423P_C077:     memcpy(clCnabCobSegmentoP::m_Livr_423P_C077, v_Incoming_Data, _Livr_423P_C077);  break;

	default:
		break;
	}
}
