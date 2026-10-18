// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b8770 size=0x1e
#include "CBatSwarm.h"

void sub_100aa7b0(void *p);

// TARGET: CBatSwarm::vfunc5
CBatSwarm *CBatSwarm::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100b9ee0 size=0x75
#include "CBatSwarm.h"
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct Slot265 {
    V100(a) V100(b)
    V10(c) V10(d) V10(e) V10(f) V10(g) V10(h)
    virtual void i0(); virtual void i1(); virtual void i2(); virtual void i3(); virtual void i4();
    virtual void v265(int idx);
};
struct HitInfo {
    char pad0[0x2c];
    float m_f2c;
    char pad1[6];
    char m_b36;
    char m_b37;
    char pad2[0x50 - 0x38];
    int m_idx;
};
struct CountRef { int pad; int m_n; };
extern float g_104454c0;
extern float g_104454c4;
void CBatSwarm::vfunc141(int *pRef, int unused, void *pInfo)
{
    HitInfo *h = (HitInfo *)pInfo;
    if ((h->m_f2c < g_104454c0 || h->m_b36 || h->m_b37) && h->m_idx >= 0 && h->m_idx < 32) {
        int idx = h->m_idx;
        if (((1 << idx) & m_mask730 & m_mask734) != 0) {
            CountRef *r = (CountRef *)*pRef;
            if (r != 0 && g_104454c4 < (float)r->m_n)
                ((Slot265 *)this)->v265(idx);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100ba0c0 size=0x1c
#include "CBatSwarm.h"

struct S100ba0c0 { char pad[0xa8]; int m_field; };

bool CBatSwarm::sub_100ba0c0(void *pEntity)
{
	S100ba0c0 *p = (S100ba0c0 *)pEntity;
	if (p && p->m_field)
		return true;
	return false;
}
// END FUNCTION
