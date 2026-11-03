// CWorldEvents: declared by pcdecomp transplant for 0x1023db40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

#include "COutputEvent.h"

class CWorldEvents : public CBaseEntity
{
public:
	CWorldEvents *vfunc5(unsigned int flags);
	void sub_10014c09();
	CWorldEvents *sub_1023d930();	// the constructor below under its provisional name (called by the entity factories)
	CWorldEvents();	// 0x1023d930: the base constructor, the 21 outputs, the vftable, SetSolid(0) and SetMoveType(0, 0), and the one-per-map check
	void vfunc113();	// slot 113 override: CBaseEntity::vfunc113, slot 78, SetSolid(0) (inlined scope trace), SetMoveType(0, 0), AddFlag(0x40000), then the effects dword at +0x19c = 0xe0
	void sub_1023db70();	// the destructor body (stub 0x10014c09): stores the CWorldEvents vftable, clears the global at 0x107532ec, destructs the 21 outputs at +0x450 .. +0x630 (0x18 bytes each, last first), then the CBaseEntity destructor body
	void sub_1000cb8a();	// CBaseEntity destructor body (stub 0x1000cb8a for 0x1009df20), called directly

	char m_pad0450[0x450 - sizeof(CBaseEntity)];
	COutputEvent m_Output450;
	COutputEvent m_Output468;
	COutputEvent m_Output480;
	COutputEvent m_Output498;
	COutputEvent m_Output4b0;
	COutputEvent m_Output4c8;
	COutputEvent m_Output4e0;
	COutputEvent m_Output4f8;
	COutputEvent m_Output510;
	COutputEvent m_Output528;
	COutputEvent m_Output540;
	COutputEvent m_Output558;
	COutputEvent m_Output570;
	COutputEvent m_Output588;
	COutputEvent m_Output5a0;
	COutputEvent m_Output5b8;
	COutputEvent m_Output5d0;
	COutputEvent m_Output5e8;
	COutputEvent m_Output600;
	COutputEvent m_Output618;
	COutputEvent m_Output630;
public:
    virtual datamap_t * vfunc82();
};
