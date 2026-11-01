// CPushable (RTTI .?AVCPushable@@): bases CBreakable and CBaseEntity are not modelled yet, so the
// primary vtable slots up to the ones we need are placeholders that keep the slot numbers right.
#pragma once

struct datamap_t;

#include "COutputEvent.h"

class CPushable
{
public:
	CPushable();	// 0x1010f130: the CBaseEntity constructor body, the handle at +0x458 = -1, the two outputs, the vftable and the push defaults
	void sub_1009d980(char bAddAsDefault);	// "CBaseEntity::CBaseEntity" body (stub 0x100090fc), called first by the constructor
	void vfunc103();	// slot 103 "CPushable::Spawn", declared as a plain member: CBreakable::vfunc103 for flag bit 7 of the spawn flags, else sets bit 13 of the flags at +0x4c, Precache (slot 104), SetSolid(6) (inlined scope trace), SetMoveType(8, 0), SetModel(the model name from slot 9) and slot 223
	bool vfunc223();	// slot 223 (plain member): VPhysicsInitNormal(6, 0, 0, 0), then hands the physics object at +0x36c the values at +0x49c and +0x4a0 / +0x4a4
	char m_pad[0x36c - 4];
	void *m_pObj36c;	// 0x36c: physics object
	char m_pad0370[0x458 - 0x370];
	int m_n458;	// 0x458: a handle, -1 when unset
	char m_pad045c[0x46c - 0x45c];
	COutputEvent m_Out46c;	// 0x46c
	COutputEvent m_Out484;	// 0x484
	int m_field49c;
	int m_field4a0;
	int m_field4a4;
	int m_field4a8;
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPushable *vfunc5(unsigned int flags);
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual int vfunc35(int a);
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual bool vfunc73(int);
	virtual bool vfunc74(int);
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	virtual Datamap82 vfunc82();
};
