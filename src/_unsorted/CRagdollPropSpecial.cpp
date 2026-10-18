// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10157640 size=0x22
#include "CRagdollPropSpecial.h"
void CRagdollPropSpecial::vfunc113()
{
	CBaseEntity::vfunc113();
	m_b103c = 1;
	m_f1044 = 100.0f;
	m_f1048 = 100.0f;
}
// END FUNCTION

// FUNCTION: 0x10157870 size=0xd
struct RagdollField1040 { char pad[0x1040]; int m; };
void CRagdollPropSpecial::vfunc191(int value)
{
	((RagdollField1040 *)this)->m = value;
}
// END FUNCTION
