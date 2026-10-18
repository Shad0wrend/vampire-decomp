// CUnknown102c63b0: entity handle (index in the low 13 bits, serial above); real name not yet known.
#pragma once

struct CUnknown102c63b0Entry
{
	int m_unk0;
	void *m_pEntity;	// 0x0004
	unsigned int m_serial;	// 0x0008
};

class CUnknown102c63b0
{
public:
	unsigned int m_handle;

	bool sub_102c63b0(void *pEntity) const;
};
