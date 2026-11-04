// CConstraintAnchor: constraint anchor entity. Declared flat (bases not recovered); the stub base below only
// models the entity base constructor (0x1009d980, takes one int) and the vtable slots up to 106.
#pragma once

class CConstraintAnchor;
struct datamap_t;

class CConstraintAnchorBase
{
public:
	CConstraintAnchorBase(int a);
	void sub_1009d980(int a);	// the shared entity base constructor (0x1009d980) as a plain member
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void s5();
	virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14();
	virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24();
	virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34();
	virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44();
	virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54();
	virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64();
	virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74();
	virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual int vfunc80(); virtual int vfunc81(); virtual datamap_t *vfunc82(); virtual void s83(); virtual void s84();
	virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94();
	virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102();
	virtual void vfunc103();
	virtual void s104();
	virtual void s105();
	virtual void vfunc106(const char *classname);
};

class CConstraintAnchor : public CConstraintAnchorBase
{
public:
	CConstraintAnchor() : CConstraintAnchorBase(0) {}
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CConstraintAnchor *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc103();	// slot 103 (Activate): when the parent (handle at +0x254) resolves, records (its origin, its handle or -1, the name at +0x26c) in the global anchor list and removes this entity

	void sub_1000cb8a();	// destructor body
};
