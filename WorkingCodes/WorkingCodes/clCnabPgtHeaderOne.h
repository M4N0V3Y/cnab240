#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTHEADERONE_H)
#define _CLCNABPGTHEADERONE_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>

class clCnabPgtHeaderOne
{
public:
	clCnabPgtHeaderOne();
	~clCnabPgtHeaderOne();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_011_G001[_Cban_011_G001];
	char m_Lots_021_G002[_Lots_021_G002];
	char m_Rgst_031_G003[_Rgst_031_G003];
	char m_Oper_041_G028[_Oper_041_G028];
	char m_Srvc_051_G025[_Srvc_051_G025];
	char m_Flan_061_G029[_Flan_061_G029];
	char m_Layt_071_G030[_Layt_071_G030];
	char m_Cnab_081_G004[_Cnab_081_G004];
	char m_Tpem_091_G005[_Tpem_091_G005];
	char m_Cnpj_101_G006[_Cnpj_101_G006];
	char m_Cnvb_111_G007[_Cnvb_111_G007];
	char m_Agen_121_G008[_Agen_121_G008];
	char m_Agdv_131_G009[_Agdv_131_G009];
	char m_Cont_141_G010[_Cont_141_G010];
	char m_Ctdv_151_G011[_Ctdv_151_G011];
	char m_Agct_161_G012[_Agct_161_G012];
	char m_Rzsc_171_G013[_Rzsc_171_G013];
	char m_Mnsg_181_G031[_Mnsg_181_G031];
	char m_Lgrd_191_G032[_Lgrd_191_G032];
	char m_Numr_201_G032[_Numr_201_G032];
	char m_Cmpl_211_G032[_Cmpl_211_G032];
	char m_Cidd_221_C033[_Cidd_221_C033];
	char m_Ncep_231_G034[_Ncep_231_G034];
	char m_Ccep_241_G035[_Ccep_241_G035];
	char m_Estd_251_G036[_Estd_251_G036];
	char m_Fpgt_261_P014[_Fpgt_261_P014];
	char m_Rsfb_271_G004[_Rsfb_271_G004];
	char m_Occr_281_G059[_Occr_281_G059];
};

#endif //_CLCNABPGTHEADERONE_H