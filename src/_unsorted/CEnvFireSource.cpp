// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1010bb50 size=0x6
#include "CEnvFireSource.h"
namespace lifted {
extern char g_1056d0b4;
}
CEnvFireSource::Datamap82 CEnvFireSource::vfunc82()
{
    return (CEnvFireSource::Datamap82)&lifted::g_1056d0b4;
}
// END FUNCTION

// FUNCTION: 0x1010bc50 size=0x13
#include "CEnvFireSource.h"

struct CEnvFireSourceStubs {
    void sub_10003e9f();
    void sub_10009a02();
};

// TARGET: CEnvFireSource::vfunc103
void CEnvFireSource::vfunc103()
{
    if (m_flags204 & 1) {
        ((CEnvFireSourceStubs *)this)->sub_10003e9f();
    } else {
        ((CEnvFireSourceStubs *)this)->sub_10009a02();
    }
}
// END FUNCTION

// FUNCTION: 0x1010bc80 size=0x81
#include "CEnvFireSource.h"
#include "CFire.h"
// The entity's virtual table up to slot 217 (GetAbsOrigin).
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CEnvFireSourceView
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t) V10(u)
	virtual void v210(); virtual void v211(); virtual void v212(); virtual void v213(); virtual void v214(); virtual void v215(); virtual void v216();
	virtual float *vfunc217();
};
int sub_100095ca(CFire **pOut, int nMax, int a, float *pCenter, float flRadius);
void CEnvFireSource::vfunc134()
{
	CFire *pFires[128];
	if (m_bEnabled) {
		m_flNextThink = gpGlobals->curtime + 0.25;
		int n = sub_100095ca(pFires, 0x80, 0, ((CEnvFireSourceView *)this)->vfunc217(), m_flRadius);
		for (int i = 0; i < n; i++)
			pFires[i]->sub_1010b5c0(m_flDamage * 0.25, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1010c220 size=0x1e
#include "CEnvFireSource.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvFireSource::vfunc5
CEnvFireSource *CEnvFireSource::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
