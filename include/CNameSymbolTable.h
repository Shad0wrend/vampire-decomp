// CNameSymbolTable: the object at 0x10751140 (class name not known yet): a 8 byte head and a string symbol table at +8.
#pragma once
#include "CUnknown1024b370.h"

class CNameSymbolTable
{
public:
	char m_pad0000[8];
	CUnknown1024b370 m_Symbols;	// 0x08

	unsigned short sub_10230880(const char *pName);	// the symbol of pName, lower-cased through a 128 byte buffer (0xffff for null / empty)
};
