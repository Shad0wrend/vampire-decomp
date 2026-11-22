// vgui2::EditablePanel: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Panel.h"

namespace vgui2
{
class EditablePanel : public vgui2::Panel
{
public:
	virtual ~EditablePanel();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with EditablePanel's own function
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc17();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc72();
	virtual void vfunc75();
	virtual void vfunc80();
	virtual void vfunc97();
	virtual void vfunc102();
	virtual void vfunc105();
	// the slots EditablePanel adds to its base's vtable: 107-117, vfuncK at slot K
	virtual void vfunc107();
	virtual void vfunc108();
	virtual void vfunc109();
	virtual void vfunc110();
	virtual void vfunc111();
	virtual void vfunc112();
	virtual void vfunc113();
	virtual void vfunc114();
	virtual void vfunc115();
	virtual void vfunc116();
	virtual void vfunc117();
};
}
