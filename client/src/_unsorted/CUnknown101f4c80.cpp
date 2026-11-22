// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10155970 size=0x1c
#include "CUnknown101f4c80.h"

CUnknown101f4c80::~CUnknown101f4c80()
{
	if (m_unk10)
	{
		::operator delete((void *)m_unk10);
		m_unk10 = 0;
	}
}
// END FUNCTION
