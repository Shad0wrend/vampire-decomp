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

class CNPC_VHengeyokai
{
public:
	virtual void vfunc601(int unused);
	virtual char vfunc69(void *pOther);	// true when the other object has one of the flags 0x16 at +0x4c, else the Troika base's answer

	char m_pad0004[0x670 - 4];
	int m_n670;	// 0x670: state, 1 while transformed
	char m_pad0674[0x66a4 - 0x674];
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
};
