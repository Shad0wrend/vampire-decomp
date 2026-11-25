// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100add30 size=0x6
#include "C_DynamicLight.h"
namespace lifted {
extern char g_102b2a04;
}
int C_DynamicLight::vfunc16()
{
    return (int)&lifted::g_102b2a04;
}
// END FUNCTION

// FUNCTION: 0x100add40 size=0x3
#include "C_DynamicLight.h"
int C_DynamicLight::vfunc15()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100ae000 size=0x1e
#include "C_DynamicLight.h"

// VC6 writes C_DynamicLight's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_DynamicLight *pcd_emit_100ae000(const C_DynamicLight &other) { return new C_DynamicLight(other); }

// TARGET: ??_GC_DynamicLight@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100ae510 size=0x9a
#include "C_DynamicLight.h"
#include "ehandle.h"
#include "Vector.h"
#include "QAngle.h"

struct DynLightView
{
	char m_pad000[0x188];
	CBaseHandle m_hOwner;
	char m_pad18c[0x428 - 0x18c];
	int m_n428;
};

struct CBaseEntV77
{
	void sub_100a0e30();
};

void C_DynamicLight::vfunc77()
{
	DynLightView *v = (DynLightView *)this;
	if (v->m_n428 > 0)
	{
		C_BaseEntity *pOwner = (C_BaseEntity *)v->m_hOwner.Get();
		if (pOwner)
		{
			Vector origin;
			QAngle angles;
			pOwner->vfunc57(v->m_n428, (int)&origin, (int)&angles);
			vfunc44((int)&origin);
			vfunc46((int)&angles);
			sub_100a2030(&origin);
			sub_100a2100(angles);
			return;
		}
	}
	((CBaseEntV77 *)this)->sub_100a0e30();
}
// END FUNCTION
