// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10219ee0 size=0x1e
#include "CPropHacking.h"

void sub_100aa7b0(void *p);

// TARGET: CPropHacking::vfunc5
CPropHacking *CPropHacking::vfunc5(unsigned int flags)
{
	sub_1000befb();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1021c560 size=0xf2
#include "CPropHacking.h"
#include "CEHandleGet.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CSlot268View
{
	SV100(a) SV100(b) SV10(c0) SV10(c1) SV10(c2) SV10(c3) SV10(c4) SV10(c5)
	SV(c60) SV(c61) SV(c62) SV(c63) SV(c64) SV(c65) SV(c66) SV(c67)
	virtual int s268(void *pEnt);
};

extern char g_106b8540[];
struct CNameObj
{
	const char *m_psz;
	const char *Get() { return m_psz ? m_psz : g_106b8540; }
};
struct CNameRecord
{
	int m_nId;
	CNameObj m_Name;
};
struct CNameTable
{
	char m_pad[0x14];
	int m_nRecords;
	CNameRecord **m_ppRecords;
};
extern CNameTable g_1074b330;
extern int g_1074f75c;
int __cdecl sub_1043e780(const char *a, const char *b);

static inline int FindNameId(const char *pszName)
{
    for (int i = 0; i < g_1074b330.m_nRecords; i++) {
        if (!sub_1043e780(g_1074b330.m_ppRecords[i]->m_Name.Get(), pszName))
            return g_1074b330.m_ppRecords[i]->m_nId;
    }
    return -1;
}

// TARGET: CPropHacking::vfunc276
void CPropHacking::vfunc276()
{
    if (m_n09e0 == -2) {
        m_n0c28++;
    } else if (m_n09e0 >= 0 && m_n09e0 < m_nCounts0998) {
        m_pnCounts098c[m_n09e0]++;
    }
    sub_10218820(2, 0);
    if (m_b083c) {
        int nValue = ((CSlot268View *)this)->s268(EHandle_Get(*(unsigned int *)((char *)this + 0x8c)));
        sub_10218820(6, nValue);
        sub_1021c890(-1);
    } else {
        sub_1021b5e0(1);
    }
    g_1074f75c = FindNameId("error");
}
// END FUNCTION
