// vgui2::Image: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 5 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__IImage.h"

struct Color4b { unsigned char r, g, b, a; };
namespace vgui2
{
class Image : public vgui2::IImage
{
public:
	Image();
struct ImageColor { unsigned char r, g, b, a; ImageColor() { r = 0; g = 0; b = 0; a = 0; } void Init(int x) { r = x; g = x; b = x; a = x; } };
	int m_unk04; int m_unk08; int m_unk0C; int m_unk10;
	ImageColor m_Color;
	bool m_b18;
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots Image adds to its base's vtable: 0-25, vfuncK at slot K
	virtual int vfunc0();
	virtual int vfunc1(int, int);
	virtual int vfunc2(int, int);
	virtual void vfunc3(Color4b c);
	virtual bool vfunc4(char);
	virtual ~Image();
	virtual int vfunc6(int, int);
	virtual int vfunc7();
	virtual int vfunc8(int);
	virtual int vfunc9(int, int);
	virtual int vfunc10();
	virtual void vfunc11(Color4b c);
	virtual void vfunc12(int, int, int, int);
	virtual int vfunc13(int, int, int, int);
	virtual int vfunc14(int, int, int, int);
	virtual void vfunc15();
	virtual int vfunc16();
	virtual int vfunc17();
	virtual void vfunc18(Color4b c);
	virtual int vfunc19(int, int);
	virtual int vfunc20(int, int, int, int);
	virtual int vfunc21();
	virtual int vfunc22(int, int, int);
	virtual int vfunc23(float);
	virtual int vfunc24();
	virtual int vfunc25();
};
}
