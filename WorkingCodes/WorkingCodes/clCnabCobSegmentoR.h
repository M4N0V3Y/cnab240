#pragma once
#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABCOBSEGMENTOR_H)
#define _CLCNABCOBSEGMENTOR_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>
class clCnabCobSegmentoR
{
public:
	clCnabCobSegmentoR();
	~clCnabCobSegmentoR();
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char m_Cban_013R_G001[_Cban_013R_G001];
	char m_Lots_023R_G002[_Lots_023R_G002];
	char m_Rgst_033R_G003[_Rgst_033R_G003];
	char m_Oper_043R_G038[_Oper_043R_G038];
	char m_Segm_053R_G039[_Segm_053R_G039];
	char m_Cnab_063R_G004[_Cnab_063R_G004];
	char m_Cmov_073R_C004[_Cmov_073R_C004];
	char m_Desc_083R_C021[_Desc_083R_C021];
	char m_Dtds_093R_C022[_Dtds_093R_C022];
	char m_Vlds_103R_C023[_Vlds_103R_C023];
	char m_Desc_113R_C021[_Desc_113R_C021];
	char m_Dtds_123R_C022[_Dtds_123R_C022];
	char m_Vlds_133R_C023[_Vlds_133R_C023];
	char m_Mult_143R_G073[_Mult_143R_G073];
	char m_Dtmu_153R_G074[_Dtmu_153R_G074];
	char m_Vlmu_163R_G075[_Vlmu_163R_G075];
	char m_Infp_173R_C036[_Infp_173R_C036];
	char m_Inf3_183R_C037[_Inf3_183R_C037];
	char m_Inf4_193R_C037[_Inf4_193R_C037];
	char m_Cnab_203R_G004[_Cnab_203R_G004];
	char m_Cocr_213R_C038[_Cocr_213R_C038];
	char m_Ddeb_223R_G001[_Ddeb_223R_G001];
	char m_Agen_233R_G008[_Agen_233R_G008];
	char m_Agdv_243R_G009[_Agdv_243R_G009];
	char m_Cont_253R_G010[_Cont_253R_G010];
	char m_Ctdv_263R_G011[_Ctdv_263R_G011];
	char m_Agct_273R_G012[_Agct_273R_G012];
	char m_Iead_283R_C039[_Iead_283R_C039];
	char m_Cnab_293R_G004[_Cnab_293R_G004];
};
#endif //_CLCNABCOBSEGMENTOR_H
