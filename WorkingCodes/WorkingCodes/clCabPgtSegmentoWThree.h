#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOW_H)
#define _CLCNABPGTSEMENTOW_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoWThree
{
public:
	clCabPgtSegmentoWThree();
	~clCabPgtSegmentoWThree();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013W_G001[_Cban_013W_G001];
	char m_Lots_023W_G002[_Lots_023W_G002];
	char m_Rgst_033W_G003[_Rgst_033W_G003];
	char m_Oper_043W_G038[_Oper_043W_G038];
	char m_Segm_053W_G039[_Segm_053W_G039];
	char m_Cseg_063W_N023[_Cseg_063W_N023];
	char m_Idif_073W_N024[_Idif_073W_N024];
	char m_Cpl1_083W_N025[_Cpl1_083W_N025];
	char m_Cpl2_093W_N025[_Cpl2_093W_N025];
	char m_Cpl3_103W_N027[_Cpl3_103W_N027];
	char m_Cptb_103W_N026[_Cptb_103W_N026];
	char m_Resv_113W_G004[_Resv_113W_G004];
	char m_Occr_123W_G059[_Occr_123W_G059];
};
#endif // _CLCNABPGTSEMENTOW_H