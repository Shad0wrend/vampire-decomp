// CUnknown101d54f0: three-dword object zeroed by a global initializer; real name not yet known.
#pragma once

class CUnknown101d54f0
{
public:
#ifdef PCD_INITIALIZERS	// the initializer units: the global 0x10738d10 is built and destroyed by these
	CUnknown101d54f0();	// function 0x101d54f0
	~CUnknown101d54f0();	// function 0x101d5510
#endif
	int m_unk0;
	int m_unk4;
	int m_unk8;

	CUnknown101d54f0 *sub_101d54f0();
};
