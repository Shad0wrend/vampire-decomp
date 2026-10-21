// CUnknown102db470: an NPC that picks among the registered nodes (singly linked list, head in a global, next pointer
// at +0x540, rank at +0x578) the ones that can serve it; real name not yet known.
#pragma once

class CUnknown102db470;

#define U102DB_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CUnknown102db470Ent	// the entity base of the nodes and of the NPC: only slot 220 (GetOrigin) is named
{
public:
	U102DB_V10(a0) U102DB_V10(a1) U102DB_V10(a2) U102DB_V10(a3) U102DB_V10(a4)
	U102DB_V10(a5) U102DB_V10(a6) U102DB_V10(a7) U102DB_V10(a8) U102DB_V10(a9)
	U102DB_V10(b0) U102DB_V10(b1) U102DB_V10(b2) U102DB_V10(b3) U102DB_V10(b4)
	U102DB_V10(b5) U102DB_V10(b6) U102DB_V10(b7) U102DB_V10(b8) U102DB_V10(b9)
	U102DB_V10(c0) U102DB_V10(c1)
	virtual float *vfunc220();	// "CBaseEntity::GetOrigin": the pointer to the three origin floats at +0x41c
};

class CUnknown102db470Node : public CUnknown102db470Ent
{
public:
	char m_pad0004[0x540 - 4];
	CUnknown102db470Node *m_pNext;	// 0x540
	char m_pad0544[0x574 - 0x544];
	unsigned int m_nMask;	// 0x574: bit mask matched against the NPC's mask at +0x62dc
	int m_nRank;	// 0x578
	char m_bEnabled;	// 0x57c
	char m_bBusy;	// 0x57d
	char m_pad057e[0x584 - 0x57e];
	int m_nCapacity;	// 0x584
	int m_nUsedB;	// 0x588
	int m_nUsedA;	// 0x58c

	bool sub_102dad60(CUnknown102db470 *pNPC, float *pOut1, float *pOut2);	// whether the node can serve the NPC (stub 0x1000f826): enabled, not busy, with a free place and a mask bit shared with the NPC, and within a squared range of the NPC
};

struct CUnknown102db470Sub	// small polymorphic object embedded at +0x270
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
};

class CUnknown102db470 : public CUnknown102db470Ent
{
public:
	char m_pad0004[0x270 - 4];
	CUnknown102db470Sub m_sub270;	// 0x270 (vptr + nothing else known)
	char m_pad0274[0x62dc - 0x274];
	unsigned int m_nMask;	// 0x62dc
	char m_pad62e0[0x62fc - 0x62e0];
	CUnknown102db470Node *m_pCurrentNode;	// 0x62fc
};
