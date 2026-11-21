// IRestore: abstract base of CRestore (RTTI .?AVIRestore@@, vtable 0x104626bc, 35 slots, all pure but the last).
// Slots 4..33 are declared as CRestore declares them.
#pragma once

class CBaseEntity;
struct typedescription_t;
class Vector;

class IRestore
{
public:
	IRestore() {}
	virtual void vfunc0() = 0;
	virtual void vfunc1() = 0;
	virtual int vfunc2(CBaseEntity *pEnt, int map) = 0;
	virtual int vfunc3(int a, int b, int c, int d, int e);
	virtual void vfunc4(void *pBaseData, typedescription_t *pFields, int fieldCount) = 0;
	virtual void vfunc5() = 0;
	virtual void vfunc6(void *pData) = 0;
	virtual void vfunc7(unsigned short *pValue) = 0;
	virtual void vfunc8() = 0;
	virtual void vfunc9(unsigned short *pValue) = 0;
	virtual int vfunc10() = 0;
	virtual const char *vfunc11(int token) = 0;
	virtual unsigned int vfunc12(int a, int b, int c) = 0;
	virtual short vfunc13() = 0;
	virtual int vfunc14() = 0;
	virtual int vfunc15(int *pValues, int count, int nBytesAvailable) = 0;
	virtual void s16() = 0;
	virtual int vfunc17(void *p, int count, int nBytesAvailable) = 0;
	virtual int vfunc18(float *pValues, int count, int nBytesAvailable) = 0;
	virtual int vfunc19(void *p, int count, int nBytesAvailable) = 0;
	virtual int vfunc20(int *pValues, int count, int nBytesAvailable) = 0;
	virtual void vfunc21(char *pDest, int n, int a) = 0;
	virtual int vfunc22(Vector *pValues, int count, int nBytesAvailable) = 0;
	virtual int vfunc23(int) = 0;
	virtual int vfunc24(float *pValues, int count, int nBytesAvailable) = 0;
	virtual int vfunc25(Vector *pValues, int count, int nBytesAvailable) = 0;
	virtual void s26() = 0;
	virtual int vfunc27(void *pBase, int *pValues, int count, int nBytesAvailable) = 0;
	virtual int vfunc28(CBaseEntity **pValues, int count, int nBytesAvailable) = 0;
	virtual int vfunc29(int *pValues, int count, int nBytesAvailable) = 0;
	virtual int vfunc30(unsigned int *pValues, int count, int nBytesAvailable) = 0;
	virtual int vfunc31(int *pValues, int count, int nBytesAvailable) = 0;
	virtual bool vfunc32() = 0;
	virtual int vfunc33() = 0;
	virtual void *vfunc34(unsigned char bFree);	// slot 34, the scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
