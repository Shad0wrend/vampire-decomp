// CBaseButton: the func_button family of entities.
// CBaseButton : CBaseToggle (the game's RTTI). Of CBaseEntity's slots 0..133 it declares the ones whose game word
// differs from CBaseToggle's vtable (0x1047c764); slots 134..240 are its new virtuals (placeholders keep the slot
// indices of the game's primary vtable 0x1045293c).
#pragma once

struct datamap_t;

#include "Vector.h"
#include "COutputEvent.h"
#include "CBaseToggle.h"

class CBaseEntity;

class CBaseButton : public CBaseToggle
{
public:
	CBaseButton();
	CBaseButton *sub_100c86d0();	// constructor stub (0x100c86d0 -> CBaseButton::CBaseButton)

	void sub_1000cb8a();	// destructor body (the CBaseToggle/CBaseEntity part)
	void sub_100c97c0();	// \"ButtonReturn\"-like: state 3, fires the output at +0x5a8 for the activator (when flag 0x1 is set), plays the sound table entry 0x106e6f7c unless bit 13 of the flags is set, think function sub_100c98e0, then moves to position 1 (linear) or angle 1 (rotating, byte +0x55d) at the speed at +0x164
	void sub_100c98e0();	// the think function set by sub_100c97c0 (stub 0x10009764)
	void sub_100c9560();	// the button is pressed: plays the sound table entry 0x106e6f78 unless bit 13 of the flags is set, fires the output at +0x590 for the activator (when flag 0x1 is set), state 2, think function sub_100c96a0 and moves to position 2 (linear) or angle 2 (rotating, byte +0x55d); nothing while the byte at +0x5c4 is set
	void sub_100c96a0();	// the think function set by sub_100c9560 (stub 0x10008f30)
	void sub_100c9250(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// \"CBaseButton::ButtonUse\"-like: unless locked / moving (state 2 or 3) or the byte at +0x5c4 is set and the use filter passes the activator (sub_100a7bd0): remembers the activator handle at +0x53c; in state 0 (flag 0x20 set) fires the output at +0x578 and presses (sub_100c97c0), in any other state fires it and calls sub_100c9560
	void sub_100c8a20(CBaseEntity *pOther);	// \"CBaseButton::ButtonTouch\"-like: unless moving (state 2 or 3) or the byte at +0x5c4 is set and the use filter passes the stored activator (+0x53c): clears the touch function at +0x1ec, fires the output at +0x578 for the activator; state 0 -> sub_100c97c0, else sub_100c9560
	void sub_100c9430(CBaseEntity *pOther);	// the touch function variant for a toucher that has the field at +0xa8 (or, with the byte at +0x5c5 set, bit 2 of the flags at +0x4c): remembers its handle as the activator (+0x53c), then like sub_100c8a20 without the use filter, using the state from sub_100c93b0
	int sub_100c93b0();
	void sub_100c9190();	// think function set by Spawn (stub 0x1000fca9)	// the button's current state (stub 0x10008aa8), called directly
	int vfunc142(void *pInfo);	// slot 142 \"CBaseButton::OnTakeDamage\": fires the damage output (+0x560) for the activator; for a damageable button (flag 0x200 at +0x204 or health at +0x210) in a usable state takes the attacker (the entity at +0x2c of the damage info) as the new activator and presses it like sub_100c9430; always 0

	bool sub_100a7bd0(CBaseEntity *pActivator);	// CBaseEntity::PassesUseFilter (stub 0x10001032), called directly

	char m_pad04a4[0x4f8 - sizeof(CBaseToggle)];	// 0x4a4
	int m_nState4f8;	// 0x4f8
	char m_pad04fc[0x500 - 0x4fc];
	float m_flWait500;	// 0x500
	float m_flLip504;
	Vector m_vec508;	// 0x508
	Vector m_vec514;	// 0x514
	Vector m_vec520;	// 0x520
	Vector m_vec52c;	// 0x52c
	char m_pad0538[0x53c - 0x538];
	unsigned int m_hActivator53c;	// 0x53c: entity handle of the activator
	char m_pad0540[0x55c - 0x540];
	char m_b55c;	// 0x55c
	char m_b55d;	// 0x55d
	char m_pad055e[0x560 - 0x55e];
	COutputEvent m_Output560;	// 0x560
	COutputEvent m_Output578;	// 0x578
	COutputEvent m_Output590;	// 0x590
	COutputEvent m_Output5a8;	// 0x5a8
	int m_n5c0;	// 0x5c0
	char m_b5c4;	// 0x5c4
	char m_b5c5;	// 0x5c5
	char m_pad05c6[0x5c8 - 0x5c6];
	int m_n5c8;	// 0x5c8
	int m_n5cc;	// 0x5cc
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual int vfunc34(int a);	// slot 34 (0x100c8990): vfunc35(a) != 0
	virtual int vfunc35(int a);
	virtual void vfunc71();
	virtual datamap_t * vfunc82();
	virtual void vfunc103();
	virtual void vfunc104();
	virtual bool vfunc110(char const *, char const *);
	virtual int vfunc117();
	virtual bool vfunc128();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140();
	virtual void vfunc141();
	virtual void vfunc142_slot();
	virtual void vfunc143();
	virtual void vfunc144();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153();
	virtual void vfunc154();
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
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174();
	virtual void vfunc175();
	virtual void vfunc176();
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
	virtual void vfunc189();
	virtual void vfunc190();
	virtual void vfunc191();
	virtual void vfunc192();
	virtual void vfunc193();
	virtual void vfunc194();
	virtual void vfunc195();
	virtual void vfunc196();
	virtual void vfunc197();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201();
	virtual void vfunc202();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207();
	virtual void vfunc208();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212();
	virtual void vfunc213();
	virtual float *vfunc214();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217();
	virtual void vfunc218();
	virtual void vfunc219();
	virtual float *vfunc220();
	virtual void vfunc221();
	virtual void vfunc222();
	virtual bool vfunc223();
};
