// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102db7f0 size=0x6
#include "CAI_InterestingPlaceConverstation.h"
#include "datamap.h"
namespace lifted {
extern char g_1060c2c0;
}
datamap_t *CAI_InterestingPlaceConverstation::vfunc82()
{
    return (datamap_t *)&lifted::g_1060c2c0;
}
// END FUNCTION

// FUNCTION: 0x102dbb00 size=0x8a
#include "CAI_InterestingPlaceConverstation.h"
CAI_InterestingPlaceConverstation::CAI_InterestingPlaceConverstation()
{
	m_b515 = 1;
	m_b516 = 0;
}
// END FUNCTION

// FUNCTION: 0x102dbbc0 size=0x84
#include "CAI_InterestingPlaceConverstation.h"
#include "UtlMem.h"

void __fastcall sub_102dce10(int *pVec);
void __cdecl sub_100aa7b0(void *p);

CBaseEntity *CAI_InterestingPlaceConverstation::vfunc5(unsigned int flags)
{
	CAI_IPVec *pVec = &m_vec518;
	sub_102dce10((int *)pVec);
	((UtlMem *)pVec)->sub_102dce80();
	pVec->m_pElements = pVec->m_pMemory;
	((UtlMem *)pVec)->sub_102dce80();
	m_items46c[5].sub_100cd2d0();
	m_items46c[4].sub_100cd2d0();
	m_items46c[3].sub_100cd2d0();
	m_items46c[2].sub_100cd2d0();
	m_items46c[1].sub_100cd2d0();
	m_items46c[0].sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x102dbc80 size=0x13
#include "CAI_InterestingPlaceConverstation.h"

void __fastcall sub_10001f28(CAI_InterestingPlaceConverstation *self);

// TARGET: CAI_InterestingPlaceConverstation::vfunc103
void CAI_InterestingPlaceConverstation::vfunc103()
{
	sub_10001f28(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x102dbcb0 size=0x7b
#include "CAI_InterestingPlaceConverstation.h"

extern const char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
extern "C" unsigned int __cdecl strlen(const char *);
__declspec(dllimport) void Warning(const char *fmt, ...);

inline bool PrecacheSoundIfValid(const char *s)
{
	if (s && strlen(s))
	{
		enginesound->vfunc0(s, 0);
		return true;
	}
	return false;
}

void CAI_InterestingPlaceConverstation::vfunc104()
{
	if (!PrecacheSoundIfValid(STRINGR(m_pszSound1)))
		Warning("%s has an invalid sound file\n", sub_1000b5cd());
	PrecacheSoundIfValid(STRINGR(m_pszSound2));
}
// END FUNCTION

// FUNCTION: 0x102dbd50 size=0x35
#include "CAI_InterestingPlaceConverstation.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);

// TARGET: CAI_InterestingPlaceConverstation::vfunc126
int CAI_InterestingPlaceConverstation::vfunc126(int a)
{
	void *member = (char *)this + 0x460;
	sub_1009d940(member, 3);
	int r = CBaseEntity::vfunc126(a);
	sub_1009d960(member, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x102dbda0 size=0x28
#include "CAI_InterestingPlaceConverstation.h"

void __cdecl sub_10015311(void *p, int mode);

// TARGET: CAI_InterestingPlaceConverstation::vfunc127
int CAI_InterestingPlaceConverstation::vfunc127(int a)
{
	int r = CBaseEntity::vfunc127(a);
	sub_10015311((char *)this + 0x460, 3);
	return r;
}
// END FUNCTION

// FUNCTION: 0x102dbde0 size=0x161
#include "vampire_all.h"
#include "CAI_InterestingPlace.h"
#include "utlvector.h"
#include "Tier1.h"

extern CGlobalEntityList g_106eb5d8;
struct EdictObjView { virtual void v0(); virtual void v1(); virtual void v2(); virtual EdictObjView *v3(); virtual void v4(); virtual const char *v5(); };
struct EdictView { char pad[0x40]; EdictObjView *m_p; };

struct CIPHandleMem : CUtlMemory<CHandle<CAI_InterestingPlace> >
{
	void sub_102dcec0(int num);	// Grow, out of line
};
struct CIPHandleVec : CUtlVector<CHandle<CAI_InterestingPlace> >
{
	void sub_102dce30(int elem, int num);	// ShiftElementsRight, out of line
	int AddToTailX(const CHandle<CAI_InterestingPlace> &src)
	{
		int elem = m_Size;
		if (m_Size + 1 > m_Memory.NumAllocated())
			((CIPHandleMem *)&m_Memory)->sub_102dcec0(m_Size + 1 - m_Memory.NumAllocated());
		m_Size += 1;
		ResetDbgInfo();
		sub_102dce30(elem, 1);
		CopyConstruct(&Element(elem), src);
		return elem;
	}
};

namespace block_102dbde0 {
struct CIPUnit : CAI_InterestingPlace { void sub_102db740(CBaseEntity *p); };
void CIPUnit::sub_102db740(CBaseEntity *p) { m_n608 = (int)p; }
}
using namespace block_102dbde0;

// TARGET: ?vfunc113@CAI_InterestingPlaceConverstation@@UAEXXZ
void CAI_InterestingPlaceConverstation::vfunc113()
{
	m_n4fc = 0;
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszTarget450 ? m_pszTarget450 : "", 0, 0);
	while (pEnt) {
		CAI_InterestingPlace *pPlace = dynamic_cast<CAI_InterestingPlace *>(pEnt);
		if (pPlace && pPlace->m_nSlots == 1) {
			CHandle<CAI_InterestingPlace> h;
			*(unsigned int *)&h = *(unsigned int *)pPlace->vfunc1();
			((CIPHandleVec *)&m_vec518)->AddToTailX(h);
			((CIPUnit *)pPlace)->sub_102db740(this);
		} else {
			EdictView *e = (EdictView *)pEnt->m_pEdict2e0;
			const char *s = !e->m_p ? "" : e->m_p->v3()->v5();
			g_109f364c("%s(%s) is not a valid target for %s. Must be an intersting_place entity with 1 slot!!\n", s, ((CAI_InterestingPlaceConverstation *)pEnt)->sub_1000b5cd(), sub_1000b5cd());
		}
		pEnt = g_106eb5d8.sub_100f7770(pEnt, m_pszTarget450 ? m_pszTarget450 : "", 0, 0);
	}
	if (m_items46c.m_c)
		sub_102dc3e0();
	else
		sub_100ac4e0(0, 0, 0);
}
// END FUNCTION
