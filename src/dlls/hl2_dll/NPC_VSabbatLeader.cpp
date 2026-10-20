// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a9e70 size=0x105
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
