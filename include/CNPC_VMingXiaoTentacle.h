// CNPC_VMingXiaoTentacle: tentacle NPC (derived from CAI_BaseNPC at +0x0).
// The vtable slots are *not* modelled here, so the declaration order of the
// virtuals below carries no meaning -- add the padding slots before using a
// virtual call through this class.
#pragma once

class CBaseEntity;

class CNPC_VMingXiaoTentacle
{
public:
	CNPC_VMingXiaoTentacle *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100123af();	// as in CPhysForce (transplant)
	int sub_100025cc(int a);	// CAI_BaseNPCTroika::vfunc126 (stub 0x100025cc), called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void *vfunc408(int condition);	// slot 408 override: the address of the state's data for the conditions 0x77 / 0x78 / 0x79 (0x1064a42c / 0x1064a430 / 0x1064a434), else the base's slot 408 (sub_1027ede0, tail call)
	void *sub_1027ede0(int condition);	// CAI_BaseNPC::vfunc408 (stub 0x10011590), called directly
	int vfunc461();	// "CNPC_VMingXiaoTentacle::SelectIdealState": picks the ideal state (1, 2 or 7) and its schedule from slot 167
	void sub_1039ea60();	// stub 0x10007266, run by the NPC's Event_Killed on every tentacle
	void sub_10395ce0();	// stub 0x1000d9fe, run on every live tentacle of the new-slot handles (+0x668c)
	void sub_1039ef90(float *pPos);	// called through the stub at 0x1000d1f2: scope work, then copies the three floats of pPos to +0x668c
	void vfunc104();	// "CNPC_VMingXiaoTentacle::Precache": default model when none is set, base Precache, then the baby / transformation models (handles at +0x6664..+0x666c), three particle emitters and two sounds
	void vfunc103();	// "CNPC_VMingXiaoTentacle::Spawn": solid flags 0x4000000 / 0x200000, the base spawn, 0x80000 flag, clears the tentacle state, arms the timer at +0x6684 (curtime + const), removes flag2 4
	void vfunc390(int a);	// slot 390 (OnTakeDamage-like) override: clears the field at +0x6680, records the source file / line (0x549) at +0x1b30 / +0x1b34, the Troika schedule 0x168 (sub_102ae750), then CAI_BaseNPCTroika::vfunc390(a)
	void vfunc433();	// "CNPC_VMingXiaoTentacle::RunAI"-like: sets the conditions 0x77 and 0x79, the Troika base, then (with a slot 167 target, the time at +0x6678 passed and the float at +0x6268 not above the limit) rings the dev object and fails task 0x77; once the time at +0x6674 has passed it does the same for task 0x79
	bool vfunc68(CBaseEntity *pOther);	// slot 68 override: true when pOther is null or (pOther has no field at +0x9c and this is not flagged at +0x6688); else CAI_BaseNPCTroika::vfunc68(pOther) (tail call)
	void sub_10269b50(int condition);	// CAI_BaseNPC member (stub 0x10015839), called directly
	void sub_10332ca0(CBaseEntity *pTarget, int a, int b);	// CBaseCombatCharacter member (stub 0x10005849), called directly with (target, 1, 5)
	void sub_10269a20(int a);	// CAI_BaseNPC member (stub 0x100041b0), called directly
	void sub_102b27f0();	// CAI_BaseNPCTroika::vfunc433 (stub 0x10013f2f), called directly
	void sub_10012855(int flags);	// sets the solid flags (stub of the entity member), called directly
	void sub_1000303a();	// CAI_BaseNPCTroika::vfunc103 (Spawn), called directly
	void sub_100153a7(int flags);	// CBaseCombatCharacter member (stub of 0x1033c6b0), called directly
	void sub_1000df44(unsigned int flags);	// CBaseEntity::RemoveFlag2 (stub of 0x100b3900), called directly
	void sub_1039e970();	// starts the schedule of the tentacle state (+0x6670): 2 -> 0x16a, 3 -> 0x16a / 0x16c by the check of activity 0x1d, else after sub_1039f310 0x16b; each records the source file / line at +0x1b30 / +0x1b34; then take-damage mode 1 and the flag bytes at +0x6699 / +0x63d8
	int sub_10295460(int a, int b);	// CAI_BaseNPCTroika member (stub 0x10009c14), called directly
	void sub_102ae750(int schedule, int a);	// CAI_BaseNPCTroika member (stub 0x1000198d), called directly
	void sub_1039f310();	// stub 0x100072ac
	void sub_1039ee20(void *pArg);	// builds the doubled (x / y only) bounds of hull 0xf (NAI_Hull Mins / Maxs) and hands them with the mask 0x202400b to sub_102a0fb0
	bool sub_102a0fb0(void *pArg, int mask, float *pMins, float *pMaxs);	// stub 0x10001f50, called directly
	void sub_1039f030();	// sound emitter of the same shape as sub_1039f1a0
	void sub_1039f1a0();	// plays one of the 0x106477cc sounds (channel 2, volume 1.0, attenuation 0.8) from the edict at +0x2e0 to the players that can hear it, reliably (PAS attenuation filter inline)
	char vfunc166(CBaseEntity *pEnt);	// slot 166: false for the player (sub_1039ede0) or a null entity; else true unless the entity's slot 164 answers false
	void vfunc144(int a);	// slot 144 "Event_Killed"-like: while the byte at +0x6699 is clear sets +0x200 = 1 and starts the state schedule (sub_1039e970); else tells the player-side owner (sub_1039ede0) to free this tentacle's slot (sub_103979d0), then the Troika base
	void sub_102bf340(int a);	// CAI_BaseNPCTroika::vfunc144 (stub 0x1000a62d), called directly
	void *sub_1039ede0();
	char sub_1039eee0();	// the player's CNPC_VMingXiao slot (sub_10397b40) for this tentacle, or 0 when there is no player	// CBasePlayer::sub_1039ede0 (stub 0x1001105e), called directly: the player entity

	char m_pad0004[0x200 - 4];
	int m_nTakeDamage;	// 0x200
	char m_pad0204[0x1b30 - 0x204];
	const char *m_pszFile1b30;	// 0x1b30: source file of the last schedule selection
	int m_nLine1b34;	// 0x1b34: its line
	char m_pad1b38[0x6078 - 0x1b38];
	char m_b6078;	// 0x6078: set to 1 by vfunc599
	char m_pad6079[0x63d8 - 0x6079];
	char m_b63d8;	// 0x63d8
	char m_pad63d9[0x65c8 - 0x63d9];
	int m_nAct65c8;	// 0x65c8
	char m_pad65cc[0x6660 - 0x65cc];
	int m_nSlotIndex6660;	// 0x6660: this tentacle's slot index in its owner
	int m_nModelIndex6664;	// 0x6664: PrecacheModel result of the baby model
	int m_nModelIndex6668;	// 0x6668: PrecacheModel result of the baby model (again)
	int m_nModelIndex666c;	// 0x666c: PrecacheModel result of the transformation model
	int m_n6670;	// 0x6670
	int m_n6674;	// 0x6674
	int m_n6678;	// 0x6678
	int m_n667c;	// 0x667c
	int m_n6680;	// 0x6680
	float m_flTimer6684;	// 0x6684
	char m_b6688;	// 0x6688
	char m_pad6689[0x6698 - 0x6689];
	char m_b6698;	// 0x6698
	char m_b6699;	// 0x6699
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
	virtual void vfunc22(int arg);
	virtual void vfunc23(int arg);
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
	virtual void vfunc68_slot();
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
	virtual int vfunc82();
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
	virtual int vfunc127(int a);
	int sub_1000527c(int a);	// CAI_BaseNPCTroika::vfunc127 (stub 0x1000527c), called directly
	virtual void vfunc128();
	virtual void vfunc129();
	virtual void vfunc130(int a);
	void sub_10002b99(int a);	// CAI_BaseNPCTroika::vfunc130 (stub 0x10002b99), called directly
	virtual void vfunc131();
	virtual void vfunc132();
	virtual void vfunc133();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void vfunc139();
	virtual void vfunc140();
	virtual void vfunc141();
	virtual void vfunc142();
	virtual void vfunc143();
	virtual void vfunc144_slot();
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
	virtual void vfunc166_slot();
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
	virtual int vfunc337();
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
	virtual void vfunc408_slot();
	virtual int vfunc409();
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
	virtual void vfunc433_slot();
	virtual void vfunc434();
	virtual void vfunc435();
	virtual void vfunc436();
	virtual int vfunc437();
	virtual void vfunc438();
	virtual void vfunc439();
	virtual void vfunc440();
	virtual void vfunc441();
	virtual void vfunc442();
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
	virtual float vfunc522();
	virtual float vfunc523();
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
	virtual void vfunc588();
	virtual void vfunc589();
	virtual void vfunc590();
	virtual void vfunc591();
	virtual void vfunc592();
	virtual void vfunc593();
	virtual void vfunc594();
	virtual void vfunc595();
	virtual void vfunc596(CBaseEntity *pTarget);
	virtual void vfunc597();
	virtual void vfunc598();
	virtual char vfunc599(int unused);
	virtual char vfunc600(int unused);
	virtual void vfunc601(int a);
	virtual bool vfunc602();
};
