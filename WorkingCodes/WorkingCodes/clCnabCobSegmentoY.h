#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBSEGMENTOY_H)
#define _CLCNABCOBSEGMENTOY_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoY
{
public:
	clCnabCobSegmentoY();
	~clCnabCobSegmentoY();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013Y_G001[_Cban_013Y_G001];
	char m_Lots_023Y_G002[_Lots_023Y_G002];
	char m_Rgst_033Y_G003[_Rgst_033Y_G003];
	char m_Oper_043Y_G038[_Oper_043Y_G038];
	char m_Segm_053Y_G039[_Segm_053Y_G039];
	char m_Cnab_063Y_G004[_Cnab_063Y_G004];
	char m_Cmov_073Y_C004[_Cmov_073Y_C004];
	char m_Rgop_083Y_G067[_Rgop_083Y_G067];
	char m_Tpem_093Y_G005[_Tpem_093Y_G005];
	char m_Cnpj_103Y_G006[_Cnpj_103Y_G006];
	char m_Nome_113Y_C060[_Nome_113Y_C060];
	char m_Lgrd_123Y_G032[_Lgrd_123Y_G032];
	char m_Bair_133Y_G032[_Bair_133Y_G032];
	char m_Ncep_143Y_G034[_Ncep_143Y_G034];
	char m_Ccep_153Y_G035[_Ccep_153Y_G035];
	char m_Cidd_163Y_G033[_Cidd_163Y_G033];
	char m_Estd_173Y_G036[_Estd_173Y_G036];
	char m_Cnab_183Y_G004[_Cnab_183Y_G004];

};

#endif //_CLCNABCOBSEGMENTOY_H