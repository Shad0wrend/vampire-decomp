// CNPC_VPedestrian: declared by pcdecomp transplant for 0x103a1e40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VPedestrian : public CBaseEntity
{
public:
	CNPC_VPedestrian *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VPedestrian *sub_103a1d90();	// as in CKeepUpright (transplant)

	// Slot 301, declared as a plain member.
	void vfunc301(int a, int b);	// scope trace aside: stores the collision bounds (mins / maxs of the object at +0x270) at +0x6660 / +0x666c, runs CAI_BaseNPCTroika::vfunc301(a, b), clears the think function and makes the entity non-solid
	void sub_10293a60(int a, int b);	// CAI_BaseNPCTroika::vfunc301 (stub 0x10005c90), called directly

	// Slot 27, declared as a plain member.
	void vfunc27(int arg);	// CAI_BaseNPCTroika::vfunc27, slot 596 (arg), stamps the source file / line at +0x1b3c / +0x1b40, +0x5cc4 = 8, sub_102ae7f0(0x15a)
	void sub_10005e43(int arg);	// CAI_BaseNPCTroika::vfunc27 (stub 0x10005e43), called directly
	void sub_102ae7f0(int state);	// stub 0x10001041, called directly

	// Slot 404: a pedestrian-owned entity whose character has flag 0x20000 gives 2; else the base's slot 404 (stub 0x10001adc).
	int vfunc404(CBaseEntity *pEntity);

	// Slot 432, declared as a plain member.
	void vfunc432(int arg);	// slot 432 (the RunAI-like tick): CNPC_VHuman::vfunc432, then while bit 7 of the flags at +0x14b8 is set, once every 10 seconds (+0x641c) a debug marker 256 units behind this entity's facing
	void sub_1000698d(int arg);	// CNPC_VHuman::vfunc432 (stub 0x1000698d), called directly

	// Slot 433, declared as a plain member.
	void vfunc433();	// slot 433 "CNPC_VPedestrian::...": sets the condition 0x24 and runs CAI_BaseNPCTroika::vfunc433; with the condition 0x2d set and the entity of the handle at +0x5b78 being the one of +0x6160 or +0x618c, takes that entity's character (+0x9c): once its active weapon's stat record has a value (+0x3c4) of at least the one at +0x634c, fills the record at +0x6360 from it (position = the character's slot 220 vector), asks the global at 0x10924a6c (slot 1) and clears the condition 0x1f
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly

	// Slot 438 (SelectSchedule), declared as a plain member.
	int vfunc438();	// stamps 0x1d at +0x1b2c; a pending request byte (+0x6678) gives 0xfe, a missing discipline 0xfa, the flag 2 of +0x14b8 0xf1; in the idle / alert states (+0x5cc0 1 or 3) with condition 0x25 set 0x158 / 0x157 by the distance to the point at +0x60d0 and a random roll; else CNPC_VHuman::vfunc438
	char sub_10014df8(int condition);	// HasCondition (stub 0x10014df8), called directly
	char sub_1033e2b0();	// CBaseCombatCharacter::IsBusyWithDiscipline (stub 0x1000caae), called directly
	void sub_1000bff5();	// stub of 0x102b4090 (picks the point at +0x60b0 / +0x60d0 from the condition), called directly
	int sub_10015ad2();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail-called

	char m_pad03e0[0x14b8 - 0x3e0];
	unsigned int m_flags14b8;	// 0x14b8
	char m_pad14bc[0x1b2c - 0x14bc];
	int m_n1b2c;	// 0x1b2c
	const char *m_pszFile1b30;	// 0x1b30: source file of the last schedule pick
	int m_nLine1b34;	// 0x1b34
	char m_pad1b38[0x1b3c - 0x1b38];
	const char *m_pszFile1b3c;	// 0x1b3c: source file of the last state change
	int m_nLine1b40;	// 0x1b40
	char m_pad1b44[0x5b78 - 0x1b44];
	unsigned int m_h5b78;	// 0x5b78: entity handle
	char m_pad5b7c[0x5cc0 - 0x5b7c];
	int m_n5cc0;	// 0x5cc0: NPC state
	int m_n5cc4;	// 0x5cc4
	char m_pad5cc8[0x60d0 - 0x5cc8];
	Vector m_vec60d0;	// 0x60d0
	char m_pad60dc[0x6160 - 0x60dc];
	unsigned int m_h6160;	// 0x6160: entity handle
	char m_pad6164[0x618c - 0x6164];
	unsigned int m_h618c;	// 0x618c: entity handle
	char m_pad6190[0x623c - 0x6190];
	float m_f623c;	// 0x623c
	char m_pad6240[0x634c - 0x6240];
	int m_n634c;	// 0x634c
	char m_pad6350[0x6660 - 0x6350];
	float m_vecMins6660[3];	// 0x6660
	float m_vecMaxs666c[3];	// 0x666c
	char m_b6678;	// 0x6678
public:
    virtual datamap_t * vfunc82();
public:
	virtual int vfunc138();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual int vfunc473();
	virtual int vfunc580();
public:
	virtual float vfunc550();
};
