// CUtlVectorDataOps<VEC,N>: save/restore ops used by DEFINE_UTLVECTOR fields (bases CDefSaveRestoreOps -> ISaveRestoreOps
// are not modelled). Only the 5 vtable slots are declared; slot 0 is Save, slot 1 Restore.
#pragma once
#include "ISaveRestoreOps.h"

template <class T> class CUtlMemory;
template <class T, class M> class CUtlVector;

template <class VEC, int N>
class CUtlVectorDataOps : public CDefSaveRestoreOps
{
public:
	CUtlVectorDataOps() {}
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// Save(SaveRestoreFieldInfo_t &, ISave *)
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);	// Restore(SaveRestoreFieldInfo_t &, IRestore *)
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);	// IsEmpty: the size (+0xc) of the vector the field points to is zero
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);	// MakeEmpty: zeroes the size (+0xc) of the vector the field points to
};
