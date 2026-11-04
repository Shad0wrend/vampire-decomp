#pragma once
#include "CBaseNetworkable.h"

struct CUnknown10146790;

class CServerNetworkProperty {
public:
	virtual int vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual int vfunc4();
	virtual const char *vfunc5();
	virtual void vfunc6();
	virtual int vfunc7();	// refreshes the edict state when flagged changed (0x10000), returns the edict pointer at +0x80
	virtual void vfunc8(const int *pBox);	// asks the outer entity (slot 86, +4) and the object at +8 (slot 1) about the four dwords; when the answer holds, tells the outer entity (slot 87)
	virtual void vfunc9();
	virtual int vfunc10();
	virtual void vfunc11();
	virtual int vfunc12();
	virtual int vfunc13();
	virtual CServerNetworkProperty *vfunc14(unsigned int flags);
	void *m_pOuter;
	char m_pad8[4];
	CBaseNetworkableEdict_t *m_pEdict;	// 0xc
	char m_unk10[4];
	void sub_10004246();	// as in CDataObjectAccessSystem (transplant)
	void sub_101ab5c0(void *pEdict);	// "CServerNetworkProperty::AttachEdict" (called through the stub at 0x100015eb): takes the engine's edict for the entity
	CServerNetworkProperty *sub_101ab3d0();	// constructor body (0x101ab3d0): the IServerNetworkable vtable, the object at +0x10 constructed, the CServerNetworkProperty vtable, then sub_101ab590(0)
	void sub_101ab550();	// destructor body (0x101ab550): the vtable set, the outer object (+0x8) released through 0x10003828 when set, then the base's body (sub_101ab610) and the IServerNetworkable vtable
	void sub_101ab610();	// base destructor body of the networkable part (stub 0x1000e769), called directly
};
