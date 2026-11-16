// CUnknown101e9880: 12-byte zero-initialised struct (three dwords); real name not yet known.
#pragma once

class CUnknown101e9880
{
public:
#ifdef PCD_INITIALIZERS	// the initializer units: the global 0x1073a28c is built and destroyed by these
	CUnknown101e9880();	// function 0x101e9880
	~CUnknown101e9880();	// function 0x101e98a0
#endif
	int m_unk0;
	int m_unk4;
	int m_unk8;

	CUnknown101e9880* sub_101e9880();
};
