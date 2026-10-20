// CUnknown1006eeb0: object with a record index at +0x630 (not identified yet).
#pragma once

class CBaseEntity;

class CUnknown1006eeb0
{
public:
	int sub_1006eeb0(int which);	// the address of sub-record `which` (0..3, 0x2c bytes apart) of the record this object indexes, else 0
	void sub_1006ef50(CBaseEntity *pEnt, int which);	// remembers the handle of pEnt (-1 for null) in m_hEntity[which] and, from the model of pEnt, the bone (record flag 0x200) or attachment (0x400) index named by the record in m_iIndex[which]

	char m_pad0000[0x610];
	int m_hEntity[4];	// 0x0610
	int m_iIndex[4];	// 0x0620
	int m_iRecord;	// 0x0630
};
