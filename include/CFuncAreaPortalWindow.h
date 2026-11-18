// CFuncAreaPortalWindow: declared by pcdecomp transplant for 0x1010d080 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CFuncAreaPortalWindow : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_100154bf();
	CFuncAreaPortalWindow *sub_1010d050();	// as in CKeepUpright (transplant)
	virtual void vfunc113();	// slot 113 "CFuncAreaPortalWindow::Activate": CBaseEntity::vfunc113, then for the two named brush entities (names at +0x464 and +0x20c) copies their model to this entity (slot 105) and sets bit 6 of their flags at +0x19c; the first one also stores slot 8() at +0x468; finally CBaseEntity::sub_100b3b00
	bool vfunc241(const float *pViewOrigin);	// slot 241 "CFuncAreaPortalWindow::UpdateVisibility" (plain member): the base's visibility test, then the squared distance of the view origin (in collision space) to the entity's bounds against (m_flFadeStart + 10)^2 decides whether the portal (key at +0x450) is open (engine slot 102)
	void vfunc103();	// slot 103 (0x1010d0d0): the virtual slot 104 of this object, then the engine's slot 102 (portal key at +0x450, open)

	char m_padWin[0x464 - sizeof(CBaseEntity)];
	const char *m_pszFadeEntity;	// 0x464
	int m_nFadeValue;	// 0x468
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
};
