// CUnknown101e0f00: loader of the "DisciplineTgt_" data files (real name not yet known).
#pragma once

#include "CUnknown101dbc60.h"
#include "CUnknown101dd910.h"

struct CUnknown101e0f00Src	// the 0x1c byte source descriptions at +0xa4 / +0xc0 of an entry
{
	void sub_101dd3c0(const char *pszLabel);	// Debug_Display with the label (stub 0x10015d66)
};

struct CUnknown101e0f00Tail	// the object at +0xdc of an entry
{
	void sub_101e04a0();	// Debug_Display (stub 0x10006a23)
};

struct CUnknown101e0f00Entry	// one targeted discipline
{
	int m_id;	// 0x00
	const char *m_pszName;	// 0x04
	const char *m_pszInternalName;	// 0x08
	char m_pad000c[0x18 - 0x0c];
	const char *m_pszViewModel;	// 0x18
	const char *m_pszTgtHighlightParticle;	// 0x1c
	int m_nBaseCost;	// 0x20
	char m_bOvert;	// 0x24
	char m_pad0025[0x2c - 0x25];
	float m_flRecoveryTime;	// 0x2c
	char m_pad0030[0x38 - 0x30];
	CUnknown101dbc60 m_range;	// 0x38
	char m_pad0060[0x68 - 0x60];
	CUnknown101dd910 m_projectile;	// 0x68
	char m_pad0078[0xa4 - 0x78];
	char m_srcInstant[0x1c];	// 0xa4: a CUnknown101e0f00Src
	char m_srcHit[0x1c];	// 0xc0: a CUnknown101e0f00Src
	char m_tail[4];	// 0xdc: a CUnknown101e0f00Tail

	void sub_101e0a00();	// Debug_Display of the entry (stub 0x100100fa)
};

class CUnknown101e0f00
{
public:
	int m_n0000;
	int m_nEntries;	// 0x04
	void **m_ppEntries;	// 0x08: the entries the data files fill, one per file

	bool sub_101e10e0(const char *name, int *pIndex);	// opens the data file `name` (stub 0x1000bb9a) and walks its "DisciplineTgt" nodes: each node is parsed into the entry m_ppEntries[(*pIndex)++] (sub_101e08d0); false (after a Msg) when the file cannot be opened or an entry is missing
	void sub_101e0f00();	// counts the "vdata\system\DisciplineTgt_*.txt" files, then loads each DisciplineTgt_%03d.txt (Msg when one cannot be opened)
	int sub_101e12f0(const char *pszName);	// the index of the entry whose internal name equals pszName (case-insensitive), -1 when none (stub 0x10004570)
	void sub_101e4380(const char *pszName);	// "Targeted Discipline Manager" Debug_Display: without a name lists every entry (index, name, base cost), with the name of an entry (or "ALL") displays that entry (every entry)
};
