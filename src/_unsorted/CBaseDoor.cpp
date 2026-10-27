// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100ed720 size=0x6
namespace lifted {
extern char g_10564578;
}
datamap_t * CBaseDoor::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10564578);
}
// END FUNCTION

// FUNCTION: 0x100ee420 size=0x8e
#include "CBaseDoor.h"

void __cdecl sub_100aa7b0(void *p);

CBaseDoor *CBaseDoor::vfunc5(unsigned char flags)
{
	m_items564[7].sub_100cd2d0();
	m_items564[6].sub_100cd2d0();
	m_items564[5].sub_100cd2d0();
	m_items564[4].sub_100cd2d0();
	m_items564[3].sub_100cd2d0();
	m_items564[2].sub_100cd2d0();
	m_items564[1].sub_100cd2d0();
	m_items564[0].sub_100cd2d0();
	m_items4a4[1].sub_100cd2d0();
	m_items4a4[0].sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100eedf0 size=0xdb
#include "CBaseDoor.h"
#include "CEHandleGet.h"
struct CDoorView_100eedf0 { char m_pad0[0x204]; unsigned int m_nFlags; char m_pad1[0x55c - 0x208]; char m_b55c; char m_pad2[0x64c - 0x55d]; int m_n64c; int m_n650; };
int CBaseDoor::vfunc35(int a)
{
	if (sub_100127ec())
		return 0x3a;
	unsigned int h = m_hLinked638;
	if (h != 0xffffffff)
	{
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity != 0)
			return ((CBaseDoor *)EHandle_Get(m_hLinked638))->vfunc35(a);
	}
	CBaseEntity *pOther = sub_10008cba(a);
	if (pOther)
		return ((CBaseDoor *)pOther)->vfunc35(a);
	CDoorView_100eedf0 *v = (CDoorView_100eedf0 *)this;
	if (!(v->m_nFlags & 0x500))
		return 0;
	if (v->m_b55c)
		return v->m_n650;
	if (sub_1000cc57())
		return 0x3b;
	return v->m_n64c;
}
// END FUNCTION

// FUNCTION: 0x100ef060 size=0x18b
#include "CBaseDoor.h"

extern "C" int __cdecl sub_1043e780(const char*, const char*);
extern char g_106b8540[];

struct str_100ef060
{
	const char* p;
	const char* ToCStr() const { return p ? p : g_106b8540; }
};

struct DoorSeqEntry_100ef060
{
	int id;
	str_100ef060 name;
};

struct DoorRegistry_100ef060
{
	char pad[0x14];
	int count;
	DoorSeqEntry_100ef060** items;

	int sub_10009331(void* ent, const char* name, int flags);

	int Lookup(const char* name)
	{
		for (int i = 0; i < count; i++)
		{
			if (sub_1043e780(items[i]->name.ToCStr(), name) == 0)
				return items[i]->id;
		}
		return -1;
	}
};

extern DoorRegistry_100ef060 g_1074b308;
extern int g_106eb3dc;
extern int g_106eb3e0;
extern int g_106eb3e8;
extern int g_106eb3e4;

void CBaseDoor::vfunc71()
{
	*(int*)((char*)this + 0xbc) = 0;
	*(int*)((char*)this + 0xb4) = g_1074b308.sub_10009331(this, ((str_100ef060*)((char*)this + 0xc0))->ToCStr(), 0);
	g_106eb3dc = g_1074b308.Lookup("close");
	g_106eb3e0 = g_1074b308.Lookup("open");
	g_106eb3e8 = g_1074b308.Lookup("swing");
	g_106eb3e4 = g_1074b308.Lookup("locked");
}
// END FUNCTION

// FUNCTION: 0x100ef5f0 size=0x21
struct CBaseDoorX
{
    void sub_10013534(bool bFlag);
    void sub_100ef5f0(bool bFlag);
};

// TARGET: sub_100ef5f0
void CBaseDoorX::sub_100ef5f0(bool bFlag)
{
    sub_10013534(bFlag);
    if (bFlag) {
        void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))(*(void ***)this)[0x3e8 / 4];
        pfn(this);
    }
}
// END FUNCTION

// FUNCTION: 0x100ef630 size=0x8a
#include "CBaseDoor.h"

void sub_100043cc(CBaseDoor *door, void *pData, int a);

void CBaseDoor::vfunc250()
{
	unsigned int flags = *(unsigned int *)((char *)this + 0x204);
	if (!(flags & 0x20) && *(int *)((char *)this + 0x3fc) != 0xbf800000) {
		if (flags & 1) {
			sub_100043cc(this, (char *)this + 0x514, 0);
			*(int *)((char *)this + 0x4f8) = 0;
		} else {
			sub_100043cc(this, (char *)this + 0x508, 0);
			*(int *)((char *)this + 0x4f8) = 1;
		}
		*(int *)((char *)this + 0x3fc) = 0xbf800000;
		m_pfnTouch = (void (CBaseEntity::*)(CBaseEntity *))&CBaseDoor::sub_10012837;
		switch (*(int *)((char *)this + 0x4f8)) {
		case 0:
			sub_100efbf0(1);
			break;
		case 1:
			sub_100efbf0(0);
			break;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100ef990 size=0xa3
#include "CBaseEntity.h"
#include "CBaseDoor.h"
#include "CGlobalEntityList.h"

extern char g_106b8540[];	// empty string
extern CGlobalEntityList g_106eb5d8;

static inline void SetHandle(unsigned int *pHandle, CGlobalEntityList_Ent *pObj)
{
	if (pObj)
		*pHandle = *pObj->v1();
	else
		*pHandle = 0xffffffff;
}

void CBaseDoor::vfunc113()
{
	CBaseEntity::vfunc113();
	switch (m_nState4f8) {
	case 0:
		sub_100efbf0(1);
		break;
	case 1:
		sub_100efbf0(0);
		break;
	}
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszLinked634 ? m_pszLinked634 : g_106b8540, 0, 0);
	SetHandle(&m_hLinked630, pEnt == 0 ? 0 : *(CGlobalEntityList_Ent **)((char *)pEnt + 0xa4));
	pEnt = g_106eb5d8.sub_100f7770(0, m_pszLinked63c ? m_pszLinked63c : g_106b8540, 0, 0);
	if (pEnt)
		m_hLinked638 = *pEnt->vfunc1();
}
// END FUNCTION

// FUNCTION: 0x100efab0 size=0x13
#include "CBaseDoor.h"
#include "CBaseEntitySlots.h"

void CBaseDoor::vfunc104()
{
	((CBaseEntitySlots *)this)->slot71();
	sub_100eecf0();
}
// END FUNCTION

// FUNCTION: 0x100eff90 size=0xc7
#include <math.h>
#include "CEntityVSlots.h"
#pragma intrinsic(fabs)

static inline float FloatMakePositive(float f)
{
    return (float)fabs(f);
}

static inline bool VectorsAreEqual(const Vector &src1, const Vector &src2, float tolerance)
{
    if (FloatMakePositive(src1.x - src2.x) > tolerance)
        return false;
    if (FloatMakePositive(src1.y - src2.y) > tolerance)
        return false;
    return FloatMakePositive(src1.z - src2.z) <= tolerance;
}

// TARGET: CBaseDoor::vfunc248
void CBaseDoor::vfunc248()
{
    if (VectorsAreEqual(m_vecPosition508, *((CEntityVSlots *)this)->slot220(), 0.001f)) {
        m_nState4f8 = 1;
        return;
    }
    if (VectorsAreEqual(m_vecPosition514, *((CEntityVSlots *)this)->slot220(), 0.001f))
        m_nState4f8 = 0;
}
// END FUNCTION

// FUNCTION: 0x100f0ef0 size=0xe
void CBaseDoor::vfunc246(int a, int* b, int c)
{
	b[6] = -1;
}
// END FUNCTION

// FUNCTION: 0x100f1340 size=0x107
#include "CEHandleGet.h"
#include "ScopeTrace.h"

struct S100f1340Ai
{
	void sub_1027de00(CBaseDoor *pDoor);
	void sub_1027dfb0(CBaseDoor *pDoor);
};

struct S100f1340Ent
{
	char m_pad[0x94];
	S100f1340Ai *m_pAi;
};

void CBaseDoor::vfunc177(CBaseEntity *pOther)
{
	ScopeTrace trace("CBaseDoor::StartBlocked", g_106b8540);
	if (m_nState4f8 == 3) {
		m_items564[0].sub_100cd660(pOther, this, 0);
		return;
	}
	S100f1340Ent *pActivator = (S100f1340Ent *)EHandle_Get(m_hActivator53c);
	if (pActivator) {
		S100f1340Ai *pAi = pActivator->m_pAi;
		if (pAi) {
			sub_100f0e90(2);
			pAi->sub_1027de00(this);
		}
	}
	S100f1340Ent *pEnt = (S100f1340Ent *)pOther;
	if (pEnt) {
		S100f1340Ai *pAi = pEnt->m_pAi;
		if (pAi) {
			sub_100f0e90(0x80);
			pAi->sub_1027dfb0(this);
		}
	}
	m_items564[1].sub_100cd660(pOther, this, 0);
}
// END FUNCTION

// FUNCTION: 0x100f1830 size=0x27
// TARGET: CBaseDoor::vfunc179
#include "CBaseDoor.h"

void CBaseDoor::vfunc179()
{
	if (m_nState4f8 == 3)
	{
		m_items564[2].sub_100cd660(this, this, 0);
		return;
	}
	m_items564[3].sub_100cd660(this, this, 0);
}
// END FUNCTION
