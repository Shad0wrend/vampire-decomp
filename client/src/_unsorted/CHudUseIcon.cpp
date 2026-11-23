// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005e020 size=0xd1
#include "CHudUseIcon.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)
struct IFace_104a57d4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual float v39(int); };
extern IFace_104a57d4 *g_104a57d4;
extern CHudUseIcon *g_103eede0;
// TARGET: ??0CHudUseIcon@@QAE@H@Z
CHudUseIcon::CHudUseIcon(int parent) : CManagedHudElement(parent, (int)"CHudUseIcon")
{
	sub_1005e1a0();
	vfunc63(0);
	sub_101a9890(m_unk194, m_unk198);
	sub_101a98f0(m_unk19c, m_unk1a0);
	vfunc64(1);
	m_pChild1 = 0;
	m_pChild2 = 0;
	m_pChild3 = 0;
	m_unk1c0 = 0;
	m_b1ac = 1;
	m_unk1c4 = 0;
	m_unk1a4 = 0;
	m_f1a8 = g_104a57d4->v39(0);
	memset(m_arr1c9, 0, sizeof(m_arr1c9));
	m_pChild4 = 0;
	m_pChild5 = 0;
	g_103eede0 = this;
}
// END FUNCTION

// FUNCTION: 0x1005e100 size=0x1e
#include "CHudUseIcon.h"

// VC6 writes CHudUseIcon's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudUseIcon *pcd_emit_1005e100(const CHudUseIcon &other) { return new CHudUseIcon(other); }

// TARGET: ??_GCHudUseIcon@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005e120 size=0x7c
#include "CHudUseIcon.h"
extern int g_103eede0;
// TARGET: ??1CHudUseIcon@@UAE@XZ
CHudUseIcon::~CHudUseIcon()
{
	g_103eede0 = 0;
	sub_101a9ff0(0);
	delete m_pChild1;
	delete m_pChild2;
	delete m_pChild3;
	delete m_pChild4;
	delete m_pChild5;
}
// END FUNCTION
