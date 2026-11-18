#pragma once

class CBasePlayer;
class CUserCmd;

class CPlayerMove {
public:
	CPlayerMove();
#ifdef PCD_INITIALIZERS	// the initializer units: the inline destructor the CHLPlayerMove global's destroy runs
	virtual ~CPlayerMove() {}
#else	// slot 0: the deleting destructor (the initializer units declare the real one)
	virtual void vfunc0();
#endif
	virtual void vfunc1(CBasePlayer *pPlayer, CUserCmd *pCmd, void *pHelper, void *pMoveData);
	virtual void vfunc2(CBasePlayer *pPlayer, CUserCmd *pCmd, void *pMoveData);
	void sub_10186f00(CBasePlayer *pPlayer);
	void sub_10185b10(CBasePlayer *pPlayer, void *pCmd);	// "CPlayerMove::StartCommand": VPROF scope, resets the prediction state, stores the command, sets the two prediction globals and lets the global 0x105892c8's slot 0 start it
	void sub_10187280(CBasePlayer *pPlayer);	// VPROF scope "CPlayerMove::RunPostThink" around the player's PostThink (slot 437)
	void sub_101874a0(CBasePlayer *pPlayer, CUserCmd *pCmd, void *pHelper);	// 0x101874a0 "CPlayerMove::RunCommand" body (through 0x10356430 from CBasePlayer::sub_1016af80, this = global CPlayerMove 0x10939f00): StartCommand, frametime/curtime setup, weapon command, RunCommand slots 1/2/3, post-think and the +0x2358 command clock
};
