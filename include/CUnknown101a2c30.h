// CUnknown101a2c30: an object (real name not yet known) that keeps a snapshot record (0x30 bytes each) of every entity
// of the level: the record count at +0x1330 and the save-memory block at +0x1334.
#pragma once

#include "ehandle.h"

// Source's entitytable_t (saverestore.h), 0x30 bytes in this game
struct entitytable_t
{
	int id;
	int edictindex;
	int saveentityindex;
	int restoreentityindex;
	EHANDLE hEnt;	// 0x10
	int location;
	int size;
	int flags;
	int classname;	// 0x20
	int globalname;
	int modelname;
	int m_unk2c;
};

class CUnknown101a2c30
{
public:
	void InitEntityTable(entitytable_t *pNewTable, int size) { m_pRecords = pNewTable; m_nRecords = size; }
	entitytable_t *GetEntityInfo(int i) { return &m_pRecords[i]; }
	int NumEntities() { return m_nRecords; }

	char m_pad0000[0x1330];
	int m_nRecords;	// 0x1330
	entitytable_t *m_pRecords;	// 0x1334
};
