#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOW1_H)
#define _CLCNABPGTSEMENTOW1_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoZThree
{
public:
	clCabPgtSegmentoZThree();
	~clCabPgtSegmentoZThree();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013Z_G001[_Cban_013Z_G001];
	char m_Lots_023Z_G002[_Lots_023Z_G002];
	char m_Rgst_033Z_G003[_Rgst_033Z_G003];
	char m_Oper_043Z_G038[_Oper_043Z_G038];
	char m_Segm_053Z_G039[_Segm_053Z_G039];
	char m_Autt_063Z_Z001[_Autt_063Z_Z001];
	char m_Cbnk_083Z_Z002[_Cbnk_083Z_Z002];
	char m_Rsrv_093Z_G004[_Rsrv_093Z_G004];
	char m_Occr_103Z_G059[_Occr_103Z_G059];
};
#endif // _CLCNABPGTSEMENTOW1_H
