// CAI_BaseNPCTroika: NPC base of the Troika-made NPCs (derived from CAI_BaseNPC at +0x0).
// New method declarations can go into CAI_BaseNPCTroika_ext.h (included at the end of the class body) so that
// workers do not overwrite each other's edits of this large file.
#pragma once
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"

#include "CAI_BaseNPC.h"
#include "CAI_TroikaLink.h"

struct inputdata_t;
struct CAI_ArcRecord;
class CAI_MoveProbe;
class CAI_BaseNPCTroika;

struct CAI_SensesView	// the component at +0x5cdc of an NPC
{
	char m_pad0000[0x10];
	float m_f10;	// 0x10
};

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
	char sub_1025de90(CAI_BaseNPCTroika *pNPC);	// stub 0x1000d634, run by slot 602 when the NPC may not simply carry on
	char sub_1025db50();	// stub 0x1001450b, asked by slot 602
	void sub_1025ddd0(CAI_BaseNPCTroika *pNPC);	// stub 0x10013d31, run by slot 601 for the bound named thing
};

class CAI_BaseNPCTroika : public CAI_BaseNPC
{
public:
	virtual int vfunc81();
	virtual bool vfunc466();	// slot 466 override: false when the current task's int is 0xb9; true when the byte at +0x65fa; else CAI_BaseNPC::vfunc466	// slot 81: an int getter returning 0 (CAI_BaseNPC declares this slot as int since 0x102c5890 answers in eax)
	virtual int vfunc127(CRestore *pRestore);	// "CAI_BaseNPCTroika::Restore": CAI_BaseNPC::vfunc127, a flag byte (slot 17 of the restore) that gates two ints (slot 15), then the float fix-ups of the fields at +0x607c .. +0x657c and the nine 0x2c byte timers at +0x60b0 .. +0x6210
	virtual void vfunc113();	// slot 113 override: CBaseEntity::vfunc113, then when slot 138 answers non-zero applies the disposition (sub_102c0f70(+0x6558 or "", 1))
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	virtual void vfunc78();	// slot 78: with the script recording flag (+0x5d78) set and its entity (+0x5d74) alive the entity's slots 94 / 95 / 92 / 211 are asked and the answers and the flags (+0x19c, +0x14b8) are stored at +0x5f78.. of the script entity after CBaseEntity::vfunc78, slot 614 and the active weapon's slot 78
	virtual int vfunc293();	// the dword at +0x9c of the entity the handle at +0x647c resolves to (0 when stale)
	virtual int vfunc142(int a);	// slot 142 override: with the byte at +0x63d8 set fires the output at +0x5e0c (this, this, 0 delay) once per time stamp (+0x5d98) and answers 0, else CAI_BaseNPC::vfunc142
	virtual void vfunc416(char value);
	virtual float vfunc418(float a);	// float lookup: -1000005 -> +0x6484, -1000006 -> +0x6488, -1000007 -> +0x648c, -1000008 -> 10.0f, else CAI_BaseNPC::vfunc418(a)
	virtual bool vfunc468(CBaseEntity *pEnt);	// see CAI_BaseNPC
	virtual void vfunc470();	// slot 470: CAI_BaseNPC::vfunc470, then copies the sense records of the types the flags at +0x5cb4 ask for into the 0x2c byte snapshots at +0x6108 .. +0x61e4 and feeds the timers at +0x6160 / +0x6210
	virtual int vfunc404(CBaseEntity *pOther);
	int sub_10013016(CBaseEntity *pOther);	// CBaseCombatCharacter::vfunc404 (IRelationType, stub 0x10013016), called directly
	virtual int vfunc359(CBaseEntity *pEnt);
	virtual int vfunc376(int a);	// slot 376: the next activity of the fallback chain	// slot 359 "GetCombatState"-like: -1 when unselectable (sub_100a52a0) or state +0x5cc0 is 7, 4 while the count at +0x146c is positive, 3 with bit 19 of +0x14bc, then by state +0x5cc0: 2/0xb -> 1, 3/0xe -> 7, 5/6/8/9/0xa/0xd -> 0, else 2 when pEnt answers slot 404 with 1, else 5

	// Slots 569..601 (past the end of the base class's declared slots).
	virtual int vfunc569(CBaseEntity *pHint);	// slot 569: 8 while bit 9 of +0x14b8 is set, else the activity for the hint's type at +0x5dc (100 -> 0x1111, 101 -> 0x110d, 0x27d8 -> 0x1118) when sub_10295460(activity, 0) accepts it, else CAI_BaseNPC::sub_10274aa0(pHint)
	virtual int vfunc570(CBaseEntity *pHint); virtual void vfunc571(); virtual void vfunc572(); virtual void vfunc573();	// slot 570: picks an activity for the hint's type at +0x5dc (100 / 101), 0x55 when none
	virtual void vfunc574(); virtual bool vfunc575();	/* slot 575 (+0x8fc): a boolean answer in al, asked by CAI_BaseNPC::vfunc445 */ virtual void vfunc576(); virtual void vfunc577(); virtual void vfunc578();
	virtual void vfunc579();
	virtual CAI_CondOwner *vfunc580();	// the object that translates condition ids (sub-object at +0x30)
	virtual void vfunc581(); virtual void vfunc582();
	virtual void vfunc583();	// asked after another NPC accepted the value of slot 585
	virtual void vfunc584(int unused);	// slot 584 (ret 4): slot 614, then stamps curtime at +0x178 and +0x6254..+0x6260
	virtual int vfunc585(int a);	// the value offered to another NPC's slot 482
	virtual int vfunc586(int);
	virtual char vfunc587(int unused);	// slot 587: true when the NPC may be interrupted: not busy with sub_10337f30, no value at +0x128, no count at +0x5bb4, bit 4 of +0x5b84 clear, not busy with discipline, and either the count at +0x6354 or the one at +0x6358 is at most 2
	virtual void vfunc588(); virtual void vfunc589(int a, int b);
	virtual char vfunc590();	// slot 590: true when the NPC may act and its state (+0xfec) is one of a fixed set (1, 9, 0x13, 0x30, 0x4b, 0x4d, 0x51, 0x73..0x8a, 0xcb5, 0xd25, 0x1121, 0x1157..0x1158)
	virtual bool vfunc591(); virtual bool vfunc592(); virtual int vfunc593(); virtual void vfunc594(); virtual void vfunc595();
	virtual void vfunc596(int a); virtual int vfunc597(int, int); virtual void vfunc598(CBaseEntity *pEnt);	// slot 598: forgets pEnt (sub_10332ca0(pEnt, 4, 0), clears the focus / target when it is pEnt, drops its record from the memory list of slot 541)
	virtual char vfunc599(int unused);	// slot 599: true when the NPC may take a ranged position now (keeps +0x6078 up to date): see the definition
	virtual char vfunc600(int unused);	// slot 600: see sub_102b57c0
	virtual void vfunc601(int a);	// slot 601: takes one argument
	virtual char vfunc602(); virtual float vfunc603(float *pCur, float *pTarget);	// slot 602: true when the NPC may carry on (flags +0x5b84 bit 1 clear, slot 293 zero, bound named object at +0x65e8 content with the NPC's timers), see CNPC_VHuman::vfunc602; slot 603: random yaw offset picked by where *pCur lies relative to *pTarget (+-32.0f); see the definition
	virtual void vfunc604(); virtual int vfunc605(int unused); virtual int vfunc606(int unused);	/* slot 606: schedule pick for the NPC's idle mood: condition 0x48 required; condition 0x59, flag 0x100 of +0x5b84, 0x40000 of +0x14bc and 0x10000000 of +0x14b8 pick fixed schedules (0xaa, 0xb4, 0xb6 / 0xb4 by a roll), otherwise a roll against the four thresholds at +0x6420.. (condition 0x31 picks the other table); stamps the source file / line at +0x1b30 / +0x1b34 */ virtual void vfunc607();
	virtual bool vfunc608(const char *pszName);	// slot 608: binds the NPC to the first of the three global named objects whose name equals pszName (case-sensitive; false for null / empty / no match), stores it at +0x65e8 and its name (null when empty) at +0x65ec

	bool vfunc486();	// slot 486: false while sub_102c1170 reports talking / busy, else whether sub_102c6d80 is present
	void sub_102a18a0(const struct CAI_FloatParam *pParam);	// stamps +0x5db4 with curtime plus the parameter's float (1000.0f when it is not positive)
	void vfunc487();	// slot 487: random 0.25..0.75 second delay + curtime at +0x5ce8 and, without a pending count (+0x5bb0), at +0x60 of the squad object (+0x5da4)
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
	void vfunc507();	// slot 507: plays the "Float" sound (pitch from the value at +0x128), then stamps the float at +0x10ec with the engine time plus the "Float Sound Info" stat
	void vfunc616();	// slot 616: base call with 0x30, then stamps curtime + 15 at +0x65bc
	int vfunc612();	// slot 612 (declared as a plain member): 0x80 by default; with the dialog partner (handle at +0xfe8) alive 0x280 when the byte at +0x654c is set, else 0x680
	int vfunc611();	// slot 611: picks one of the table values (index at +0x64c8) for the NPC through CUnknown100ecee0::sub_100ecee0, with random switches (flags at +0x64e0 / +0x64e1, time at +0x64e4); falls back to the dword at +0x6f0 for -1
	int sub_102c1230();	// called through the stub at 0x1000d4cc by vfunc611
	int vfunc609(char bForce);	// slot 609 (declared as a plain member): the target at +0x6444 when slot 566 still accepts it; unless bForce, 0 while curtime is before the time at +0x6440; else re-arms that time (random 2.0 .. 2.5 seconds ahead) and starts the free function sub_102d2980(this, 8, 0x10, range, 0, 0) (stub 0x1000a1e1) with the range 1024.0f or the float at +0x8c0 of the active weapon
	bool vfunc294(int unused);	// slot 294 (declared as a plain member): false while sub_100b5190 holds, with a value at +0x128 or with the byte at +0x63d8; else true when the state (slot 464) fits the global at 0x10924afc, neither condition 0x6f nor 0x5a is set and slot 158 holds
	int sub_1029f730(int a);	// the lazily cached record at +0x659c (stub 0x100069e7; 0 while the byte at +0x65a0 is clear)
	int sub_1029f780(int a);	// the value at +0xb0 of the entity named by the record's string (+0x468), cached at +0x6300 (looked up once)
	char sub_100b5190();	// the stub at 0x10014da8, called directly by slot 294

	void vfunc17(const char *pszFormat, int arg);	// slot 17 (declared as a plain member: the base's slot 17 is a placeholder): formats the message with sub_10004011 into a 512 byte buffer; with the debug flag at 0x10920534 set, passes a copy of the format to sub_1027ee20, else DevMsg's the formatted text
	void vfunc19(const char *pszMsg);	// slot 19 (plain member): with the debug flag at 0x10920534 set passes a copy (512 bytes) of the message to sub_1027ee20, else DevMsg's it; nothing for null
	void sub_10004011(const char *pszFormat, int arg, char *pOut, int nOut);	// message formatter (stub of 0x1028d990), called directly

	void sub_102950c0();	// plays the "Alarmed_Loop" sound
	void sub_10295180();	// plays the "Animal_Kened" sound
	void sub_10295240();	// plays the "Warning_Loop" sound
	char sub_102a9ec0(int index);
	const char *sub_102c3690(int task);
	const char *sub_102c36b0(int schedule);
	void sub_102c2680(const struct CAI_FloatParam *pParam);	// stores the parameter's float (0 unless its type is 1) clamped to 0..1 at +0x6550; with the byte at +0x64c0 set plays a sound at that volume to the players that can hear it
	void sub_102c0010(int unused);	// once the whole-number parts of the two vectors at +0xe44 / +0xe50 agree, steps the NPC's table entry (index +0x64d4): waits for the time at +0x657c, then picks the next table value at the time at +0x6580 (a random delay, counted at +0x6578) or, after +0x657c, re-arms it with a random delay; takes one unused stack argument
	void sub_102c0ca0();	// "CAI_BaseNPCTroika::FinishTalking": scope trace (entity name), then ends the VCD entity of the handle at +0x6554
	char sub_102c1170();	// true when one of two flag bytes (+0x64c0, +0x64ec) is set or one of two entity handles (+0xfe8, +0x6554) is valid
	char sub_102c0aa0();	// true when the entity of the handle at +0x6554 has its byte at +0x498 set, or the time at +0x64cc lies in the future
	void sub_10015839(int a);	// base-class slot 616 implementation, called directly
	void sub_10011dc4();	// base-class slot 516 implementation, called directly
	void sub_102a97a0(unsigned int flags);	// ORs flags into the dword at +0x14b8
	void sub_102a97d0(unsigned int flags);	// clears flags in the dword at +0x14b8
	void sub_102c2c50(inputdata_t *data);	// "SetDiscipline" input handler: the input text names a discipline (auspex, celerity, ...) with an optional level 0..5, handed to slot 589
	void sub_102c2890(inputdata_t *data);	// input handler: the input as text; when it is not empty precaches it as a sound and hands it to sub_102c0520(text, 0, 0)
	void sub_102c0520(const char *psz, int a, int b);	// stub 0x10014cbd, called directly
	void sub_102c32d0(inputdata_t *data);	// input handler: with a boolean input (type 5) true activates the "Thaumaturgy_Bloodshield" discipline effect on this NPC (sub_101e3380), else removes it (sub_101e3af0)
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
	int sub_102b8a60();	// schedule pick by the conditions (3 -> 0x60, 1/5/0x26 -> 0x59..0x5e by flag bits 27 of +0x5d8c and 21 of +0x14b8, 2 -> 0x5d / 0x5f, 21 of +0x14b8 -> 0x5c), stamping the source file name and a line at +0x1b30 / +0x1b34 with each answer; 0 when none
	int sub_10295590(int activity);	// slot 375 base implementation (NPC_TranslateActivity), called directly
	void sub_1028e8b0(CBaseEntity *pEnt, int a);	// runs sub_1028e940(a) when pEnt is null-safe related to this NPC: this NPC has no slot 167 value, or pEnt is that value, or the object at pEnt+0x98 has the same slot 167 value
	void sub_1028e940(int a);
	int sub_102ad2d0();	// when condition 0x1f holds: sets bit 8 of +0x14b8 (unless the state +0x5cc0 is already 8), stamps the source file / line 0x447d and sets the ideal state +0x5cc4 to 8; returns 8, else 0
	char sub_10337f30();	// CBaseCombatCharacter member (the stub at 0x10006b04), called directly
	char sub_1033e2b0();	// CBaseCombatCharacter::IsBusyWithDiscipline (the stub at 0x1000caae), called directly
	char sub_10281430();	// true when the NPC may skip its pending request: not dead / mid-switch (state +0x5cc4 is not 7, nor 4 with +0x5cc0 not 4), and either the one-shot byte at +0x1b28 was set (cleared here), condition 0x5d is not set, bit 29 of +0x5c7c is set with a target at +0x5c38, or state +0x5cc0 is 2 without a slot 167 value
	int sub_102b8620();	// stub 0x10002bf3, called directly by slot 605 (the schedule pick for the NPC's current state)
	bool sub_102b7f40();	// called directly by slots 438 / 605: a sequence of activity 0x10 exists and either condition 0x2c is set (or a 25% roll fails), the status flag list accepts this NPC, or condition 0x3c is set
	char sub_10014df8(int condition);	// "HasCondition" (the stub at 0x10014df8 for 0x10269aa0), called directly
	void sub_102a0870();	// "CAI_BaseNPCTroika::...": when condition 0x37 holds and the entity of the handle at +0x6010 resolves to an entity with an object at +0x98 whose state (+0xfec) is not refused by sub_10344da0, asks sub_103449b0 for an index and, when it is not negative, hands (this, index) to that object's slot 320
	void sub_1029f060(int unused);	// when the player's dialog partner (handle at player+0xfe8) is gone, this NPC is not busy with a discipline and flag bit 28 of +0x14bc is clear: sub_1000e4d5, slot 614, sets the byte at +0x6495, stamps the source file / line 0x268e at +0x1b30 / +0x1b34 and starts schedule 0x6e (sub_102ae750); takes one unused stack argument
	void vfunc432(int a);	// slot 432 "CAI_BaseNPCTroika::RunAI" (plain member): scope trace (entity name), sub_1028fc90(), sub_102a0d20(), then CAI_BaseNPC::vfunc432(a)
	void sub_1028fc90();	// stub 0x1000ccd4, called directly by RunAI
	void sub_1026f110(int a);	// CAI_BaseNPC::vfunc432 (stub 0x1000a529), called directly by RunAI
	bool sub_10297430(CAI_BaseNPCTroika *pOther);	// "CAI_BaseNPCTroika::...": false unless the entity of the handle at +0x6448 resolves to a live entity, else sub_10296c40(pOther, that entity, the dword at pOther+0x458, 0.731f) != 0
	void sub_102974f0(CAI_BaseNPCTroika *pOther);
	void sub_102c4310(int a, int b, int c, int d, int e);
	void sub_102c4c50(CAI_ArcRecord *pRec, float flTime, int a, int b);	// stores in the record (+8) the speed sqrt(2 * gravity * the float at +0x3ec * flTime) (gravity 0 while the convar's slot 1 holds), then sub_102c4cc0(pRec, a, b)
	void sub_102c4cc0(CAI_ArcRecord *pRec, int a, int b);	// stub 0x10009a57, called directly
	char sub_10296c40(CAI_BaseNPCTroika *pOther, CBaseEntity *pEnt, int a, float f);
	int sub_10295460(int a, int b);	// called through the stub at 0x10009c14
	void sub_10272650(int activity);	// CAI_BaseNPC member (stub 0x100097d2): the ideal activity: 0 goes to slot 310, else stores it at +0xff0 and hands it to the activity worker (called directly)
	bool vfunc347(int event, char *pszName, float *pA, float *pB, float *pC, float *pD);	// "GetExpressionEvent..." override: event 1 stores "Knockback" and four float parameters (the third one raised by sub_10091080(sub_1008dd30(the dword at +0x6068, -1)) when that is not negative), true; else the CBaseCombatCharacter implementation
	bool sub_10107120(int event, char *pszName, float *pA, float *pB, float *pC, float *pD);	// CBaseCombatCharacter::vfunc347, called directly (stub 0x10014ba0)
	int sub_1008dd30(int a, int b);	// CBaseAnimating::sub_1008dd30, called directly (stub 0x10004ec1)
	float sub_10091080(int sequence);	// CBaseAnimating member (stub 0x10009813), returns a float
	char sub_1028a190();	// "IsInterruptible"-like: false while the state is 4 and the scripted entity of the handle at +0x5d74 is not playing (CCineNPC::sub_101a8930), or the byte at +0x5bc4 / bit 12 of the dword at +0x14bc is set; else slot 158
	void sub_102c41d0(int a, const Vector *pFrom, const Vector *pTo, int c);	// resolves the defaults (this NPC's slot 217 origin, the global vector at 0x1070d9d0), then hands them with the slot 192 vector to the worker behind the stub at 0x10001a8c
	void sub_102c41b0(int a, const Vector *pFrom, const Vector *pTo, int c);	// a jump to sub_102c41d0 with the same four arguments (stub-like thunk)
	int sub_102a0ed0(int a, int b, int c, int d);	// "CAI_BaseNPCTroika::CanStandAt" worker (unmatched, score 11): scope trace (entity name), sets the byte at +0x63da around the call sub_102e7270(a, b, c, d, 0, 0) of the object at +0x5d40 and returns its result
	void sub_101a72b0(int unused);	// when the NPC behind the handle at +0x5ce4 (its object at +0x94) is in state 0 or 2 and accepts slot 585(1) on its slot 482, runs slot 583; with no such NPC runs the think setter (stub 0x1000556f) and stamps the next think; always stamps curtime + 1000000 at +0x5f74
	int sub_102b6fe0(int a);	// scope-less schedule selection: with condition 0x48 (or else 0x3a) set, schedule 0xe9 (after slot 601(a) when the byte at +0x6078 is set) while slot 308 holds, else 0xcd (0xce); records the source file / line at +0x1b30 / +0x1b34; 0 without either condition
	void sub_102b52a0(char bClearTarget, char bDead);	// resets the target (sub_10279a50(0), sub_10279b70(0)), clears bits of the flags at +0x5d8c, flushes the pending queue of slot 541; with bDead stamps the source line at +0x1b3c / +0x1b40 and sets the state +0x5cc4 to 1
	void sub_1000dc38();	// stub 0x1000dc38 for 0x10273760, run by sub_102b52a0 when its first argument is set
	char sub_1029fcf0(int a, CBaseEntity *pEnt, int b);	// slot 318: false without pEnt or when sub_1028a190 refuses; else (by pEnt's kind == 3) picks schedule 0xd8 / 0xd7, stamps the source file / line at +0x1b30 / +0x1b34, runs sub_102ae750(schedule, 0) and arms the timer at +0x1564 with curtime + a constant; true
	char vfunc320(int a, int b);	// slot 320 (declared as a plain member): false unless sub_1028a190 holds and sub_102c1170 does not and the sequence of activity b is known (sub_1008dd30); else remembers b at +0x6068, runs slot 614, stamps the source file / line 0x29b5 at +0x1b30 / +0x1b34 and starts schedule 0x14d (after sub_102a0290(a, b)) when sub_10344da0(b) holds, else schedule 0x14c; true
	char sub_10344da0(int a);	// stub 0x10010c3f, called directly
	void sub_102a0290(int a, int b);	// stub 0x10013647, called directly
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
	void sub_102aab70(int unused);	// looks the NPC's target toward a position: with flag 0x10 of +0x14bc and an enemy (slot 167) the position slot 541 gives for it, with flag 0x20 and the entity of the handle at +0x5ce4 that entity's origin (slot 217); when slot 556 does not accept the position it is handed to the motor (+0x5d44) as a facing target with weight -2.0f; takes one unused stack argument
	bool sub_1028fd80(int arg);	// "CAI_BaseNPCTroika::RunAlternateAI" (called by slot 431): with a live entity in the handle at +0x1538 and the value 1 at +0x153c runs the auto movement (sub_10280a50) for a few ideal activities, true; else by the scripted-action state (+0x644c) one of the four state handlers
	bool sub_10290040(int unused);	// task state 1 of the scripted-action runner (stub 0x10014cc7), result passed on
	bool sub_10290350(int unused);	// task state 4 of the scripted-action runner (CAI_BaseNPCTroika::RunAlternateAction, state at +0x644c): base work with the byte at +0x65fa set, drops the target (handle +0x5d24) when its entity is not flagged at +0x4f8, traces from the origin along the vector at +0x6290 scaled by 64.0f and drops the target on a hit; ends the action (slot 448(0xe)) once curtime passes the time at +0x6450; always true
	bool sub_10290200(int unused);	// task state 2 of the scripted-action runner (CAI_BaseNPCTroika::RunAlternateAction, state at +0x644c): after the base work, once curtime passed the time at +0x6450, when the entity of the handle at +0x5d24 is live runs slot 448(0xe) and clears the handle, the byte at +0x5d30 and the state; else lets the object at +0x5d34 decide (sub_102ee2e0) to run sub_102bf7e0, then slot 528 and clears the state; always true
	void sub_102c0360();	// scripted-sequence end: when the entity of the handle at +0xfe8 resolves, clears the byte at +0x1590, hands (that entity, this, 0) to the sub-object at +0x5f5c (stub 0x10010794) and runs sub_10107050(0); then, unless the global at 0x109241fc says otherwise, clears the "entity_debug_stats" flag (slot 4 of the named object) and sub_10119900(0)
	void sub_1029a930(const char *pszSquad);	// joins the squad of that name (a missing or empty name gives none): leaves the current squad (sub_103158f0) or frees the private object at +0x5d88, finds / creates the squad (sub_10315800) and keeps its embedded object (+8) at +0x5d88 (a fresh 0x14 byte object without a squad), then tells the squad (sub_10316700) while the count at +0x5bb0 is positive
	bool sub_10290fc0(float *pOut);	// \"CAI_BaseNPCTroika_CalcNextMoveThink\" (profile scope): *pOut = +0x624c - +0x625c, +0x625c = +0x624c, +0x624c = curtime + const; true
	virtual void vfunc419();	// slot 419 override: the two floats at +0x5bbc / +0x5bc0 from the active weapon (0.3f / 0.5f without one)
	float sub_1000cabd(int pWeapon);	// stub 0x1000cabd (0x102c5780), called directly
	float sub_10014655(int pWeapon);	// stub 0x10014655 (0x102c57c0), called directly
	int sub_102b7690(int a, int b, int c, int d);	// stub 0x10005dd0, called directly by the idle pick 0x102b7cf0
	int sub_102b7cf0();	// the idle-state schedule pick: condition 0x47 -> 0x10, else (enemy, slot 592) sub_102b7690, then the 0x800 flag / roll branches
	float sub_102c5570(struct CAI_RangeRec *pRec, float flValue);	// float-returning scale helper (st0), see the definition
	float sub_102c57c0(CBaseCombatWeapon *pWeapon);	// forwards to sub_102c5570 with the record's float at +0x268
	void sub_100041b0(int task);	// stub 0x100041b0 for 0x10269a20: sets a task (the inverse of sub_10015839)

#include "CAI_BaseNPCTroika_ext.h"
	virtual void vfunc21(int a);	// slot 21 override: sub_102bf5d0(a) on the unit view, ++m_n6064, the dev-flag global 0x10924a6c slot 1, then CAI_BaseNPC::sub_10269a20(0xa)
	void vfunc22(int a);
	virtual void vfunc27(int a);	// slot 27 override: sub_102bf5d0(a) on the unit view, the dev-flag global 0x10924a6c slot 1, task 0xa, then slot 600(a)
	void vfunc614();
	bool vfunc615();	// slot 615: false while condition 0x30 holds, else whether gpGlobals->curtime is past m_f65bc

	union { char m_pad0004[0x19c - 4]; struct { char m_pad0004b[0x98 - 4]; CAI_BaseNPCTroika *m_pObj98; }; };	// 0x98: the controlling NPC object (the one whose flags +0x14b8 / +0x14bc the break test sets)
	unsigned int m_flags19c;
	char m_pad01a0[0x204 - 0x1a0];
	unsigned int m_flags204;
	union { char m_pad0208[0x65c - 0x208]; struct { char m_pad0208b[0x224 - 0x208]; unsigned int m_fDebugOverlays224; }; };	// 0x224: the debug overlay flags (bit 27 = print the schedule debug text)
	char m_b065c;
	char m_pad065d[0x6f8 - 0x65d];
	int m_n06f8;
	char m_pad06fc[0xfe8 - 0x6fc];
	unsigned int m_hfe8;
	int m_nState0fec;
	int m_nActivityff0;	// 0xff0: the ideal activity
	char m_pad0ff4[0x14b8 - 0xff4];
	unsigned int m_flags14b8;
	unsigned int m_flags14bc;
	char m_pad14c0[0x1538 - 0x14c0];
	EHANDLE m_h1538;
	int m_n153c;
	char m_pad1540[0x1590 - 0x1540];
	char m_b1590;
	union { char m_pad1591[0x1b30 - 0x1591]; struct { char m_pad1591b[0x1a40 - 0x1591]; char m_b1a40; }; };	// 0x1a40: the "break condition pending" byte (cleared by the break test)
	const char *m_pszFile1b30;	// 0x1b30: source file stamp of the last schedule pick
	int m_nLine1b34;	// 0x1b34: its line
	int m_n1b38;	// 0x1b38: set to 0x14 by the ideal state pick (SelectIdealState)
	const char *m_pszFile1b3c;	// 0x1b3c: source file stamp of the last ideal state change
	int m_nLine1b40;	// 0x1b40: its line
	const char *m_pszFile1b44;	// 0x1b44: source file stamp (third pair)
	int m_nLine1b48;	// 0x1b48: its line
	char m_pad1b4c[0x5b84 - 0x1b4c];
	unsigned int m_flags5b84;	// 0x5b84: bit 1 keeps the NPC from carrying on (slot 602)
	char m_pad5b88[0x5ba8 - 0x5b88];
	EHANDLE m_h5ba8;	// 0x5ba8: a handle to an entity (distance target of sub_102c5570)
	char m_pad5bac[0x5bbc - 0x5bac];
	float m_f5bbc;
	float m_f5bc0;
	char m_b5bc4;
	char m_b5bc5;
	char m_pad5bc6[2];
	union {
		char m_pad5bc8[0x5cc0 - 0x5bc8];
		struct {
			char m_pad5bc8b[0x5c38 - 0x5bc8];
			struct CAI_ScheduleView *m_pSchedule5c38;	// 0x5c38: the current schedule (null = none); its byte +0x18 bit 0 is the "interruptible" flag
			char m_pad5c3c[0x5c5c - 0x5c3c];
			unsigned int m_Conditions5c5c[6];	// 0x5c5c: the condition bit set (192 bits; sub_10269aa0 / HasCondition tests it)
			unsigned int m_ConditionsIgnore5c74[6];	// 0x5c74: the second bit set (conditions the NPC ignores / sets for the break test)
			unsigned int m_ConditionsBreak5c8c[6];	// 0x5c8c: the third bit set (the schedule's interrupt mask)
		};
	};
	int m_n5cc0;
	int m_n5cc4;
	char m_pad5cc8[0x5cdc - 0x5cc8];
	struct CAI_SensesView *m_pSenses5cdc;	// 0x5cdc: the senses component (a float at +0x10)
	char m_pad5ce0[0x5d24 - 0x5ce0];
	unsigned int m_h5d24;
	char m_pad5d28[0x5d30 - 0x5d28];
	char m_b5d30;
	char m_pad5d31[3];
	class CAI_Navigator *m_p5d34;	// 0x5d34: the navigator (+0x2c: its node list)
	char m_pad5d38[0x5d40 - 0x5d38];
	CAI_MoveProbe *m_pMoveProbe5d40;
	char m_pad5d44[0x5d70 - 0x5d44];
	int m_n5d70;	// 0x5d70
	unsigned int m_h5d74;
	char m_b5d78;	// 0x5d78: set while the scripted sequence entity (handle at +0x5d74) is recording this NPC's state
	char m_pad5d79[0x5d8c - 0x5d79];
	unsigned int m_flags5d8c;
	char m_pad5d90[0x5d98 - 0x5d90];
	float m_f5d98;	// 0x5d98: the time of the last output fired by vfunc142
	char m_pad5d9c[0x5db4 - 0x5d9c];
	float m_f5db4;	// 0x5db4: a time (curtime + the parameter's value, or + 1000.0f for a non-positive one)
	union { char m_pad5db8[0x5f8c - 0x5db8]; struct { char m_pad5db8b[0x5f34 - 0x5db8]; const char *m_pszBreakName5f34; int m_n5f38; struct CAI_ScheduleView *m_pSchedule5f3c; }; };	// 0x5f34: the name of the condition that broke the schedule (g_105cdd60 when unknown), 0x5f38 / 0x5f3c: the break record (0, the schedule)
	char m_Output5f8c[0x18];	// 0x5f8c: a COutputEvent (0x18 bytes, view with (COutputEvent *)m_Output5f8c; fired with (m_p62ec, this, 0) by sub_102b53d0)
	char m_pad5fa4[0x6010 - 0x5fa4];
	unsigned int m_h6010;
	char m_pad6014[0x6064 - 0x6014];
	int m_n6064;	// 0x6064: incremented by vfunc21 (a count of the things sub_102bf5d0 was told about)
	char m_pad6068[0x6074 - 0x6068];
	float m_f6074;	// 0x6074: the next time slot 600 may ask again
	char m_b6078;	// 0x6078: set while slot 599 / 600 hold the ranged position
	char m_pad6079[0x607c - 0x6079];
	float m_f607c;
	char m_b6080;
	char m_b6081;
	char m_pad6082[2];
	float m_f6084;
	unsigned int m_h6088;
	unsigned int m_h608c;
	float m_v6090[3];
	float m_f609c;
	float m_f60a0;
	int m_n60a4;
	int m_n60a8;
	char m_pad60ac[0x624c - 0x60ac];
	float m_f624c;	// 0x624c: the next time (curtime + const)
	char m_pad6250[0x625c - 0x6250];
	float m_f625c;	// 0x625c: the previous value of +0x624c
	char m_pad6260[0x6264 - 0x6260];
	float m_f6264;
	float m_f6268;	// 0x6268
	char m_pad626c[0x628c - 0x626c];
	EHANDLE m_h628c;
	Vector m_vec6290;
	char m_pad629c[0x62e8 - 0x629c];
	char m_b62e8;	// 0x62e8: set while the entity m_p62ec is held (cleared at the end of sub_102b53d0; vfunc103 clears it, vfunc444 reads it)
	char m_b62e9;	// 0x62e9: set by vfunc130 after the reload
	char m_pad62ea[0x62ec - 0x62ea];
	CBaseEntity *m_p62ec;	// 0x62ec: entity found by the free cdecl sub_102db5e0(this) (stub 0x100105b4); validated by sub_10299a80
	char m_pad62f0[0x6300 - 0x62f0];
	int m_n6300;	// 0x6300: cached value (lazily looked up by sub_1029f780)
	int m_n6304;	// 0x6304: cleared when the held entity m_p62ec is let go (sub_102b53d0)
	char m_pad6308[0x630c - 0x6308];
	char *m_p630c;	// 0x630c: an object with a flag dword at +0x64
	int m_n6310;	// 0x6310: node index (-1 none), bounds checked in the navigator's net (+0x5d34 -> +0x2c) by vfunc130
	int m_n6314;	// 0x6314: id handed to the node's sub_102f96e0 (-1 none); result goes to m_p630c
	float m_f6318;	// 0x6318
	char m_pad631c[0x6338 - 0x631c];
	int m_n6338;	// 0x6338: the investigate mode (0..6)
	int m_n633c;	// 0x633c: the combat investigate mode (0..6)
	char m_pad6340[0x63b8 - 0x6340];
	float m_f63b8;
	char m_pad63bc[0x63d8 - 0x63bc];
	char m_b63d8;
	char m_pad63d9;
	char m_b63da;
	char m_pad63db[0x63f0 - 0x63db];
	char m_b63f0;	// 0x63f0
	char m_pad63f1[0x63f8 - 0x63f1];
	int m_n63f8;	// 0x63f8
	char m_pad63fc[0x6420 - 0x63fc];
	int m_nRoll6420;	// 0x6420 .. 0x642c: the roll thresholds of slot 606
	int m_nRoll6424;
	int m_nRoll6428;
	int m_nRoll642c;
	char m_pad6430[5];
	char m_b6435;
	char m_pad6436[0x6440 - 0x6436];
	float m_f6440;
	CBaseEntity *m_p6444;
	unsigned int m_h6448;
	int m_n644c;
	float m_f6450;
	char m_pad6454[0x6478 - 0x6454];
	const char *m_psz6478;
	EHANDLE m_h647c;
	const char *m_psz6480;	// 0x6480: follower type name (vfunc130 passes it or the empty string 0x106b8540 to sub_102c4680)
	char m_pad6484[0x6495 - 0x6484];
	char m_b6495;
	char m_b6496;
	char m_b6497;
	char m_pad6498[0x64bc - 0x6498];
	int m_n64bc;
	char m_b64c0;
	char m_pad64c1[0x64c8 - 0x64c1];
	int m_n64c8;	// 0x64c8: the table index (stance) the NPC is in
	float m_f64cc;
	char m_pad64d0[0x64e0 - 0x64d0];
	char m_b64e0;
	char m_pad64e1[3];
	float m_f64e4;	// 0x64e4: curtime of the last stance change
	int m_n64e8;	// 0x64e8: the table index (disposition) the slot 105 / 104 precache found

	char m_b64ec;	// 0x64ec: the second talking flag (sub_102c1170)
	char m_pad64ed[0x654c - 0x64ed];
	char m_b654c;
	char m_pad654d[3];
	float m_f6550;	// 0x6550: the volume of the sound sub_102c2680 plays
	unsigned int m_h6554;
	const char *m_pszDisposition6558;	// 0x6558: the disposition name handed to sub_102c0f70 on activation (an empty string when null)
	char m_pad655c[0x658c - 0x655c];
	CTroikaPatrolRef m_ref658c;	// 0x658c: first patrol path holder (CTroikaReqHolder layout: record at +4)
	CTroikaPatrolRef m_ref6594;	// 0x6594: second patrol path holder
	char m_pad659c[0x65a0 - 0x659c];
	char m_b65a0;	// 0x65a0
	char m_pad65a1[3];
	float m_f65a4;	// 0x65a4: a time stamp the idle pick (0x102b7cf0) re-arms

	struct CTakeDamageInfo *m_pDamageRecords;	// 0x65a8: the NPC's damage record vector (memory pointer), count at +0x65b4
	char m_pad65ac[0x65b4 - 0x65ac];
	int m_nDamageRecords;	// 0x65b4
	char m_pad65b8[0x65bc - 0x65b8];
	float m_f65bc;
	void sub_102bf560(CBaseEntity *pEnt);	// stores the handle of the entity the lookup sub_102707d0 gives at +0x65c0 and curtime + 5.0f at +0x65c4 unless the byte at +0x65f5 is set
	float sub_1029c970();	// the float at +0x63b8, or the senses component's float (+0x10) when curtime is before the float at +0x6604 or the state (+0x5cc0) is 2 with the byte +0x5bc5 clear; never below 0
	void sub_100f0e90(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	void sub_10181580(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	void sub_102a9800(unsigned int flags);	// provisional, like sub_102a97a0 (transplant)
	int sub_10252240();	// provisional, like vfunc293 (transplant)
	int sub_1042b110();	// provisional, like vfunc293 (transplant)
	void sub_10329560();	// CBaseCombatCharacter member (stub 0x1000acc2), called directly
	void sub_101815b0(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
	void sub_102a9830(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
	void sub_102a98e0(unsigned int flags);	// provisional, like sub_102a97d0 (transplant)
	int sub_102a9910();	// the squad's count at +0x5da4 (its pending value at +0x5bb0 is not positive), else 0
	int sub_102c1400();	// ends the talk state: sub_102c0360 when not talking (-1), else cleans up the talk handle / flags and returns the state (+0xfec, or 0xf1 / 1 from the disposition sequence)
	void sub_102ae810(void *pObj);	// stores the dword at +0x1c of pObj (when not null) at +0x65c8
public:
    void vfunc312(int a);	// slot 312 "CAI_BaseNPCTroika::UpdateCharacter" (plain member)
    void sub_103246d0(int a);	// CBaseCombatCharacter::vfunc312 (stub 0x1000669f), called directly
    virtual void vfunc465(int);
    virtual const char * vfunc451();
	virtual void vfunc130(int a);	// slot 130: CAI_BaseNPC::vfunc130(a) after releasing the two patrol path holders whose requirement record is not met (sub_1029f610 false -> free __stdcall sub_1029f5d0), then m_p62ec = sub_102db5e0(this), node lookup (+0x6310/+0x6314), follower setup, see the definition
	virtual int vfunc390(struct CTakeDamageInfo *pInfo);	// slot 390 override (0x102beda0, ret 4): copies the record into a 0x4b-byte member at +0x660c (not declarable: derived classes' padding collides with it), then CAI_BaseNPC::vfunc390 (sub_10265ed0); when that took the hit: damage = the record's CVDmg_t (sub_101faa70) or its m_flDamage; > 0: sub_101072b0(0), flag 0x40000000 of +0x14b8 -> vfunc144(info); else with a held entity (m_p62ec) that sub_102daf50 accepts: the interest death activity m_n6308 (+0x6308, -1 = unset; name sub_102daf20 -> sub_10412520, DevWarning "Can not find interest death activity '%s' ..." and vfunc144(info) when missing; else the file/line stamp +0x1b30 / +0x1b34 (0x6121) and sub_102ae750(0x104, 0)); else sub_1028e8b0(inflictor, 5.0f) and slot 600(slot 167()); damage <= 0: slot 1 of g_10924a6c, sub_10269a20(0x4c), handle +0x5b7c = inflictor's EHANDLE or -1, byte +0x5b80 = 1
	int sub_10265ed0(struct CTakeDamageInfo *pInfo);	// CAI_BaseNPC::vfunc390 (stub 0x10001bef), called directly
	void sub_10299a80();	// stub 0x10013714: validates the entity m_p62ec (walks the global list at 0x10927194, next at +0x540, children count at +0x584 via CUnknown102da9a0::sub_102da9a0) with DevMsg("ERROR: %s loc(...) thinks they ...") and clears m_p62ec on failure
	void vfunc55(int, int, int, int, int, int, int);	// slot 55: empty override (ret 0x1c); declared as a plain member so the derived class's slot numbering is not shifted
	void vfunc57(int, int, int, int, int, int, int);	// slot 57: empty override (ret 0x1c)
	void vfunc58(int);	// slot 58: empty override (ret 4)
	virtual CAI_BaseNPC *vfunc5(unsigned int flags);	// deleting destructor (same return type as the base slot)
	// +0x65e0 (const char *, name for sub_1029f340, empty string 0x106b8540 when null) and +0x65e4 (int result) are not declared: derived classes' members start at +0x65c0
};
