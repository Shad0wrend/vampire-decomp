// CBaseCineCam: cinematic camera entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

struct datamap_t;

#include "Vector.h"

class CBaseCineCam
{
public:
	float *vfunc193(float *out);	// as in CBaseEntity (transplant)
	bool sub_1006e6a0(int a, int b, int c, int d, int e);	// slot 86: true while the time at +0x90 is ahead of curtime, else whether the entity handle at +0x5d0 resolves and its edict (+0x2e0) is `b`, then sub_1006e890
	bool sub_1006d9d0();	// CBaseEntity::GetFlags (as the shot mask); false when -1, else for every set bit i (0..3) the entity handle at +0x610+4*i must resolve; finally whether the handle at +0x630 is set
	bool sub_1006e130(const char *pszName, int a, int b);	// stub 0x1000d15c: sets up the shot named pszName (here "Follow"); false when it could not be set up
	void sub_1006e0e0();	// stub 0x100114be: resets the shot state before a new shot is set up
	void sub_1006e8e0();	// stub 0x10009868: finishes the set up after the first shot's target handle was stored
	void sub_1006ef50(void *pTarget, int a);	// stub 0x10005ae2: makes pTarget (the prop the camera films) the target of the first shot
	void sub_1006e770();	// picks the think function of the shot state at +0x638 (0: none, 1..4: the shot's think functions, otherwise the function at 0x100034ef while the time at +0x55c is in the past) and schedules the next think 0.1 after curtime
	bool sub_1006db10();	// stub 0x10011734: whether the shot just set up is usable
	bool sub_1006e4c0(const char *pszPrefix, int unused);	// "CBaseCineCam::FindBestShot": state 1, sets up every shot "<prefix>_<n>" (n = 1, 2, ... while the handle at +0x630 stays set) and collects the usable ones; none -> false, else a random one of them is set up again ("CBaseCineCam::FindBestShot chose %s") -> true; takes a second, unused stack argument
	Vector sub_1006f670();	// the position the shot looks at: the middle of the two shot positions (flags 4 and 8 of sub_1006edb0), or the one that is set, else the zero vector (returned by value)
	void sub_1006ed40(Vector *pFirst, Vector *pSecond);	// copies the two shot positions to the non-null outputs
	int sub_1006edb0();	// stub 0x10002a6d: the shot flags (bit 2 = first position, bit 3 = second)
	void sub_1006f080(Vector *pOut, int bSecond);	// 0x1006f080 (stub 0x10012553, this in ecx, ret 8): the trace start position of the shot's target entity handle +0x610 (bSecond 0) / +0x614 (bSecond 1), written to *pOut; used by sub_1006db10's two UTIL_TraceHull checks
	int sub_100b3700();	// CBaseEntity::GetFlags (stub 0x10008b84), called directly first thing in sub_1006db10 after sub_1006f670 (result unused)
	Vector sub_1006f010(int index);	// stub 0x10011ebe: the position of shot `index` (2 or 3), returned by value

	char m_pad0004[0x8c];
	float m_flTime90;	// 0x0090
	char m_pad0094[0x17c - 0x94];
	float m_flNextThink17c;	// 0x017c
	char m_pad0180[0x55c - 0x180];
	float m_flTime55c;	// 0x055c
	char m_pad0560[0x5d0 - 0x560];
	unsigned int m_hTarget5d0;	// 0x05d0
	const char *m_psz5d4;	// 0x05d4: the shot's name
	const char *m_psz5d8;	// 0x05d8: the names of the four shot targets
	const char *m_psz5dc;
	const char *m_psz5e0;
	const char *m_psz5e4;
	char m_pad05e8[4];
	Vector m_vecShot5ec;	// 0x05ec: the first shot position
	Vector m_vecLook5f8;	// 0x05f8: sub_1006f670 result
	Vector m_vecShot604;	// 0x0604: the second shot position
	unsigned int m_hShot610[4];	// 0x0610: entity handles, one per flag bit
	char m_pad0620[0x630 - 0x620];
	unsigned int m_hShot630;	// 0x0630
	char m_pad0634[4];
	int m_nState638;	// 0x0638: the shot state
	int m_n63c;	// 0x063c: engine slot 120() when the shot was set up
	char m_b640;	// 0x0640
	void sub_10070780(class CBasePlayer *pPlayer);	// starts the shot for the player: finds the four target entities by name, then either sets up the player's current camera (sub_1017cf90) with the shot's name or creates a new one (sub_10070470) and makes the player watch it; Warning when that fails
	void sub_10070720(int unused);	// starts the shot for the player found by sub_101cd9e0(1) (sub_10070780), one unused stack argument
	void sub_10070750(int unused);	// as sub_10070720, through the entity member sub_10070990 (0x10003247)
	int sub_100ab4f0();	// stub 0x1000b5cd, thiscall without stack arguments (the debug name)
	float *sub_1030be50(float *out);	// provisional, like vfunc193 (transplant)
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CBaseCineCam *vfunc5(unsigned int flags);	// scalar deleting destructor
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
	virtual int vfunc80();
	virtual int vfunc81();
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
	virtual void vfunc103();
	virtual void vfunc104();
	virtual void vfunc105();
	virtual void vfunc106(const char *pszName);
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
	virtual unsigned char vfunc117();
};
