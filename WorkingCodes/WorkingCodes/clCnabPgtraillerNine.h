#pragma once
#include "ConstantDefAndEnum.h"
#if !defined(_CLCNABPGTRAILEERNINE_H)
#define _CLCNABPGTRAILEERNINE_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabPgtraillerNine
{
public:
	clCnabPgtraillerNine();
	~clCnabPgtraillerNine();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_019_G001[_Cban_019_g001];
	char m_Lots_029_G002[_Lots_029_g002];
	char m_Rgst_039_G003[_Rgst_039_g003];
	char m_Cnab_049_G004[_Cnab_049_g004];
	char m_Totl_059_G049[_Totl_059_g049];
	char m_Qtrg_069_G056[_Qtrg_069_g056];
	char m_Qtcc_079_G073[_Qtcc_079_g073];
	char m_Rsfb_089_G004[_Rsfb_089_g004];
};
#endif //

