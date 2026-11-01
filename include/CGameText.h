// CGameText: declared by pcdecomp transplant for 0x10216e00 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CGameText
{
public:
	CGameText *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CGameText::KeyValue": color and color2 are parsed as four integers and stored as bytes at +0x460 / +0x464, anything else goes to CBaseEntity::vfunc110
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	int vfunc173(int, int, int, int);
};
