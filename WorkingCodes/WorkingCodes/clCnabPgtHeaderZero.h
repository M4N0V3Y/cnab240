#pragma once
//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : clCnabPgtHeaderZero.h
//  @ Date : 20/01/2018
//  @ Author : 
//
//

#include "ConstantDefAndEnum.h"

#if !defined(_CLCNABPGTHEADERZERO_H)
#define _CLCNABPGTHEADERZERO_H
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>


class clCnabPgtHeaderZero {
public:
	clCnabPgtHeaderZero();
	~clCnabPgtHeaderZero();
	//
	char* getAttributeMember(int _enumPos);
	void  settAttributeMember(int _enumPos, char* v_Incoming_Data);
private:
	char	m_Cban_010_G001[_Cban_010_G001];
	char	m_Lots_020_G002[_Lots_020_G002];
	char 	m_Rgst_030_G003[_Rgst_030_G003];
	char 	m_Cnab_040_G004[_Cnab_040_G004];
	char 	m_Tpem_050_G005[_Tpem_050_G005];
	char 	m_Cnpj_060_G006[_Cnpj_060_G006];
	char 	m_Cnvb_070_G007[_Cnvb_070_G007];
	char 	m_Agen_080_G008[_Agen_080_G008];
	char 	m_Agdv_090_G009[_Agdv_090_G009];
	char 	m_Cont_100_G010[_Cont_100_G010];
	char 	m_Ctdv_110_G011[_Ctdv_110_G011];
	char 	m_Agct_120_G012[_Agct_120_G012];
	char 	m_Rzsc_130_G013[_Rzsc_130_G013];
	char 	m_Nmbk_140_G014[_Nmbk_140_G014];
	char 	m_Febr_150_G015[_Febr_150_G015];
	char 	m_Rmrt_160_G016[_Rmrt_160_G016];
	char 	m_Dtgr_170_G017[_Dtgr_170_G017];
	char 	m_Hrgr_180_G018[_Hrgr_180_G018];
	char 	m_Nseq_190_G019[_Nseq_190_G019];
	char 	m_Layt_200_G020[_Layt_200_G020];
	char 	m_Dnsg_210_G021[_Dnsg_210_G021];
	char 	m_Rsrv_220_G022[_Rsrv_220_G022];
	char 	m_Rsre_230_G023[_Rsre_230_G023];
	char 	m_Rsfb_240_G004[_Rsfb_240_G004];
};

#endif  //_CLCNABPGTHEADERZERO_H