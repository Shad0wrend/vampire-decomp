// CUnknown101ed9e0: object whose first dword is set by a constructor-like method returning this; real name not yet known.
#pragma once

class CUnknown101ed9e0
{
public:
	int m_unk0;
	int m_unk4;	// InternalName
	int m_unk8;

	CUnknown101ed9e0 *sub_101ed9e0(int value);
	bool sub_101eda20(void *pNode);	// stub 0x1000887d: reads the record from a data node; false when there is none
};
