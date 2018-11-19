#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOA_H)
#define _CLCNABPGTSEMENTOA_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class ClCabPgtSegmentoAThree
{
public:
	ClCabPgtSegmentoAThree();
	~ClCabPgtSegmentoAThree();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);

private:
	char m_Cban_013a_G001[_Cban_013a_G001];
	char m_Lots_023a_G002[_Lots_023a_G002];
	char m_Rgst_033a_G003[_Rgst_033a_G003];
	char m_Oper_043a_G038[_Oper_043a_G038];
	char m_Srvc_053a_G039[_Srvc_053a_G039];
	char m_Tmov_063a_G060[_Tmov_063a_G060];
	char m_Cins_073a_G061[_Cins_073a_G061];
	char m_Camr_083a_P001[_Camr_083a_P001];
	char m_Bnkf_093a_P002[_Bnkf_093a_P002];
	char m_Agen_103a_G008[_Agen_103a_G008];
	char m_Agdv_113a_G009[_Agdv_113a_G009];
	char m_Cont_123a_G010[_Cont_123a_G010];
	char m_Ctdv_133a_G011[_Ctdv_133a_G011];
	char m_Agct_143a_G012[_Agct_143a_G012];
	char m_Nomf_153a_G013[_Nomf_153a_G013];
	char m_Crdt_163a_G064[_Crdt_163a_G064];
	char m_Dtpg_173a_P009[_Dtpg_173a_P009];
	char m_Moed_183a_G040[_Moed_183a_G040];
	char m_Qtde_193a_G041[_Qtde_193a_G041];
	char m_Vlor_203a_P010[_Vlor_203a_P010];
	char m_Nbnk_213a_G043[_Nbnk_213a_G043];
	char m_Dtrl_223a_P003[_Dtrl_223a_P003];
	char m_Vlrl_233a_P004[_Vlrl_233a_P004];
	char m_Inf2_243a_G031[_Inf2_243a_G031];
	char m_Cdoc_253a_P005[_Cdoc_253a_P005];
	char m_Ctde_263a_P011[_Ctde_263a_P011];
	char m_Ccpl_273a_P013[_Ccpl_273a_P013];
	char m_Cnab_283a_G004[_Cnab_283a_G004];
	char m_Avso_293a_P006[_Avso_293a_P006];
	char m_Occr_293a_G059[_Occr_293a_G059];
};

#endif //_CLCNABPGTSEMENTOA_H
