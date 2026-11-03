// CGameText: declared by pcdecomp transplant for 0x10216e00 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "string_t.h"

struct datamap_t;

class CGameText
{
public:
	CGameText *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CGameText::KeyValue": color and color2 are parsed as four integers and stored as bytes at +0x460 / +0x464, anything else goes to CBaseEntity::vfunc110
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
public:
	datamap_t * vfunc82();
	int vfunc173(int, int, int, int);
	char m_pad0000[0x450 - 0x0];
	string_t m_iszMessage;	// 0x0450
	char m_textParms[40];	// 0x0454
};
