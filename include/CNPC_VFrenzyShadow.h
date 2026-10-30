// CNPC_VFrenzyShadow: frenzy shadow NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CNPC_VFrenzyShadow
{
public:
	virtual void vfunc601(int unused);

	char sub_10376b70(int unused);	// slot 599: calls slot 1 of a global object, then sets the flag byte at +0x6078
	bool sub_10376ba0(int unused);	// slot 600: sets the flag byte at +0x6078, then calls slot 1 of the global object
	void sub_10376c10();	// resets the counter at +0x6664, then for every entry of the global object list (count at 0x1093ae9c) counts the ones whose object at +0x9c answers slot 404 with 1 and calls slot 544 of this
	int vfunc438();	// slot 438 "CNPC_VFrenzyShadow::SelectSchedule": in state 2 with at most one shadow counted (+0x6664), a squad-less target that slot 167's object accepts (slot 158) and no condition 0x59 / no flag at +0x6668 gives schedule 0x161 (stamping source line 0x133), else the base implementation
	int sub_10015ad2();	// CNPC_VHuman::vfunc438, called directly
	char sub_10014df8(int condition);	// "HasCondition" (stub of 0x10269aa0), called directly
	void vfunc420();	// slot 420 "CNPC_VFrenzyShadow::NPCInit": gives the NPC its \"item_w_fists\" weapon (flag 0x40 on it), the player controller reset, stamps source line 0xe4, ideal state 0xb, flag 0x5ddf at +0x5b84, the senses' byte +0x80, clears the shadow counter and the flag at +0x6668, +0x1488 = 8.0f, +0x65f7 = 1, then counts the shadows
	char sub_10334c20(void *pWeapon);	// stub 0x100112d9: whether the NPC can take the weapon
	void *sub_1032e120(const char *pszName);	// CBaseCombatCharacter::Weapon_Create (stub 0x1000b0b4), called directly
	void vfunc433();	// slot 433 "CNPC_VFrenzyShadow::...": CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f) first, then the shadow count (+0x6664) above 1 starts schedule 0x79 after the global at 0x10924a6c (slot 1); else the base's sub_10015839 with 0x79

	char m_pad0004[0x1488 - 4];
	float m_fl1488;	// 0x1488
	char m_pad148c[0x1b3c - 0x148c];
	const char *m_pszSourceFile;	// 0x1b3c: source file / line stamp of the last schedule change
	int m_nSourceLine;	// 0x1b40
	char m_pad1b44[0x5b84 - 0x1b44];
	int m_n5b84;	// 0x5b84
	char m_pad5b88[0x5cc4 - 0x5b88];
	int m_nIdealState;	// 0x5cc4
	char m_pad5cc8[0x5cdc - 0x5cc8];
	void *m_pSenses;	// 0x5cdc
	char m_pad5ce0[0x6078 - 0x5ce0];
	char m_b6078;
	char m_pad6079[0x65f7 - 0x6079];
	char m_b65f7;	// 0x65f7
	char m_pad65f8[0x6664 - 0x65f8];
	int m_n6664;	// 0x6664: the shadow counter
	char m_b6668;	// 0x6668
	CNPC_VFrenzyShadow *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
public:
	virtual void vfunc144(int);
	virtual bool vfunc602();
};
