// CNPC_VBach: the Bach boss NPC. Members are declared at their real offsets; the virtual slots 134..580 keep
// the numbering of the game's primary vtable (slots 0..133 come from CBaseEntity).
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

class CAI_Motor;
class CUnknown102e0150;

class CNPC_VBach : public CBaseEntity
{
public:
	CNPC_VBach *vfunc5(unsigned int flags);
	void sub_100123af();
	virtual void vfunc103();	// slot 103 "Spawn"
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc606(int arg);	// slot 606
	int sub_102b8320(int arg);	// CAI_BaseNPCTroika::vfunc606 (stub), called directly
	int vfunc609(char arg);	// slot 609
	int sub_10363c70(void *info);	// slot 390 override (damage info)
	CNPC_VBach *sub_10362c10();	// as in CKeepUpright (transplant)
	void vfunc104();	// slot 104 "Precache"
	void sub_100013f7();	// CNPC_VHuman::vfunc104, called directly
	void vfunc432(int arg);	// slot 432
	void sub_10279a50(int a);	// CAI_BaseNPC::sub_10279a50, called directly
	void sub_10385a10(int arg);	// CNPC_VHuman::vfunc432, called directly
	int vfunc440(int schedule);	// slot 440 "TranslateSchedule"
	int sub_103851c0(int schedule);	// CNPC_VHuman::vfunc440 (stub 0x10005e20), called directly
	CBaseEntity *sub_10007e19();	// the active weapon (CBaseCombatCharacter, stub 0x10007e19)
	int sub_1008dc40(int a, int b);	// CBaseAnimating::SelectWeightedSequence, called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition, called directly
	void sub_1026dc00(unsigned int flags);	// stub 0x10012855, called directly by Spawn with 0x200000
	void sub_1026dc30(int a);	// stub 0x1001005f, called directly by Spawn with 1
	void sub_103c4ef0();	// CNPC_VVampire::vfunc103, called directly
	int vfunc604(int arg);	// slot 604
	int vfunc605(int arg);	// slot 605
	int sub_10386560(int arg);	// CNPC_VHuman::vfunc605, called directly
	int sub_10385e40(int arg);	// CNPC_VHuman::vfunc604, called directly
	void sub_103656a0();	// gives the NPC the "item_d_holy_light" discipline weapon
	void *sub_1032e120(const char *pszName);	// creates the named item for the character
	char sub_10334c20(void *pItem);	// adds the item to the character's inventory
	void sub_10365860(const char *pszTarget, float flSpeed);	// throws "item_w_grenade_frag" at the named target
	void sub_10272650(int code);	// stub 0x100097d2, called directly with 5 to end the task
	void sub_10384ab0(void *pTask);	// CNPC_VHuman::vfunc444 (stub 0x10011928), called directly
	void sub_10273e80(char a);
	void sub_10365840();	// empty body (stub 0x100105b9), called directly

	char m_pad03e0[0x1b30 - 0x3e0];
	const char *m_pszSchedFile;	// 0x1b30: source file of the last schedule choice
	int m_nSchedLine;	// 0x1b34: source line of the last schedule choice
	char m_pad1b38[0x1b44 - 0x1b38];
	const char *m_pszFile1b44;	// 0x1b44: source file stamp (third pair)
	int m_nLine1b48;	// 0x1b48: its line
	char m_pad1b4c[0x5b80 - 0x1b4c];
	char m_b5b80;
	char m_pad5b81[0x5ba8 - 0x5b81];
	EHANDLE m_h5ba8;	// 0x5ba8: a handle to an entity (the current distance target)
	char m_pad5bac[0x5cc0 - 0x5bac];
	int m_n5cc0;
	char m_pad5cc4[0x5d44 - 0x5cc4];
	CAI_Motor *m_pMotor5d44;	// 0x5d44: the NPC's motor
	char m_pad5d48[0x5db4 - 0x5d48];
	union { int m_n5db4; float m_fl5db4; };	// 0x5db4: a time
	char m_pad5db8[0x6444 - 0x5db8];
	int m_n6444;
	char m_pad6448[0x6664 - 0x6448];
	int m_n6664;
	int m_n6668;
	int m_n666c;
	int m_n6670;
	int m_n6674;
	int m_n6678;
	int m_n667c;
	int m_n6680;
	union { int m_n6684; float m_fl6684; };	// the time of the byte at +0x66a5
	union { int m_n6688; float m_fl6688; };
	union { int m_n668c; float m_fl668c; };
	union { int m_n6690; float m_fl6690; };
	union { int m_n6694; float m_fl6694; };	// 0x6694: a time
	int m_n6698;
	int m_n669c;
	char m_b66a0;
	char m_b66a1;
	char m_b66a2;
	char m_b66a3;
	char m_b66a4;
	char m_b66a5;
	char m_b66a6;
	char m_b66a7;
	char m_b66a8;

public:
	virtual datamap_t *vfunc82();
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void vfunc139();
	virtual void vfunc140_slot();
	virtual void vfunc141();
	virtual void vfunc142();
	virtual void vfunc143_slot();
	virtual void vfunc144(int);
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
	virtual CBaseEntity *vfunc167();	// slot 167: the enemy (CAI_BaseNPC::GetEnemy 0x101a67e0)
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
	virtual Vector *vfunc217_slot();
	virtual void vfunc218_slot();
	virtual void vfunc219_slot();
	virtual void vfunc220_slot();
	virtual void vfunc221_slot();
	virtual Vector GetSoundEmissionOrigin();	// slot 222 (CBaseEntity::vfunc222): fills and returns the vector
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
	virtual void * vfunc309();
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
	virtual void vfunc431();
	virtual void vfunc432_slot();
	virtual void vfunc433();
	virtual void vfunc434();
	virtual void vfunc435();
	virtual void vfunc436();
	virtual void vfunc437();
	virtual int vfunc438();
	virtual void vfunc439();
	virtual void vfunc440_slot();
	virtual void vfunc441();
	virtual void vfunc442(int *pTask);
	virtual void vfunc443();
	virtual void vfunc444(void *pTask);	// slot 444 "StartTask"
	virtual void vfunc445();
	virtual void vfunc446();
	virtual void vfunc447();
	virtual void vfunc448(int a);	// slot 448 "TaskFail"
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
	virtual int vfunc461();
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
	virtual CUnknown102e0150 *vfunc541();	// slot 541: the NPC's enemy memory list
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
	virtual void vfunc561(int a, float flDist);
	void sub_1026dd10(int a, float flDist);	// CAI_BaseNPC::vfunc561, called directly
	void sub_10269a20(int cond);
	virtual void vfunc562();
	virtual void vfunc563();
	virtual void vfunc564();
	virtual void vfunc565();
	virtual bool vfunc566(CBaseEntity *pHint);
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
