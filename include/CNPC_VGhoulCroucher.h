// CNPC_VGhoulCroucher: declared by pcdecomp transplant for 0x1037a950 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

#include "COutputEvent.h"

class CNPC_VGhoulCroucher : public CBaseEntity
{
public:
	int vfunc546(int arg);
	CNPC_VGhoulCroucher *vfunc5(unsigned int flags);	// as in CBaseCineCam (transplant)
	CNPC_VGhoulCroucher *sub_1037aea0();	// constructor: the CNPC_VHumanCombatant constructor body, the item objects at +0x6674 / +0x668c and the object at +0x66a4, both vtable pointers (+0 and +0x19b0), scope trace, the variant bytes cleared
	void sub_10386aa0();	// CNPC_VHumanCombatant constructor body (stub 0x100037f6), called directly
	char vfunc615();	// slot 615 "CNPC_VGhoulCroucher::CanBeSetOnFire": scope trace (entity name), false when the byte at +0x6665 is set, else CAI_BaseNPCTroika::vfunc615
	char sub_1000c5db();	// CAI_BaseNPCTroika::vfunc615 (stub 0x1000c5db), called directly
	int vfunc390(void *pInfo);	// slot 390 "CNPC_VGhoulCroucher::OnTakeDamage_Alive": scope trace (entity name), sub_1037b6e0(the dword at +0x2c of pInfo), sets the byte at +0x6667, then CNPC_VHuman::vfunc390
	void sub_1037b6e0(int a);	// "CNPC_VGhoulCroucher::OnDisturbed" (called through the stub at 0x1000a2e5): scope trace (entity name); the first time (byte +0x6666 clear) marks it, stores the handle of the disturbing entity's object (+0xa8, else sub_10293a80) at +0x628c, fires the output at +0x668c (with such an object) or +0x6674 for the entity, and records the relationship of the entity behind the handle (sub_10332ca0(ent, 1, 10))
	float sub_10293a80();	// CAI_BaseNPCTroika member (stub 0x1000d1e3): the result is not used here
	void sub_10332ca0(CBaseEntity *pEnt, int a, int b);	// "CBaseCombatCharacter::AddEntityRelationship" (stub 0x10005849), called directly
	int sub_10001b45(void *pInfo);	// CNPC_VHuman::vfunc390 (stub 0x10001b45), called directly
	char vfunc294(int a);	// slot 294 "CNPC_VGhoulCroucher::IsValidStealthKillTarget": scope trace (entity name), true when the free getter sub_1037bb20 (byte at +0x6666) is zero, else CAI_BaseNPCTroika::vfunc294(a)
	char sub_1000c081(int a);	// CAI_BaseNPCTroika::vfunc294 (stub 0x1000c081), called directly
	void vfunc444(void *pTask);	// slot 444 "CNPC_VGhoulCroucher::RunTask": scope trace (entity name); tasks 0x14a / 0x14b: when slot 251() holds (and for 0x14b setting the byte at +0x6667) calls sub_10273e80(0); other tasks go to CNPC_VHumanCombatant::vfunc444
	void sub_100080da(void *pTask);	// CNPC_VHumanCombatant::vfunc444 (stub 0x100080da), called directly
	void sub_10273e80(int a);	// called through the stub at 0x1000ac68
	int vfunc438();	// slot 438 "CNPC_VGhoulCroucher::SelectSchedule": scope trace (entity name), schedule 0x158 while the getter sub_1037bb20 is zero, 0x159 until the byte at +0x6667 is set (both record file / line at +0x1b30 / +0x1b34), else CNPC_VHumanCombatant::vfunc438
	virtual void vfunc77();	// slot 77 "CNPC_VGhoulCroucher::ScriptHide": scope trace (entity name), the Troika version, then slot 77 of the entity behind the handle at +0x6670 (when it is live)
	void sub_102c1ce0();	// CAI_BaseNPCTroika::vfunc77 (stub 0x10006d11), called directly
	virtual void vfunc78();	// slot 78 "CNPC_VGhoulCroucher::ScriptUnhide": scope trace (entity name), the Troika version, then slot 78 of the entity behind the handle at +0x6670 (when it is live)
	void sub_102c1ec0();	// CAI_BaseNPCTroika::vfunc78 (stub 0x10009ecb), called directly
	void vfunc103();	// slot 103 "Spawn": solid flags, picks the Malk mansion model by the bytes at +0x6664 / +0x6665, then the CNPC_VHumanCombatant spawn
	void sub_10012855(int flags);	// sets the solid flags, called with 0x4000000, 0x200000 and 0x8000
	void sub_1000bc08();	// CNPC_VHumanCombatant::vfunc103 (stub 0x1000bc08), called directly
	void vfunc104();	// slot 104: calls the stub 0x10009dbd (CNPC_VHumanCombatant::vfunc104), then sub_101d0ec0("item_w_claws_ghoul") and slot 13 of the global object g_1070b22c with the two Malkavian stalker model paths
	void vfunc105(const char *pszModel);	// slot 105 "SetModel": the Troika version, then the sound name "Zombie_Male" / "Zombie_Female" at +0xc0 (by IsMale), sound table index 2, and the sound group looked up in the global sound table
	void sub_10298ce0(const char *pszModel);	// CAI_BaseNPCTroika::vfunc105 (stub 0x10009b6f), called directly
	char sub_10336920();	// CBaseCombatCharacter::IsMale (stub 0x100092be)
	void vfunc24(void *pVictim);	// slot 24 "CNPC_VGhoulCroucher::OnVictimHitByMe": scope trace (entity name), when the burning variant byte (+0x6665) is set and the victim has the dword at +0xa8 calls sub_1037c090(that dword, 10.0f), then CAI_BaseNPCTroika::vfunc24(pVictim); declared as a plain member
	void sub_1037c090(void *pObject, float flValue);	// stub 0x10008855, called directly
	void sub_10006136(void *pVictim);	// CAI_BaseNPCTroika::vfunc24 (stub 0x10006136), called directly
	char vfunc379(void *pEnt, int b, int c, int d, int e, float f, float g);	// slot 379 override: as the burning variant (+0x6665) with an entity that has the dword at +0xa8, sub_1037c090(that dword, 10.0f) and false; else CAI_BaseNPCTroika::vfunc379
	char sub_1000f2b3(void *pEnt, int b, int c, int d, int e, float f, float g);	// CAI_BaseNPCTroika::vfunc379 (stub 0x1000f2b3), tail called
	void vfunc174(CBaseEntity *pOther);	// slot 174 "CNPC_VGhoulCroucher::StartTouch": scope trace (entity name), CBaseEntity::vfunc174(pOther); when pOther has the dword at +0xa8 or +0x94 sub_1037b6e0(pOther); then, as the burning variant (+0x6665) touching a character (+0xa8) and when the time at +0x666c has passed, pushes it ahead by a constant and calls sub_1037c090(that dword, 5.0f); declared as a plain member
	void sub_100a49d0(CBaseEntity *pOther);	// CBaseEntity::vfunc174 (stub 0x10009caf), called directly
	void vfunc420();	// slot 420 "CNPC_VWerewolf::NPCInit"-named: scope trace (entity name), the CNPC_VHumanCombatant version, Inventory_Destroy, gives the claws (item_w_claws_ghoul, stalker byte +0x6664 clear: item_w_knife), misc flag 0x10, and for the burning variant (+0x6665) spawns the fire emitter and stores its handle at +0x6670; then sub_10332aa0(1, 1, 10)
	void sub_1000dcba();	// CNPC_VHumanCombatant::vfunc420 (stub 0x1000dcba), called directly
	void sub_10334b10();	// CBaseCombatCharacter::Inventory_Destroy (stub 0x1000289c), called directly
	void sub_1033c6b0(unsigned int flags);	// CBaseCombatCharacter::AddMiscFlag (stub 0x100153a7), called directly
	void sub_10332aa0(int a, int b, int c);	// stub 0x10013cf5, called directly
	void vfunc431();	// slot 431 "NPCThink" (plain member): the Troika think, then, for the burning variant with a live fire emitter (handle +0x6670), the emitter's scale = 1 - remap(the float at +0x6264, 200, 600) (at least 0.1)
	void sub_10292de0();	// CAI_BaseNPCTroika::vfunc431 (stub 0x10002a7c), called directly
	void vfunc442(int *pTask);	// slot 442 "CNPC_VGhoulCroucher::StartTask": scope trace (entity name); task 0x14a: starts the activity sub_100079b4() and, unless the current activity (+0xff0) is it, slot 448(0x15); task 0x14b: the same with sub_1000e20a() and the byte at +0x6667 set; other tasks go to CNPC_VHumanCombatant::vfunc442
	void sub_1000a0c9(int *pTask);	// CNPC_VHumanCombatant::vfunc442 (stub 0x1000a0c9), called directly
	int sub_1000e20a();	// the activity of task 0x14b (the free getter at 0x1037b870)
	int sub_100079b4();	// the activity of task 0x14a (the free getter at 0x1037b890)
	void sub_10014524(int activity);	// CAI_BaseNPCTroika::sub_10289ee0 (stub 0x10014524): starts the activity
	void vfunc433();	// slot 433 "CNPC_VGhoulCroucher::GatherConditions": scope trace (entity name); not yet disturbed (byte +0x6666 clear): when sub_10269aa0(0x54) holds it calls sub_1037b6e0(this) and leaves, else, still clear, runs the debug hook (g_10924a6c slot 1) and sub_10269a20(0x79); disturbed: the Troika version, then, with sub_10269aa0(0x54) and no positive counter at +0x5bb0 and an enemy (+0x5da4, slot 167), tells that squad object sub_103161a0(slot 167)
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	char sub_10269aa0(int a);	// stub 0x10014df8, a condition test, called with 0x54
	void sub_10269a20(int a);	// stub 0x100041b0, called with 0x79

	char m_pad03e0[0xff0 - 0x3e0];
	int m_nActivityff0;	// +0xff0: the current activity
	char m_pad0ff4[0x10e4 - 0xff4];
	const char *m_pszName10e4;	// +0x10e4: the model-related name, null when its string is empty
	char m_pad10e8[0x19b0 - 0x10e8];
	int m_nVtable19b0;	// +0x19b0: vtable pointer of the second base (CAI_DefMovementSink)
	char m_pad19b4[0x1a98 - 0x19b4];
	int m_n1a98;	// +0x1a98
	char m_pad1a9c[0x1b30 - 0x1a9c];
	const char *m_pszFile1b30;	// +0x1b30: source file of the last schedule selection
	int m_nLine1b34;	// +0x1b34: its line
	char m_pad1b38[0x5bb0 - 0x1b38];
	int m_n5bb0;	// +0x5bb0: counter
	char m_pad5bb4[0x5da4 - 0x5bb4];
	int m_n5da4;	// +0x5da4: the squad object / enemy pointer
	char m_pad5da8[0x5dec - 0x5da8];
	int m_n5dec;	// +0x5dec
	char m_pad5df0[0x6264 - 0x5df0];
	float m_fl6264;	// +0x6264
	char m_pad6268[0x628c - 0x6268];
	unsigned int m_h628c;	// +0x628c: handle of the entity that disturbed the NPC
	char m_pad6290[0x6348 - 0x6290];
	int m_n6348[5];	// +0x6348: five distances, 999999 at spawn
	char m_pad635c[0x6664 - 0x635c];
	char m_b6664;	// +0x6664: stalker variant
	char m_b6665;	// +0x6665: burning variant
	char m_b6666;	// +0x6666
	char m_b6667;	// +0x6667
	int m_n6668;	// +0x6668: random 0..3
	float m_flNext666c;	// +0x666c
	unsigned int m_h6670;	// +0x6670: entity handle
	COutputEvent m_Out6674;	// +0x6674
	COutputEvent m_Out668c;	// +0x668c
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual void vfunc138();
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
	virtual void vfunc294_slot();
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
	virtual void vfunc379_slot();
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
	virtual void vfunc390_slot();
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
	virtual void vfunc431_slot();
	virtual void vfunc432();
	virtual void vfunc433_slot();
	virtual void vfunc434();
	virtual void vfunc435();
	virtual void vfunc436();
	virtual void vfunc437();
	virtual void vfunc438_slot();
	virtual void vfunc439();
	virtual void vfunc440();
	virtual void vfunc441();
	virtual void vfunc442_slot();
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
	virtual void vfunc461();
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
	char m_pad66a4[0x66a8 - 0x66a4];
};
