// CUnknown102d1220: entity-like object with a name pointer at +0x26c and a key at +0x5dc; real name not yet known.
#pragma once

class CUnknown102d1220
{
public:
	char m_pad0[0x26c];
	const char *m_pszName;	// +0x26c
	char m_pad270[0x5dc - 0x270];
	int m_nKey;	// +0x5dc

	bool sub_102d1220(int key, const char *pszName);	// true when key matches and pszName matches this object's name (wildcard '*' at the end allowed, empty matches an unnamed object)
};
