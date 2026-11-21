// S101df260: a record of five 0xac byte items followed by one small object and some flags (name provisional;
// CUnknown101e01e0 hands out arrays of pointers to these).
#pragma once

#include "CUnknown101e0f00.h"
#include "CUnknown101ddc30.h"

class CUnknown101e01e0;
class IKVNodeView;

struct S101dda30	// 8 byte object at +0x364 of S101df260 (and five times in S101ddec0)
{
	char m_pad[8];

	void sub_10148020();	// constructor body (stub 0x10003cbf)
};

struct S101dc1c0	// 0x10 byte object at +0x94 of S101ddec0
{
	char m_pad[0x10];

	void sub_101472e0();	// constructor body (stub 0x1001232d)
};

struct S101ddec0	// 0xac byte item
{
	char m_b00;
	char m_pad01[3];
	S101dda30 m_o04;
	S101dda30 m_o0c;
	S101dda30 m_o14;
	char m_b1c;
	char m_b1d;
	char m_b1e;
	char m_pad1f;
	S101dda30 m_o20;
	S101dda30 m_o28;
	int m_n30;	// 0x32 after construction
	const char *m_pszSchedule34;	// 0x34: null after construction
	int m_n38;	// -1 after construction
	int m_n3c;	// -1 after construction
	float m_n40;	// 0x40: the gesture duration
	int m_n44;
	int m_n48;
	int m_n4c;
	CUnknown101ddc30 m_o50;
	CUnknown101e0f00Src m_o5c;
	CUnknown101e0f00Src m_o78;
	S101dc1c0 m_o94;
	int m_na4;
	int m_na8;	// the flag bits it sets in (and takes from) the character's NPC object: bits of +0x14b8, or of +0x14bc when negative

	S101ddec0 *sub_101482a0();	// constructor body (stub 0x1000eeb2), returns this
		// loads the item from the sub key of that name of pKV (a null or empty name: the key itself); false without a key (stub 0x1000852b)
		// ends the effect on the character: ends both sources, takes the flag bits back from the NPC object, the character's sub_10323770 when m_b1e is set, and, for a named schedule (+0x34) while the NPC object (+0x98) is flagged 0x800000 / has a current task of 0xe1 or 0xe3, cancels it
};

struct S101df260
{
	int m_n00;
	char m_pad04[4];
	S101ddec0 m_items[5];	// 0x08
	S101dda30 m_obj364;	// 0x364
	int m_n36c;	// 0x36c: -1 when unset
	char m_b370;
	char m_b371;
	char m_pad372[2];

	S101df260 *sub_10148790(int a);	// constructor body: the five items, the object, +0x36c = -1, +0 = a, both flags cleared; returns this
		// loads the record from its node (stub 0x1000b541); false when the base record it inherits from is not known yet
};
