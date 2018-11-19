#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOB_H)
#define _CLCNABPGTSEMENTOB_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class ClCabPgtSegmentoBThree
{
public:
	ClCabPgtSegmentoBThree();
	~ClCabPgtSegmentoBThree();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
public:
	char m_Cban_013b_G001[_Cban_013b_G001];
	char m_Lots_023b_G002[_Lots_023b_G002];
	char m_Rgst_033b_G003[_Rgst_033b_G003];
	char m_Oper_043b_G038[_Oper_043b_G038];
	char m_Srvc_053b_G039[_Srvc_053b_G039];
	char m_Cnab_063b_G004[_Cnab_063b_G004];
	char m_Tpem_073b_G005[_Tpem_073b_G005];
	char m_Cnpj_083b_G006[_Cnpj_083b_G006];
	char m_Lgrd_093b_G032[_Lgrd_093b_G032];
	char m_Numr_103b_G032[_Numr_103b_G032];
	char m_Cmpl_113b_G032[_Cmpl_113b_G032];
	char m_Bair_123b_G032[_Bair_123b_G032];
	char m_Cidd_133b_G033[_Cidd_133b_G033];
	char m_Ncep_143b_G034[_Ncep_143b_G034];
	char m_Ccep_153b_G035[_Ccep_153b_G035];
	char m_Estd_163b_G036[_Estd_163b_G036];
	char m_Dtvn_173b_G044[_Dtvn_173b_G044];
	char m_Vlrd_183b_G042[_Vlrd_183b_G042];
	char m_Abtm_193b_G045[_Abtm_193b_G045];
	char m_Desc_203b_G046[_Desc_203b_G046];
	char m_Mora_213b_G047[_Mora_213b_G047];
	char m_Mult_223b_G048[_Mult_223b_G048];
	char m_Codd_233b_P008[_Codd_233b_P008];
	char m_Avso_243b_P006[_Avso_243b_P006];
	char m_Cbug_253b_P012[_Cbug_253b_P012];
	char m_Ispb_263b_P015[_Ispb_263b_P015];
};

#endif// _CLCNABPGTSEMENTOB_H