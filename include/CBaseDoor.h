// CBaseDoor: door entity family. Only slots that decompiled code needs are declared, as plain members.
#pragma once

#include "CDoorEventList.h"

struct inputdata_t;

class CBaseDoor : public CBaseEntity
{
public:
	void vfunc71();
	void vfunc104();	// slot 104: calls slot 71, then sub_100eecf0
	void vfunc246(int a, int* b, int c);
	char sub_100eecf0();	// true (and the flag byte at +0x624 set) when one of the two event lists at +0x5dc / +0x60c has an entry named "ChangeNow"
	void sub_100ee810();	// scope-less: for each of the two entity handles at +0x628 and +0x62c that resolve, calls sub_10224170 on the entity with a zeroed inputdata_t (value -1 handle), and for the second also again when it still resolves
	CBaseDoor *sub_100ee2b0();	// as in CKeepUpright (transplant)
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

	char m_pad03e0[0x4a4 - 0x3e0];
	CDoorEventList m_items4a4[2];	// +0x4a4, +0x4bc
	char m_pad04d4[0x564 - 0x4d4];
	CDoorEventList m_items564[8];	// +0x564 .. +0x60c (the lists at +0x5dc / +0x60c are two of them)
	char m_pad0624[0x628 - 0x624];
	unsigned int m_hDoorknob0;	// +0x628
	unsigned int m_hDoorknob1;	// +0x62c
};
