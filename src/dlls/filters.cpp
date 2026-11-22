// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 38 blocks
#include "vampire.h"

// FUNCTION: 0x10107700 size=0x6
#include "datamap.h"
#include "CBaseFilter.h"
namespace lifted {
extern char g_1056c1e8;
}
datamap_t *CBaseFilter::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c1e8;
}
// END FUNCTION

// FUNCTION: 0x10107720 size=0x5
int * sub_10107760(void);
int * g_107092a8 = ((int * (*)(int))sub_10107760)(0);
// END FUNCTION

// FUNCTION: 0x10107760 size=0xb0
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_1056c1e8[2];
void sub_100070b3();

int *sub_10107760()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bReverseOutcome", {0x450, 0}, 1, 6, "reverse_outcome" },
        { 0x12, "InputTestActivator", {0, 0}, 1, 8, "TestActivator", 0, (void *)sub_100070b3 },
        { 10, "m_OnPass", {0x454, 0}, 1, 0x16, "OnPass", g_1055dc70 },
        { 10, "m_OnFail", {0x46c, 0}, 1, 0x16, "OnFail", g_1055dc70 },
    };
    g_1056c1e8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1056c1e8[0] = (int)&dataDesc[1];
    return g_1056c1e8;
}
// END FUNCTION

// FUNCTION: 0x10107840 size=0x5
#include "CBaseFilter.h"
bool CBaseFilter::vfunc241(CBaseEntity *a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10107860 size=0x51
#include "CBaseFilter.h"
#include "COutputEvent.h"
#include "inputdata_t.h"
#define FV(n) virtual void vfunc##n();
#define FV10(p) FV(p##0) FV(p##1) FV(p##2) FV(p##3) FV(p##4) FV(p##5) FV(p##6) FV(p##7) FV(p##8) FV(p##9)
#define FV100(p) FV10(p##0) FV10(p##1) FV10(p##2) FV10(p##3) FV10(p##4) FV10(p##5) FV10(p##6) FV10(p##7) FV10(p##8) FV10(p##9)
struct CFilterSlot241 {
	FV100(0) FV100(1) FV10(20) FV10(21) FV10(22) FV10(23)
	FV(240)
	virtual char vfunc241(void *pEnt);
};
void CBaseFilter::sub_10107860(inputdata_t *pInput)
{
	char bPass = ((CFilterSlot241 *)this)->vfunc241(pInput->pActivator);
	if (m_bNegated)
		bPass = !bPass;
	if (bPass)
		((COutputEvent *)m_OnPass)->sub_100cd660(pInput->pActivator, this, 0);
	else
		((COutputEvent *)m_OnFail)->sub_100cd660(pInput->pActivator, this, 0);
}
// END FUNCTION

// FUNCTION: 0x101078e0 size=0x88
#include "platform.h"
#include "CBaseEntity.h"

extern void *vt_104475c4[];
extern void *vt_1045b654[];
extern char g_1056ca84[];
void *sub_100aa720(int size);

struct COutputCtor {
	char m_data[0x18];
	void sub_100cd2a0();
};

struct CFilterMultiView : CBaseEntity {
	char m_padView[0x454 - 0x3e0];
	COutputCtor m_out454;
	COutputCtor m_out46c;
	char m_pad484[0x49c - 0x484];
	int m_h[5];
};

DLL_EXPORT CBaseEntity *filter_multi()
{
	CFilterMultiView *p = (CFilterMultiView *)sub_100aa720(0x4b0);
	CBaseEntity *e;
	if (p) {
		p->sub_1009d980(0);
		*(void ***)p = vt_104475c4;
		p->m_out454.sub_100cd2a0();
		p->m_out46c.sub_100cd2a0();
		for (int i = 0; i < 5; i++)
			p->m_h[i] = -1;
		e = p;
	} else
		e = 0;
	if (e)
		*(void ***)e = vt_1045b654;
	e->vfunc106(g_1056ca84);
	return e;
}
// END FUNCTION

// FUNCTION: 0x101079a0 size=0x6
#include "datamap.h"
#include "CFilterMultiple.h"
namespace lifted {
extern char g_1056c2dc;
}
datamap_t *CFilterMultiple::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c2dc;
}
// END FUNCTION

// FUNCTION: 0x101079c0 size=0x5
int sub_10107a00(void);
int g_107092a0 = ((int (*)(int))sub_10107a00)(0);
// END FUNCTION

// FUNCTION: 0x10107a00 size=0x1a
namespace lifted {
extern int g_1056c2dc;
extern int g_1056c2e0;
extern char g_1056c324;
}
int sub_10107a00()
{
    lifted::g_1056c2e0 = 6;
    lifted::g_1056c2dc = (int)&lifted::g_1056c324;
    return (int)&lifted::g_1056c2dc;
}
// END FUNCTION

// FUNCTION: 0x10107a30 size=0x45
#include "CFilterMultiple.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;

void CFilterMultiple::vfunc113()
{
	for (int i = 0; i < 5; i++) {
		if (m_pszFilterName[i]) {
			CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, m_pszFilterName[i], 0, 0);
			if (pEnt)
				m_hFilter[i] = *pEnt->vfunc1();
			else
				m_hFilter[i] = (unsigned int)-1;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10107aa0 size=0xbf
#include "CFilterMultiple.h"

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct FilterSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8) SL10(b9)
	SL10(c0) SL10(c1) SL10(c2) SL10(c3)
	virtual void d0();
	virtual bool PassesFilterImpl(CBaseEntity *pEntity);
};

struct FilterHandle
{
	unsigned int m_Index;
	FilterSlots *Get() const
	{
		if (m_Index != 0xffffffff) {
			HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
			if (e->serial == (m_Index >> 13))
				return (FilterSlots *)e->ent;
		}
		return 0;
	}
};

bool CFilterMultiple::sub_10107aa0(CBaseEntity *pEntity)
{
	if (m_nFilterType == 0) {
		for (int i = 0; i < 5; i++) {
			if (((FilterHandle *)&m_hFilter[i])->Get() != 0) {
				if (!((FilterHandle *)&m_hFilter[i])->Get()->PassesFilterImpl(pEntity))
					return false;
			}
		}
		return true;
	} else {
		for (int i = 0; i < 5; i++) {
			if (((FilterHandle *)&m_hFilter[i])->Get() != 0) {
				if (((FilterHandle *)&m_hFilter[i])->Get()->PassesFilterImpl(pEntity))
					return true;
			}
		}
		return false;
	}
}
// END FUNCTION

// FUNCTION: 0x10107b90 size=0x67
#include "platform.h"
#include "CFilterName.h"

// TARGET: filter_activator_name
DLL_EXPORT CBaseEntity *filter_activator_name()
{
    CFilterName *p = new CFilterName;
    p->vfunc106("filter_activator_name");
    return p;
}
// END FUNCTION

// FUNCTION: 0x10107c20 size=0x96
#include "CFilterName.h"
#include "CBaseEntity.h"
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)
extern "C" int _strcmpi(const char *, const char *);
extern "C" int _strnicmp(const char *, const char *, unsigned int);

struct EntView
{
	char pad[0x26c];
	const char *m_iName;

	bool NameMatches(const char *p)
	{
		if (STRINGR(m_iName) == p)
			return true;
		unsigned int len = strlen(p);
		if (len == 0)
			return m_iName == 0;
		if (p[len - 1] != '*')
			return _strcmpi(STRINGR(m_iName), p) == 0;
		return _strnicmp(STRINGR(m_iName), p, len - 1) == 0;
	}
};

bool CFilterName::vfunc241(CBaseEntity *pEnt)
{
	const char *filter = *(const char **)((char *)this + 0x484);
	return ((EntView *)pEnt)->NameMatches(STRINGR(filter));
}
// END FUNCTION

// FUNCTION: 0x10107cf0 size=0x6
#include "datamap.h"
#include "CFilterName.h"
namespace lifted {
extern char g_1056c42c;
}
datamap_t *CFilterName::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c42c;
}
// END FUNCTION

// FUNCTION: 0x10107d10 size=0x5
int sub_10107d50(void);
int g_10709294 = ((int (*)(int))sub_10107d50)(0);
// END FUNCTION

// FUNCTION: 0x10107d50 size=0x1a
namespace lifted {
extern int g_1056c42c;
extern int g_1056c430;
extern char g_1056c474;
}
int sub_10107d50()
{
    lifted::g_1056c430 = 1;
    lifted::g_1056c42c = (int)&lifted::g_1056c474;
    return (int)&lifted::g_1056c42c;
}
// END FUNCTION

// FUNCTION: 0x10107d80 size=0x67
#include "platform.h"
#include "CFilterClass.h"

// TARGET: filter_activator_class
DLL_EXPORT CBaseEntity *filter_activator_class()
{
    CFilterClass *p = new CFilterClass;
    p->vfunc106("filter_activator_class");
    return p;
}
// END FUNCTION

// FUNCTION: 0x10107e10 size=0x3d
#include "CFilterClass.h"

extern char g_106b8540[];
int sub_1043e780(const char *, const char *);

bool CFilterClass::vfunc241(CBaseEntity *pEntity)
{
    const char *pEntName;

    if (pEntity == 0) {
        return false;
    }
    pEntName = *(const char **)((char *)pEntity + 0x11c);
    if (pEntName == 0) {
        pEntName = g_106b8540;
    }
    return sub_1043e780(*(const char **)((char *)this + 0x484) == 0 ? g_106b8540 : *(const char **)((char *)this + 0x484), pEntName) == 0;
}
// END FUNCTION

// FUNCTION: 0x10107e60 size=0x6
#include "datamap.h"
#include "CFilterClass.h"
namespace lifted {
extern char g_1056c4a0;
}
datamap_t *CFilterClass::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c4a0;
}
// END FUNCTION

// FUNCTION: 0x10107e80 size=0x5
int sub_10107ec0(void);
int g_1070929c = ((int (*)(int))sub_10107ec0)(0);
// END FUNCTION

// FUNCTION: 0x10107ec0 size=0x1a
namespace lifted {
extern int g_1056c4a0;
extern int g_1056c4a4;
extern char g_1056c4e4;
}
int sub_10107ec0()
{
    lifted::g_1056c4a4 = 1;
    lifted::g_1056c4a0 = (int)&lifted::g_1056c4e4;
    return (int)&lifted::g_1056c4a0;
}
// END FUNCTION

// FUNCTION: 0x10107ef0 size=0x67
#include "platform.h"
#include "CFilterMass.h"

// TARGET: filter_activator_mass
DLL_EXPORT CBaseEntity *filter_activator_mass()
{
    CFilterMass *p = new CFilterMass;
    p->vfunc106("filter_activator_mass");
    return p;
}
// END FUNCTION

// FUNCTION: 0x10107f80 size=0x58
#include "CFilterMass.h"
#include "CBaseEntity.h"

struct MassObj
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual float GetMass();
};

__declspec(dllimport) void DevWarning(const char *fmt, ...);

// TARGET: CFilterMass::vfunc241
bool CFilterMass::vfunc241(CBaseEntity *pEntity)
{
	MassObj *pObj = (MassObj *)pEntity->m_obj36c;
	if (!pObj) {
		DevWarning("%s cannot test mass of %s, it is not a physics object\n", sub_100ab4f0(), pEntity->sub_100ab4f0());
		return false;
	}
	return pObj->GetMass() > m_flMass;
}
// END FUNCTION

// FUNCTION: 0x10108000 size=0x6
#include "datamap.h"
#include "CFilterMass.h"
namespace lifted {
extern char g_1056c510;
}
datamap_t *CFilterMass::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c510;
}
// END FUNCTION

// FUNCTION: 0x10108020 size=0x5
int sub_10108060(void);
int g_10709290 = ((int (*)(int))sub_10108060)(0);
// END FUNCTION

// FUNCTION: 0x10108060 size=0x1a
namespace lifted {
extern int g_1056c510;
extern int g_1056c514;
extern char g_1056c554;
}
int sub_10108060()
{
    lifted::g_1056c514 = 1;
    lifted::g_1056c510 = (int)&lifted::g_1056c554;
    return (int)&lifted::g_1056c510;
}
// END FUNCTION

// FUNCTION: 0x10108090 size=0x71
#include "platform.h"
#include "CFilterInventory.h"

// TARGET: filter_activator_inventory
DLL_EXPORT CBaseEntity *filter_activator_inventory()
{
    CFilterInventory *p = new CFilterInventory;
    p->vfunc106("filter_activator_inventory");
    return p;
}
// END FUNCTION

// FUNCTION: 0x10108130 size=0xd0
#include "CFilterInventory.h"
#include "CBaseCombatCharacter.h"

struct HandleEntry_t
{
	CBaseEntity *m_pEnt;
	unsigned int m_nSerial;
	int pad;
};
struct HandleTable_t
{
	int pad;
	HandleEntry_t m_Entries[1];
};

#define GLOBAL_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define GLOBAL_SLOTS100(p) GLOBAL_SLOTS10(p##0) GLOBAL_SLOTS10(p##1) GLOBAL_SLOTS10(p##2) GLOBAL_SLOTS10(p##3) GLOBAL_SLOTS10(p##4) \
	GLOBAL_SLOTS10(p##5) GLOBAL_SLOTS10(p##6) GLOBAL_SLOTS10(p##7) GLOBAL_SLOTS10(p##8) GLOBAL_SLOTS10(p##9)

struct GlobalObj_t
{
	GLOBAL_SLOTS100(a)	// slots 0..99
	GLOBAL_SLOTS10(b)	// slots 100..109
	GLOBAL_SLOTS10(c)	// slots 110..119
	virtual int vfunc120();
};

extern HandleTable_t *g_10566458;
extern GlobalObj_t *g_1070b22c;
extern char g_106b8540[];

static inline void SetHandle(unsigned int *pHandle, CBaseEntity *pEnt)
{
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
}

bool CFilterInventory::vfunc241(CBaseEntity *pEnt)
{
	if (g_1070b22c->vfunc120() == m_nLastFrame) {
		CBaseEntity *pLast;
		unsigned int h = m_hLastEnt;
		if (h != 0xffffffff) {
			HandleEntry_t *e = &g_10566458->m_Entries[h & 0x1fff];
			if (e->m_nSerial == (h >> 13))
				pLast = e->m_pEnt;
			else
				pLast = 0;
		} else
			pLast = 0;
		if (pEnt == pLast)
			return m_bPasses;
	}
	CBaseCombatCharacter *pInv;
	if (pEnt && (pInv = *(CBaseCombatCharacter **)((char *)pEnt + 0x9c)) != 0)
		m_bPasses = pInv->sub_10335950(m_pszItemName ? m_pszItemName : g_106b8540) != 0;
	else
		m_bPasses = false;
	m_nLastFrame = g_1070b22c->vfunc120();
	SetHandle(&m_hLastEnt, pEnt);
	return m_bPasses;
}
// END FUNCTION

// FUNCTION: 0x10108240 size=0x6
#include "datamap.h"
#include "CFilterInventory.h"
namespace lifted {
extern char g_1056c580;
}
datamap_t *CFilterInventory::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c580;
}
// END FUNCTION

// FUNCTION: 0x10108260 size=0x5
int sub_101082a0(void);
int g_1070928c = ((int (*)(int))sub_101082a0)(0);
// END FUNCTION

// FUNCTION: 0x101082a0 size=0x1a
namespace lifted {
extern int g_1056c580;
extern int g_1056c584;
extern char g_1056c5c4;
}
int sub_101082a0()
{
    lifted::g_1056c584 = 1;
    lifted::g_1056c580 = (int)&lifted::g_1056c5c4;
    return (int)&lifted::g_1056c580;
}
// END FUNCTION

// FUNCTION: 0x101082d0 size=0x67
#include "platform.h"
#include "CFilterFeat.h"

// TARGET: filter_activator_feat
DLL_EXPORT CBaseEntity *filter_activator_feat()
{
    CFilterFeat *p = new CFilterFeat;
    p->vfunc106("filter_activator_feat");
    return p;
}
// END FUNCTION

// FUNCTION: 0x10108360 size=0xfa
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CFilterFeat.h"
#include "CUnknown101e56e0.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);

inline const char *OrEmpty(const char *p)
{
	return p ? p : g_106b8540;
}

inline int FindFeatId(const char *pszName)
{
	for (int i = 0; i < g_10739d20; i++) {
		if (_strcmpi(Records()[i]->Get(), pszName) == 0)
			return Records()[i]->m_id;
	}
	return -1;
}

bool CFilterFeat::vfunc241(CBaseEntity *pEntity)
{
	CBaseCombatCharacter *pChar = pEntity ? *(CBaseCombatCharacter **)((char *)pEntity + 0x9c) : 0;
	if (!pChar)
		return false;
	int id = FindFeatId(OrEmpty(m_pszFeat));
	if (id == -1)
		return false;
	return CUnknown101e56e0Table::Find(id)->sub_101e56e0(pChar) >= m_nMinCost;
}
// END FUNCTION

// FUNCTION: 0x101084a0 size=0x6
#include "datamap.h"
#include "CFilterFeat.h"
namespace lifted {
extern char g_1056c5f0;
}
datamap_t *CFilterFeat::vfunc82()
{
    return (datamap_t *)&lifted::g_1056c5f0;
}
// END FUNCTION

// FUNCTION: 0x101084c0 size=0x5
int sub_10108500(void);
int g_10709298 = ((int (*)(int))sub_10108500)(0);
// END FUNCTION

// FUNCTION: 0x10108500 size=0x1a
namespace lifted {
extern int g_1056c5f0;
extern int g_1056c5f4;
extern char g_1056c634;
}
int sub_10108500()
{
    lifted::g_1056c5f4 = 2;
    lifted::g_1056c5f0 = (int)&lifted::g_1056c634;
    return (int)&lifted::g_1056c5f0;
}
// END FUNCTION

// FUNCTION: 0x10108530 size=0x36
#include "CBaseFilter.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CBaseFilter::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10108580 size=0x36
#include "CFilterMultiple.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1009df20();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CFilterMultiple::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x46c))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x454))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1009df20();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
