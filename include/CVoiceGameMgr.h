// CVoiceGameMgr: declared by pcdecomp transplant for 0x10232450 from CDataObjectAccessSystem (0x1003ca90);
// only what matched code needs, as plain members.
#pragma once

class CBaseEntity;

class CVoiceGameMgr
{
public:
	CVoiceGameMgr *vfunc0(unsigned int flags);
	void sub_10009976();
	char sub_102324a0(void *pHelper, int maxClients);	// "CVoiceGameMgr::Init": stores the helper and the player count (at most 32), registers the user messages "VoiceMask" (9 bytes) and "ReqState" (0); always true
	bool sub_102325e0(CBaseEntity *pPlayer, const char *cmd);	// "CVoiceGameMgr::ClientCommand": for a player index in range, "vban" sets the ban mask of the player from the first hex argument and "VModEnable" sets / clears its bit in the mod-enable vector (and clears its want-enable bit); true for those, false for other commands, true (with a debug line) for an invalid client

	char m_pad0000[8];
	int m_msgVoiceMask;	// 0x08: user message id of "VoiceMask"
	int m_msgReqState;	// 0x0c: user message id of "ReqState"
	void *m_pHelper;	// 0x10
	int m_nMaxPlayers;	// 0x14
};

#ifdef PCD_INITIALIZERS	// the initializer units: Source's interface with Troika's inline virtual destructor
				// (slot 0; the helper global's destroy stores its vtable 0x104a3078)
class IVoiceGameMgrHelper
{
public:
	virtual ~IVoiceGameMgrHelper() {}
	virtual bool vfunc1(int a, int b) = 0;	// slot 1: pure in the interface (the game's word is _purecall)
};
#endif

class CVoiceGameMgrHelper
#ifdef PCD_INITIALIZERS
	: public IVoiceGameMgrHelper
#endif
{
public:
	virtual bool vfunc1(int a, int b);	// slot 1 (+0x4): always true
};
