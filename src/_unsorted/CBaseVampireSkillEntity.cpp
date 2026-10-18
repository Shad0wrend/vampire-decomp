// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020ab90 size=0x18
#include "CBaseVampireSkillEntity.h"
struct CUnknownGlobals1070b228 { int m_pad[3]; int m_unkc; };
extern CUnknownGlobals1070b228 *g_1070b228;
void CBaseVampireSkillEntity::vfunc103()
{
	sub_10012eef();
	m_unk788 = g_1070b228->m_unkc;
}
// END FUNCTION

// FUNCTION: 0x1020ac50 size=0xb
void CBaseVampireSkillEntity::vfunc272()
{
	m_unk78c = 0;
}
// END FUNCTION
