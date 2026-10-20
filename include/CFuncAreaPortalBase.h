// CFuncAreaPortalBase: declared by pcdecomp transplant for 0x1010c900 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CFuncAreaPortalBase
{
public:
	CFuncAreaPortalBase *vfunc5(unsigned int flags);
	void sub_100156b8();
	void sub_1010c930();	// destructor body (stub 0x100156b8): sets the vtable, releases the portal's slot (m_nPortalSlot) in the global areaportal linked list at 0x10709680, then runs CBaseEntity's destructor body
	void sub_1000cb8a();	// CBaseEntity destructor body, tail called

	char m_pad0000[0x454];
	unsigned short m_nPortalSlot;	// 0x0454: index into the global linked list at 0x10709680
};
