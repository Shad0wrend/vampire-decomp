// vgui2::Image: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 5 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__IImage.h"

namespace vgui2
{
class Image : public vgui2::IImage
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots Image adds to its base's vtable: 0-25, vfuncK at slot K
	virtual int vfunc0();
	virtual int vfunc1(int, int);
	virtual int vfunc2(int, int);
	virtual void vfunc3();
	virtual bool vfunc4(char);
	virtual ~Image();
	virtual int vfunc6(int, int);
	virtual void vfunc7();
	virtual int vfunc8(int);
	virtual int vfunc9(int, int);
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
};
}
