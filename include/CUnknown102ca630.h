// CUnknown102ca630: a list of 0x28 byte records (array at +4, count at +0xa04), each holding an entity handle at +0x20;
// real name not yet known.
#pragma once

extern char *g_10566458;	// the global entity table (entries of 12 bytes: entity, serial, pad, starting at +4)

class CBaseEntity;

struct CUnknown102ca630EntInfo
{
	CBaseEntity *ent;
	int serial;
	int pad;
};

struct CUnknown102ca630Rec
{
	char m_pad0000[0x20];
	unsigned int m_hEnt;	// 0x20
	char m_pad0024[4];

	CBaseEntity *Entity()
	{
		if (m_hEnt != 0xffffffff) {
			CUnknown102ca630EntInfo *info = (CUnknown102ca630EntInfo *)(g_10566458 + 4) + (m_hEnt & 0x1fff);
			return info->serial == (m_hEnt >> 13) ? info->ent : 0;
		}
		return 0;
	}
};

class CUnknown102ca630
{
public:
	char m_pad0000[4];
	CUnknown102ca630Rec m_recs[1];	// 0x04
	char m_pad002c[0xa04 - 0x2c];
	int m_nRecs;	// 0xa04

	void sub_102ca460(CUnknown102ca630Rec *pRec);	// removes the record
	void sub_102ca630(CBaseEntity *pEnt);	// removes every record whose handle resolves to pEnt
};
