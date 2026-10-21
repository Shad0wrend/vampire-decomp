// CNPC_VHengeyokai: the Hengeyokai NPC.
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning.
#pragma once

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

class CNPC_VHengeyokai
{
public:
	virtual void vfunc601(int unused);
	virtual char vfunc69(void *pOther);	// true when the other object has one of the flags 0x16 at +0x4c, else the Troika base's answer

	char m_pad0004[0x670 - 4];
	int m_n670;	// 0x670: state, 1 while transformed
	char m_pad0674[0x6664 - 0x674];
	unsigned int m_h6664;	// 0x6664: entity handle (the target of the bone attack)
	int m_n6668;	// 0x6668: index of the bone name used by the attack
	char m_pad666c[0x6694 - 0x666c];
	char m_b6694;	// 0x6694
	char m_pad6695[0x66a4 - 0x6695];
	CNPC_VHengeyokaiTimerVec m_Timers;	// 0x66a4

	int sub_10382b30(int key);
	bool sub_10382aa0(int key);
	char sub_1029b180(void *pOther);	// CAI_BaseNPCTroika::vfunc69
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc104();	// Precache: base, the stock model/sound names, the model, the freeze emitter and the fist weapon
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
};
