// class CServerGameClients (RTTI .?AVCServerGameClients@@), primary vtable 0x10462798, 14 slots.
#pragma once

class CServerGameClients
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void *vfunc12(void *pEdict);	// scope trace "CBaseEntity::Instance", returns the entity (edict's unknown at +0x40, slot 4) + 0x2068, or null
	virtual void vfunc13(void *pEdict, float *pOut);	// scope trace "CBaseEntity::Instance" (the entity of the edict, edict 0 resolved through the engine), then copies the vector the entity's slot 196 returns to pOut (a global default vector when there is no entity)
};
