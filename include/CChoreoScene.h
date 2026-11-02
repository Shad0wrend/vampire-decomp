// CChoreoScene: the choreography scene object (Source's CChoreoScene; not in the game's RTTI, no vtable). Layout from the
// reset 0x10079910 (Obj::sub_10079450 is the zeroing constructor body), the copy 0x100794e0 and the actor / event searches
// (CChoreoScene1007e970.h, CChoreoScene1007a1e0.h, CUnknown1007a060.h, which are views of the same object).
// Only what recovered code needs.
#pragma once

#include "CUnknown10075aa0.h"

struct CChoreoSceneVec5	// the game's five dword CUtlVector of pointers (memory, allocation count, grow size, size, element pointer)
{
	void **m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	void **m_pElements;
};

class CChoreoScene
{
public:
	CChoreoSceneVec5 m_Events;	// 0x00: the scene's events (CUnknown10075aa0, 0x340 bytes each; size at +0xc)
	CChoreoSceneVec5 m_Actors;	// 0x14: the actors (0x194 byte records of CUnknown1007a060.h, each with its channel vector at +0x164; size at +0x20)
	CChoreoSceneVec5 m_Channels;	// 0x28: the channels (each with an event vector at +0x84 / elements at +0x94; size at +0x34)
	char m_pad003c[0x78 - 0x3c];	// 0x3c .. 0x77: zeroed by the constructor, not read so far
	float m_flTime78;	// 0x78: -1.0f after a reset
	int m_n7c;	// 0x7c
	int m_n80;	// 0x80
	int m_n84;	// 0x84
	int m_n88;	// 0x88
	int m_n8c;	// 0x8c
	int m_n90;	// 0x90
	int m_n94;	// 0x94
	int m_n98;	// 0x98
	int m_n9c;	// 0x9c
	int m_nA0;	// 0xa0
	int m_nA4;	// 0xa4: the argument of the reset (the owner), copied from the source scene's reset by sub_100794e0
	int m_nA8;	// 0xa8
	char m_szName[0x12c - 0xac];	// 0xac: the scene's file name (NUL terminated; cleared by a reset, copied byte by byte by the copy)
	char m_b12c;	// 0x12c
	char m_b12d;	// 0x12d
	short m_pad12e;
	int m_n130;	// 0x130: 0x3c after a reset

	void sub_10079910(int nOwner);	// the reset body (stub 0x1001538e): clears +0xa8 .. +0x98, the name byte, stores nOwner at +0xa4, +0x78 = -1.0f, +0x130 = 0x3c
	CChoreoScene *sub_100794e0(const CChoreoScene *pOther);	// 0x100794e0 (ret 4): the copy ("operator ="): reset with pOther's +0xa4, destroys this scene's actors (+0x14: the channel vector at +0x164 purged, then deleted), events (+0: CUnknown10075aa0::sub_10075350, then deleted) and channels (+0x28: the event vector at +0x84 purged, then deleted), copies the scalar fields (+0xa8 / 0x7c / 0x84 / 0x88 / 0x98 / 0xa0 / 0x9c / 0xa8, bytes +0x12c / +0x12d, dword +0x130), re-adds every event of pOther that has no scene (CUnknown10075aa0::sub_10076690 == 0) as a new event (the fastcall sub_10079e60 of the event vector, then CUnknown10075aa0::sub_100754e0), copies each actor (CUnknown1007a060::sub_1007a060 creates the record, CUnknown10072f10::sub_10072bf0 fills it, then its channels are appended to m_Channels with the inlined AddToTail) and finally the name string; returns this
};
