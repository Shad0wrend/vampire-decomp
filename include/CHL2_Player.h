// CHL2_Player: the HL2 player entity (derived from CBasePlayer at +0).
// Slots 0..439 are placeholders that keep the slot indices; the named ones
// from 440 on are the ones decompiled code uses.
#pragma once

struct datamap_t;

#include "CUnknown1012cf10.h"
#include "Vector.h"

struct CTakeDamageInfo;

#define CHL2_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CHL2_V100(p) CHL2_V10(p##0) CHL2_V10(p##1) CHL2_V10(p##2) CHL2_V10(p##3) CHL2_V10(p##4) CHL2_V10(p##5) CHL2_V10(p##6) CHL2_V10(p##7) CHL2_V10(p##8) CHL2_V10(p##9)

// Stand-in for the real CBasePlayer base (not modelled here, see CBasePlayer.h): a base whose
// constructor is the CBasePlayer constructor, so CHL2_Player's constructor calls it first.
// It owns the vptr at +0 (slot 0 is declared here, CHL2_Player overrides it).
struct CHL2_PlayerBase
{
	CHL2_PlayerBase();
	virtual void pa00();
};

// The member at +0x2464, constructed by CUnknown1012cf10::sub_1012cf10.
struct CHL2_PlayerMember2464 : public CUnknown1012cf10
{
	CHL2_PlayerMember2464() { sub_1012cf10(); }
};

class CHL2_Player : public CHL2_PlayerBase
{
public:
	CHL2_Player();

	CHL2_V10(pa0) CHL2_V10(pa1)	// slots 0..19
	virtual void pa20(); virtual void pa21(); virtual void pa22(); virtual void pa23(); virtual void pa24(); virtual void pa25(); virtual void pa26(); virtual void pa27();	// slots 20..27
	virtual float vfunc28(); virtual float vfunc29();	// slots 28, 29
	virtual float vfunc30(); virtual void vfunc31(int pDump);	// slot 31 "Dump": dumps the suit power fields, then the player base's Dump
	virtual void pa32(); virtual void pa33(); virtual void pa34(); virtual void pa35(); virtual void pa36(); virtual void pa37(); virtual void pa38(); virtual void pa39();
	CHL2_V10(pa4) CHL2_V10(pa5) CHL2_V10(pa6) CHL2_V10(pa7)	// slots 40..79
	virtual int vfunc80(); virtual int vfunc81(); virtual datamap_t * vfunc82(); virtual void pa83(); virtual void pa84(); virtual void pa85(); virtual char vfunc86(int a, int b, int c, int d, int e); virtual void pa87(); virtual void pa88(); virtual void pa89();	// slots 80..89
	virtual void pa90(); virtual void pa91(); virtual int vfunc92(); virtual void pa93(); virtual int vfunc94();	// slots 90..94
	virtual void pa95(); virtual void pa96(); virtual void pa97(); virtual void pa98(); virtual void pa99();	// slots 95..99
	virtual void pb00(); virtual void pb01(); virtual void pb02();	// slots 100..102
	virtual void vfunc103();	// slot 103 "CHL2_Player::Spawn": clears the byte at +0x2544, slot 408 / 407 around the flag tests of CUnknown1015ef20 (bit 5 of +0x19c follows them), the player base (sub_1016d260), then CBasePlayer::vfunc103 when slot 406 says so
	virtual void pb04(); virtual void pb05(); virtual void pb06(); virtual void pb07(); virtual void pb08(); virtual void pb09();	// slots 104..109
	CHL2_V10(pb1) CHL2_V10(pb2) CHL2_V10(pb3)	// slots 110..139
	virtual void pb40(); virtual void pb41();	// slots 140, 141
	virtual int vfunc142(const CTakeDamageInfo *pInfo);	// slot 142 "OnTakeDamage": a damage above zero (the CVDmg_t's GetDmg when the record has one, else the plain damage at +0x30) stamps the time at +0x253c and punches the view by a random angle scaled by the damage (and a convar), then the player base
	virtual void pb43(); virtual void vfunc144(int a); virtual void pb45(); virtual void pb46(); virtual void pb47(); virtual void pb48(); virtual void pb49();	// slots 143..149
	CHL2_V10(pb5)	// slots 150..159
	virtual void pb60(); virtual void pb61(); virtual void pb62(); virtual void pb63(); virtual void pb64(); virtual void pb65(); virtual void pb66(); virtual void pb67(); virtual void pb68();	// slots 160..168
	virtual void vfunc169(const Vector *pPunch);	// slot 169: takes the pointer of a view punch angle
	virtual void pb70(); virtual void pb71(); virtual void pb72(); virtual void pb73(); virtual void pb74();	// slots 170..174
	virtual void vfunc175(CBaseEntity *pEnt);	// slot 175: flags the byte at +0x2128 when pEnt (not the slot 209 entity) is a type 7 / 6 entity whose object at +0x36c answers slot 1 false
	virtual void pb76(); virtual void pb77(); virtual void pb78(); virtual void pb79();	// slots 176..179
	CHL2_V10(pb8)	// slots 180..189
	virtual void pb90(); virtual void pb91(); virtual void pb92(); virtual void pb93(); virtual void pb94(); virtual void pb95();	// slots 190..195
	virtual Vector vfunc196();	// slot 196: the camera position record of the viewed entity (+0x5ec) when that entity qualifies, else the base's
	virtual void pb97(); virtual void pb98(); virtual void pb99();	// slots 197..199
	Vector sub_100b4c00();	// CBaseEntity::vfunc196, called directly (stub 0x1000a961)
	virtual void pc00(); virtual void pc01(); virtual void pc02(); virtual void pc03(); virtual void pc04(); virtual void pc05(); virtual void pc06(); virtual void pc07(); virtual void pc08();	// slots 200..208
	virtual CBaseEntity *vfunc209();	// slot 209: the ground / move parent entity
	CHL2_V10(pc1) CHL2_V10(pc2) CHL2_V10(pc3) CHL2_V10(pc4) CHL2_V10(pc5) CHL2_V10(pc6)	// slots 200..269
	virtual void pc70(); virtual void pc71(); virtual void pc72(); virtual void pc73(); virtual void pc74(); virtual void pc75(); virtual void pc76();	// slots 270..276
	virtual void vfunc277(const Vector *pVec);	// slot 277: takes the pointer of a vector (the camera offset record at +0xe50 for slot 333)
	virtual void pc78(); virtual void pc79();	// slots 278..279
	CHL2_V10(pc8) CHL2_V10(pc9)	// slots 280..299
	CHL2_V10(pd0) CHL2_V10(pd1) CHL2_V10(pd2)	// slots 300..329
	virtual void pd30(); virtual void pd31(); virtual void pd32();	// slots 330..332
	virtual void vfunc333(int unused);	// slot 333: the camera offset: (the second vector of the viewpoint query) * 300.0f + the first one, kept at +0xe44 and copied to +0xe50, then slot 277(+0xe50)
	virtual void pd34(); virtual void pd35(); virtual void pd36(); virtual void pd37(); virtual void pd38(); virtual void pd39();	// slots 334..339
	CHL2_V10(pd4) CHL2_V10(pd5)	// slots 340..359
	virtual void pd60(); virtual void pd61(); virtual void pd62(); virtual void pd63(); virtual void pd64(); virtual void pd65(); virtual bool vfunc366(int, int, int);	// slots 360..366
	virtual Vector vfunc367();	// slot 367: returns a vector by value (hidden result pointer; its y is the base of the angle vfunc371 builds)
	virtual void pd68(); virtual void pd69();	// slots 368..369
	virtual void pd70();	// slot 370
	virtual Vector vfunc371();	// slot 371: the forward direction of the angle (+0xe60, slot 367's y + +0xe5c, 0)
	virtual void pd72(); virtual void pd73();	// slots 372..373
	virtual int vfunc374(int count, int ammoIndex, int unused);	// slot 374 "CHL2_Player::GiveAmmo": remembers whether the active weapon (which answers sub_10253b40(0)) has no ammo of the type, gives the ammo through the base, and when it had none and the game rules (slot 20) agree switches to the next best weapon
	virtual void pd75(); virtual void pd76(); virtual void pd77(); virtual void pd78(); virtual void pd79();	// slots 375..379
	CHL2_V10(pd8) CHL2_V10(pd9)	// slots 380..399
	virtual void pe00(); virtual void pe01(); virtual void pe02(); virtual void pe03(); virtual void pe04(); virtual void pe05();	// slots 400..405
	virtual bool vfunc406();	// slot 406: answers whether the base spawn continues (see vfunc103)
	virtual void vfunc407(); virtual void vfunc408();	// slots 407 / 408
	virtual void pe09();	// slot 409
	CHL2_V10(pe1) CHL2_V10(pe2) CHL2_V10(pe3)	// slots 410..439
	virtual void vfunc440(); virtual void vfunc441(); virtual void vfunc442(); virtual void vfunc443(); virtual void vfunc444();
	virtual int vfunc445(); virtual void vfunc446(); virtual void vfunc447(); virtual void vfunc448(); virtual void vfunc449();
	virtual void vfunc450(); virtual void vfunc451(); virtual void vfunc452();
	virtual CBaseEntity *vfunc453();	// "GetPlayerSpawnSpot"-like: picks the next info_player_coop / info_player_start entity after the last spawn (global 0x107260ac), else the entity named like the map; warns when none
	virtual void vfunc454();
	virtual void vfunc455(); virtual void vfunc456(); virtual void vfunc457(); virtual void vfunc458(); virtual void vfunc459();
	virtual void vfunc460(); virtual void vfunc461();
	virtual void vfunc462(void *pCmd, void *pExtra);	// slot 462 \"CHL2_Player::PlayerRunCommand\"-like: the button state of the command (+0x34) goes to the player base, a live entity in the handle at +0x1db0 clears the command (or only its three movement floats while the byte at +0x1edc is set), then the two sprint-like meters (+0x2534 / +0x2538, each 0..4) charge or drain by the command's time (+0x10) depending on whether it moves; the command goes on to the player base
	virtual void vfunc463(); virtual void vfunc464();
	virtual void vfunc465(); virtual void vfunc466(); virtual void vfunc467(); virtual void vfunc468(); virtual void vfunc469();
	virtual void vfunc470(); virtual void vfunc471();
	virtual void vfunc472();
	virtual bool vfunc473(float value);
	virtual void vfunc474(float value);
	virtual void vfunc475(int value);
	virtual int vfunc476();
	virtual void vfunc477(unsigned int *pPower);	// slot 477 "SUIT POWER TRIED TO ADD A DUPLICATE DEVICE": sets the power's flag bits in +0x252c (pPower[0]) and adds its amount (the float at pPower[1]) to +0x2530
	virtual void vfunc478(unsigned int *pPower);	// slot 478 "SUIT POWER TRIED TO REMOVE AN INACTIVE DEVICE": clears the power's flag bits in +0x252c (pPower[0]) and takes its amount (the float at pPower[1]) off +0x2530
	virtual int vfunc479();	// 0x1034f3f0: 1 while m_n252c is 0 and the float at +0x2464 is under 100, else 0 (an int: mov eax,1); callers test only al (0x103528d0)
	virtual float vfunc480();
	virtual float vfunc481();
	virtual float vfunc482();
	virtual int vfunc483();
	virtual void vfunc484();
	virtual bool vfunc485(int);

	void sub_1009ba60(int a, char *text, int value);	// CBaseEntity::sub_1009ba60 (stub 0x1000d454), called directly
	void sub_1009b980(int a, char *text, int value);	// CBaseEntity::DumpInt (stub 0x1000b776), called directly
	void sub_1015e140(int pDump);	// CBasePlayer::vfunc31 (stub 0x10001555), called directly
	int sub_1034fd90(int a);	// slot 370 (called through the vtable): stores the forward y (slot 367's y + +0xe5c) through sub_1000ecd2(a, y) and answers a
	void sub_10014eb6(float *pFirst, float *pSecond);	// CBaseCombatCharacter::sub_10014eb6 (viewpoint query, stub 0x10014eb6), called directly by slot 333
	int vfunc138();	// slot 138: the dword at +0x2460, or 1 when it is 0
	int vfunc372(int a);	// slot 372: vtable slot 370 with the argument, then the argument
	int vfunc373(int a);
	void sub_101668b0();	// 0x101668b0: the death/ragdoll state machine called by vfunc436 (no stack args)
	char sub_10170fe0();	// 0x10170fe0 (this in ecx, no args): the state test called by sub_101668b0
	void sub_10166cc0();	// 0x10166cc0 (this in ecx, no args): the death follow-up called by sub_101668b0	// slot 373: vtable slot 371 with the argument, then the argument
	char m_pad0004[0xe44 - 4];	// 0x0004 .. 0x0e43
	Vector m_vecE44;	// 0x0e44
	Vector m_vecE50;	// 0x0e50
	float m_fe5c;	// 0x0e5c: added to the forward y of slot 367 (slot 370)
	char m_pad0e60[0x2460 - 0xe60];
	int m_nControlClass;	// 0x2460	// 0x0e60 .. 0x2463
	CHL2_PlayerMember2464 m_u2464;
	Vector m_vecMissPositions[16];	// 0x2468	// 0x2468 .. 0x2527
	int m_n2528;
	int m_n252c;
	float m_f2530;
	float m_flIdleTime;	// 0x2534
	float m_flMoveTime;	// 0x2538
	float m_flLastDamageTime;	// 0x253c: when the player last took damage
	CHL2_Player *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100140f1();	// as in CPhysForce (transplant)
	void sub_10163af0(int a);	// CBasePlayer::vfunc144 (stub 0x1000aea2), called directly
	void sub_103373e0();	// stub 0x100084d1, called directly by vfunc144
	void sub_1016d260();	// the player base's slot 103 (stub 0x10002f9f), called directly
	bool sub_1015ef80();	// stub 0x100157a3, called directly by Spawn
	void *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	int sub_103346c0(int ammoIndex);	// CBaseCombatCharacter::GetAmmoCount (stub 0x1000ff97), called directly
	int sub_10334180(int count, int ammoIndex, int unused);	// CBaseCombatCharacter::GiveAmmo by index (slot 374 of the base, stub 0x10009543), called directly
	char sub_10334860(void *pCurrent);	// CBaseCombatCharacter::SwitchToNextBestWeapon (stub 0x100138d6), called directly
	int sub_10163020(const CTakeDamageInfo *pInfo);	// CBasePlayer::vfunc142 (stub 0x10014425), called directly
	float m_flTargetFindTime;	// 0x2540
	bool m_bForceWalk;	// 0x2544
	char m_pad2545[0x2548 - 0x2545];
};
