// Records of the physics save/restore block (CPhysSaveRestoreBlockHandler::vfunc7 restore loop and its callee 0x100443e0).
#pragma once

#include "Vector.h"

// The 0x34 byte zero-filled stack record vfunc7 fills with pRestore slot 2(&rec, 0x1053c410) (13 dwords, m_hEntity = -1 first).
struct CPhysRestoreRecord
{
	int m_nKey;	// 0x00: compared with CPhysObjectDesc::m_nKey
	unsigned int m_hEntity;	// 0x04
	int m_pad08[2];	// 0x08
	int m_nCount;	// 0x10 in vfunc7 reads ([esp+0x4c] = dword 0xc below): see m_nItems
	const char *m_pszName;	// 0x10 (callee 0x100443e0 reads +0x10 as the name)
	Vector m_vecPos;	// 0x14
	Vector m_vecAng;	// 0x20
	float m_flScale;	// 0x2c
	int m_nIndex;	// 0x30
};
