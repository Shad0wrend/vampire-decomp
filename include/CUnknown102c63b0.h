// CUnknown102c63b0: entity handle (index in the low 13 bits, serial above); real name not yet known.
#pragma once

struct CUnknown102c63b0Entry
{
	int m_unk0;
	void *m_pEntity;	// 0x0004
	unsigned int m_serial;	// 0x0008
};

extern CUnknown102c63b0Entry *g_10566458;

class CUnknown102c63b0
{
public:
	unsigned int m_handle;

	void *Get() const
	{
		if (m_handle != 0xffffffff) {
			CUnknown102c63b0Entry *e = &g_10566458[m_handle & 0x1fff];
			if (e->m_serial == (m_handle >> 13))
				return e->m_pEntity;
		}
		return 0;
	}
	bool sub_102c63b0(void *pEntity) const;
};
