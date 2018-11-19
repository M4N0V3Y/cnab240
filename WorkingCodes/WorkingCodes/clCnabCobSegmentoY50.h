#pragma once
#include "ConstantDefAndEnum.h"
#if !defined(_CLCNABCOBSEGMENTOY50_H)
#define _CLCNABCOBSEGMENTOY50_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoY50
{
public:
	clCnabCobSegmentoY50();
	~clCnabCobSegmentoY50();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013Y50_G001[_Cban_013Y50_G001];
	char m_Lots_023Y50_G002[_Lots_023Y50_G002];
	char m_Rgst_033Y50_G003[_Rgst_033Y50_G003];
	char m_Oper_043Y50_G038[_Oper_043Y50_G038];
	char m_Segm_053Y50_G039[_Segm_053Y50_G039];
	char m_Cnab_063Y50_G004[_Cnab_063Y50_G004];
	char m_Cmov_073Y50_C004[_Cmov_073Y50_C004];
	char m_Rgop_083Y50_G067[_Rgop_083Y50_G067];
	char m_Agen_093Y50_G008[_Agen_093Y50_G008];
	char m_Agdv_103Y50_G009[_Agdv_103Y50_G009];
	char m_Cont_113Y50_G010[_Cont_113Y50_G010];
	char m_Ctdv_123Y50_G011[_Ctdv_123Y50_G011];
	char m_Agct_133Y50_G012[_Agct_133Y50_G012];
	char m_Nbkn_143Y50_G069[_Nbkn_143Y50_G069];
	char m_Crtb_153Y50_C061[_Crtb_153Y50_C061];
	char m_Tpvl_163Y50_C062[_Tpvl_163Y50_C062];
	char m_Pcvl_173Y50_C074[_Pcvl_173Y50_C074];
	char m_Cban_183Y50_G001[_Cban_183Y50_G001];
	char m_Agen_193Y50_G008[_Agen_193Y50_G008];
	char m_Agdv_203Y50_G009[_Agdv_203Y50_G009];
	char m_Cont_213Y50_G010[_Cont_213Y50_G010];
	char m_Ctdv_223Y50_G011[_Ctdv_223Y50_G011];
	char m_Agct_233Y50_G012[_Agct_233Y50_G012];
	char m_Nomb_243Y50_G013[_Nomb_243Y50_G013];
	char m_Parc_253Y50_C063[_Parc_253Y50_C063];
	char m_Qtdd_263Y50_C064[_Qtdd_263Y50_C064];
	char m_Dtcr_273Y50_C065[_Dtcr_273Y50_C065];
	char m_Motr_283Y50_C066[_Motr_283Y50_C066];
	char m_Ispb_293Y50_P015[_Ispb_293Y50_P015];
	char m_Cnab_303Y50_G004[_Cnab_303Y50_G004];
};
#endif //_CLCNABCOBSEGMENTOY50_H
