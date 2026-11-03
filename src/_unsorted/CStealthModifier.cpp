// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cb8c0 size=0x6
#include "datamap.h"
#include "CStealthModifier.h"
namespace lifted {
extern char g_1059e804;
}
datamap_t * CStealthModifier::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059e804);
}
// END FUNCTION

// FUNCTION: 0x101cb9e0 size=0x10
#include "CStealthModifier.h"

// TARGET: CStealthModifier::vfunc103
void CStealthModifier::vfunc103()
{
	CBaseEntity::vfunc103();
	sub_101c5080();
}
// END FUNCTION

// FUNCTION: 0x101cba00 size=0x2d
struct CStealthUnit101cba00 {
    char pad[0x598];
    int m_i598;
    void sub_10008ef4(void *pOther);
    void sub_101cba00(void *pOther);
};
struct CCombatUnit101cba00 {
    void sub_1032f930(int a);
};
struct CEntUnit101cba00 {
    char pad[0x9c];
    void *m_p9c;
};

// TARGET: sub_101cba00
void CStealthUnit101cba00::sub_101cba00(void *pOther)
{
    sub_10008ef4(pOther);
    if (((CEntUnit101cba00 *)pOther)->m_p9c) {
        ((CCombatUnit101cba00 *)((CEntUnit101cba00 *)pOther)->m_p9c)->sub_1032f930(m_i598);
    }
}
// END FUNCTION

// FUNCTION: 0x101cba40 size=0x2d
#include "CStealthModifier.h"

struct CStealthTarget
{
	void sub_10011f13(int);
};

// TARGET: CStealthModifier::vfunc176
void CStealthModifier::vfunc176(CBaseEntity *pOther)
{
	CBaseTrigger::vfunc176(pOther);
	if (*(CStealthTarget **)((char *)pOther + 0x9c) != 0)
	{
		(*(CStealthTarget **)((char *)pOther + 0x9c))->sub_10011f13(m_i598);
	}
}
// END FUNCTION

// FUNCTION: 0x101cc3d0 size=0x4c
struct V101cc3d0 {
	void *sub_101cc3d0(unsigned int flags);
};
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: V101cc3d0::sub_101cc3d0
void *V101cc3d0::sub_101cc3d0(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
