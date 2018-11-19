#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON8_H)
#define _CLCNABPGTSEMENTON8_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoN8Three
{
public:
	clCabPgtSegmentoN8Three();
	~clCabPgtSegmentoN8Three();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Crtb_013N8_N002[_Crtb_013N8_N002];
	char m_Tidc_023N8_N003[_Tidc_023N8_N003];
	char m_Idct_033N8_N004[_Idct_033N8_N004];
	char m_Iecm_043N8_N012[_Iecm_043N8_N012];
	char m_Dcor_033N8_N022[_Dcor_033N8_N022];
	char m_Vlrp_043N8_G042[_Vlrp_043N8_G042];
	char m_Crmo_053N8_N007[_Crmo_053N8_N007];
	char m_Vmor_063N8_G047[_Vmor_063N8_G047];
	char m_Vmul_073N8_G048[_Vmul_073N8_G048];
	char m_Dtvn_083N8_G044[_Dtvn_083N8_G044];
	char m_Vpar_093N8_N006[_Vpar_093N8_N006];
};
#endif // _CLCNABPGTSEMENTON8_H

