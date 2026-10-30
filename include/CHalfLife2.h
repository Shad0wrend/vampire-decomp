// CHalfLife2 (RTTI .?AVCHalfLife2@@, bases CSingleplayRules -> CGameRules, primary vtable 0x104a308c with 79 slots);
// only what recovered code needs. The bases are not linked in yet, so slot 58 is declared as the class's first virtual.
#pragma once

class CGameRules;

class CHalfLife2
{
public:
	virtual const char *vfunc58(int classify);	// "ClassifyText": the "CLASS_..." name of a classification id (0..0x19), "MISSING CLASS in ClassifyText()" otherwise
	CGameRules *vfunc0(unsigned int flags);	// scalar deleting destructor: the half life 2 rules' vftable (vt_1047a40c), the base destructor (sub_1000d189), then delete when flags & 1
public:
	virtual void vfunc57();
public:
	virtual void vfunc35(int);
public:
	virtual void vfunc36(int);
public:
	virtual bool vfunc41(int, int);
public:
	virtual int vfunc25();
};
