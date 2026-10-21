// CAI_BaseNPCTroika: NPC base of the Troika-made NPCs (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

struct inputdata_t;
class CAI_BaseNPCTroika;

struct CAI_CondTable
{
	int sub_102ea2d0(int condition);	// translates a symbolic condition id (below 1000000000) to the id of the condition bit (stub 0x10012300)
};

struct CAI_CondOwner
{
	char m_pad0000[0x30];
	CAI_CondTable m_table;	// 0x30
	int sub_102ea280(int schedule);	// translates a global schedule id to the local one, -1 when unknown (stub 0x100102b2)
};

struct CAI_NamedThing	// one of the three global objects an NPC can be bound to by name
{
	const char *sub_1025e120();	// the name (stub 0x1000f579)
	char sub_1025dca0(CAI_BaseNPCTroika *pNPC, int a);	// whether the NPC may use this named thing (stub 0x10015564)
};

class CAI_BaseNPCTroika : public CAI_BaseNPC
{
public:
	virtual int vfunc127(CRestore *pRestore);	// "CAI_BaseNPCTroika::Restore": CAI_BaseNPC::vfunc127, a flag byte (slot 17 of the restore) that gates two ints (slot 15), then the float fix-ups of the fields at +0x607c .. +0x657c and the nine 0x2c byte timers at +0x60b0 .. +0x6210
	virtual int vfunc293();	// the dword at +0x9c of the entity the handle at +0x647c resolves to (0 when stale)
	virtual void vfunc416(char value);
	virtual float vfunc418(float a);	// float lookup: -1000005 -> +0x6484, -1000006 -> +0x6488, -1000007 -> +0x648c, -1000008 -> 10.0f, else CAI_BaseNPC::vfunc418(a)
	virtual bool vfunc468(CBaseEntity *pEnt);	// see CAI_BaseNPC
	virtual int vfunc359(CBaseEntity *pEnt);	// slot 359 "GetCombatState"-like: -1 when unselectable (sub_100a52a0) or state +0x5cc0 is 7, 4 while the count at +0x146c is positive, 3 with bit 19 of +0x14bc, then by state +0x5cc0: 2/0xb -> 1, 3/0xe -> 7, 5/6/8/9/0xa/0xd -> 0, else 2 when pEnt answers slot 404 with 1, else 5

	// Slots 569..601 (past the end of the base class's declared slots).
	virtual int vfunc569(CBaseEntity *pHint);	// slot 569: 8 while bit 9 of +0x14b8 is set, else the activity for the hint's type at +0x5dc (100 -> 0x1111, 101 -> 0x110d, 0x27d8 -> 0x1118) when sub_10295460(activity, 0) accepts it, else CAI_BaseNPC::sub_10274aa0(pHint)
	virtual int vfunc570(CBaseEntity *pHint); virtual void vfunc571(); virtual void vfunc572(); virtual void vfunc573();	// slot 570: picks an activity for the hint's type at +0x5dc (100 / 101), 0x55 when none
	virtual void vfunc574(); virtual void vfunc575(); virtual void vfunc576(); virtual void vfunc577(); virtual void vfunc578();
	virtual void vfunc579();
	virtual CAI_CondOwner *vfunc580();	// the object that translates condition ids (sub-object at +0x30)
	virtual void vfunc581(); virtual void vfunc582();
	virtual void vfunc583();	// asked after another NPC accepted the value of slot 585
	virtual void vfunc584();
	virtual int vfunc585(int a);	// the value offered to another NPC's slot 482
	virtual void vfunc586();
	virtual char vfunc587(int unused);	// slot 587: true when the NPC may be interrupted: not busy with sub_10337f30, no value at +0x128, no count at +0x5bb4, bit 4 of +0x5b84 clear, not busy with discipline, and either the count at +0x6354 or the one at +0x6358 is at most 2
	virtual void vfunc588(); virtual void vfunc589();
	virtual char vfunc590();	// slot 590: true when the NPC may act and its state (+0xfec) is one of a fixed set (1, 9, 0x13, 0x30, 0x4b, 0x4d, 0x51, 0x73..0x8a, 0xcb5, 0xd25, 0x1121, 0x1157..0x1158)
	virtual void vfunc591(); virtual void vfunc592(); virtual void vfunc593(); virtual void vfunc594(); virtual void vfunc595();
	virtual void vfunc596(); virtual void vfunc597(); virtual void vfunc598(CBaseEntity *pEnt);	// slot 598: forgets pEnt (sub_10332ca0(pEnt, 4, 0), clears the focus / target when it is pEnt, drops its record from the memory list of slot 541)
	virtual void vfunc599(); virtual char vfunc600(int unused);	// slot 600: see sub_102b57c0
	virtual void vfunc601(int a);	// slot 601: takes one argument
	virtual void vfunc602(); virtual void vfunc603(); virtual void vfunc604(); virtual void vfunc605(); virtual void vfunc606(); virtual void vfunc607();
	virtual bool vfunc608(const char *pszName);	// slot 608: binds the NPC to the first of the three global named objects whose name equals pszName (case-sensitive; false for null / empty / no match), stores it at +0x65e8 and its name (null when empty) at +0x65ec

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
	int vfunc611();	// slot 611: picks one of the table values (index at +0x64c8) for the NPC through CUnknown100ecee0::sub_100ecee0, with random switches (flags at +0x64e0 / +0x64e1, time at +0x64e4); falls back to the dword at +0x6f0 for -1
	int sub_102c1230();	// called through the stub at 0x1000d4cc by vfunc611
	int vfunc609(char bForce);	// slot 609 (declared as a plain member): the target at +0x6444 when slot 566 still accepts it; unless bForce, 0 while curtime is before the time at +0x6440; else re-arms that time (random 2.0 .. 2.5 seconds ahead) and starts the free function sub_102d2980(this, 8, 0x10, range, 0, 0) (stub 0x1000a1e1) with the range 1024.0f or the float at +0x8c0 of the active weapon
	bool vfunc294(int unused);	// slot 294 (declared as a plain member): false while sub_100b5190 holds, with a value at +0x128 or with the byte at +0x63d8; else true when the state (slot 464) fits the global at 0x10924afc, neither condition 0x6f nor 0x5a is set and slot 158 holds
	char sub_100b5190();	// the stub at 0x10014da8, called directly by slot 294

	void vfunc17(const char *pszFormat, int arg);	// slot 17 (declared as a plain member: the base's slot 17 is a placeholder): formats the message with sub_10004011 into a 512 byte buffer; with the debug flag at 0x10920534 set, passes a copy of the format to sub_1027ee20, else DevMsg's the formatted text
	void sub_10004011(const char *pszFormat, int arg, char *pOut, int nOut);	// message formatter (stub of 0x1028d990), called directly

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
	int sub_102b6fe0(int a);	// scope-less schedule selection: with condition 0x48 (or else 0x3a) set, schedule 0xe9 (after slot 601(a) when the byte at +0x6078 is set) while slot 308 holds, else 0xcd (0xce); records the source file / line at +0x1b30 / +0x1b34; 0 without either condition
	void sub_102b52a0(char bClearTarget, char bDead);	// resets the target (sub_10279a50(0), sub_10279b70(0)), clears bits of the flags at +0x5d8c, flushes the pending queue of slot 541; with bDead stamps the source line at +0x1b3c / +0x1b40 and sets the state +0x5cc4 to 1
	void sub_1000dc38();	// stub 0x1000dc38 for 0x10273760, run by sub_102b52a0 when its first argument is set
	char sub_1029fcf0(int a, CBaseEntity *pEnt, int b);	// slot 318: false without pEnt or when sub_1028a190 refuses; else (by pEnt's kind == 3) picks schedule 0xd8 / 0xd7, stamps the source file / line at +0x1b30 / +0x1b34, runs sub_102ae750(schedule, 0) and arms the timer at +0x1564 with curtime + a constant; true
	void sub_102ae750(int schedule, int a);	// stub 0x1000198d
	char sub_102b57c0(int unused);	// slot 600: when the active weapon (sub_10007e19) is a ranged one (type flags bits 15 / 16) and the flag byte at +0x6078 is clear, asks the named thing at +0x65e8 (sub_1025dca0); on yes sets the flag, stamps the next time at +0x6074 (curtime + random 7.5 .. 15.0), notifies the global at 0x10924edc and returns true; else clears the flag and returns false
	int sub_10007e19();	// CBaseCombatCharacter member (the stub at 0x10007e19 for 0x1032e7b0): the active weapon
	void sub_102b2730();	// part of GatherConditions: with no pending count (+0x5bb0) and a squad (+0x5da4), when the enemy (slot 168) was last seen long enough ago sets the task 0x31 (then 0x32 when condition 0x4a is set); then asks condition 0x46
	void sub_10332ca0(CBaseEntity *pEnt, int a, int b);	// "CBaseCombatCharacter::AddEntityRelationship" (stub 0x10005849), called directly
	int sub_102c47e0(const char *pszName, const char *pszCaller);	// "LookupSchedule": the local id of the schedule pszName (also tried as "SCHED_<name>"), -1 with an error message naming pszCaller when it is unknown
	void sub_102c0bb0();	// resets the NPC's look target: tells the global at 0x1070b248 (slot 6) about the engine index of this edict with 5, runs slot 275, FadeoutExpressions, sub_102c0ca0; then, when slot 613 holds and the state is not 0xf1, takes the activity slot 611 gives (if not negative) as the ideal state 0xf1 and, unless the byte at +0x6080 is set, plays it (+0x6f0, +0x6f8 = 0, +0x174 = curtime, +0xfec = 0xf1, sub_10090950)
	void sub_1029ea40(inputdata_t *pInput);	// "ProcessTweakParam" input handler: the input as text (converted when it is not a string) is copied into a 256 byte buffer and split at ", " into a name and a value handed to slot 585(name, value); with fewer than two tokens DevMsg's "ERROR: %s - Argument to ProcessTweakParam(%s) is in the wrong format."
	void sub_102c0270(int a);	// scripted-sequence cleanup: clears the byte at +0x6495, sets the byte at +0x1590, counts +0x64bc, runs sub_102c0ca0 (stub 0x1000e4d5) and CBaseCombatCharacter::sub_10107050(a), calls slot 306(a, 0) unless bit 3 of the flags at +0x204 is set, cancels the scripted sequence entity of the handle at +0x5d74 (CCineNPC::sub_101a8c30) and hands (a, this, 0) to the sub-object at +0x5f44 (stub 0x10010794)
	void sub_1000e4d5();	// stub of 0x102c0ca0, called directly
	void sub_10107050(int a);	// CBaseCombatCharacter member (stub 0x1000fdd0), called directly
	bool sub_102c44e0(const char *pszName);	// sets the follow target: the entity of that name (slot 559) is stored as the handle at +0x647c (-1 when none); false (handle cleared) when it is invalid or this NPC itself, or a squad member that is not allowed; else resets the target (sub_102b52a0(0, 0)), sets flags 0x3008 at +0x5b84 and returns true
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd), called directly

	char m_pad0004[0x204 - 4];
	unsigned int m_flags204;
	char m_pad0208[0x14bc - 0x208];
	unsigned int m_flags14bc;
	char m_pad14c0[0x1590 - 0x14c0];
	char m_b1590;
	char m_pad1591[0x5bc4 - 0x1591];
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
	char m_pad63d9[0x6440 - 0x63d9];
	float m_f6440;
	CBaseEntity *m_p6444;
	unsigned int m_h6448;
	char m_pad644c[0x6495 - 0x644c];
	char m_b6495;
	char m_pad6496[0x64bc - 0x6496];
	int m_n64bc;
	char m_pad64c0[0x64cc - 0x64c0];
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
