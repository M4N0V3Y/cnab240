#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBHEADERONE_H)
#define _CLCNABCOBHEADERONE_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>

class clCnabCobHeaderOne
{
public:
	clCnabCobHeaderOne();
	~clCnabCobHeaderOne();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_011_G001[_Cban_011_G001];
	char m_Lots_021_G002[_Lots_021_G002];
	char m_Rgst_031_G003[_Rgst_031_G003];
	char m_Oper_041_G028[_Oper_041_G028];
	char m_Srvc_051_G025[_Srvc_051_G025];
	char m_Cnab_061_G004[_Cnab_061_G004];
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
	char m_Inf1_181_C073[_Inf1_181_C073];
	char m_Inf2_191_C073[_Inf2_191_C073];
	char m_Ctco_201_G079[_Ctco_201_G079];
	char m_Dtgv_211_G068[_Dtgv_211_G068];
	char m_Dtcr_221_C003[_Dtcr_221_C003];
	char m_Cnab_231_G004[_Cnab_231_G004];
};
#endif //_CLCNABCOBHEADERONE_H
