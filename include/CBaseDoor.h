// CBaseDoor: door entity family. Only slots that decompiled code needs are declared, as plain members.
#pragma once

#include "CDoorEventList.h"

struct inputdata_t;

class CBaseDoor : public CBaseEntity
{
public:
	void vfunc71();
	void vfunc104();	// slot 104: calls slot 71, then sub_100eecf0
	virtual void vfunc113();	// "CBaseDoor::Activate": base Activate, updates the area portals for a door at rest (state 0 opens them, 1 closes them), then looks up the two entities named at +0x634 / +0x63c and stores their handles at +0x630 (-1 when none) / +0x638 (unchanged when none)
	void vfunc246(int a, int* b, int c);
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
	void sub_100f0210(inputdata_t *pInput);	// door use input: unless the lock check refuses the activator, remembers its handle at +0x53c and starts the movement through slot 243 / 244 according to the door state at +0x4f8
	char sub_100027d4(void *pActivatorOwner);	// the lock check (the stub at 0x100027d4 for 0x100eec70), called directly
	void vfunc250();	// slot 250: unless flagged 0x20 (+0x204) and unless the field at +0x3fc is already -1.0f, plays the open (flag 1 of +0x204) or close sound (+0x514 / +0x508), sets the door state at +0x4f8 to 0 / 1, resets +0x3fc to -1.0f, installs the touch function at +0x1ec and updates the area portals
	void sub_10012837(CBaseEntity *pOther);	// the touch function installed by vfunc250 (stub 0x10012837)
	void sub_100ee560(char bOpen);	// plays the open (bOpen) or close sound (globals 0x1072bc9c / 0x1072bca0 and volume bytes 0x1072bcc7 / 0x1072bcc8) from the entity of the handle at +0x53c, unless flag 0x1000 of +0x204 is set
	void sub_100efae0(CBaseEntity *pOther);	// "CBaseDoor::DoorTouch": scope trace, when the activator handle at +0x53c resolves to an entity with an edict, slot 241 accepts and pOther answers slot 158, and the door is opening or closing (state +0x4f8 is 2 or 3) and pOther has the object at +0x9c, calls slot 178(pOther)
	void sub_100ee630(CBaseEntity *pKnob);	// "CBaseDoor::AddDoorknob": stores the knob's handle in the first free doorknob slot (+0x628, then +0x62c; warns "Door %s already has 2 doorknobs!" when both are taken), installs the use function at +0x1f0 and sets flag 0x100 / clears 0x400 in +0x204
	void sub_100eef50(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);	// the use function installed by AddDoorknob (stub 0x1000f010)
	const char *sub_100ab4f0();	// debug name of the entity (stub 0x1000b5cd)
	CBaseDoor *vfunc5(unsigned char flags);	// scalar deleting destructor: releases the ten event lists, the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a)
	void sub_100f11b0();	// the door reached the open position (state 1): installs the touch function, fires the output at +0x5dc (flag 1 of +0x204 set) or +0x5c4 with the activator of the handle at +0x53c, closes the area portals (sub_100efbf0(0)) and runs slot 249
	void sub_100ee4e0(int a, int b);	// stdcall helper called first with the global at 0x106eb3dc and 0 (stub 0x1000ae20)
	void sub_100f0860();	// the door reached the closed position (state 0): clears the byte at +0x655, installs the touch function (flag 0x20 of +0x204 with 0x400) or schedules the auto-return think (curtime + the wait at +0x500; -1.0f stays -1.0f), tells the AI of the activator (the dword at +0x94 of the entity behind the handle at +0x53c) to forget the door, clears +0x640, fires the output at +0x5c4 (flag 1) or +0x5dc with the activator, and runs slot 249
	void vfunc177(CBaseEntity *pOther);	// "CBaseDoor::StartBlocked": scope trace (empty names), while closing (state 3) only fires the output at +0x564 for pOther; else makes the AI of the activator (dword +0x94 of the entity behind the handle at +0x53c) and of pOther mark this door (sub_100f0e90(2) / (0x80) then sub_1027de00 / sub_1027dfb0), and fires the output at +0x57c for pOther
	void sub_100f0e90(int flags);	// CAI_BaseNPCTroika::sub_100f0e90 (stub 0x100080df), called directly on the door

	char m_pad03e0[0x4a4 - 0x3e0];
	CDoorEventList m_items4a4[2];	// +0x4a4, +0x4bc
	char m_pad04d4[0x4f8 - 0x4d4];
	int m_nState4f8;	// +0x4f8: door state (0 closed at rest, 1 open at rest, 2 / 3 moving)
	char m_pad04fc[0x508 - 0x4fc];
	Vector m_vecPosition508;	// +0x508: one end position of the door
	Vector m_vecPosition514;	// +0x514: the other end position
	char m_pad0520[0x53c - 0x520];
	unsigned int m_hActivator53c;	// +0x53c: entity handle of the activator
	char m_pad0540[0x564 - 0x540];
	CDoorEventList m_items564[8];	// +0x564 .. +0x60c (the lists at +0x5dc / +0x60c are two of them)
	char m_pad0624[0x628 - 0x624];
	unsigned int m_hDoorknob0;	// +0x628
	unsigned int m_hDoorknob1;	// +0x62c
	unsigned int m_hLinked630;	// +0x630
	const char *m_pszLinked634;	// +0x634
	unsigned int m_hLinked638;	// +0x638
	const char *m_pszLinked63c;	// +0x63c
};
