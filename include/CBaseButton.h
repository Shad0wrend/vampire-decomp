// CBaseButton: the func_button family of entities.
// Derives (through CBaseToggle) from CBaseEntity; only the vtable slots that
// decompiled code needs are given their real names, the others are placeholders
// that keep the slot indices of the game's primary vtable (0x1045293c).
#pragma once

struct datamap_t;

#include "Vector.h"
#include "COutputEvent.h"

class CBaseEntity;

// Stand-in for the CBaseToggle / CBaseEntity base chain: owns the vptr, its constructor is CBaseEntity's (0x1000d5ee).
class CBaseButtonBase
{
public:
	CBaseButtonBase();
	virtual void vfunc0();
};

class CBaseButton : public CBaseButtonBase
{
public:
	CBaseButton();
	virtual void vfunc0();

	void sub_1000cb8a();	// destructor body (the CBaseToggle/CBaseEntity part)
	bool sub_100c8990(int a);	// slot 34: vfunc35(a) != 0
	void sub_100c97c0();	// \"ButtonReturn\"-like: state 3, fires the output at +0x5a8 for the activator (when flag 0x1 is set), plays the sound table entry 0x106e6f7c unless bit 13 of the flags is set, think function sub_100c98e0, then moves to position 1 (linear) or angle 1 (rotating, byte +0x55d) at the speed at +0x164
	void sub_100c98e0();	// the think function set by sub_100c97c0 (stub 0x10009764)
	void sub_100c9560();	// the button is pressed: plays the sound table entry 0x106e6f78 unless bit 13 of the flags is set, fires the output at +0x590 for the activator (when flag 0x1 is set), state 2, think function sub_100c96a0 and moves to position 2 (linear) or angle 2 (rotating, byte +0x55d); nothing while the byte at +0x5c4 is set
	void sub_100c96a0();	// the think function set by sub_100c9560 (stub 0x10008f30)
	void sub_100c9250(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// \"CBaseButton::ButtonUse\"-like: unless locked / moving (state 2 or 3) or the byte at +0x5c4 is set and the use filter passes the activator (sub_100a7bd0): remembers the activator handle at +0x53c; in state 0 (flag 0x20 set) fires the output at +0x578 and presses (sub_100c97c0), in any other state fires it and calls sub_100c9560
	void sub_100c8a20(CBaseEntity *pOther);	// \"CBaseButton::ButtonTouch\"-like: unless moving (state 2 or 3) or the byte at +0x5c4 is set and the use filter passes the stored activator (+0x53c): clears the touch function at +0x1ec, fires the output at +0x578 for the activator; state 0 -> sub_100c97c0, else sub_100c9560
	void sub_100c9430(CBaseEntity *pOther);	// the touch function variant for a toucher that has the field at +0xa8 (or, with the byte at +0x5c5 set, bit 2 of the flags at +0x4c): remembers its handle as the activator (+0x53c), then like sub_100c8a20 without the use filter, using the state from sub_100c93b0
	int sub_100c93b0();	// the button's current state (stub 0x10008aa8), called directly
	int vfunc142(void *pInfo);	// slot 142 \"CBaseButton::OnTakeDamage\": fires the damage output (+0x560) for the activator; for a damageable button (flag 0x200 at +0x204 or health at +0x210) in a usable state takes the attacker (the entity at +0x2c of the damage info) as the new activator and presses it like sub_100c9430; always 0

	bool sub_100a7bd0(CBaseEntity *pActivator);	// CBaseEntity::PassesUseFilter (stub 0x10001032), called directly

	char m_pad0004[0xb4 - 4];
	int m_nSoundSet0b4;	// 0xb4: the sound table index of the sound set named by the sound name
	char m_pad00b8[4];
	int m_nField0bc;	// 0xbc
	const char *m_pszSoundName0c0;	// 0xc0
	char m_pad00c4[0x114 - 0xc4];
	void (CBaseButton::*m_pfnThink114)();	// 0x114
	char m_pad0118[0x164 - 0x118];
	float m_flSpeed164;	// 0x164
	char m_pad0168[0x1ec - 0x168];
	void *m_pfnTouch1ec;	// 0x1ec
	char m_pad01f0[0x204 - 0x1f0];
	unsigned int m_flags204;	// 0x204
	char m_pad0208[8];
	int m_nHealth210;	// 0x210
	char m_pad0214[0x4f8 - 0x214];
	int m_nState4f8;	// 0x4f8
	char m_pad04fc[0x508 - 0x4fc];
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
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CBaseButton *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual int vfunc35(int a);
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	virtual datamap_t * vfunc82();
	virtual void vfunc83();
	virtual void vfunc84();
	virtual void vfunc85();
	virtual void vfunc86();
	virtual void vfunc87();
	virtual void vfunc88();
	virtual void vfunc89();
	virtual void vfunc90();
	virtual void vfunc91();
	virtual void vfunc92();
	virtual void vfunc93();
	virtual void vfunc94();
	virtual void vfunc95();
	virtual void vfunc96();
	virtual void vfunc97();
	virtual void vfunc98();
	virtual void vfunc99();
	virtual void vfunc100();
	virtual void vfunc101();
	virtual void vfunc102();
	virtual void vfunc103();
	virtual void vfunc104();
	virtual void vfunc105();
	virtual void vfunc106();
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
	virtual int vfunc117();
	virtual void vfunc118();
	virtual void vfunc119();
	virtual void vfunc120();
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual void vfunc124();
	virtual void vfunc125();
	virtual void vfunc126();
	virtual void vfunc127();
	virtual bool vfunc128();
	virtual void vfunc129();
	virtual void vfunc130();
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133();
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
	virtual void vfunc214();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217();
	virtual void vfunc218();
	virtual void vfunc219();
	virtual void vfunc220();
	virtual void vfunc221();
	virtual void vfunc222();
	virtual bool vfunc223();
};
