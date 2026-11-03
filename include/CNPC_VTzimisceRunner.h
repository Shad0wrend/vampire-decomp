// CNPC_VTzimisceRunner: the Tzimisce runner boss NPC.
// Declared standalone: the vtable slots are not modelled, so the position of the
// virtual below is not its real slot (599).
#pragma once

struct datamap_t;

class CAI_Motor;
class CUnknown1025ddd0;
class CEntityVSlots;

class CNPC_VTzimisceRunner
{
public:
	CNPC_VTzimisceRunner *sub_103c2fa0();	// constructor body (0x103c2fa0, returns this)
	CNPC_VTzimisceRunner *vfunc5(unsigned int flags);	// slot 5 (scalar deleting destructor, plain member): the record vector at +0x665c goes, then the Troika base's destructor body (stub 0x100123af), then the delete when bit 0 of flags is set
	void sub_1028d610();	// CAI_BaseNPCTroika destructor body (stub 0x100123af), called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CEntityVSlots *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	int sub_10015596();	// CAI_BaseNPCTroika::vfunc438 (0x10015596), called directly
	bool vfunc600(void *pEntity);	// slot 600: touches the global at 0x10924edc (slot 1), stores the handle of pEntity (-1 for null) at +0x6678, then toggles the byte at +0x6078 on the result of the behaviour object at +0x65e8 (sub_10015564(this, 0))
	void vfunc601(int unused);	// slot 601 (plain member, ret 4): touches the global at 0x10924edc (slot 1), sets the handle at +0x6678 to -1, clears the byte at +0x6078, then the behaviour object at +0x65e8 drops this (sub_1025ddd0(this), stub 0x10013d31)
	int vfunc310(int act);	// slot 310: when the byte at +0x6672 is set, maps activities 1/0xf1 -> 0x1134, 9 -> 0x1136, 0x13 -> 0x1137, 3 -> 0x1135; then the Troika base
	int sub_10295750(int act);	// CAI_BaseNPCTroika::vfunc310, called directly
	void vfunc104();	// "CNPC_VTzimisceRunner::Precache": the base precache, then every footstep / breath / exertion sound of the runner and the claw weapon
	void sub_100097b4();	// CAI_BaseNPCTroika::vfunc104 (Precache), called directly
	void vfunc130(int a);	// slot 130: the Troika version (sub_102998c0), then the size (50, 50, 82) and RemoveFlag2(4) as at spawn
	void sub_102998c0(int a);	// CAI_BaseNPCTroika::vfunc130 (stub 0x10002b99), called directly
	void vfunc103();	// slot 103 "Spawn" (plain member): the name pointers (null when empty), the fields at +0x6420.., the Troika spawn, solid flag 0x4000000, the runner bytes, flag 0x80 at +0x5b84, the size (50, 50, 82) and RemoveFlag2(4)
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly
	void sub_10012855(int flags);	// sets the solid flags, called directly
	void sub_1009b060(const float *pSize);	// stub 0x10001a50, called directly with a three-float vector
	void sub_100b3900(unsigned int flags);	// CBaseEntity::RemoveFlag2 (stub 0x1000df44), called directly
	void vfunc442(int *pEvent);	// slot 442 (plain member): the anim event handler: events 0x36 / 0x37 go to slot 618, 0x122..0x124 start activity 1 and stamp the time at +0x5db4 (curtime + the float at +0x6330), 0x130 remembers the position (slot 220) of the entity of the handle at +0x6678 at +0x5dd0 and runs sub_10273e80(0); then the Troika base
	void sub_1029b290(int *pEvent);	// CAI_BaseNPCTroika::vfunc259 (stub 0x100146e1), called directly (tail jump) by the slot 259 override 0x103c32c0
	int sub_102a1910(int *pEvent);	// CAI_BaseNPCTroika::vfunc442 (stub 0x10010695), called directly
	void sub_10289ee0(int activity);	// stub 0x10014524: starts the activity
	int sub_102b12f0(int schedule);	// CAI_BaseNPCTroika::vfunc440 \"TranslateSchedule\" (stub 0x10001997), called directly (tail jump) by the slot 440 override 0x103c3560
	void vfunc444(int *pEvent);	// slot 444
	void sub_102aacf0(int *pEvent);	// CAI_BaseNPCTroika::vfunc444 (stub 0x10015c2b), called directly
	bool sub_10280a50();	// CAI_BaseNPC::AutoMovement (stub 0x1000cf6d), called directly
	void sub_10273e80(int a);	// CAI_BaseNPC member (stub 0x1000ac68), called directly
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	void sub_10269b50(int a);	// stub 0x10015839: the sound / event call with the index a, made twice by vfunc433
	void vfunc619(char bRight);	// slot 619 (plain member): a footstep (the left or right foot table at 0x1065d680 / 0x1065d688, random of two) and a breath (table 0x1065d690, random of four) from the edict at +0x2e0, channel 4, volume 1.0, attenuation 0.8, to the players that can hear it, reliably
	void vfunc336();	// slot 336 (plain member): when the engine time (slot 119 of the engine) differs from the time at +0x6674: sub_10273070(1), clears the byte at +0x6672, sets the byte at +0x5f2c
	void sub_10273070(int a);	// CAI_BaseNPC member (stub 0x1000dc29), called directly
	void vfunc618();	// slot 618 (plain member): plays one of the 0x1065d6a0 sounds (channel 4, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)

	char pad4[0x2e0 - 4];
	int m_pEdict2e0;	// +0x2e0
	char pad2e4[0xfe0 - 0x2e4];
	char m_b0fe0;	// +0xfe0
	char pad0fe1[0x10e4 - 0xfe1];
	const char *m_pszName10e4;	// +0x10e4: the model-related name, null when its string is empty
	char pad10e8[0x5b80 - 0x10e8];
	char m_b5b80;	// +0x5b80
	char pad5b81[0x5b84 - 0x5b81];
	unsigned int m_nFlags5b84;	// +0x5b84
	char pad5b88[0x5cc0 - 0x5b88];
	int m_n5cc0;	// +0x5cc0
	char pad5cc4[0x5d44 - 0x5cc4];
	CAI_Motor *m_pMotor;	// +0x5d44
	char pad5d48[0x5db4 - 0x5d48];
	float m_flTime5db4;	// +0x5db4
	char pad5db8[0x5dd0 - 0x5db8];
	float m_v5dd0[3];	// +0x5dd0: a remembered position
	char pad5ddc[0x5f2c - 0x5ddc];
	char m_b5f2c;	// +0x5f2c
	char pad5f2d[0x6078 - 0x5f2d];
	char m_b6078;	// +0x6078
	char pad6079[0x6268 - 0x6079];
	float m_f6268;	// +0x6268
	char pad626c[0x6330 - 0x626c];
	float m_f6330;	// +0x6330: a delay
	char pad6334[0x63ac - 0x6334];
	const char *m_pszName63ac;	// +0x63ac
	char pad63b0[0x63ec - 0x63b0];
	int m_n63ec;	// +0x63ec
	char pad63f0[0x6420 - 0x63f0];
	int m_n6420;	// +0x6420 .. +0x642c cleared at spawn
	int m_n6424;
	int m_n6428;
	int m_n642c;
	int m_n6430;	// +0x6430: 100 at spawn
	char pad6434[0x65e8 - 0x6434];
	CUnknown1025ddd0 *m_pBehaviour65e8;	// +0x65e8
	char m_pad65ec[0x6671 - 0x65ec];
	bool m_bDeathNoticeProcessed;	// 0x6671
	char m_b6672;	// +0x6672
	char pad6673[1];
	float m_f6674;	// +0x6674: an engine time
	unsigned int m_h6678;	// +0x6678: entity handle, -1 at spawn
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5_slot();
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
	virtual bool vfunc70();
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
	virtual void vfunc103_slot();
	virtual void vfunc104_slot();
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
	virtual void vfunc117();
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
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130_slot();
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
	virtual void vfunc223();
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226();
	virtual void vfunc227();
	virtual void vfunc228();
	virtual void vfunc229();
	virtual void vfunc230();
	virtual void vfunc231();
	virtual void vfunc232();
	virtual void vfunc233();
	virtual void vfunc234();
	virtual void vfunc235();
	virtual void vfunc236();
	virtual void vfunc237();
	virtual void vfunc238();
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
	virtual void vfunc259(int *pEvent);	// slot 259 (0x103c32c0): the anim event handler: events 0x802 / 0x803 run game slot 619 (slot618 here) with 1 / 0, the rest goes to the Troika base (sub_1029b290)
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
	virtual void vfunc310_slot();
	virtual void vfunc311();
	virtual void vfunc312();
	virtual void vfunc313();
	virtual void vfunc314();
	virtual void vfunc315();
	virtual void vfunc316();
	virtual void vfunc317();
	virtual void vfunc318();
	virtual char vfunc319(int, int);	// the game's slot 320 (+0x500): this header's numbering is one ahead from here on
	virtual char vfunc320(int, int);	// slot 320: forwards to CAI_BaseNPCTroika::vfunc320 with the second argument replaced by 0x79 (the forwarder 0x103c43f0 stores it over the stack argument), returns the callee's char in al
	virtual void vfunc321();
	virtual void vfunc322();
	virtual void vfunc323();
	virtual bool vfunc324();
	virtual bool vfunc325();
	virtual void vfunc326();
	virtual void vfunc327();
	virtual void vfunc328();
	virtual bool vfunc329();
	virtual char vfunc330(int unused, void *pEnt);	// slot 330 (ret 8): slot 320(the field at +0x9c of the object at +0x94 of pEnt, 0 without that object, 0x79) as a tail call; the first argument is unused
	virtual void vfunc331();
	virtual void vfunc332();
	virtual void vfunc333();
	virtual void vfunc334();
	virtual void vfunc335();
	virtual void vfunc336_slot();
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
	virtual bool vfunc399();
	virtual bool vfunc400();
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
	virtual void vfunc431();
	virtual void vfunc432();
	virtual void vfunc433();
	virtual void vfunc434();
	virtual void vfunc435();
	virtual void vfunc436();
	virtual void vfunc437();
	virtual int vfunc438();
	virtual void vfunc439();
	virtual int vfunc440(int schedule);	// the game's slot 440 \"TranslateSchedule\" override (0x103c3560: 199 -> 200, 231 -> 0x156, else CAI_BaseNPCTroika::vfunc440 via sub_102b12f0); this header's numbering is one ahead, so this placeholder stands for game slot 441: fix the numbering before relying on it
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
	virtual void vfunc581();
	virtual void vfunc582();
	virtual void vfunc583();
	virtual void vfunc584();
	virtual void vfunc585();
	virtual void vfunc586();
	virtual void vfunc587();
	virtual int vfunc588();
	virtual void vfunc589();
	virtual void vfunc590();
	virtual void vfunc591();
	virtual void vfunc592();
	virtual void vfunc593();
	virtual void vfunc594();
	virtual void vfunc595();
	virtual void vfunc596();
	virtual void vfunc597();
	virtual void vfunc598();
	virtual bool vfunc599(void *pEntity);
	virtual void x600(); virtual void x601(); virtual char vfunc602(); virtual void x603(); virtual void x604();
	virtual void x605(); virtual void x606(); virtual void x607(); virtual void x608(); virtual void x609();
	virtual void x610(); virtual void x611(); virtual void x612(); virtual void x613(); virtual void x614();
	virtual void x615(); virtual void x616(); virtual void x617();
	virtual void slot618();	// the sound step called by the anim event handler (vfunc618 is its plain member twin)
	virtual void slot619(char bRight);	// slot 619 (+0x9ac): the footstep sound step (vfunc619 is its plain member twin), called with 1 (right) / 0 (left) by the anim event handler 0x103c32c0
};
