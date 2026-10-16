// CUnknown101578b0: NPC-like object with a flags byte at +0x204 (the same byte CCineNPC::vfunc585 tests) and a byte flag at +0x103c; real name not yet known.
#pragma once

class CUnknown101578b0
{
public:
	char pad0[0x204];
	unsigned char m_flags204;
	char pad205[0xe37];
	char m_bFlag103c;
	char pad103d[0x104c - 0x103d];
	int m_unk104c;

	bool sub_101578b0();
	void sub_10157890(char value);
	void sub_10157910(int value);
};
