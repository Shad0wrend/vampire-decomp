// CEventQueue: the global queue of delayed entity outputs (the "EventQueue" block of a save game); the count of the
// queued events is at +0x50. Real layout only partly known.
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
	char m_pad001c[4];
	int m_n20;	// 0x20
	char m_pad0024[8];
	int m_hVariant;	// 0x2c
	int m_n30;	// 0x30
	int m_n34;	// 0x34
	char m_pad0038[4];
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

class IEQRestore	// the restore interface the queue reads its tables through (slot 3)
{
public:
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual int ReadFields(const char *pszName, void *pBaseData, void *pMap, void *pFields, int nFields);	// slot 3
};

class CEventQueue
{
public:
	char m_pad0000[0x50];
	int m_nEvents;	// 0x50

	void sub_100cdda0();	// empties the queue (stub 0x1000fc81)
	void sub_100ce1c0(CEQEvent *pEvent);	// adds an event (stub 0x1001253f)
	int sub_100cfda0(IEQRestore *pRestore);	// restores the queue: empties it, reads the "EventQueue" table and then one "PEvent" record per queued event; 0 when a read fails
	void sub_100ce210(CEQEvent *pEvent);	// inserts a built event into the queue (stub 0x1000f074)
	void sub_100cddf0(const char *pszTarget, const char *pszTargetInput, CVariantCopy Value, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID, int nExtra);	// "CEventQueue::AddEvent": builds a 0x50 byte event (fire time = curtime + delay, the two names or null when empty, the entity handles of activator / caller or -1, the variant, the output id and one more dword) and inserts it (takes 12 stack dwords)
	void sub_100cdf10(CBaseEntity *pTarget, const char *pszAction, CVariantCopy Value, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID, float flExtra);	// "CEventQueue::AddEvent" for an entity target (stub 0x1000cad6; takes 12 stack dwords)
	void sub_100ce040(CBaseEntity *pTarget, const char *pszAction, float fireDelay, CBaseEntity *pActivator, CBaseEntity *pCaller, int nOutputID);	// "CEventQueue::AddEvent" without a value: an empty variant
};
