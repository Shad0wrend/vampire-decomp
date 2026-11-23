// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10063980 size=0x1e
#include "CTargeted.h"

// VC6 writes CTargeted's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTargeted *pcd_emit_10063980(const CTargeted &other) { return new CTargeted(other); }

// TARGET: ??_GCTargeted@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100639a0 size=0xd0
#include "CTargeted.h"
struct CTgtObj { virtual ~CTgtObj() {} };
extern CTgtObj *g_103eee5c;
extern CTgtObj *g_103eef6c[10];
// TARGET: ??1CTargeted@@UAE@XZ
CTargeted::~CTargeted()
{
	CBasePanel::sub_101a9ff0(0);
	delete m_p1b4;
	delete m_p1b8;
	delete m_p1bc;
	delete m_p1c0;
	delete m_p1c4;
	delete m_p1c8;
	delete m_p1cc;
	for (int i = 0; i < 10; i++)
		delete g_103eef6c[i];
	delete g_103eee5c;
	delete m_p220;
}
// END FUNCTION

// FUNCTION: 0x10064ab0 size=0x1
#include "CTargeted.h"
void CTargeted::vfunc97()
{
}
// END FUNCTION
