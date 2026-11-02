// CAI_BaseNPCSavedSched: the NPC fields that CAI_BaseNPC::vfunc126 (pre-save, 0x1027bc60) and
// vfunc130 (post-restore, 0x1027bf50) use around the schedule save block at +0x19b4.
// CAI_BaseNPC declares no data members, so this is a view: CAI_BaseNPCSavedSched is a CAI_BaseNPC with
// the members at their offsets. Cast `this` to it (`CAI_BaseNPCSavedSched *p = (CAI_BaseNPCSavedSched *)this;`).
#pragma once

#include "CAI_BaseNPC.h"
#include "ehandle.h"
#include "CUnknown10936b68.h"

// The block saved with datamap 0x105cabd0 (0x8c bytes at +0x19b4 of the NPC).
struct CAI_SavedScheduleBlock
{
	short m_nVersion;	// 0x00 (+0x19b4): 1 when the block is valid
	short m_pad02;
	unsigned int m_nFlags;	// 0x04 (+0x19b8): bit0 slot 167 answered, bit1 target handle live, bit2 navigator busy, (vfunc130 also tests them)
	char m_szSchedule[0x80];	// 0x08 (+0x19bc): name of the schedule (m_pSchedule->m_pszName)
	unsigned int m_nCRC;	// 0x88 (+0x1a3c): CRC32 of the task records (sub_1023f040 init, sub_1023f0c0 update (crc*, data, count*8), sub_1023f060 finish)
};

struct CAI_BaseNPCSavedSched : CAI_BaseNPC
{
	char m_pad0004[0x19b4 - 4];
	CAI_SavedScheduleBlock m_Saved;	// 0x19b4
	char m_pad1a40[0x5b90 - 0x1a40];
	int m_n5b90;	// 0x5b90: cleared (0) by vfunc130 after the base call
	char m_pad5b94[0x5c38 - 0x5b94];
	CAI_ScheduleNode *m_pSchedule;	// 0x5c38: current schedule (stub-found by name on restore)
	char m_pad5c3c[0x5c50 - 0x5c3c];
	int m_nTaskFail5c50;	// 0x5c50: clamped back to 1 when >= 0x2a (vfunc130)
	char m_pad5c54[0x5c58 - 0x5c54];
	char m_b5c58;	// 0x5c58: bit 2 of m_Saved.m_nFlags after restore
	char m_pad5c59[0x5cc0 - 0x5c59];
	int m_nState5cc0;	// 0x5cc0: NPC state (4 = scripted)
	char m_pad5cc4[0x5ce4 - 0x5cc4];
	EHANDLE m_hTarget5ce4;	// 0x5ce4
	char m_pad5ce8[0x5d34 - 0x5ce8];
	void *m_pNavigator5d34;	// 0x5d34: navigator (CUnknown102ee270 / sub_102ee1e0 target)
	char m_pad5d38[0x5d74 - 0x5d38];
	EHANDLE m_hScriptedSeq5d74;	// 0x5d74
};
