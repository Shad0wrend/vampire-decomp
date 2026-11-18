// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10132880 size=0x6
#include "datamap.h"
#include "CEnvGlobal.h"
namespace lifted {
extern char g_1057643c;
}
datamap_t * CEnvGlobal::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1057643c);
}
// END FUNCTION

// FUNCTION: 0x10132980 size=0x54
#include "CEnvGlobal.h"
#include "CUnknown10057680.h"
#include "globalvars.h"
extern CUnknown10057680 g_106be530;
void sub_101cd940(CBaseEntity *);
void CEnvGlobal::vfunc103()
{
	if (!m_pszGlobalName) {
		sub_101cd940(this);
		return;
	}
	if (m_flags204 & 1) {
		if (!g_106be530.sub_100576a0(m_pszGlobalName))
			g_106be530.sub_10057740(m_pszGlobalName, gpGlobals->mapname, m_nInitialState);
	}
}
// END FUNCTION

// FUNCTION: 0x10132be0 size=0x11e
#include "CEnvGlobal.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EngineText {
	S10(a) S10(b) S10(c)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
	virtual int entIndex(int edict);
};
struct GlobalState {
	int sub_10057820(const char *name);
};
extern EngineText *g_1070b22c;
extern GlobalState g_106be530;
extern char g_106b8540[];
extern "C" __declspec(dllimport) int Q_snprintf(char *buf, int n, const char *fmt, ...);
extern "C" __declspec(dllimport) char *Q_strncpy(char *dst, const char *src, int n);
void sub_101434b0(int ent, int line, const char *text, int a, int r, int g, int b, int al);

// TARGET: CEnvGlobal::vfunc124
int CEnvGlobal::vfunc124()
{
	int line = CBaseEntity::vfunc124();
	char buf[512];
	if (*(unsigned char *)((char *)this + 0x224) & 1) {
		const char *name = *(const char **)((char *)this + 0x450);
		Q_snprintf(buf, 512, "State: %s", name ? name : g_106b8540);
		int edict = *(int *)((char *)this + 0x2e0);
		sub_101434b0(g_1070b22c->entIndex(edict), line, buf, 0, 255, 255, 255, 255);
		line++;
		switch (g_106be530.sub_10057820(*(const char **)((char *)this + 0x450))) {
		case 0:
			Q_strncpy(buf, "Value: OFF", 512);
			break;
		case 1:
			Q_strncpy(buf, "Value: ON", 512);
			break;
		case 2:
			Q_strncpy(buf, "Value: DEAD", 512);
			break;
		}
		int edict2 = *(int *)((char *)this + 0x2e0);
		sub_101434b0(g_1070b22c->entIndex(edict2), line, buf, 0, 255, 255, 255, 255);
		line++;
	}
	return line;
}
// END FUNCTION

// FUNCTION: 0x10135ef0 size=0x1e
#include "CEnvGlobal.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvGlobal::vfunc5
CBaseEntity *CEnvGlobal::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
