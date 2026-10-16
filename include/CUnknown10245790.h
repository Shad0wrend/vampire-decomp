// CUnknown10245790: object pointing to a second object with a flags dword at +0x18 (called from CGameDLL_ConVarAccessor::vfunc0); real name not yet known.
#pragma once

struct CUnknown10245790Target
{
	char pad0[0x18];
	unsigned int m_flags;
};

class CUnknown10245790
{
public:
	int m_unk0;
	CUnknown10245790Target *m_unk4;

	void sub_10245790(unsigned int flags);
};
