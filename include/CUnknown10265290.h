// CUnknown10265290.h: the object the global 0x1090fe10 is: a CUtlVector<int> its out-of-line constructor (function
// 0x10265290, a CUtlVector<int>(0, 0) that then reserves 0x100 elements) builds; the implicit destructor destroys the
// vector inline. Only the initializer units (PCD_INITIALIZERS) see it.
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"
struct CUnknown10265290
{
	CUnknown10265290();	// function 0x10265290
	CUtlVector<int> m_vec;
};
#endif
