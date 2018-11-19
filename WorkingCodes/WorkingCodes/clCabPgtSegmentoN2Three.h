#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON2_H)
#define _CLCNABPGTSEMENTON2_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoN2Three
{
public:
	clCabPgtSegmentoN2Three();
	~clCabPgtSegmentoN2Three();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Crtb_013N2_N002[_Crtb_013N2_N002];
	char m_Tidc_023N2_N003[_Tidc_023N2_N003];
	char m_Idct_033N2_N004[_Idct_033N2_N004];
	char m_Idtb_043N2_N005[_Idtb_043N2_N005];
	char m_Apur_053N2_N008[_Apur_053N2_N008];
	char m_Nref_063N2_N009[_Nref_063N2_N009];
	char m_Vlrp_073N2_G042[_Vlrp_073N2_G042];
	char m_Vmul_083N2_G048[_Vmul_083N2_G048];
	char m_Vjre_093N2_G047[_Vjre_093N2_G047];
	char m_Dtvn_103N2_G044[_Dtvn_103N2_G044];
	char m_Cnab_113N2_G004[_Cnab_113N2_G004];
};

#endif //_CLCNABPGTSEMENTON2_H