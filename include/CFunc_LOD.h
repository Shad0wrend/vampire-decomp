// CFunc_LOD (RTTI .?AVCFunc_LOD@@): func_lod entity. Declared flat on top of the stub entity base from CConstraintAnchor.h.
#pragma once
#include "CConstraintAnchor.h"

class CFunc_LOD : public CConstraintAnchorBase
{
public:
	CFunc_LOD();
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CConstraintAnchor *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void s107(); virtual void s108(); virtual void s109();
	virtual bool vfunc110(const char *key, const char *value);	// "CFunc_LOD::KeyValue": "Solid" with a non-zero value adds solid flag 4 (inlined AddSolidFlags), else CBaseEntity::KeyValue
};
