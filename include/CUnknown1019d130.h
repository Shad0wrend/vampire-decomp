// CUnknown1019d130: int vector-like list (data at +8, count at +0x14); real name not yet known.
// Looks like a recipient filter: slot 2 is queried by CTempEntsSystem::sub_100584a0.
#pragma once

class CBaseEntity;

class CUnknown1019d130
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int vfunc2();
	char pad0[4];
	int *m_pData;
	char pad1[8];
	int m_Size;

	void sub_1019d130(CBaseEntity *pEnt);
	char sub_1000aa60();	// stub for 0x1019d470
};
