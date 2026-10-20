// CUnknown10205f70: a grow-on-demand list of pointers to 0x2c byte objects, filled from the child keys of a key-value
// block (grow step at +0x0, running object counter at +0x4, allocation count / used count / pointer array at
// +0x10 / +0x14 / +0x18); real name not yet known.
#pragma once

class CUnknown10205f70
{
public:
	int m_nGrowSize;	// 0x00
	int m_nCounter;	// 0x04
	int m_pad08[2];
	int m_nAlloc;	// 0x10
	int m_nUsed;	// 0x14
	void **m_ppObjects;	// 0x18

	bool sub_10205f70(void *pKeys, const char *pszName);	// for every child key of pKeys named pszName takes the next object of the list (created on demand, constructed with the running counter) and hands it the key's string value (virtual slot 1); false for null keys
};
