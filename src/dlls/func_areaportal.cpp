// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 16 blocks
#include "vampire.h"

// FUNCTION: 0x1010c310 size=0x6
#include "CAreaPortal.h"
#include "datamap.h"
namespace lifted {
extern char g_1056dbe0;
}
datamap_t *CAreaPortal::vfunc82()
{
    return (datamap_t *)&lifted::g_1056dbe0;
}
// END FUNCTION

// FUNCTION: 0x1010c330 size=0x5
int sub_1010c370(void);
int g_1070967c = ((int (*)(int))sub_1010c370)(0);
// END FUNCTION

// FUNCTION: 0x1010c370 size=0x1a
namespace lifted {
extern int g_1056dbe0;
extern int g_1056dbe4;
extern char g_1056dc24;
}
int sub_1010c370()
{
    lifted::g_1056dbe4 = 7;
    lifted::g_1056dbe0 = (int)&lifted::g_1056dc24;
    return (int)&lifted::g_1056dbe0;
}
// END FUNCTION

// FUNCTION: 0x1010c3a0 size=0x1c
#include "CAreaPortal.h"

void __fastcall sub_1010c780(void *p);
extern int vt_1045df8c[];

// TARGET: sub_1010c3a0
void *__fastcall sub_1010c3a0(void *p)
{
	sub_1010c780(p);
	*(int **)p = vt_1045df8c;
	((CAreaPortal *)p)->m_bStartOpen = 1;
	return p;
}
// END FUNCTION

// FUNCTION: 0x1010c3d0 size=0x8
#include "CBaseEntity.h"
#include "CFuncAreaPortalBase.h"
// TARGET: CFuncAreaPortalBase::vfunc117
int CFuncAreaPortalBase::vfunc117() { return (int)(((CBaseEntity *)this)->CBaseEntity::vfunc117() & ~2); }
// END FUNCTION

// FUNCTION: 0x1010c3f0 size=0x1e
#include "CAreaPortal.h"

void sub_100aa7b0(void *p);

// TARGET: CAreaPortal::vfunc5
CAreaPortal *CAreaPortal::vfunc5(unsigned int flags)
{
	sub_100156b8();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1010c420 size=0x8
#include "CAreaPortal.h"

void CAreaPortal::vfunc103()
{
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1010c440 size=0x5
#include "CAreaPortal.h"
struct CUnknown1010c5d0 { bool sub_1010c5d0(); };
// TARGET: CAreaPortal::vfunc104
// the game's 0x1010c440: a tail call (jmp) of CUnknown1010c5d0::sub_1010c5d0
bool CAreaPortal::vfunc104()
{
	return ((CUnknown1010c5d0 *)this)->CUnknown1010c5d0::sub_1010c5d0();
}
// END FUNCTION

// FUNCTION: 0x1010c460 size=0x12
namespace lifted {
int sub_10011c25();
}
struct CUnknown1010c460 { int sub_1010c460(int); };
int CUnknown1010c460::sub_1010c460(int a0)
{
    *(int *)((char *)this + 0x458) = 0;
    return lifted::sub_10011c25();
}
// END FUNCTION

// FUNCTION: 0x1010c490 size=0x12
namespace lifted {
int sub_10011c25();
}
struct CUnknown1010c490 { int sub_1010c490(int); };
int CUnknown1010c490::sub_1010c490(int a0)
{
    *(int *)((char *)this + 0x458) = 1;
    return lifted::sub_10011c25();
}
// END FUNCTION

// FUNCTION: 0x1010c4c0 size=0x1c
struct CUnknown1010c4c0 {
	char pad0000[0x458];
	int m_458;
	void sub_1010c5d0();
	void sub_1010c4c0(int unused);
};

// TARGET: CUnknown1010c4c0::sub_1010c4c0
void CUnknown1010c4c0::sub_1010c4c0(int unused)
{
	m_458 = m_458 != 1;
	sub_1010c5d0();
}
// END FUNCTION

// FUNCTION: 0x1010c4f0 size=0x20
#include "CAreaPortal.h"
#include "CFuncAreaPortalBase.h"

struct CUnknown1010c5d0
{
	bool sub_1010c5d0();
};

bool CAreaPortal::vfunc241(const float *pViewOrigin)
{
	if (!((CFuncAreaPortalBase *)this)->vfunc241(pViewOrigin))
		return false;
	return ((CUnknown1010c5d0 *)this)->sub_1010c5d0();
}
// END FUNCTION

// FUNCTION: 0x1010c520 size=0x29
struct CUnit1010c520 {
    void sub_1010c520(int a, int b, int c, int d);
    void sub_1010c5d0();
};

void CUnit1010c520::sub_1010c520(int a, int b, int c, int d)
{
    if (c == 1) {
        *(int *)((char *)this + 0x458) = c;
        sub_1010c5d0();
        return;
    }
    if (c == 0) {
        *(int *)((char *)this + 0x458) = c;
        sub_1010c5d0();
    }
}
// END FUNCTION

// FUNCTION: 0x1010c560 size=0x4c
#include "CAreaPortal.h"
#include <string.h>
#include <stdlib.h>

bool CAreaPortal::vfunc110(const char *key, const char *value)
{
	if (!strcmpi(key, "StartOpen"))
	{
		m_bStartOpen = atoi(value) != 0;
		return true;
	}
	return sub_1009e430(key, value);
}
// END FUNCTION

// FUNCTION: 0x1010c5d0 size=0x2e
// TARGET: sub_1010c5d0

struct CUnknown1010c5d0
{
    char m_pad0000[0x450];
    int m_nPortalKey;
    int m_pad0454;
    int m_nOpen;
    bool sub_1010c5d0();
};

bool CUnknown1010c5d0::sub_1010c5d0()
{
    engine->vfunc102(m_nPortalKey, m_nOpen);
    return m_nOpen != 0;
}
// END FUNCTION

// FUNCTION: 0x1010c610 size=0x5
#include "CAreaPortal.h"
bool CAreaPortal::vfunc86(int a0, int a1, int a2, int a3, int a4)
{
    return 0;
}
// END FUNCTION
