// CPhysPulley: pulley constraint entity. Declared flat (bases not recovered).
#pragma once

struct datamap_t;

#include "Vector.h"
#include "CPhysConstraint.h"

class CPhysPulley
{
public:

	void sub_100121ac();	// destructor body
	void vfunc123();	// slot 123 (plain member) "DrawDebugGeometryOverlays": with one of the debug overlay bits 0x2c (+0x224) set, takes the origin (slot 217), transforms the two attached physics objects' matrices (slot 5 / 6 of the constraint object at +0x450, slot 38 fills the matrix) with the origin into +0x494 / +0x4a0, draws three green lines origin -> +0x488 (m_vecMid) -> ..., then CBaseEntity::vfunc123
	void sub_100a0130();	// CBaseEntity::vfunc123 (stub 0x10005880), called directly

	char m_pad0000[0x224];
	unsigned char m_debugOverlays224;	// 0x224
	char m_pad0225[0x450 - 0x225];
	CPhysConstraintObj *m_pConstraint450;	// 0x450: the physics constraint object (slots 5 / 6 = the two attached physics objects)
	char m_pad0454[0x488 - 0x454];
	Vector m_vecPos488;	// 0x488
	Vector m_vecObj1494;	// 0x494: transformed position of the first attached object
	Vector m_vecObj24a0;	// 0x4a0: transformed position of the second attached object
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysPulley *vfunc5(unsigned int flags);	// scalar deleting destructor
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
	virtual void vfunc35();
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
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	virtual datamap_t * vfunc82();
};
