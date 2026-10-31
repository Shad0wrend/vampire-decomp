// CPhysSaveRestoreBlockHandler: the physics save/restore block handler (RTTI name). Only the members the recovered code needs.
#pragma once

#include "utlrbtree.h"
#include "CRBTree16Entry8.h"

class CSave;

class CPhysSaveRestoreBlockHandler
{
public:
	char m_pad0000[0x24];
	CUtlRBTree<CRBTree16Entry8, unsigned short> m_Tree24;	// 0x24: the tree whose elements own heap vectors
	char m_pad003c[0x40 - 0x3c];
	bool m_bMatch40;	// 0x40: the saved short of the source equals the global at 0x1053c340
	char m_pad0041[0x98 - 0x41];
	char m_data98[0x10];	// 0x98: the sub-object the source is handed to (slot 2 of the source's vtable)

	void vfunc3(CSave *pSave);	// slot 3 "save": calls slot 8 of the save (the global at 0x1053c340 with 1), then slot 2 of it with this + 0x98 and the empty name at 0x1053c344
	void vfunc5();	// slot 5: hands this + 8 (or 0 without a block) to the global at 0x106eb5d8, then calls slot 49 of the object at 0x10723940 with a zeroed dword
	void vfunc6(void *pSource);	// stores whether the source's slot 13 short equals 0x1053c340 at +0x40, then forwards the block at +0x98 with the string 0x1053c344 to the source's slot 2
	void vfunc8();	// slot 8: tells the physics environment (slot 51), destroys every tree element (their heap vectors) and frees the nodes, then hands this + 8 (or 0) to the global at 0x106eb5d8
public:
	int vfunc0();
};
