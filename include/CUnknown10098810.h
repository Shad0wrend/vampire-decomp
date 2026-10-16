// CUnknown10098810: object with two cleared dwords at +4 and +0x14 (constructor-like, returns this); real name not yet known.
#pragma once

class CUnknown10098810
{
public:
	char pad0[4];
	int m_unk4;
	char pad8[0xc];
	int m_unk14;

	CUnknown10098810 *sub_10098810();
};
