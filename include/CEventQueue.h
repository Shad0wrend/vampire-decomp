// CEventQueue: the global queue of delayed entity outputs (the "EventQueue" block of a save game); the count of the
// queued events is at +0x50. Real layout only partly known.
#pragma once

struct CEQEvent	// a "PEvent" record as the queue restores it (0x44 bytes); the entity handles start invalid
{
	char m_pad0000[0xc];
	int m_hActivator;	// 0x0c
	int m_hCaller;	// 0x10
	char m_pad0014[4];
	int m_hTarget;	// 0x18
	char m_pad001c[4];
	int m_n20;	// 0x20
	char m_pad0024[8];
	int m_hVariant;	// 0x2c
	int m_n30;	// 0x30
	char m_pad0034[0x44 - 0x34];

	CEQEvent()
	{
		m_hActivator = -1;
		m_hCaller = -1;
		m_hTarget = -1;
		m_hVariant = -1;
		m_n20 = 0;
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
};
