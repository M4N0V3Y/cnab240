#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTON_H)
#define _CLCNABPGTSEMENTON_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCabPgtSegmentoNThree
{
public:
	clCabPgtSegmentoNThree();
	~clCabPgtSegmentoNThree();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013N_G001[_Cban_013N_G001];
	char m_Lots_023N_G002[_Lots_023N_G002];
	char m_Rgst_033N_G003[_Rgst_033N_G003];
	char m_Oper_043N_G038[_Oper_043N_G038];
	char m_Segm_053N_G039[_Segm_053N_G039];
	char m_Tmov_063N_G060[_Tmov_063N_G060];
	char m_Cmov_073N_G061[_Cmov_073N_G061];
	char m_Nucl_083N_G064[_Nucl_083N_G064];
	char m_Nubk_093N_G043[_Nubk_093N_G043];
	char m_Nmcn_103N_G013[_Nmcn_103N_G013];
	char m_Dtpg_113N_P009[_Dtpg_113N_P009];
	char m_Vlpg_123N_P010[_Vlpg_123N_P010];
	char m_Infc_133N_GNNN[_Infc_133N_GNNN];
	char m_Occr_143N_G059[_Occr_143N_G059];
};

#endif //_CLCNABPGTSEMENTON_
