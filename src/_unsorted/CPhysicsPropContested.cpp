// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101930b0 size=0x14
#include "CPhysicsPropContested.h"

bool CPhysicsPropContested::vfunc32(int a)
{
	if (m_b7ac)
		return CPhysicsProp::vfunc32(a);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10193100 size=0x12
struct CContestedFields10193100 {
    char pad0[0x7ac];
    unsigned char field7ac;
    int sub_10193100(int a);
};
int CContestedFields10193100::sub_10193100(int a)
{
    return (field7ac != 0 ? -5 : 0) + 5;
}
// END FUNCTION

// FUNCTION: 0x10193130 size=0x12
struct CContestedFields10193130 {
    char pad0[0x7ac];
    unsigned char field7ac;
    int sub_10193130(int a);
};
int CContestedFields10193130::sub_10193130(int a)
{
    return (field7ac != 0 ? -9 : 0) + 9;
}
// END FUNCTION
