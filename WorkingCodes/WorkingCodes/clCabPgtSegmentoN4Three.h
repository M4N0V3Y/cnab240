#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON4_H)
#define _CLCNABPGTSEMENTON4_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoN4Three
{
public:
	clCabPgtSegmentoN4Three();
	~clCabPgtSegmentoN4Three();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Crtb_013N4_N002[_Crtb_013N4_N002];
	char m_Tidc_023N4_N003[_Tidc_023N4_N003];
	char m_Idct_033N4_N004[_Idct_033N4_N004];
	char m_Idtb_043N4_N005[_Idtb_043N4_N005];
	char m_Dtvn_053N4_G044[_Dtvn_053N4_G044];
	char m_Iecm_063N4_N012[_Iecm_063N4_N012];
	char m_Dvat_073N4_N013[_Dvat_073N4_N013];
	char m_Refr_083N4_N006[_Refr_083N4_N006];
	char m_Nnot_093N4_N014[_Nnot_093N4_N014];
	char m_Vlrc_103N4_G042[_Vlrc_103N4_G042];
	char m_Vjre_113N4_G047[_Vjre_113N4_G047];
	char m_Vmul_123N4_G048[_Vmul_123N4_G048];
	char m_Cnab_133N4_G004[_Cnab_133N4_G004];
};

#endif //_CLCNABPGTSEMENTON4_H

