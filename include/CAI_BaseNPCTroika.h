// CAI_BaseNPCTroika: NPC base of the Troika-made NPCs (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

struct inputdata_t;

struct CAI_CondTable
{
	int sub_102ea2d0(int condition);	// translates a symbolic condition id (below 1000000000) to the id of the condition bit (stub 0x10012300)
};

struct CAI_CondOwner
{
	char m_pad0000[0x30];
	CAI_CondTable m_table;	// 0x30
};

class CAI_BaseNPCTroika : public CAI_BaseNPC
{
public:
	virtual int vfunc293();	// the dword at +0x9c of the entity the handle at +0x647c resolves to (0 when stale)
	virtual void vfunc416(char value);
	virtual float vfunc418(float a);	// float lookup: -1000005 -> +0x6484, -1000006 -> +0x6488, -1000007 -> +0x648c, -1000008 -> 10.0f, else CAI_BaseNPC::vfunc418(a)
	virtual bool vfunc468(CBaseEntity *pEnt);	// see CAI_BaseNPC

	// Slots 569..580 (past the end of the base class's declared slots).
	virtual int vfunc569(CBaseEntity *pHint);	// slot 569: 8 while bit 9 of +0x14b8 is set, else the activity for the hint's type at +0x5dc (100 -> 0x1111, 101 -> 0x110d, 0x27d8 -> 0x1118) when sub_10295460(activity, 0) accepts it, else CAI_BaseNPC::sub_10274aa0(pHint)
	virtual int vfunc570(CBaseEntity *pHint); virtual void vfunc571(); virtual void vfunc572(); virtual void vfunc573();	// slot 570: picks an activity for the hint's type at +0x5dc (100 / 101), 0x55 when none
	virtual void vfunc574(); virtual void vfunc575(); virtual void vfunc576(); virtual void vfunc577(); virtual void vfunc578();
	virtual void vfunc579();
	virtual CAI_CondOwner *vfunc580();	// the object that translates condition ids (sub-object at +0x30)
	virtual void vfunc581(); virtual void vfunc582();
	virtual void vfunc583();	// asked after another NPC accepted the value of slot 585
	virtual void vfunc584();
	virtual int vfunc585(int a);	// the value offered to another NPC's slot 482

	void vfunc488();	// slot 488: plays the "Death" sound
	void vfunc489();	// slot 489: plays the "Target_Suspect" sound
	void vfunc490();	// slots 490-506: sound-playing members of the same shape
	void vfunc491();
	void vfunc492();	// slot 492: plays the "Fear_Start" sound
	void vfunc493();
	void vfunc494();
	void vfunc495();	// slot 495: plays the "Surprised" sound
	void vfunc496();
	void vfunc497();
	void vfunc498();
	void vfunc499();
	void vfunc500();
	void vfunc501();
	void vfunc502();
	void vfunc503();
	void vfunc504();
	void vfunc505();
	void vfunc506();
	void vfunc616();	// slot 616: base call with 0x30, then stamps curtime + 15 at +0x65bc

	char vfunc590();	// slot 590: true when the NPC may act and its state (+0xfec) is one of a fixed set (1, 9, 0x13, 0x30, 0x4b, 0x4d, 0x51, 0x73..0x8a, 0xcb5, 0xd25, 0x1121, 0x1157..0x1158)
	void sub_102950c0();	// plays the "Alarmed_Loop" sound
	void sub_10295180();	// plays the "Animal_Kened" sound
	void sub_10295240();	// plays the "Warning_Loop" sound
	char sub_102a9ec0(int index);
	const char *sub_102c3690(int task);
	const char *sub_102c36b0(int schedule);
	char sub_102c1170();	// true when one of two flag bytes (+0x64c0, +0x64ec) is set or one of two entity handles (+0xfe8, +0x6554) is valid
	char sub_102c0aa0();	// true when the entity of the handle at +0x6554 has its byte at +0x498 set, or the time at +0x64cc lies in the future
	void sub_10015839(int a);	// base-class slot 616 implementation, called directly
	void sub_10011dc4();	// base-class slot 516 implementation, called directly
	void sub_102a97a0(unsigned int flags);	// ORs flags into the dword at +0x14b8
	void sub_102a97d0(unsigned int flags);	// clears flags in the dword at +0x14b8
	void sub_102c2a30(inputdata_t *data);	// input handler: stores the input's byte (0 unless its type is 5) at +0x63d8
	void sub_102c24a0(inputdata_t *data);	// input handler: when the input holds an entity handle (type 12) that resolves, copies that entity's absolute origin and angles onto this one (slots 216 / 218), then sub_100b3b00, slot 614 and ForceTransmit
	bool sub_102d1540(void *pOther);	// slot 527 helper: true when pOther is the entity of the handle at +0x5e0, or that handle is stale and its timer (+0x5ec) has run out
	void sub_1028ea60(int seed, const float *pos, void *pEnt);	// fills the record at +0x6360 (two bytes, a scrambled hash of seed at +0x6364, position at +0x6380, entity handle at +0x638c or -1)
	void sub_10298910(const char *str);	// parses a space separated list of 1-based numbers into a bit mask stored at +0x62dc
	void sub_102989e0(const char *str);	// same parser for the bit mask at +0x62e4; a null or empty string sets all bits (-1)
	bool sub_1028e360();	// when the handle at +0x6088 is valid: false while the timer at +0x6084 is running (armed with curtime + const when unset), else clears the handle and copies the absolute origin of the entity of the handle at +0x608c to +0x6090; true otherwise
	int sub_102b11c0(int activity);	// translates a few activities (0x87/0x88 depend on the flag bit 12 of +0x14b8 and slot 168; 0xc7 -> 0xc9, 0xca/0xcb/0xd1/0xd2 -> 0xcc, 0xef -> 0xf0), 0 for everything else
	bool sub_1029b180(void *pOther);	// slot 69 override: true when pOther is flagged (fields +0x94/+0xa8/+0xa0, the entity at +0x98 with flag 0x20000, bits of +0x4c), is the entity of the handle at +0x643c, else CBaseAnimating::sub_1008be20(pOther)
	bool vfunc68(void *pOther);	// slot 68 override: like sub_1029b180, plus the checks for the entity at +0x5ddc (id 0x283c/0x283d with bits 0x14 of +0x4c), bit 1 of +0x4c and the entity of the handle at +0x1538
	bool sub_10269d30(int condition);	// "HasConditionAndNotIgnored": false without a target (+0x5c38), else the condition (ids below 1000000000 translated through slot 580) has its bit set in both bit arrays (+0x5c5c and +0x5c74)
	bool sub_10269df0(int condition);	// like sub_10269d30 but true when the bit is clear in the array at +0x5c5c and set in the one at +0x5c8c
	bool sub_10269c70(int condition);	// translates the condition, false for an invalid one or without a target (+0x5c38), else true when its bit is set in the array at +0x5c74 or in the one at +0x5c8c
	int sub_102b8c40();	// when state 0x4c or 0x4d is set: clears the byte at +0x5b80, copies the three dwords at +0x5b9c to +0x5dd0, stamps the source file name and line 0x5f8b at +0x1b30 / +0x1b34 and returns 0x8a, else 0
	int sub_10295590(int activity);	// slot 375 base implementation (NPC_TranslateActivity), called directly
	void sub_1028e8b0(CBaseEntity *pEnt, int a);	// runs sub_1028e940(a) when pEnt is null-safe related to this NPC: this NPC has no slot 167 value, or pEnt is that value, or the object at pEnt+0x98 has the same slot 167 value
	void sub_1028e940(int a);
	char vfunc587(int unused);	// slot 587: true when the NPC may be interrupted: not busy with sub_10337f30, no value at +0x128, no count at +0x5bb4, bit 4 of +0x5b84 clear, not busy with discipline, and either the count at +0x6354 or the one at +0x6358 is at most 2
	char sub_10337f30();	// CBaseCombatCharacter member (the stub at 0x10006b04), called directly
	char sub_1033e2b0();	// CBaseCombatCharacter::IsBusyWithDiscipline (the stub at 0x1000caae), called directly
	char sub_10281430();	// true when the NPC may skip its pending request: not dead / mid-switch (state +0x5cc4 is not 7, nor 4 with +0x5cc0 not 4), and either the one-shot byte at +0x1b28 was set (cleared here), condition 0x5d is not set, bit 29 of +0x5c7c is set with a target at +0x5c38, or state +0x5cc0 is 2 without a slot 167 value
	char sub_10014df8(int condition);	// "HasCondition" (the stub at 0x10014df8 for 0x10269aa0), called directly
	bool sub_10297430(CAI_BaseNPCTroika *pOther);	// "CAI_BaseNPCTroika::...": false unless the entity of the handle at +0x6448 resolves to a live entity, else sub_10296c40(pOther, that entity, the dword at pOther+0x458, 0.731f) != 0
	char sub_10296c40(CAI_BaseNPCTroika *pOther, CBaseEntity *pEnt, int a, float f);
	int sub_10295460(int a, int b);	// called through the stub at 0x10009c14
	bool vfunc347(int event, char *pszName, float *pA, float *pB, float *pC, float *pD);	// "GetExpressionEvent..." override: event 1 stores "Knockback" and four float parameters (the third one raised by sub_10091080(sub_1008dd30(the dword at +0x6068, -1)) when that is not negative), true; else the CBaseCombatCharacter implementation
	bool sub_10107120(int event, char *pszName, float *pA, float *pB, float *pC, float *pD);	// CBaseCombatCharacter::vfunc347, called directly (stub 0x10014ba0)
	int sub_1008dd30(int a, int b);	// CBaseAnimating::sub_1008dd30, called directly (stub 0x10004ec1)
	float sub_10091080(int sequence);	// CBaseAnimating member (stub 0x10009813), returns a float
	char sub_1028a190();	// "IsInterruptible"-like: false while the state is 4 and the scripted entity of the handle at +0x5d74 is not playing (CCineNPC::sub_101a8930), or the byte at +0x5bc4 / bit 12 of the dword at +0x14bc is set; else slot 158
	void sub_102c41d0(int a, const Vector *pFrom, const Vector *pTo, int c);	// resolves the defaults (this NPC's slot 217 origin, the global vector at 0x1070d9d0), then hands them with the slot 192 vector to the worker behind the stub at 0x10001a8c
	int sub_102a0ed0(int a, int b, int c, int d);	// "CAI_BaseNPCTroika::CanStandAt" worker (unmatched, score 11): scope trace (entity name), sets the byte at +0x63da around the call sub_102e7270(a, b, c, d, 0, 0) of the object at +0x5d40 and returns its result
	void sub_101a72b0(int unused);	// when the NPC behind the handle at +0x5ce4 (its object at +0x94) is in state 0 or 2 and accepts slot 585(1) on its slot 482, runs slot 583; with no such NPC runs the think setter (stub 0x1000556f) and stamps the next think; always stamps curtime + 1000000 at +0x5f74

	char m_pad0004[0x14bc - 4];
	unsigned int m_flags14bc;
	char m_pad14c0[0x5bc4 - 0x14c0];
	char m_b5bc4;
	char m_pad5bc5[0x5d74 - 0x5bc5];
	unsigned int m_h5d74;
	char m_pad5d78[0x6084 - 0x5d78];
	float m_f6084;
	unsigned int m_h6088;
	unsigned int m_h608c;
	float m_v6090[3];
	char m_pad609c[0x63d8 - 0x609c];
	char m_b63d8;
	char m_pad63d9[0x6448 - 0x63d9];
	unsigned int m_h6448;
	char m_pad644c[0x64cc - 0x644c];
	float m_f64cc;
	char m_pad64d0[0x6554 - 0x64d0];
	unsigned int m_h6554;
	char m_pad6558[0x65bc - 0x6558];
	float m_f65bc;
	void sub_100f0e90(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	void sub_10181580(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	void sub_102a9800(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	int sub_10252240();	// provisional, like vfunc293 (transplant)
	int sub_1042b110();	// provisional, like vfunc293 (transplant)
	void sub_101815b0(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
	void sub_102a9830(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
	void sub_102a98e0(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
};
