// CParticleMgr: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 0 of its vtable; the virtual functions before it are not declared yet
#pragma once

#include "Vector.h"

struct CParticleMgrEntry
{
	Vector m_v;
	float m_t;
};

class CParticleMgr
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CParticleMgr adds to its base's vtable: 0-0, vfuncK at slot K
	virtual ~CParticleMgr();

	void sub_10117a80();
	int sub_10117920(Vector *p, float t);

	int m_unk04;
	CParticleMgrEntry m_entries[20];
	int m_nCount;
};
