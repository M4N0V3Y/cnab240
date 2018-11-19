#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBSEGMENTOP_H)
#define _CLCNABCOBSEGMENTOP_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>

class clCnabCobSegmentoP
{
public:
	clCnabCobSegmentoP();
	~clCnabCobSegmentoP();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013P_G001[_Cban_013P_G001];
	char m_Lots_023P_G002[_Lots_023P_G002];
	char m_Rgst_033P_G003[_Rgst_033P_G003];
	char m_Oper_043P_G038[_Oper_043P_G038];
	char m_Segm_053P_G039[_Segm_053P_G039];
	char m_Cnab_063P_G004[_Cnab_063P_G004];
	char m_Cmov_073P_C004[_Cmov_073P_C004];
	char m_Agen_083P_G008[_Agen_083P_G008];
	char m_Agdv_093P_G009[_Agdv_093P_G009];
	char m_Cont_103P_G010[_Cont_103P_G010];
	char m_Ctdv_113P_G011[_Ctdv_113P_G011];
	char m_Agct_123P_G012[_Agct_123P_G012];
	char m_Nbkn_133P_G069[_Nbkn_133P_G069];
	char m_Cart_143P_C006[_Cart_143P_C006];
	char m_Fcad_153P_C007[_Fcad_153P_C007];
	char m_Tpdc_163P_C008[_Tpdc_163P_C008];
	char m_Emit_173P_C009[_Emit_173P_C009];
	char m_Dist_183P_C010[_Dist_183P_C010];
	char m_Ndoc_193P_C011[_Ndoc_193P_C011];
	char m_Dtvn_203P_C012[_Dtvn_203P_C012];
	char m_Vlrt_213P_G070[_Vlrt_213P_G070];
	char m_Agec_223P_C014[_Agec_223P_C014];
	char m_Agdv_233P_G009[_Agdv_233P_G009];
	char m_Espt_243P_C015[_Espt_243P_C015];
	char m_Acei_253P_C016[_Acei_253P_C016];
	char m_Dtem_263P_G071[_Dtem_263P_G071];
	char m_Jurs_273P_C018[_Jurs_273P_C018];
	char m_Dtjm_283P_C019[_Dtjm_283P_C019];
	char m_Jurm_293P_C020[_Jurm_293P_C020];
	char m_Cdes_303P_C021[_Cdes_303P_C021];
	char m_Dtde_313P_C022[_Dtde_313P_C022];
	char m_Vlrd_323P_C023[_Vlrd_323P_C023];
	char m_Viof_333P_C024[_Viof_333P_C024];
	char m_Vabt_343P_G045[_Vabt_343P_G045];
	char m_Ncre_353P_G072[_Ncre_353P_G072];
	char m_Prot_363P_C026[_Prot_363P_C026];
	char m_Ppro_373P_C027[_Ppro_373P_C027];
	char m_Cbax_383P_C028[_Cbax_383P_C028];
	char m_Pbax_393P_C029[_Pbax_393P_C029];
	char m_Cmoe_403P_G065[_Cmoe_403P_G065];
	char m_Ncon_413P_C030[_Ncon_413P_C030];
	char m_Livr_423P_C077[_Livr_423P_C077];

};
#endif //_CLCNABCOBSEGMENTOP_H

