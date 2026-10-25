// CUnknown10136600: the object whose +0x40 pointer is detached and released by the function at 0x10136600.
#pragma once

class CUnknown10136600Obj
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3();
	virtual int vfunc4();	// slot 4: returns the handle the holder releases
};

class CUnknown10136600
{
public:
	char m_pad0000[0x40];
	CUnknown10136600Obj *m_p40;	// 0x0040
	char m_b44;	// 0x0044
};
