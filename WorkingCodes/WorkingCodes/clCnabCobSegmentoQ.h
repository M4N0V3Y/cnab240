#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBSEGMENTOQ_H)
#define _CLCNABCOBSEGMENTOQ_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoQ
{
public:
	clCnabCobSegmentoQ();
	~clCnabCobSegmentoQ();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013Q_G001[_Cban_013Q_G001];
	char m_Lots_023Q_G002[_Lots_023Q_G002];
	char m_Rgst_033Q_G003[_Rgst_033Q_G003];
	char m_Oper_043Q_G038[_Oper_043Q_G038];
	char m_Segm_053Q_G039[_Segm_053Q_G039];
	char m_Cnab_063Q_G004[_Cnab_063Q_G004];
	char m_Cmov_073Q_C004[_Cmov_073Q_C004];
	char m_Tpem_083Q_G005[_Tpem_083Q_G005];
	char m_Cnpj_093Q_G006[_Cnpj_093Q_G006];
	char m_Nome_103Q_G013[_Nome_103Q_G013];
	char m_Lgrd_113Q_G032[_Lgrd_113Q_G032];
	char m_Bair_123Q_G032[_Bair_123Q_G032];
	char m_Ncep_133Q_G034[_Ncep_133Q_G034];
	char m_Ccep_143Q_G035[_Ccep_143Q_G035];
	char m_Cidd_153Q_G033[_Cidd_153Q_G033];
	char m_Estd_163Q_G036[_Estd_163Q_G036];
	char m_Tpem_173Q_G005[_Tpem_173Q_G005];
	char m_Cnpj_183Q_G006[_Cnpj_183Q_G006];
	char m_Nome_193Q_G013[_Nome_193Q_G013];
	char m_Cbnk_203Q_C031[_Cbnk_203Q_C031];
	char m_Nbnk_213Q_C032[_Nbnk_213Q_C032];
	char m_Cnab_223Q_G004[_Cnab_223Q_G004];
};

#endif // _CLCNABCOBSEGMENTOQ_H