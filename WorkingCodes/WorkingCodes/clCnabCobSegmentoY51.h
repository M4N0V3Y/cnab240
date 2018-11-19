#pragma once
#include "ConstantDefAndEnum.h"
#if !defined(_CLCNABCOBSEGMENTOY51_H)
#define _CLCNABCOBSEGMENTOY51_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoY51
{
public:
	clCnabCobSegmentoY51();
	~clCnabCobSegmentoY51();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013Y51_G001[_Cban_013Y51_G001];
	char m_Lots_023Y51_G002[_Lots_023Y51_G002];
	char m_Rgst_033Y51_G003[_Rgst_033Y51_G003];
	char m_Oper_043Y51_G038[_Oper_043Y51_G038];
	char m_Segm_053Y51_G039[_Segm_053Y51_G039];
	char m_Cnab_063Y51_G004[_Cnab_063Y51_G004];
	char m_Cmov_073Y51_C004[_Cmov_073Y51_C004];
	char m_Rgop_083Y51_G067[_Rgop_083Y51_G067];
	char m_Nf01_093Y51_C067[_Nf01_093Y51_C067];
	char m_Vlnf_103Y51_C068[_Vlnf_103Y51_C068];
	char m_Dtem_113Y51_C069[_Dtem_113Y51_C069];
	char m_Nf02_123Y51_C067[_Nf02_123Y51_C067];
	char m_Vlnf_133Y51_C068[_Vlnf_133Y51_C068];
	char m_Dtem_143Y51_C069[_Dtem_143Y51_C069];
	char m_Nf03_153Y51_C067[_Nf03_153Y51_C067];
	char m_Vlnf_163Y51_C068[_Vlnf_163Y51_C068];
	char m_Dtem_173Y51_C069[_Dtem_173Y51_C069];
	char m_Nf04_183Y51_C067[_Nf04_183Y51_C067];
	char m_Vlnf_193Y51_C068[_Vlnf_193Y51_C068];
	char m_Dtem_203Y51_C069[_Dtem_203Y51_C069];
	char m_Nf05_213Y51_C067[_Nf05_213Y51_C067];
	char m_Vlnf_223Y51_C068[_Vlnf_223Y51_C068];
	char m_Dtem_233Y51_C069[_Dtem_233Y51_C069];
	char m_Cnab_243Y51_G004[_Cnab_243Y51_G004];
};
#endif //_CLCNABCOBSEGMENTOY51_H
