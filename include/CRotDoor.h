// CRotDoor: rotating door entity (CBaseEntity based); only what decompiled code needs.
#pragma once
#include "QAngle.h"

#include "CBaseEntity.h"
#include "CDoorEventList.h"

struct CNPCOpenData	// 0x1c byte output of CRotDoor::GetNPCOpenData
{
	Vector m_vecOrigin;	// +0x00
	Vector m_vecAngles;	// +0x0c
	int m_nResult;		// +0x18: -1 when the door cannot open for the NPC
};

Vector sub_101d2f40(float flYaw);	// 0x101d2f40: degrees -> (cos, sin, 0) direction (Vector returned by value; todo)

class CRotDoor : public CBaseEntity
{
public:
	void vfunc103();
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	void vfunc156(int bFirst);	// slot 156 (plain member): turns the door to the angles at +0x520 (nonzero) or +0x52c (zero) through slot 64, then sub_100b3b00
	float vfunc247();	// slot 247 (plain member): the distance from the current angles (slot 221) to the target angles at +0x674, over the speed at +0x164 (the time the turn takes)
	void vfunc248();	// slot 248 (plain member): when the angles (slot 221) equal the ones at +0x520 within 0.001f the door state at +0x4f8 becomes 1, else when they equal the ones at +0x52c it becomes 0; either way slot 249 follows
	void vfunc250();	// "CRotDoor::Spawn"-like: unless bit 5 of the flags at +0x204 is set, moves the door to its closed or open position (slot 64) by bit 0, installs the touch function and updates the area portals
	void sub_100efae0(CBaseEntity *pOther);	// the door's touch function (called through the stub at 0x10012837)
	void sub_100f3dd0(const float *pDir);
	float sub_10004ea8(const float *pDir);	// stub of sub_100f3dd0, which leaves sub_100f3e60's float in ST0
	float sub_100f3d80();
	void sub_100f14a0(CBaseEntity *pOther);	// takes the opening direction, zeroes the axis the spawn flags (0x40: x, 0x80: y, else z) say the door does not rotate about, converts it to angles (sub_10139970, stub 0x10003d4b) and hands them to sub_100f3e60 (stub 0x10003044)
	void sub_10003044(float *pAngles);	// sub_100f3e60 (stub 0x10003044)
	float sub_100f3e60(float *pAngles);	// 0x100f3e60: the angle component the spawn flags pick (0x40: x, sign bit 0x80: z, else y), returned in ST0
	CRotDoor *vfunc5(unsigned char flags);	// scalar deleting destructor: releases the ten event lists, the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a)
	void vfunc104();	// slot 104 "CRotDoor::Precache"-like (plain member): CBaseDoor::vfunc104, then the door's two end volumes (sub_100f19b0 on the +0x52c angles and on their negation) with their centres (the halves of the sums of the min / max corners) at +0x6b0 / +0x6d4, sub_100f3f20(), and the tail call of CBaseDoor::sub_100eecf0
	void sub_100efab0();	// CBaseDoor::vfunc104 (stub 0x100076b2), called directly
	void sub_100f19b0(Vector vecAngles, Vector *pMins, Vector *pMaxs);	// stub 0x10011216: the volume the door sweeps for the angles
	void sub_100f3f20();	// stub 0x1000d53f, called directly
	void sub_100f0860();	// CBaseDoor::sub_100f0860 (stub 0x10010db1), the closed think
	void sub_100f3390(CBaseEntity *pEntity);	// "CRotDoor::OpenAwayFromEntity": scope trace, the distances of the entity's centre to the two end volume centres (+0x6b0 / +0x6d4) pick which end angles (+0x52c, or their negation) the door turns to (sub_101c17e0 at the door's speed); the byte at +0x655 inverts the choice
	void sub_100ee4e0(int a, char b);	// CBaseDoor::sub_100ee4e0 (stub 0x1000ae20), called directly
	void sub_100f11b0();	// CBaseDoor::sub_100f11b0 (stub 0x10005ddf), the arrival think
	void sub_101c17e0(const Vector *pAngles, float flSpeed);	// stub 0x1000dab2: turns the door to the angles at that speed
	void sub_100eecf0();	// CBaseDoor::sub_100eecf0 (stub 0x10012a58), tail called

	char m_pad03e0[0x4a4 - 0x3e0];
	CDoorEventList m_items4a4[2];	// +0x4a4, +0x4bc
	char m_pad04d4[0x4f8 - 0x4d4];
	int m_nState4f8;	// +0x4f8: door state (0 closed at rest, 1 open at rest)
	float m_fl4fc;
	char m_pad0500[0x520 - 0x500];
	Vector m_angRotation520;	// +0x520: one end angle of the door
	Vector m_angRotation52c;	// +0x52c: the other end angle
	char m_pad0538[0x53c - 0x538];
	EHANDLE m_hActivator53c;	// +0x53c: entity handle of the activator
	char m_pad0540[0x55c - 0x540];
	char m_b55c;
	char m_pad055d[0x564 - 0x55d];
	CDoorEventList m_items564[8];	// +0x564 .. +0x624
	char m_pad0624[0x630 - 0x624];
	CHandle<CRotDoor> m_hLinked630;	// +0x630: the linked door
	char m_pad0634[0x654 - 0x634];
	bool m_bBlocked654;	// +0x654: set while CRotDoor::Blocked runs
	bool m_bReverse655;	// +0x655: opens away from the activator
	char m_pad0656[0x658 - 0x656];
	Vector m_vecAxis;	// 0x0658
	float m_flDistance;	// 0x0664
	QAngle m_angRotationClosed;	// 0x0668
	Vector m_angTarget674;	// +0x674: the angles the door is turning to
	QAngle m_angRotationOpenBack;	// 0x0680
	QAngle m_angGoal;	// 0x068c
	Vector m_vecMins698;	// +0x698: the volume for the +0x52c angles
	Vector m_vecMaxs6a4;	// +0x6a4
	Vector m_vecCenter6b0;	// +0x6b0: its centre
	Vector m_vecMins6bc;	// +0x6bc: the volume for the opposite angles
	Vector m_vecMaxs6c8;	// +0x6c8
	Vector m_vecCenter6d4;	// +0x6d4
	char m_pad06e0[0x6f8 - 0x6e0];
	float m_flAngle6f8;	// +0x6f8: one of the three door angles used by GetNPCOpenData
	float m_flAngle6fc;	// +0x6fc
	float m_flAngle700;	// +0x700
	float m_flAngle704;	// +0x704: the angle the blocked test last saw
	int m_nCount708;	// +0x708: blocked retry counter (reset by vfunc249, reaches 15)
	int m_nState70c;	// +0x70c: blocked sub-state (2 or 3)
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc134();
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	virtual void vfunc139(CBaseEntity *);
	virtual bool vfunc140(CBaseEntity *);
	virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *);
	virtual int vfunc142(struct CTakeDamageInfo *);
	virtual int vfunc143(float, int);
	virtual void vfunc144(void *);
	virtual int vfunc145();
	virtual void vfunc146(void *, const Vector &, void *);
	virtual bool vfunc147(CBaseEntity *);
	virtual void vfunc148();
	virtual void vfunc149(int, int);
	virtual void vfunc150();
	virtual void vfunc151(class CBaseCombatWeapon *);
	virtual float vfunc152();
	virtual int vfunc153();
	virtual int vfunc154(int, int);
	virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char);
	
	virtual bool vfunc157(int);
	virtual bool vfunc158();
	virtual void vfunc159();
	virtual bool vfunc160(const char *);
	virtual bool vfunc161(const char *);
	virtual char vfunc162();
	virtual void vfunc163();
	virtual bool vfunc164();
	virtual void vfunc165(void *);
	virtual bool vfunc166(CBaseEntity *);
	virtual CBaseEntity *vfunc167();
	virtual CBaseEntity *vfunc168();
	virtual void vfunc169(const Vector *);
	virtual void vfunc170(const Vector *);
	virtual void vfunc171();
	virtual void vfunc172();
	virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int);
	virtual void vfunc174(CBaseEntity *);
	virtual void vfunc175(CBaseEntity *);
	virtual void vfunc176(CBaseEntity *);
	virtual void vfunc177(CBaseEntity *);
	virtual void vfunc178(CBaseEntity *pOther);	// slot 178 "CRotDoor::Blocked" (scope trace 0x10565574): the blocked-touch handling
	virtual void vfunc179();
	virtual void vfunc180();
	virtual void vfunc181(const float *, const float *, const float *);
	virtual void vfunc182();
	virtual void vfunc183();
	virtual void vfunc184();
	virtual void vfunc185(struct CFireBulletsInfo *);
	virtual void vfunc186();
	virtual CBaseEntity *vfunc187();
	virtual void vfunc188();
	virtual void vfunc189();
	virtual float vfunc190();
	virtual void vfunc191(int);
	virtual Vector vfunc192();
	virtual Vector vfunc193();
	virtual float *vfunc194();
	virtual float *vfunc195();
	virtual Vector vfunc196();
	virtual Vector vfunc197(const Vector &, char, char);
	virtual float *vfunc198();
	virtual void vfunc199(float *, float *);
	virtual int vfunc200();
	virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int);
	virtual void vfunc202(CBaseEntity *);
	virtual float vfunc203();
	virtual float vfunc204();
	virtual void vfunc205();
	virtual void vfunc206();
	virtual bool vfunc207();
	virtual void vfunc208(CBaseEntity *);
	virtual CBaseEntity *vfunc209();
	virtual void vfunc210();
	virtual unsigned int vfunc211();
	virtual void vfunc212(string_t);
	virtual void vfunc213(const float *);
	virtual float *vfunc214();
	virtual Vector *vfunc215();
	virtual void vfunc216(const Vector &);
	virtual float *vfunc217();
	virtual void vfunc218(const float *);
	virtual float *vfunc219();
	virtual float *vfunc220();
	virtual float *vfunc221();
	virtual int vfunc222(int);
	
	virtual void vfunc224();
	virtual void vfunc225();
	virtual void vfunc226(int);
	virtual int vfunc227(struct CTakeDamageInfo *);
	virtual void vfunc228(int, int);
	virtual void vfunc229(int);
	virtual void vfunc230(int, void *);
	virtual void vfunc231(void *, float, int, int);
	virtual void vfunc232(int);
	virtual int vfunc233(int *, int);
	virtual struct CGameTrace vfunc234(const Vector *);
	virtual void vfunc235();
	virtual void vfunc236();
	virtual int vfunc237();
	virtual void vfunc238(Vector *, Vector *, int, int);
	virtual bool vfunc239(float);
	virtual int vfunc240();
	virtual bool vfunc241();
	virtual int vfunc242();
	virtual void vfunc243(char bChain, char bOpenAway);	// slot 243 "CRotDoor::DoorGoUp": with bChain and a linked door (handle +0x630) the linked door goes too, taking over this door's activator for the duration; then state 2, the closed think sub_100f0860, a turn to the angles at +0x52c at the door's speed (or, with bOpenAway and a live activator, away from it) and the output at +0x60c with the activator
	virtual void vfunc244(char bChain);	// slot 244 \"CRotDoor::DoorGoDown\": with bChain and a linked door (handle +0x630) the linked door goes too, taking over this door's activator for the duration; then state 3, the arrival think sub_100f11b0, a turn to the angles at +0x520 at the door's speed, and the output at +0x5f4 with the activator
	virtual void vfunc245();
	virtual void vfunc246(CBaseEntity *pNPC, CNPCOpenData *pOut, char bFlag);	// "CRotDoor::GetNPCOpenData" (scope trace string 0x105654fc)
	virtual void vfunc247_slot();
	virtual void vfunc248_slot();
	virtual int vfunc249();
};
