// CEventQueue: the global queue of delayed entity outputs (the "EventQueue" block of a save game); the head of the
// queued events is at +0x38 (the queue starts with an embedded event record whose next pointer it is), the count of
// the queued events is at +0x50. Real layout only partly known.
#pragma once

#include "CVariantCopy.h"

class CBaseEntity;

struct CEQEvent	// a "PEvent" record as the queue restores it (0x50 bytes); the entity handles start invalid
{
	float m_flFireTime;	// 0x00
	const char *m_pszTarget;	// 0x04
	const char *m_pszTargetInput;	// 0x08
	int m_hActivator;	// 0x0c
	int m_hCaller;	// 0x10
	int m_nOutputID;	// 0x14
	int m_hTarget;	// 0x18
	int *m_pRefCount;	// 0x1c: a counter shared with the variant (incremented when the event is queued)
	int m_n20;	// 0x20
	char m_pad0024[8];
	int m_hVariant;	// 0x2c
	int m_n30;	// 0x30
	int m_n34;	// 0x34
	CEQEvent *m_pNext;	// 0x38
	int m_n3c;	// 0x3c
	char m_block40[0x50 - 0x40];	// 0x40: a CVDmgBlock16_t, reset after the other fields are set

	CEQEvent()
	{
		m_hActivator = -1;
		m_hCaller = -1;
		m_hTarget = -1;
		m_n20 = 0;
		m_hVariant = -1;
		m_n30 = 0;
	}
};

struct CEQBlock16	// the 16 byte block at +0x40 of a queued event, copied as four dwords
{
	int m_a, m_b, m_c, m_d;
};

// The queued event as the game's copy constructor 0x100d14b0 (stub 0x10002252, one caller: sub_100ce1c0) sees it, 0x50 bytes:
// the variant is a CVariantCopy at +0x20 (its inline member-wise copy is the odd byte / dword / vector sequence there,
// the same as CVariantCopy::CVariantCopy 0x1002ca10), +0x38 is zeroed by the copy.
struct CEQEventFull
{
	float m_flFireTime;	// 0x00
	int m_iTarget;	// 0x04
	int m_iTargetInput;	// 0x08
	int m_hActivator;	// 0x0c
	int m_hCaller;	// 0x10
	int m_iOutputID;	// 0x14
	int m_hTarget;	// 0x18
	int m_n1c;	// 0x1c
	CVariantCopy m_Variant;	// 0x20 .. 0x34
	int m_n34;	// 0x34
	int m_n38;	// 0x38: 0 in a copy (the queue link)
	int m_n3c;	// 0x3c
	CEQBlock16 m_Block;	// 0x40
	CEQEventFull(const CEQEventFull &other);	// 0x100d14b0: member-wise copy, m_n38 = 0
};

class IEQRestore	// the restore interface the queue reads its tables through (slot 3)
{
public:
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual int ReadFields(const char *pszName, void *pBaseData, void *pMap, void *pFields, int nFields);	// slot 3
};

class CEventQueue
{
public:
	char m_pad0000[0x38];
	CEQEvent *m_pHead;	// 0x38
	char m_pad003c[0x50 - 0x3c];
	int m_nEvents;	// 0x50
	int m_n54;	// 0x54: cleared together with the head by sub_100cdda0

	void sub_100cf730();	// \"CEventQueue::Dump\": DevMsg \"EventQueue Dump: (CurTime: %f) (TotalEvents: %d)\", then \"%d: \" and sub_100cf7b0(event) for each queued event
	void sub_100cf7b0(CEQEvent *pEvent);	// prints one queued event (stub 0x10007351)
	void sub_100cdda0();	// empties the queue (stub 0x1000fc81)
	void sub_100ce1c0(CEQEvent *pEvent);	// adds an event (stub 0x1001253f)
	int sub_100cfda0(IEQRestore *pRestore);	// restores the queue: empties it, reads the "EventQueue" table and then one "PEvent" record per queued event; 0 when a read fails
	void sub_100ce210(CEQEvent *pEvent);	// inserts a built event into the queue (stub 0x1000f074): postpones it past the previous insertion time when that is still ahead, links it in fire time order behind the queue's embedded record and remembers its fire time / the current time
	void sub_100cddf0(const char *pszTarget, const char *pszTargetInput, CVariantCopy Value, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID, int nExtra);	// "CEventQueue::AddEvent": builds a 0x50 byte event (fire time = curtime + delay, the two names or null when empty, the entity handles of activator / caller or -1, the variant, the output id and one more dword) and inserts it (takes 12 stack dwords)
	void sub_100cdf10(CBaseEntity *pTarget, const char *pszAction, CVariantCopy Value, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID, int nExtra);	// "CEventQueue::AddEvent" for an entity target (stub 0x1000cad6; takes 12 stack dwords)
	void sub_100ce040(CBaseEntity *pTarget, const char *pszAction, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID);	// "CEventQueue::AddEvent" without a value: an empty variant
	void sub_100cf420(CBaseEntity *pEntity);	// removes (and runs the removal for) the queued kind 2 events targeting the entity's handle; wraps the entity's owner character's stat 0xb value around the removals
	void sub_100cf160(CBaseEntity *pEntity, int nStat);	// like sub_100cf420 for a stat number: removes (and runs) the queued kind 2 events whose block equals (3, nStat) and whose target handle is the entity's
	void sub_100cf080();	// runs and removes every queued event whose kind (+0x34) is 2: hands its block (+0x40), the entity of its target handle (+0x18) and its value (+0x20, only for kind 4 at +0x30) to sub_10230910, then unlinks and frees it (stub 0x1000fd3a is the global queue's wrapper)
	void sub_100cebb0();	// "CEventQueue::ServiceEvents" (0x100cebb0, this in ecx, no args): while the queue is not empty and its head's fire time (+0x00) is not past gpGlobals->curtime ([0x1070b228]+0xc): clears m_n54, and by kind (+0x34): 0 = entity input (target name +4 searched with the global entity list 0x106eb5d8 sub_100f7770 (ecx = list, args: prev, name or "", activator entity, 0) and AcceptInput slot 118 (+0x1d8) with (input name +8, activator, caller, a CVariantCopy at +0x20, output id +0x14); with a target handle +0x18 live the entity is used directly; otherwise "unhandled input: (%s) -> (%s), from (%s,%s)\n" DevMsg when nothing handled it and the console object 0x106cfe54 slot 1 is false and its +0x2c is set), then sub_100ce990 (target name +0x3c...); 1 = python string at +0x1c (PyString_AsString import, then sub_100ce8a0(text); "Invalid python entry in the event queue.\n" warning); 2 = block copy (+0x40) through CVDmgBlock16_t::sub_10230ed0 / sub_10230f90, value from +0x20 for kind (+0x30) 4, sub_10230910(block, entity of handle +0x18, value, 1) cdecl; other kinds: "unhandled input: Unknown Event Type: (%d)\n"; then unlinks the head (m_pHead = next +0x38), drops the refcount at +0x1c (calls slot 6 of its owner object at refcount 0) and frees it with operator delete; the globals 0x106cff51 (char, "limit the number of events per frame") and 0x10552814 (int, the remaining budget) stop the loop when the budget is used up. Event record: CEQEvent (m_pNext +0x38, m_n34 kind, m_n30 value type, m_pRefCount +0x1c)
	void sub_100ce0d0(int a, float fireDelay, int nOutputID);	// builds a kind 1 event (the first argument at +0x1c, an empty variant, fire time = curtime + delay, the output id at +0x14) and inserts it
};
