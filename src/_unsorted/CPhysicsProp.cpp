// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101912a0 size=0x18
#include "CPhysicsProp.h"

void CPhysicsProp::vfunc226(int a)
{
	CBaseEntity::vfunc226(a);
	*((char *)this + 0x1b1) = 1;
}
// END FUNCTION

// FUNCTION: 0x101912d0 size=0x8
#include "CPhysicsProp.h"
// TARGET: CPhysicsProp::sub_101912d0
unsigned char CPhysicsProp::sub_101912d0()
{
    unsigned char b;
    b = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
    b &= 0xfd;
    return b;
}
// END FUNCTION

// FUNCTION: 0x101912f0 size=0x36
#include "CPhysicsProp.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CPhysicsProp *CPhysicsProp::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101913c0 size=0x6
#include "datamap.h"
#include "CPhysicsProp.h"
namespace lifted {
extern char g_1058d864;
}
datamap_t * CPhysicsProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058d864);
}
// END FUNCTION

// FUNCTION: 0x10191450 size=0x37
#include "CPhysicsProp.h"
#include "CBreakableProp.h"

// TARGET: CPhysicsProp::vfunc103
void CPhysicsProp::vfunc103()
{
    ((CBreakableProp *)this)->vfunc103();
    if (*((unsigned char *)this + 0x204) & 4) {
        ((CBaseEntity *)this)->sub_100aaa40(1);
    }
    if (!(*((unsigned char *)this + 0x204) & 8)) {
        ((CBaseEntity *)this)->sub_100b3840(2);
    }
    ((void (__fastcall *)(void *))(*(int **)this)[223])(this);
}
// END FUNCTION

// FUNCTION: 0x101914a0 size=0x44
#include "CPhysicsProp.h"
bool CPhysicsProp::vfunc68(void *pOther)
{
	if ((*(int *)((char *)pOther + 0x9c) && (*(unsigned char *)((char *)this + 0x204) & 4)) ||
		(*(int *)((char *)pOther + 0xa8) && (sub_100b39c0() & 1)))
		return true;
	return sub_1008bfe0(pOther);
}
// END FUNCTION

// FUNCTION: 0x10191510 size=0x17a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPhysicsProp.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

__declspec(dllimport) void Warning(const char *fmt, ...);
extern float g_104454c4;
void sub_1002e0a0(void *pObj, int a);

struct CPhysObjView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
	virtual void SetValue(float f);
	virtual float GetValue();
};

struct CPhysObjView2
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
	virtual void SetValue(int f);
};

struct CByteArg { char b; };

struct CPhysicsPropUnit : CPhysicsProp
{
	CPhysObjView *sub_100a5ea0(int a, int b, CByteArg c, int d);
};

#define FLD(type, off) (*(type *)((char *)this + (off)))

// TARGET: CPhysicsProp::vfunc223
bool CPhysicsProp::vfunc223()
{
	CPhysicsPropUnit *self = (CPhysicsPropUnit *)this;
	CByteArg flag;
	flag.b = FLD(char, 0x204) & 1;
	CPhysObjView *pObj = self->sub_100a5ea0(6, 0, flag, 0);
	if (!pObj)
	{
		{
			ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
		}
		vfunc93(0, 0);
		int out;
		const char **pName = vfunc9(&out);
		Warning("ERROR!: Can't create physics object for %s\n", *pName ? *pName : g_106b8540);
		sub_100b3b00();
		return true;
	}
	if (FLD(int, 0x784) == 1)
		sub_1002e0a0(pObj, 1);
	if (FLD(float, 0x77c) > g_104454c4)
	{
		double v = pObj->GetValue() * FLD(float, 0x77c);
		if (v > 1000000.0)
			v = 1000000.0;
		else if (v < 0.5)
			v = 0.5;
		float f = (float)v;
		pObj->SetValue(f);
	}
	if (FLD(float, 0x780) > g_104454c4)
		((CPhysObjView2 *)FLD(int, 0x36c))->SetValue(FLD(int, 0x780));
	return true;
}
// END FUNCTION

// FUNCTION: 0x10191770 size=0x15
#include "CPhysicsProp.h"

bool CPhysicsProp::vfunc73(CBaseEntity *pOther)
{
	return (m_flags204 & 2) == 2;
}
// END FUNCTION

// FUNCTION: 0x101917a0 size=0x5
#include "CPhysicsProp.h"
int __cdecl sub_102587f0();
// TARGET: CPhysicsProp::vfunc36
// the game's 0x101917a0: a tail call (jmp) of sub_102587f0
int CPhysicsProp::vfunc36()
{
	return sub_102587f0();
}
// END FUNCTION

// FUNCTION: 0x101917c0 size=0x1f
#include "CPhysicsProp.h"

CBaseEntity *sub_104115b0(int a, int b);

bool CPhysicsProp::vfunc32(int a)
{
	return this == sub_104115b0(a, 0);
}
// END FUNCTION

// FUNCTION: 0x101917f0 size=0xe
#include "CPhysicsProp.h"
namespace lifted {
int sub_10010ec9(int);
}
void CPhysicsProp::vfunc39(CBaseEntity * a0)
{
    lifted::sub_10010ec9(*(int *)&a0);
}
// END FUNCTION

// FUNCTION: 0x10191810 size=0xe
#include "CPhysicsProp.h"

void sub_1040d950(int a);

void CPhysicsProp::vfunc41(int a)
{
	sub_1040d950(a);
}
// END FUNCTION

// FUNCTION: 0x10191830 size=0xe
// TARGET: sub_10191830
void sub_1040d9a0(int x);

void __stdcall sub_10191830(int x)
{
    sub_1040d9a0(x);
}
// END FUNCTION
