// CUnknown100b6480: owns an array of heap items (pointer array at +0xa6c, count at +0xa78); each item owns a
// heap block at +0x80. Real name not yet known.
#pragma once

struct CUnknown100b6480_Item
{
	char pad0[0x80];
	void *m_pBlock;
};

#include "utlvector.h"

class CUnknown100b6480
{
public:
	char pad0[0xa6c];
	CUtlVector<CUnknown100b6480_Item *> m_Items;

	void sub_100b6480();
};
