// CUnknown101b7370: a pool of 0xe8-byte nodes (array pointer at +4, first free node index at +0x18); each node holds two
// small vectors at +0x3c and +0x50; real name not yet known.
#pragma once

#include "UtlMem.h"

class CUnknown101b7370Vec : public UtlMem
{
public:
	int m_size;	// 0x0c
	int *m_pElements;	// 0x10

	int *sub_100051af();	// returns the base pointer (the first dword)
};

struct CUnknown101b7370Node
{
	int m_nIndex;	// 0x00
	int m_nNext;	// 0x04
	char m_pad08[0x3c - 8];
	CUnknown101b7370Vec m_vecA;	// 0x3c
	CUnknown101b7370Vec m_vecB;	// 0x50
	char m_pad64[0xe8 - 0x64];
};

void __fastcall sub_101b6a30(int *pVec);

class CUnknown101b7370
{
public:
	char m_pad00[4];
	CUnknown101b7370Node *m_pNodes;	// 0x04
	char m_pad08[0x18 - 8];
	int m_nFirstFree;	// 0x18

	void sub_101b7370(int index);	// (re)initialises node `index` and pushes it on the free list
};
