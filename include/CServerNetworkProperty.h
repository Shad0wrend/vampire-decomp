#pragma once

struct CUnknown10146790;

class CServerNetworkProperty {
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
	virtual void vfunc12();
	virtual void vfunc13();
	virtual CServerNetworkProperty *vfunc14(unsigned int flags);
	void *m_pOuter;
	char m_pad8[8];
	char m_unk10[4];
	void sub_10004246();	// as in CDataObjectAccessSystem (transplant)
	void sub_101ab5c0(void *pEdict);	// "CServerNetworkProperty::AttachEdict" (called through the stub at 0x100015eb): takes the engine's edict for the entity
};
