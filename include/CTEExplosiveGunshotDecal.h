// CTEExplosiveGunshotDecal: explosive gunshot decal temp entity, derived from CTEGunshotDecal (RTTI); the free
// "create" function (0x10064df0) fills the base's fields.
#pragma once

#include "CTEGunshotDecal.h"

class CTEExplosiveGunshotDecal : public CTEGunshotDecal
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEExplosiveGunshotDecal();	// function 0x10064aa0: the vtable, then the base's destructor body
#endif
	CTEExplosiveGunshotDecal(const char *name);	// 0x10064a40: the CTEGunshotDecal constructor, then the vtable
	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
	virtual CTEGunshotDecal *vfunc2(unsigned int flags);	// scalar deleting destructor: the base's type (VC6 has no covariant returns)
	virtual void vfunc4(CRecipientFilter &filter, float delay);	// slot 4 "Create" (stub 0x10004197); slot 3 is the base's
	void vfunc4(void *pFilter, int delay);	// the same slot 4 function, called directly (stub 0x10004197)
	virtual void vfunc5();

	void sub_10010f0a();	// destructor body
};
