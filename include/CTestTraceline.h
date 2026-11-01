// CTestTraceline: test traceline entity. Declared flat (bases not recovered).
#pragma once

struct datamap_t;

class CTestTraceline
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CTestTraceline *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9(); virtual void vfunc10();
	virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14(); virtual void vfunc15();
	virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19(); virtual void vfunc20();
	virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24(); virtual void vfunc25();
	virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29(); virtual void vfunc30();
	virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34(); virtual void vfunc35();
	virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38(); virtual void vfunc39(); virtual void vfunc40();
	virtual void vfunc41(); virtual void vfunc42(); virtual void vfunc43(); virtual void vfunc44(); virtual void vfunc45();
	virtual void vfunc46(); virtual void vfunc47(); virtual void vfunc48(); virtual void vfunc49(); virtual void vfunc50();
	virtual void vfunc51(); virtual void vfunc52(); virtual void vfunc53(); virtual void vfunc54(); virtual void vfunc55();
	virtual void vfunc56(); virtual void vfunc57(); virtual void vfunc58(); virtual void vfunc59(); virtual void vfunc60();
	virtual void vfunc61(); virtual void vfunc62(); virtual void vfunc63(); virtual void vfunc64(); virtual void vfunc65();
	virtual void vfunc66(); virtual void vfunc67(); virtual void vfunc68(); virtual void vfunc69(); virtual void vfunc70();
	virtual void vfunc71(); virtual void vfunc72(); virtual void vfunc73(); virtual void vfunc74(); virtual void vfunc75();
	virtual void vfunc76(); virtual void vfunc77(); virtual void vfunc78(); virtual void vfunc79(); virtual int vfunc80();
	virtual int vfunc81(); virtual datamap_t * vfunc82(); virtual void vfunc83(); virtual void vfunc84(); virtual void vfunc85();
	virtual bool vfunc86(int, int, int, int, int); virtual void vfunc87(); virtual void vfunc88(); virtual void vfunc89(); virtual void vfunc90();
	virtual void vfunc91(); virtual void vfunc92(); virtual void vfunc93(); virtual void vfunc94(); virtual void vfunc95();
	virtual void vfunc96(); virtual void vfunc97(); virtual void vfunc98(); virtual void vfunc99(); virtual void vfunc100();
	virtual void vfunc101(); virtual void vfunc102();
	virtual void vfunc103();	// slot 103: the test entity's spawn: its colour bytes at +0x1a0..0x1a3 = 0xff, the think time curtime + 0.01 at +0x17c, and the think function CTraceSpinEntity::sub_1006bb80 (stub 0x10003f62) set through sub_100ac4e0

	void sub_1000cb8a();	// destructor body
	void sub_100ac4e0(void *pFunc, int a, int b);	// CBaseEntity::sub_100ac4e0 (stub 0x10007fe5): sets a think function
};
