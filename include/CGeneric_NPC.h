// CGeneric_NPC: generic NPC (derived from CAI_BaseNPCTroika at +0x0).
#pragma once
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"

#include "CAI_BaseNPCTroika.h"

class CGeneric_NPC : public CAI_BaseNPCTroika
{
public:
	CGeneric_NPC *vfunc5(int flags);	// slot 5 (plain overload of the base slot; VC6 has no covariant returns): sub_100123af (destructor body, stub 0x100123af), then sub_100aa7b0(this) when flags & 1; returns this
	void sub_100123af();	// the destructor body (stub 0x100123af -> 0x1028d610), called directly
	CGeneric_NPC *sub_10359ec0();	// constructor: CAI_BaseNPCTroika's constructor, the member at +0x665c's constructor (sub_10002937), then the vtables at +0x0 and +0x19b0
	virtual float vfunc516();	// float constant picked by the state at +0xfec (0x13, 0x3b..0x3c, other)
	virtual void vfunc104();	// slot 104 "CGeneric_NPC::Precache": when the model name (slot 9) is empty sets the default model, precaches the model and the sounds, then CAI_BaseNPCTroika::vfunc104
	void sub_100097b4();	// CAI_BaseNPCTroika::vfunc104, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	virtual void vfunc144(int a);	// slot 144: CAI_BaseNPCTroika::vfunc144(a), then lifts the NPC 3 units above its slot 220 position and restarts the effect timer (MarkEffectStartTime(0))
	void sub_1000a62d(int a);	// CAI_BaseNPCTroika::vfunc144 (stub 0x1000a62d), called directly
	void sub_10003472(float delay);	// CBaseAnimating::MarkEffectStartTime (stub 0x10003472), called directly
	virtual void vfunc103();	// slot 103 "CGeneric_NPC::Spawn": slot 104, the model name from slot 9 (default when empty) through slot 105, clears the fields at +0x1568 / +0x156c, solid type 2 (inlined SetSolid scope trace), move type 4, +0x1570 = 0xf7, +0x19c = 0, health from the global cvar object at 0x1093a1f4 (0 while its slot 1 holds), +0x1574 = 0.2f, +0x5cc0 = 0, three flag setters (1, 0x200000, 0x800000), then slot 420
	virtual void vfunc495();	// slot 495: plays a random sound from the table at 0x10629a1c to the PAS around the NPC (reliable)
	virtual void vfunc489();	// slot 489: plays a random sound from the table at 0x10629a18 to the PAS around the NPC (reliable), like slot 495
	virtual void vfunc488();	// slot 488: like slot 489 with the table at 0x10629a20 and volume 0.5
	virtual void vfunc491();	// slot 491: like slot 489 with the table at 0x10629a28 (random 0..3, channel 2)
public:
    virtual CAI_CondOwner * vfunc580();
    virtual const char * vfunc451();
public:
	virtual void vfunc434();
	virtual int vfunc473();	// slot 473: 0x19 when the state at +0x5cc0 is 1, else 0x17
};
