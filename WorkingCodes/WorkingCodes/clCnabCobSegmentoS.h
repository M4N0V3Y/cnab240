#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBSEGMENTOS_H)
#define _CLCNABCOBSEGMENTOS_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
//
#include "clCnabCobSegmentoST1O2.h"
#include "clCnabCobSegmentoST3.h"
class clCnabCobSegmentoS
{
public:
	clCnabCobSegmentoS();
	~clCnabCobSegmentoS();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
	clCnabCobSegmentoST1O2* o_CnabCobSegmentoST1O2;
	clCnabCobSegmentoST3*   o_CnabCobSegmentoST3;
private:
	char m_Cban_013S_G001[_Cban_013S_G001];
	char m_Lots_023S_G002[_Lots_023S_G002];
	char m_Rgst_033S_G003[_Rgst_033S_G003];
	char m_Oper_043S_G038[_Oper_043S_G038];
	char m_Segm_053S_G039[_Segm_053S_G039];
	char m_Cnab_063S_G004[_Cnab_063S_G004];
	char m_Cmov_073S_C004[_Cmov_073S_C004];
};
#endif //_CLCNABCOBSEGMENTOS_H
