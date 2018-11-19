#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON3_H)
#define _CLCNABPGTSEMENTON3_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoN3Three
{
public:
	clCabPgtSegmentoN3Three();
	~clCabPgtSegmentoN3Three();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Crtb_013N3_N002[_Crtb_013N3_N002];
	char m_Tidc_023N3_N003[_Tidc_023N3_N003];
	char m_Idct_033N3_N004[_Idct_033N3_N004];
	char m_Idtb_043N3_N005[_Idtb_043N3_N005];
	char m_Apur_053N3_N006[_Apur_053N3_N006];
	char m_Rbrt_063N3_N010[_Rbrt_063N3_N010];
	char m_Rper_073N3_N011[_Rper_073N3_N011];
	char m_Vlrp_083N3_G042[_Vlrp_083N3_G042];
	char m_Vmul_093N3_G048[_Vmul_093N3_G048];
	char m_Vjre_103N3_G047[_Vjre_103N3_G047];
	char m_Cnab_113N3_G004[_Cnab_113N3_G004];
};

#endif //_CLCNABPGTSEMENTON3_H
