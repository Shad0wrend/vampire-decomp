#pragma once

class CBasePlayer;

class CPlayerMove {
public:
	CPlayerMove();
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	void sub_10186f00(CBasePlayer *pPlayer);
	void sub_10187280(CBasePlayer *pPlayer);	// VPROF scope "CPlayerMove::RunPostThink" around the player's PostThink (slot 437)
};
