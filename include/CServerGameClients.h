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
	virtual void vfunc7(int edictA, int edictB, int c);	// takes two edicts (edict +0x40 is the networkable, slot 4 gives the entity); a position from entity A's slot 193 (else B's, after its slot 430) is passed to every entity in the global list at 0x10709680
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void *vfunc12(void *pEdict);	// scope trace "CBaseEntity::Instance", returns the entity (edict's unknown at +0x40, slot 4) + 0x2068, or null
	virtual void vfunc13(void *pEdict, float *pOut);	// scope trace "CBaseEntity::Instance" (the entity of the edict, edict 0 resolved through the engine), then copies the vector the entity's slot 196 returns to pOut (a global default vector when there is no entity)
};
