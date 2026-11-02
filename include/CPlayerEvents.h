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
	CPlayerEvents *vfunc5(unsigned int flags);	// slot 5 (0x102270f0), scalar deleting destructor, declared as a plain member like CRagdollProp::vfunc5: the 23 outputs at +0x454 destroyed last to first (COutputEvent::sub_100cd2d0), the CBaseEntity destructor body (sub_1000cb8a), and sub_100aa7b0(this) (delete) when bit 0 of flags is set
	void sub_1000cb8a();	// CBaseEntity destructor body (stub 0x1000cb8a -> 0x1009df20)
public:
    virtual datamap_t * vfunc82();

	char m_pad03e0[0x450 - 0x3e0];
	char m_bFiring450;	// 0x450: nonzero lets the outputs fire (sub_102271d0 checks it)
	void sub_102271d0(void *pActivator, int nOutput);	// stub 0x100015b4: when +0x450 is set, fires m_Outputs[nOutput] with (pActivator, this, 0)
	char m_pad0451[0x454 - 0x451];
	COutputEvent m_Outputs[23];	// 0x454
public:
	virtual void vfunc106(const char *);	// slot 106: 0x10227140 in the game's CPlayerEvents vtable (link audit, CPlayerEvents)
};
