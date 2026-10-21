// CUnknown103164c0: an NPC squad (0x78 bytes; name at the start, up to 16 member entity handles at +0x1c, their count
// at +0x5c); real name not yet known.
#pragma once

#include "CUnknown102e06f0.h"
#include "CBitString.h"

class CBaseEntity;

struct CSquadName	// the name argument of the squad's name setter: one pointer, passed by value
{
	const char *m_psz;

	CSquadName() { m_psz = 0; }
};

class CUnknown103164c0
{
public:
	char m_pad00[8];
	CUnknown102e06f0 m_base;	// 0x08
	unsigned int m_hMembers[16];	// 0x1c
	int m_nMembers;	// 0x5c
	char m_pad60[4];
	CBitString m_bits;	// 0x64
	int m_n70;	// 0x70
	char m_pad74[4];

	CUnknown103164c0(const char *pszName);	// 0x103164c0 (stub 0x10002856): returns this
	CUnknown103164c0 *sub_10316560();	// the default constructor body (no name), stub-called by CAI_SaveRestoreBlockHandler::vfunc7: returns this
	void sub_103165f0(const char *pszName);	// sets the squad name (stub 0x100132eb)
	void sub_103165f0(CSquadName name);
	void sub_10316700(CBaseEntity *pMember);	// stub 0x100145ab: told about a member that joined
};
