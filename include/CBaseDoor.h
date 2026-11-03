// CBaseDoor: door entity family. Only slots that decompiled code needs are declared, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "Vector.h"
#include "datamap.h"

#include "CDoorEventList.h"

struct inputdata_t;

// Placeholder virtual slots that keep the slot number of vfunc246 right (CBaseEntity declares the slots up to 133).
#define DOOR_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CBaseDoor : public CBaseEntity
{
public:
	DOOR_SLOTS10(dsa) DOOR_SLOTS10(dsb)
	virtual void dsc0(); virtual void dsc1();
	virtual void vfunc156(int bOpen);	// slot 156: hands this door and its open (nonzero, +0x508) or closed (+0x514) position, with 0, to sub_101cf5c0
	virtual void dsc3(); virtual void dsc4(); virtual void dsc5(); virtual void dsc6(); virtual void dsc7(); virtual void dsc8(); virtual void dsc9();
	virtual void dsd0(); virtual void dsd1(); virtual void dsd2(); virtual void dsd3(); virtual void dsd4();	// slots 164..172
	virtual void dsd5(); virtual void dsd6(); virtual void dsd7(); virtual void dsd8();
	virtual void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// slot 173 "CBaseDoor::Use": scope trace (empty names); remembers the activator, hands the use to the linked entity (handle +0x638) as an input when there is one, otherwise to the lock check, the doorknob (+0x628) or the open / close slots by the door state
	virtual void dse0(); virtual void dse1(); virtual void dse2(); virtual void dse3(); virtual void dse4();	// slots 174..178
	virtual void vfunc179();	// slot 179: fires the door's event list 2 (state 3, closing) or 3 (other states) with the door as activator and caller
	virtual void dse6(); virtual void dse7(); virtual void dse8(); virtual void dse9();	// slots 180..183
	DOOR_SLOTS10(dsf) DOOR_SLOTS10(dsg) DOOR_SLOTS10(dsh)	// slots 184..213
	virtual void dsi0(); virtual void dsi1(); virtual void dsi2(); virtual void dsi3(); virtual void dsi4();	// slots 214..222
	virtual void dsi5(); virtual void dsi6(); virtual void dsi7(); virtual void dsi8();
	virtual bool vfunc223();	// slot 223 "CBaseEntity::IsSolidFlagSet"-like: a func_water door becomes a vphysics fluid (solid flag 0x20, fluid controller with the surface at its top), any other door with bit 2 of +0x2b4 clear gets a shadow (VPhysicsInitShadow); true
	DOOR_SLOTS10(dsj)	// slots 224..233
	virtual void dsk0(); virtual void dsk1(); virtual void dsk2(); virtual void dsk3(); virtual void dsk4();	// slots 234..245
	virtual void dsk5(); virtual void dsk6(); virtual void dsk7(); virtual int vfunc242(); void dsk8() { vfunc242(); } virtual void vfunc243(char bChain, int bLinked);	// slot 243: closes the door (like slot 244 opens it): with bChain and a linked door (handle +0x630) the linked door closes too, taking over the activator; then state 2, the closed think sub_100f0860 and a LinearMove to the closed position (+0x514); fires the output at +0x60c with the activator
	virtual void vfunc244(char bChain);	// slot 244: opens the door: with bChain and a linked door (handle +0x630) the linked door opens too, taking over this door's activator for the duration; then state 3, the arrival think sub_100f11b0 and a LinearMove to the open position (+0x508) at the entity's speed; fires the output at +0x5f4 with the activator
	virtual void vfunc245(Vector *pMins, Vector *pMaxs);	// slot 245: the world bounds of the door's collision box moved to its open position: the absolute origin moved against the move direction (+0x190) by the door's extent along it (|(size - 2) * dir| summed over the axes) minus the lip (+0x504), plus the collision mins / maxs (slots 1 / 2 of the property at +0x270); the two results go to pMins / pMaxs
	virtual void vfunc246(int a, int* b, int c);	// slot 246: called with the NPC that wants to use the door, a 16 byte result record and a flag byte; the record's last dword is an activity to start
	void vfunc71();
	void vfunc104();	// slot 104: calls slot 71, then sub_100eecf0
	char sub_100ee3b0();	// slot 117: the base's vfunc117 with bit 1 cleared, bit 3 set when flag 0x100 is on
	virtual void vfunc113();	// "CBaseDoor::Activate": base Activate, updates the area portals for a door at rest (state 0 opens them, 1 closes them), then looks up the two entities named at +0x634 / +0x63c and stores their handles at +0x630 (-1 when none) / +0x638 (unchanged when none)
	void *vfunc38(int a);	// slot 38: sub_10008cba(a), or this when that finds nothing
	void vfunc248();	// slot 248 "CBaseDoor::UpdatePosition"-like: when the absolute origin (slot 220) equals the position at +0x508 within 0.001f the state at +0x4f8 becomes 1, else when it equals the position at +0x514 it becomes 0
	int vfunc35(int a);	// slot 35: 0x3a when sub_100127ec; else the slot 35 answer of the entity behind the handle at +0x638, or of the entity sub_10008cba(a) finds; else (flags +0x204 has bit 8 or 10) the value at +0x650 when the byte at +0x55c is set, else 0x3b when sub_1000cc57 else the value at +0x64c; 0 without those flag bits
	char sub_100127ec();	// stub 0x100127ec for 0x100eef10, called directly
	CBaseEntity *sub_10008cba(int a);	// stub 0x10008cba for 0x100ee950, called directly
	char sub_1000cc57();	// stub 0x1000cc57 for 0x100eedd0, called directly
	char sub_100eecf0();	// true (and the flag byte at +0x624 set) when one of the two event lists at +0x5dc / +0x60c has an entry named "ChangeNow"
	void sub_100ee810();	// scope-less: for each of the two entity handles at +0x628 and +0x62c that resolve, calls sub_10224170 on the entity with a zeroed inputdata_t (value -1 handle), and for the second also again when it still resolves
	CBaseDoor *sub_100ee2b0();	// "CBaseDoor::CBaseDoor" body: base constructor, the eight output members (+0x564 .. +0x60c), the doorknob / linked handles to -1, the vtable, +0x64c = 10, +0x650 = 3, the self pointer at +0xa4, bytes +0x654 = 1 / +0x624 = 0; returns this
	int sub_100f12a0(CBaseDoor **ppDoors, int maxDoors);	// the other doors that share this door's name (a door pair), up to maxDoors
	void sub_100efbf0(char bOpen);	// "UpdateAreaPortals": for every func_areaportal whose slot 161 accepts the door's name (+0x26c) calls its Use(this, this, bOpen, 0)
	void sub_100f00a0(inputdata_t *pInput);	// door input: unless the door is at rest open (state 1) remembers the activator's handle at +0x53c, fires the output at +0x5f4 and runs slot 244(1)
	void sub_100f0210(inputdata_t *pInput);	// door use input: unless the lock check refuses the activator, remembers its handle at +0x53c and starts the movement through slot 243 / 244 according to the door state at +0x4f8
	char sub_100eec70(void *pActivatorOwner);
	char sub_100027d4(void *pActivatorOwner);	// the lock check (the stub at 0x100027d4 for 0x100eec70), called directly
	void vfunc250();	// slot 250: unless flagged 0x20 (+0x204) and unless the field at +0x3fc is already -1.0f, plays the open (flag 1 of +0x204) or close sound (+0x514 / +0x508), sets the door state at +0x4f8 to 0 / 1, resets +0x3fc to -1.0f, installs the touch function at +0x1ec and updates the area portals
	void sub_10012837(CBaseEntity *pOther);	// the touch function installed by vfunc250 (stub 0x10012837)
	void sub_100ee560(char bOpen);	// plays the open (bOpen) or close sound (globals 0x1072bc9c / 0x1072bca0 and volume bytes 0x1072bcc7 / 0x1072bcc8) from the entity of the handle at +0x53c, unless flag 0x1000 of +0x204 is set
	void sub_100efae0(CBaseEntity *pOther);	// "CBaseDoor::DoorTouch": scope trace, when the activator handle at +0x53c resolves to an entity with an edict, slot 241 accepts and pOther answers slot 158, and the door is opening or closing (state +0x4f8 is 2 or 3) and pOther has the object at +0x9c, calls slot 178(pOther)
	void sub_100ee630(CBaseEntity *pKnob);	// "CBaseDoor::AddDoorknob": stores the knob's handle in the first free doorknob slot (+0x628, then +0x62c; warns "Door %s already has 2 doorknobs!" when both are taken), installs the use function at +0x1f0 and sets flag 0x100 / clears 0x400 in +0x204
	void sub_100eef50(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// "CBaseDoor::DoorknobUse" (stub 0x1000f010), the use function installed by AddDoorknob: DevMsg "Non-player entity %s trying to use doorknob" for an activator without a player object (+0xa8); else the entity sub_10008cba finds for the player: when it is a lock that is not open (sub_10224100) or there is none and the byte at +0x55c is clear, slot 242 and stop; otherwise slot 273 of that entity, then sub_100ee4e0(global 0x106eb3e4, sub_101671a0 of the player) and sub_100ee560(sub_101671a0 of the player)
	const char *sub_100ab4f0();	// debug name of the entity (stub 0x1000b5cd)
	CBaseDoor *vfunc5(unsigned char flags);	// scalar deleting destructor: releases the ten event lists, the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a)
	void sub_100f11b0();	// the door reached the open position (state 1): installs the touch function, fires the output at +0x5dc (flag 1 of +0x204 set) or +0x5c4 with the activator of the handle at +0x53c, closes the area portals (sub_100efbf0(0)) and runs slot 249
	void sub_100ee4e0(int a, char b);	// stdcall helper called first with the global at 0x106eb3dc and 0 (stub 0x1000ae20)
	void sub_100f0860();	// the door reached the closed position (state 0): clears the byte at +0x655, installs the touch function (flag 0x20 of +0x204 with 0x400) or schedules the auto-return think (curtime + the wait at +0x500; -1.0f stays -1.0f), tells the AI of the activator (the dword at +0x94 of the entity behind the handle at +0x53c) to forget the door, clears +0x640, fires the output at +0x5c4 (flag 1) or +0x5dc with the activator, and runs slot 249
	void vfunc177(CBaseEntity *pOther);	// "CBaseDoor::StartBlocked": scope trace (empty names), while closing (state 3) only fires the output at +0x564 for pOther; else makes the AI of the activator (dword +0x94 of the entity behind the handle at +0x53c) and of pOther mark this door (sub_100f0e90(2) / (0x80) then sub_1027de00 / sub_1027dfb0), and fires the output at +0x57c for pOther
	void sub_100f14a0(CBaseEntity *pOther);
	void sub_100ef260();	// slot 103 "CBaseDoor::Spawn" (real body; the slot name belongs to the stub, so define it under this provisional name): calls slots 104/171, sets the model name (slot 9 / 105), copies the origin into m_vecPosition508, moves it by the door extent along m_vecMovedir minus m_flLip504 into m_vecPosition514, sets state 1 (or 0 and sub_101cf5c0 when flag 1 of +0x204), sets m_b55c when flag 0x800, SetMoveType(8,0), sub_100b3b00, default speed +0x164 = 100.0f, touch = sub_100efae0, SetSolid(1) on +0x270, func_water -> AddSolidFlags(4) via CFlagsUnit, then slot 223 and sub_100a9470(1); zeroes +0x640/+0x644 and byte +0x655	// slot 178 "CBaseDoor::Blocked" (stub name is dse4): scope trace (empty names); with a blocker: if m_flDamage560 != 0 build a damage record (CUnk101c26d0::sub_101c26d0) and TakeDamage it; if m_fl500 >= 0 and byte +0x654 and state != 2 call slot 243(1,1); then over the door pair (sub_100f12a0, up to 0x40) handle every other door with state != 0: matching origins/angles/velocities -> copy +0x22c and either slot 62(origin of this)/sub_100b2770(zero) or slot 64(angles of this)/sub_100b2f50(zero angles); state 2 on this but not on it -> slot 243(1,1), state 3 -> slot 244(1)
	void sub_100f0e90(int flags);	// CAI_BaseNPCTroika::sub_100f0e90 (stub 0x100080df), called directly on the door
	void sub_100f0e30(float flTime);	// the timer at +0x640: keeps the larger of it and flTime (stub 0x10009363)
	char sub_100084f9(char bCheckLinked);	// the stub at 0x100084f9 for sub_100f0c00, called directly (the recursive call goes through it)
	void sub_100f09d0();	// retry think: while sub_100f0c00(1) holds installs the think stub 0x1000abf0 and tries again in 0.5 s, else clears the think and runs slot 244(1)
	char sub_100f0c00(char bCheckLinked);	// "CBaseDoor::IsCloseBlocked": scope trace (empty names), the door's open-position bounds (slot 245) against the linked door's (handle at +0x630, asked without the linked check), else against the bounds of every solid pushable entity (flags bit 7 or 13, slot 158) of the world; a blocker with an AI object (+0x94) gets this door marked (sub_100f0e90(0x80), sub_1027dfb0)

	char m_pad03e0[0x4a4 - 0x3e0];
	CDoorEventList m_items4a4[2];	// +0x4a4, +0x4bc
	char m_pad04d4[0x4f8 - 0x4d4];
	int m_nState4f8;	// +0x4f8: door state (0 closed at rest, 1 open at rest, 2 / 3 moving)
	char m_pad04fc[4];
	float m_fl500;	// +0x500: the auto-return / damage gate checked by Blocked
	char m_pad0504[4];
	Vector m_vecPosition508;	// +0x508: one end position of the door
	Vector m_vecPosition514;	// +0x514: the other end position
	char m_pad0520[0x53c - 0x520];
	EHANDLE m_hActivator53c;	// +0x53c: entity handle of the activator
	char m_pad0540[0x558 - 0x540];
	int m_n558;	// +0x558
	char m_b55c;	// +0x55c
	char m_pad055d[3];
	float m_flDamage560;	// +0x560: damage dealt to a blocker (0 = none)
	CDoorEventList m_items564[8];	// +0x564 .. +0x60c (the lists at +0x5dc / +0x60c are two of them)
	char m_pad0624[0x628 - 0x624];
	unsigned int m_hDoorknob0;	// +0x628
	unsigned int m_hDoorknob1;	// +0x62c
	unsigned int m_hLinked630;	// +0x630
	const char *m_pszLinked634;	// +0x634
	unsigned int m_hLinked638;	// +0x638
	const char *m_pszLinked63c;	// +0x63c
	float m_flTimer640;	// +0x640: the door's timer (the largest time it was set to)
public:
    virtual datamap_t * vfunc82();
public:
	virtual void vfunc249();
public:
	virtual bool vfunc241();
public:
	virtual float vfunc247();
public:
    virtual bool vfunc128();
	int m_bfNpcFailedFlags;	// 0x0644
	bool m_bNoOpenWanted;	// 0x0648
	char m_pad0649[0x64c - 0x649];
	int m_UseIcon;	// 0x064c
	int m_LockedIcon;	// 0x0650
	char m_pad0654[0x658 - 0x654];
};
