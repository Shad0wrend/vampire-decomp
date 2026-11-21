// CUnknown101bbd10: a pending sound request: name at +0x2c, entity handle at +0x30, a value at +0x34, a pending flag at +0x3c;
// real name not yet known.
#pragma once

class CUnknown101bbd10
{
public:
	char pad0[0x2c];
	const char *m_pszName;	// 0x2c
	unsigned int m_hEntity;	// 0x30
	int m_nValue;	// 0x34
	char pad38[4];
	int m_bPending;	// 0x3c

	void sub_10133a20();	// when pending: if the entity of the handle still resolves, hands its engine index, the value and the name ("" when null) to the sound system (sub_101b1880); then clears the pending flag
};
