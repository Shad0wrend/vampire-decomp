// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a9400 size=0xf1
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSabbatLeader.h"
#include "ScopeTrace.h"

// TARGET: CNPC_VSabbatLeader::vfunc448
void CNPC_VSabbatLeader::vfunc448(int a)
{
    ScopeTrace trace("CNPC_VSabbatLeader::TaskFail", g_106b8540);
    if (a >= 0xc && a <= 0xf) {
        m_nFailureCount++;
        if ((float)m_nFailureCount >= 6.0f) {
            if (sub_103a9d00()) {
                m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSabbatLeader.cpp";
                m_nLine1b34 = 0x3f4;
                sub_102ae750(0x161, 0);
                return;
            }
            m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSabbatLeader.cpp";
            m_nLine1b34 = 0x3f9;
            sub_102ae750(0x160, 0);
            return;
        }
    }
    sub_1029adb0(a);
}
// END FUNCTION

// FUNCTION: 0x103a9e70 size=0x105
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CNPC_VSabbatLeader.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

#define S(n) virtual void n();
#define S10(p) S(p##0) S(p##1) S(p##2) S(p##3) S(p##4) S(p##5) S(p##6) S(p##7) S(p##8) S(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct SabbatEntSlots
{
	S100(a) S100(b) S10(c0)
	S(d0) S(d1) S(d2) S(d3) S(d4) S(d5) S(d6)
	virtual float *slot217();
};

extern CGlobalEntityList *g_10566458;
extern CNPC_VSabbatLeaderHint *g_10925450;
extern float g_104c3ccc;

inline CGlobalEntityList_Ent *LookupEntity(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

bool CNPC_VSabbatLeader::sub_103a9e70()
{
	ScopeTrace t("CNPC_VSabbatLeader::PlayerInNoJumpZone", g_106b8540);
	SabbatEntSlots *pPlayer = (SabbatEntSlots *)LookupEntity(m_hPlayer);
	if (pPlayer) {
		CNPC_VSabbatLeaderHint *pHint = g_10925450;
		while (pHint) {
			if (pHint->m_hintType == 0x3e84) {
				if (sub_103c6570(pHint, pPlayer->slot217()) <= g_104c3ccc) {
					if (sub_103c6570(pHint, ((SabbatEntSlots *)this)->slot217()) <= g_104c3ccc)
						return true;
				}
			}
			pHint = pHint->m_pNext;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103aa3b0 size=0x92
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSabbatLeader.h"
#include "ScopeTrace.h"

void CNPC_VSabbatLeader::sub_103aa3b0(int unused)
{
    ScopeTrace st("CNPC_VSabbatLeader::StartTransformation", g_106b8540);
    m_b66b8 = 1;
    sub_10332aa0(1, 1, 10);
    m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VSabbatLeader.cpp";
    m_nLine1b34 = 0x549;
    sub_102ae750(0x163, 0);
}
// END FUNCTION
