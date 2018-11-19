#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOC_H)
#define _CLCNABPGTSEMENTOC_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoCThree
{
public:
	clCabPgtSegmentoCThree();
	~clCabPgtSegmentoCThree();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013C_G001[_Cban_013C_G001];
	char m_Lots_023C_G002[_Lots_023C_G002];
	char m_Rgst_033C_G003[_Rgst_033C_G003];
	char m_Oper_043C_G038[_Oper_043C_G038];
	char m_Srvc_053C_G039[_Srvc_053C_G039];
	char m_Cnab_063C_G004[_Cnab_063C_G004];
	char m_Vlir_073C_G050[_Vlir_073C_G050];
	char m_Viss_083C_G051[_Viss_083C_G051];
	char m_Viof_093C_G052[_Viof_093C_G052];
	char m_Vlod_103C_G053[_Vlod_103C_G053];
	char m_Vloa_113C_G054[_Vloa_113C_G054];
	char m_Agen_123C_G008[_Agen_123C_G008];
	char m_Agdv_133C_G009[_Agdv_133C_G009];
	char m_Cont_143C_G010[_Cont_143C_G010];
	char m_Ctdv_153C_G011[_Ctdv_153C_G011];
	char m_Agct_163C_G012[_Agct_163C_G012];
	char m_Inss_173C_G055[_Inss_173C_G055];
	char m_Ccrd_183C_P016[_Ccrd_183C_P016];
	char m_Cnab_193C_G004[_Cnab_193C_G004];
};

#endif //#define _CLCNABPGTSEMENTOC_H
