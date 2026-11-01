// CSoundEnt: declared by pcdecomp transplant for 0x101bb580 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "Vector.h"

struct CSound;

struct CSoundEntSlot	// one 0x2c byte entry of the sound pool at +0x464
{
	char m_pad0000[0x10];
	int m_flExpireTime;	// 0x10: a float, compared by its bits against SOUND_NEVER_EXPIRE (-1.0f)
	char m_pad0014[4];
	int m_iNext;	// 0x18
	char m_pad001c[0x2c - 0x1c];

	void sub_101b9840();	// the entry's constructor (stub 0x10008d46), run for every pool entry by CSoundEnt::vfunc126
	void sub_1000a493();	// stub 0x1000a493, called for every pool entry by CSoundEnt::vfunc127
};

class CSoundEnt
{
public:
	CSoundEnt *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	int sub_101bab50();	// "CSoundEnt::IAllocSound": pops the first sound of the free list (+0x450) onto the active list (+0x454) and returns its index; -1 with a message when the free list is empty
	void sub_101baf80();	// "CSoundEnt::Initialize" (stub 0x10004985)
	static CSound *sub_101bb150(int index);	// "CSoundEnt::SoundPointerForIndex": scope trace, the sound at +0x464 + index * 0x2c of the global sound entity (null, with a message, when out of range)
	static int sub_101bb0f0();	// "CSoundEnt::ActiveList" (stub 0x10012120): the index of the first active sound, -1 without the global sound entity
	static CSound *sub_101bb370(int iType, const Vector *pOrigin);	// the active sound of the type closest to pOrigin (squared distance below 2^28 start value), null when none
	static void sub_101ba9d0(int iSound, int iPrevious);	// "CSoundEnt::FreeSound": with the global sound entity (0x1072c464) set: reports the sound (DevMsg "Freeing sound id(%d) ...") when the debug console variable allows, then unlinks iSound from the active list (after iPrevious, or the head when -1) and pushes it on the free list (+0x450)
	static void sub_101babc0(int iType, const Vector *pOrigin, int iVolume, float flDuration, char bFlag);	// "CSoundEnt::InsertSound": with the global sound entity set, allocates a sound (DevMsg when none is free), fills it (origin, type, volume, time stamp, expiry time = curtime + duration, flag) and, when the debug bits 0..1 of +0x460 are set, reports it
	void vfunc134();	// slot 134 "CSoundEnt::Think": next think 0.3 s ahead (+0x17c), frees the expired sounds of the active list, reports the sound counts when the report flag is set, then CBaseEntity::Think (sub_101bb350, stub 0x1001138d)
	int sub_101bb070(int nList);	// the number of sounds in a list (stub 0x1000d300): 1 = free, 2 = active
	void sub_101bb350();	// CBaseEntity::Think-like base (stub 0x1001138d), tail called
	int vfunc127(int a);	// slot 127 "CSoundEnt::vfunc127": CBaseEntity::vfunc127 (sub_1000961a) with a, then sub_1000a493 on each of the 0x40 pool entries; returns the base's result
	int sub_1000961a(int a);	// CBaseEntity::vfunc127 (stub 0x1000961a), called directly
	int vfunc126(int a);	// slot 126: constructs the 0x40 pool entries (sub_101b9840), CBaseEntity::vfunc126 (sub_100a9f70) with a, then sub_1000a493 on each of the 0x40 entries; returns the base's result
	int sub_100a9f70(int a);	// CBaseEntity::vfunc126 (stub 0x100065d2), called directly

	char m_pad0004[0x17c - 4];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x450 - 0x180];
	int m_iFreeSound;	// 0x450
	int m_iActiveSound;	// 0x454
	int m_cLastActiveSounds;	// 0x458
	char m_bShowReport;	// 0x45c
	char m_pad045d[0x464 - 0x45d];
	CSoundEntSlot m_SoundPool[1];	// 0x464
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
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	virtual Datamap82 vfunc82();
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
	virtual void vfunc103();	// "CSoundEnt::Spawn": SetSolid(0) (inlined), CBaseEntity::sub_100b3b00, InitSoundList, then the first think a second from now
	virtual void vfunc104();
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
	virtual int vfunc117();
};
