// CUnknown102461b0: holds a pointer at +4 to a polymorphic object whose vfunc6 is called with that object's dword at +0x1c; real names not yet known.
#pragma once

class CUnknown102461b0Target
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(int value);

	int m_unk4;
	char pad8[0x14];
	int m_unk1c;
};

class CUnknown102461b0
{
public:
	int m_unk0;
	CUnknown102461b0Target* m_pTarget;

	void sub_102461b0();
};
