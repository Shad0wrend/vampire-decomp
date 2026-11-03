// CFlameCluster: declared by pcdecomp transplant for 0x103e1d20 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

struct CFlameRecord	// 0x1c byte element of the burn list
{
	char m_pad00[0x18];
	float m_flStrength;	// 0x18
};

// debug overlay helpers (cdecl, no class known): a box around the record and a text line at it
void sub_10144290(CFlameRecord *pRec, const Vector &vecColor, const Vector &vecSize, int a, int b, int c, int d, float flTime);	// stub 0x1000513c
void sub_10143710(CFlameRecord *pRec, const char *pszText, int a, float flTime);	// stub 0x10011e5a

// used by vfunc134
int sub_101cca80(CBaseEntity **pList, int nMax, const Vector *pMins, const Vector *pMaxs, int a, int b);	// cdecl 6 args: fills pList (up to nMax) with the entities inside the box and returns the count
int sub_103e1740();	// free function, returns int (re-arms the next think when positive) — declared by vfunc134

class CFlameCluster : public CBaseEntity
{
public:
	char m_pad_cluster[0x450 - sizeof(CBaseEntity)];
	union {
		int m_aList450[5];	// 0x450: the burn list (a vector, zeroed)
		struct {
			CFlameRecord *m_pRecords450;	// 0x450: the records (0x1c bytes each)
			int m_nGrow454;
			int m_nAlloc458;
			int m_nRecords45c;	// 0x45c: the number of records
			int m_pad460;
		};
	};
	int m_aBurn464[7];	// 0x464
	int m_n480;	// 0x480
	unsigned int m_hOwner;	// 0x484
	char m_b488;	// 0x488

	CFlameCluster() : CBaseEntity(0)
	{
		for (int i = 0; i < 5; i++) m_aList450[i] = 0;
		m_hOwner = -1;
		m_b488 = 0;
		for (int j = 0; j < 7; j++) m_aBurn464[j] = 0;
	}

	CFlameCluster *sub_103e1e20();
	void sub_103e2000(CBaseEntity *pEntity, int index);	// burns pEntity: a CVDmg_t record and a damage info (type 8, 1.0f) from the owner, applied to pEntity
	virtual void vfunc123();
	virtual void vfunc134();	// slot 134 (0x103e20c0): ages the burn list at +0x450 (each record's float +0x18 -= curtime - m_n480), drops the expired ones, unions the live record positions into a bbox, sets the entity bounds/abs origin and flags slot 62, then burns every entity inside the box within 24 units through sub_103e2000; when nothing is alive triggers the owner handle (+0x488) and re-schedules +0x17c = curtime + 0.5	// slot 123: debug overlay, one box and text line per flame record of the list at +0x450 (count +0x45c, 0x1c byte records, the flame strength float at +0x18)
	void vfunc103();	// as in CPhysConstraint (transplant)
	void vfunc104();	// as in CPhysConstraint (transplant)
	CFlameCluster *vfunc5(unsigned int flags);	// as in CNPC_VMingXiao (transplant)
	void sub_1009df20();	// as in CNPC_VMingXiao (transplant)
};
