// CBaseViewModel: declared by pcdecomp transplant for 0x1042b830 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseAnimating.h"
#include "CBaseEntity.h"
#include "datamap.h"

struct CViewModelPlayer	// the object at +0xa8 of the viewmodel's owner entity (the controlling player)
{
	char m_pad00[0x2e0];
	int m_pEdict2e0;	// 0x2e0
};

struct CViewModelOwner	// the viewmodel's owner entity, as far as the transmit test looks
{
	char m_pad00[0xa8];
	CViewModelPlayer *m_pPlayer;	// 0xa8
};

class CBaseViewModel : public CBaseAnimating
{
public:
	virtual char vfunc86(int a, int b, int c, int d, int e);	// slot 86 (ShouldTransmit-like): false with bit 6 of +0x19c; true when the owner entity's player (+0xa8) has the edict b

	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_10007126();
	CBaseEntity *vfunc267();	// as in CBasePlayer (transplant)
	CBaseViewModel *sub_1042b760();	// as in CKeepUpright (transplant)
	void sub_1008b230();	// CBaseAnimating constructor (stub 0x100103fc), called directly by sub_1042b760
	virtual void vfunc103();	// slot 103 (Spawn): slot 104, SetSize(-8,-4,-2 / 8,4,2), SetSolid(SOLID_NONE) scope trace, clears bit 18 of the flags at +0x268
	virtual void vfunc265(int value);	// slot 265: if slot 8 says yes, stores value at +0x6f0, bumps the count at +0x740 (and 7), clears +0x6f8, then CBaseAnimating::sub_10090950
	virtual void vfunc266(const char *pszName);	// slot 266: the name (or 0 when empty / null) is kept at +0x744; when it changes, slot 105 gets the name (or the default string g_106b8540)
public:
	char m_pad04a4[0x730 - 0x4a4];
	int m_nViewModelIndex;	// 0x0730
	EHANDLE m_hOwner734;	// 0x734
    virtual void vfunc104();
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
    virtual int vfunc79();
    virtual int vfunc117();
	float m_flTimeWeaponIdle;	// 0x0738
	char m_pad073c[0x740 - 0x73c];
	int m_nAnimationParity;	// 0x0740
	char m_pad0744[0x74c - 0x744];
};
