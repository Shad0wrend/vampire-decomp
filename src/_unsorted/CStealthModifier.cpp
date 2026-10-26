// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
