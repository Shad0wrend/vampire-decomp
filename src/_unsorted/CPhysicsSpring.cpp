// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
#include "CUnknown1070b22c.h"
#include "CPhysicsSpring.h"

extern CUnknown1070b22c *g_1070b22c;
extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);
void sub_101434b0(int a, int b, const char *c, int d, int e, int f, int g, int h);

int CPhysicsSpring::vfunc124()
{
	int line = sub_100018cf();
	if (m_fTextOverlayFlags & 1) {
		char text[512];
		Q_snprintf(text, sizeof(text), "Constant: %3.2f", m_flSpringConstant);
		int ed = m_pEdict;
		sub_101434b0(g_1070b22c->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(text, sizeof(text), "Length: %3.2f", m_flLength);
		ed = m_pEdict;
		sub_101434b0(g_1070b22c->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
		Q_snprintf(text, sizeof(text), "Damping: %3.2f", m_flDamping);
		ed = m_pEdict;
		sub_101434b0(g_1070b22c->vfunc35(ed), line, text, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
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
