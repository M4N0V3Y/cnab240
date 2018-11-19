#pragma once
#include "ConstantDefAndEnum.h"
#if !defined(_CLCNABCOBSEGMENTOY05_H)
#define _CLCNABCOBSEGMENTOY05_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoY05
{
public:
	clCnabCobSegmentoY05();
	~clCnabCobSegmentoY05();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_015Y_G001[_Cban_015Y_G001];
	char m_Lots_025Y_G002[_Lots_025Y_G002];
	char m_Rgst_035Y_G003[_Rgst_035Y_G003];
	char m_Oper_045Y_G038[_Oper_045Y_G038];
	char m_Segm_055Y_G039[_Segm_055Y_G039];
	char m_Cnab_065Y_G004[_Cnab_065Y_G004];
	char m_Cmov_075Y_C044[_Cmov_075Y_C044];
	char m_Rgop_085Y_G067[_Rgop_085Y_G067];
	char m_Cmc7_095Y_C076[_Cmc7_095Y_C076];
	char m_Cmc7_105Y_C076[_Cmc7_105Y_C076];
	char m_Cmc7_115Y_C076[_Cmc7_115Y_C076];
	char m_Cmc7_125Y_C076[_Cmc7_125Y_C076];
	char m_Cmc7_135Y_C076[_Cmc7_135Y_C076];
	char m_Cmc7_145Y_C076[_Cmc7_145Y_C076];
	char m_Cnab_155Y_G004[_Cnab_155Y_G004];
};
#endif //_CLCNABCOBSEGMENTOY05_H
