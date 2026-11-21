// CUnknown101f5d60: the sound scheme table (loaded from vdata\system\<name>.txt, name at +0x24, empty string when null);
// real name not yet known. Its record array (+0x10 allocated, +0x14 count, +0x18 pointers) is a hand-grown pointer array.
#pragma once

#include "CUnknown101f4c80.h"
#include "CUnknown101f40f0.h"

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
	int m_nChildren;	// 0x1c
	class CUnknown101f40f0 **m_ppChildren;	// 0x20: the records sub_101f41b0 is run over
	const char *m_pszUnk24;

	bool sub_10155d50();	// reloads the scheme from vdata\system\<name>.txt: frees the record array, parses the file (warns when it cannot be loaded or opened), then runs sub_101f41b0 over the children
	bool sub_10155e80(void *pKV);	// parses the "SoundScheme" key: InternalName, then one record per "Sound" key of "SoundList"; false without a key or a scheme
};
