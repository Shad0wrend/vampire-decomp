// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102e3110 size=0x12d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CTraceFilterNav.h"
#include "CTraceFilterSimple.h"
#include "CBCCSlotViews.h"
#include "ScopeTrace.h"

bool sub_102eb170(void *pEnt, int flag);
bool sub_101d2fc0(void *pEnt, void *pRelated);

struct NavFilterEnt {
    VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3) VIEW_SLOT10(4) VIEW_SLOT10(5) VIEW_SLOT10(6) VIEW_SLOT10(7) VIEW_SLOT10(8)
    VIEW_SLOT(90)
    virtual bool vfunc91(int a, int b);
    char m_pad[0x368 - 4];
    int m_n368;
};
struct NavFilterRelated {
    VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3) VIEW_SLOT10(4) VIEW_SLOT10(5)
    VIEW_SLOT(60) VIEW_SLOT(61) VIEW_SLOT(62) VIEW_SLOT(63) VIEW_SLOT(64) VIEW_SLOT(65) VIEW_SLOT(66) VIEW_SLOT(67) VIEW_SLOT(68)
    virtual bool vfunc69(void *pEnt);
};
struct NavFilterGlobal {
    VIEW_SLOT10(0) VIEW_SLOT10(1) VIEW_SLOT10(2) VIEW_SLOT10(3) VIEW_SLOT10(4) VIEW_SLOT10(5) VIEW_SLOT10(6)
    VIEW_SLOT(70) VIEW_SLOT(71) VIEW_SLOT(72) VIEW_SLOT(73) VIEW_SLOT(74) VIEW_SLOT(75) VIEW_SLOT(76)
    virtual bool vfunc77(int a, int b);
};
extern NavFilterGlobal *g_1070ba0c;

bool CTraceFilterNav::vfunc0(void *pHandleEntity, int contentsMask)
{
    ScopeTrace trace("CTraceFilterNav::ShouldHitEntity", g_106b8540);
    NavFilterEnt *pEnt = (NavFilterEnt *)pHandleEntity;
    if (sub_102eb170(pEnt, 0))
        return false;
    if (m_10 != 0 && !sub_101d2fc0(pEnt, (void *)m_10))
        return false;
    if (!pEnt->vfunc91(m_0c, contentsMask))
        return false;
    if (!g_1070ba0c->vfunc77(m_0c, pEnt->m_n368))
        return false;
    if (((NavFilterRelated *)m_10)->vfunc69(pEnt))
        return false;
    return ((CTraceFilterSimple *)this)->sub_101d31c0(pEnt, contentsMask);
}
// END FUNCTION
