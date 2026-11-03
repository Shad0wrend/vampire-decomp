// CSingleplayRules: the single player rule set, derived from CGameRules at +0x0.
#pragma once

#include "CGameRules.h"

class CSingleplayRules : public CGameRules
{
public:
	CSingleplayRules();
	CGameRules *vfunc0(unsigned int flags);	// scalar deleting destructor: the single player rules' vftable, the base destructor (sub_1000d189), then delete when flags & 1
	void sub_1000d189();	// the base destructor body (stub 0x1000d189), called directly
	bool vfunc40();	// slot 40 override: the game's 0x101abec0
	virtual CBaseEntity *vfunc20(CBaseEntity *pPlayer, CBaseEntity *pCurrentWeapon);	// "GetNextBestWeapon": over the player's 0xe0 weapon slots, the usable owned weapon with the highest weight (pCurrentWeapon is not looked at), null when there is none
	virtual float vfunc38(int a);
	virtual int vfunc43(int a, int b);
	virtual int vfunc48(int index);
	virtual float vfunc49(CBaseEntity *pWeapon);
	virtual float vfunc50(CBaseEntity *pWeapon);
	virtual int vfunc61(int index);
	virtual int vfunc62(int index);
	virtual const char *vfunc63(int index);
	Vector vfunc51(CBaseEntity *pEnt);	// as in CMultiplayRules (transplant)
public:
    virtual void vfunc16();
    virtual void vfunc28(void *);
    virtual float vfunc30(int a);	// slot 30: g_10739d08.sub_101e7dd0(the float at +0x1ee8 of the argument)
    virtual void vfunc35(CBaseEntity *);
    virtual void vfunc44(CBaseEntity *, CMPDamageInfo *);
    virtual void vfunc45(CBaseEntity *, CMPDamageInfo *);
    virtual char vfunc74();
    virtual char vfunc19(CBaseEntity *, CBaseEntity *);
public:
    virtual bool vfunc18();
    virtual bool vfunc21();
    virtual bool vfunc22();
    virtual bool vfunc24();
    virtual void vfunc54(int, int, int);
    virtual bool vfunc26(int, int, int, int);
    virtual bool vfunc37(int);
    virtual bool vfunc17(int);
    virtual int vfunc64(int, int);
    virtual float vfunc59();
};
