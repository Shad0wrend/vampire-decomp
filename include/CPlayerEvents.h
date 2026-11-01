// CPlayerEvents: declared by pcdecomp transplant for 0x102265c0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "COutputEvent.h"

class CPlayerEvents : public CBaseEntity
{
public:
	CPlayerEvents();	// 0x102270b0: base constructor (0), then the 23 outputs at +0x454
	CPlayerEvents *sub_102270b0();
public:
    virtual datamap_t * vfunc82();

	char m_pad03e0[0x454 - 0x3e0];
	COutputEvent m_Outputs[23];	// 0x454
public:
	virtual void vfunc106(const char *);	// slot 106: 0x10227140 in the game's CPlayerEvents vtable (link audit, CPlayerEvents)
};
