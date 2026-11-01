// CGameSign: declared by pcdecomp transplant for 0x10212620 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "Vector.h"

class CBasePlayer;

class CGameSign : public CBaseEntity
{
public:
	CGameSign();	// 0x10212530
	CGameSign *vfunc5(unsigned int flags);
	void sub_1000726b();
	CGameSign *sub_10212530();	// as in CKeepUpright (transplant)
	void vfunc41(void *pPlayer);	// slot 41, declared as a plain member: looks the player at the sign's stored position (+0x464) and, once the sign is active (+0x204 bit 0) and its delay has passed, lets a player with the required flags (+0x2090) use it
	void sub_10212a30(CBasePlayer *pPlayer);	// the player stops using the sign (when it is the sign the player is using, handle at player+0x1040): clears the player's flags 1 / 8 unless bit 1 of +0x204, tells the player's client (user message 0x10726088: 0, the float at +0x45c, the sign's engine index) and removes the sign unless bit 2 of +0x204
	virtual void vfunc39(CBaseEntity *pOther);	// slot 39 (start touch): the sign's own touch work (sub_10212810), the base work, then remembers where the toucher stands: its slot 368 vector times 2000.0f plus its slot 193 position, stored at +0x464
	bool sub_10212da0();	// "CGameSign::LoadSignData" (stub 0x100147b8), called by sub_10212810 before the message: loads the sign file's data, true when no file name came out
	void sub_10212810(CBaseEntity *pOther);	// stub 0x1000d39b, called directly first by vfunc39

	char m_pad03e0[0x450 - 0x3e0];
	char *m_pszFile450;	// 0x450: copy of the sign's file name
	const char *m_psz454;	// 0x454: the data file to load
	float m_f458;	// 0x458: 0.5f
	float m_f45c;	// 0x45c: 0.5f
	char m_pad460[0x464 - 0x460];
	Vector m_vecToucherPos;	// 0x464
	char m_b470;	// 0x470
public:
    virtual bool vfunc32(int);
    virtual datamap_t * vfunc82();
public:
    virtual bool vfunc44(int);
    virtual float vfunc37();
public:
	virtual void vfunc103();	// slot 103: 0x101c0820 in the game's CGameSign vtable (link audit, CGameSign)
	virtual int vfunc117();	// slot 117: 0x100b4340 in the game's CGameSign vtable (link audit, CGameSign)
};
