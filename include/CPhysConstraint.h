// CPhysConstraint: physics constraint entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

struct datamap_t;

struct PhysObjView	// a physics object attached to the constraint (only the slots used): the game flags word is slots 7 / 8
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
	virtual void SetGameFlags(unsigned int flags);	// slot 7
	virtual unsigned int GetGameFlags();	// slot 8
};

struct CPhysConstraintObj	// the physics constraint object at +0x450 (only the slots used)
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(class CPhysConstraint *pOwner); virtual void vfunc4();
	virtual struct PhysObjView *vfunc5();
	virtual struct PhysObjView *vfunc6();
};

class CPhysConstraint
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual CPhysConstraint *vfunc5(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13(); virtual void vfunc14();
	virtual void vfunc15(); virtual void vfunc16(); virtual void vfunc17(); virtual void vfunc18(); virtual void vfunc19();
	virtual void vfunc20(); virtual void vfunc21(); virtual void vfunc22(); virtual void vfunc23(); virtual void vfunc24();
	virtual void vfunc25(); virtual void vfunc26(); virtual void vfunc27(); virtual void vfunc28(); virtual void vfunc29();
	virtual void vfunc30(); virtual void vfunc31(); virtual void vfunc32(); virtual void vfunc33(); virtual void vfunc34();
	virtual void vfunc35(); virtual void vfunc36(); virtual void vfunc37(); virtual void vfunc38(); virtual void vfunc39();
	virtual void vfunc40(); virtual void vfunc41(); virtual void vfunc42(); virtual void vfunc43(); virtual void vfunc44();
	virtual void vfunc45(); virtual void vfunc46(); virtual void vfunc47(); virtual void vfunc48(); virtual void vfunc49();
	virtual void vfunc50(); virtual void vfunc51(); virtual void vfunc52(); virtual void vfunc53(); virtual void vfunc54();
	virtual void vfunc55(); virtual void vfunc56(); virtual void vfunc57(); virtual void vfunc58(); virtual void vfunc59();
	virtual void vfunc60(); virtual void vfunc61(); virtual void vfunc62(); virtual void vfunc63(); virtual void vfunc64();
	virtual void vfunc65(); virtual void vfunc66(); virtual void vfunc67(); virtual void vfunc68(); virtual void vfunc69();
	virtual void vfunc70(); virtual void vfunc71(); virtual void vfunc72(); virtual void vfunc73(); virtual void vfunc74();
	virtual void vfunc75(); virtual void vfunc76(); virtual void vfunc77(); virtual void vfunc78(); virtual void vfunc79();
	virtual void vfunc80(); virtual void vfunc81(); virtual datamap_t * vfunc82(); virtual void vfunc83(); virtual void vfunc84();
	virtual void vfunc85(); virtual void vfunc86(); virtual void vfunc87(); virtual void vfunc88(); virtual void vfunc89();
	virtual void vfunc90(); virtual void vfunc91(); virtual void vfunc92(); virtual void vfunc93(); virtual void vfunc94();
	virtual void vfunc95(); virtual void vfunc96(); virtual void vfunc97(); virtual void vfunc98(); virtual void vfunc99();
	virtual void vfunc100(); virtual void vfunc101(); virtual void vfunc102(); virtual void vfunc103(); virtual void vfunc104();
	virtual void vfunc105(); virtual void vfunc106(); virtual void vfunc107(); virtual void vfunc108(); virtual void vfunc109();
	virtual void vfunc110(); virtual void vfunc111(); virtual void vfunc112(); virtual void vfunc113(); virtual void vfunc114();
	virtual void vfunc115(); virtual void vfunc116(); virtual void vfunc117(); virtual void vfunc118(); virtual void vfunc119();
	virtual void vfunc120(); virtual void vfunc121(); virtual void vfunc122(); virtual void vfunc123(); virtual void vfunc124();
	virtual void vfunc125(); virtual void vfunc126(); virtual void vfunc127(); virtual void vfunc128(); virtual void vfunc129();
	virtual void vfunc130(); virtual void vfunc131(); virtual void vfunc132(); virtual void vfunc133(); virtual void vfunc134();
	virtual void vfunc135(); virtual void vfunc136(); virtual void vfunc137(); virtual void vfunc138(); virtual void vfunc139();
	virtual void vfunc140(); virtual void vfunc141(); virtual void vfunc142(); virtual void vfunc143(); virtual void vfunc144();
	virtual void vfunc145(); virtual void vfunc146(); virtual void vfunc147(); virtual void vfunc148(); virtual void vfunc149();
	virtual void vfunc150(); virtual void vfunc151(); virtual void vfunc152(); virtual void vfunc153(); virtual void vfunc154();
	virtual void vfunc155(); virtual void vfunc156(); virtual void vfunc157(); virtual void vfunc158(); virtual void vfunc159();
	virtual void vfunc160(); virtual void vfunc161(); virtual void vfunc162(); virtual void vfunc163(); virtual void vfunc164();
	virtual void vfunc165(); virtual void vfunc166(); virtual void vfunc167(); virtual void vfunc168(); virtual void vfunc169();
	virtual void vfunc170(); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(); virtual void vfunc174();
	virtual void vfunc175(); virtual void vfunc176(); virtual void vfunc177(); virtual void vfunc178(); virtual void vfunc179();
	virtual void vfunc180(); virtual void vfunc181(); virtual void vfunc182(); virtual void vfunc183x(); virtual void vfunc184();
	virtual void vfunc185(); virtual void vfunc186(); virtual void vfunc187(); virtual void vfunc188(); virtual void vfunc189();
	virtual void vfunc190(); virtual void vfunc191(); virtual void vfunc192(); virtual void vfunc193(); virtual void vfunc194();
	virtual void vfunc195(); virtual void vfunc196(); virtual void vfunc197(); virtual void vfunc198(); virtual void vfunc199();
	virtual void vfunc200(); virtual void vfunc201(); virtual void vfunc202(); virtual void vfunc203(); virtual void vfunc204();
	virtual void vfunc205(); virtual void vfunc206(); virtual void vfunc207(); virtual void vfunc208(); virtual void vfunc209();
	virtual void vfunc210(); virtual void vfunc211(); virtual void vfunc212(); virtual void vfunc213(); virtual void vfunc214();
	virtual void vfunc215(); virtual void vfunc216(); virtual void vfunc217(); virtual void vfunc218(); virtual void vfunc219();
	virtual void vfunc220(); virtual void vfunc221(); virtual void vfunc222(); virtual void vfunc223(); virtual void vfunc224();
	virtual void vfunc225(); virtual void vfunc226(); virtual void vfunc227(); virtual void vfunc228(); virtual void vfunc229();
	virtual void vfunc230(); virtual void vfunc231(); virtual void vfunc232(); virtual void vfunc233(); virtual void vfunc234();
	virtual void vfunc235(); virtual void vfunc236(); virtual void vfunc237(); virtual void vfunc238(); virtual void vfunc239();
	virtual void vfunc240();
	virtual CPhysConstraintObj *vfunc241(struct CPhysConstraintSystem *pSystem, struct CPhysConstraintPair *pPair);

	void vfunc183(int a, int b, struct CPhysConstraintInfo **ppInfo);	// slot 183 (plain member): when b is 0 and the engine's frame counter at +0x18 changed since the last time (+0x46c), hands a, the constraint object's two physics objects (slots 5 and 6) and the info record's angles / position / flag to sub_1002a210
	bool sub_1002b4c0();	// attaches the constraint object to its two physics objects (creates it through slot 241 when missing); false when it cannot
	void sub_1002b360(void *pObjects);	// fills the two attached physics objects (named at +0x454 / +0x458) into pObjects
	void sub_100121ac();	// destructor body
	void sub_1002a960(int unused);	// break: releases the two attached objects, plays the break sound, fires the output (+0x470) and removes the entity
	void sub_1002af90(int unused);	// re-enables collisions of the two attached physics objects (clears bit 1 of their game flags), and with spawnflag bit 0 (dword at +0x204) calls sub_1001474a(first, second); the constraint is the object at +0x450

	char m_pad0004[0x204 - 4];
	unsigned int m_spawnflags204;	// 0x204: bit 0 = re-enable collisions between the attached objects when released
	char m_pad0208[0x2e0 - 0x208];
	void *m_pEdict2e0;	// 0x2e0: the edict (IndexOfEdict takes it)
	char m_pad02e4[0x450 - 0x2e4];
	CPhysConstraintObj *m_pConstraint450;	// 0x450: the physics constraint object
	char m_pad0454[0x45c - 0x454];
	const char *m_psz45c;	// 0x045c: a name passed to the sound system's slot 0 by vfunc104 (the empty string when it is null)
	char m_pad0460[0x46c - 0x460];
	int m_n46c;	// 0x46c: the engine counter (gpGlobals +0x18) seen last by vfunc183
};
