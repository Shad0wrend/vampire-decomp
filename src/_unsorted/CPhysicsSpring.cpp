// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004ca80 size=0x6
#include "CPhysicsSpring.h"
namespace lifted {
extern char g_1053cca0;
}
datamap_t *CPhysicsSpring::vfunc82()
{
    return (datamap_t *)&lifted::g_1053cca0;
}
// END FUNCTION

// FUNCTION: 0x1004d0d0 size=0x1e
#include "CPhysicsSpring.h"

void sub_100aa7b0(void *p);

// TARGET: CPhysicsSpring::vfunc5
CPhysicsSpring *CPhysicsSpring::vfunc5(unsigned int flags)
{
	sub_10013840();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1004d290 size=0x13d
#include "CPhysicsSpring.h"

extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
void sub_101434b0(int a, int b, const char *c, int d, int e, int f, int g, int h);

int CPhysicsSpring::vfunc124()
{
	int line = sub_100018cf();
	if (m_fTextOverlayFlags & 1) {
		char text[512];
		Q_snprintf(text, sizeof(text), "Constant: %3.2f", m_flSpringConstant);
		int ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(text, sizeof(text), "Length: %3.2f", m_flLength);
		ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(text, sizeof(text), "Damping: %3.2f", m_flDamping);
		ed = m_pEdict;
		sub_101434b0(engine->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x1004d420 size=0x111
#include "CPhysicsSpring.h"
#include "Vector.h"
void sub_10007de2(const Vector &v1, const Vector &v2, int r, int g, int b, bool noDepth, float duration);

void CPhysicsSpring::vfunc123()
{
	if (m_fTextOverlayFlags & 4) {
		Vector start, end;
		m_pSpring->GetEndPoints(&start, &end);
		Vector dir = end - start;
		VectorNormalize(dir);
		Vector p = start + dir * m_flLength;
		sub_10007de2(start, p, 0, 0, 255, false, 0);
		sub_10007de2(p, end, 255, 0, 0, false, 0);
	}
	sub_10005880();
}
// END FUNCTION

// FUNCTION: 0x1004d9a0 size=0x107
#include "CPhysicsSpring.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern float g_104454c4;

// TARGET: CPhysicsSpring::vfunc103
void CPhysicsSpring::vfunc103()
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	m_vecStart = *((CEntityVSlots *)this)->slot220();
	if (m_flLength <= g_104454c4)
		m_flLength = (m_vecEnd - m_vecStart).Length();
}
// END FUNCTION
