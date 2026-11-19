// CMoveHelperServer: the server side implementation of IMoveHelperServer (RTTI .?AVCMoveHelperServer@@, base
// IMoveHelperServer; vtable 0x1046af0c), the SDK's dlls/movehelper_server.cpp class. Slots 0..15 are the
// interfaces'; slot 16, the second StartSound, is its own.
#pragma once

class CBaseEntity;

#include "IMoveHelperServer.h"
#include "utlvector.h"
#include "Vector.h"
#include "CGameTrace.h"

class CMoveHelperServer : public IMoveHelperServer
{
public:
	virtual const char *vfunc0(unsigned int handle) const;	// "CBaseEntity::Instance": the entity's name, else the map name
	virtual void vfunc1();
	virtual bool vfunc2(const void *pTrace, const float *pVelocity); // "CMoveHelperServer::AddToTouched": false for a trace without entity, the host (+0x4) or an entity already touched; else appends the trace and the impact velocity to the touch list at +0x8
	virtual void vfunc3();
	virtual void vfunc4(int idx, const char *pszFormat, ...); // "CMoveHelperServer::Con_NPrintf": formats into a 0x2000 byte buffer and hands it to the engine's Con_NPrintf (slot 81)
	virtual void vfunc5(const float *pOrigin, int channel, const char *pszSample, float flVolume, int soundlevel, int fFlags, int pitch); // "CMoveHelperServer::StartSound": emits the sound at the origin for the players that can hear it (a PAS filter, with the prediction rules unless the global flag at +0x14 is 1)
	virtual void vfunc6(int, int, int, int, int, int, int, int, int, int, int, int);
	virtual bool vfunc7(); // "CMoveHelperServer::PlayerFallingDamage": hurts the host by the game rules' fall damage (slot 30 of the rules); always true
	virtual void vfunc8(int);
	virtual int vfunc9();
	virtual bool vfunc10(const unsigned int *pHandle); // "CMoveHelperServer::IsWorldEntity": whether the entity handle resolves to the world entity (CBaseEntity::Instance of edict 0)
	virtual void vfunc11();
	virtual void vfunc12();
	virtual float vfunc13(int param);
	virtual ~CMoveHelperServer();	// slot 14
	virtual void vfunc15(CBaseEntity *pHost);	// SetHost
	virtual void vfunc16(const float *pOrigin, const char *pszSound); // "CMoveHelperServer::StartSound": emits the sound at the origin for the host alone (a single user filter, with the prediction rules unless the global flag at +0x14 is 1)

	CMoveHelperServer();

	// matched by hand under these names, which the vtable's names follow (rename_symbol): 0x1013eee0 is the free
	// __stdcall sub_1013eee0 (vfunc0: it never reads this)
	CMoveHelperServer *vfunc14(unsigned int flags);	// 0x1013edb0, the scalar deleting destructor (??_G): the destructor, operator delete when bit 0
	void sub_1000185c();	// 0x1013ee40, the destructor (stub 0x1000185c)
	void sub_1013eec0(CBaseEntity *pHost);	// 0x1013eec0, vfunc15: stores the host and runs the virtual slot 1 (vfunc1)

	// an entry of the touch list (0x60 bytes): the impact velocity and the trace
	struct touchlist_t
	{
		Vector deltavelocity;
		CGameTrace trace;
	};

	CBaseEntity *m_pHost;	// 0x04
	CUtlVector<touchlist_t> m_TouchList;	// 0x08
};
