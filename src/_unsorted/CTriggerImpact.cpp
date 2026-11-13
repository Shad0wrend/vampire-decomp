// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101cb0d0 size=0x6
#include "datamap.h"
#include "CTriggerImpact.h"
namespace lifted {
extern char g_1059e5f0;
}
datamap_t *CTriggerImpact::vfunc82()
{
    return (datamap_t *)&lifted::g_1059e5f0;
}
// END FUNCTION

// FUNCTION: 0x101cb210 size=0xc
#include "CTriggerImpact.h"
namespace lifted {
int sub_100048ef();
}
int CTriggerImpact::vfunc103()
{
    *(char *)((char *)this + 0x55c) = 1;
    return lifted::sub_100048ef();
}
// END FUNCTION

// FUNCTION: 0x101cb230 size=0x1
#include "CTriggerImpact.h"
void CTriggerImpact::vfunc171()
{
}
// END FUNCTION

// FUNCTION: 0x101cb340 size=0x196
#include "CBaseEntity.h"
#include "CTriggerImpact.h"
#include "Vector.h"
#include "QAngle.h"
#include <stdlib.h>
#include <math.h>

#define TI_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CImpactPhysics {
	TI_SLOTS10(a0) TI_SLOTS10(a1) TI_SLOTS10(a2)
	virtual void ApplyForceCenter(const Vector &force);
};

struct CImpactEntity {
	TI_SLOTS10(a00) TI_SLOTS10(a01) TI_SLOTS10(a02) TI_SLOTS10(a03) TI_SLOTS10(a04) TI_SLOTS10(a05) TI_SLOTS10(a06) TI_SLOTS10(a07) TI_SLOTS10(a08) TI_SLOTS10(a09)
	TI_SLOTS10(a10) TI_SLOTS10(a11) TI_SLOTS10(a12) TI_SLOTS10(a13) TI_SLOTS10(a14) TI_SLOTS10(a15)
	virtual void b160(); virtual void b161(); virtual void b162(); virtual void b163(); virtual void b164();
	virtual void b165(); virtual void b166(); virtual void b167(); virtual void b168();
	virtual void ViewPunch(const QAngle &angPunch);
	char m_pad0004[0xa8 - 4];
	int m_na8;
	char m_pad00ac[0x36c - 0xac];
	CImpactPhysics *m_pPhysics36c;
	CImpactPhysics *VPhysicsGetObject() { return m_pPhysics36c; }
	bool IsPlayer() { return m_na8 != 0; }
};

struct CImpactSelf {
	TI_SLOTS10(a00) TI_SLOTS10(a01) TI_SLOTS10(a02) TI_SLOTS10(a03) TI_SLOTS10(a04) TI_SLOTS10(a05) TI_SLOTS10(a06) TI_SLOTS10(a07) TI_SLOTS10(a08) TI_SLOTS10(a09)
	TI_SLOTS10(a10) TI_SLOTS10(a11) TI_SLOTS10(a12) TI_SLOTS10(a13) TI_SLOTS10(a14) TI_SLOTS10(a15) TI_SLOTS10(a16) TI_SLOTS10(a17) TI_SLOTS10(a18) TI_SLOTS10(a19)
	TI_SLOTS10(a20) TI_SLOTS10(a21)
	virtual void d220();
	virtual const QAngle &GetLocalAngles();
};

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

inline Vector ImpactRandomVector(float minVal, float maxVal)
{
	Vector random;
	float flScale = (maxVal - minVal) * 3.051851e-5f;
	random.x = (float)rand() * flScale + minVal;
	random.y = (float)rand() * flScale + minVal;
	random.z = (float)rand() * flScale + minVal;
	return random;
}

inline Vector MulV(const Vector &a, float b) { Vector res; res.x = a[0] * b; res.y = a[1] * b; res.z = a[2] * b; return res; }
inline Vector MulF(float fl, const Vector &v) { return MulV(v, fl); }
void CTriggerImpact::vfunc174(CBaseEntity *pOtherEnt)
{
	CImpactEntity *pOther = (CImpactEntity *)pOtherEnt;
	CImpactSelf *pSelf = (CImpactSelf *)this;
	if (pOther != 0 && pOther->VPhysicsGetObject() != 0) {
		Vector vDir;
		sub_10139610(pSelf->GetLocalAngles(), &vDir, 0, 0);
		Vector vRandom = ImpactRandomVector(-m_flRandomness, m_flRandomness);
		vDir.x += vRandom.x;
		vDir.y += vRandom.y;
		vDir.z += vRandom.z;
		const Vector &dir = vDir;
		pOther->VPhysicsGetObject()->ApplyForceCenter(MulF(m_flMagnitude, dir));
	}
	if (pOther->IsPlayer() && fabs(m_flMagnitude) > 0.0) {
		Vector vDir;
		sub_10139610(pSelf->GetLocalAngles(), &vDir, 0, 0);
		float flPunch = -m_f5b8 * m_flMagnitude * 0.1;
		pOther->ViewPunch(QAngle(vDir.y * flPunch, 0, vDir.x * flPunch));
	}
}
// END FUNCTION

// FUNCTION: 0x101cb590 size=0x85
#include "CTriggerImpact.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
void sub_101434b0(int edictIndex, int line, const char *text, int a, int r, int g, int b, int alpha);

int CTriggerImpact::vfunc124()
{
	char szText[256];
	int nLines = sub_100104e2();
	if (m_flags224 & 1) {
		Q_snprintf(szText, 255, "Magnitude: %3.2f", m_flMagnitude);
		int edict = m_pEdict2e0;
		sub_101434b0(engine->vfunc35(edict), nLines, szText, 0, 255, 255, 255, 255);
		nLines++;
	}
	return nLines;
}
// END FUNCTION

// FUNCTION: 0x101cc2c0 size=0x62
#include "CTriggerImpact.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CTriggerImpact *CTriggerImpact::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x598))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x580))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x568))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
