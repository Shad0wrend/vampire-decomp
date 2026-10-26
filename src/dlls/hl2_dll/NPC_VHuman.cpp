// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10384ee0 size=0x154
#include "CNPC_VHuman.h"
#include "CUnknown102e0150.h"
#include "CEHandleGet.h"

struct CHumanView438
{
	char m_pad0000[0x1b2c];
	int m_n1b2c;
	const char *m_pszFile;	// 0x1b30
	int m_nLine;	// 0x1b34
	char m_pad1b38[0x5b80 - 0x1b38];
	char m_b5b80;
	char m_pad5b81[0x5cc0 - 0x5b81];
	int m_nState;	// 0x5cc0
	char m_pad5cc4[0x65c0 - 0x5cc4];
	unsigned int m_hEnemy;	// 0x65c0
};

#define HD(x) virtual void x();
#define HT(p) HD(p##0) HD(p##1) HD(p##2) HD(p##3) HD(p##4) HD(p##5) HD(p##6) HD(p##7) HD(p##8) HD(p##9)
#define HH(p) HT(p##0) HT(p##1) HT(p##2) HT(p##3) HT(p##4) HT(p##5) HT(p##6) HT(p##7) HT(p##8) HT(p##9)

struct CHumanSlots438
{
	HH(a0) HH(b0) HH(c0) HH(d0) HH(e0)
	HT(f0) HT(f1) HT(f2) HT(f3)
	HD(g0)
	virtual CUnknown102e0150 *slot541();
	HT(h0) HT(h1) HT(h2) HT(h3) HT(h4) HT(h5) HD(h60) HD(h61)
	virtual int slot604(unsigned int flags);
	virtual int slot605(unsigned int flags);
};

struct CGlobalVars438
{
	char pad[0xc];
	float curtime;
};
extern CGlobalVars438 *g_1070b228;

int CNPC_VHuman::vfunc438()
{
	CHumanView438 *v = (CHumanView438 *)this;
	CHumanSlots438 *s = (CHumanSlots438 *)this;
	v->m_n1b2c = 0x14;
	switch (v->m_nState) {
	case 2:
		v->m_b5b80 = 0;
		if (sub_10014df8(0xb)) {
			if (s->slot541()->sub_102dfa20(EHandle_Get(v->m_hEnemy))) {
				float flLastSeen = s->slot541()->sub_102e0150(EHandle_Get(v->m_hEnemy));
				float flWindow = 1.0f;
				if (g_1070b228->curtime >= flWindow + flLastSeen) {
					v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp";
					v->m_nLine = 0x261;
					return 0x56;
				}
			} else {
				v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VHuman.cpp";
				v->m_nLine = 0x269;
				return 0x56;
			}
		}
		unsigned int flags = sub_10007e19() ? ((CEntityVSlots *)sub_10007e19())->slot360() : 0;
		if (flags & 0x18000) {
			int r = s->slot604(flags);
			if (r)
				return r;
		} else {
			int r = s->slot605(flags);
			if (r)
				return r;
		}
	}
	return sub_102af660();
}
// END FUNCTION
