// CHudHistoryResource: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CHudElement.h"

class CHudHistoryResource : public CHudElement
{
public:
	bool sub_100f0430();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CHudHistoryResource's own function
	virtual void vfunc1();
	virtual void vfunc5(int);
	virtual void vfunc7();
	virtual bool vfunc9();
};
