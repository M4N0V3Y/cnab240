#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOW1_H)
#define _CLCNABPGTSEMENTOW1_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoW1Three
{
public:
	clCabPgtSegmentoW1Three();
	~clCabPgtSegmentoW1Three();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Idtb_103W_N027[_Idtb_103W_N027];
	char m_Crtb_103W_N002[_Crtb_103W_N002];
	char m_Tidc_103W_N003[_Tidc_103W_N003];
	char m_Idct_103W_N004[_Idct_103W_N004];
	char m_Fgts_103W_N021[_Fgts_103W_N021];
	char m_Lacr_103W_N028[_Lacr_103W_N028];
	char m_Ladv_103W_N029[_Ladv_103W_N029];
	char m_Cnab_103W_G004[_Cnab_103W_G004];

};
#endif //_CLCNABPGTSEMENTOW1_H