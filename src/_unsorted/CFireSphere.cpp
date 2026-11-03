// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10108d90 size=0x47
#include "CFireSphere.h"

CFireSphere::CFireSphere(int *pList, int nCapacity, char bCheckVisible, const Vector *pCenter, float flRadius)
{
	m_pList = pList;
	m_nListCapacity = nCapacity;
	m_bCheckVisible = bCheckVisible;
	m_nListCount = 0;
	m_vecCenter = *pCenter;
	m_flRadiusSqr = flRadius * flRadius;
}
// END FUNCTION

// FUNCTION: 0x10108e40 size=0xe0
#include "CBaseEntity.h"
#include "CFireSphere.h"
#include "CUnknown10108e00.h"
#include "CGlobalEntityList.h"
#include <string.h>

extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

#define EV(n) virtual void ev##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)

struct FireHandleEnt {
	virtual void ev0();
	virtual unsigned int *GetRefEHandle();
};

struct FireEnt {
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11) EV10(12) EV10(13) EV10(14) EV10(15) EV10(16) EV10(17) EV10(18) EV10(19)
	EV10(20)
	EV(210) EV(211) EV(212) EV(213) EV(214) EV(215) EV(216)
	virtual float *ev217();
	char m_pad[0x11c - 4];
	const char *m_pszClassname;

	bool sub_1010a8d0();
};

int CFireSphere::vfunc0(CBaseEntity *pHandleEntity)
{
	unsigned int h = *((FireHandleEnt *)pHandleEntity)->GetRefEHandle();
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *pSlot = &g_106eb5d8.m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity) {
			FireEnt *pEnt = (FireEnt *)pSlot->m_pEntity->vfunc4();
			if (pEnt) {
				const char *pszClass = pEnt->m_pszClassname;
				if (!pszClass)
					pszClass = g_106b8540;
				if (_strcmpi(pszClass, "env_fire") == 0) {
					if (m_bCheckVisible && !pEnt->sub_1010a8d0())
						return 0;
					float *pOrigin = pEnt->ev217();
					float dx = m_vecCenter.x - pOrigin[0];
					float dy = m_vecCenter.y - pOrigin[1];
					float dz = m_vecCenter.z - pOrigin[2];
					if ((dx * dx + dz * dz) + dy * dy < m_flRadiusSqr && !((CUnknown10108e00 *)this)->sub_10108e00((int)pEnt))
						return 1;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION
