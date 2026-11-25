// C_BaseGrenade: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseCombatCharacter.h"

class C_BaseGrenade : public C_BaseCombatCharacter
{
public:
	C_BaseGrenade();
	virtual ~C_BaseGrenade();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_BaseGrenade's own function
	virtual int vfunc15();
	virtual int vfunc16();
	virtual int vfunc17();
	virtual void vfunc21();
	// the slots C_BaseGrenade adds to its base's vtable: 149-160, vfuncK at slot K
	virtual void vfunc149(int, int);
	virtual void vfunc150();
	virtual void vfunc151();
	virtual int vfunc152();
	virtual int vfunc153(int);
	virtual float vfunc154();
	virtual float vfunc155();
	virtual bool vfunc156(int);
	virtual float vfunc157();
	virtual float vfunc158();
	virtual int vfunc159(int);
	virtual int vfunc160(int);
	void sub_1007efb0();
	char m_pad0014[0x10f8 - 0x14];
};
