#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOJ_H)
#define _CLCNABPGTSEMENTOJ_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class ClCabPgtSegmentoJThree
{
public:
	ClCabPgtSegmentoJThree();
	~ClCabPgtSegmentoJThree();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);

private:
	char m_Cban_013J_G001[_Cban_013J_G001];
	char m_Lots_023J_G002[_Lots_023J_G002];
	char m_Rgst_033J_G003[_Rgst_033J_G003];
	char m_Oper_043J_G038[_Oper_043J_G038];
	char m_Srvc_053J_G039[_Srvc_053J_G039];
	char m_Tmov_063J_G060[_Tmov_063J_G060];
	char m_Cmov_073J_G061[_Cmov_073J_G061];
	char m_Barr_083J_G063[_Barr_083J_G063];
	char m_Nomb_093J_G013[_Nomb_093J_G013];
	char m_Dtvn_103J_G044[_Dtvn_103J_G044];
	char m_Vlrt_113J_G042[_Vlrt_113J_G042];
	char m_Desc_123J_L002[_Desc_123J_L002];
	char m_Acrs_133J_L003[_Acrs_133J_L003];
	char m_Dtpg_143J_P009[_Dtpg_143J_P009];
	char m_Vlrp_153J_P010[_Vlrp_153J_P010];
	char m_Qtmd_163J_G041[_Qtmd_163J_G041];
	char m_Rfpg_173J_G064[_Rfpg_173J_G064];
	char m_Nbnk_183J_G043[_Nbnk_183J_G043];
	char m_Moed_193J_G065[_Moed_193J_G065];
	char m_Cnab_203J_G004[_Cnab_203J_G004];
	char m_Occr_213J_G059[_Occr_213J_G059];
};

#endif // _CLCNABPGTSEMENTOJ_H