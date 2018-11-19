#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON6_H)
#define _CLCNABPGTSEMENTON6_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoN6Three
{
public:
	clCabPgtSegmentoN6Three();
	~clCabPgtSegmentoN6Three();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Crtb_013N6_N002[_Crtb_013N6_N002];
	char m_Tidc_023N6_N003[_Tidc_023N6_N003];
	char m_Idct_033N6_N004[_Idct_033N6_N004];
	char m_Idtb_043N6_N005[_Idtb_043N6_N005];
	char m_Anob_053N6_N015[_Anob_053N6_N015];
	char m_Rnva_063N6_N016[_Rnva_063N6_N016];
	char m_Estd_073N6_G036[_Estd_073N6_G036];
	char m_Cdmn_083N6_N017[_Cdmn_083N6_N017];
	char m_Plac_093N6_N018[_Plac_093N6_N018];
	char m_Oppg_103N6_N019[_Oppg_103N6_N019];
	char m_Nrnv_113N6_N016[_Nrnv_113N6_N016];
	char m_Cnab_123N6_G004[_Cnab_123N6_G004];
};
#endif // _CLCNABPGTSEMENTON6_H
