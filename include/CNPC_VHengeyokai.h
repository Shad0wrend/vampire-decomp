// CNPC_VHengeyokai: the Hengeyokai NPC.
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning.
#pragma once

struct datamap_t;

#include "Vector.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct CNPC_VHengeyokaiTimer
{
	int m_key;
	float m_time;
};

// CUtlVector<CNPC_VHengeyokaiTimer> embedded at +0x66a4.
struct CNPC_VHengeyokaiTimerVec
{
	CNPC_VHengeyokaiTimer *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CNPC_VHengeyokaiTimer *m_pElements;

	CNPC_VHengeyokaiTimer &Element(int i) { return m_pMemory[i]; }
	void FastRemove(int elem)
	{
		if (m_size > 0) {
			memmove(&Element(elem), &Element(m_size - 1), sizeof(CNPC_VHengeyokaiTimer));
			m_size--;
		}
	}
};

// An entity as far as the class / name strings go.
struct CNPC_VHengeyokaiEnt
{
	char m_pad0000[0x11c];
	const char *volatile m_iClassname;	// 0x11c
	char m_pad0120[0x26c - 0x120];
	const char *volatile m_iName;	// 0x26c
};

// The argument of slot 390 (a damage-info-like record): the entity at +0x2c.
struct CNPC_VHengeyokaiInfo
{
	char m_pad0000[0x2c];
	CNPC_VHengeyokaiEnt *m_pEnt;	// 0x2c
};

// The argument of slot 259 (an animation event): the event id first.
struct CNPC_VHengeyokaiEvent
{
	int m_type;
};

class CBaseEntity;
class CAI_Motor;

class CNPC_VHengeyokai
{
public:

	char m_pad0004[0x670 - 4];
	int m_n670;	// 0x670: state, 1 while transformed
	char m_pad0674[0x14b8 - 0x674];
	unsigned int m_flags14b8;	// 0x14b8: bit 5 set while hiding
	char m_pad14bc[0x1568 - 0x14bc];
	int m_n1568;	// 0x1568: zeroed by the constructor
	int m_n156c;	// 0x156c: 0x12 after the constructor
	char m_pad1570[0x19b0 - 0x1570];
	void *m_vptr19b0;	// 0x19b0: the CAI_DefMovementSink vptr (0x104b6810), stored by the constructor
	char m_pad19b4[0x1b2c - 0x19b4];
	int m_n1b2c;	// 0x1b2c
	char m_pad1b30[0x5b80 - 0x1b30];
	char m_b5b80;	// 0x5b80
	char m_pad5b81[0x5cc0 - 0x5b81];
	int m_n5cc0;	// 0x5cc0: schedule state, 2 while a schedule is running
	char m_pad5cc4[0x5d44 - 0x5cc4];
	CAI_Motor *m_pMotor5d44;	// 0x5d44
	char m_pad5d48[0x5d8c - 0x5d48];
	unsigned int m_flags5d8c;	// 0x5d8c: bit 31 is cleared by the cancel path
	char m_pad5d90[0x6078 - 0x5d90];
	char m_b6078; // 0x6078: set by slot 600
	char m_pad6079[0x6664 - 0x6079];
	unsigned int m_h6664;	// 0x6664: entity handle (the target of the bone attack)
	int m_n6668;	// 0x6668: index of the bone name used by the attack
	float m_fl666c;	// 0x666c
	float m_fl6670;	// 0x6670
	float m_fl6674;	// 0x6674
	int m_n6678;	// 0x6678
	char m_b667c;	// 0x667c: set while the target is carried / claimed
	char m_b667d;	// 0x667d
	char m_pad667e[0x6680 - 0x667e];
	int m_n6680;	// 0x6680
	Vector m_vecBonePos;	// 0x6684: position of the chosen bone
	unsigned int m_h6690;	// 0x6690: entity handle (the grabbed phys_animlink)
	char m_b6694;	// 0x6694
	char m_pad6695[0x66a0 - 0x6695];
	unsigned int m_n66a0;	// 0x66a0
	CNPC_VHengeyokaiTimerVec m_Timers;	// 0x66a4

	CNPC_VHengeyokai *vfunc5(unsigned int flags);	// slot 5 (scalar deleting destructor, plain member): the timer vector goes, then the Troika base's destructor body (stub 0x100123af), then the delete when bit 0 of flags is set
	int sub_10382b30(int key);
	bool sub_10382aa0(int key);
	char sub_1029b180(void *pOther);	// CAI_BaseNPCTroika::vfunc69
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc104();	// Precache: base, the stock model/sound names, the model, the freeze emitter and the fist weapon
	void vfunc103();	// slot 103 \"Spawn\"-like (plain member): CNPC_VVampire::vfunc103, the attack extents (50, 50, 100), then sub_100b3900(4) and sub_100b3840(0x20)
	void sub_10014876();	// CNPC_VVampire::vfunc103 (stub 0x10014876), called directly
	void sub_100013f7();	// CNPC_VHuman::vfunc104 (jump stub)
	int sub_10001b45(CNPC_VHengeyokaiInfo *pInfo);	// CNPC_VHuman::vfunc390, called directly
	void sub_103830e0();	// called through the stub at 0x10004a0c
	int sub_103801d0(CNPC_VHengeyokaiInfo *pInfo);	// slot 390: CNPC_VHuman::vfunc390(pInfo), then sub_103830e0() when the entity at pInfo+0x2c has the classname "point_explosion"; returns the base's result
	int vfunc440(int task);	// slot 440 (TranslateSchedule): schedule 0x15a for 0x5b, 0x15b for 0xea, 0x15c for 0xdc, 0x15d for 0xdd, else CNPC_VHuman::vfunc440; first calls sub_10383130() while transformed (+0x670 == 1) unless the task is 0x16e
	int sub_103851c0(int task);	// CNPC_VHuman::vfunc440 (stub 0x10005e20), called directly
	void sub_10383130();	// called through the stub at 0x1000ed6d: SetSkinFadeTime(0), FadeToSkin(0), then the freeze emitter attached to this NPC
	void sub_1008d5f0(float flTime);	// CBaseAnimating::SetSkinFadeTime (stub 0x100151bd), called directly
	void sub_1008d6d0(int nSkin);	// CBaseAnimating::FadeToSkin (stub 0x1001591f), called directly
	void sub_102c4310(const char *pszEmitter, CNPC_VHengeyokai *pParent, int a, int b, int c);	// CAI_BaseNPCTroika attach-emitter helper (stub 0x1000aa01, ret 0x14): the emitter name first, then the parent entity and three ints
	int vfunc124();	// slot 124 "DrawDebugTextOverlays": the base's line offset, plus one line with the NPC's name when the text overlay bit (bit 0 of +0x224) is set
	int sub_10006f64();	// CAI_BaseNPCTroika::vfunc124 (stub 0x10006f64), called directly
	void sub_10383470();	// once 2 seconds have passed since the time at +0x1560: zeroes the character's stat 0xf, sets the byte at +0x6694 and calls sub_10273e80(0)
	void sub_10273e80(char flag);	// CAI_BaseNPC::sub_10273e80 (stub 0x1000ac68), called directly
	void vfunc259(CNPC_VHengeyokaiEvent *pEvent);	// slot 259 "HandleAnimEvent" (plain member): event 0x7f8 (not while the carry flag is set): sub_10382670 with the entity of the handle at +0x6664 and the bone name table entry [+0x6668]; 0x802 / 0x803 (with the byte at +0x6694): the origin (slot 220) to sub_101cdba0 with the constants 2.0, 0.2, 0.2, 1024.0, then slot 617; 0xbbd (not while carried): sub_10382400 with the slot 167 entity; else CNPC_VHuman::vfunc259
	void sub_100076bc(CNPC_VHengeyokaiEvent *pEvent);	// CNPC_VHuman::vfunc259, called directly
	bool sub_10382670(void *pEnt, const char *pszBone);	// stub 0x100148ad: grabs pEnt (a ragdoll) at the bone named "Bip01 R Hand" with a new phys_animlink; false when it cannot
	struct CHengeyokaiAnimView *sub_100952d0(int n);	// CBaseAnimating::sub_100952d0 (stub 0x10013d8b), called directly
	void sub_10382400(void *pEnt);	// stub 0x10012319
	void sub_102c4cc0(const Vector *pA, float *pOrigin, const Vector *pB);	// stub 0x10009a57
	void sub_10381c00(char bOn);	// stub 0x10014899: sets / clears bit 5 of +0x14b8; setting also re-arms the timer at +0x666c (curtime + RandomFloat(8, 5))
	bool sub_10381e90(CBaseEntity *pEnt);	// picks the bone of the ragdoll pEnt (bone name table at 0x1063bd88) closest to this NPC (within 1025 units) into +0x6684 / +0x6668; true when one was found (any ragdoll-less entity: this NPC's own origin and bone 0)
	int sub_10382d40();	// "target pick" schedule selector: the fish target is kept (0x16b after sub_10381ba0(1)) unless a roll fails or the target is farther than the enemy's last known position; else +0x6678 = 2, +0x667c = 0, returns 0
	int sub_10382f60();	// schedule pick by the distance to the slot 167 entity: clears +0x6678; 0x15c when condition 0x1a holds or there is no such entity, else 0x16a, or 0x15c by a roll (RandomInt(0, 99) below 70 / 40) beyond 400 / 200 units
	char sub_10269d30(int condition);	// stub 0x1001482b: tests the condition
	bool sub_10381cd0();	// picks the nearest "fish" entity (within 1024 units, not claimed per sub_10382aa0, with a zero vector from slot 199) as the target: stores its handle at +0x6664 (-1 and false when there is none), tells sub_102c4380(the entity) and returns sub_10381e90(it)
	void sub_102c4380(CBaseEntity *pEnt);	// stub 0x10008a94, called directly
	void vfunc448(int a);	// slot 448 (plain member): while a schedule runs (+0x5cc0 == 2) and condition 0x5c holds clears bit 31 of +0x5d8c; while sub_10381be0 holds starts the timer for the target (+0x6664) and sub_10381ba0(0); without the flag bit 5 (sub_10381c80) calls sub_102c43b0(0.75f) and drops the target; clears +0x6678, then the Troika base
	void sub_10381ba0(int a);	// stub 0x10014c63, called directly
	void sub_102c43b0(float f);	// stub 0x10013110, called directly
	void sub_1029adb0(int a);	// CAI_BaseNPCTroika::vfunc448 (stub 0x100054bb), called directly
	void vfunc432(int a);	// slot 432 "RunAI" (plain member): finds the target (sub_10380fc0 also gives its state), reacts to it (sub_103816e0 / sub_10381460), then CNPC_VHuman::vfunc432 and, with the debug convar set, sub_103830e0 and the convar reset
	void *sub_10380fc0(int *pState);	// stub 0x10011a86: finds a target, its state goes to *pState
	void sub_10381460(void *pTarget);	// stub 0x10002162
	void sub_10385a10(int a);	// CNPC_VHuman::vfunc432 (stub 0x1000698d), called directly
	void vfunc433();	// slot 433 (plain member): CAI_BaseNPCTroika::vfunc433, sets the conditions 0xf, 0xc and 0xd, then 0x1b: through the global 0x10924a6c (slot 1) and the condition setter sub_10269a20 when flag bit 5 (sub_10381c80) is set, condition 0x4a holds and sub_10382020 accepts the slot 167 entity, else through sub_10015839
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	void sub_10269a20(int condition);	// CAI_BaseNPC condition setter (stub 0x100041b0), called directly
	void sub_10015839(int condition);	// CAI_BaseNPC::sub_10269b50 "SetCondition" (stub 0x10015839), called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
	bool sub_10382020(void *pTarget);	// stub 0x1001580c
	char vfunc320(int a, int b);	// slot 320 (plain member): with a 1..50 roll (the random stream at 0x1070b244, slot 2 with (1, 100)) under 51, the Troika base's vfunc320(a, b); else false
	void sub_100048f9(int arg);	// CAI_BaseNPCTroika::vfunc435 (stub 0x100048f9), called directly
	void vfunc617();	// slot 617 (plain member): plays one of the 0x1063bd94 sounds (random 0..3, channel 4, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)
	void vfunc618();	// slot 618 (plain member): plays one of the 0x1063bda4 sounds (channel 4, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)
	void sub_10382bb0();	// with the target (handle +0x6664) alive: the motor (+0x5d44) takes the yaw of slot 221 and the turn rate 20.0f, is reset, and then looks at the slot 167 target (stub 0x10007248) or, without one, turns to the angles yaw (flipped by 180 when the motor's byte +0x28 is set)
	bool sub_103822a0(CBaseEntity *pEnt);	// "is pEnt within +-20 degrees of this NPC's facing": true unless pEnt is given, the target handle (+0x6664) is alive and the yaw from this NPC to pEnt's origin (sub_101d2c70, stub 0x1000612c) differs from this NPC's pitch/yaw angle at +4 of slot 221 (sub_1013d580, stub 0x100097e6) by less than -20.0f or more than 20.0f
	void vfunc420();	// slot 420: the base's vfunc420, then resets the transform state (+0x6664 handle, +0x6670 time = curtime + 3, ...)
	void sub_1029a0b0();	// CAI_BaseNPC::vfunc420 (stub 0x1000c531), called directly
	void sub_1028d610();	// CAI_BaseNPCTroika destructor body (stub 0x100123af), called directly
	void vfunc292(struct CGargoyleDmgInfo *pInfo, int b, int c);	// slot 292 (plain member): passes the damage record on to CBaseCombatCharacter::vfunc292 unless its flags (record and damage block) have 0x4000002 or it deals no damage
	void sub_10015843(struct CGargoyleDmgInfo *pInfo, int b, int c);	// CBaseCombatCharacter::vfunc292 (stub 0x10015843), called directly
	void vfunc444(int *pTask);	// slot 444 (RunTask, plain member): the task id is the first int; the chase / face / turn tasks (0x31, 0xc8..0xca, 0x132..0x134, 0x14b) are handled here, the others by CNPC_VHuman::vfunc444
	void sub_10011928(int *pTask);	// CNPC_VHuman::vfunc444 (stub 0x10011928), called directly
	void vfunc144(int info);	// slot 144 "Event_Killed"-like (plain member): the flag check (sub_10381c80) then sub_103828a0 when it holds, then CNPC_VVampire::vfunc144(info)
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5_slot();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual char vfunc69(void *pOther);	// true when the other object has one of the flags 0x16 at +0x4c, else the Troika base's answer
	virtual bool vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual bool vfunc74(int);
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	virtual datamap_t * vfunc82();
	virtual void vfunc83();
	virtual void vfunc84();
	virtual void vfunc85();
	virtual void vfunc86();
	virtual void vfunc87();
	virtual void vfunc88();
	virtual void vfunc89();
	virtual void vfunc90();
	virtual void vfunc91();
	virtual void vfunc92();
	virtual void vfunc93();
	virtual void vfunc94();
	virtual void vfunc95();
	virtual void vfunc96();
	virtual void vfunc97();
	virtual void vfunc98();
	virtual void vfunc99();
	virtual void vfunc100();
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc103_slot();
	virtual void vfunc104_slot();
	virtual void vfunc105();
	virtual void vfunc106();
	virtual void vfunc107();
	virtual void vfunc108();
	virtual void vfunc109();
	virtual void vfunc110();
	virtual void vfunc111();
	virtual void vfunc112();
	virtual void vfunc113();
	virtual void vfunc114();
	virtual void vfunc115();
	virtual void vfunc116();
	virtual void vfunc117();
	virtual void vfunc118();
	virtual void vfunc119();
	virtual void vfunc120();
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual void vfunc124_slot();
	virtual void vfunc125();
	virtual void vfunc126();
	virtual void vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130();
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void vfunc139();
	virtual void vfunc140();
	virtual void vfunc141();
	virtual void vfunc142();
	virtual void vfunc143();
	virtual void vfunc144_slot();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161();
	virtual void vfunc162();
	virtual void vfunc163();
	virtual void vfunc164();
	virtual CBaseEntity *vfunc165();	// header slot numbering is 2 behind the game's here: this is the game's slot 167
	virtual CBaseEntity *vfunc166();	// the game's slot 168
	virtual CBaseEntity *vfunc167();
	virtual CBaseEntity *vfunc168();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174();
	virtual void vfunc175();
	virtual void vfunc176();
	virtual void vfunc177();
	virtual void vfunc178();
	virtual void vfunc179();
	virtual void vfunc180();
	virtual void vfunc181();
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185();
	virtual void vfunc186();
	virtual void vfunc187();
	virtual void vfunc188();
	virtual void vfunc189();
	virtual void vfunc190();
	virtual void vfunc191();
	virtual void vfunc192();
	virtual void vfunc193();
	virtual void vfunc194();
	virtual void vfunc195();
	virtual void vfunc196();
	virtual void vfunc197();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201();
	virtual void vfunc202();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207();
	virtual void vfunc208();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212();
	virtual void vfunc213();
	virtual void vfunc214();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217();
	virtual void vfunc218();
	virtual void vfunc219();
	virtual void vfunc220();
	virtual void vfunc221();
	virtual void vfunc222();
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226();
	virtual void vfunc227();
	virtual void vfunc228();
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232();
	virtual void vfunc233();
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual void vfunc237();
	virtual void vfunc238();
	virtual void vfunc239();
	virtual void vfunc240();
	virtual void vfunc241();
	virtual void vfunc242();
	virtual void vfunc243();
	virtual void vfunc244();
	virtual void vfunc245();
	virtual void vfunc246();
	virtual void vfunc247();
	virtual void vfunc248();
	virtual char vfunc249();	// the game's slot 251
	virtual void vfunc250();
	virtual char vfunc251();
	virtual void vfunc252();
	virtual void vfunc253();
	virtual void vfunc254();
	virtual void vfunc255();
	virtual void vfunc256();
	virtual void vfunc257();
	virtual void vfunc258();
	virtual void vfunc259_slot();
	virtual void vfunc260();
	virtual void vfunc261();
	virtual void vfunc262();
	virtual void vfunc263();
	virtual void vfunc264();
	virtual void vfunc265();
	virtual void vfunc266();
	virtual void vfunc267();
	virtual void vfunc268();
	virtual void vfunc269();
	virtual void vfunc270();
	virtual void vfunc271();
	virtual void vfunc272();
	virtual void vfunc273();
	virtual void vfunc274();
	virtual void vfunc275();
	virtual void vfunc276();
	virtual void vfunc277();
	virtual void vfunc278();
	virtual void vfunc279();
	virtual void vfunc280();
	virtual void vfunc281();
	virtual void vfunc282();
	virtual void vfunc283();
	virtual void vfunc284();
	virtual void vfunc285();
	virtual void vfunc286();
	virtual void vfunc287();
	virtual void vfunc288();
	virtual void vfunc289();
	virtual void vfunc290();
	virtual void vfunc291();
	virtual void vfunc292();
	virtual void vfunc293();
	virtual void vfunc294();
	virtual void vfunc295();
	virtual void vfunc296();
	virtual void vfunc297();
	virtual void vfunc298();
	virtual void vfunc299();
	virtual void vfunc300();
	virtual void vfunc301();
	virtual void vfunc302();
	virtual void vfunc303();
	virtual void vfunc304();
	virtual void vfunc305();
	virtual void vfunc306();
	virtual void vfunc307();
	virtual void vfunc308();
	virtual void vfunc309();
	virtual void vfunc310();
	virtual void vfunc311();
	virtual void vfunc312();
	virtual void vfunc313();
	virtual void vfunc314();
	virtual void vfunc315();
	virtual void vfunc316();
	virtual void vfunc317();
	virtual void vfunc318();
	virtual void vfunc319();
	virtual void vfunc320_slot();
	virtual void vfunc321();
	virtual void vfunc322();
	virtual void vfunc323();
	virtual void vfunc324();
	virtual void vfunc325();
	virtual void vfunc326();
	virtual void vfunc327();
	virtual void vfunc328();
	virtual void vfunc329();
	virtual void vfunc330();
	virtual void vfunc331();
	virtual void vfunc332();
	virtual void vfunc333();
	virtual void vfunc334();
	virtual void vfunc335();
	virtual void vfunc336();
	virtual int vfunc337();
	virtual void vfunc338();
	virtual void vfunc339();
	virtual void vfunc340();
	virtual void vfunc341();
	virtual void vfunc342();
	virtual void vfunc343();
	virtual void vfunc344();
	virtual void vfunc345();
	virtual void vfunc346();
	virtual void vfunc347();
	virtual void vfunc348();
	virtual void vfunc349();
	virtual void vfunc350();
	virtual void vfunc351();
	virtual void vfunc352();
	virtual void vfunc353();
	virtual void vfunc354();
	virtual void vfunc355();
	virtual void vfunc356();
	virtual void vfunc357();
	virtual void vfunc358();
	virtual void vfunc359();
	virtual void vfunc360();
	virtual void vfunc361();
	virtual void vfunc362();
	virtual void vfunc363();
	virtual void vfunc364();
	virtual void vfunc365();
	virtual void vfunc366();
	virtual void vfunc367();
	virtual void vfunc368();
	virtual void vfunc369();
	virtual void vfunc370();
	virtual void vfunc371();
	virtual void vfunc372();
	virtual void vfunc373();
	virtual void vfunc374();
	virtual void vfunc375();
	virtual void vfunc376();
	virtual void vfunc377();
	virtual bool vfunc378(int, int);
	virtual void vfunc379();
	virtual void vfunc380();
	virtual void vfunc381();
	virtual void vfunc382();
	virtual void vfunc383();
	virtual void vfunc384();
	virtual void vfunc385();
	virtual void vfunc386();
	virtual void vfunc387();
	virtual void vfunc388();
	virtual void vfunc389();
	virtual void vfunc390();
	virtual void vfunc391();
	virtual void vfunc392();
	virtual void vfunc393();
	virtual void vfunc394();
	virtual void vfunc395();
	virtual void vfunc396();
	virtual void vfunc397();
	virtual void vfunc398();
	virtual void vfunc399();
	virtual void vfunc400();
	virtual void vfunc401();
	virtual void vfunc402();
	virtual void vfunc403();
	virtual void vfunc404();
	virtual void vfunc405();
	virtual void vfunc406();
	virtual void vfunc407();
	virtual void vfunc408();
	virtual void vfunc409();
	virtual void vfunc410();
	virtual void vfunc411();
	virtual void vfunc412();
	virtual void vfunc413();
	virtual void vfunc414();
	virtual void vfunc415();
	virtual void vfunc416();
	virtual void vfunc417();
	virtual void vfunc418();
	virtual void vfunc419();
	virtual void vfunc420_slot();
	virtual void vfunc421();
	virtual void vfunc422();
	virtual void vfunc423();
	virtual void vfunc424();
	virtual void vfunc425();
	virtual void vfunc426();
	virtual void vfunc427();
	virtual void vfunc428();
	virtual void vfunc429();
	virtual void vfunc430();
	virtual void vfunc431();
	virtual void vfunc432_slot();
	virtual void vfunc433_slot();
	virtual void vfunc434();
	virtual void vfunc435(int arg);	// slot 435: the Troika base's vfunc435(arg), then the flags at +0x14b8 bit 3 clear: 0 at +0x6680 and the count at +0x6678 drops by one while above 0
	virtual void vfunc436();
	virtual void vfunc437();
	virtual int vfunc438();	// slot 438: state 2 picks a schedule by the conditions, the flag bit 5 and the target, state 5 gives 0x16f, else CNPC_VHuman::vfunc438
	virtual void vfunc439();
	int sub_10384ee0();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), called directly
	virtual void vfunc440_slot();
	virtual void vfunc441();
	virtual void vfunc442();
	virtual void vfunc443();
	virtual void vfunc444();
	virtual void vfunc445();
	virtual void vfunc446();
	virtual void vfunc447();
	virtual void vfunc448_slot();
	virtual void vfunc449();
	virtual void vfunc450();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual void vfunc453();
	virtual void vfunc454();
	virtual void vfunc455();
	virtual void vfunc456();
	virtual void vfunc457();
	virtual void vfunc458();
	virtual void vfunc459();
	virtual void vfunc460();
	virtual int vfunc461();
	virtual void vfunc462();
	virtual void vfunc463();
	virtual void vfunc464();
	virtual void vfunc465();
	virtual void vfunc466();
	virtual void vfunc467();
	virtual void vfunc468();
	virtual void vfunc469();
	virtual void vfunc470();
	virtual void vfunc471();
	virtual void vfunc472();
	virtual int vfunc473();
	virtual void vfunc474();
	virtual void vfunc475();
	virtual void vfunc476();
	virtual void vfunc477();
	virtual void vfunc478();
	virtual void vfunc479();
	virtual void vfunc480();
	virtual void vfunc481();
	virtual void vfunc482();
	virtual void vfunc483();
	virtual void vfunc484();
	virtual void vfunc485();
	virtual void vfunc486();
	virtual void vfunc487();
	virtual void vfunc488();
	virtual void vfunc489();
	virtual void vfunc490();
	virtual void vfunc491();
	virtual void vfunc492();
	virtual void vfunc493();
	virtual void vfunc494();
	virtual void vfunc495();
	virtual void vfunc496();
	virtual void vfunc497();
	virtual void vfunc498();
	virtual void vfunc499();
	virtual void vfunc500();
	virtual void vfunc501();
	virtual void vfunc502();
	virtual void vfunc503();
	virtual void vfunc504();
	virtual void vfunc505();
	virtual void vfunc506();
	virtual void vfunc507();
	virtual void vfunc508();
	virtual void vfunc509();
	virtual void vfunc510();
	virtual void vfunc511();
	virtual void vfunc512();
	virtual void vfunc513();
	virtual void vfunc514();
	virtual void vfunc515();
	virtual void vfunc516();
	virtual void vfunc517();
	virtual void vfunc518();
	virtual void vfunc519();
	virtual void vfunc520();
	virtual void vfunc521();
	virtual void vfunc522();
	virtual void vfunc523();
	virtual void vfunc524();
	virtual void vfunc525();
	virtual void vfunc526();
	virtual void vfunc527();
	virtual void vfunc528();
	virtual void vfunc529();
	virtual void vfunc530();
	virtual void vfunc531();
	virtual void vfunc532();
	virtual void vfunc533();
	virtual void vfunc534();
	virtual void vfunc535();
	virtual void vfunc536();
	virtual void vfunc537();
	virtual void vfunc538();
	virtual void vfunc539();
	virtual void vfunc540();
	virtual void *vfunc541();
	virtual void vfunc542();
	virtual void vfunc543();
	virtual void vfunc544();
	virtual void vfunc545();
	virtual void vfunc546_slot();
	virtual void vfunc547();
	virtual void vfunc548();
	virtual void vfunc549();
	virtual void vfunc550();
	virtual void vfunc551();
	virtual void vfunc552();
	virtual void vfunc553();
	virtual void vfunc554();
	virtual void vfunc555();
	virtual void vfunc556();
	virtual void vfunc557();
	virtual void vfunc558();
	virtual void vfunc559();
	virtual void vfunc560();
	virtual void vfunc561();
	virtual void vfunc562();
	virtual void vfunc563();
	virtual void vfunc564();
	virtual void vfunc565();
	virtual void vfunc566();
	virtual void vfunc567();
	virtual void vfunc568();
	virtual void vfunc569();
	virtual void vfunc570();
	virtual void vfunc571();
	virtual void vfunc572();
	virtual void vfunc573();
	virtual void vfunc574();
	virtual void vfunc575();
	virtual void vfunc576();
	virtual void vfunc577();
	virtual void vfunc578();
	virtual void vfunc579();
	virtual int vfunc580();
	virtual void vfunc581();
	virtual void vfunc582();
	virtual void vfunc583();
	virtual void vfunc584();
	virtual void vfunc585();
	virtual void vfunc586();
	virtual void vfunc587();
	virtual void vfunc588();
	virtual void vfunc589();
	virtual void vfunc590();
	virtual void vfunc591();
	virtual void vfunc592();
	virtual void vfunc593();
	virtual void vfunc594();
	virtual void vfunc595();
	virtual void vfunc596();
	virtual void vfunc597();
	virtual void vfunc598();
	virtual char vfunc599(int unused);
	virtual bool vfunc600(int unused);
	virtual void vfunc601(int unused);
	virtual bool vfunc602();
	virtual void vfunc603();
	virtual void vfunc604();
	virtual void vfunc605();
	virtual void vfunc606();
	virtual void vfunc607();
	virtual void vfunc608();
	virtual void vfunc609();
	virtual void vfunc610();
	virtual void vfunc611();
	virtual void vfunc612();
	virtual void vfunc613();
	virtual void vfunc614();
	virtual bool vfunc615();
};
