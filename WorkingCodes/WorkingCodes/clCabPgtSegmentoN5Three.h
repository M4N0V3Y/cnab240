#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON5_H)
#define _CLCNABPGTSEMENTON5_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoN5Three
{
public:
	clCabPgtSegmentoN5Three();
	~clCabPgtSegmentoN5Three();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Crtb_013N5_N002[_Crtb_013N5_N002];
	char m_Tidc_023N5_N003[_Tidc_023N5_N003];
	char m_Idct_033N5_N004[_Idct_033N5_N004];
	char m_Idtb_043N5_N005[_Idtb_043N5_N005];
	char m_Anob_053N5_N015[_Anob_053N5_N015];
	char m_Rnva_063N5_N016[_Rnva_063N5_N016];
	char m_Estd_073N5_G036[_Estd_073N5_G036];
	char m_Cdmn_083N5_N017[_Cdmn_083N5_N017];
	char m_Plac_093N5_N018[_Plac_093N5_N018];
	char m_Oppg_103N5_N019[_Oppg_103N5_N019];
	char m_Nrnv_113N5_N016[_Nrnv_113N5_N016];
	char m_Cnab_123N5_G004[_Cnab_123N5_G004];
};

#endif //_CLCNABPGTSEMENTON5_H