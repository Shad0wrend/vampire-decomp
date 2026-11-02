// Records of the physics save/restore block (CPhysSaveRestoreBlockHandler::vfunc7 restore loop and its callee 0x100443e0).
#pragma once

#include "Vector.h"

// The 0x34 byte zero-filled stack record vfunc7 fills with pRestore slot 2(&rec, 0x1053c410) (13 dwords, m_hEntity = -1 first).
struct CPhysRestoreRecord
{
	int m_nId;	// 0x00: handed to the tracer (0x10723940 slot 50) as the record key
	unsigned int m_hEntity;	// 0x04: entity handle (-1 when empty)
	int m_nKey;	// 0x08: matched against CPhysObjectDesc::m_nKey
	int m_nItems;	// 0x0c: item count (vfunc7 loop bound, min'd with the desc's count)
	const char *m_pszName;	// 0x10: model / object name (null: "" at 0x106b8540)
	Vector m_vecPos;	// 0x14
	Vector m_vecAng;	// 0x20
	float m_flScale;	// 0x2c
	int m_nIndex;	// 0x30: callee 0x100443e0 indexes the model's list with it when the name is set
};

// The 0x38 byte record of the vector at tree-node dword +0xc (data +0, count +0xc).
struct CPhysObjectDesc
{
	int m_nType;	// 0x00: 1 with one item goes to CPhysSaveRestoreBlockHandler::sub_100443e0
	int m_pad04;
	int m_nKey;	// 0x08
	int m_nItems;	// 0x0c
	char m_pad10[0x34 - 0x10];
	void **m_pItems;	// 0x34: item array (dword stride); callee 0x100443e0 tests m_pItems[0] (physics object slot)
};
