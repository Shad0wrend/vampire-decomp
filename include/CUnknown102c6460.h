// CUnknown102c6460: entity handle (index in the low 13 bits, serial above); real name not yet known.
#pragma once

struct CUnknown102c6460Entry
{
	void *m_pEntity;	// 0x0000
	unsigned int m_serial;	// 0x0004
	int m_unk8;
};

struct CUnknown102c6460List
{
	int m_unk0;
	CUnknown102c6460Entry m_entries[1];	// 0x0004
};

class CGlobalEntityList;
extern CGlobalEntityList *g_10566458;	// the global entity list (CGlobalEntityList.h); its entity slots (12 bytes: entity, serial, list index) start at +4

class CUnknown102c6460
{
public:
	unsigned int m_handle;

	void *Get() const
	{
		if (m_handle != 0xffffffff) {
			CUnknown102c6460Entry *e = &((CUnknown102c6460List *)g_10566458)->m_entries[m_handle & 0x1fff];
			if (e->m_serial == (m_handle >> 13))
				return e->m_pEntity;
		}
		return 0;
	}
	bool sub_102c6460(void *pEntity) const;
};
