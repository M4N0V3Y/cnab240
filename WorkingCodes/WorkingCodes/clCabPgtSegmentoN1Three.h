#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON1_H)
#define _CLCNABPGTSEMENTON1_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoN1Three
{
public:
	clCabPgtSegmentoN1Three();
	~clCabPgtSegmentoN1Three();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Crtb_013N1_N002[_Crtb_013N1_N002];
	char m_Tidc_023N1_N003[_Tidc_023N1_N003];
	char m_Idct_033N1_N004[_Idct_033N1_N004];
	char m_Idtb_043N1_N005[_Idtb_043N1_N005];
	char m_Mean_053N1_N006[_Mean_053N1_N006];
	char m_Vlrt_063N1_G055[_Vlrt_063N1_G055];
	char m_Vlro_073N1_G054[_Vlro_073N1_G054];
	char m_Crmo_083N1_N007[_Crmo_083N1_N007];
	char m_Cnab_093N1_G004[_Cnab_093N1_G004];
};

#endif //_CLCNABPGTSEMENTON1_H