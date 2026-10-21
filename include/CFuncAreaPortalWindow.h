// CFuncAreaPortalWindow: declared by pcdecomp transplant for 0x1010d080 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CFuncAreaPortalWindow : public CBaseEntity
{
public:
	CFuncAreaPortalWindow *vfunc5(unsigned int flags);
	void sub_100154bf();
	CFuncAreaPortalWindow *sub_1010d050();	// as in CKeepUpright (transplant)
	virtual void vfunc113();	// slot 113 "CFuncAreaPortalWindow::Activate": CBaseEntity::vfunc113, then for the two named brush entities (names at +0x464 and +0x20c) copies their model to this entity (slot 105) and sets bit 6 of their flags at +0x19c; the first one also stores slot 8() at +0x468; finally CBaseEntity::sub_100b3b00

	char m_padWin[0x464 - sizeof(CBaseEntity)];
	const char *m_pszFadeEntity;	// 0x464
	int m_nFadeValue;	// 0x468
};
