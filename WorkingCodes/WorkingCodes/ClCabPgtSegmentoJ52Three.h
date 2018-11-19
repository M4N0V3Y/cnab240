#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTSEMENTOJ52_H)
#define _CLCNABPGTSEMENTOJ52_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class ClCabPgtSegmentoJ52Three
{
public:
	ClCabPgtSegmentoJ52Three();
	~ClCabPgtSegmentoJ52Three();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);

private:
	char m_Cban_014J52_G001[_Cban_014J52_G001];
	char m_Lots_024J52_G002[_Lots_024J52_G002];
	char m_Rgst_034J52_G003[_Rgst_034J52_G003];
	char m_Oper_044J52_G038[_Oper_044J52_G038];
	char m_Segm_054J52_G039[_Segm_054J52_G039];
	char m_Cnab_064J52_G004[_Cnab_064J52_G004];
	char m_Cmov_074J52_C004[_Cmov_074J52_C004];
	char m_Rgop_084J52_G067[_Rgop_084J52_G067];
	char m_Tpdc_094J52_G005[_Tpdc_094J52_G005];
	char m_Cpfj_104J52_G006[_Cpfj_104J52_G006];
	char m_Nmpg_114J52_G013[_Nmpg_114J52_G013];
	char m_Tpdc_124J52_G005[_Tpdc_124J52_G005];
	char m_Cpfj_134J52_G006[_Cpfj_134J52_G006];
	char m_Nmbn_144J52_G013[_Nmbn_144J52_G013];
	char m_Tpdc_154J52_G005[_Tpdc_154J52_G005];
	char m_Cpfj_164J52_G006[_Cpfj_164J52_G006];
	char m_Nmpg_174J52_G013[_Nmpg_174J52_G013];
	char m_Rsfb_184J52_G004[_Rsfb_184J52_G004];

};

#endif // _CLCNABPGTSEMENTOJ52_H