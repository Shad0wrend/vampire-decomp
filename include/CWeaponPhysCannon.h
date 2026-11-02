// CWeaponPhysCannon: the physics cannon weapon (derived from CBaseCombatWeapon).
#pragma once
#include "CBaseCombatWeapon.h"
#include "CUnknown1040cb60.h"

class CSoundControllerImp;
class CUnknown101bc140;

class CWeaponPhysCannon : public CBaseCombatWeapon
{
public:
	virtual int vfunc81();	// slot 81 override: returns 0
	virtual void vfunc130(void *pArg);	// slot 130: 0x1040db30 in the game's CWeaponPhysCannon vtable (link audit)
	virtual void vfunc291();
	virtual void vfunc307(int a);	// slot 307: the view model / sound call with a sequence-style code (0xc2, 0xb6, 0xbc, 0xc0 passed by the grab code)
	virtual bool vfunc309();	// slot 309: true when the owner's state allows the grab (a boolean query, tested by slot 321)
	virtual void vfunc318();	// slot 318: eases the glow value (+0x928) towards its target (+0x92c) by 0.1 per call, mirrors it into the "active" pose parameter of the owner's first view model, and while the grab byte at +0x911 is set runs sub_10410620
	virtual void vfunc319();	// slot 319: refreshes the owner's unarmed weapon handle (+0xea4) and forwards to slot 456 of the owner
	virtual void vfunc321();	// slot 321: when slot 309() is true and the grab byte at +0x911 is set calls slot 307(0xc2), else slot 307(0xb6)
	virtual void vfunc326();	// slot 326: once the time at +0x730 has passed, with an owner whose character object is set and the byte at +0x911 set: asks the character for its position (sub_100b7fa0), the tuning block (0x10739d08) for a float, hands both to sub_10410bf0 and runs slot 307(0xc0)
	virtual void vfunc327();	// slot 327: once the time at +0x734 has passed, with an owner character that has a player object (+0xa8): a held object with the player flag 0x800 is dropped (sub_104106a0(1, 0), slot 307(0xbc)), else by the state sub_1040e9c0() the next time is pushed out (0: slot 307(0xbc), 0.5s, the player's bits at +0x2088 are or-ed into +0x91c; 1: 0.1s; 2: 0.01s)
	void sub_10410bf0(Vector *pPos, float flValue);	// stub 0x1000776b
	void sub_104106a0(int unused, char bFlag);	// drops the carried object: while the grab byte at +0x911 is set, remembers the owner's player entity and the entity of the grab handle (+0xab8), releases the grab (sub_1040cb60), tells the entity about the owner (sub_100a8340 with 10.0f) and hands (entity, owner, 2 or 3 by bFlag) to sub_101895d0; clears the byte
	bool sub_1040dbd0(CBaseEntity *pEnt);	// true (after dropping it, sub_1040dbb0) when pEnt is the entity of the grab handle (+0xab8)
	int sub_1040e9c0();	// stub 0x10003355: the state of the grab
	void sub_10410620();	// stub 0x10011c84, tail called by slot 318 while the grab byte is set: lets go of the grab unless the owner's player (+0xa8 of the owner) has a low flag count (+0x3e0 below 2) and the grab keeps holding (sub_1040f940 with 12, or 18 when sub_1040d930 holds)
	struct CPhysCannonOwner *sub_102521f0();	// the owner (stub 0x10014fab)
	bool sub_1040e880(CBaseEntity *pEnt);	// tries to pick pEnt up: false while already holding; the owner's pick-up strength (tuning block 0x10739d08) must reach the mass of pEnt's physics object (else sound 0x2f and slot 456 of the owner), then the melee check sub_10411160, then the grab starts (sub_1040dde0, sub_1040c5d0) and the next time (+0x734) is pushed out 0.5s
	void sub_1040dde0(CBaseEntity *pEnt, void *pPlayer, int a);	// stub 0x10007adb, called when picking an object up
	CUnknown101bc140 *sub_104112d0();	// the hold sound, created on the first call and cached in +0x968

	CWeaponPhysCannon();	// 0x1040d9e0: base constructor, fourteen handles cleared to -1, the grab controller, then the plain fields

	char m_pad0898[0x910 - 0x898];
	char m_b910;	// 0x910
	char m_bGrab911;	// 0x911
	char m_pad0912[0x918 - 0x912];
	int m_n918;	// 0x918
	char m_pad091c[0x928 - 0x91c];
	float m_flGlow928;	// 0x928: the glow value, eased towards m_flGlowTarget92c
	float m_flGlowTarget92c;	// 0x92c
	EHANDLE m_ah930[4];	// 0x930 .. 0x967: fourteen handles
	EHANDLE m_ah940[6];
	EHANDLE m_ah958[2];
	EHANDLE m_h960;
	EHANDLE m_h964;
	CUnknown101bc140 *m_pHoldSound;	// 0x968: "Weapon_PhysCannon.HoldSound", cached
	CUnknown1040cb60 m_grab;	// 0x96c: the grab controller, its entity handle is at +0xab8
public:
    virtual char vfunc312();
    virtual CBaseCombatWeapon *vfunc5(unsigned int flags);    // its own (0x1040daa0)
    virtual void vfunc103();    // its own (0x1040db00)
    virtual void vfunc104();    // its own (0x1040dae0)
    virtual void vfunc299(const float *pVelocity);    // its own (0x1040dc40)
    virtual char vfunc313();    // its own (0x1040dc70)
    virtual bool vfunc315();    // its own (0x1040db90)
    virtual char vfunc316(int a);    // its own (0x1040dc90)
    void sub_1040dbb0();    // stub-less member, called directly (0x1040dbb0)
    void sub_1001089d(const float *pVelocity);    // CBaseCombatWeapon::vfunc299 (stub 0x1001089d), called directly
};
