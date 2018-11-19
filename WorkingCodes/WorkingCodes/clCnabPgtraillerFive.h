#pragma once
#include "ConstantDefAndEnum.h"
#if !defined(_CLCNABPGTRAILEERFIVE_H)
#define _CLCNABPGTRAILEERFIVE_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabPgtraillerFive
{
public:
	clCnabPgtraillerFive();
	~clCnabPgtraillerFive();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_015_G001[_Cban_015_G001];
	char m_Lots_025_G002[_Lots_025_G002];
	char m_Rgst_035_G003[_Rgst_035_G003];
	char m_Cnab_045_G004[_Cnab_045_G004];
	char m_Totl_055_G057[_Totl_055_G057];
	char m_Svlr_065_P007[_Svlr_065_P007];
	char m_Qtmd_075_G058[_Qtmd_075_G058];
	char m_Navd_085_G066[_Navd_085_G066];
	char m_Cnab_095_G004[_Cnab_095_G004];
	char m_Occr_105_G059[_Occr_105_G059];
};

#endif // _CLCNABPGTRAILEERFIVE_H