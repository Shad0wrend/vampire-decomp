// CUnknown1030fe50: object holding a pointer at +4 to an owner whose dword at +0x1f8 it clears; real name not yet known.
#pragma once

struct CUnknown1030fe50_Owner
{
	char pad0[0x1f8];
	int m_unk1f8;
};

class CUnknown1030fe50
{
public:
	char pad0[4];
	CUnknown1030fe50_Owner *m_pOwner;

	void sub_1030fe50();
};
