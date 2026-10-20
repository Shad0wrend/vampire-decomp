// CUnknown101dfb80: a discipline hit-group trigger record (name at +4, an applier object embedded at +0x64);
// real name not yet known.
#pragma once

class CBaseEntity;

class CUnknown101dfb80Applier
{
public:
	void sub_10012157(CBaseEntity *pEnt, int a);	// the stub at 0x10012157 for 0x101dd090
};

class CUnknown101dfb80
{
public:
	int m_pad0000;
	const char *m_pszName;	// 0x04
	char m_pad0008[0x64 - 8];
	CUnknown101dfb80Applier m_applier;	// 0x64

	void sub_101dfb80(int unused, CBaseEntity *pEnt, int a);	// logs "Discipline<table>: HitGroup: <name> Instant Triggered on <entity> (<classname>)", then hands the entity to the applier
};
