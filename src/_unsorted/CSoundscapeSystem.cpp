// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ae170 size=0x28
#include "CSoundscapeSystem.h"
CSoundscapeSystem *CSoundscapeSystem::vfunc8(unsigned int flags)
{
	m_member.sub_100100ff();
	CBaseGameSystem::~CBaseGameSystem();
	if (flags & 1)
		::operator delete(this);
	return this;
}
// END FUNCTION
