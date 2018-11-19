#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON7_H)
#define _CLCNABPGTSEMENTON7_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoN7Three
{
public:
	clCabPgtSegmentoN7Three();
	~clCabPgtSegmentoN7Three();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Crtb_013N7_N002[_Crtb_013N7_N002];
	char m_Tidc_023N7_N003[_Tidc_023N7_N003];
	char m_Idct_033N7_N004[_Idct_033N7_N004];
	char m_Idtb_043N7_N005[_Idtb_043N7_N005];
	char m_Anob_053N7_N015[_Anob_053N7_N015];
	char m_Rnva_063N7_N016[_Rnva_063N7_N016];
	char m_Estd_073N7_G036[_Estd_073N7_G036];
	char m_Cdmn_083N7_N017[_Cdmn_083N7_N017];
	char m_Plac_093N7_N018[_Plac_093N7_N018];
	char m_Oppg_103N7_N019[_Oppg_103N7_N019];
	char m_Oprt_113N7_N020[_Oprt_113N7_N020];
	char m_Nrnv_123N7_N016[_Nrnv_123N7_N016];
	char m_Cnab_133N7_G004[_Cnab_133N7_G004];
};
#endif //_CLCNABPGTSEMENTON7_H
