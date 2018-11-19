#pragma once
#if !defined(_CLUTILS)
#define _CLUTILS
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <iomanip>

class clUtils
{
public:
	clUtils();
	char * setCharBuffer(char * _attribute, int _bfsz);

};
#endif // _CLUTILS

