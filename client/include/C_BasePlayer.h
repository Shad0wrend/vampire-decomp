// C_BasePlayer: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills on the entity chain (vtable-slot layer, 2026-11-22)
// the destructor is slot 8 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "C_BaseVCombatCharacter.h"

class C_BasePlayer : public C_BaseVCombatCharacter
{
public:
	virtual ~C_BasePlayer();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with C_BasePlayer's own function
	virtual int vfunc15();
	virtual int vfunc16();
	virtual int vfunc17();
	virtual void vfunc19();
	virtual void vfunc37();
	virtual int vfunc62();
	virtual void vfunc73();
	virtual bool vfunc74();
	virtual int vfunc84();
	virtual int vfunc86();
	virtual bool vfunc94();
	virtual int vfunc107(int);
	virtual int vfunc108();
	virtual char * vfunc109();
	virtual void vfunc119(int);
	virtual void vfunc147();
	// the slots C_BasePlayer adds to its base's vtable: 149-196, vfuncK at slot K
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151(int, int, int, int, int, int, int, int, int, int, int);
	virtual void vfunc152();
	virtual void vfunc153();
	virtual void vfunc154(int);
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161();
	virtual void vfunc162();
	virtual void vfunc163();
	virtual void vfunc164();
	virtual void vfunc165();
	virtual void vfunc166();
	virtual void vfunc167();
	virtual void vfunc168();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual int vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174();
	virtual int vfunc175(int, int);
	virtual float vfunc176();
	virtual void vfunc177();
	virtual void vfunc178();
	virtual void vfunc179();
	virtual void vfunc180();
	virtual void vfunc181();
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185();
	virtual void vfunc186();
	virtual void vfunc187();
	virtual void vfunc188();
	virtual void vfunc189(int);
	virtual void vfunc190();
	virtual void vfunc191();
	virtual void vfunc192();
	virtual void vfunc193();
	virtual void vfunc194();
	virtual char * vfunc195();
	virtual int vfunc196(int, int, int);
};
