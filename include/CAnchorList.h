// class CAnchorList (RTTI .?AVCAnchorList@@), primary vtable 0x10446760 with 9 slots.
// Bases per RTTI: CAutoGameSystem / CBaseGameSystem / IGameSystem at +0x0. Modelled standalone: the
// game-system base destructor is the member sub_1000cfbd. Slot 8 is the scalar deleting destructor.
#pragma once

extern void (__cdecl *g_109f3624)(void *);	// Plat_Free

class CAnchorList
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual ~CAnchorList();

	void sub_1000cfbd();

	char m_04[4];
	int *m_pMemory;		// 0x08
	int m_allocationCount;	// 0x0c
	int m_growSize;		// 0x10
	int m_Size;		// 0x14
	int *m_pElements;	// 0x18
};
