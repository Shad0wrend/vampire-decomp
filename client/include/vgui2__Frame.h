// vgui2::Frame: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__EditablePanel.h"

namespace vgui2
{
class Frame : public vgui2::EditablePanel
{
public:
	virtual ~Frame();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with Frame's own function
	virtual void vfunc10(int);
	virtual void vfunc21();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc78(int);
	virtual void vfunc87(int);
	virtual void vfunc91(int);
	virtual void vfunc92();
	virtual void vfunc93(int);
	virtual void vfunc94(int);
	virtual void vfunc95();
	virtual void vfunc97();
	virtual void vfunc101();
	virtual int vfunc102();
	virtual void vfunc107();
	// the slots Frame adds to its base's vtable: 118-144, vfuncK at slot K
	virtual void vfunc118();
	virtual bool vfunc119(char);
	virtual bool vfunc120();
	virtual void vfunc121();
	virtual bool vfunc122();
	virtual void vfunc123();
	virtual void vfunc124();
	virtual void vfunc125();
	virtual void vfunc126();
	virtual void vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130();
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual int vfunc137(int, int, int, int);
	virtual int vfunc138();
	virtual bool vfunc139();
	virtual bool vfunc140(char);
	virtual int vfunc141(int, int, int, int);
	virtual void vfunc142();
	virtual void vfunc143();
	virtual void vfunc144();
};
}
