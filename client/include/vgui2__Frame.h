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
	virtual int vfunc21(int);
	virtual int vfunc74(int);
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
	virtual int vfunc121(char);
	virtual bool vfunc122();
	virtual int vfunc123(float);
	virtual void vfunc124();
	virtual void vfunc125();
	virtual int vfunc126(float);
	virtual int vfunc127(float);
	virtual int vfunc128(float);
	virtual int vfunc129();
	virtual int vfunc130();
	virtual int vfunc131();
	virtual int vfunc132();
	virtual int vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual int vfunc137(int, int, int, int);
	virtual int vfunc138();
	virtual bool vfunc139();
	virtual bool vfunc140(char);
	virtual int vfunc141(int, int, int, int);
	virtual int vfunc142(int);
	virtual void vfunc143();
	virtual void vfunc144();
};
}
