// CPlatTrigger (RTTI .?AVCPlatTrigger@@ : CBaseEntity), vtable 0x1046f1c4, size 0x454: the trigger volume a CFuncPlat
// spawns. Created by the factory 0x10159270 (operator new 0x454, CBaseEntity(0), own vftable, SetClassname
// "plat_trigger", then sub_10159310 with the platform).
#pragma once

#include "CFuncPlat.h"
#include "CBaseEntity.h"

void *sub_100aa720(unsigned int size);	// the entities' operator new (stub 0x1000db89)

// the engine edict as the factory reads it: +0x40 holds the unknown whose slot 4 (+0x10) gives the entity
struct CPlatEdictUnknown
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3();
	virtual CFuncPlat *vfunc4();
};
struct CPlatEdictView
{
	char m_pad0000[0x40];
	CPlatEdictUnknown *m_pUnknown;	// 0x40
};

class CPlatTrigger : public CBaseEntity
{
public:
	CPlatTrigger() : CBaseEntity(0) {}
	void *operator new(unsigned int size) { return sub_100aa720(size); }	// the entities' operator new (stub 0x1000db89)
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc175(CBaseEntity *pOther);	// slot 175 "CPlatTrigger::Touch": for a living entity with an edict, a platform at the bottom (state 1) is sent up (slot 242), one at the top (state 0) gets its move done time pushed back by one second
	void sub_10159310(CFuncPlat *pPlatform);	// stub 0x1000b9f6: the trigger's setup for the platform (stores m_pPlatform)

	char m_pad03e0[0x450 - 0x3e0];	// the rest of CBaseEntity
	CFuncPlat *m_pPlatform;	// 0x450
public:
	int vfunc117();
};
