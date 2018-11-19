#include "clCabPgtSegmentoCThree.h"



clCabPgtSegmentoCThree::clCabPgtSegmentoCThree()
{
}


clCabPgtSegmentoCThree::~clCabPgtSegmentoCThree()
{
}

char* setCharBufferSGC(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz + 1));
	memset(_retorno, ' ', _bfsz + 1);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}

char* clCabPgtSegmentoCThree::getAttributeMember(int _enumPos) {

	char* _retorno = nullptr;
	switch (_enumPos)
	{
	case enuCban_013C_G001:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Cban_013C_G001, _Cban_013C_G001);
		break;
	case enuLots_023C_G002:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Lots_023C_G002, _Lots_023C_G002);
		break;
	case enuRgst_033C_G003:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Rgst_033C_G003, _Rgst_033C_G003);
		break;
	case enuOper_043C_G038:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Oper_043C_G038, _Oper_043C_G038);
		break;
	case enuSrvc_053C_G039:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Srvc_053C_G039, _Srvc_053C_G039);
		break;
	case enuCnab_063C_G004:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Cnab_063C_G004, _Cnab_063C_G004);
		break;
	case enuVlir_073C_G050:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Vlir_073C_G050, _Vlir_073C_G050);
		break;
	case enuViss_083C_G051:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Viss_083C_G051, _Viss_083C_G051);
		break;
	case enuViof_093C_G052:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Viof_093C_G052, _Viof_093C_G052);
		break;
	case enuVlod_103C_G053:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Vlod_103C_G053, _Vlod_103C_G053);
		break;
	case enuVloa_113C_G054:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Vloa_113C_G054, _Vloa_113C_G054);
		break;
	case enuAgen_123C_G008:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Agen_123C_G008, _Agen_123C_G008);
		break;
	case enuAgdv_133C_G009:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Agdv_133C_G009, _Agdv_133C_G009);
		break;
	case enuCont_143C_G010:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Cont_143C_G010, _Cont_143C_G010);
		break;
	case enuCtdv_153C_G011:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Ctdv_153C_G011, _Ctdv_153C_G011);
		break;
	case enuAgct_163C_G012:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Agct_163C_G012, _Agct_163C_G012);
		break;
	case enuInss_173C_G055:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Inss_173C_G055, _Inss_173C_G055);
		break;
	case enuCcrd_183C_P016:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Ccrd_183C_P016, _Ccrd_183C_P016);
		break;
	case enuCnab_193C_G004:
		_retorno = setCharBufferSGC(clCabPgtSegmentoCThree::m_Cnab_193C_G004, _Cnab_193C_G004);
		break;
	default:
		break;
	}
	return _retorno;
}

void clCabPgtSegmentoCThree::settAttributeMember(int _enumPos, char * v_Incoming_Data)
{
	switch (_enumPos)
	{
	case enuCban_013C_G001:
		memcpy(clCabPgtSegmentoCThree::m_Cban_013C_G001, v_Incoming_Data, _Cban_013C_G001);
		break;
	case enuLots_023C_G002:
		memcpy(clCabPgtSegmentoCThree::m_Lots_023C_G002, v_Incoming_Data, _Lots_023C_G002);
		break;
	case enuRgst_033C_G003:
		memcpy(clCabPgtSegmentoCThree::m_Rgst_033C_G003, v_Incoming_Data, _Rgst_033C_G003);
		break;
	case enuOper_043C_G038:
		memcpy(clCabPgtSegmentoCThree::m_Oper_043C_G038, v_Incoming_Data, _Oper_043C_G038);
		break;
	case enuSrvc_053C_G039:
		memcpy(clCabPgtSegmentoCThree::m_Srvc_053C_G039, v_Incoming_Data, _Srvc_053C_G039);
		break;
	case enuCnab_063C_G004:
		memcpy(clCabPgtSegmentoCThree::m_Cnab_063C_G004, v_Incoming_Data, _Cnab_063C_G004);
		break;
	case enuVlir_073C_G050:
		memcpy(clCabPgtSegmentoCThree::m_Vlir_073C_G050, v_Incoming_Data, _Vlir_073C_G050);
		break;
	case enuViss_083C_G051:
		memcpy(clCabPgtSegmentoCThree::m_Viss_083C_G051, v_Incoming_Data, _Viss_083C_G051);
		break;
	case enuViof_093C_G052:
		memcpy(clCabPgtSegmentoCThree::m_Viof_093C_G052, v_Incoming_Data, _Viof_093C_G052);
		break;
	case enuVlod_103C_G053:
		memcpy(clCabPgtSegmentoCThree::m_Vlod_103C_G053, v_Incoming_Data, _Vlod_103C_G053);
		break;
	case enuVloa_113C_G054:
		memcpy(clCabPgtSegmentoCThree::m_Vloa_113C_G054, v_Incoming_Data, _Vloa_113C_G054);
		break;
	case enuAgen_123C_G008:
		memcpy(clCabPgtSegmentoCThree::m_Agen_123C_G008, v_Incoming_Data, _Agen_123C_G008);
		break;
	case enuAgdv_133C_G009:
		memcpy(clCabPgtSegmentoCThree::m_Agdv_133C_G009, v_Incoming_Data, _Agdv_133C_G009);
		break;
	case enuCont_143C_G010:
		memcpy(clCabPgtSegmentoCThree::m_Cont_143C_G010, v_Incoming_Data, _Cont_143C_G010);
		break;
	case enuCtdv_153C_G011:
		memcpy(clCabPgtSegmentoCThree::m_Ctdv_153C_G011, v_Incoming_Data, _Ctdv_153C_G011);
		break;
	case enuAgct_163C_G012:
		memcpy(clCabPgtSegmentoCThree::m_Agct_163C_G012, v_Incoming_Data, _Agct_163C_G012);
		break;
	case enuInss_173C_G055:
		memcpy(clCabPgtSegmentoCThree::m_Inss_173C_G055, v_Incoming_Data, _Inss_173C_G055);
		break;
	case enuCcrd_183C_P016:
		memcpy(clCabPgtSegmentoCThree::m_Ccrd_183C_P016, v_Incoming_Data, _Ccrd_183C_P016);
		break;
	case enuCnab_193C_G004:
		memcpy(clCabPgtSegmentoCThree::m_Cnab_193C_G004, v_Incoming_Data, _Cnab_193C_G004);
		break;
	default:
		break;
	}
}
