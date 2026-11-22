// vgui2::Panel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, its operator delete, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__IClientPanel.h"

namespace vgui2
{
class Panel : public vgui2::IClientPanel
{
public:
	static void operator delete(void *pMem);
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots Panel adds to its base's vtable: 0-106, vfuncK at slot K
	virtual int vfunc0();
	virtual void * vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual int vfunc7(int, int, int);
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10(int);
	virtual void vfunc11(int, int);
	virtual void vfunc12();
	virtual void vfunc13(int);
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual int vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual ~Panel();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual bool vfunc25(int, int);
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual int vfunc29(int);
	virtual int vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual bool vfunc39(char);
	virtual bool vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual int vfunc46(int);
	virtual bool vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual int vfunc50(int);
	virtual int vfunc51(int);
	virtual int vfunc52(int);
	virtual int vfunc53(int);
	virtual int vfunc54(int);
	virtual int vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual int vfunc61();
	virtual bool vfunc62(char);
	virtual bool vfunc63(char);
	virtual bool vfunc64(char);
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual int vfunc72(int);
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual int vfunc77();
	virtual void vfunc78(int);
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	virtual void vfunc82();
	virtual void vfunc83();
	virtual void vfunc84(int, int);
	virtual void vfunc85();
	virtual void vfunc86();
	virtual void vfunc87(int);
	virtual void vfunc88(int);
	virtual void vfunc89(int);
	virtual void vfunc90();
	virtual void vfunc91(int);
	virtual void vfunc92();
	virtual void vfunc93(int);
	virtual void vfunc94(int);
	virtual void vfunc95();
	virtual void vfunc96();
	virtual void vfunc97();
	virtual void vfunc98();
	virtual void vfunc99();
	virtual void vfunc100();
	virtual void vfunc101();
	virtual int vfunc102();
	virtual void vfunc103();
	virtual bool vfunc104(char);
	virtual void vfunc105();
	virtual void vfunc106();
};
}
