// CUnknown10315ec0: object holding a handle list (16 entity handles at +0x1c, count at +0x5c); real name not yet known.
#pragma once

struct CUnknown10315ec0Owner
{
	char pad0[0x5bb0];
	int m_count5bb0;
};

struct CUnknown10315ec0Ent
{
	char pad0[0x94];
	CUnknown10315ec0Owner *m_pOwner;
};

class CUnknown10315ec0
{
public:
	char pad0[0x1c];
	unsigned int m_handles[16];
	int m_numHandles;

	bool sub_10315ec0(CUnknown10315ec0Ent *pEnt);
};
