// CSoundSchemeManager (RTTI .?AVCSoundSchemeManager@@): bases CAutoGameSystem / CBaseGameSystem / IGameSystem
// at +0x0 are not modelled; primary vtable 0x1048dd00 has 9 slots.
#pragma once

class CSoundSchemeManager
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
	virtual CSoundSchemeManager *vfunc8(unsigned int flags);	// scalar deleting destructor: empties the three vectors (+0x19c, +0x188, +0x174), the base destructor, then delete this when bit 0 of flags is set

	void sub_102288b0();	// releases the four sounds at +0x64 (stride 0x58) and empties both lists (0x58 byte records at +0x174, count +0x180; 0x20 byte records at +0x188, count +0x194), releasing the sound of each record, when the globals' dword at +0x24 is set
	void sub_1042c2c0();	// CBaseGameSystem::~CBaseGameSystem, called directly (stub 0x1000cfbd)

	char m_pad0004[4];	// 0x0004 .. 0x0007
	char m_b08;
	char m_pad0009[3];
	float m_f0c;
	char m_pad0010[4];
	char m_buf14[0x160];	// 0x0014 .. 0x0173
	char m_pad0174[0x14];	// 0x0174 .. 0x0187
	void *m_pMemory;	// 0x0188
	int m_nAllocationCount;	// 0x018c
	int m_nGrowSize;	// 0x0190
	char m_pad0194[4];
	void *m_pElements;	// 0x0198
};
