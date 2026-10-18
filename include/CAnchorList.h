// CAnchorList: CAutoGameSystem with a CUtlVector-like container (memory at +0x8, size at +0x14, data ptr at +0x18).
#pragma once

extern void (__cdecl *g_109f3624)(void *);

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
	virtual void vfunc8();

	char m_pad0004[4];	// 0x0004
	void *m_pMemory;	// 0x0008
	int m_allocationCount;	// 0x000c
	int m_growSize;		// 0x0010
	int m_Size;		// 0x0014
	void *m_pElements;	// 0x0018
};
