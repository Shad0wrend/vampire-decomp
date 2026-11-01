// CUnknown101e0f00: loader of the "DisciplineTgt_" data files (real name not yet known).
#pragma once

#include "CUnknown101dbc60.h"
#include "CUnknown101dd910.h"

class CBasePlayer;
struct S1033d380;
struct CVFeatKV;
class CUnknown101e0f00;

struct CUnknown101e0f00SrcA	// an element of the first list of a source description: one particle effect
{
	int m_bFirstPerson;	// 0x00
	char m_bMarkParticle;	// 0x04: the created particle gets its byte at +0x4c5 set
	char m_bDiscipline;	// 0x05
	char m_pad0006[2];
	const char *m_pszEntity;	// 0x08: the parameter block (CUnknown100eb420) starts here
	float m_flRateMin;	// 0x0c
	float m_flOpacityMin;	// 0x10
	float m_flSizeMin;	// 0x14
	const char *m_pszParticleName;	// 0x18
	int m_nAttachType;	// 0x1c
	const char *m_pszAttachName;	// 0x20
	int m_nBitFlags;	// 0x24
	int m_nMiscFlags;	// 0x28

	void sub_101dc8a0();	// Debug_Display (stub 0x10003143)
};

struct CUnknown101e0f00SrcB	// an element of the second list of a source description
{
	void sub_101dc150();	// Debug_Display (stub 0x10006ece)
};

struct CUnknown101e0f00SrcSub	// the object at +0xc of a source description
{
	char sub_101dc750();	// whether it holds a value (stub 0x10011bc6)
};

struct CUnknown101e0f00Src	// the 0x1c byte source descriptions at +0xa4 / +0xc0 of an entry
{
	int m_n0000;
	int m_nA;	// 0x04
	CUnknown101e0f00SrcA **m_ppA;	// 0x08
	CUnknown101e0f00SrcSub m_sub;	// 0x0c (its size is 8)
	char m_pad000d[0x14 - 0xd];
	int m_nB;	// 0x14
	CUnknown101e0f00SrcB **m_ppB;	// 0x18

	void sub_101dd3c0(const char *pszLabel);	// Debug_Display with the label (stub 0x10015d66)
	void sub_101dcb20();	// the constructor body (stub 0x10002036)
	void sub_101dd090(int a, int id);	// notes the hit of discipline id on a (stub 0x10012157)
	void sub_101dd3a0(void *pChar, int id);	// takes the effect of discipline id back from the character (stub 0x10001212)
};

struct CUnknown101e0f00Fx	// the object the tail's callback worker hands back
{
	char m_pad0000[0x36c];
	int m_n36c;	// 0x36c: handed to sub_101f9a40
	void sub_101dfe80(S1033d380 *pChar, int id, char bFlag);	// finishes the callback of a discipline (stub 0x10009372)
	void sub_101dfe20();	// finishes the callback (stub 0x100156ea)
	void sub_101dfe50();	// finishes the callback of a character (stub 0x1000328d)
	void sub_101dfc20();	// finishes the callback of a hit (stub 0x100086d9)
};

struct CUnknown101e0f00Tail	// the object at +0xdc of an entry
{
	void sub_101e0310();	// the constructor body (stub 0x1000e124)
	void sub_101e04a0();	// Debug_Display (stub 0x10006a23)
	CUnknown101e0f00Fx *sub_101e0410(int a, int b, int c, int d);	// callback worker taking four values (stub 0x10015da2)
};

struct CUnknown101e0f00Entry	// one targeted discipline
{
	int m_id;	// 0x00
	const char *m_pszName;	// 0x04
	const char *m_pszInternalName;	// 0x08
	unsigned int m_nMask;	// 0x0c: 1 << id
	int m_n10;	// 0x10
	int m_n14;	// 0x14
	const char *m_pszViewModel;	// 0x18
	const char *m_pszTgtHighlightParticle;	// 0x1c
	int m_nBaseCost;	// 0x20
	char m_bOvert;	// 0x24
	char m_pad0025[0x28 - 0x25];
	int m_n28;	// 0x28: the level handed to the player's sub_1017df50
	float m_flRecoveryTime;	// 0x2c
	char m_b30;
	char m_b31;
	char m_b32;
	char m_b33;
	char m_b34;
	char m_b35;
	char m_pad0036[0x38 - 0x36];
	CUnknown101dbc60 m_range;	// 0x38
	char m_pad0060[0x68 - 0x60];
	CUnknown101dd910 m_projectile;	// 0x68
	char m_pad0078[0xa4 - 0x78];
	char m_srcInstant[0x1c];	// 0xa4: a CUnknown101e0f00Src
	char m_srcHit[0x1c];	// 0xc0: a CUnknown101e0f00Src
	char m_tail[4];	// 0xdc: a CUnknown101e0f00Tail

	bool sub_101e06a0(CVFeatKV *pKV, CUnknown101e0f00 *pLoader);	// loads the entry from its "DisciplineTgt" key (the loader hands itself as the second argument)
	void sub_101e0a00();	// Debug_Display of the entry (stub 0x100100fa)
	CUnknown101e0f00Entry *sub_101e0520(int id);	// the constructor body (stub of 0x101e0520): constructs the sub objects, stores the id and its bit mask (a DevMsg "Overflowed targeted discipline" and mask 0 from id 30 up)
	int sub_101e0650(void *pChar);	// stub 0x1000da7b: the cost of the entry for the character (the character's stat 8 / 2 for the dword at +0x10, plus the dword at +0x20)
};

class CUnknown101e0f00
{
public:
	int m_n0000;
	int m_nEntries;	// 0x04
	void **m_ppEntries;	// 0x08: the entries the data files fill, one per file

	bool sub_101e10e0(const char *name, int *pIndex);	// opens the data file `name` (stub 0x1000bb9a) and walks its "DisciplineTgt" nodes: each node is parsed into the entry m_ppEntries[(*pIndex)++] (sub_101e08d0); false (after a Msg) when the file cannot be opened or an entry is missing
	void sub_101e0f00();	// counts the "vdata\system\DisciplineTgt_*.txt" files, then loads each DisciplineTgt_%03d.txt (Msg when one cannot be opened)
	int sub_101e12f0(const char *pszName);	// the index of the entry whose internal name equals pszName (case-insensitive), -1 when none (stub 0x10004570)
	void sub_101e4380(const char *pszName);	// "Targeted Discipline Manager" Debug_Display: without a name lists every entry (index, name, base cost), with the name of an entry (or "ALL") displays that entry (every entry)
	int sub_101e12a0(int id);	// the index of the entry of the discipline id, -1 when none (stub 0x10007df1)
	CUnknown101e0f00Entry *sub_101e11c0(int index);	// the entry with that index (stub 0x100123d7)
	void sub_101e3910(int a, int b, int c, int d);	// "CallbackHit": looks the entry of discipline c up, logs "Discipline<%s> CallbackHit", runs the entry's tail callback worker with (d, a, b, c | 0x80000000) while the global current entry (0x10739a74) points at the entry
	unsigned int sub_101e1590(const char *pszInternalName);	// the mask (+0xc) of the entry with that internal name (case-insensitive), 0 when none (stub 0x1000418d)
	void sub_101e3e70(S1033d380 *pObj, const char *pszName);	// runs the "Hit" style callback for the named discipline when the character has it active
	void sub_101e3ee0(S1033d380 *pObj);	// runs the "InterruptSchedule" callback for every active discipline (bit of the mask at +0xeb4) whose entry has the byte at +0x34 set
	void sub_101e3a30(S1033d380 *pObj, int id);	// "InterruptSchedule" callback: looks the entry of discipline id up, logs "Discipline<%s> InterruptSchedule", runs the entry's tail callback worker with the character's two lookups while the global current entry (0x10739a74) points at the entry
	void sub_101e3850(int a, int b, int id, int d);	// "Hit" callback: looks the entry of discipline id up, logs "Discipline<%s> Hit", notes the hit on the entry's hit source (a, id), runs the entry's tail callback worker with (d, a, b, id | 0x80000000) while the global current entry (0x10739a74) points at the entry
	unsigned int sub_101e1870(unsigned int id);	// id | 0x80000000, called with this in ecx (the game's member form of the free function)
	void *sub_101e2910(int a, int b, int c);	// the target of the source for the discipline reference (pSource, c): sub_101e28e0 of the source when the entry applies to the pair (sub_101e1a60 with 1), else 0
	void *sub_101e28e0(void *pSource);	// the target object of the source (stub 0x10004d6d)
	int sub_101e1250(int a, int b);	// the index of the entry for a discipline reference (stub 0x100142a4), -1 when none
	char sub_101e1a60(CUnknown101e0f00Entry *pEntry, void *pSource, void *pSource2, void *pTarget, int flag);	// whether the entry applies to the source / target pair (stub 0x1000b956)
	void sub_101e3730(void *pSource, void *pTarget, unsigned int mask, int flag);	// applies the entry's effect (stub 0x1000ae07)
	void sub_101e33c0(void *pSource, void *pTarget, unsigned int mask, int a);	// applies the effect of a mask to the pair with one more value (stub 0x1000fb4b)
	void sub_101e3400(void *pSource, void *pTarget, int a, int b);	// "ActivateEffect" by reference: finds the entry, applies it to the target when sub_101e1a60 accepts the pair or the target is a CNPC_VPlayerController (dynamic cast of a CBaseCombatCharacter)
	void sub_101e4300(int a, char *pFlag, int *pRef, unsigned int *pMask, float *pTime, int *pOut);	// "ERROR: Wpn_UpdateMode Failed!" when the reference has no entry; else hands back the entry's mask and a time of 10.0f
	void sub_101e4220(CBasePlayer *pPlayer);	// "CVTgt_DisciplineFXMgr_t::UpdateSupernaturalLevel": when the player's default stat list has a positive stat 0x19, hands the level of the "Thaumaturgy_Bloodshield" entry to the player's sub_1017df50 (time -1.0f)
	void sub_101e3380(void *pSource, void *pTarget, int id);	// "ActivateEffect" by discipline id (stub 0x10005c0e): prepares the pair (sub_101e3560) and applies the entry (sub_101e3730 with flag -1)
	void sub_101e34c0(void *pSource, void *pTarget, int a, int b);	// like sub_101e3400 but without the dynamic cast: when the entry does not apply and sub_101e22b0 holds, runs sub_101e3be0(pTarget, entry mask)
	bool sub_101e22b0();	// whether the dword at +0x14 is 1 (stub 0x100087e2)
	void sub_101e3be0(void *pTarget, unsigned int mask);	// stub 0x10013494
	void sub_101e2f50(void *pChar, CUnknown101e0f00Entry *pEntry, int nCost);	// stub 0x1000948a: applies the entry to the character after paying nCost of stat 0xc (a user message on failure)
	void sub_101e2da0(void *pChar, int a, int b);	// finds the entry of the discipline reference (a, b), and applies it (sub_101e2f50) when the character's stat 0xc covers its cost and the stat list 2 value of a does too; else tells the player (message 0x38)
};
