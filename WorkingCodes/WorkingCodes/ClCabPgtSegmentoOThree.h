#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOO_H)
#define _CLCNABPGTSEMENTOO_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class ClCabPgtSegmentoOThree
{
public:
	ClCabPgtSegmentoOThree();
	~ClCabPgtSegmentoOThree();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);

private:
	char m_Cban_013O_G001[_Cban_013O_G001];
	char m_Lots_023O_G002[_Lots_023O_G002];
	char m_Rgst_033O_G003[_Rgst_033O_G003];
	char m_Oper_043O_G038[_Oper_043O_G038];
	char m_Segm_053O_G039[_Segm_053O_G039];
	char m_Tmov_063O_G060[_Tmov_063O_G060];
	char m_Cmov_073O_G061[_Cmov_073O_G061];
	char m_Barr_083O_N001[_Barr_083O_N001];
	char m_Nmor_093O_G013[_Nmor_093O_G013];
	char m_Dtvn_103O_G044[_Dtvn_103O_G044];
	char m_Dtpg_113O_P009[_Dtpg_113O_P009];
	char m_Vlpg_123O_P004[_Vlpg_123O_P004];
	char m_Nucl_133O_G064[_Nucl_133O_G064];
	char m_Nubk_143O_G043[_Nubk_143O_G043];
	char m_Cnab_153O_G004[_Cnab_153O_G004];
	char m_Occr_163O_G059[_Occr_163O_G059];
};

#endif // _CLCNABPGTSEMENTOO_H