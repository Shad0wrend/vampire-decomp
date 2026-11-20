// CUnknown100c7f30: bit string (count at +0, packed 32-bit words from +4) built from per-bone flags of a studio
// header; real name not yet known.
#pragma once

struct CUnknown100c7f30Hdr
{
	char pad0[0xf0];
	int m_numBones;
	int m_boneOffset;
};

class CUnknown100c7f30
{
public:
	int m_count;
	unsigned int m_bits[1];

	void sub_1008e230(CUnknown100c7f30Hdr *hdr, unsigned int mask);
};
