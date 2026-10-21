// CPushable (RTTI .?AVCPushable@@): bases CBreakable and CBaseEntity are not modelled yet, so the
// primary vtable slots up to the ones we need are placeholders that keep the slot numbers right.
#pragma once

class CPushable
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual CPushable *vfunc5(unsigned int flags); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual int vfunc35(int a);
	void vfunc103();	// slot 103 "CPushable::Spawn", declared as a plain member: CBreakable::vfunc103 for flag bit 7 of the spawn flags, else sets bit 13 of the flags at +0x4c, Precache (slot 104), SetSolid(6) (inlined scope trace), SetMoveType(8, 0), SetModel(the model name from slot 9) and slot 223
	char m_pad[0x4a8 - 4];
	int m_field4a8;
};
