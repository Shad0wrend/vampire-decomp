// CSoundscapeSystem (RTTI .?AVCSoundscapeSystem@@): base CAutoGameSystem (GameSystemRoot.h) and the holder of the
// soundscapes' names at +0x8 (CUnknown1024a230; CSoundscapeSystemMember8 is the matched bodies' view of it).
#pragma once
#include "GameSystemRoot.h"
#include "CUnknown1024a230.h"

struct CSoundscapeSystemMember8
{
	void sub_100100ff();
	int m_data[8];
};

class CSoundscapeSystem : public CAutoGameSystem
{
public:
	CSoundscapeSystem *vfunc8(unsigned int flags);	// slot 8 (0x101ae170) written out: the scalar deleting destructor
	CUnknown1024a230 m_soundscapes;	// 0x08

	int sub_10249aa0(const char *pszName);	// stub 0x1000cc2a: the index of the soundscape with that name
	int sub_102297a0();	// picks a free looping channel id (1..6) not used by the vector of 0x58-byte channels at +0x174 (count at +0x180) nor by the four embedded ones at +0x14; when all are used it stops and removes the vector entry with the smallest time (+0x44) and returns that entry's id
	virtual bool vfunc0();	// slot 0 "Init": loads scripts/soundscapes.txt into a key/value tree and adds an entry for every top level key that has children (count at +0xc), always true
	int Count() { return ((CSoundscapeSystemMember8 *)&m_soundscapes)->m_data[1]; }	// the number of soundscapes added so far (+0xc)
};
