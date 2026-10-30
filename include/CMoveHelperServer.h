// CMoveHelperServer: the server side implementation of IMoveHelper.
// Only the vtable slots and members that decompiled code needs are given their
// real names; the placeholders keep the slot indices of the game's primary
// vtable (0x1046af0c) and the member offsets.
#pragma once

class CBaseEntity;

#include "IMoveHelperServer.h"

class CMoveHelperServer : public IMoveHelperServer
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual bool vfunc2(const void *pTrace, const float *pVelocity); // "CMoveHelperServer::AddToTouched": false for a trace without entity, the host (+0x4) or an entity already touched; else appends the trace and the impact velocity to the touch list at +0x8
	virtual void vfunc3();
	virtual void vfunc4(int idx, const char *pszFormat, ...); // "CMoveHelperServer::Con_NPrintf": formats into a 0x2000 byte buffer and hands it to the engine's Con_NPrintf (slot 81)
	virtual void vfunc5(const float *pOrigin, int channel, const char *pszSample, float flVolume, int soundlevel, int fFlags, int pitch); // "CMoveHelperServer::StartSound": emits the sound at the origin for the players that can hear it (a PAS filter, with the prediction rules unless the global flag at +0x14 is 1)
	virtual void vfunc6(int, int, int, int, int, int, int, int, int, int, int, int);
	virtual bool vfunc7(); // "CMoveHelperServer::PlayerFallingDamage": hurts the host by the game rules' fall damage (slot 30 of the rules); always true
	virtual void vfunc8();
	virtual void vfunc9();
	virtual bool vfunc10(const unsigned int *pHandle); // "CMoveHelperServer::IsWorldEntity": whether the entity handle resolves to the world entity (CBaseEntity::Instance of edict 0)
	virtual void vfunc11();
	virtual void vfunc12();
	virtual float vfunc13(int param);
	virtual CMoveHelperServer *vfunc14(unsigned int flags);
	virtual void vfunc15();
	virtual void vfunc16(const float *pOrigin, const char *pszSound); // "CMoveHelperServer::StartSound": emits the sound at the origin for the host alone (a single user filter, with the prediction rules unless the global flag at +0x14 is 1)

	CBaseEntity *m_pHost; // 0x04
	void *m_pTouchList; // 0x08
	int m_nTouchAlloc; // 0x0c
	int m_n10; // 0x10
	int m_nTouchCount; // 0x14
	void *m_pTouchListDbg; // 0x18
	CMoveHelperServer();
	void sub_1000185c(); // as in CDataObjectAccessSystem (transplant)
};
