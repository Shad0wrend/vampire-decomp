// CUnknown1073dc28: the global sound table at 0x1073dc28 (name provisional): a list of sound records (id at +0,
// name object at +4; count at +0x14, pointer array at +0x18) that also plays a sound for an entity by id.
#pragma once

class CBaseEntity;

extern char g_106b8540[];	// empty string

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
	char m_pad0000[0x14];
	int m_nRecords;	// 0x14
	CUnknown1073dc28Record **m_ppRecords;	// 0x18

	void sub_101f5950(CBaseEntity *pEntity, int soundId, int channel, float volume, int flags);	// plays the sound (stub 0x100119fa)
};
