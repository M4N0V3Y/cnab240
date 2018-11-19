#include "clUtils.h"

clUtils::clUtils(){}


char* clUtils::setCharBuffer(char* _attribute, int _bfsz) {
	char* _retorno = nullptr;
	_retorno = reinterpret_cast<char*> (malloc(_bfsz));
	memset(_retorno, ' ', _bfsz);
	memcpy(_retorno, _attribute, _bfsz);
	return _retorno;
}