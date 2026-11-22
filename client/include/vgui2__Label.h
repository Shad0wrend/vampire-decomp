// vgui2::Label: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__Panel.h"

namespace vgui2
{
class Label : public vgui2::Panel
{
public:
	virtual ~Label();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with Label's own function
	virtual void vfunc11(int, int);
	virtual void vfunc14();
	virtual int vfunc46(int);
	virtual int vfunc51(int);
	virtual int vfunc53(int);
	virtual int vfunc72(int);
	virtual int vfunc74(int);
	virtual void vfunc75();
	virtual int vfunc76(int);
	virtual int vfunc77();
	virtual void vfunc87(int);
	virtual void vfunc98();
	virtual void vfunc101();
	virtual int vfunc102();
	virtual void vfunc105();
	// the slots Label adds to its base's vtable: 107-137, vfuncK at slot K
	virtual int vfunc107(int);
	virtual int vfunc108(int);
	virtual int vfunc109();
	virtual void vfunc110();
	virtual int vfunc111(int);
	virtual void vfunc112();
	virtual int vfunc113(int);
	virtual int vfunc114(int);
	virtual int vfunc115(int);
	virtual int vfunc116(int);
	virtual void vfunc117();
	virtual void vfunc118();
	virtual int vfunc119();
	virtual short vfunc120(short);
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual void vfunc124();
	virtual void vfunc125();
	virtual int vfunc126();
	virtual int vfunc127();
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130();
	virtual void vfunc131();
	virtual int vfunc132();
	virtual void vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual int vfunc136(int);
	virtual int vfunc137();
};
}
