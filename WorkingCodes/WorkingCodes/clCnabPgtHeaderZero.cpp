//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : clCnabPgtHeaderZero.cpp
//  @ Date : 20/01/2018
//  @ Author : 
//
//


#include "clCnabPgtHeaderZero.h"

char* setCharBufferZ(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz+1));
	memset(_retorno, ' ', _bfsz+1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

clCnabPgtHeaderZero::clCnabPgtHeaderZero()
{

}


clCnabPgtHeaderZero::~clCnabPgtHeaderZero()
{
}


char * clCnabPgtHeaderZero::getAttributeMember(int _enumPos)
{
	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case enuCban_010_G001:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Cban_010_G001, _Cban_010_G001);
		break;
	case enuLots_020_G002:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Lots_020_G002, _Lots_020_G002);
		break;
	case enuRgst_030_G003:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Rgst_030_G003, _Rgst_030_G003);
		break;
	case enuCnab_040_G004:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Cnab_040_G004, _Cnab_040_G004);
		break;
	case enuTpem_050_G005:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Tpem_050_G005, _Tpem_050_G005);
		break;
	case enuCnpj_060_G006:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Cnpj_060_G006, _Cnpj_060_G006);
		break;
	case enuCnvb_070_G007:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Cnvb_070_G007, _Cnvb_070_G007);
		break;
	case enuAgen_080_G008:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Agen_080_G008, _Agen_080_G008);
		break;
	case enuAgdv_090_G009:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Agdv_090_G009, _Agdv_090_G009);
		break;
	case enuCont_100_G010:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Cont_100_G010, _Cont_100_G010);
		break;
	case enuCtdv_110_G011:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Ctdv_110_G011, _Ctdv_110_G011);
		break;
	case enuAgct_120_G012:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Agct_120_G012, _Agct_120_G012);
		break;
	case enuRzsc_130_G013:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Rzsc_130_G013, _Rzsc_130_G013);
		break;
	case enuNmbk_140_G014:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Nmbk_140_G014, _Nmbk_140_G014);
		break;
	case enuFebr_150_G015:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Febr_150_G015, _Febr_150_G015);
		break;
	case enuRmrt_160_G016:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Rmrt_160_G016, _Rmrt_160_G016);
		break;
	case enuDtgr_170_G017:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Dtgr_170_G017, _Dtgr_170_G017);
		break;
	case enuHrgr_180_G018:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Hrgr_180_G018, _Hrgr_180_G018);
		break;
	case enuNseq_190_G019:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Nseq_190_G019, _Nseq_190_G019);
		break;
	case enuLayt_200_G020:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Layt_200_G020, _Layt_200_G020);
		break;
	case enuDnsg_210_G021:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Dnsg_210_G021, _Dnsg_210_G021);
		break;
	case enuRsrv_220_G022:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Rsrv_220_G022, _Rsrv_220_G022);
		break;
	case enuRsre_230_G023:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Rsre_230_G023, _Rsre_230_G023);
		break;
	case enuRsfb_240_G004:
		_retorno = setCharBufferZ(clCnabPgtHeaderZero::m_Rsfb_240_G004, _Rsfb_240_G004);
		break;

	default:
		break;
	}
	return _retorno;
}

void clCnabPgtHeaderZero::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCban_010_G001:
		memcpy(clCnabPgtHeaderZero::m_Cban_010_G001, v_Incoming_Data, _Cban_010_G001);
		break;
	case enuLots_020_G002:
		memcpy(clCnabPgtHeaderZero::m_Lots_020_G002, v_Incoming_Data, _Lots_020_G002);
		break;
	case enuRgst_030_G003:
		memcpy(clCnabPgtHeaderZero::m_Rgst_030_G003, v_Incoming_Data, _Rgst_030_G003);
		break;
	case enuCnab_040_G004:
		memcpy(clCnabPgtHeaderZero::m_Cnab_040_G004, v_Incoming_Data, _Cnab_040_G004);
		break;
	case enuTpem_050_G005:
		memcpy(clCnabPgtHeaderZero::m_Tpem_050_G005, v_Incoming_Data, _Tpem_050_G005);
		break;
	case enuCnpj_060_G006:
		memcpy(clCnabPgtHeaderZero::m_Cnpj_060_G006, v_Incoming_Data, _Cnpj_060_G006);
		break;
	case enuCnvb_070_G007:
		memcpy(clCnabPgtHeaderZero::m_Cnvb_070_G007, v_Incoming_Data, _Cnvb_070_G007);
		break;
	case enuAgen_080_G008:
		memcpy(clCnabPgtHeaderZero::m_Agen_080_G008, v_Incoming_Data, _Agen_080_G008);
		break;
	case enuAgdv_090_G009:
		memcpy(clCnabPgtHeaderZero::m_Agdv_090_G009, v_Incoming_Data, _Agdv_090_G009);
		break;
	case enuCont_100_G010:
		memcpy(clCnabPgtHeaderZero::m_Cont_100_G010, v_Incoming_Data, _Cont_100_G010);
		break;
	case enuCtdv_110_G011:
		memcpy(clCnabPgtHeaderZero::m_Ctdv_110_G011, v_Incoming_Data, _Ctdv_110_G011);
		break;
	case enuAgct_120_G012:
		memcpy(clCnabPgtHeaderZero::m_Agct_120_G012, v_Incoming_Data, _Agct_120_G012);
		break;
	case enuRzsc_130_G013:
		memcpy(clCnabPgtHeaderZero::m_Rzsc_130_G013, v_Incoming_Data, _Rzsc_130_G013);
		break;
	case enuNmbk_140_G014:
		memcpy(clCnabPgtHeaderZero::m_Nmbk_140_G014, v_Incoming_Data, _Nmbk_140_G014);
		break;
	case enuFebr_150_G015:
		memcpy(clCnabPgtHeaderZero::m_Febr_150_G015, v_Incoming_Data, _Febr_150_G015);
		break;
	case enuRmrt_160_G016:
		memcpy(clCnabPgtHeaderZero::m_Rmrt_160_G016, v_Incoming_Data, _Rmrt_160_G016);
		break;
	case enuDtgr_170_G017:
		memcpy(clCnabPgtHeaderZero::m_Dtgr_170_G017, v_Incoming_Data, _Dtgr_170_G017);
		break;
	case enuHrgr_180_G018:
		memcpy(clCnabPgtHeaderZero::m_Hrgr_180_G018, v_Incoming_Data, _Hrgr_180_G018);
		break;
	case enuNseq_190_G019:
		memcpy(clCnabPgtHeaderZero::m_Nseq_190_G019, v_Incoming_Data, _Nseq_190_G019);
		break;
	case enuLayt_200_G020:
		memcpy(clCnabPgtHeaderZero::m_Layt_200_G020, v_Incoming_Data, _Layt_200_G020);
		break;
	case enuDnsg_210_G021:
		memcpy(clCnabPgtHeaderZero::m_Dnsg_210_G021, v_Incoming_Data, _Dnsg_210_G021);
		break;
	case enuRsrv_220_G022:
		memcpy(clCnabPgtHeaderZero::m_Rsrv_220_G022, v_Incoming_Data, _Rsrv_220_G022);
		break;
	case enuRsre_230_G023:
		memcpy(clCnabPgtHeaderZero::m_Rsre_230_G023, v_Incoming_Data, _Rsre_230_G023);
		break;
	case enuRsfb_240_G004:
		memcpy(clCnabPgtHeaderZero::m_Rsfb_240_G004, v_Incoming_Data, _Rsfb_240_G004);
		break;

	default:
		break;
	}
}