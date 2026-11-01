// CUnknown101f5d60: the sound scheme table (loaded from vdata\system\<name>.txt, name at +0x24, empty string when null);
// real name not yet known. Its record array (+0x10 allocated, +0x14 count, +0x18 pointers) is a hand-grown pointer array.
#pragma once

class CUnknown101f4c80;

class CUnknown101f5d60
{
public:
	int m_nGrow;	// 0x00: the growth step of the record array
	int m_nNextId;	// 0x04: the id of the next record made
	int m_nInternalName;	// 0x08: the scheme's InternalName
	int m_nScheme0c;	// 0x0c
	int m_nAlloc;	// 0x10: allocated slots of the record array
	int m_nCount;	// 0x14: used slots
	CUnknown101f4c80 **m_pRecords;	// 0x18
	char pad1c[0x24 - 0x1c];
	const char *m_pszUnk24;

	const char *sub_101f5d60();
	bool sub_101f5390(void *pKV);	// parses the "SoundScheme" key: InternalName, then one record per "Sound" key of "SoundList"; false without a key or a scheme
};
