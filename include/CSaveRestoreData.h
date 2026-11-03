// CSaveRestoreData: the save/restore "entity block" (the game-save-restore info). CRestore::vfunc33 (slot 33, +0x84)
// returns the pointer to it (CRestore.h declares that slot as `int`; cast its result); CSave reaches the same object
// through CSaveSections::m_pEntityBlock (+0x1c of the save data). Only the fields decompiled code touches.
#pragma once

#include "Vector.h"

struct CSaveRestoreData
{
	char m_pad0000[0x12c4];
	int m_bLandmarkOffset12c4;	// +0x12c4: when non-zero the landmark offset at +0x12dc is used
	char m_pad12c8[0x12dc - 0x12c8];
	Vector m_vecLandmarkOffset12dc;	// +0x12dc: the landmark-relative offset (CRestore::ReadPosition / CSave::WritePositionVector)
	float m_flFloatOffset12e8;	// +0x12e8: the float offset CSave's float-field writer subtracts
	char m_pad12ec[0x130c - 0x12ec];
	Vector m_vec130c;	// +0x130c: a position the restore path adds to the collision-space transform
	int m_nEntityTableCount1318;	// +0x1318: the entity table count (entries at +0x131c)
	char m_pad131c[4];
};
