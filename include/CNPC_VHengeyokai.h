// CNPC_VHengeyokai: the Hengeyokai NPC.
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning.
#pragma once

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
	virtual void vfunc601(int unused);
	virtual char vfunc69(void *pOther);	// true when the other object has one of the flags 0x16 at +0x4c, else the Troika base's answer
	virtual void vfunc435(int arg);	// slot 435: the Troika base's vfunc435(arg), then the flags at +0x14b8 bit 3 clear: 0 at +0x6680 and the count at +0x6678 drops by one while above 0

	char m_pad0004[0x670 - 4];
	int m_n670;	// 0x670: state, 1 while transformed
	char m_pad0674[0x5cc0 - 0x674];
	int m_n5cc0;	// 0x5cc0: schedule state, 2 while a schedule is running
	char m_pad5cc4[0x5d44 - 0x5cc4];
	CAI_Motor *m_pMotor5d44;	// 0x5d44
	char m_pad5d48[0x5d8c - 0x5d48];
	unsigned int m_flags5d8c;	// 0x5d8c: bit 31 is cleared by the cancel path
	char m_pad5d90[0x6664 - 0x5d90];
	unsigned int m_h6664;	// 0x6664: entity handle (the target of the bone attack)
	int m_n6668;	// 0x6668: index of the bone name used by the attack
	char m_pad666c[0x6670 - 0x666c];
	float m_fl6670;	// 0x6670
	char m_pad6674[0x6678 - 0x6674];
	int m_n6678;	// 0x6678
	char m_b667c;	// 0x667c: set while the target is carried / claimed
	char m_pad667d[0x6680 - 0x667d];
	int m_n6680;	// 0x6680
	Vector m_vecBonePos;	// 0x6684: position of the chosen bone
	char m_pad6690[0x6694 - 0x6690];
	char m_b6694;	// 0x6694
	char m_pad6695[0x66a4 - 0x6695];
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
	void sub_10383130();	// called through the stub at 0x1000ed6d
	int vfunc124();	// slot 124 "DrawDebugTextOverlays": the base's line offset, plus one line with the NPC's name when the text overlay bit (bit 0 of +0x224) is set
	int sub_10006f64();	// CAI_BaseNPCTroika::vfunc124 (stub 0x10006f64), called directly
	void sub_10383470();	// once 2 seconds have passed since the time at +0x1560: zeroes the character's stat 0xf, sets the byte at +0x6694 and calls sub_10273e80(0)
	void sub_10273e80(char flag);	// CAI_BaseNPC::sub_10273e80 (stub 0x1000ac68), called directly
	void vfunc259(CNPC_VHengeyokaiEvent *pEvent);	// slot 259 "HandleAnimEvent" (plain member): event 0x7f8 (not while the carry flag is set): sub_10382670 with the entity of the handle at +0x6664 and the bone name table entry [+0x6668]; 0x802 / 0x803 (with the byte at +0x6694): the origin (slot 220) to sub_101cdba0 with the constants 2.0, 0.2, 0.2, 1024.0, then slot 617; 0xbbd (not while carried): sub_10382400 with the slot 167 entity; else CNPC_VHuman::vfunc259
	void sub_100076bc(CNPC_VHengeyokaiEvent *pEvent);	// CNPC_VHuman::vfunc259, called directly
	void sub_10382670(void *pEnt, const char *pszBone);	// stub 0x100148ad
	void sub_10382400(void *pEnt);	// stub 0x10012319
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
	void vfunc144(int info);	// slot 144 "Event_Killed"-like (plain member): the flag check (sub_10381c80) then sub_103828a0 when it holds, then CNPC_VVampire::vfunc144(info)
public:
	virtual bool vfunc70();
	virtual bool vfunc602();
	virtual bool vfunc615();
public:
	virtual bool vfunc74(int);
	virtual bool vfunc378(int, int);
public:
	virtual int vfunc82();
	virtual int vfunc138();
	virtual int vfunc337();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual int vfunc473();
	virtual int vfunc580();
public:
	virtual int vfunc461();
};
