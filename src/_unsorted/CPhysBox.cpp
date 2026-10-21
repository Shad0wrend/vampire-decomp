// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1004e1c0 size=0x1f
#include "CPhysBox.h"

CBaseEntity *sub_104115b0(int a, int b);

bool CPhysBox::sub_1004e1c0(int a)
{
	return this == sub_104115b0(a, 0);
}
// END FUNCTION

// FUNCTION: 0x1004e260 size=0x125
#include "CPhysBox.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern float g_1070d1b0[3];

typedef bool (__fastcall *PhysBoxSlot223Fn)(CPhysBox *pThis);

void CPhysBox::vfunc103()
{
	vfunc93(0, 0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(1);
	}
	if (*(int *)((char *)this + 0x124)) {
		*((char *)this + 0x4c8) = 0;
		vfunc93(8, 0);
	} else {
		*((char *)this + 0x4c8) = 1;
	}
	sub_100b2e30(g_1070d1b0);
	m_nTakeDamage = 1;
	int unused;
	const char **ppName = vfunc9(&unused);
	vfunc105(*ppName ? *ppName : g_106b8540);
	sub_100b3b00();
	vfunc104();
	if (m_flags204 & 0x10)
		sub_100aaa40(1);
	if (!(m_flags204 & 0x20))
		sub_100b3840(2);
	((PhysBoxSlot223Fn)(*(void ***)this)[223])(this);
}
// END FUNCTION

// FUNCTION: 0x1004e430 size=0x97
#include "CPhysBox.h"
#include "CUnknown101466e0.h"

__declspec(dllimport) void DevWarning(const char *fmt, ...);

#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
// stand-in for the first 242 slots of the entity's virtual table
struct Slots242 {
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual int vfunc8();
	virtual void s9();
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6) D10(a7) D10(a8) D10(a9)
	D10(b0) D10(b1) D10(b2) D10(b3) D10(b4) D10(b5) D10(b6) D10(b7) D10(b8) D10(b9)
	D10(c0)
	virtual float *vfunc220();
	D10(d0) D10(d1)
	virtual void vfunc241(int a);
};
struct PhysObj {
	virtual void s0();
	virtual void s1();
	virtual void vfunc2();
};

bool CPhysBox::vfunc223()
{
	if (*((char *)this + 0x4c8))
		((Slots242 *)this)->vfunc241(((Slots242 *)this)->vfunc8());
	PhysObj *phys = *(PhysObj **)((char *)this + 0x36c);
	if (!phys) {
		DevWarning("%s has no physics data!\n");
		return false;
	}
	if (!(*((char *)this + 0x204) & 1) && *((char *)this + 0x4c8)) {
		phys->vfunc2();
	} else {
		float *origin = ((Slots242 *)this)->vfunc220();
		*(float *)((char *)this + 0x458) = origin[0];
		*(float *)((char *)this + 0x45c) = origin[1];
		*(float *)((char *)this + 0x460) = origin[2];
	}
	((CUnknown101466e0 *)((char *)this + 0x1b0))->sub_101466e0(1);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1004e7c0 size=0xa5
#include "CPhysBox.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

void sub_101c0b80(const char *name, CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value);

// TARGET: CPhysBox::vfunc226
void CPhysBox::vfunc226(int a)
{
	if (*((char *)this + 0x4c8))
	{
		*((char *)this + 0x1b1) = 1;
		CBaseEntity::vfunc226(a);
		if (m_flags204 & 1)
		{
			const float *pos = ((CEntityVSlots *)this)->slot220()->Base();
			const float *old = (const float *)((char *)this + 0x458);
			if (old[0] != pos[0] || old[1] != pos[1] || old[2] != pos[2])
			{
				((CPhysBoxHelper498 *)((char *)this + 0x480))->sub_10010794((int)this, this, 0);
				const char *name = *(const char **)((char *)this + 0x20c);
				if (!name)
					name = g_106b8540;
				sub_101c0b80(name, this, this, 3, 0);
				m_flags204 &= ~1;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1004e910 size=0x16
#include "CPhysBox.h"

void CPhysBox::sub_1004e910(int a)
{
	((CPhysBoxHelper498 *)((char *)this + 0x498))->sub_10010794(a, this, 0);
}
// END FUNCTION

// FUNCTION: 0x1004e940 size=0x16
#include "CPhysBox.h"

void CPhysBox::vfunc243(int a)
{
	((CPhysBoxHelper498 *)((char *)this + 0x4b0))->sub_10010794(a, this, 0);
}
// END FUNCTION
