// CVoiceGameMgr: declared by pcdecomp transplant for 0x10232450 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class CBaseEntity;

class CVoiceGameMgr
{
public:
	CVoiceGameMgr *vfunc0(unsigned int flags);
	void sub_10009976();
	bool sub_102325e0(CBaseEntity *pPlayer, const char *cmd);	// "CVoiceGameMgr::ClientCommand": for a player index in range, "vban" sets the ban mask of the player from the first hex argument and "VModEnable" sets / clears its bit in the mod-enable vector (and clears its want-enable bit); true for those, false for other commands, true (with a debug line) for an invalid client

	char m_pad0000[8];
	int m_msgVoiceMask;	// 0x08: user message id of "VoiceMask"
	int m_msgReqState;	// 0x0c: user message id of "ReqState"
	void *m_pHelper;	// 0x10
	int m_nMaxPlayers;	// 0x14
};
