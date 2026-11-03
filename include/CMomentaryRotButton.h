// CMomentaryRotButton: momentary rotating button entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

struct datamap_t;

#include "COutputEvent.h"
#include "COutputFloat.h"
#include "Vector.h"

class CMomentaryRotButton
{
public:

	void vfunc173(int a, int b, int c, int d);	// slot 173 "Use" (plain member, the four stack arguments are not read): the first use flips the sign of the rotation direction at +0x5d8 and fires the output at +0x574 with the entity of the handle at +0x53c; then marks the button as used (+0x5d4), starts the movement from the angles (slot 221) and sets the think function
	float sub_100ca630(float *pAngles);	// stub 0x10005b3c: the angle the button is turned to for the given angles, as a 0..1 fraction (the axis delta of the angles to the start angles at +0x5e0, signed by the movement direction at +0x190, over the range at +0x4fc)
	void sub_100cacb0(float flAngle, bool bFlag);	// stub 0x1000be60: starts the movement to the angle: stamps the local time + 0.1 at +0x3fc; a forward movement (+0x5d8 > 0) that reached 1.0, or a backward one (< 0) that reached 0, stops the angular velocity, sets the angles from the end (+0x5ec) / start (+0x5e0) record and fires the output (+0x5bc / +0x5a4); else sets the angular velocity along the movement direction at the speed (+0x164) times the direction and thinks sub_100cae90
	void sub_100cae90();	// the movement finished: stops the angular velocity, reports the final position (sub_100cae20 with the fraction of the current angles), fires the output at +0x58c for the entity of the handle at +0x53c, clears the used flag (+0x5d4) and, for a button with spawn flag 0x10 and a positive return delay (+0x5dc), arms the return think (sub_100cafb0 after the local time + a constant, direction +0x5d8 = -1), else clears the think
	void sub_100cae20(float flValue, void *pActivator);	// stub 0x100140e7: when the value differs from the one at +0x55c, stores it there and fires that output for the activator
	void sub_100cafb0();	// the return think (stub 0x1001028f): once the button is back at its start angles (fraction not above zero) stops the angular velocity, restores the start angles (+0x5e0, slot 64), reports 0 and clears the thinks; else keeps it turning back at -the return speed (+0x5dc) along the movement direction and thinks again
	void sub_100cb110();	// slot 221 (the absolute angles) through the fraction of sub_100ca630, then sub_100cae20(fraction, 0) and the next think time at +0x17c from the global at 0x1070b228 (+0xc)
	void sub_100caa40();	// the think of a button that is being driven to the target fraction at +0x5fc: while it has not reached it (fraction >= target going forward, <= target going back) reports the fraction (sub_100cae20) and re-arms the think after +0x604; once reached: stops the angular velocity, sets the angles to start + direction * range * target (slot 64), clears the next think (+0x17c / +0x3fc), reports the target and runs sub_100ca9d0()
	void sub_100ca9d0();	// stub 0x100117de, run when the target has been reached
	void sub_100b2f50(const float *pVec);	// CBaseEntity::sub_100b2f50 (stub 0x10006a5f), called directly: the angular velocity setter

	char m_pad0004[0x114 - 4];
	void (CMomentaryRotButton::*m_pfnThink114)();	// 0x114
	char m_pad0118[0x164 - 0x118];
	float m_flSpeed164;	// 0x164: the rotation speed
	char m_pad0168[0x17c - 0x168];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x190 - 0x180];
	float m_vecMoveDir[3];	// 0x190: the movement direction (set by SetMovedir)
	char m_pad019c[0x204 - 0x19c];
	unsigned int m_nSpawnFlags204;	// 0x204: bits 6 / 7 pick the rotation axis
	char m_pad0208[0x3f4 - 0x208];
	float m_flLocalTime3f4;	// 0x3f4
	char m_pad03f8[0x3fc - 0x3f8];
	float m_flTime3fc;	// 0x3fc
	char m_pad0400[0x4fc - 0x400];
	float m_flRange4fc;	// 0x4fc
	char m_pad0500[0x53c - 0x500];
	unsigned int m_hEntity53c;	// 0x53c: entity handle (the output's activator)
	char m_pad0540[0x55c - 0x540];
	COutputFloat m_Position55c;	// 0x55c: the current position fraction
	COutputEvent m_Output574;	// 0x574
	COutputEvent m_Output58c;	// 0x58c
	COutputEvent m_Output5a4;	// 0x5a4: fired when the button reaches its start
	COutputEvent m_Output5bc;	// 0x5bc: fired when the button reaches its end
	int m_nUsed5d4;	// 0x5d4
	int m_nDirection5d8;	// 0x5d8
	float m_flReturnDelay5dc;	// 0x5dc
	Vector m_vecStart5e0;	// 0x5e0: the start angles
	Vector m_vecEnd5ec;	// 0x5ec: the end angles
	int m_sounds;	// 0x05f8
	float m_flTarget5fc;	// 0x5fc: the target fraction
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CMomentaryRotButton *vfunc5(unsigned int flags);	// scalar deleting destructor
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
	virtual void vfunc35();
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
	virtual unsigned char vfunc117();
	virtual void vfunc118();
	virtual void vfunc119();
	virtual void vfunc120();
	virtual void vfunc121();
	virtual void vfunc122();
	virtual void vfunc123();
	virtual int vfunc124();
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
	virtual void vfunc137();
	virtual void vfunc138();
	virtual void vfunc139();
	virtual void vfunc140();
	virtual void vfunc141();
	virtual void vfunc142();
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
	virtual void vfunc173_slot();
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
	float m_flStartPosition;	// 0x0600
	float m_flTimeDelta;	// 0x0604
};
