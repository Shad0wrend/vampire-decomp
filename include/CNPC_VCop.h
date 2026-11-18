// CNPC_VCop: declared by pcdecomp transplant for 0x10370970 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "datamap.h"
#include "CNPC_VHumanCombatant.h"

struct CNPC_VCopPlayer	// the object behind +0xa8 of an entity (the controlling player)
{
	char sub_1017f8d0();	// stub 0x1000ae3e
	int sub_1017f770();	// stub 0x10007ee6
	void sub_1017e6f0(int a);	// stub 0x1000c838
};

struct CNPC_VCopTarget	// an entity as vfunc404 sees it
{
	char m_pad0000[0xa8];
	CNPC_VCopPlayer *m_pPlayer;	// 0xa8
};

class CBaseEntity;	// a tail-call override's parameter
class CNPC_VCop : public CNPC_VHumanCombatant
{
public:
	CNPC_VCop *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc103();	// slot 103: clears the target at +0x6668, calls CNPC_VHumanCombatant::vfunc103, counts the global 0x1093acac and sets the flags at +0x6671 / +0x6672
	CNPC_VCop *sub_103708e0();	// as in CKeepUpright (transplant)
	void vfunc442(int *pEvent);	// slot 442, animation event handler: event 0x107 calls CAI_BaseNPC::sub_10273e80(0), event 0x14a calls slot 598 with the entity of the handle at +0x628c, everything else goes to CNPC_VHumanCombatant::vfunc442
	void vfunc123();	// slot 123: debug text above the head
	void sub_1029ca50();	// CAI_BaseNPCTroika::vfunc123 (stub 0x10008a3f)
	void vfunc597(CBaseEntity *pTarget, int a);	// slot 597, declared as a plain member: when pTarget is the entity of the handle at +0x628c and the cop has no target handle (+0x6664) while its state (slot 464) is 2, remembers pTarget's controlling player (+0xa8) after telling it about the pursuit, then prints a debug text; then CAI_BaseNPCTroika::vfunc597(pTarget, a)
	int vfunc438();	// slot 438 "SelectSchedule": +0x1b2c = 0xc; state 0xc (+0x5cc0) with condition 0x1e and a live pursuit target (handle +0x628c) hands that target the call sub_1017e6f0(0) and returns 0x6d, else state 1; state 1 with the byte at +0x65f4 and no usable pursuit target (or none of +0x6590) takes schedule 0x16e / 0x170 (counting the global 0x1093acb0), everything else the base CNPC_VHumanCombatant::vfunc438
	int sub_103723f0();	// "wants to take over the pursuit": sets state 2 as the ideal state (file / line stamp 0x527) and returns 2 when the player is the target of a pursuit condition (0x6d / 0x70 / 0x4c..0x4e), else 0
	char sub_10269aa0(int condition);	// HasCondition (stub 0x10014df8), called directly
	char sub_10269d30(int condition);	// CAI_BaseNPC::HasCondition-like (stub 0x1001482b), called directly
	void sub_1026e340(int newState);	// CAI_BaseNPC::SetState (stub 0x10002554), called directly
	int vfunc404(CNPC_VCopTarget *pEnt);	// slot 404 "classification of pEnt": 1 for the entity of the global handle 0x1093ac3c while the time is before the global 0x1093aca8, and for entities whose player object answers sub_1017f8d0 / sub_1017f770 > 0, else CAI_BaseNPCTroika::vfunc404; 0 for no entity
	int sub_10299da0(CNPC_VCopTarget *pEnt);	// CAI_BaseNPCTroika::vfunc404 (stub 0x10001adc), called directly
	void vfunc598(CBaseEntity *pTarget);	// slot 598 (declared as a plain member): when pTarget is the entity of the handle at +0x628c: forgets it (relationship 4, no target at +0x6668, no enemy / no look target when they are pTarget), registers a "Player D_NU 10" note with the entity registry (slot 541); else CAI_BaseNPCTroika::vfunc598
	void sub_10273790(const char *pszText, int a);	// CAI_BaseNPC member (stub 0x1000421e): prints / records a debug note
	int vfunc440(int arg);	// slot 440: maps a few activity / event ids to this cop's own ones (flag 0x80000 of +0x14bc picks one of two for 0x6b), else CNPC_VHumanCombatant::vfunc440
	void vfunc596(int a);	// slot 596 (declared as a plain member): turns the entity into its NPC (sub_102707d0), makes it this cop's target (CAI_BaseNPC::sub_10279a50), hands it and its velocity pointer (+0x3d4, slot 217) to slot 544, then CAI_BaseNPCTroika::vfunc596 with the NPC
	int vfunc461();	// slot 461 (plain member): state 1 / 3 -> sub_103723f0's ideal state or the base; state 0xc picks the ideal state (8 / 2 / 1) by the conditions 0x21 / 0x1f / 0x22 / 0x20, telling the pursuit target (slots 597, 596) first; else the base
	void vfunc463(int a, int type);	// slot 463 (plain member like the others): tells the controlling players about the pursuit state change, then CNPC_VHumanCombatant::vfunc463
	void vfunc180();	// slot 180: clears the two per-NPC counter flags at +0x6671 / +0x6672 (decrementing the globals 0x1093acac / 0x1093acb0 for each one that was set), then CAI_BaseNPCTroika::vfunc180
	void vfunc420();	// slot 420 (plain member): CNPC_VHumanCombatant::vfunc420 then clears +0x6670

	char m_pad03e0[0x14bc - 0x3e0];
	unsigned int m_flags14bc;	// 0x14bc
	char m_pad14c0[0x1b2c - 0x14c0];
	int m_n1b2c;	// 0x1b2c
	const char *m_pszFile1b30;	// 0x1b30: source file of the last schedule pick
	int m_nLine1b34;	// 0x1b34: its line
	int m_n1b38;	// 0x1b38: set to 0xc by vfunc461
	const char *m_pszFile1b3c;	// 0x1b3c
	int m_nLine1b40;	// 0x1b40
	char m_pad1b44[0x5b7c - 0x1b44];
	EHANDLE m_h5b7c;	// 0x5b7c
	char m_b5b80;	// 0x5b80
	char m_pad5b81[0x5cc0 - 0x5b81];
	int m_n5cc0;	// 0x5cc0: the NPC state
	int m_n5cc4;	// 0x5cc4: the ideal state
	char m_pad5cc8[0x6081 - 0x5cc8];
	char m_b6081;	// 0x6081
	char m_pad6082[0x6160 - 0x6082];
	void vfunc472(int a);	// slot 472 override: sub_10370560(a) when the byte is clear and slot 404 answers 1, then CAI_BaseNPCTroika::vfunc472(a)
	EHANDLE m_h6160;	// 0x6160
	char m_pad6164[0x618c - 0x6164];
	EHANDLE m_h618c;	// 0x618c
	char m_pad6190[0x628c - 0x6190];
	unsigned int m_h628c;	// 0x628c
	char m_pad6290[0x6590 - 0x6290];
	void *m_p6590;	// 0x6590
	char m_pad6594[0x65f4 - 0x6594];
	char m_b65f4;	// 0x65f4
	char m_pad65f5[0x6664 - 0x65f5];
	EHANDLE m_h6664;	// 0x6664: the target
	unsigned int m_d6668;	// 0x6668
	int m_iOldPlayerRelationPriority;	// 0x666c
	char m_b6670;	// 0x6670
	char m_b6671;	// 0x6671
	char m_b6672;	// 0x6672
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void vfunc139();
	virtual void vfunc140_slot();
	virtual void vfunc141();
	virtual void vfunc142();
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
	virtual CNPC_VCopTarget *vfunc167();
	virtual CNPC_VCopTarget *vfunc168_slot();
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
	virtual void vfunc201();
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
	virtual Vector *vfunc217_slot();
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
	virtual bool vfunc366(int, int, int);
	virtual void vfunc367();
	virtual void vfunc368();
	virtual void vfunc369();
	virtual void vfunc370();
	virtual void vfunc371();
	virtual void vfunc372();
	virtual void vfunc373();
	virtual void vfunc374();
	virtual int vfunc375(int);
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
	virtual int vfunc404_slot(CNPC_VCopTarget *pEnt);
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
	virtual void vfunc416(char value);
	virtual void vfunc417();
	virtual void vfunc418();
	virtual void vfunc419();
	virtual void vfunc420_slot();
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
	virtual void vfunc431();
	virtual int vfunc432(int);
	virtual void vfunc433();
	virtual void vfunc434();
	virtual void vfunc435();
	virtual void vfunc436();
	virtual void vfunc437();
	virtual void vfunc438_slot();
	virtual void vfunc439();
	virtual void vfunc440_slot();
	virtual void vfunc441();
	virtual void vfunc442_slot();
	virtual void vfunc443();
	virtual void vfunc444();
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
	virtual void vfunc461_slot();
	virtual void vfunc462();
	virtual void vfunc463_slot();
	virtual void vfunc464();
	virtual void vfunc465();
	virtual void vfunc466();
	virtual void vfunc467();
	virtual void vfunc468();
	virtual void vfunc469();
	virtual void vfunc470();
	virtual void vfunc471();
	virtual void vfunc472();
	virtual void vfunc473();
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
	virtual void vfunc509();
	virtual void vfunc510();
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
	virtual void vfunc566();
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
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	bool vfunc594(CBaseEntity *, int, int *, int);	// slot 594 (0x10371b30): a tail call of CAI_BaseNPCTroika::vfunc594 (no such slot in this view: plain)
};

// The virtual slots past the end of CNPC_VCop's list that vfunc463 calls (the plain members vfunc597 / vfunc598
// above are the cop's own overrides; these dispatch through the vtable): cast `this` to this view.
#define CVCS_V(n) virtual void pad##n();
class CNPC_VCopSlots : public CNPC_VCop
{
public:
	CVCS_V(581) CVCS_V(582) CVCS_V(583) CVCS_V(584) CVCS_V(585) CVCS_V(586) CVCS_V(587) CVCS_V(588) CVCS_V(589) CVCS_V(590)
	CVCS_V(591) CVCS_V(592) CVCS_V(593) CVCS_V(594) CVCS_V(595) CVCS_V(5951)
	virtual void slot596(void *pEnt);
	virtual void slot597(CNPC_VCopPlayer *pPlayer, int a);
	virtual void slot598(CBaseEntity *pTarget);
};
