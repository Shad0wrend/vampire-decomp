// CFuncAreaPortalBase: declared by pcdecomp transplant for 0x1010c900 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CFuncAreaPortalBase : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_100156b8();
	void sub_1010c930();	// destructor body (stub 0x100156b8): sets the vtable, releases the portal's slot (m_nPortalSlot) in the global areaportal linked list at 0x10709680, then runs CBaseEntity's destructor body
	void sub_1000cb8a();	// CBaseEntity destructor body, tail called
	bool vfunc241(const float *pViewOrigin);	// "CFuncAreaPortalBase::UpdateVisibility"-like (stub 0x10012c8d): false without a portal key; true when the engine has no plane for the portal; else opens the portal (engine slot 102) when the view origin is in front of the portal plane (with a small epsilon) and returns whether it did

	char m_pad03e0[0x450 - 0x3e0];
	int m_nPortalKey;	// 0x0450: the engine's area portal key (-1 for none)
	unsigned short m_nPortalSlot;	// 0x0454: index into the global linked list at 0x10709680
public:
	int vfunc117();
};
