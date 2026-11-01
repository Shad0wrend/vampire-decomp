// CUnknown102dfaa0: a registry of (entity handle, two vectors) records; real name not yet known.
// +0x00: the entity that is told about a removed record (slot 56), +0x04: an object with an array of entity handles that is
// told instead while the byte at +0x08 is set, +0x0c: the head of the singly linked list of records.
#pragma once

#include "Vector.h"
#include "CCineNPCSlots.h"
#include "CUnknown10316890.h"

class CUnknown102dfaa0_Target	// the entity at +0x00, viewed as a plain list of slots up to slot 56
{
public:
	CCS_V10(a0) CCS_V10(a1) CCS_V10(a2) CCS_V10(a3) CCS_V10(a4)
	CCS_V(a50) CCS_V(a51) CCS_V(a52) CCS_V(a53) virtual char slot54(void *pEnt); CCS_V(a55)
	virtual void slot56(void *pEnt, Vector a, Vector b, int c);
};

struct CUnknown102dfaa0_Record
{
	char m_pad0000[0xc];
	Vector m_vecA;	// 0x0c
	Vector m_vecB;	// 0x18
	unsigned int m_hEnt;	// 0x24: entity handle
	float m_flTime28;	// 0x28: the time the position was last confirmed
	char m_pad002c[0x38 - 0x2c];
	CUnknown102dfaa0_Record *m_pNext;	// 0x38
};

class CUnknown102dfaa0
{
public:
	CUnknown102dfaa0_Target *m_pTarget;	// 0x00
	CUnknown10316890 *m_pHandles;	// 0x04
	char m_bUseHandles;	// 0x08
	char m_pad0009[3];
	CUnknown102dfaa0_Record *m_pHead;	// 0x0c
	float m_flDecay10;	// 0x10: how long a record keeps following its entity

	void sub_102df320();	// "CAI_Memory::RefreshMemories": scope trace + profiler scope; for each record: the entity of its handle; a record whose entity is gone, or is of AI state 7 and accepted by the target (slot 54) / handle list, is unlinked after the target is told (slot 56 / sub_103169a0) and freed; otherwise its first position follows the entity while curtime < time + decay
	void sub_102dfaa0(void *pEnt, int c);	// removes the record of pEnt (found through its handle), after telling the target (slot 56) or the handle array (sub_103169a0) about it
};
