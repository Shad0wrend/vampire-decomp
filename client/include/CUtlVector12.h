// CUtlVector12: a CUtlVector whose elements are 12 bytes (three dwords), as a wrapper around Source's CUtlVector
// that carries the game's out-of-line copies as sub_ members.
#pragma once

#include "utlvector.h"

struct CUtlVector12Elem_t
{
	int m_a;
	int m_b;
	int m_c;
};

class CUtlVector12 : public CUtlVector<CUtlVector12Elem_t>
{
public:
	int sub_100b4b70(int elem);	// "CUtlVector::InsertBefore": grows by one, shifts the tail up, returns elem (no construct for the plain element)
};
