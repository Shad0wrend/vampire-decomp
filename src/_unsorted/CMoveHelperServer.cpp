// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1013edb0 size=0x1e
#include "CMoveHelperServer.h"

// TARGET: CMoveHelperServer::vfunc14
CMoveHelperServer *CMoveHelperServer::vfunc14(unsigned int flags)
{
	sub_1000185c();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1013f070 size=0x8
#include "CMoveHelperServer.h"

void CMoveHelperServer::vfunc1()
{
	m_nTouchCount = 0;
}
// END FUNCTION
