#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBSEGMENTOY04_H)
#define _CLCNABCOBSEGMENTOY04_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoY04
{
public:
	clCnabCobSegmentoY04();
	~clCnabCobSegmentoY04();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_014Y_G001[_Cban_014Y_G001];
	char m_Lots_024Y_G002[_Lots_024Y_G002];
	char m_Rgst_034Y_G003[_Rgst_034Y_G003];
	char m_Oper_044Y_G038[_Oper_044Y_G038];
	char m_Segm_054Y_G039[_Segm_054Y_G039];
	char m_Cnab_064Y_G004[_Cnab_064Y_G004];
	char m_Cmov_074Y_C004[_Cmov_074Y_C004];
	char m_Rgop_084Y_G067[_Rgop_084Y_G067];
	char m_Emal_094Y_G032[_Emal_094Y_G032];
	char m_Ddcl_104Y_G032[_Ddcl_104Y_G032];
	char m_Ncel_114Y_G032[_Ncel_114Y_G032];
	char m_Cnab_124Y_G004[_Cnab_124Y_G004];
};
#endif //_CLCNABCOBSEGMENTOY04_H
