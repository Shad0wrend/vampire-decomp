// CDataObjectAccessSystem (RTTI .?AVCDataObjectAccessSystem@@): table of 32 data object pointers at +8.
// Only what decompiled code needs is declared.
#pragma once

class CDataObjectAccessSystem
{
public:
	virtual void vfunc0();

	int m_pad0004;
	void *m_data[32];

	void sub_1003c9f0(int index, void *pData);
};
