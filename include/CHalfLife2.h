// CHalfLife2 (RTTI .?AVCHalfLife2@@, bases CSingleplayRules -> CGameRules, primary vtable 0x104a308c with 79 slots);
// only what recovered code needs. The bases are not linked in yet, so slot 58 is declared as the class's first virtual.
#pragma once

class CGameRules;

class CHalfLife2
{
public:
	CGameRules *vfunc0(unsigned int flags);	// scalar deleting destructor: the half life 2 rules' vftable (vt_1047a40c), the base destructor (sub_1000d189), then delete when flags & 1
public:
	class CUnknown10427700 *m_pAmmoDef;	// 0x04: the ammo definitions (created by vfunc56)
	virtual void vfunc0_slot();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
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
	virtual int vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35(int);
	virtual void vfunc36(int);
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual bool vfunc41(int, int);
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
	virtual const char *vfunc58(int classify);	// "ClassifyText": the "CLASS_..." name of a classification id (0..0x19), "MISSING CLASS in ClassifyText()" otherwise

	CHalfLife2 *sub_10355740();	// constructor body: base ctor (0x101abbf0) then the vftable
	void vfunc77();	// slot 77: calls slot 0 of the object the global at 0x109eed4c is reached through
};
