// CUnknown101b7370: a pool of 0xe8-byte nodes (array pointer at +4, first free node index at +0x18); each node holds a
// payload at +0x1c with two small vectors; real name not yet known.
#pragma once

#include "UtlMem.h"

class CUnknown101b7370Vec : public UtlMem
{
public:
	int m_size;	// 0x0c
	int *m_pElements;	// 0x10

	int *sub_101316b0();	// returns the base pointer (the first dword)
};

struct CUnknown101b7370Payload
{
	char m_pad00[0x20];
	CUnknown101b7370Vec m_vecA;	// 0x20
	CUnknown101b7370Vec m_vecB;	// 0x34
	char m_pad48[0xe8 - 0x1c - 0x48];
};

struct CUnknown101b7370Node
{
	int m_nIndex;	// 0x00
	int m_nNext;	// 0x04
	char m_pad08[0x1c - 8];
	CUnknown101b7370Payload m_payload;	// 0x1c
};

void __fastcall sub_10130ef0(int *pVec);

class CUnknown101b7370
{
public:
	char m_pad00[4];
	CUnknown101b7370Node *m_pNodes;	// 0x04
	char m_pad08[0x18 - 8];
	int m_nFirstFree;	// 0x18

	void sub_10131620(int index);	// (re)initialises node `index` and pushes it on the free list
};
