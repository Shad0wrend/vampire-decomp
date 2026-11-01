// CNPC_VZombie: declared by pcdecomp transplant for 0x103de4d0 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

#include "Vector.h"

struct CUnknown101c2a50;
class CBaseCombatCharacter;

class CNPC_VZombie : public CBaseEntity
{
public:
	int vfunc546(int arg);
	CNPC_VZombie *sub_103de330(int nMode);	// constructor body taking the initial mode (+0x6678)
	CNPC_VZombie *sub_103de220();	// as in CKeepUpright (transplant)
	void vfunc141(CUnknown101c2a50 *pInfo, int b, char *pTrace);	// slot 141 "CNPC_VZombie::TraceAttack": sets the head-hit flag at +0x66e1 from the hit group (dword +0x44 of the trace, 1 = head) and, for a head hit or an attacker whose weapon flags have bit 15 / 16 (0x18000), sets the damage of pInfo from one of two cvars, then CAI_BaseNPC::vfunc141
	void sub_10015b13(CUnknown101c2a50 *pInfo, int b, char *pTrace);	// CAI_BaseNPC::vfunc141 (stub 0x10015b13), called directly
	bool vfunc201(CBaseCombatCharacter *pEnt, int b, int c, int d);	// slot 201 "CNPC_VZombie::FVisible": scope trace (entity name); when pEnt is the player record at +0x9c of the entity slot 167 gives, true unless that player passes CBaseCombatCharacter::sub_10146a80, else CAI_BaseNPCTroika::vfunc201(pEnt, b, c, 0); the fourth argument is not used
	bool sub_1000dbcf(CBaseCombatCharacter *pEnt, int b, int c, int d);	// CAI_BaseNPCTroika::vfunc201 (stub 0x1000dbcf), called directly
	virtual void vfunc105(const char *pszModel);	// slot 105 "CNPC_VZombie::SetModel": CAI_BaseNPCTroika::vfunc105, then the sound group (+0xb4) of the male / female zombie name (+0xc0) with the kind +0xbc = 2
	void vfunc103();	// slot 103 "CNPC_VZombie::Spawn" (declared as a plain member): solid flags 0x4000000 / 0x200000 / 0x8000, the distances at +0x6348 to 999999, a scrambled random value at +0x6364, then CNPC_VAnimal::vfunc103
	void vfunc104();	// slot 104 (declared as a plain member): the base slot 104 (stub 0x1000bcb7, ecx = this), the two zombie headshot emitters through the engine's slot 17 (0x1070b22c), then the item_w_zombie_fists give
	void sub_10012855(int flags);	// sets the solid flags, called directly
	void sub_100117ca();	// CNPC_VAnimal::vfunc103 (stub 0x100117ca), called directly
	virtual int vfunc124();	// slot 124 "CNPC_VZombie::DrawDebugTextOverlays": base lines, then (with bit 18 of the debug flags at +0x224) one "Cond: %s" overlay line per condition bit set in the 192 bit vector at +0x5c5c
	int sub_1029d4e0();	// CAI_BaseNPCTroika::vfunc124 (stub 0x10006f64), called directly
	void sub_103e0a00();	// "CNPC_VZombie::UpdateEnemyTarget"-like (called by vfunc431): with an enemy (slot 167) that has a character (+0x9c): a character that fails CBaseCombatCharacter::sub_10146a80 gets slot 544 (character, its slot 217 position), one that passes goes through slot 541 / sub_102dfa20 and then sub_10279c20(); without an enemy the entity behind the handle at +0x628c is used the same way (sub_10279a50 for a passing character, slot 596 otherwise)
	void sub_10279a50(CBaseEntity *pEnt);	// CAI_BaseNPC::sub_10279a50 (stub 0x1000b974), called directly
	void sub_10279c20();	// stub 0x10003422, called directly
	bool vfunc509();	// slot 509 (plain member): with the flag byte at +0x1480 and no live entity behind the handle at +0xfe8, true unless the engine object at 0x1070b244 (slot 2) refuses the check, or slots 510 / 507 take over
	char sub_1000caae();	// CBaseCombatCharacter::sub_1033e2b0 (stub 0x1000caae), called directly
	bool vfunc510();	// slot 510 "CNPC_VZombie::...": sets the dword at +0x10e8 to 9, then true (via CAI_BaseNPC::vfunc510) only for a calm zombie with a live enemy (handle +0x628c) that has no dialog partner and whose float at +0x6264 does not exceed the "Float Sound Info" stat 3
	char sub_1000b005();	// CAI_BaseNPCTroika::sub_102c1170 (stub 0x1000b005), called directly
	char sub_1000b212();	// CBaseCombatCharacter::sub_10341aa0 (stub 0x1000b212), called directly
	bool sub_10005f97();	// CAI_BaseNPC::vfunc510 (stub 0x10005f97), tail called
	void vfunc431();	// slot 431 "CNPC_VZombie::NPCThink" (plain member): scope trace (entity name); unless sub_1029f2e0() holds: sub_103e0a00() while the state at +0x6678 is 1, the inspection ranges when the vision distance (+0x63b8) is at most 1.0f, the Troika think, and slot 614 once the next think time (+0x17c) is not in the future
	char sub_1029f2e0();	// stub 0x1000347c, called directly by the think
	void sub_10292de0();	// CAI_BaseNPCTroika::vfunc431 (stub 0x10002a7c), called directly by the think
	char sub_10331da0(Vector *pOrigin, Vector *pDir);	// "CBaseCombatCharacter::CalcLookData"-like (stub 0x10014eb6, ret 8): the look origin and direction of the character, true when they come from the model's data
	void sub_103e05e0(int nSound);	// emits the sound nSound from the look origin, in the look direction (as angles), to the players that can hear it (a PAS filter)
	int vfunc440(int nSchedule);	// slot 440: maps the failed schedules 0x156 / 0x157 to 0x15e / 0x15f and 0x5b (DevMsg) to 0x165, else CNPC_VAnimal::vfunc440
	int sub_10012283(int nSchedule);	// CNPC_VAnimal::vfunc440 (stub 0x10012283), tail called
	void vfunc444(int *pTask);	// slot 444 "CNPC_VZombie::RunTask"-like (plain member): task handler of the zombie, unknown tasks go to CNPC_VAnimal::vfunc444
	void sub_10273e80(char bForce);	// CAI_BaseNPC member (stub 0x1000ac68), called directly
	void sub_103e0980(int a);	// hands the zombie the maker's value (CNPCMaker_Zombie::vfunc617), stub 0x1001128e
	void sub_1029f300(int a);	// stub 0x10008931, called directly on the new zombie (also on the maker)
	int vfunc142(struct CZombieDmgInfo *pInfo);	// slot 142 (OnTakeDamage-like): flags the byte at +0x66e0 when the damage exceeds the stats 0xf / 0x11 limit, the Troika version, then a schedule (0x164 for an enemy whose schedule is not 0x161, else 0x162 unless the byte at +0x6675), and a headshot emitter sound for the head-hit flag (+0x66e1)
	int sub_10004647(struct CZombieDmgInfo *pInfo);	// CAI_BaseNPCTroika::vfunc142 (stub 0x10004647), called directly
	void vfunc432(int a);	// slot 432 "CNPC_VZombie::RunAI" (plain member): while the state (+0x6678) is 1 and the player is farther than the limit (+0x66dc) logs "zombie %s: player too far away, killing self" and runs slot 119; then CNPC_VAnimal::vfunc432(a); in the states 0 / 1, unless active (+0xfec = 0x4b), with condition 0x46 set, the player distance (+0x6264) inside the tuning range and the lunge timer (+0x66d8) due, with a live enemy (handle +0x628c) that has a player object, a roll against the tuning chance starts the schedule 0x16a and re-arms the timer; always sets the byte +0x5ac
	void sub_10360160(int a);	// CNPC_VAnimal::vfunc432 (stub 0x10014f92), called directly
	void sub_102ae750(int schedule, int a);	// starts the schedule (stub 0x1000198d), called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
	bool sub_10269d30(int condition);	// CAI_BaseNPC condition test (stub 0x1001482b), called directly
	int sub_10003daa();	// CNPC_VAnimal::vfunc461 (stub 0x10003daa), tail called
	const char *sub_100ab4f0();	// CBaseEntity::sub_100ab4f0 (stub 0x1000b5cd): the entity's debug name

	char m_pad03e0[0x5ac - sizeof(CBaseEntity)];
	char m_bActive05ac;	// 0x5ac
	char m_pad05ad[0xfe8 - 0x5ad];
	unsigned int m_hFe8;	// 0xfe8: entity handle
	int m_nState0fec;	// 0xfec: the activity the zombie is in
	char m_pad0ff0[0x1480 - 0xff0];
	char m_b1480;	// 0x1480
	char m_pad1481[0x1b2c - 0x1481];
	int m_nType1b2c;	// 0x1b2c: the NPC type id

	const char *m_pszFile1b30;	// 0x1b30: source file of the last schedule start
	int m_nLine1b34;	// 0x1b34: its line
	char m_pad1b38[0x5c38 - 0x1b38];
	struct CVZombie5c38 *m_p5c38;	// 0x5c38
	char m_pad5c3c[0x5cc0 - 0x5c3c];
	int m_nState5cc0;	// 0x5cc0
	char m_pad5cc4[0x6264 - 0x5cc4];
	float m_flPlayerDist6264;	// 0x6264: the distance to the player
	char m_pad6268[0x628c - 0x6268];
	unsigned int m_hEnemy628c;	// 0x628c: entity handle of the target
	char m_pad6290[0x6590 - 0x6290];
	int *m_p6590;	// 0x6590
	char m_pad6594[0x6675 - 0x6594];
	char m_b6675;	// 0x6675
	char m_pad6676[0x6678 - 0x6676];
	int m_nMode6678;	// 0x6678
	char m_b667c;	// 0x667c
	char m_pad667d[0x6680 - 0x667d];
	int m_a6680[3];	// 0x6680
	int m_a668c[3];	// 0x668c
	char m_pad6698[0x66d8 - 0x6698];
	float m_flNextLunge66d8;	// 0x66d8
	float m_flMaxDist66dc;	// 0x66dc
	char m_b66e0;	// 0x66e0: set when the hit is stronger than the zombie's two stats allow
	char m_b66e1;	// 0x66e1: the head-hit flag
public:
    virtual datamap_t * vfunc82();
public:
    virtual void vfunc25(int);
    virtual void vfunc26(int);
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void vfunc139();
	virtual void vfunc140_slot();
	virtual void vfunc141_slot();
	virtual void vfunc142_slot();
	virtual void vfunc143_slot();
	virtual void vfunc144();
	virtual void vfunc145();
	virtual void vfunc146();
	virtual void vfunc147();
	virtual void vfunc148();
	virtual void vfunc149();
	virtual void vfunc150();
	virtual void vfunc151();
	virtual void vfunc152();
	virtual void vfunc153_slot();
	virtual void vfunc154();
	virtual void vfunc155();
	virtual void vfunc156();
	virtual void vfunc157();
	virtual void vfunc158_slot();
	virtual void vfunc159();
	virtual void vfunc160();
	virtual void vfunc161_slot();
	virtual void vfunc162();
	virtual void vfunc163();
	virtual void vfunc164();
	virtual void vfunc165();
	virtual void vfunc166();
	virtual void vfunc167();
	virtual void vfunc168_slot();
	virtual void vfunc169();
	virtual void vfunc170();
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173();
	virtual void vfunc174_slot();
	virtual void vfunc175_slot();
	virtual void vfunc176_slot();
	virtual void vfunc177();
	virtual void vfunc178_slot();
	virtual void vfunc179();
	virtual void vfunc180_slot();
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
	virtual void vfunc194_slot();
	virtual void vfunc195_slot();
	virtual void vfunc196_slot();
	virtual void vfunc197_slot();
	virtual void vfunc198();
	virtual void vfunc199();
	virtual void vfunc200();
	virtual void vfunc201_slot();
	virtual void vfunc202_slot();
	virtual void vfunc203();
	virtual void vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual void vfunc207_slot();
	virtual void vfunc208_slot();
	virtual void vfunc209();
	virtual void vfunc210();
	virtual void vfunc211();
	virtual void vfunc212_slot();
	virtual void vfunc213_slot();
	virtual void vfunc214_slot();
	virtual void vfunc215();
	virtual void vfunc216();
	virtual void vfunc217_slot();
	virtual void vfunc218_slot();
	virtual void vfunc219_slot();
	virtual void vfunc220_slot();
	virtual void vfunc221_slot();
	virtual void vfunc222_slot();
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226_slot();
	virtual void vfunc227();
	virtual void vfunc228_slot();
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232_slot();
	virtual void vfunc233_slot();
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual void vfunc237_slot();
	virtual void vfunc238_slot();
	virtual void vfunc239();
	virtual void vfunc240();
	virtual void vfunc241();
	virtual void vfunc242();
	virtual void vfunc243();
	virtual void vfunc244();
	virtual void vfunc245();
	virtual void vfunc246();
	virtual void vfunc247();
	virtual void vfunc248();
	virtual void vfunc249();
	virtual void vfunc250();
	virtual void vfunc251();
	virtual void vfunc252();
	virtual void vfunc253();
	virtual void vfunc254();
	virtual void vfunc255();
	virtual void vfunc256();
	virtual void vfunc257();
	virtual void vfunc258();
	virtual void vfunc259();
	virtual void vfunc260();
	virtual void vfunc261();
	virtual void vfunc262();
	virtual void vfunc263();
	virtual void vfunc264();
	virtual void vfunc265();
	virtual void vfunc266();
	virtual void vfunc267();
	virtual void vfunc268();
	virtual void vfunc269();
	virtual void vfunc270();
	virtual void vfunc271();
	virtual void vfunc272();
	virtual void vfunc273();
	virtual void vfunc274();
	virtual void vfunc275();
	virtual void vfunc276();
	virtual void vfunc277();
	virtual void vfunc278();
	virtual void vfunc279();
	virtual void vfunc280();
	virtual void vfunc281();
	virtual void vfunc282();
	virtual void vfunc283();
	virtual void vfunc284();
	virtual void vfunc285();
	virtual void vfunc286();
	virtual void vfunc287();
	virtual void vfunc288();
	virtual void vfunc289();
	virtual void vfunc290();
	virtual void vfunc291();
	virtual void vfunc292();
	virtual void vfunc293();
	virtual void vfunc294();
	virtual void vfunc295();
	virtual void vfunc296();
	virtual void vfunc297();
	virtual void vfunc298();
	virtual void vfunc299();
	virtual void vfunc300();
	virtual void vfunc301();
	virtual void vfunc302();
	virtual void vfunc303();
	virtual void vfunc304();
	virtual void vfunc305();
	virtual void vfunc306();
	virtual void vfunc307();
	virtual void vfunc308();
	virtual void vfunc309();
	virtual void vfunc310();
	virtual void vfunc311();
	virtual void vfunc312();
	virtual void vfunc313();
	virtual void vfunc314();
	virtual void vfunc315();
	virtual void vfunc316();
	virtual void vfunc317();
	virtual void vfunc318();
	virtual void vfunc319();
	virtual void vfunc320();
	virtual void vfunc321();
	virtual void vfunc322();
	virtual void vfunc323();
	virtual void vfunc324();
	virtual void vfunc325();
	virtual void vfunc326();
	virtual void vfunc327();
	virtual void vfunc328();
	virtual void vfunc329();
	virtual void vfunc330();
	virtual void vfunc331();
	virtual void vfunc332();
	virtual void vfunc333();
	virtual void vfunc334();
	virtual void vfunc335();
	virtual void vfunc336();
	virtual void vfunc337();
	virtual void vfunc338();
	virtual void vfunc339();
	virtual void vfunc340();
	virtual void vfunc341();
	virtual void vfunc342();
	virtual void vfunc343();
	virtual void vfunc344();
	virtual void vfunc345();
	virtual void vfunc346();
	virtual void vfunc347();
	virtual void vfunc348();
	virtual void vfunc349();
	virtual void vfunc350();
	virtual void vfunc351();
	virtual void vfunc352();
	virtual void vfunc353();
	virtual void vfunc354();
	virtual void vfunc355();
	virtual void vfunc356();
	virtual void vfunc357();
	virtual void vfunc358();
	virtual void vfunc359();
	virtual void vfunc360();
	virtual void vfunc361();
	virtual void vfunc362();
	virtual void vfunc363();
	virtual void vfunc364();
	virtual void vfunc365();
	virtual void vfunc366();
	virtual void vfunc367();
	virtual void vfunc368();
	virtual void vfunc369();
	virtual void vfunc370();
	virtual void vfunc371();
	virtual void vfunc372();
	virtual void vfunc373();
	virtual void vfunc374();
	virtual void vfunc375();
	virtual void vfunc376();
	virtual void vfunc377();
	virtual void vfunc378();
	virtual void vfunc379();
	virtual void vfunc380();
	virtual void vfunc381();
	virtual void vfunc382();
	virtual void vfunc383();
	virtual void vfunc384();
	virtual void vfunc385();
	virtual void vfunc386();
	virtual void vfunc387();
	virtual void vfunc388();
	virtual void vfunc389();
	virtual void vfunc390();
	virtual void vfunc391();
	virtual void vfunc392();
	virtual void vfunc393();
	virtual void vfunc394();
	virtual void vfunc395();
	virtual void vfunc396();
	virtual void vfunc397();
	virtual void vfunc398();
	virtual void vfunc399();
	virtual void vfunc400();
	virtual void vfunc401();
	virtual void vfunc402();
	virtual void vfunc403();
	virtual void vfunc404();
	virtual void vfunc405();
	virtual void vfunc406();
	virtual void vfunc407();
	virtual void vfunc408();
	virtual void vfunc409();
	virtual void vfunc410();
	virtual void vfunc411();
	virtual void vfunc412();
	virtual void vfunc413();
	virtual void vfunc414();
	virtual void vfunc415();
	virtual void vfunc416();
	virtual void vfunc417();
	virtual void vfunc418();
	virtual void vfunc419();
	virtual void vfunc420();
	virtual void vfunc421();
	virtual void vfunc422();
	virtual void vfunc423();
	virtual void vfunc424();
	virtual void vfunc425();
	virtual void vfunc426();
	virtual void vfunc427();
	virtual void vfunc428();
	virtual void vfunc429();
	virtual void vfunc430();
	virtual void vfunc431_slot();
	virtual void vfunc432_slot();
	virtual void vfunc433();
	virtual void vfunc434();
	virtual void vfunc435();
	virtual void vfunc436();
	virtual void vfunc437();
	virtual void vfunc438();
	virtual void vfunc439();
	virtual void vfunc440_slot();
	virtual void vfunc441();
	virtual void vfunc442();
	virtual void vfunc443();
	virtual void vfunc444_slot();
	virtual void vfunc445();
	virtual void vfunc446();
	virtual void vfunc447();
	virtual void vfunc448();
	virtual void vfunc449();
	virtual void vfunc450();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual void vfunc453();
	virtual void vfunc454();
	virtual void vfunc455();
	virtual void vfunc456();
	virtual void vfunc457();
	virtual void vfunc458();
	virtual void vfunc459();
	virtual void vfunc460();
	virtual int vfunc461();	// slot 461 "CNPC_VZombie::SelectIdealState": by the state (+0x5cc0) 1 or 3 picks the ideal state from the conditions, else CNPC_VAnimal::vfunc461
	virtual void vfunc462();
	virtual void vfunc463();
	virtual void vfunc464();
	virtual void vfunc465();
	virtual void vfunc466();
	virtual void vfunc467();
	virtual void vfunc468();
	virtual void vfunc469();
	virtual void vfunc470();
	virtual void vfunc471();
	virtual void vfunc472();
	virtual int vfunc473();
	virtual void vfunc474();
	virtual void vfunc475();
	virtual void vfunc476();
	virtual void vfunc477();
	virtual void vfunc478();
	virtual void vfunc479();
	virtual void vfunc480();
	virtual void vfunc481();
	virtual void vfunc482();
	virtual void vfunc483();
	virtual void vfunc484();
	virtual void vfunc485();
	virtual void vfunc486();
	virtual void vfunc487();
	virtual void vfunc488();
	virtual void vfunc489();
	virtual void vfunc490();
	virtual void vfunc491();
	virtual void vfunc492();
	virtual void vfunc493();
	virtual void vfunc494();
	virtual void vfunc495();
	virtual void vfunc496();
	virtual void vfunc497();
	virtual void vfunc498();
	virtual void vfunc499();
	virtual void vfunc500();
	virtual void vfunc501();
	virtual void vfunc502();
	virtual void vfunc503();
	virtual void vfunc504();
	virtual void vfunc505();
	virtual void vfunc506();
	virtual void vfunc507();
	virtual void vfunc508();
	virtual void vfunc509_slot();
	virtual void vfunc510_slot();
	virtual void vfunc511();
	virtual void vfunc512();
	virtual void vfunc513();
	virtual void vfunc514();
	virtual void vfunc515();
	virtual void vfunc516();
	virtual void vfunc517();
	virtual void vfunc518();
	virtual void vfunc519();
	virtual void vfunc520();
	virtual void vfunc521();
	virtual void vfunc522();
	virtual void vfunc523();
	virtual void vfunc524();
	virtual void vfunc525();
	virtual void vfunc526();
	virtual void vfunc527();
	virtual void vfunc528();
	virtual void vfunc529();
	virtual void vfunc530();
	virtual void vfunc531();
	virtual void vfunc532();
	virtual void vfunc533();
	virtual void vfunc534();
	virtual void vfunc535();
	virtual void vfunc536();
	virtual void vfunc537();
	virtual void vfunc538();
	virtual void vfunc539();
	virtual void vfunc540();
	virtual void vfunc541();
	virtual void vfunc542();
	virtual void vfunc543();
	virtual void vfunc544();
	virtual void vfunc545();
	virtual void vfunc546_slot();
	virtual void vfunc547();
	virtual void vfunc548();
	virtual void vfunc549();
	virtual void vfunc550();
	virtual void vfunc551();
	virtual void vfunc552();
	virtual void vfunc553();
	virtual void vfunc554();
	virtual void vfunc555();
	virtual void vfunc556();
	virtual void vfunc557();
	virtual void vfunc558();
	virtual void vfunc559();
	virtual void vfunc560();
	virtual void vfunc561();
	virtual void vfunc562();
	virtual void vfunc563();
	virtual void vfunc564();
	virtual void vfunc565();
	virtual bool vfunc566(int);
	virtual void vfunc567();
	virtual void vfunc568();
	virtual void vfunc569();
	virtual void vfunc570();
	virtual void vfunc571();
	virtual void vfunc572();
	virtual void vfunc573();
	virtual void vfunc574();
	virtual void vfunc575();
	virtual void vfunc576();
	virtual void vfunc577();
	virtual void vfunc578();
	virtual void vfunc579();
	virtual int vfunc580();
};
