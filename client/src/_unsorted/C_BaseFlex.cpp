// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c3660 size=0x6
#include "C_BaseFlex.h"
namespace lifted {
extern char g_102b653c;
}
int C_BaseFlex::vfunc16()
{
    return (int)&lifted::g_102b653c;
}
// END FUNCTION

// FUNCTION: 0x100c3670 size=0x3
#include "C_BaseFlex.h"
int C_BaseFlex::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c38f0 size=0x1e
#include "C_BaseFlex.h"

// VC6 writes C_BaseFlex's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseFlex *pcd_emit_100c38f0() { return new C_BaseFlex; }

// TARGET: ??_GC_BaseFlex@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c3910 size=0x98
#include "C_BaseFlex.h"
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
struct FlexVec { void *m_pMemory; int m_allocationCount; int m_growSize; int m_size; void *m_pElements; };
// TARGET: ??1C_BaseFlex@@UAE@XZ
C_BaseFlex::~C_BaseFlex()
{
	sub_100c40a0();
	FlexVec *v = (FlexVec *)((char *)this + 0xfb4);
	v->m_size = 0;
	if (v->m_growSize != -1) {
		if (v->m_pMemory) { Plat_Free(v->m_pMemory); v->m_pMemory = 0; }
		v->m_allocationCount = 0;
	}
	v->m_pElements = v->m_pMemory;
	if (v->m_growSize != -1) {
		if (v->m_pMemory) { Plat_Free(v->m_pMemory); v->m_pMemory = 0; }
		v->m_allocationCount = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100c4200 size=0x6
#include "C_BaseFlex.h"
namespace lifted {
extern char g_102aea5c;
}
int C_BaseFlex::vfunc143()
{
    return (int)&lifted::g_102aea5c;
}
// END FUNCTION
