// CUnknown102dc2c0: an object with a list of entity handles (array at +0x518, count at +0x524) and a done flag at +0x516;
// real name not yet known.
#pragma once

class CGlobalEntityList;
extern CGlobalEntityList *g_10566458;	// the global entity list (CGlobalEntityList.h); its entity slots (12 bytes: entity, serial, list index) start at +4

class CUnknown102dc2c0Ent;

struct CUnknown102dc2c0EntInfo
{
	CUnknown102dc2c0Ent *ent;
	int serial;
	int pad;
};

struct CUnknown102dc2c0Handle
{
	unsigned int m_Index;

	CUnknown102dc2c0Ent *Get()
	{
		if (m_Index != 0xffffffff) {
			CUnknown102dc2c0EntInfo *info = (CUnknown102dc2c0EntInfo *)((char *)g_10566458 + 4) + (m_Index & 0x1fff);
			return info->serial == (m_Index >> 13) ? info->ent : 0;
		}
		return 0;
	}
};

class CUnknown102dc2c0Ent
{
public:
	void sub_102db440(void *pOut);

	char m_pad0000[0x564];
	int m_n564;	// 0x564: 1 for the entities this object counts
};

class CUnknown102dc2c0
{
public:
	char m_pad0000[0x500];
	int m_nCounted;	// 0x500: how many of the handles resolve to an entity with the state 1
	int m_nLimit;	// 0x504: index of the handle the object is currently working on
	char m_pad0508[0x516 - 0x508];
	char m_bDone;	// 0x516
	char m_pad0517[1];
	CUnknown102dc2c0Handle *m_pHandles;	// 0x518
	char m_pad051c[8];
	int m_nHandles;	// 0x524

	void sub_102dc2c0();	// calls sub_102db440 on the entity of every handle with a 32 byte scratch buffer, then sets the flag
	bool sub_102dc8f0();	// unless done: drops the handles that no longer resolve (shifting the rest down), counts the ones in state 1 at +0x500; when a dropped handle was at or before +0x504 and at least two are counted resets +0x504 and calls sub_102dca60(); true when at least two are counted
	void sub_102dca60();
};
