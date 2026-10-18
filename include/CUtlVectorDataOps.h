// CUtlVectorDataOps<VEC,N>: save/restore ops used by DEFINE_UTLVECTOR fields (bases CDefSaveRestoreOps -> ISaveRestoreOps
// are not modelled). Only the 5 vtable slots are declared; slot 0 is the (scalar deleting) destructor.
#pragma once

template <class T> class CUtlMemory;
template <class T, class M> class CUtlVector;

template <class VEC, int N>
class CUtlVectorDataOps
{
public:
	CUtlVectorDataOps() {}
	virtual ~CUtlVectorDataOps() {}
	virtual void vfunc1();
	virtual void vfunc2();
	virtual int vfunc3(void *pFieldData);	// MakeEmpty: zeroes the size (+0xc) of the vector the field points to
	virtual void vfunc4();
};
