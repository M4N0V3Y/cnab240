#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBSEGMENTOST3_H)
#define _CLCNABCOBSEGMENTOST3_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoST3
{
public:
	clCnabCobSegmentoST3();
	~clCnabCobSegmentoST3();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_TpprA_083S_C040[_TpprA_083S_C040];
	char m_Msg5_093S_C037[_Msg5_093S_C037];
	char m_Msg6_103S_C037[_Msg6_103S_C037];
	char m_Msg7_113S_C037[_Msg7_113S_C037];
	char m_Msg8_123S_C037[_Msg8_123S_C037];
	char m_Msg9_133S_C037[_Msg9_133S_C037];
	char m_Cnab_143S_G004[_Cnab_143S_G004];
};
#endif //_CLCNABCOBSEGMENTOST3_H