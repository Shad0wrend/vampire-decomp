// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10002680 size=0x3
#include "C_BaseAnimating.h"

// TARGET: C_BaseAnimating::sub_10002680
void C_BaseAnimating::sub_10002680(int)
{
}
// END FUNCTION

// FUNCTION: 0x10002690 size=0x1
#include "C_BaseAnimating.h"
void C_BaseAnimating::vfunc141()
{
}
// END FUNCTION

// FUNCTION: 0x1008edc0 size=0x6
#include "C_BaseAnimating.h"
namespace lifted {
extern char g_102ad9f0;
}
int C_BaseAnimating::vfunc16()
{
    return (int)&lifted::g_102ad9f0;
}
// END FUNCTION

// FUNCTION: 0x1008edd0 size=0x3
#include "C_BaseAnimating.h"
int C_BaseAnimating::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1008f5a0 size=0x1e
#include "C_BaseAnimating.h"

// VC6 writes C_BaseAnimating's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseAnimating *pcd_emit_1008f5a0(const C_BaseAnimating &other) { return new C_BaseAnimating(other); }

// TARGET: ??_GC_BaseAnimating@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1008f5c0 size=0x12a
#include "C_BaseAnimating.h"
#include "UtlMem.h"
struct VecView { UtlMem m; int m_Size; int *m_pElements; };
struct Dtorable { virtual ~Dtorable(); };
struct Elem14 { UtlMem m; int m_Size; int *m_pElements; void sub_10096d70(); };
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
#define PURGETAIL(v) \
	(v)->m_pElements = (v)->m.m_pMemory; \
	if ((v)->m.m_growSize != -1) { \
		if ((v)->m.m_pMemory) { Plat_Free((v)->m.m_pMemory); (v)->m.m_pMemory = 0; } \
		(v)->m.m_allocationCount = 0; \
	}
// TARGET: ??1C_BaseAnimating@@UAE@XZ
C_BaseAnimating::~C_BaseAnimating()
{
	char *self = (char *)this;
	sub_100966e0();
	delete *(void **)(self + 0x6d8);
	Dtorable *p = *(Dtorable **)(self + 0x6b0);
	if (p) delete p;
	VecView *v = (VecView *)(self + 0x770);
	v->m_Size = 0;
	v->m.sub_10096f90();
	PURGETAIL(v)
	v = (VecView *)(self + 0x728);
	v->m_Size = 0;
	v->m.sub_10096f60();
	PURGETAIL(v)
	v = (VecView *)(self + 0x6f4);
	v->m_Size = 0;
	v->m.sub_10096d10();
	v->m_pElements = v->m.m_pMemory;
	v->m.sub_10096d10();
	v = (VecView *)(self + 0x67c);
	v->m_Size = 0;
	v->m.sub_10096e70();
	PURGETAIL(v)
	Elem14 *e = (Elem14 *)(self + 0x4f8);
	int n = 2;
	do {
		e--;
		e->sub_10096d70();
		e->m.sub_10096d40();
		e->m_pElements = e->m.m_pMemory;
		e->m.sub_10096d40();
	} while (--n);
}
// END FUNCTION

// FUNCTION: 0x10090b60 size=0x3
#include "C_BaseAnimating.h"
void C_BaseAnimating::vfunc124(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x100910f0 size=0x1b
#include "C_BaseAnimating.h"
namespace lifted {
struct C10094020 { bool sub_10094020(); };
struct C100a1aa0 { int sub_100a1aa0(); };
}
int C_BaseAnimating::vfunc66()
{
    bool t0 = ((lifted::C10094020 *)this)->sub_10094020();
    if (t0 != 0) {
        return 2;
    }
    return ((lifted::C100a1aa0 *)this)->sub_100a1aa0();
}
// END FUNCTION

// FUNCTION: 0x10091640 size=0x3
#include "C_BaseAnimating.h"
void C_BaseAnimating::vfunc131(int a0, int a1, int a2, int a3, int a4, int a5)
{
}
// END FUNCTION

// FUNCTION: 0x10091960 size=0x3
#include "C_BaseAnimating.h"
bool C_BaseAnimating::vfunc142()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10093f00 size=0x34
#include "C_BaseAnimating.h"
#include "IClientCollideable.h"
// TARGET: C_BaseAnimating::vfunc67
bool C_BaseAnimating::vfunc67()
{
  if (*((bool *)this + 0x6a8))
    return true;
  int solid = ((IClientCollideable *)((char *)this + 0xc))->GetSolid();
  if (solid == 4 || solid == 0 || solid == 3 || solid == 5 || solid == 6)
    return false;
  return true;
}
// END FUNCTION

// FUNCTION: 0x10094e90 size=0x22
#include "C_BaseAnimating.h"
namespace lifted {
struct C1009f140 { bool sub_1009f140(int); };
struct C100a0de0 { int sub_100a0de0(); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35(); virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39(); virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43(); virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47(); virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51(); virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55(); virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59(); virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63(); virtual void u64(); virtual void u65(); virtual void u66(); virtual void u67(); virtual void u68(); virtual void u69(); virtual void u70(); virtual void u71(); virtual void u72(); virtual void u73(); virtual void u74(); virtual void u75(); virtual void u76(); virtual void u77(); virtual void u78(); virtual void u79(); virtual void u80(); virtual void u81(); virtual void u82(); virtual void u83(); virtual void u84(); virtual void u85(); virtual void u86(); virtual void u87(); virtual void u88(); virtual void u89(); virtual void u90(); virtual void u91(); virtual void u92(); virtual void u93(); virtual void u94(); virtual void u95(); virtual void u96(); virtual void u97(); virtual void u98(); virtual void u99(); virtual void u100(); virtual void u101(); virtual void u102(); virtual void u103(); virtual void u104(); virtual void u105(); virtual void u106(); virtual void u107(); virtual void u108(); virtual void u109(); virtual void u110(); virtual void u111(); virtual void u112(); virtual void u113(); virtual void u114(); virtual void u115(); virtual void u116(); virtual void u117(); virtual void u118(); virtual void u119(); virtual void u120(); virtual void u121(); virtual void u122(); virtual void u123(); virtual void u124(); virtual void u125(); virtual void u126(); virtual void u127(); virtual void u128(); virtual void u129(); virtual void u130(); virtual void u131(); virtual int f132(int); };
}
void C_BaseAnimating::vfunc37()
{
    bool t0 = ((lifted::C1009f140 *)this)->sub_1009f140(0x10);
    if (t0 != 0) {
        ((lifted::V *)this)->f132(0);
    }
    ((lifted::C100a0de0 *)this)->sub_100a0de0();
}
// END FUNCTION

// FUNCTION: 0x10095070 size=0x14
#include "C_BaseAnimating.h"
int C_BaseAnimating::vfunc62()
{
	DoAnimationEvents();
	return C_BaseEntity::vfunc62();
}
// END FUNCTION

// FUNCTION: 0x10095870 size=0x6
#include "C_BaseAnimating.h"
namespace lifted {
extern char g_102ad9d8;
}
int C_BaseAnimating::vfunc17()
{
    return (int)&lifted::g_102ad9d8;
}
// END FUNCTION
