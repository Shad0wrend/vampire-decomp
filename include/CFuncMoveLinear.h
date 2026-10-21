// CFuncMoveLinear (RTTI .?AVCFuncMoveLinear@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right.
#pragma once

#include "Vector.h"

struct inputdata_t;

class CFuncMoveLinear
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38(); virtual void vfunc39();
	virtual void vfunc40(); virtual void vfunc41(); virtual void vfunc42(); virtual void vfunc43(); virtual void vfunc44();
	virtual void vfunc45(); virtual void vfunc46(); virtual void vfunc47(); virtual void vfunc48(); virtual void vfunc49();
	virtual void vfunc50(); virtual void vfunc51(); virtual void vfunc52(); virtual void vfunc53(); virtual void vfunc54();
	virtual void vfunc55(); virtual void vfunc56(); virtual void vfunc57(); virtual void vfunc58(); virtual void vfunc59();
	virtual void vfunc60(); virtual void vfunc61(); virtual void vfunc62(); virtual void vfunc63(); virtual void vfunc64();
	virtual void vfunc65(); virtual void vfunc66(); virtual void vfunc67(); virtual void vfunc68(); virtual void vfunc69();
	virtual void vfunc70(); virtual void vfunc71(); virtual void vfunc72(); virtual void vfunc73(); virtual void vfunc74();
	virtual void vfunc75(); virtual void vfunc76(); virtual void vfunc77(); virtual void vfunc78(); virtual void vfunc79();
	virtual void vfunc80(); virtual void vfunc81(); virtual void vfunc82(); virtual void vfunc83(); virtual void vfunc84();
	virtual void vfunc85(); virtual void vfunc86(); virtual void vfunc87(); virtual void vfunc88(); virtual void vfunc89();
	virtual void vfunc90(); virtual void vfunc91(); virtual void vfunc92(); virtual void vfunc93(); virtual void vfunc94();
	virtual void vfunc95(); virtual void vfunc96(); virtual void vfunc97(); virtual void vfunc98(); virtual void vfunc99();
	virtual void vfunc100(); virtual void vfunc101(); virtual void vfunc102(); virtual void vfunc103(); virtual void vfunc104();

	// Slot 223, declared as a plain member.
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	void sub_10116570(Vector vecPosition, float flSpeed);	// "CFuncMoveLinear::MoveTo" (stub 0x1000c7c5): starts the movement towards vecPosition at flSpeed
	void sub_101171a0(inputdata_t &inputdata);	// "CFuncMoveLinear::InputOpen"-like: moves to the position at +0x514 at the speed at +0x164 unless the local origin (slot 220) is already there
	void sub_10117230(inputdata_t &inputdata);	// "CFuncMoveLinear::InputClose"-like: the same for the position at +0x508

	char m_pad0004[0x164 - 4];
	float m_flSpeed;	// 0x164
	char m_pad0168[0x508 - 0x168];
	Vector m_vecPosition1;	// 0x508
	Vector m_vecPosition2;	// 0x514
	char m_pad0520[0x55c - 0x520];
	const char *m_str55c;
	const char *m_str560;
	int m_field564;
	const char *m_str568;
};
