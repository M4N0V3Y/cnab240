#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBSEGMENTOST1O2_H)
#define _CLCNABCOBSEGMENTOST1O2_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoST1O2
{
public:
	clCnabCobSegmentoST1O2();
	~clCnabCobSegmentoST1O2();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Tppr_083S_C040[_Tppr_083S_C040];
	char m_Nlin_093S_C041[_Nlin_093S_C041];
	char m_Msge_103S_C042[_Msge_103S_C042];
	char m_Tpfn_113S_C043[_Tpfn_113S_C043];
	char m_Cnab_123S_G004[_Cnab_123S_G004];
};
#endif //_CLCNABCOBSEGMENTOST1O2_H

