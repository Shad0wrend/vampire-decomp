// class ISave (RTTI .?AVISave@@), abstract base of CSave, vtable 0x104625f4 (all slots pure).
#pragma once
#include "Vector.h"

class ISave
{
public:
	ISave() {}
	virtual int vfunc0() = 0;
	virtual void vfunc1(int pos) = 0;
	virtual void vfunc2(void *pBlock, const char *pszName) = 0;
	virtual int vfunc3(int a, int b, int c, int d, int e) = 0;
	virtual void vfunc4() = 0;
	virtual void vfunc5(const void *p) = 0;
	virtual void vfunc6() = 0;
	virtual void vfunc7(int a, int b, int count) = 0;
	virtual bool vfunc8(const void *pData, int nBytes) = 0;
	virtual void vfunc9(const char *pszName, void *pData, int count) = 0;
	virtual bool vfunc10(const void *pData, int nBytes) = 0;
	virtual int vfunc11(int, int, int) = 0;
	virtual void vfunc12(const void *pData, int count) = 0;
	virtual void vfunc13(const char *pszName, void *pData, int count) = 0;
	virtual bool vfunc14(const void *pData, int nBytes) = 0;
	virtual void vfunc15(int a, int b, int c) = 0;
	virtual void vfunc16(const void *pData, int nBytes) = 0;
	virtual void vfunc17(const char *pszName, void *pData, int count) = 0;
	virtual void vfunc18(int a, const char *psz) = 0;
	virtual void vfunc19(const char **ppStrings, int count) = 0;
	virtual void vfunc20(const char *pString) = 0;
	virtual void vfunc21(const char *pszName, const void *pData, int count) = 0;
	virtual void vfunc22(const char *pszName, const Vector &value) = 0;
	virtual void vfunc23(const void *pData, int count) = 0;
	virtual void vfunc24(const Vector &value) = 0;
	virtual void vfunc25(const float *pValues, int count) = 0;
	virtual void vfunc26(const char *pszName, void *pData, int count) = 0;
	virtual void vfunc27(const Vector *pValues, int count) = 0;
	virtual void vfunc28(const Vector &value) = 0;
	virtual void vfunc29(const char *pszName, void *pData, int count) = 0;
	virtual void vfunc30(const char *pszName, const Vector &value) = 0;
	virtual void vfunc31(void *pBase, const char *pszName, void *pData, int count) = 0;
	virtual void vfunc32(const int *pHandles, int count) = 0;
	virtual void vfunc33(const char *pszName, void *pData, int count) = 0;
	virtual void vfunc34(struct CSaveEdict *const *pEdicts, int count) = 0;
	virtual void vfunc35(const char *pszName, void *pData, int count) = 0;
	virtual void vfunc36(const void *pData, int count) = 0;
	virtual void vfunc37(const char *pszName, void *pData, int count) = 0;
	virtual int vfunc38() = 0;
	virtual ~ISave() {}
	void *vfunc39(unsigned char bFree);	// scalar deleting destructor: stores the game vftable, deletes when bit 0 is set
};
