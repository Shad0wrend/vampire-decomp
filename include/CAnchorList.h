// class CAnchorList (RTTI .?AVCAnchorList@@), primary vtable 0x10446760 with 9 slots.
// Bases per RTTI: CAutoGameSystem / CBaseGameSystem / IGameSystem at +0x0. The game-system side is
// modelled by CBaseGameSystem (nine slots, slot 8 the virtual destructor, 8 bytes); the utl-vector-like
// member (memory pointer, allocation count, grow size, size, element pointer) follows at +0x8.
#pragma once

extern void (__cdecl *g_109f3624)(void *);	// Plat_Free

#ifdef PCD_INITIALIZERS
#include "GameSystemRoot.h"	// the initializer units: Source's root (CAutoGameSystem has the same 8 bytes)
#define PCD_GAMESYSTEM8 CAutoGameSystem
#else
class CBaseGameSystem
{
public:
	virtual bool vfunc0();	// slot 0 "Init" (returns al)
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual ~CBaseGameSystem();

	char m_04[4];
};
#define PCD_GAMESYSTEM8 CBaseGameSystem
#endif

class CAnchorListVec
{
public:
	~CAnchorListVec()
	{
		m_Size = 0;
		if (m_growSize != -1) {
			if (m_pMemory) {
				g_109f3624(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
		m_pElements = m_pMemory;
		if (m_growSize != -1) {
			if (m_pMemory) {
				g_109f3624(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
	}

	int *m_pMemory;		// 0x08
	int m_allocationCount;		// 0x0c
	int m_growSize;		// 0x10
	int m_Size;		// 0x14
	int *m_pElements;		// 0x18
};

class CAnchorList : public PCD_GAMESYSTEM8, public CAnchorListVec
{
public:
	virtual void vfunc5();
	void *sub_10029e10(unsigned int flags);	// slot 8 scalar deleting destructor (0x10029e10): the vector at +0x08, ~CBaseGameSystem, then the delete
};
