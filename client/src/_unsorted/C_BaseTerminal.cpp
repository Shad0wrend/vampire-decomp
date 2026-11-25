// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c6890 size=0x6
#include "C_BaseTerminal.h"
namespace lifted {
extern char g_102b7144;
}
int C_BaseTerminal::vfunc16()
{
    return (int)&lifted::g_102b7144;
}
// END FUNCTION

// FUNCTION: 0x100c68a0 size=0x3
#include "C_BaseTerminal.h"
int C_BaseTerminal::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c6bf0 size=0x1e
#include "C_BaseTerminal.h"

// VC6 writes C_BaseTerminal's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseTerminal *pcd_emit_100c6bf0(const C_BaseTerminal &other) { return new C_BaseTerminal(other); }

// TARGET: ??_GC_BaseTerminal@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c6c10 size=0xa6
#include "C_BaseTerminal.h"
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
struct IFace_104a57d4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(void *); };
extern IFace_104a57d4 *g_104a57d4;
// TARGET: ??1C_BaseTerminal@@UAE@XZ
C_BaseTerminal::~C_BaseTerminal()
{
	g_104a57d4->v12(this);
	sub_100c7550();
	m_size = 0;
	if (m_grow != -1) {
		if (m_pMem) {
			Plat_Free(m_pMem);
			m_pMem = 0;
		}
		m_alloc = 0;
	}
	m_pElements = m_pMem;
	if (m_grow != -1) {
		if (m_pMem) {
			Plat_Free(m_pMem);
			m_pMem = 0;
		}
		m_alloc = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100c7620 size=0x5e
#include "C_BaseTerminal.h"
#include "C_BaseEntity.h"
#include "IClientNetworkable.h"

struct TerminalEngineView
{
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9();
	virtual void e10(); virtual void e11(); virtual void e12(); virtual void e13(); virtual void e14();
	virtual void e15(); virtual void e16(); virtual void e17(); virtual void e18(); virtual void e19();
	virtual void e20(); virtual void e21(); virtual void e22(); virtual void e23(); virtual void e24();
	virtual void e25(); virtual void e26(); virtual void e27(); virtual void e28(); virtual void e29();
	virtual void e30(); virtual void e31(); virtual void e32(); virtual void e33(); virtual void e34();
	virtual void e35(); virtual void e36(); virtual void e37(); virtual void e38();
	virtual float v39(int);
};

extern TerminalEngineView *g_104a57d4;

void C_BaseTerminal::vfunc29(char b)
{
	C_BaseEntity::vfunc29(b);

	if (IsDormant())
	{
		sub_100c7550();
		vfunc83(-1.0f);
	}
	else
	{
		vfunc83(g_104a57d4->v39(0) + 0.25);
	}
}
// END FUNCTION
