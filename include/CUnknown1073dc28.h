// CUnknown1073dc28: the global sound table at 0x1073dc28 (name provisional): a list of sound records (id at +0,
// name object at +4; count at +0x14, pointer array at +0x18) that also plays a sound for an entity by id.
#pragma once

#include "CUnknown101f4c80.h"
#include "CUnknown101f4120.h"

class CBaseEntity;

extern char g_106b8540[];	// the empty string

struct CUnknown1073dc28Name	// the name object inside a record
{
	const char *m_psz;

	const char *Get() { return m_psz ? m_psz : g_106b8540; }
};

struct CUnknown1073dc28Record
{
	int m_nId;	// 0x00
	CUnknown1073dc28Name m_Name;	// 0x04
};

class CUnknown1073dc28
{
public:
#ifdef PCD_INITIALIZERS	// the initializer units: the global 0x1073dc28 is built and destroyed by these
	CUnknown1073dc28();	// function 0x101f4f50
	~CUnknown1073dc28();	// function 0x101f4f80
#endif
	char m_pad0000[4];
	int m_field04;	// 0x04
	char m_pad0008[8];
	int m_field10;	// 0x10
	int m_nRecords;	// 0x14
	CUnknown1073dc28Record **m_ppRecords;	// 0x18
	int m_nGroups;	// 0x1c
	CUnknown101f4120 **m_ppGroups;	// 0x20

	void sub_101f5950(CBaseEntity *pEntity, int soundId, int channel, float volume, int flags);	// plays the sound (stub 0x100119fa)
	int sub_101f55a0(CBaseEntity *pEntity, const char *pszName, int bFemale);	// looks up the sound group of the named table for the entity (stub 0x10009331)
	void sub_101f4f80();	// purges the table (stub 0x10006c62): deletes every group and every record with their arrays and clears the counts
};
