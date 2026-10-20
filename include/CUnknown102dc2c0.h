// CUnknown102dc2c0: an object with a list of entity handles (array at +0x518, count at +0x524) and a done flag at +0x516;
// real name not yet known.
#pragma once

extern char *g_10566458;	// the global entity table (entries of 12 bytes: entity, serial, pad, starting at +4)

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
		unsigned int h = m_Index;
		if (h != 0xffffffff) {
			CUnknown102dc2c0EntInfo *info = (CUnknown102dc2c0EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
			return info->serial == (h >> 13) ? info->ent : 0;
		}
		return 0;
	}
};

class CUnknown102dc2c0Ent
{
public:
	void sub_102db440(void *pOut);
};

class CUnknown102dc2c0
{
public:
	char m_pad0000[0x516];
	char m_bDone;	// 0x516
	char m_pad0517[1];
	CUnknown102dc2c0Handle *m_pHandles;	// 0x518
	char m_pad051c[8];
	int m_nHandles;	// 0x524

	void sub_102dc2c0();	// calls sub_102db440 on the entity of every handle with a 32 byte scratch buffer, then sets the flag
};
