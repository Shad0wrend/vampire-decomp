// CUnknown102ca630: a list of 0x28 byte records (array at +4, count at +0xa04), each holding an entity handle at +0x20;
// real name not yet known.
#pragma once

class CGlobalEntityList;
extern CGlobalEntityList *g_10566458;	// the global entity list (CGlobalEntityList.h); its entity slots (12 bytes: entity, serial, list index) start at +4

class CBaseEntity;

struct CUnknown102ca630EntInfo
{
	CBaseEntity *ent;
	int serial;
	int pad;
};

struct CUnknown102ca630Rec
{
	int m_nType;	// 0x00: 2 = a supernatural act level, else a criminal one
	int m_n0004;
	float m_vecPos[3];	// 0x08
	int m_nLevel;	// 0x14: the act level
	int m_n0018;
	unsigned int m_hOwner;	// 0x1c
	unsigned int m_hEnt;	// 0x20: the offender
	char m_b0024;
	char m_pad0025[3];

	CBaseEntity *Entity()
	{
		if (m_hEnt != 0xffffffff) {
			CUnknown102ca630EntInfo *info = (CUnknown102ca630EntInfo *)((char *)g_10566458 + 4) + (m_hEnt & 0x1fff);
			return info->serial == (m_hEnt >> 13) ? info->ent : 0;
		}
		return 0;
	}

	void sub_102c9da0(CUnknown102ca630Rec *pOther);	// copies the record (stub 0x10008d50)
};

class CUnknown102ca630
{
public:
	char m_pad0000[4];
	CUnknown102ca630Rec m_recs[1];	// 0x04
	char m_pad002c[0xa04 - 0x2c];
	int m_nRecs;	// 0xa04

	void sub_102ca460(CUnknown102ca630Rec *pRec);	// removes the record: with the cvar at 0x107258dc on, DevMsg "CSActs: %6.1f - External %s act level %d removed from (%f, %f, %f) (offender - %s) (owner - %s)", then the last record is moved over it
	// 0x102ca780 (this = the act list at g_109253f8, see CAI_CsActList.h; 9 stack args, ret 0x24): drops the expired records (curtime past
	// rec+0x18, via sub_102ca460), then for every record that pNpc->sub_1028ebc0(rec) accepts keeps, per type (m_nType 2 = supernatural
	// else criminal), two best levels (rec+0x14) above the thresholds in the four int slots, with the position (rec+8, 3 floats) and
	// the entity of the handle at rec+0x1c.  pNpc is the NPC that sees the acts (CAI_BaseNPCTroika::vfunc433 passes this).
	void sub_102ca780(CBaseEntity *pNpc, int *pCrimA, int *pSuperA, int *pCrimB, int *pSuperB,
		float *pCrimPos, float *pSuperPos, CBaseEntity **ppCrimEnt, CBaseEntity **ppSuperEnt);
	void sub_102ca630(CBaseEntity *pEnt);	// removes every record whose handle resolves to pEnt
};
