// CSoundScheme: declared by pcdecomp transplant for 0x1022a1d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "string_t.h"
#include "CBaseEntity.h"
#include "datamap.h"

class CAI_BaseNPC;

struct CSoundSchemeList	// one of the scheme's sound lists (+0x460, +0x4f0, +0x4a8, +0x538); only the two dwords at +0x40 / +0x44 are used so far
{
	char m_pad0000[0x40];
	int m_n40;
	int m_n44;
};

// One entry of the sound array at +0x580 (0x74 bytes). It is what 0x102298e0 gets as its last argument and plays:
// name at +0 (the sample), volume at +0x40, flags at +0x44, random volume bounds +0x4c / +0x50, vertical jitter
// +0x54 / +0x58, sound level +0x64, random pitch bounds +0x68 / +0x6c; the caller 0x1022b300 tests +0x70.
struct CSoundSchemeSound
{
	char m_szName[0x40];		// 0x00: sample name
	float m_flVolume;			// 0x40
	int m_iFlags;				// 0x44 (the player ORs 0x280 into it)
	int m_n48;					// 0x48
	float m_flDistanceMin;		// 0x4c: RandomFloat bound (distance the sound is offset)
	float m_flDistanceMax;		// 0x50: RandomFloat bound
	float m_flHeightBelow;		// 0x54: origin z -= this at most
	float m_flHeightAbove;		// 0x58: origin z += this at most
	float m_flAngleMin;			// 0x5c: RandomFloat bound (yaw of the offset direction)
	float m_flAngleMax;			// 0x60: RandomFloat bound
	int m_iSoundLevel;			// 0x64
	int m_iPitchMin;			// 0x68: RandomInt bound
	int m_iPitchMax;			// 0x6c: RandomInt bound
	int m_n70;					// 0x70: the play chance the caller rolls against
};

class CSoundScheme : public CBaseEntity
{
public:
	// data after CBaseEntity (0x3e0); the raw fields follow the CUtlVector layout of utlvector.h
	char m_pad03e0[0x450 - 0x3e0];
	string_t m_sSchemeFile;	// 0x0450
	bool m_bStartEnabled;	// 0x0454
	char m_pad0455[0x458 - 0x455];
	int m_n458;					// 0x458: the think stops when the global queue has this many items
	char m_pad045c[0x460 - 0x45c];
	CSoundSchemeList m_lists460[4];	// 0x460, 0x4a8, 0x4f0, 0x538: the four sound lists (0x48 bytes each)
	CSoundSchemeSound *m_pSoundMemory;	// 0x580: the sound entry array (vector memory)
	int m_nSoundAllocationCount;	// 0x584
	int m_nSoundGrowSize;		// 0x588
	int m_nSoundCount;			// 0x58c: the vector's size (0x1022b300 reads it)
	CSoundSchemeSound *m_pSoundElements;	// 0x590
	// 0x594: the second vector (0x48-byte CSoundSchemeList elements), purged by sub_1022a200 / rebuilt by vfunc104
	CSoundSchemeList *m_pListMemory594;	// 0x594
	int m_n594AllocationCount;	// 0x598
	int m_n594GrowSize;	// 0x59c
	int m_n594Count5a0;	// 0x5a0
	CSoundSchemeList *m_p594Elements;	// 0x5a4
	int m_n5a8;					// 0x5a8: the round-robin index into m_pSoundMemory
	bool m_bList460Valid;	// 0x5ac: the +0x460 list parsed (vfunc104; 0 makes it appended to the +0x594 vector and removed)
	bool m_bList4a8Valid;	// 0x5ad: the +0x4a8 list parsed
	bool m_bList4f0Valid;	// 0x5ae: the +0x4f0 list parsed
	bool m_bList538Valid;	// 0x5af: the +0x538 list parsed

	CSoundScheme *vfunc5(unsigned int flags);
	void vfunc113();	// slot 113: locks the global at 0x10750d78 with this (0x100115f9); then when the byte at +0x454 is set calls sub_1022b590(2.0), else CBaseEntity::sub_100ac4e0(0, 0.0, 0) (0x10007fe5)
	void sub_1000bccb();
	void sub_1000cb8a();
	void sub_1022a200();	// destructor body (stub 0x1000bccb): resets the vtable, purges the vectors at +0x580 and +0x594
	CSoundScheme *sub_1022a0f0();	// as in CKeepUpright (transplant)
	void sub_1022b520(float flDelay);	// when started (byte at +0x455): hands the global at 0x10750d78 the delay (at least 0.5) to queue the sounds away, clears the think function and the start flag
	void sub_1022b590(float flDelay);	// when not started yet (byte at +0x455): hands the NPC found by sub_101cda50 this scheme, registers the sounds with the global at 0x10750d78 (lists at +0x460, +0x4f0, +0x4a8, +0x538), sets the think function and the start flag and schedules the next think 0.1 s ahead; the delay is at least 0.5
	void sub_10229270(float flDelay, CSoundSchemeList *pA, CSoundSchemeList *pB, CSoundSchemeList *pC, CSoundSchemeList *pD);	// drops the stale entity handles of the vector at +0x19c (count at +0x1a8) and runs sub_1022b660 on the live ones, then registers the four lists (pA at +0x14, pD at +0xc4, pC at +0x6c, pB at +0x11c) through sub_10229430 (stub 0x10006663)
	void sub_10229430(CSoundSchemeList *pList, int a, int b, float flDelay, void *pDest);	// stub 0x10006663
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc129();
    void vfunc103();	// as in CPhysConstraint (transplant)
    void vfunc104();	// as in CPhysConstraint (transplant)
};
