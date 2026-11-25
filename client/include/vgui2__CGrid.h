// vgui2::CGrid: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Panel.h"

namespace vgui2
{
class CGrid : public vgui2::Panel
{
public:
	virtual ~CGrid();
	bool sub_10166730(int xx, int yy);
	void sub_10166820();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CGrid's own function
	virtual void vfunc97();
	virtual void vfunc98();
	void *sub_10166d90(int x, int y);
	int sub_101669e0(int x);
	void *sub_10166a50(int i);
	void sub_10166960(int i, void *v);
	void sub_10166ac0();
	bool sub_10166e60(int, int, int *, int *);
};
}
