// CDebugEntity: declared by pcdecomp transplant for 0x1020a470 from CNPC_VMingXiao (0x103910b0);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"
#include "CTakeDamageInfo.h"
#include "CBaseEntity.h"

struct CDebugEntityRecord	// 0x90 byte element of the debug record list at +0x450
{
	char m_pad00[0x80];
	int m_n80;
	int m_n84;
	int m_n88;
	int m_n8c;
};

class CDebugEntity : public CPointEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1009df20();
public:
	void vfunc104();
	virtual int vfunc124();	// slot 124 (DrawDebugTextOverlays): CBaseEntity::vfunc124's next free line, then with overlay flag bit 0 (+0x224) one overlay text per record of the list at +0x450 (count +0x45c), each on its own line; returns the next free line

	CDebugEntityRecord *m_pRecords450;	// 0x450
	char m_pad454[0x45c - 0x454];
	int m_nRecords45c;	// 0x45c
	char m_pad0460[0x464 - 0x460];
};
