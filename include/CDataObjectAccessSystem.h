// CDataObjectAccessSystem (RTTI .?AVCDataObjectAccessSystem@@): table of 32 data object pointers at +8.
// Only what decompiled code needs is declared.
#pragma once

class CDataObjectAccessSystem
{
public:
	virtual bool vfunc0();	// "CDataObjectAccessSystem::Init": registers the touchlink / groundlink / step simulation / model width scale accessors
	virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7();
	virtual CDataObjectAccessSystem *vfunc8(unsigned int flags);	// scalar deleting destructor

	int m_pad0004;
	void *m_data[32];

	void sub_1003c9f0(int index, void *pData);
	void AddDataAccessor(int index, void *pData);	// scope-traced "if the slot is empty, store pData"
	void sub_1000cfbd();	// destructor body
	CDataObjectAccessSystem *sub_103499d0(unsigned int flags);	// provisional, like vfunc8 (transplant)
	void sub_1000ebbf();	// provisional, like sub_1000cfbd (transplant)
};
