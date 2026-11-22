// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 59 blocks
#include "vampire.h"

// FUNCTION: 0x100dbb50 size=0x68
#include "CDirtySpatialPartitionEntityList.h"
#include "utlvector.h"

void __cdecl sub_10430964(void *p);

CAutoGameSystem *CDirtySpatialPartitionEntityList::vfunc8(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0xc))->~CUtlVector<int>();
	sub_1000cfbd();
	if (flags & 1)
		sub_10430964(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100dbbe0 size=0x27
extern int g_1070b24c;

struct CDirtyIfaceView {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10(int p);
};

bool __fastcall sub_100dbbe0(char *p)
{
    int a;
    if (p != 0) {
        a = (int)(p + 8);
    } else {
        a = 0;
    }
    ((CDirtyIfaceView *)g_1070b24c)->vfunc10(a);
    return true;
}
// END FUNCTION

// FUNCTION: 0x100dbc20 size=0x23
#include "CDirtySpatialPartitionEntityList.h"

struct CSpatialV100dbc20
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10();
	virtual void vfunc11(void *p);
};
extern CSpatialV100dbc20 *g_1070b24c;

struct CDirtyList100dbc20 { char pad[8]; int m_8; };

// TARGET: CDirtySpatialPartitionEntityList::vfunc1
void CDirtySpatialPartitionEntityList::vfunc1()
{
	CDirtyList100dbc20 *p = (CDirtyList100dbc20 *)this;
	g_1070b24c->vfunc11(p ? &p->m_8 : 0);
}
// END FUNCTION

// FUNCTION: 0x100dbc60 size=0xb3
#include "CUnknown100dbc60.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *, unsigned int);

void CUnknown100dbc60::sub_100dbc60(CBaseEntity *pEnt)
{
	const unsigned int *src = pEnt->vfunc1();
	int elem = m_list.m_size;
	if (1 + m_list.m_size > m_list.m_allocationCount && m_list.m_growSize != -1) {
		int newSize = m_list.m_allocationCount + (1 + m_list.m_size - m_list.m_allocationCount);
		while (m_list.m_allocationCount < newSize) {
			if (m_list.m_allocationCount != 0) {
				if (m_list.m_growSize != 0)
					m_list.m_allocationCount += m_list.m_growSize;
				else
					m_list.m_allocationCount += m_list.m_allocationCount;
			} else {
				m_list.m_allocationCount = 8;
			}
		}
		if (m_list.m_pMemory)
			m_list.m_pMemory = (int *)Plat_Realloc(m_list.m_pMemory, m_list.m_allocationCount * 4);
		else
			m_list.m_pMemory = (int *)Plat_Alloc(m_list.m_allocationCount * 4);
	}
	m_list.m_size += 1;
	m_list.m_pElements = m_list.m_pMemory;
	int numToMove = m_list.m_size - elem - 1;
	if (numToMove > 0)
		memmove(m_list.m_pMemory + elem + 1, m_list.m_pMemory + elem, numToMove * 4);
	int *p = m_list.m_pMemory + elem;
	if (p)
		*p = *src;
}
// END FUNCTION

// FUNCTION: 0x100dbd50 size=0x8
#include "CDirtySpatialPartitionEntityList.h"
// TARGET: CDirtySpatialPartitionEntityList::vfunc5
void CDirtySpatialPartitionEntityList::vfunc5()
{
	m_DirtyEntities.m_Size = 0;
}
// END FUNCTION

// FUNCTION: 0x100dbd70 size=0x65
#include "CUnknown100dbd70.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;

struct EntSub270
{
	void sub_100ddd90();
};

// TARGET: CUnknown100dbd70::sub_100dbd70
void CUnknown100dbd70::sub_100dbd70()
{
	for (int i = m_size - 1; i >= 0; i--)
	{
		unsigned int h = *(unsigned int *)m_Memory.sub_100ddf40(i);
		if (h != 0xffffffff)
		{
			CGlobalEntityList_Slot *slot = &g_106eb5d8.m_Slots[h & 0x1fff];
			if (slot->m_Serial == (int)(h >> 13) && slot->m_pEntity)
			{
				char *pEnt = (char *)slot->m_pEntity->vfunc4();
				if (pEnt)
					((EntSub270 *)(pEnt + 0x270))->sub_100ddd90();
			}
		}
	}
	m_size = 0;
}
// END FUNCTION

// FUNCTION: 0x100dbe00 size=0x6
#include "CCollisionProperty.h"
namespace lifted {
extern char g_10560c20;
}
int CCollisionProperty::vfunc18()
{
    return (int)&lifted::g_10560c20;
}
// END FUNCTION

// FUNCTION: 0x100dbe20 size=0x5
int sub_100dbe60(void);
int g_106e8140 = ((int (*)(int))sub_100dbe60)(0);
// END FUNCTION

// FUNCTION: 0x100dbe60 size=0x1a
namespace lifted {
extern int g_10560c20;
extern int g_10560c24;
extern char g_10560c64;
}
int sub_100dbe60()
{
    lifted::g_10560c24 = 0xb;
    lifted::g_10560c20 = (int)&lifted::g_10560c64;
    return (int)&lifted::g_10560c20;
}
// END FUNCTION

// FUNCTION: 0x100dbe90 size=0xa
#include "SendTable.h"
SendTable g_106e816c;
// END FUNCTION

// FUNCTION: 0x100dbf10 size=0x5
int sub_100dbf50(void);
int g_106e8168 = ((int (*)(int))sub_100dbf50)(0);
// END FUNCTION

// FUNCTION: 0x100dbf50 size=0x16f
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_1000c14e(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, void *proxy);	// SendPropVector
SendProp sub_10006cc1(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, void *proxy);	// SendPropFloat
void sub_10003012();
void sub_10006aeb();
void sub_100dc120();
void sub_100dc140();

extern SendTable g_106e816c;

// TARGET: sub_100dbf50
int sub_100dbf50()
{
	static const char *pTableName = "DT_CollisionProperty";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000c14e("m_vecMins", 4, 0xc, 0, 4, 0.0f, -121121.121094f, (void *)sub_10003012),
		sub_1000c14e("m_vecMaxs", 0x10, 0xc, 0, 4, 0.0f, -121121.121094f, (void *)sub_10003012),
		sub_10007bfd("solid", 0, -1, 3, 1, 0, (void *)sub_100dc120),
		sub_10007bfd("solidflags", 0, -1, 9, 1, 0, (void *)sub_100dc140),
		sub_10007bfd("m_nSurroundType", 0x1c, 1, 3, 1, 0, 0),
		sub_10006cc1("m_flTriggerBloat", 0x20, 4, 0, 4, 0.0f, -121121.121094f, (void *)sub_10006aeb),
		sub_1000c14e("m_vecSpecifiedSurroundingMins", 0x24, 0xc, 0, 4, 0.0f, -121121.121094f, (void *)sub_10003012),
		sub_1000c14e("m_vecSpecifiedSurroundingMaxs", 0x30, 0xc, 0, 4, 0.0f, -121121.121094f, (void *)sub_10003012),
	};
	g_106e816c.sub_1000e8fe(props + 1, 8, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100dc120 size=0x10
void sub_100dc120(int *p, int unused, int *out)
{
    typedef int (__fastcall *VFunc)(void *);
    int r = ((VFunc)(*(int **)p)[11])(p);
    *out = r;
}
// END FUNCTION

// FUNCTION: 0x100dc140 size=0x10
void sub_100dc140(int *p, int unused, int *out)
{
    typedef int (__fastcall *VFunc)(void *);
    int r = ((VFunc)(*(int **)p)[12])(p);
    *out = r;
}
// END FUNCTION

// FUNCTION: 0x100dc190 size=0x1a
// TARGET: CCollisionProperty::CCollisionProperty
#include "CCollisionProperty.h"
struct CUnk100dc300 {
    void sub_100dc300(int a);
};
CCollisionProperty::CCollisionProperty()
{
    m_hPartition = 0xffff;
    ((CUnk100dc300 *)this)->sub_100dc300(0);
}
// END FUNCTION

// FUNCTION: 0x100dc1c0 size=0x1
#include "CCollisionProperty.h"
void CCollisionProperty::vfunc17()
{
}
// END FUNCTION

// FUNCTION: 0x100dc1e0 size=0x7
// TARGET: sub_100dc1e0
unsigned int __fastcall sub_100dc1e0(void *pThis)
{
    return *(unsigned short *)((char *)pThis + 0x44);
}
// END FUNCTION

// FUNCTION: 0x100dc200 size=0xb
namespace lifted {
extern char g_10454154;
int sub_1000e2d2();
}
struct CUnknown100dc200 { int sub_100dc200(); };
int CUnknown100dc200::sub_100dc200()
{
    *(int *)this = (int)&lifted::g_10454154;
    return lifted::sub_1000e2d2();
}
// END FUNCTION

// FUNCTION: 0x100dc220 size=0xaa
#include "CCollisionProperty.h"

struct CPartitionObj
{
	virtual void v0(unsigned short handle, int a);
};
struct DebugNameView { const char *sub_100ab4f0(); };

extern CPartitionObj *g_1070b24c;
extern char g_105477a4[];
extern void (*g_109f3630)(const char *, ...);

static inline const char *OuterName(CBaseEntity *pOuter)
{
	if (pOuter)
		return ((DebugNameView *)pOuter)->sub_100ab4f0();
	return g_105477a4;
}

void CCollisionProperty::sub_100dc220(int a)
{
	if (!g_1070b24c) {
		g_109f3630("ERROR: partition not initialized when %s needed it.\n", OuterName(m_pOuter));
		return;
	}
	unsigned short handle = m_hPartition;
	if (handle == 0xffff) {
		sub_100ddd90();
		handle = m_hPartition;
		if (handle == 0xffff) {
			g_109f3630("ERROR: m_Partition failed to initialized for %s.\n", OuterName(m_pOuter));
			return;
		}
	}
	g_1070b24c->v0(handle, a);
}
// END FUNCTION

// FUNCTION: 0x100dc300 size=0x76
extern int g_1070d1b0, g_1070d1b4, g_1070d1b8;
struct Rec64 {
    int m00;
    int m04, m08, m0c, m10, m14, m18;
    char m1c;
    int m20, m24, m28, m2c, m30, m34, m38;
    int m3c;
    int m40;
    short m44;
    int m48;
    int m4c, m50, m54;
    int m58, m5c, m60;
    void sub_100dc300(int v);
};
void Rec64::sub_100dc300(int v)
{
    m3c = v;
    m04 = 0;
    m08 = 0;
    m0c = 0;
    m10 = 0;
    m14 = 0;
    m18 = 0;
    m48 = 0;
    m20 = 0;
    m44 = 0;
    m40 = 0;
    m1c = 0;
    m4c = g_1070d1b0;
    m50 = g_1070d1b4;
    m54 = g_1070d1b8;
    m58 = g_1070d1b0;
    m5c = g_1070d1b4;
    m60 = g_1070d1b8;
    m24 = 0;
    m28 = 0;
    m2c = 0;
    m30 = 0;
    m34 = 0;
    m38 = 0;
}
// END FUNCTION

// FUNCTION: 0x100dc3a0 size=0x4
#include "CCollisionProperty.h"
int CCollisionProperty::vfunc0()
{
    return *(int *)((char *)this + 0x3c);
}
// END FUNCTION

// FUNCTION: 0x100dc3c0 size=0xa
#include "CCollisionProperty.h"
// TARGET: CCollisionProperty::vfunc14
int CCollisionProperty::vfunc14() { return m_pOuter->m_field368; }
// END FUNCTION

// FUNCTION: 0x100dc3e0 size=0x1a
#include "CCollisionProperty.h"
#include "TestBit.h"

// TARGET: CCollisionProperty::vfunc16
bool CCollisionProperty::vfunc16()
{
	if (TestBit(m_usSolidFlags, 3) || vfunc14() == 1)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x100dc410 size=0x3
#include "CCollisionProperty.h"
int CCollisionProperty::vfunc13()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100dc430 size=0x35
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"

struct CUntouchView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void SetCheckUntouch(bool b);
};

void CCollisionProperty::sub_100dc430()
{
	if (!IsSolid()) {
		bool bTrigger = (m_usSolidFlags >> 3) & 1;
		if (!bTrigger) {
			if (((CEntityVSlots *)m_pOuter)->slot207())
				((CUntouchView *)m_pOuter)->SetCheckUntouch(true);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100dc480 size=0xa9
#include "CCollisionProperty.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CPhysicsObjectView
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void vfunc25();
};

struct CHandleView
{
	unsigned int m_Index;

	CGlobalEntityList_Ent *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return pSlot->m_pEntity;
		}
		return 0;
	}
};

void CCollisionProperty::sub_100dc480(int solid)
{
	if (m_nSolidType == solid)
		return;
	char bWasSolid = IsSolid();
	sub_100dda20();
	if (solid == 1 && ((CHandleView *)((char *)m_pOuter + 0x25c))->Get())
		solid = 6;
	m_nSolidType = solid;
	CPhysicsObjectView *pPhys = (CPhysicsObjectView *)m_pOuter->m_obj36c;
	if (pPhys)
		pPhys->vfunc25();
	sub_100ddc40();
	if (bWasSolid != (char)IsSolid())
		sub_100dc430();
}
// END FUNCTION

// FUNCTION: 0x100dc560 size=0x4
#include "CCollisionProperty.h"
int CCollisionProperty::vfunc11()
{
    return *(int *)((char *)this + 0x40);
}
// END FUNCTION

// FUNCTION: 0x100dc580 size=0x6a
#include "CUnknown100dda50.h"
struct CPhysObj36c {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void OnStateChanged();
};
struct CFlagsUnit : CUnknown100dda50 {
    void sub_100dda20();
    void sub_100dc430();
    void sub_100dc580(unsigned short flags);
};

void CFlagsUnit::sub_100dc580(unsigned short flags)
{
    unsigned int old = m_flags44;
    m_flags44 = flags;
    if (old != flags) {
        if ((flags ^ old) & 0x180)
            sub_100dda20();
        if (((unsigned char)m_flags44 & 4) != (old & 4)) {
            CPhysObj36c *p = (CPhysObj36c *)m_pOwner->m_unk36c;
            if (p)
                p->OnStateChanged();
        }
        if (((unsigned char)m_flags44 & 0xc) != (old & 0xc)) {
            sub_100ddc40();
            sub_100dc430();
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100dc610 size=0xb
#include "CCollisionProperty.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CEntSlots
{
	H(a) H(b) T(c0) virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual void target();
};

// TARGET: CCollisionProperty::vfunc8
void CCollisionProperty::vfunc8()
{
	((CEntSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x100dc630 size=0x31
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
extern float g_1070d9d0[3];
float *CCollisionProperty::vfunc9(bool bOuter)
{
	if (!bOuter && ((m_usSolidFlags & 0x80) || m_nSolidType == 2 || m_nSolidType == 0))
		return g_1070d9d0;
	return (float *)((CEntityVSlots *)m_pOuter)->slot219();
}
// END FUNCTION

// FUNCTION: 0x100dc680 size=0x96
#include "CCollisionProperty.h"

struct matrix3x4_t {
    float m[12];
    ~matrix3x4_t() {}
};

void sub_10139a90(float *pMat);
void sub_10138760(const float *pVec, int col, float *pMat);
typedef float *(__fastcall *PFN_GetVec)(void *);
extern int g_106e853c;

float *CCollisionProperty::vfunc10()
{
    static matrix3x4_t s_Matrix[4];
    float *pMat = s_Matrix[g_106e853c].m;
    g_106e853c = (g_106e853c + 1) & 3;
    if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0) {
        CBaseEntity *pOuter = m_pOuter;
        unsigned char nBits = (unsigned char)(*(unsigned int *)((char *)pOuter + 0x268) >> 11);
        if (nBits & 1)
            pOuter->vfunc98();
        return (float *)((char *)pOuter + 0x130);
    }
    sub_10139a90(pMat);
    sub_10138760(((PFN_GetVec)(*(void ***)this)[8])(this), 3, pMat);
    return pMat;
}
// END FUNCTION

// FUNCTION: 0x100dc770 size=0x74
#include "CCollisionProperty.h"

// TARGET: CCollisionProperty::sub_100dc770
void CCollisionProperty::sub_100dc770(const float *mins, const float *maxs)
{
    m_vecMins = *(const Vector *)mins;
    m_vecMaxs = *(const Vector *)maxs;
    Vector vecDelta;
    VectorSubtract(*(const Vector *)maxs, *(const Vector *)mins, vecDelta);
    *(float *)((char *)this + 0x48) = vecDelta.Length() * 0.5f;
    sub_100dda20();
}
// END FUNCTION

// FUNCTION: 0x100dc810 size=0x4
#include "CCollisionProperty.h"
float * CCollisionProperty::vfunc1()
{
    return (float *)((char *)this + 4);
}
// END FUNCTION

// FUNCTION: 0x100dc830 size=0x4
#include "CCollisionProperty.h"
float * CCollisionProperty::vfunc2()
{
    return (float *)((char *)this + 0x10);
}
// END FUNCTION

// FUNCTION: 0x100dc850 size=0x5f
#include "CCollisionProperty.h"
void CCollisionProperty::vfunc3(Vector *pMins, Vector *pMaxs)
{
	sub_100dcd90(&m_vecMins.x, &m_vecMaxs.x, &pMins->x, &pMaxs->x);
	unsigned short flags = vfunc12();
	if (flags & 0x100) {
		pMins->x = pMins->x - m_flTriggerBloat;
		pMins->y = pMins->y - m_flTriggerBloat;
		pMaxs->x = m_flTriggerBloat + pMaxs->x;
		pMaxs->y = pMaxs->y + m_flTriggerBloat;
		pMaxs->z = m_flTriggerBloat * 0.5f + pMaxs->z;
	}
}
// END FUNCTION

// FUNCTION: 0x100dc8d0 size=0x33
#include "CCollisionProperty.h"

void CCollisionProperty::sub_100dc8d0(char bEnable, int value)
{
	*(int *)((char *)this + 0x20) = value;
	if (bEnable) {
		sub_100dc580(m_usSolidFlags | 0x100);
	} else {
		sub_100dc580(m_usSolidFlags & ~0x100);
	}
}
// END FUNCTION

// FUNCTION: 0x100dc920 size=0x8
#include "CCollisionProperty.h"
// TARGET: CCollisionProperty::vfunc6
int CCollisionProperty::vfunc6()
{
	return m_pOuter->vfunc8();
}
// END FUNCTION

// FUNCTION: 0x100dc940 size=0x8
#include "CCollisionProperty.h"
namespace lifted {
struct C100016a4 { int sub_100016a4(); };
}
void CCollisionProperty::vfunc7()
{
    ((lifted::C100016a4 *)(*(int *)((char *)this + 0x3c)))->sub_100016a4();
}
// END FUNCTION

// FUNCTION: 0x100dc960 size=0xb
#include "CCollisionProperty.h"
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CEntSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7) T(a8)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8();
	virtual void target();
};

// TARGET: CCollisionProperty::vfunc4
void CCollisionProperty::vfunc4()
{
	((CEntSlots *)m_pOuter)->target();
}
// END FUNCTION

// FUNCTION: 0x100dc980 size=0xb
#include "CCollisionProperty.h"
void CCollisionProperty::vfunc5()
{
	m_pOuter->vfunc100();
}
// END FUNCTION

// FUNCTION: 0x100dc9a0 size=0x36
#include "CCollisionProperty.h"

Vector &CCollisionProperty::sub_100dc9a0(const Vector &in, Vector &out)
{
	out.x = (m_vecMaxs.x - m_vecMins.x) * in.x + m_vecMins.x;
	out.y = (m_vecMaxs.y - m_vecMins.y) * in.y + m_vecMins.y;
	out.z = (m_vecMaxs.z - m_vecMins.z) * in.z + m_vecMins.z;
	return out;
}
// END FUNCTION

// FUNCTION: 0x100dc9f0 size=0xfa
#include "CUnknown100dc9f0.h"
#include "TempVector.h"

float *CUnknown100dc9f0::sub_100dc9f0(const float *pPoint, float *pOut)
{
	Vector &vecTemp = AllocTempVector();
	VectorSubtract(m_maxs, m_mins, vecTemp);
	Vector vecSize = vecTemp;
	pOut[0] = (vecSize.x != 0.0f) ? (pPoint[0] - m_mins.x) / vecSize.x : 0.5f;
	pOut[1] = (vecSize.y != 0.0f) ? (pPoint[1] - m_mins.y) / vecSize.y : 0.5f;
	pOut[2] = (vecSize.z != 0.0f) ? (pPoint[2] - m_mins.z) / vecSize.z : 0.5f;
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x100dcb30 size=0xb5
#include "CCollisionProperty.h"
#include "matrix3x4_t.h"
extern Vector g_1070d9d0;
void sub_100087ba(const float *in, const float *mat, float *out);
struct CCollisionOriginView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual float *GetCollisionOrigin();
};

namespace block_100dc9a0 {
struct CCollisionPropertyUnit : CCollisionProperty {
	Vector &sub_100dc9a0(const Vector &in, Vector &out);	// returns out: the game keeps it in eax
};
Vector &CCollisionPropertyUnit::sub_100dc9a0(const Vector &in, Vector &out)
{
	out.x = (m_vecMaxs.x - m_vecMins.x) * in.x + m_vecMins.x;
	out.y = (m_vecMaxs.y - m_vecMins.y) * in.y + m_vecMins.y;
	out.z = (m_vecMaxs.z - m_vecMins.z) * in.z + m_vecMins.z;
	return out;
}
}
using namespace block_100dc9a0;

// TARGET: CCollisionProperty::sub_100dcb30
Vector *CCollisionProperty::sub_100dcb30(const Vector &in, Vector *pResult)
{
	Vector local;
	((CCollisionPropertyUnit *)this)->sub_100dc9a0(in, local);
	if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0) {
		float *ang = vfunc9(0);
		if (g_1070d9d0.x != ang[0] || g_1070d9d0.y != ang[1] || g_1070d9d0.z != ang[2]) {
			float *mat = vfunc10();
			sub_100087ba(&local.x, mat, &pResult->x);
			return pResult;
		}
	}
	float *org = ((CCollisionOriginView *)this)->GetCollisionOrigin();
	pResult->x = local.x + org[0];
	pResult->y = local.y + org[1];
	pResult->z = local.z + org[2];
	return pResult;
}
// END FUNCTION

// FUNCTION: 0x100dcc20 size=0xb0
#include "CCollisionProperty.h"
#include "CUnknown100dc9f0.h"

extern float g_1070d9d0[3];
void sub_10138130(const float *pPoint, const float *pMatrix, float *pOut);

// slot 8 of the collideable returns the origin pointer (the class declares it void)
struct CCollisionSlot8
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual float *slot8();
};

// TARGET: CCollisionProperty::sub_100dcc20
float *CCollisionProperty::sub_100dcc20(const float *pPoint, float *pOut)
{
	Vector local;
	if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0)
	{
		float *ang = vfunc9(0);
		if (g_1070d9d0[0] != ang[0] || g_1070d9d0[1] != ang[1] || g_1070d9d0[2] != ang[2])
		{
			float *pMatrix = vfunc10();
			sub_10138130(pPoint, pMatrix, &local.x);
			goto normalize;
		}
	}
	{
		float *org = ((CCollisionSlot8 *)this)->slot8();
		local.x = pPoint[0] - org[0];
		local.y = pPoint[1] - org[1];
		local.z = pPoint[2] - org[2];
	}
normalize:
	((CUnknown100dc9f0 *)this)->sub_100dc9f0(&local.x, pOut);
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x100dcd00 size=0x6d
#include "CUnknown100dcd00.h"

struct RandomStream
{
	virtual void a0();
	virtual float RandomFloat(float lo, float hi);
};
extern RandomStream *g_1070b244;

// TARGET: CUnknown100dcd00::sub_100dcd00
void CUnknown100dcd00::sub_100dcd00(const float *pA, const float *pB, int arg)
{
	float v[3];
	v[0] = g_1070b244->RandomFloat(pA[0], pB[0]);
	v[1] = g_1070b244->RandomFloat(pA[1], pB[1]);
	v[2] = g_1070b244->RandomFloat(pA[2], pB[2]);
	sub_100dcb30(v, arg);
}
// END FUNCTION

// FUNCTION: 0x100dcd90 size=0xc8
#include "CCollisionProperty.h"

extern float g_1070d9d0;
extern float g_1070d9d4;
extern float g_1070d9d8;

void sub_1013c0e0(float *pMatrix, const float *pMins, const float *pMaxs, float *pOutA, float *pOutB);

struct CollView {
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
	virtual Vector *GetOrigin();
};

void CCollisionProperty::sub_100dcd90(const float *pMins, const float *pMaxs, float *pOutA, float *pOutB)
{
	if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0) {
		float *pAngles = vfunc9(0);
		if (g_1070d9d0 != pAngles[0] || g_1070d9d4 != pAngles[1] || g_1070d9d8 != pAngles[2]) {
			sub_1013c0e0(vfunc10(), pMins, pMaxs, pOutA, pOutB);
			return;
		}
	}
	VectorAdd(*(const Vector *)pMins, *((CollView *)this)->GetOrigin(), *(Vector *)pOutA);
	VectorAdd(*(const Vector *)pMaxs, *((CollView *)this)->GetOrigin(), *(Vector *)pOutB);
}
// END FUNCTION

// FUNCTION: 0x100dcea0 size=0x103
#include "CCollisionProperty.h"

extern float g_1070d9d0[3];
void sub_10138130(const float *pPoint, const float *pMatrix, float *pOut);

// slot 8 of the collideable returns the origin pointer (the class declares it void)
struct CCollisionSlot8
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual float *slot8();
};

struct CCollisionPropertyUnit : CCollisionProperty
{
	int sub_100dcea0(const float *pPoint);
};

// TARGET: CCollisionPropertyUnit::sub_100dcea0
int CCollisionPropertyUnit::sub_100dcea0(const float *pPoint)
{
	Vector local;
	if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0)
	{
		float *ang = vfunc9(0);
		if (g_1070d9d0[0] != ang[0] || g_1070d9d0[1] != ang[1] || g_1070d9d0[2] != ang[2])
		{
			float *pMatrix = vfunc10();
			sub_10138130(pPoint, pMatrix, &local.x);
			goto bounds;
		}
	}
	{
		float *org = ((CCollisionSlot8 *)this)->slot8();
		local.x = pPoint[0] - org[0];
		local.y = pPoint[1] - org[1];
		local.z = pPoint[2] - org[2];
	}
bounds:
	if (local.x >= m_vecMins.x && local.x <= m_vecMaxs.x &&
		local.y >= m_vecMins.y && local.y <= m_vecMaxs.y &&
		local.z >= m_vecMins.z && local.z <= m_vecMaxs.z)
		return 1;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100dd000 size=0x14a
#include "CCollisionProperty.h"

extern Vector g_1070d9d0;
void sub_10138130(const Vector *in, const float *pMatrix, Vector *out);
void sub_10137fe0(const Vector *in, const float *pMatrix, Vector *out);
void sub_1013c8c0(const Vector *pMins, const Vector *pMaxs, const Vector *in, Vector *out);

inline void VectorITransform(const Vector &in, const float *pMatrix, Vector &out)
{
    sub_10138130(&in, pMatrix, &out);
}

inline void VectorTransform(const Vector &in, const float *pMatrix, Vector &out)
{
    sub_10137fe0(&in, pMatrix, &out);
}

struct CCollisionPropertyV8
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual Vector *GetCollisionOrigin();
};

void CCollisionProperty::sub_100dd000(const Vector &in, Vector &out)
{
    Vector local;
    Vector clamped;

    if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0 &&
        *(Vector *)vfunc9(0) != g_1070d9d0) {
        VectorITransform(in, vfunc10(), local);
    } else {
        VectorSubtract(in, *((CCollisionPropertyV8 *)this)->GetCollisionOrigin(), local);
    }
    sub_1013c8c0(&m_vecMins, &m_vecMaxs, &local, &clamped);
    if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0 &&
        *(Vector *)vfunc9(0) != g_1070d9d0) {
        VectorTransform(clamped, vfunc10(), out);
        return;
    }
    VectorAdd(clamped, *((CCollisionPropertyV8 *)this)->GetCollisionOrigin(), out);
}
// END FUNCTION

// FUNCTION: 0x100dd1b0 size=0xef
#include "CCollisionProperty.h"
#include "Vector.h"
extern float g_1070d9d0[3];
void sub_10013c82(const float *in, float *m, float *out);
void sub_1013c8c0(const float *mins, const float *maxs, const float *in, float *out);

struct COriginView {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7();
	virtual float *GetOrigin();
};

inline void VITransform(const Vector &in, float *m, Vector &out)
{
	sub_10013c82(&in.x, m, &out.x);
}

float CCollisionProperty::sub_100dd1b0(const Vector &point)
{
	Vector local;
	Vector result;
	if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0) {
		float *ang = vfunc9(0);
		if (g_1070d9d0[0] != ang[0] || g_1070d9d0[1] != ang[1] || g_1070d9d0[2] != ang[2]) {
			VITransform(point, vfunc10(), local);
			goto clamp;
		}
	}
	{
		float *o = ((COriginView *)this)->GetOrigin();
		local.x = point.x - o[0];
		local.y = point.y - o[1];
		local.z = point.z - o[2];
	}
clamp:
	sub_1013c8c0(&m_vecMins.x, &m_vecMaxs.x, &local.x, &result.x);
	float dx = local.x - result.x;
	float dy = local.y - result.y;
	float dz = local.z - result.z;
	return FastSqrt(dx * dx + dy * dy + dz * dz);
}
// END FUNCTION

// FUNCTION: 0x100dd2e0 size=0x118
#include "CCollisionProperty.h"

extern float g_1070d9d0;
extern float g_1070d9d4;
extern float g_1070d9d8;

void sub_10138460(const float *pIn, float *pMatrix, float *pOut);

inline void VectorIRotate(const Vector &in1, float *pMatrix, Vector &out)
{
	sub_10138460(&in1.x, pMatrix, &out.x);
}

struct CollView {
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
	virtual Vector *GetOrigin();
};

float CCollisionProperty::sub_100dd2e0(const float *pDir)
{
	const Vector &vDir = *(const Vector *)pDir;
	Vector vLocal;
	float *pAngles;
	if (!(m_usSolidFlags & 0x80) && m_nSolidType != 2 && m_nSolidType != 0
		&& ((pAngles = vfunc9(0)), (g_1070d9d0 != pAngles[0] || g_1070d9d4 != pAngles[1] || g_1070d9d8 != pAngles[2]))) {
		VectorIRotate(vDir, vfunc10(), vLocal);
	} else {
		vLocal = vDir;
	}
	float flResult = DotProduct(*((CollView *)this)->GetOrigin(), vDir);
	flResult += (vLocal.x >= 0.0f ? m_vecMaxs.x : m_vecMins.x) * vLocal.x;
	flResult += (vLocal.y >= 0.0f ? m_vecMaxs.y : m_vecMins.y) * vLocal.y;
	flResult += (vLocal.z >= 0.0f ? m_vecMaxs.z : m_vecMins.z) * vLocal.z;
	return flResult;
}
// END FUNCTION

// FUNCTION: 0x100dd450 size=0x148
#include "CCollisionProperty.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct ColView {
    virtual void a0(); virtual void a1(); virtual void a2();
    virtual void WorldSpaceTriggerBounds(Vector *pMins, Vector *pMaxs);
    virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7();
    virtual const Vector *GetCollisionOrigin();
    virtual const Vector *GetCollisionAngles(int unused);
};
struct PhysView {
    V10(a) V10(b) V10(c) V10(d)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
    virtual int Get();
};
struct SurroundView {
    V10(a) 
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
    virtual void Compute(Vector *pMins, Vector *pMaxs, int a, const Vector *pOrigin, const Vector *pAngles);
};
extern SurroundView *g_1072393c;
void CCollisionProperty::sub_100dd450(Vector *pMins, Vector *pMaxs)
{
    ColView *self = (ColView *)this;
    PhysView *pPhys = (PhysView *)m_pOuter->m_obj36c;
    if (pPhys) {
        g_1072393c->Compute(pMins, pMaxs, pPhys->Get(), self->GetCollisionOrigin(), self->GetCollisionAngles(0));
    } else {
        const Vector *pOrigin = self->GetCollisionOrigin();
        *pMins = *pOrigin;
        *pMaxs = *pMins;
    }
    if (m_usSolidFlags & 0x100) {
        Vector mins, maxs;
        self->WorldSpaceTriggerBounds(&mins, &maxs);
        VectorMin(mins, *pMins, *pMins);
        VectorMax(maxs, *pMaxs, *pMaxs);
    }
}
// END FUNCTION

// FUNCTION: 0x100dd600 size=0x1b
#include "CCollisionProperty.h"

#define VS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct COuter
{
	VS10(a) VS10(b) VS10(c) VS10(d) VS10(e) VS10(f) VS10(g) VS10(h) VS10(i) VS10(j)
	VS10(k) VS10(l) VS10(m)
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133();
	virtual void s134(); virtual void s135(); virtual void s136();
	virtual void *slot137();
};

struct CAnim
{
	bool sub_10096c40(Vector *pMins, Vector *pMaxs);
};

// TARGET: CCollisionProperty::sub_100dd600
bool CCollisionProperty::sub_100dd600(Vector *pMins, Vector *pMaxs)
{
	CAnim *pAnim = (CAnim *)((COuter *)m_pOuter)->slot137();
	if (pAnim)
		return pAnim->sub_10096c40(pMins, pMaxs);
	return false;
}
// END FUNCTION

// FUNCTION: 0x100dd630 size=0xcf
#include "CCollisionProperty.h"
#include <math.h>

static inline bool BoundsInEntitySpace(const CCollisionProperty *p)
{
	return (p->m_usSolidFlags & 0x80) == 0 && p->m_nSolidType != 2 && p->m_nSolidType != 0;
}

void CCollisionProperty::sub_100dd630(Vector *pOutMins, Vector *pOutMaxs)
{
	if (!BoundsInEntitySpace(this)) {
		*pOutMins = m_vecMins;
		*pOutMaxs = m_vecMaxs;
	} else {
		float flAx = (float)fabs(m_vecMins.x);
		float flBx = (float)fabs(m_vecMaxs.x);
		float flX = flAx > flBx ? flAx : flBx;
		pOutMins->x = -flX;
		pOutMaxs->x = flX;
		float flAy = (float)fabs(m_vecMins.y);
		float flBy = (float)fabs(m_vecMaxs.y);
		float flY = flAy > flBy ? flAy : flBy;
		pOutMins->y = -flY;
		pOutMaxs->y = flY;
		float flAz = (float)fabs(m_vecMins.z);
		float flBz = (float)fabs(m_vecMaxs.z);
		float flZ = flAz > flBz ? flAz : flBz;
		pOutMins->z = -flZ;
		pOutMaxs->z = flZ;
	}
}
// END FUNCTION

// FUNCTION: 0x100dd740 size=0x2c
#include "CCollisionProperty.h"

// TARGET: CCollisionProperty::sub_100dd740
void CCollisionProperty::sub_100dd740(bool bWorld, Vector *pMins, Vector *pMaxs)
{
	if (bWorld)
	{
		sub_100dd450(pMins, pMaxs);
		return;
	}
	vfunc3(pMins, pMaxs);
}
// END FUNCTION

// FUNCTION: 0x100dd780 size=0x198
#include "CCollisionProperty.h"

#define CP_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CColPhysics {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual char slot4();
};

struct CColOuter {
	CP_SLOTS10(a0) CP_SLOTS10(a1) CP_SLOTS10(a2) CP_SLOTS10(a3) CP_SLOTS10(a4) CP_SLOTS10(a5) CP_SLOTS10(a6) CP_SLOTS10(a7) CP_SLOTS10(a8)
	virtual void b90(); virtual void b91(); virtual void b92(); virtual void b93();
	virtual int slot94();
	virtual void b95(); virtual void b96(); virtual void b97(); virtual void b98(); virtual void b99();
	virtual void b100();
	virtual void slot101(Vector *pMins, Vector *pMaxs);
	char m_pad0004[0x36c - 4];
	CColPhysics *m_pPhysics36c;
};

struct CColSlots {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7();
	virtual Vector *slot8();
	virtual void a9(); virtual void a10();
	virtual int slot11();
};

void CCollisionProperty::sub_100dd780(Vector *pMins, Vector *pMaxs)
{
	CColSlots *pSlots = (CColSlots *)this;
	if (!(5 == pSlots->slot11() && m_nSurroundType != 4)) { switch (m_nSurroundType) {
	case 0: {
		bool bUseVPhysics = false;
		if (6 == pSlots->slot11() && 7 == ((CColOuter *)m_pOuter)->slot94()) {
			CColPhysics *pPhysics = ((CColOuter *)m_pOuter)->m_pPhysics36c;
			bUseVPhysics = pPhysics && pPhysics->slot4();
		}
		sub_100dd740(bUseVPhysics, pMins, pMaxs);
		break;
	}
	case 1:
		sub_100dd740(pSlots->slot11() == 6, pMins, pMaxs);
		break;
	case 6:
		sub_100dd740(false, pMins, pMaxs);
		break;
	case 2:
		sub_100dd600(pMins, pMaxs);
		break;
	case 5:
		sub_100dd630(pMins, pMaxs);
		break;
	case 3:
		VectorAdd(*pSlots->slot8(), m_vecSpecifiedSurroundingMins, *pMins);
		VectorAdd(*pSlots->slot8(), m_vecSpecifiedSurroundingMaxs, *pMaxs);
		break;
	case 4:
		((CColOuter *)m_pOuter)->slot101(pMins, pMaxs);
		break;
	} } else {
		*pMins = *pSlots->slot8();
		*pMaxs = *pMins;
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x100dd990 size=0x65
#include "CUnknown100dd990.h"

// TARGET: CUnknown100dd990::sub_100dd990
void CUnknown100dd990::sub_100dd990(int type, const CUnknown100dd990Vec *pA, const CUnknown100dd990Vec *pB)
{
	m_type = (char)type;
	if (type != 3)
	{
		sub_100dda20();
		return;
	}
	m_v24 = *pA;
	m_v30 = *pB;
	m_v4c = *pA;
	m_v58 = *pB;
}
// END FUNCTION

// FUNCTION: 0x100dda20 size=0x12
#include "vampire.h"

void __fastcall sub_100ddd20(void *pThis);

// TARGET: sub_100dda20
void __fastcall sub_100dda20(void *pThis)
{
	*(unsigned int *)(*(char **)((char *)pThis + 0x3c) + 0x268) |= 0x14000;
	sub_100ddd20(pThis);
}
// END FUNCTION

// FUNCTION: 0x100dda50 size=0x6c
#include "CUnknown100dda50.h"

inline int CUnknown100dda50::sub_100dda50_inner()
{
    if (v11() == 6) {
        if (m_pOwner->v94() == 7) {
            if (m_pOwner->m_unk36c != 0)
                return 1;
        }
    }
    return 0;
}

char CUnknown100dda50::sub_100dda50()
{
    switch (m_state) {
    case 0:
        return sub_100dda50_inner();
    case 1:
        return 1;
    case 2:
        return 0;
    case 3:
        return 0;
    case 4:
        return 1;
    case 5:
        return 0;
    case 6:
        return 0;
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100ddae0 size=0xb7
#include "CCollisionProperty.h"

#define CV(n) virtual void s##n();
struct CollView {
	CV(0) CV(1) CV(2) CV(3) CV(4) CV(5) CV(6) CV(7)
	virtual Vector *s8();
};

inline bool IsDirtySurround(const CBaseEntity *pEnt)
{
	return (pEnt->m_flags268 >> 14) & 1;
}

inline void ClearDirtySurround(CBaseEntity *pEnt)
{
	pEnt->m_flags268 &= ~0x4000;
}

void CCollisionProperty::vfunc15(Vector *pMins, Vector *pMaxs)
{
	const Vector &origin = *((CollView *)this)->s8();
	if (IsDirtySurround(m_pOuter)) {
		ClearDirtySurround(m_pOuter);
		sub_100dd780(pMins, pMaxs);
		VectorSubtract(*pMins, origin, m_vecSurroundingMins);
		VectorSubtract(*pMaxs, origin, m_vecSurroundingMaxs);
		return;
	}
	VectorAdd(origin, m_vecSurroundingMins, *pMins);
	pMaxs->x = m_vecSurroundingMaxs.x + origin.x;
	pMaxs->y = m_vecSurroundingMaxs.y + origin.y;
	pMaxs->z = m_vecSurroundingMaxs.z + origin.z;
}
// END FUNCTION
