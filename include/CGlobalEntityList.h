// CGlobalEntityList (RTTI .?AVCGlobalEntityList@@): base CBaseEntityList at +0x0 is not modelled;
// primary vtable 0x10455e90 has 2 slots.
#pragma once

class CGlobalEntityList
{
public:
	virtual void vfunc0(int a, int b);
	virtual void vfunc1(int a, int b);
	char m_pad[0x18040 - 4];
	int m_iNumEnts;
};
