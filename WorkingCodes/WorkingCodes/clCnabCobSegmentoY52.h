#pragma once
#include "ConstantDefAndEnum.h"
#if !defined(_CLCNABCOBSEGMENTOY52_H)
#define _CLCNABCOBSEGMENTOY52_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoY52
{
public:
	clCnabCobSegmentoY52();
	~clCnabCobSegmentoY52();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013Y52_G001[_Cban_013Y52_G001];
	char m_Lots_023Y52_G002[_Lots_023Y52_G002];
	char m_Rgst_033Y52_G003[_Rgst_033Y52_G003];
	char m_Oper_043Y52_G038[_Oper_043Y52_G038];
	char m_Segm_053Y52_G039[_Segm_053Y52_G039];
	char m_Cnab_063Y52_G004[_Cnab_063Y52_G004];
	char m_Cmov_073Y52_C004[_Cmov_073Y52_C004];
	char m_Rgop_083Y52_G067[_Rgop_083Y52_G067];
	char m_Nf01_093Y52_C067[_Nf01_093Y52_C067];
	char m_Vlnf_103Y52_C068[_Vlnf_103Y52_C068];
	char m_Dtem_113Y52_C069[_Dtem_113Y52_C069];
	char m_Danf_123Y52_C083[_Danf_123Y52_C083];
	char m_Nf02_133Y52_C067[_Nf02_133Y52_C067];
	char m_Vlnf_143Y52_C068[_Vlnf_143Y52_C068];
	char m_Dtem_153Y52_C069[_Dtem_153Y52_C069];
	char m_Danf_163Y52_C083[_Danf_163Y52_C083];
	char m_Cnab_173Y52_G004[_Cnab_173Y52_G004];
};
#endif //_CLCNABCOBSEGMENTOY52_H

