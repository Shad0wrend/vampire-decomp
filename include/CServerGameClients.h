// class CServerGameClients (RTTI .?AVCServerGameClients@@), primary vtable 0x10462798, 14 slots.
#pragma once

class CGlobalEntityList_Ent;

struct CServerGameClients_Edict	// the engine's edict: the entity's unknown at +0x40, a flag byte at +0x44
{
	char m_pad0000[0x40];
	CGlobalEntityList_Ent *m_pUnk;	// 0x40
	char m_bFlag;	// 0x44
};

class CServerGameClients
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(int);
	virtual void vfunc3(void *pEdict);	// "CServerGameClients::ClientDisconnect": scope trace, the player entity of the edict (CBaseEntity::Instance; edict 0 resolved through the engine) is announced (\"- %s has left the game\" text message to everybody) unless the global byte 0x1070ba2c is set, then made non-solid-ish (flags), removed from the global list at 0x1070ba0c and torn down
	virtual int vfunc4(int, int);
	virtual void vfunc5();
	virtual void vfunc6(CServerGameClients_Edict *pEdict, int clientIndex);	// "ClientSettingsChanged": logs a name change of the player entity of the edict and stores the new name
	virtual void vfunc7(int edictA, int edictB, int c);	// takes two edicts (edict +0x40 is the networkable, slot 4 gives the entity); a position from entity A's slot 193 (else B's, after its slot 430) is passed to every entity in the global list at 0x10709680
	virtual void vfunc8();
	virtual void vfunc9(CServerGameClients_Edict *pEdict, int a);	// passes the dword at +0xa8 of the edict's entity (slot 4 of the unknown at +0x40; 0 without one) and a on to sub_100d1f70
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void *vfunc12(void *pEdict);	// scope trace "CBaseEntity::Instance", returns the entity (edict's unknown at +0x40, slot 4) + 0x2068, or null
	virtual void vfunc13(void *pEdict, float *pOut);	// scope trace "CBaseEntity::Instance" (the entity of the edict, edict 0 resolved through the engine), then copies the vector the entity's slot 196 returns to pOut (a global default vector when there is no entity)
};
