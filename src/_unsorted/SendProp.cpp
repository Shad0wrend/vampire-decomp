// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102466d0 size=0x1e
#include "SendProp.h"

// TARGET: SendProp::vfunc0
SendProp *SendProp::vfunc0(unsigned int flags)
{
	sub_1000648d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10247140 size=0x50
#include "SendProp.h"

SendProp::SendProp()
{
    m_pszVarName = 0;
    m_n4c = 0;
    m_n48 = 0;
    m_n40 = 0;
    m_pszExcludeDTName = 0;
    m_n10 = 0;
    m_n08 = 0;
    m_nFlags = 0;
    m_n0c = 0;
    m_n14 = 0;
    m_n18 = 0;
    m_n1c = 0;
    m_n20 = 0;
    m_n24 = 0;
    m_n28 = 1;
    m_n2c = -1;
    m_b50 = 0xfe;
    m_n04 = 0;
    m_n38 = 0;
    m_n44 = 0;
}
// END FUNCTION

// FUNCTION: 0x102471b0 size=0x7
#include "SendProp.h"

SendProp::~SendProp()
{
}
// END FUNCTION
