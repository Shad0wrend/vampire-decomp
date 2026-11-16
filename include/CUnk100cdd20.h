// CUnk100cdd20: a record of entity handles (-1 default) and zeroed members (class not known yet).
// Its constructor (0x100cdd20) stores the defaults, then calls sub_1000f3ad (stub of 0x100cdd80) on itself.
#pragma once
#include "ehandle.h"

struct CZeroInt100cdd20
{
	int m_n;
	CZeroInt100cdd20() : m_n(0) {}
};

class CUnk100cdd20
{
public:
#ifdef PCD_INITIALIZERS	// the initializer units: the global 0x106e7050 is built and destroyed by these
	~CUnk100cdd20();	// function 0x100cdd60
#endif
	CUnk100cdd20();
	void sub_1000f3ad();

	char m_pad0000[0xc];
	EHANDLE m_h0c;	// 0x0c
	EHANDLE m_h10;	// 0x10
	char m_pad0014[4];
	EHANDLE m_h18;	// 0x18
	char m_pad001c[4];
	CZeroInt100cdd20 m_20;	// 0x20
	char m_pad0024[8];
	EHANDLE m_h2c;	// 0x2c
	CZeroInt100cdd20 m_30;	// 0x30
	char m_pad0034[4];
	CZeroInt100cdd20 m_38;	// 0x38
};
