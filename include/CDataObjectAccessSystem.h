// CDataObjectAccessSystem (RTTI .?AVCDataObjectAccessSystem@@): table of 32 data object pointers at +8.
// Only what decompiled code needs is declared.
#pragma once

class CDataObjectAccessSystem
{
public:
	virtual void vfunc0();
	virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7();
	virtual CDataObjectAccessSystem *vfunc8(unsigned int flags);	// scalar deleting destructor

	int m_pad0004;
	void *m_data[32];

	void sub_1003c9f0(int index, void *pData);
	void sub_1000cfbd();	// destructor body
};
