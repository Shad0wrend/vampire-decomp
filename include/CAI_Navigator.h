// class CAI_Navigator (RTTI .?AVCAI_Navigator@@): AI component; the bases are not modelled and only
// the first 21 vtable slots are declared (slots past 20 not yet seen).
// vfunc9/vfunc10 take (int, 4-byte value); the exact type of the second argument is unknown.
#pragma once

struct CAI_Navigator_Arg
{
	int v;
	CAI_Navigator_Arg() {}
	CAI_Navigator_Arg &operator=(const CAI_Navigator_Arg &o) { v = o.v; return *this; }
};

class CAI_Navigator
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8();
	virtual void vfunc9(int a, CAI_Navigator_Arg b);
	virtual void vfunc10(int a, CAI_Navigator_Arg b);
	virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20();
};
