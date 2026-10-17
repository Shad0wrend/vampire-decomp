// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10027bb0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10007810(GP *);
extern int vt_104454dc;
extern char g_1053884c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_thruster
extern "C" GP *phys_thruster()
{
	GP *p = (GP *)sub_1000db89(0x4a8);
	if (p) {
		sub_10007810(p);
		*(int **)p = &vt_104454dc;
	} else {
		p = 0;
	}
	p->name(g_1053884c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100281f0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10007810(GP *);
extern int vt_10445974;
extern char g_1053887c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_torque
extern "C" GP *phys_torque()
{
	GP *p = (GP *)sub_1000db89(0x4a8);
	if (p) {
		sub_10007810(p);
		*(int **)p = &vt_10445974;
	} else {
		p = 0;
	}
	p->name(g_1053887c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100295d0 size=0xa
void CUnknown100295d0::sub_100295d0(int unused)
{
	m_bFlag = 1;
}
// END FUNCTION

// FUNCTION: 0x100295f0 size=0xa
void CUnknown100295d0::sub_100295f0(int unused)
{
	m_bFlag = 0;
}
// END FUNCTION

// FUNCTION: 0x1002b790 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10447a54;
extern char g_10539650[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_hinge
extern "C" GP *phys_hinge()
{
	GP *p = (GP *)sub_1000db89(0x4c4);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10447a54;
	} else {
		p = 0;
	}
	p->name(g_10539650);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002bb20 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10447ef4;
extern char g_105396ac[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_ballsocket
extern "C" GP *phys_ballsocket()
{
	GP *p = (GP *)sub_1000db89(0x488);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10447ef4;
	} else {
		p = 0;
	}
	p->name(g_105396ac);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002bcc0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10448384;
extern char g_105396ec[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_slideconstraint
extern "C" GP *phys_slideconstraint()
{
	GP *p = (GP *)sub_1000db89(0x498);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10448384;
	} else {
		p = 0;
	}
	p->name(g_105396ec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002c120 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10448814;
extern char g_10539728[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_constraint
extern "C" GP *phys_constraint()
{
	GP *p = (GP *)sub_1000db89(0x488);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10448814;
	} else {
		p = 0;
	}
	p->name(g_10539728);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002c390 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e480(GP *);
extern int vt_10448ca4;
extern char g_1053975c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: phys_pulleyconstraint
extern "C" GP *phys_pulleyconstraint()
{
	GP *p = (GP *)sub_1000db89(0x4b4);
	if (p) {
		sub_1000e480(p);
		*(int **)p = &vt_10448ca4;
	} else {
		p = 0;
	}
	p->name(g_1053975c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1002cc60 size=0xa
struct CUnknown1002cc60 { int p[3]; int a; CUnknown1002cc60* sub_1002cc60(); };
// TARGET: CUnknown1002cc60::sub_1002cc60
CUnknown1002cc60* CUnknown1002cc60::sub_1002cc60() { a = -1; return this; }
// END FUNCTION

// FUNCTION: 0x1002ccc0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1002ccc0(int num);
};

void CUtlMemory20::sub_1002ccc0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x1002dfe0 size=0x85
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct IPhysicsEnv {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18();
    virtual int CreateBbox(int mins, int maxs);
};
struct IPhysCallback {
    virtual void OnCreate(int mins, int maxs, int obj);
};
extern IPhysicsEnv *g_1072393c;
extern IPhysCallback *g_1053c5e0;

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int sub_1002dfe0(int mins, int maxs)
{
    CScopeGuard guard("PhysCreateBbox");
    int obj = g_1072393c->CreateBbox(mins, maxs);
    g_1053c5e0->OnCreate(mins, maxs, obj);
    return obj;
}
// END FUNCTION

// FUNCTION: 0x1002e0a0 size=0x7c
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct IPhysObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6();
    virtual void SetGameFlags(unsigned short flags);
    virtual unsigned short GetGameFlags();
};

unsigned short sub_1002e0a0(IPhysObj *obj, unsigned short flags)
{
    g_109f3620[*g_109f3680].name = "PhysSetFlags";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    unsigned short r = obj->GetGameFlags();
    r |= flags;
    obj->SetGameFlags(r);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10031bd0 size=0x72
struct Sub { void *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
struct Slot { unsigned int handle; float time; };
struct GlobalVars { char pad[0xc]; float curtime; };
extern EntInfo *g_10566458;
extern GlobalVars *g_1070b228;
extern Slot g_106b8698[8];
static inline void *Resolve(unsigned int h)
{
    if (h != 0xffffffff) {
        Sub *e = &g_10566458[h & 0x1fff].s;
        if (e->serial == (h >> 13))
            return e->pEnt;
    }
    return 0;
}
bool sub_10031bd0(void *ent)
{
    for (Slot *s = g_106b8698; (int)s < (int)(g_106b8698 + 8); s++) {
        if (Resolve(s->handle) == ent) {
            if (!(g_1070b228->curtime >= s->time))
                return true;
            s->handle = 0xffffffff;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10032a20 size=0x8
void __fastcall sub_10032a20(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10032a40 size=0x8
void __fastcall sub_10032a40(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10032b00 size=0x8
void __fastcall sub_10032b00(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10032fb0 size=0x6a
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S10032fb0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_10032fb0(int num);
};
// TARGET: S10032fb0::sub_10032fb0
void S10032fb0::sub_10032fb0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 2;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x18);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x18);
}
// END FUNCTION

// FUNCTION: 0x10033040 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory36 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10033040(int num);
};

void CUtlMemory36::sub_10033040(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 1;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 36);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 36);
}
// END FUNCTION

// FUNCTION: 0x100330d0 size=0x70
struct Elem { char data[0x58]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

void __fastcall sub_100330d0(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_109f3638(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_109f3634(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10033160 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8b_t::sub_10033160
	void sub_10033160(int num);
};

void CMem8b_t::sub_10033160(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1003c1c0 size=0x8
void __fastcall sub_1003c1c0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1003c3c0 size=0x70
struct Elem { char data[0x68]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

void __fastcall sub_1003c3c0(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_109f3638(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_109f3634(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x1003c450 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_1003c450(void **p) { ((Fn *)*p)[134](p); }
// END FUNCTION

// FUNCTION: 0x1003c9f0 size=0x77
#include "CDataObjectAccessSystem.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CDataObjectAccessSystem::sub_1003c9f0(int index, void *pData)
{
    g_109f3620[*g_109f3680].name = "CDataObjectAccessSystem::AddDataAccessor";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    if (index >= 0 && index < 32 && m_data[index] == 0)
        m_data[index] = pData;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1003e250 size=0x6d
struct TraceEnt { const char *a; void *b; void *c; };
struct trace21 { int d[21]; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1053be28[];
extern char g_106b8540[];
extern trace21 g_106bd8b0;
trace21 *sub_1003e250(trace21 *out)
{
    g_109f3620[*g_109f3680].a = g_1053be28;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *out = g_106bd8b0;
    --*g_109f3680;
    return out;
}
// END FUNCTION

// FUNCTION: 0x1003eb50 size=0x1b3
struct ScopeEntry { const char *a; const char *b; const char *c; };
struct MaxVel { virtual void v0(); virtual bool v1(); char pad[0x24]; float val; };

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct VtOrigin
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k)
	V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t) V10(u) V10(w)
	virtual float *GetOrigin();
};
struct VtSet
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f)
	virtual void s60(); virtual void s61();
	virtual void SetOrigin(float *v);
};

extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern void (*g_109f3628)(const char *fmt, const char *arg);
extern MaxVel *g_109eeee4;
extern unsigned int g_1046a420;
extern float g_104454c4;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_1053bf70[];
extern char g_1053bf50[];
extern char g_1053bf34[];

#define MAXV (g_109eeee4->v1() ? g_104454c4 : g_109eeee4->val)

// TARGET: CBaseEntity::sub_1003eb50
void CBaseEntity::sub_1003eb50()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : g_106b8540;
	else
		name = g_105387dc;
	g_109f3620[*g_109f3680].a = g_1053bf70;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;

	unsigned int org[3];
	unsigned int *p = (unsigned int *)((VtOrigin *)this)->GetOrigin();
	org[0] = p[0];
	org[1] = p[1];
	org[2] = p[2];

	void (*msg)(const char *, const char *) = g_109f3628;
	int i;
	float *pv;
	for (i = 0, pv = m_vel3d4; i < 3; i++, pv++)
	{
		if ((*(unsigned int *)pv & g_1046a420) == g_1046a420)
		{
			msg(g_1053bf50, sub_1000ea11());
			*pv = 0;
		}
		if ((org[i] & g_1046a420) == g_1046a420)
		{
			msg(g_1053bf34, sub_1000ea11());
			org[i] = 0;
			((VtSet *)this)->SetOrigin((float *)org);
		}
		if (*pv > MAXV)
			*pv = MAXV;
		else if (*pv < -MAXV)
			*pv = -MAXV;
	}
	*g_109f3680 = *g_109f3680 - 1;
}
// END FUNCTION

// FUNCTION: 0x10042d00 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8c_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8c_t::sub_10042d00
	void sub_10042d00(int num);
};

void CMem8c_t::sub_10042d00(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10043010 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8d_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8d_t::sub_10043010
	void sub_10043010(int num);
};

void CMem8d_t::sub_10043010(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10043320 size=0x67
struct Mem8 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_10043320
void __fastcall sub_10043320(Mem8 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 4;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 3);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10043630 size=0x67
struct Mem8 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_10043630
void __fastcall sub_10043630(Mem8 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 4;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 3);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x100436c0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100436c0(int num);
};

void CUtlMemory20::sub_100436c0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x10043750 size=0x6a
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S10043750 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_10043750(int num);
};
// TARGET: S10043750::sub_10043750
void S10043750::sub_10043750(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 2;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x14);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x14);
}
// END FUNCTION

// FUNCTION: 0x100437e0 size=0x6a
#include "CUnknown100437e0.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned long size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, unsigned long size);

void CUnknown100437e0::sub_100437e0(int num)
{
	if (m_nGrowSize == -1)
		return;

	int nAllocationRequested = m_nAllocationCount + num;
	if (m_nAllocationCount < nAllocationRequested)
	{
		do
		{
			if (m_nAllocationCount)
			{
				if (m_nGrowSize)
					m_nAllocationCount += m_nGrowSize;
				else
					m_nAllocationCount += m_nAllocationCount;
			}
			else
				m_nAllocationCount = 2;
		} while (m_nAllocationCount < nAllocationRequested);
	}

	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x10043870 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory20 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10043870(int num);
};

void CUtlMemory20::sub_10043870(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 20);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 20);
}
// END FUNCTION

// FUNCTION: 0x10045110 size=0x1c9
struct Node8 { int key; int val; };
struct Links_t { unsigned short left, right, parent, tag; };
struct RBNode { Links_t links; Node8 data; };
typedef bool (*LessFunc_t)(const Node8 &, const Node8 &);
extern RBNode *g_109f0b6c;
extern RBNode *g_109f0b64;
extern unsigned char g_109f0b68;
extern Links_t g_106bdb50;

struct Tree1
{
	LessFunc_t m_LessFunc;
	RBNode *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	unsigned short m_Root, m_NumElements, m_FirstFree, m_pad;
	RBNode *m_pElements;

	Links_t &sub_10048960(unsigned short i);
	void sub_100489e0(unsigned short i);

	unsigned short Find(const Node8 &n)
	{
		if (m_pElements)
			g_109f0b6c = m_pElements;
		unsigned short i = m_Root;
		while (i != 0xffff)
		{
			if (m_LessFunc(n, m_pMemory[i].data))
				i = sub_10048960(i).left;
			else if (m_LessFunc(m_pMemory[i].data, n))
				i = sub_10048960(i).right;
			else
				return i;
		}
		return 0xffff;
	}
	bool Remove(int key)
	{
		Node8 n;
		n.key = key;
		unsigned short i = Find(n);
		if (i == 0xffff)
			return false;
		sub_100489e0(i);
		m_pMemory[i].links.left = i;
		m_pMemory[i].links.right = m_FirstFree;
		m_FirstFree = i;
		m_NumElements--;
		return true;
	}
};

struct Tree2
{
	LessFunc_t m_LessFunc;
	RBNode *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	unsigned short m_Root, m_NumElements, m_FirstFree, m_pad;
	RBNode *m_pElements;

	Links_t &sub_100492b0(unsigned short i);
	void sub_10049330(unsigned short i);

	const Links_t &Links(unsigned short i)
	{
		if (!(g_109f0b68 & 1))
		{
			g_109f0b68 |= 1;
			g_106bdb50.tag = 1;
			g_106bdb50.left = 0xffff;
			g_106bdb50.right = 0xffff;
			g_106bdb50.parent = 0xffff;
		}
		return (i != 0xffff) ? m_pMemory[i].links : g_106bdb50;
	}

	unsigned short Find(const Node8 &n)
	{
		if (m_pElements)
			g_109f0b64 = m_pElements;
		unsigned short i = m_Root;
		while (i != 0xffff)
		{
			if (m_LessFunc(n, m_pMemory[i].data))
				i = sub_100492b0(i).left;
			else if (m_LessFunc(m_pMemory[i].data, n))
				i = Links(i).right;
			else
				return i;
		}
		return 0xffff;
	}
	bool Remove(int key)
	{
		Node8 n;
		n.key = key;
		unsigned short i = Find(n);
		if (i == 0xffff)
			return false;
		sub_10049330(i);
		m_pMemory[i].links.left = i;
		m_pMemory[i].links.right = m_FirstFree;
		m_FirstFree = i;
		m_NumElements--;
		return true;
	}
};

class CUnknown10045110
{
public:
	char pad0[0x40];
	Tree1 m_Tree1;
	Tree2 m_Tree2;

	void sub_10045110(int key);
};

void CUnknown10045110::sub_10045110(int key)
{
	if (m_Tree1.Remove(key))
		return;
	m_Tree2.Remove(key);
}
// END FUNCTION

// FUNCTION: 0x10046050 size=0x1d0
struct Vec { int x, y, z; void sub_1003e4b0(const Vec &o); };
struct Box {
	Vec a, b;
	void sub_100462d0(const Box &o);
	void Assign(const Box &o) { a.sub_1003e4b0(o.a); b.sub_1003e4b0(o.b); }
};
struct Hdr {
	int a0, a1, a2, a3, a4; Box box; int c, d;
	void sub_10047190(const Hdr &o);
	void Assign(const Hdr &o) { a0 = o.a0; a1 = o.a1; a2 = o.a2; a3 = o.a3; a4 = o.a4; box.Assign(o.box); c = o.c; d = o.d; }
	void Assign2(const Hdr &o) { a0 = o.a0; a1 = o.a1; a2 = o.a2; a3 = o.a3; a4 = o.a4; box.sub_100462d0(o.box); c = o.c; d = o.d; }
	void Assign3(const Hdr &o) { a0 = o.a0; a1 = o.a1; a2 = o.a2; a3 = o.a3; a4 = o.a4; box.a.x = o.box.a.x; box.a.y = o.box.a.y; box.a.z = o.box.a.z; box.b.sub_1003e4b0(o.box.b); c = o.c; d = o.d; }
};
struct Elem {
	Hdr h; int p;
	void sub_100462a0();
	void CopyFrom(const Elem &o) { h.sub_10047190(o.h); p = o.p; }
	void Assign(const Elem &o) { h.Assign(o.h); p = o.p; }
	void Assign2(const Elem &o) { h.Assign2(o.h); p = o.p; }
	void Assign3(const Elem &o) { h.Assign3(o.h); p = o.p; }
};

struct PQ {
	Elem *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	int m_Size;
	Elem *m_pElements;
	bool (*m_LessFunc)(const Elem &, const Elem &);
	void sub_10049da0(int num);
	void sub_10047200(int elem, int num);
	void GrowVector(int num = 1)
	{
		if (m_Size + num > m_nAllocationCount)
			sub_10049da0(m_Size + num - m_nAllocationCount);
		m_Size += num;
		m_pElements = m_pMemory;
	}
	int InsertBefore(int elem)
	{
		GrowVector();
		sub_10047200(elem, 1);
		Elem *e = &m_pMemory[elem];
		if (e)
			e->sub_100462a0();
		return elem;
	}
	int AddToTail() { return InsertBefore(m_Size); }
	Elem &Element(int i) { return m_pMemory[i]; }
	void Swap(int i1, int i2)
	{
		Elem tmp;
		tmp.CopyFrom(Element(i1));
		Element(i1).Assign2(Element(i2));
		Element(i2).Assign3(tmp);
	}
	void sub_10046050(const Elem &src);
};

void PQ::sub_10046050(const Elem &src)
{
	int index = AddToTail();
	Element(index).Assign(src);

	while (index != 0) {
		Elem *base = m_pMemory;
		int parent = (index + 1) / 2 - 1;
		if (m_LessFunc(base[index], base[parent]))
			break;
		Swap(parent, index);
		index = parent;
	}
}
// END FUNCTION

// FUNCTION: 0x10049da0 size=0x76
struct Elem { char data[0x38]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

void __fastcall sub_10049da0(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_109f3638(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_109f3634(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x1004add0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16_t::sub_1004add0
	void sub_1004add0(int num);
};

void CMem16_t::sub_1004add0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x1004b990 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16b_t::sub_1004b990
	void sub_1004b990(int num);
};

void CMem16b_t::sub_1004b990(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x10050170 size=0x52
struct ISaveRestoreOps;
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
extern int g_1053d31c[2];
void sub_1000bcfd();

int *sub_10050170()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_swapModel", {0x468, 0}, 1, 0x6, "swapmodel" },
        { 5, "m_makeDebris", {0x46c, 0}, 1, 0x6, "makedebris" },
        { 5, "m_makePhyshandTarget", {0x46d, 0}, 1, 0x6, "make_physhand_target" },
        { 0, "InputConvertTarget", {0x0, 0}, 1, 0x8, "ConvertTarget", 0, (void *)sub_1000bcfd },
        { 10, "m_OnConvert", {0x450, 0}, 1, 0x16, "OnConvert", g_1055dc70 },
    };
    g_1053d31c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1053d31c[0] = (int)&dataDesc[1];
    return g_1053d31c;
}
// END FUNCTION

// FUNCTION: 0x10050860 size=0xd
#include "CUnknown10050860.h"

extern char g_1053e044[];

const char *CUnknown10050860::sub_10050860()
{
	if (m_pszName)
		return m_pszName;
	return g_1053e044;
}
// END FUNCTION

// FUNCTION: 0x10055ec0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10055ec0(int num);
};

// TARGET: UtlMem::sub_10055ec0
void UtlMem::sub_10055ec0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x10057660 size=0xc
CUnknown10057680 *CUnknown10057680::sub_10057660()
{
	sub_10057680();
	return this;
}
// END FUNCTION

// FUNCTION: 0x10057680 size=0xe
void CUnknown10057680::sub_10057680()
{
	m_unk0 = 0;
	m_unk4 = 0;
}
// END FUNCTION

// FUNCTION: 0x10057850 size=0x6d
struct IVisitor { virtual void v0(); virtual void v1(); virtual void v2(); virtual int v3(const char *name, void *data, int a, void *desc, int n); };
extern char g_1053fdd4[];
extern char g_1053fdcc[];
extern char g_1053fc54[];
extern char g_1053fc80[];
struct ListNode { char pad[0x64]; ListNode *next; };
struct SaveList {
    ListNode *head;
    int count;
    int sub_10057850(IVisitor *v);
};
int SaveList::sub_10057850(IVisitor *v)
{
    if (!v->v3(g_1053fdd4, this, 0, g_1053fc54, 1))
        return 0;
    ListNode *p = head;
    for (int i = 0; i < count && p; i++) {
        if (!v->v3(g_1053fdcc, p, 0, g_1053fc80, 3))
            return 0;
        p = p->next;
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10057f70 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100012e4(GP *);
extern int vt_1044d614;
extern char g_105403c4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: env_steam
extern "C" GP *env_steam()
{
	GP *p = (GP *)sub_1000db89(0x474);
	if (p) {
		sub_100012e4(p);
		*(int **)p = &vt_1044d614;
	} else {
		p = 0;
	}
	p->name(g_105403c4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10057fe0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100012e4(GP *);
extern int vt_1044d614;
extern char g_105403d0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: env_steamjet
extern "C" GP *env_steamjet()
{
	GP *p = (GP *)sub_1000db89(0x474);
	if (p) {
		sub_100012e4(p);
		*(int **)p = &vt_1044d614;
	} else {
		p = 0;
	}
	p->name(g_105403d0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10058200 size=0xd
// TARGET: CUnknown10058200::sub_10058200
void CUnknown10058200::sub_10058200(int unused)
{
	m_unk468 = 1;
}
// END FUNCTION

// FUNCTION: 0x10058220 size=0xd
void CUnknown10058220::sub_10058220(int unused)
{
	m_unk468 = 0;
}
// END FUNCTION

// FUNCTION: 0x1006cc20 size=0x79
int sub_10431c2f(char *, const char *, ...);
void sub_10203dd0(char *);
extern char g_106b8540[];
struct Dump {
    char pad[8];
    const char *m_pName;
    char pad2[0x10 - 0xc];
    int m_nCount;
    float *m_pValues;
    void sub_1006cc20();
};

void Dump::sub_1006cc20()
{
    char buf[128];
    sub_10431c2f(buf, "\n\t%s:\n", m_pName ? m_pName : g_106b8540);
    sub_10203dd0(buf);
    for (int i = 0; i < m_nCount; i++) {
        sub_10431c2f(buf, "(%d):\t\t%8.3f\n", i, m_pValues[i]);
        sub_10203dd0(buf);
    }
}
// END FUNCTION

// FUNCTION: 0x1006ccc0 size=0xd
CUnknown1006ccc0 *CUnknown1006ccc0::sub_1006ccc0()
{
	m_unk0 = 0;
	m_unk4 = 0;
	m_unk8 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1006cd00 size=0x66
struct Elem1006cd00 { void sub_10002d10(); };
struct S1006cd00 {
    int m0;
    int m4;
    Elem1006cd00 **m8;
    void sub_1006cd00();
};
// TARGET: S1006cd00::sub_1006cd00
void S1006cd00::sub_1006cd00()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem1006cd00 *e = m8[i];
            if (e) {
                e->sub_10002d10();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x1006e890 size=0xe
bool CUnknown1006e890::sub_1006e890()
{
	return m_unk638 != 0;
}
// END FUNCTION

// FUNCTION: 0x1006ed20 size=0xd
void CUnknown1006ed20::sub_1006ed20(int value)
{
	m_unk594 = value;
}
// END FUNCTION

// FUNCTION: 0x100732b0 size=0xd
void CUnknown100732b0::sub_100732b0(char value)
{
	m_unk178 = value;
}
// END FUNCTION

// FUNCTION: 0x100732f0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem5 {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100732f0(int num);
};

// TARGET: UtlMem5::sub_100732f0
void UtlMem5::sub_100732f0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100737b0 size=0x9
struct CUnknown100737b0 { int m_val; void sub_100737b0(int v); };
void CUnknown100737b0::sub_100737b0(int v) { m_val = v; }
// END FUNCTION

// FUNCTION: 0x100737d0 size=0xd
#include "CUnknown100737d0.h"

void CUnknown100737d0::sub_100737d0(char value)
{
	m_bFlag98 = value;
}
// END FUNCTION

// FUNCTION: 0x100738e0 size=0xd
// TARGET: CUnknown100738e0::sub_100738e0
void CUnknown100738e0::sub_100738e0(int value)
{
	m_unk80 = value;
}
// END FUNCTION

// FUNCTION: 0x10073920 size=0xd
#include "CUnknown10073920.h"

void CUnknown10073920::sub_10073920(int value)
{
	m_unk84 = value;
}
// END FUNCTION

// FUNCTION: 0x10073a30 size=0xd
void CUnknown10073a30::sub_10073a30(char value)
{
	m_bFlag88 = value;
}
// END FUNCTION

// FUNCTION: 0x10073b20 size=0xd
// TARGET: CUnknown10073b20::sub_10073b20
void CUnknown10073b20::sub_10073b20(int value)
{
	m_unk80 = value;
}
// END FUNCTION

// FUNCTION: 0x10073b60 size=0xd
void CUnknown10073b60::sub_10073b60(int value)
{
	m_unk84 = value;
}
// END FUNCTION

// FUNCTION: 0x10073f40 size=0xa
struct CUnknown10073f40 { char p[0x4c]; int a; void sub_10073f40(int v); };
// TARGET: CUnknown10073f40::sub_10073f40
void CUnknown10073f40::sub_10073f40(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10074050 size=0xd
extern char g_106b8540[];

const char *CUnknown10074050::sub_10074050()
{
	if (m_unk4 == 0)
		return g_106b8540;
	return m_unk4;
}
// END FUNCTION

// FUNCTION: 0x10074070 size=0xe
#include "CUnknown10074070.h"
// TARGET: CUnknown10074070::sub_10074070
int CUnknown10074070::sub_10074070(int index)
{
	return m_records[index].m_value;
}
// END FUNCTION

// FUNCTION: 0x100740f0 size=0xa
struct CUnknown100740f0 { int p[2]; char a; void sub_100740f0(char v); };
// TARGET: CUnknown100740f0::sub_100740f0
void CUnknown100740f0::sub_100740f0(char v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10074a30 size=0xa
void CUnknown10074a30::sub_10074a30(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x10074a70 size=0xa
struct CUnknown10074a70 { int p[3]; int a; void sub_10074a70(int v); };
// TARGET: CUnknown10074a70::sub_10074a70
void CUnknown10074a70::sub_10074a70(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10074a90 size=0xa
struct CUnknown10074a90 { int p[4]; int a; void sub_10074a90(int v); };
// TARGET: CUnknown10074a90::sub_10074a90
void CUnknown10074a90::sub_10074a90(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10075ce0 size=0xd
#include "CUnknown10077730.h"

void CUnknown10077730::sub_10075ce0(char value)
{
	m_bFlag33c = value;
}
// END FUNCTION

// FUNCTION: 0x10076670 size=0xd
void CUnknown10076670::sub_10076670(int value)
{
	m_unk2b4 = value;
}
// END FUNCTION

// FUNCTION: 0x100766b0 size=0xd
void CUnknown10076670::sub_100766b0(int value)
{
	m_unk2b8 = value;
}
// END FUNCTION

// FUNCTION: 0x100766f0 size=0xd
void CUnknown100766f0::sub_100766f0(int value)
{
	m_unk324 = value;
}
// END FUNCTION

// FUNCTION: 0x10076ad0 size=0xd
#include "CUnknown10077730.h"

void CUnknown10077730::sub_10076ad0(char value)
{
	m_bFlag198 = value;
}
// END FUNCTION

// FUNCTION: 0x10076af0 size=0xd
void CUnknown10076af0::sub_10076af0(char value)
{
	m_unk1b0 = value;
}
// END FUNCTION

// FUNCTION: 0x10077730 size=0xd
#include "CUnknown10077730.h"

void CUnknown10077730::sub_10077730(char value)
{
	m_bFlag320 = value;
}
// END FUNCTION

// FUNCTION: 0x10077890 size=0xd
void CUnknown10077890::sub_10077890(int value)
{
	m_unk32c = value;
}
// END FUNCTION

// FUNCTION: 0x100779b0 size=0xd
void CUnknown100779b0::sub_100779b0(int value)
{
	m_unk330 = value;
}
// END FUNCTION

// FUNCTION: 0x100784b0 size=0xd
void CUnknown10077730::sub_100784b0(float value)
{
	m_flSequenceDuration = value;
}
// END FUNCTION

// FUNCTION: 0x10078540 size=0xd
void CUnknown10078540::sub_10078540(int value)
{
	m_unk334 = value;
}
// END FUNCTION

// FUNCTION: 0x10078580 size=0xd
void CUnknown10078540::sub_10078580(int value)
{
	m_unk338 = value;
}
// END FUNCTION

// FUNCTION: 0x100785f0 size=0xd
void CUnknown10078540::sub_100785f0(int value)
{
	m_unk194 = value;
}
// END FUNCTION

// FUNCTION: 0x10078860 size=0xb
void __fastcall sub_10078860(char *self)
{
	*(int *)(self + 0x1a8) = 0;
}
// END FUNCTION

// FUNCTION: 0x10078b10 size=0x8
void __fastcall sub_10078b10(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10078b70 size=0x8
void __fastcall sub_10078b70(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10078bd0 size=0x8
void __fastcall sub_10078bd0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10078c30 size=0x8
void __fastcall sub_10078c30(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10078fd0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10078fd0(int num);
};

void CUtlMemory12::sub_10078fd0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x10079060 size=0x73
#include "CUnknown10079060.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown10079060::sub_10079060(int num)
{
    if (m_growSize == -1)
        return;
    int newAlloc = m_allocationCount;
    int target = num + newAlloc;
    if (newAlloc < target) {
        do {
            if (newAlloc != 0) {
                if (m_growSize != 0)
                    newAlloc += m_growSize;
                else
                    newAlloc += newAlloc;
            } else
                newAlloc = 1;
        } while (newAlloc < target);
        m_allocationCount = newAlloc;
    }
    if (m_pMemory)
        m_pMemory = (char *)g_109f3638(m_pMemory, m_allocationCount * 0x8c);
    else
        m_pMemory = (char *)g_109f3634(m_allocationCount * 0x8c);
}
// END FUNCTION

// FUNCTION: 0x10079100 size=0x72
struct Elem { char data[0x88]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

void __fastcall sub_10079100(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_109f3638(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_109f3634(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x100791a0 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_100791a0
void __fastcall sub_100791a0(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x100792c0 size=0xa
void CUnknown100792c0::sub_100792c0(int value)
{
	m_unk8 = value;
}
// END FUNCTION

// FUNCTION: 0x100792e0 size=0xa
void CUnknown100792c0::sub_100792e0(int value)
{
	m_unk4 = value;
}
// END FUNCTION

// FUNCTION: 0x10079450 size=0x6e
struct Obj {
    int f[30];
    void sub_10079910(int a);
    Obj *sub_10079450(int a);
};

Obj *Obj::sub_10079450(int a)
{
    f[0] = 0; f[1] = 0; f[2] = 0; f[3] = 0; f[4] = 0; f[5] = 0; f[6] = 0; f[7] = 0;
    f[8] = 0; f[9] = 0; f[10] = 0; f[11] = 0; f[12] = 0; f[13] = 0; f[14] = 0; f[15] = 0;
    f[16] = 0; f[17] = 0; f[18] = 0; f[19] = 0; f[20] = 0; f[21] = 0; f[22] = 0; f[23] = 0;
    f[24] = 0; f[25] = 0; f[26] = 0; f[27] = 0; f[28] = 0; f[29] = 0;
    sub_10079910(a);
    return this;
}
// END FUNCTION

// FUNCTION: 0x10079910 size=0x71
struct Obj {
    char pad0[0x78];
    float f78;
    int f7c;
    int f80;
    int f84;
    int f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    char fac;
    char pad1[0x12c - 0xad];
    char f12c;
    char f12d;
    char pad2[2];
    int f130;
};

void __fastcall sub_10079910(Obj *self, int, int a)
{
    self->fa8 = 0;
    self->fac = 0;
    self->f7c = 0;
    self->f84 = 0;
    self->f88 = 0;
    self->f98 = 0;
    self->fa0 = 0;
    self->f9c = 0;
    self->f8c = 0;
    self->f90 = 0;
    self->f94 = 0;
    self->fa4 = a;
    self->f12c = 0;
    self->f130 = 0x3c;
    self->f12d = 0;
    self->f78 = -1.0f;
    self->f80 = 0;
}
// END FUNCTION

// FUNCTION: 0x10079b70 size=0xd
void CUnknown10079b70::sub_10079b70(int value)
{
	m_unkA4 = value;
}
// END FUNCTION

// FUNCTION: 0x1007dfc0 size=0xa
struct CUnknown1007dfc0 { char p[0x78]; int a; void sub_1007dfc0(int v); };
// TARGET: CUnknown1007dfc0::sub_1007dfc0
void CUnknown1007dfc0::sub_1007dfc0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x1007dfe0 size=0xd
void CUnknown1007dfe0::sub_1007dfe0(int value)
{
	m_unkA0 = value;
}
// END FUNCTION

// FUNCTION: 0x1007e580 size=0x8
void __fastcall sub_1007e580(int *p) { p[0x5c / 4] = 0; }
// END FUNCTION

// FUNCTION: 0x1007e5a0 size=0xd
#include "CUnknown1007e5a0.h"

void CUnknown1007e5a0::sub_1007e5a0(float value)
{
	m_fUnk98 = value;
}
// END FUNCTION

// FUNCTION: 0x1007ecf0 size=0xd
void CUnknown1007ecf0::sub_1007ecf0(char value)
{
	m_unk12c = value;
}
// END FUNCTION

// FUNCTION: 0x1007ed50 size=0xd
void CUnknown1007ecf0::sub_1007ed50(int value)
{
	m_unk130 = value;
}
// END FUNCTION

// FUNCTION: 0x1007ed90 size=0xd
void CUnknown1007ed90::sub_1007ed90(char value)
{
	m_bFlag12d = value;
}
// END FUNCTION

// FUNCTION: 0x1007ee00 size=0x8
void __fastcall sub_1007ee00(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1007ee20 size=0x8
void __fastcall sub_1007ee20(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1007ee40 size=0x8
void __fastcall sub_1007ee40(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1007f580 size=0x67
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S1007f580 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_1007f580(int num);
};
// TARGET: S1007f580::sub_1007f580
void S1007f580::sub_1007f580(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 8;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount << 2);
    else
        m_pMemory = g_109f3634(m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x1007fce0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem6 {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1007fce0(int num);
};

// TARGET: UtlMem6::sub_1007fce0
void UtlMem6::sub_1007fce0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x10080750 size=0xa
void CUnknown10080750::sub_10080750(int value)
{
	m_unk4 = value;
}
// END FUNCTION

// FUNCTION: 0x10081e50 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2();
	virtual void target();
};

void __fastcall sub_10081e50(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10081e70 size=0xb
void CUnknown10081e70::sub_10081e70(int unused)
{
	vfunc244();
}
// END FUNCTION

// FUNCTION: 0x10081e90 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void target();
};

void __fastcall sub_10081e90(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10081eb0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
	virtual void target();
};

void __fastcall sub_10081eb0(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10082e40 size=0xe
bool CUnknown10082e40::sub_10082e40()
{
	return m_unk4bc != 0;
}
// END FUNCTION

// FUNCTION: 0x10083960 size=0xa
struct CUnknown10083960 { int p; int a; void sub_10083960(int v); };
// TARGET: CUnknown10083960::sub_10083960
void CUnknown10083960::sub_10083960(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x1008b490 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void __fastcall sub_1008b490(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseAnimating::UseClientSideAnimation";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    self[0x70c] = 1;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1008d0f0 size=0x7e
#include "CBaseAnimating.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseAnimating::sub_1008d0f0(float scalar)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseAnimating::SetGroundSpeedScalar";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *(float *)((char *)this + 0x564) = scalar;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100903e0 size=0x82
#include "CBaseAnimating.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

char CBaseAnimating::sub_100903e0()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseAnimating::IsRagdoll", n);
    return *(int *)((char *)this + 0x168) == 0x17;
}
// END FUNCTION

// FUNCTION: 0x10090b20 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void __fastcall sub_10090b20(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseAnimating::RepositionOnAnimationExit";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    self[0x5b4] = 1;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10091c80 size=0x6f
#include "CBaseAnimating.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1054f8a4[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseAnimating::sub_10091c80()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1054f8a4;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100945e0 size=0x9f
#include "CBaseAnimating.h"

struct ScopeTraceEntry_10094 { const char *a; const char *b; const char *c; };
extern ScopeTraceEntry_10094 *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseAnimating::sub_100945e0(int index)
{
	const char *name;
	if (this != 0)
	{
		name = *(const char **)((char *)this + 0x26c);
		if (name == 0)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::GetFlexDescFacs";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char *hdr = (char *)sub_100952d0(-1);
	if (hdr == 0)
	{
		(*g_109f3680)--;
		return 0;
	}
	int *p = (int *)(hdr + *(int *)(hdr + 0x15c) + index * 4);
	int r = *p + (int)p;
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10096490 size=0x7e
#include "CBaseAnimating.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105503cc[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseAnimating::sub_10096490(int set)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_105503cc;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x680) = set;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10096600 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_10096600(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseAnimating::GetHitboxSet";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x680);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10098810 size=0xb
CUnknown10098810 *CUnknown10098810::sub_10098810()
{
	m_unk14 = 0;
	m_unk4 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10099ca0 size=0x76
struct TraceEnt { const char *a; const char *b; const char *c; };
struct AnimEnt { char pad[0x174]; float m_animtime; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10554b0c[];
extern char g_106b8540[];
extern float g_10450564;
void sub_10099ca0(AnimEnt *ent, int unused, unsigned int *out)
{
    g_109f3620[*g_109f3680].a = g_10554b0c;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    float t = ent->m_animtime;
    *out = (int)(t * g_10450564) & 0xff;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10099d40 size=0x84
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct SAnimating { char pad[0x70c]; char m_bClientSideAnimation; };

struct SEntV137 {
    S100(a)
    S10(b0) S10(b1) S10(b2)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
    virtual void c5(); virtual void c6();
    virtual SAnimating *v137();
};

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int sub_10099d40(SEntV137 *ent, int value)
{
    CScopeGuard guard("SendProxy_ClientSideAnimation");
    SAnimating *anim = ent->v137();
    if (anim && !anim->m_bClientSideAnimation)
        return value;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1009a030 size=0x68
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_10554b80[];
extern char g_106b8540[];

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); \
	virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct TEnt {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i)
	virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3();
	virtual int v94();
};

void sub_1009a030(TEnt *ent, int unused, int *out)
{
	g_109f3620[*g_109f3680].name = g_10554b80;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	*out = ent->v94();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009a0c0 size=0x68
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_10554b98[];
extern char g_106b8540[];

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); \
	virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct TEnt {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i)
	virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3(); virtual void j4();
	virtual int v95();
};

void sub_1009a0c0(TEnt *ent, int unused, int *out)
{
	g_109f3620[*g_109f3680].name = g_10554b98;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	*out = ent->v95();
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1009b440 size=0x83
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern void (*g_109f3630)(const char *fmt, ...);

void CBaseEntity::sub_1009b440(const char *msg)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::TraceMessageBareBase";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    if (msg)
        g_109f3630(msg);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1009f200 size=0x85
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

const char *CBaseEntity::sub_1009f200()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseEntity::GetClassname", n);
    const char *s = *(const char **)((char *)this + 0x11c);
    return s ? s : g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x1009fa60 size=0x6f
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::sub_1009fa60()
{
    const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::DrawRBoxOverlay";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100a6bb0 size=0x76
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100a6bb0(char *self, int, int a)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::Intersects";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100a8220 size=0xa
unsigned int CUnknown100a8220::sub_100a8220()
{
	return m_nFlags & 2;
}
// END FUNCTION

// FUNCTION: 0x100a8bf0 size=0x7c
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100a8bf0(int a)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::InputScriptHide";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    vfunc77();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a8c90 size=0x7c
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1055683c[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseEntity::sub_100a8c90(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1055683c;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    vfunc78();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a9080 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100a9080(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetFakeSilence";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0x104);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100a91f0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100a91f0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::IsNPCTransparent";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0xfc);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100a9290 size=0x7e
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10556984[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseEntity::sub_100a9290(char value)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10556984;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *((char *)this + 0xfc) = value;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100a9330 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100a9330(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::BlocksTraces";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0xfd);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100a93d0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100a93d0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::OccludesSound";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0xfe);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100a9470 size=0x7e
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100a9470(char value)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::SetOccludesSound";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *((char *)this + 0xfe) = value;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100aa720 size=0x6a
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_10556c1c[];
extern char g_106b8540[];

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); \
	virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct TIface {
	V10(a) V10(b) V10(c) V10(d)
	virtual void e0(); virtual void e12(); virtual void e2(); virtual void e3(); virtual void e4();
	virtual int v45(int a);
};
extern TIface *g_1070b22c;

int sub_100aa720(int a)
{
	g_109f3620[*g_109f3680].name = g_10556c1c;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	int r = g_1070b22c->v45(a);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x100aa7b0 size=0x69
struct SScope { const char *a; const char *b; const char *c; };
struct SMem { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
 virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
 virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(void *p); };
extern "C" __declspec(dllimport) SScope g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern char g_106b8540[];
extern SMem *g_1070b22c;
// TARGET: sub_100aa7b0
void sub_100aa7b0(void *p)
{
    g_ScopeTraceStack[g_ScopeTraceStackDepth].a = "CBaseEntity::operator delete";
    g_ScopeTraceStack[g_ScopeTraceStackDepth].b = g_106b8540;
    g_ScopeTraceStack[g_ScopeTraceStackDepth].c = g_106b8540;
    g_ScopeTraceStackDepth++;
    g_1070b22c->v46(p);
    g_ScopeTraceStackDepth--;
}
// END FUNCTION

// FUNCTION: 0x100abbf0 size=0x71
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100abbf0(int a, int b)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::DrawDebugCombatTextOverlay";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100acef0 size=0x7c
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100acef0(int a)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::InputKill";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    vfunc119();
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100adfd0 size=0x84
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct IModelSink {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
    virtual int PrecacheModel(const char *s, int n);
};
extern IModelSink *g_1070b22c;

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int CBaseEntity::sub_100adfd0(const char *name)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseEntity::PrecacheModel", n);
    return g_1070b22c->PrecacheModel(name, 0);
}
// END FUNCTION

// FUNCTION: 0x100ae090 size=0x83
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
struct ISoundSink { virtual int PrecacheSound(const char *s, int n); };
extern ISoundSink *g_1070b248;

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int CBaseEntity::sub_100ae090(const char *name)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseEntity::PrecacheSound", n);
    return g_1070b248->PrecacheSound(name, 0);
}
// END FUNCTION

// FUNCTION: 0x100b03b0 size=0x66
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_1055813c[];
extern char g_106b8540[];
extern char g_106cff51;

// TARGET: sub_100b03b0
void sub_100b03b0()
{
	g_109f3620[*g_109f3680].a = g_1055813c;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	g_106cff51 = g_106cff51 == 0;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100b0720 size=0x7d
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern int g_10552814;

#define E10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct IEngine {
    E10(a0) E10(a1) E10(a2) E10(a3) E10(a4) E10(a5) E10(a6) E10(a7)
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
    virtual const char *Cmd_Argv(int n);
};
extern IEngine *g_1070b22c;
int sub_10431447(const char *);

void sub_100b0720()
{
    g_109f3620[*g_109f3680].name = "CC_Ent_Step";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    int steps = sub_10431447(g_1070b22c->Cmd_Argv(1));
    if (steps <= 0)
        steps = 1;
    g_10552814 = steps;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b1380 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_100b1380(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetSentLastFrame";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0x380);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100b3700 size=0x79
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558e58[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseEntity::sub_100b3700()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558e58;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int v = *(int *)((char *)this + 0x434);
    --*g_109f3680;
    return v;
}
// END FUNCTION

// FUNCTION: 0x100b37a0 size=0x7c
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558e74[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseEntity::sub_100b37a0()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558e74;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x434) = 0;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b39c0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_100b39c0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::GetFlags2";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x438);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100b3a60 size=0x7c
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100b3a60()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::ClearFlags2";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x438) = 0;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b3b00 size=0x6f
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseEntity::sub_100b3b00()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseEntity::Relink";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b40f0 size=0x71
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10558ffc[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseEntity::sub_100b40f0(int a)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_10558ffc;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x100b4280 size=0x71
#include "CBaseEntity.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void __fastcall sub_100b4280(CBaseEntity *self, int, int a)
{
    const char *name = self ? (self->m_name26c ? self->m_name26c : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseEntity::AddContext";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100b47e0 size=0x8
void __fastcall sub_100b47e0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x100b4950 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_100b4950(); };
void CUtlVectorBase::sub_100b4950() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x100b49b0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem16c_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem16c_t::sub_100b49b0
	void sub_100b49b0(int num);
};

void CMem16c_t::sub_100b49b0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 2;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 4);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x100b4a40 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem3 {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100b4a40(int num);
};

// TARGET: UtlMem3::sub_100b4a40
void UtlMem3::sub_100b4a40(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100b4e80 size=0xa
extern int g_106cff54;
// TARGET: sub_100b4e80
void sub_100b4e80(int v) { g_106cff54 = v; }
// END FUNCTION

// FUNCTION: 0x100b6510 size=0x7f
extern "C" unsigned strlen(const char *);
extern void (*g_109f3890)(char *dest, const char *src, int count);

void sub_100b6510(const char *in, char *out)
{
    int len = strlen(in);
    int end = len - 1;
    while (end && in[end] != '.' && in[end] != '/' && in[end] != '\\')
        end--;
    if (in[end] != '.')
        end = len - 1;
    else
        end--;
    int start = len - 1;
    while (start >= 0 && in[start] != '/' && in[start] != '\\')
        start--;
    if (start >= 0 && (in[start] == '/' || in[start] == '\\'))
        start++;
    else
        start = 0;
    g_109f3890(out, &in[start], end - start + 2);
}
// END FUNCTION

// FUNCTION: 0x100b68d0 size=0x6a
struct TRandom {
	virtual void v0();
	virtual void v1();
	virtual int RandomInt(int lo, int hi);
};
extern TRandom *g_1070b244;

struct TItem {
	int a;
	int weight;
};

struct TSet {
	char pad0[4];
	int type;
	int count;
	char pad0c[4];
	int selected;
	int offset;

	TItem *Get(int i)
	{
		if (type == 1 && i >= 0 && i < count)
			return (TItem *)((char *)this + offset + i * 8);
		return 0;
	}
};

void sub_100b68d0(int unused, TSet *s)
{
	if (s->type != 1)
		return;
	int chosen = 0;
	int total = 0;
	for (int i = 0; i < s->count; i++) {
		TItem *it = s->Get(i);
		if (it) {
			total += it->weight;
			if (total == 0 || g_1070b244->RandomInt(0, total - 1) < it->weight)
				chosen = i;
		}
	}
	s->selected = chosen;
}
// END FUNCTION

// FUNCTION: 0x100b7130 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_100b7130
void __fastcall sub_100b7130(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x100b7c60 size=0xa
void CUnknown100b7c60::sub_100b7c60(int value)
{
	m_unkc = value;
}
// END FUNCTION

// FUNCTION: 0x100b97e0 size=0x73
struct Vec3 { float x, y, z; };
struct Entry {
    Vec3 v;
    float f0c;
    float f10;
    char flag;
    char pad2[0x28 - 0x15];
};
struct Obj {
    char pad[0x740];
    int m_nCount;
    Entry m_Entries[10];
    void sub_100b97e0(const Vec3 *pos, float a, float b);
};

void Obj::sub_100b97e0(const Vec3 *pos, float a, float b)
{
    if (m_nCount < 10) {
        Vec3 *p = &m_Entries[m_nCount].v;
        p->x = pos->x;
        p->y = pos->y;
        p->z = pos->z;
        m_Entries[m_nCount].f0c = a;
        m_Entries[m_nCount].f10 = b;
        m_Entries[m_nCount].flag = 1;
        m_nCount++;
    }
}
// END FUNCTION

// FUNCTION: 0x100b99b0 size=0xd
void CUnknown100b99b0::sub_100b99b0(char value)
{
	m_unk8d4 = value;
}
// END FUNCTION

// FUNCTION: 0x100ba120 size=0xd
// TARGET: CUnknown100ba120::sub_100ba120
void CUnknown100ba120::sub_100ba120(char value)
{
	m_unk73c = value;
}
// END FUNCTION

// FUNCTION: 0x100bc380 size=0xc
extern void (*g_106d2a10)();
void sub_100bc380()
{
	if (g_106d2a10)
		g_106d2a10();
}
// END FUNCTION

// FUNCTION: 0x100bc3a0 size=0xa
extern int g_106d2a10;

void sub_100bc3a0(int value)
{
	g_106d2a10 = value;
}
// END FUNCTION

// FUNCTION: 0x100bc560 size=0x9
struct CUnknown100bc560 { int p[3]; int a; char b; void sub_100bc560(); };
// TARGET: CUnknown100bc560::sub_100bc560
void CUnknown100bc560::sub_100bc560() { a = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x100bc580 size=0xa
void CUnknown100bc580::sub_100bc580(char value)
{
	m_unk11 = value;
}
// END FUNCTION

// FUNCTION: 0x100bc5c0 size=0xa
void CUnknown100bc5c0::sub_100bc5c0(int value)
{
	m_unk14 = value;
}
// END FUNCTION

// FUNCTION: 0x100bc5e0 size=0xa
void __fastcall sub_100bc5e0(int *self, int, int value)
{
	self[3] = value;
}
// END FUNCTION

// FUNCTION: 0x100bdfe0 size=0x9
struct CUnknown100bdfe0 { int p[3]; int a; char b; void sub_100bdfe0(); };
// TARGET: CUnknown100bdfe0::sub_100bdfe0
void CUnknown100bdfe0::sub_100bdfe0() { a = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x100be000 size=0xa
void __fastcall sub_100be000(char *self, int, char value)
{
	self[0x11] = value;
}
// END FUNCTION

// FUNCTION: 0x100be040 size=0xa
void CUnknown100be040::sub_100be040(int value)
{
	m_unk14 = value;
}
// END FUNCTION

// FUNCTION: 0x100c0c60 size=0xd
void CUnknown100c0c60::sub_100c0c60(float value)
{
	value = 0.0f;
	sub_100c0970(value);
}
// END FUNCTION

// FUNCTION: 0x100c40e0 size=0x54
struct Elem_100c40e0 { char pad[0x88]; unsigned char flags; char pad2[3]; int type; char pad3[0xa0-0x90]; };
struct Base_100c40e0 { char pad[0xf4]; int offset; };
void sub_1001377d(Elem_100c40e0 *, int, int);
void sub_1000e7cd(Elem_100c40e0 *, int, int);
bool sub_100c40e0(Base_100c40e0 *p, int idx, int arg)
{
    Elem_100c40e0 *base = (Elem_100c40e0 *)((char *)p + p->offset);
    if (base[idx].flags & 1) {
        switch (base[idx].type) {
        case 1:
            sub_1000e7cd(base, idx, arg);
            return true;
        case 2:
            sub_1001377d(base, idx, arg);
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x100c6590 size=0xd
int sub_100c6590(int p)
{
	return *(int *)(p + 0x188) + p;
}
// END FUNCTION

// FUNCTION: 0x100c83a0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem4c_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem4c_t::sub_100c83a0
	void sub_100c83a0(int num);
};

void CMem4c_t::sub_100c83a0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 8;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 2);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x100c89e0 size=0xa
void __fastcall sub_100c89e0(char *self, int, int)
{
	self[0x5c4] = 1;
}
// END FUNCTION

// FUNCTION: 0x100c8a00 size=0xa
void __fastcall sub_100c8a00(char *self, int, int)
{
	self[0x5c4] = 0;
}
// END FUNCTION

// FUNCTION: 0x100c99b0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000f37b(GP *);
extern int vt_10452dcc;
extern char g_1055cb68[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_rot_button
extern "C" GP *func_rot_button()
{
	GP *p = (GP *)sub_1000db89(0x5d0);
	if (p) {
		sub_1000f37b(p);
		*(int **)p = &vt_10452dcc;
	} else {
		p = 0;
	}
	p->name(g_1055cb68);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100cd640 size=0xc
extern char g_106b8540[];
char *CUnknown100cd640::sub_100cd640()
{
	if (m_pString)
		return m_pString;
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x100cd7e0 size=0x69
extern int g_1055dc00, g_1055dc04, g_1055da88, g_1055da8c;

struct TSave {
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual int v3(const char *name, void *data, int a, int b, int c);
};

struct TOutput {
	char pad[0x14];
	TOutput *next0;
	char pad2[4];
	TOutput *next;
	int sub_100cd7e0(TSave *save);
};

int TOutput::sub_100cd7e0(TSave *save)
{
	if (!save->v3("Value", this, 0, g_1055dc00, g_1055dc04))
		return 0;
	for (TOutput *p = next0; p; p = p->next) {
		if (!save->v3("EntityOutput", p, 0, g_1055da88, g_1055da8c))
			return 0;
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100ce450 size=0x64
struct Node_t { char pad[0x38]; Node_t *next; };
struct CList_t {
	char pad0[0x38]; Node_t *m_pFirst; char pad1[0x18]; Node_t *m_pCur;
	unsigned char sub_100ce810(Node_t *n, void *ent, int *p);
	// TARGET: CList_t::sub_100ce450
	bool sub_100ce450(void *ent, int *p);
};

bool CList_t::sub_100ce450(void *ent, int *p)
{
	if (m_pCur && sub_100ce810(m_pCur, ent, p))
		return true;
	Node_t *n = m_pFirst;
	while (n) {
		if (sub_100ce810(n, ent, p)) {
			m_pCur = n;
			return true;
		}
		n = n->next;
	}
	m_pCur = 0;
	return false;
}
// END FUNCTION

// FUNCTION: 0x100ce4e0 size=0x64
struct CList_node;
struct CList_t {
    char pad0[0x38];
    CList_node *m_head;
    char pad1[0x54 - 0x3c];
    CList_node *m_cur;
    bool sub_100ce450(void *, int *);
    bool sub_100ce4e0(void *, int *);
};
struct CList_node {
    char pad[0x38];
    CList_node *next;
};
// TARGET: CList_t::sub_100ce4e0
bool CList_t::sub_100ce4e0(void *a, int *b)
{
    if (sub_100ce450(a, b) && m_cur) {
        CList_node *p = m_head;
        if (p != m_cur) {
            for (; p; p = p->next) {
                if (p->next == m_cur) {
                    p->next = m_cur->next;
                    goto done;
                }
            }
            return false;
        } else {
            m_head = m_cur->next;
        }
done:
        delete m_cur;
        m_cur = 0;
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x100ce810 size=0x65
struct Slot_t { void *pEnt; unsigned int serial; };
struct Entry_t { int unused; Slot_t slot; };
extern Entry_t *g_10566458;

struct Ev_t {
	char pad0[0x18]; unsigned int handle;
	char pad1[0x18]; int type;
	char pad2[0x8]; int a; int b; char pad3[4]; int c;
};

static inline void *Lookup(unsigned int h)
{
	if (h != 0xffffffff) {
		Slot_t *s = &g_10566458[h & 0x1fff].slot;
		if (s->serial == h >> 13)
			return s->pEnt;
	}
	return 0;
}

unsigned char __stdcall sub_100ce810(Ev_t *ev, void *ent, int *p)
{
	if (ev->type == 2) {
		if (Lookup(ev->handle) == ent && ev->a == p[0] && ev->b == p[1])
			return ev->c == p[3];
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100cfd00 size=0x77
struct SaveX {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int WriteFields(const char *name, void *base, void *data, void *desc, int n);
};
extern char g_1055dc74[];
extern char g_1055dca0[];
struct PEvent {
    char pad[0x38];
    PEvent *m_pNext;
};
struct Queue {
    char pad[0x38];
    PEvent *m_pNext;
    char pad2[0x50 - 0x3c];
    int m_Count;
    int sub_100cfd00(SaveX *save);
};

int Queue::sub_100cfd00(SaveX *save)
{
    PEvent *e = m_pNext;
    m_Count = 0;
    for (; e != 0; e = e->m_pNext)
        m_Count++;
    if (!save->WriteFields("EventQueue", this, 0, g_1055dc74, 1))
        return 0;
    for (e = m_pNext; e != 0; e = e->m_pNext) {
        if (!save->WriteFields("PEvent", e, 0, g_1055dca0, 12))
            return 0;
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100d6820 size=0x51
#define V(n) virtual void v##n();
#define V10(n) V(n##0) V(n##1) V(n##2) V(n##3) V(n##4) V(n##5) V(n##6) V(n##7) V(n##8) V(n##9)
struct I1070b22c {
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7)
    V(80) V(81) V(82) V(83)
    virtual int f84(int);
    virtual int f85();
};
struct H2 { void sub_1000a448(int); };
struct H1 { H2 *sub_10012ab2(); };
struct H0 { char pad[0xa8]; H1 *p; };
H0 *sub_10008d8c();
int sub_10431447(int);
extern I1070b22c *g_1070b22c;

void sub_100d6820()
{
    H0 *o = sub_10008d8c();
    if (o && o->p) {
        H1 *p = o->p;
        if (g_1070b22c->f85() == 2) {
            p->sub_10012ab2()->sub_1000a448(sub_10431447(g_1070b22c->f84(1)));
        }
    }
}
// END FUNCTION

// FUNCTION: 0x100db3f0 size=0x8
extern char g_106e7e91;
void sub_100db3f0() { g_106e7e91 = 1; }
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

// FUNCTION: 0x100ddf40 size=0xc
int *CUnknown100ddf40::sub_100ddf40(int index)
{
	return &m_pMemory[index];
}
// END FUNCTION

// FUNCTION: 0x100de610 size=0x8
void sub_100055b5();
void __stdcall sub_100de610(int) { sub_100055b5(); }
// END FUNCTION

// FUNCTION: 0x100dea90 size=0x9
void CUnknown100dea90::sub_100dea90(int value)
{
	m_unk0 = value;
}
// END FUNCTION

// FUNCTION: 0x100deb10 size=0xa
void __fastcall sub_100deb10(char *self, int, char value)
{
	self[8] = value;
}
// END FUNCTION

// FUNCTION: 0x100dec20 size=0x6a
#include "CUnknown100dec20.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown100dec20::sub_100dec20(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 3;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 12);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x100df010 size=0xe
struct S100df010 { int a, b, c, d; };

bool sub_100df010(S100df010 *p)
{
	return p->d == -1;
}
// END FUNCTION

// FUNCTION: 0x100df7b0 size=0x72
struct ICommandLine {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual int CheckParm(const char *name, const char **ppValue);
};
__declspec(dllimport) ICommandLine *CommandLine();

bool sub_100df7b0()
{
    static int s_bLogSpeech = CommandLine()->CheckParm("-log_speech_files", 0);
    if (s_bLogSpeech)
        return true;
    static int s_bDialogDebug = CommandLine()->CheckParm("-dialog_debug", 0);
    bool r = s_bDialogDebug != 0;
    return r;
}
// END FUNCTION

// FUNCTION: 0x100e09a0 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char *(*g_109f3890)(char *, const char *, int);
struct Dialog {
    char pad[0x33ad];
    char m_Name[0x104];
    void sub_100e09a0(const char *name);
};

void Dialog::sub_100e09a0(const char *name)
{
    g_109f3620[*g_109f3680].a = "CDialog::Acquire";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    g_109f3890(m_Name, name, 0x104);
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x100e7480 size=0x70
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct IDialog { virtual void v0(); virtual void v1(int a); };
extern IDialog *g_1070b238;

int __stdcall sub_100e7480(int a)
{
    g_109f3620[*g_109f3680].a = "CDialog::dclose";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    g_1070b238->v1(a);
    (*g_109f3680)--;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100e77f0 size=0x7d
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int sub_100e77f0(const int *a, const int *b)
{
    CScopeGuard guard("compare_lines");
    if (*a < *b)
        return -1;
    if (*a == *b)
        return 0;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100eb130 size=0x8
void __fastcall sub_100eb130(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x100eb280 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem2 {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100eb280(int num);
};

// TARGET: UtlMem2::sub_100eb280
void UtlMem2::sub_100eb280(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x100eb310 size=0x72
#include "CUnknown100eb310.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown100eb310::sub_100eb310(int num)
{
    if (m_growSize == -1)
        return;
    int newAlloc = m_allocationCount;
    int target = num + newAlloc;
    if (newAlloc < target) {
        do {
            if (newAlloc != 0) {
                if (m_growSize != 0)
                    newAlloc += m_growSize;
                else
                    newAlloc += newAlloc;
            } else
                newAlloc = 1;
        } while (newAlloc < target);
        m_allocationCount = newAlloc;
    }
    if (m_pMemory)
        m_pMemory = (char *)g_109f3638(m_pMemory, m_allocationCount * 0x1004);
    else
        m_pMemory = (char *)g_109f3634(m_allocationCount * 0x1004);
}
// END FUNCTION

// FUNCTION: 0x100eb3b0 size=0x8
void __fastcall sub_100eb3b0(int *p) { p[4] = 0; }
// END FUNCTION

// FUNCTION: 0x100eb400 size=0x8
void __fastcall sub_100eb400(int *p) { p[4] = 0; }
// END FUNCTION

// FUNCTION: 0x100eb420 size=0x9
struct CUnknown100eb420 { int pad[4]; int m_p; bool sub_100eb420(); };
bool CUnknown100eb420::sub_100eb420() { if (m_p != 0) return true; return false; }
// END FUNCTION

// FUNCTION: 0x100ecc60 size=0x6d
struct Entry { char pad[0x244]; int vals[3]; char pad2[0x264 - 0x250]; };
struct EntryTable {
    int pad0;
    int m_def;
    Entry *m_entries;
    int pad1[2];
    int m_max;
    int sub_100ecc60(int idx, int slot);
};
extern int (*g_109f3868)(int, int);
int EntryTable::sub_100ecc60(int idx, int slot)
{
    if (idx < 0 || idx > m_max)
        idx = m_def;
    if (slot >= 3)
        return -1;
    if (slot == 0 && m_entries[idx].vals[0] == -1)
        return g_109f3868(1, 9);
    return m_entries[idx].vals[slot];
}
// END FUNCTION

// FUNCTION: 0x100ed500 size=0x72
struct Elem44 { char d[0x44]; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct Mem44 {
    Elem44 *m_p;
    int m_alloc;
    int m_grow;
    void sub_100ed500(int num);
};
void Mem44::sub_100ed500(int num)
{
    if (m_grow == -1)
        return;
    int want = m_alloc + num;
    if (m_alloc < want) {
        int n = m_alloc;
        do {
            if (n != 0) {
                if (m_grow != 0)
                    n += m_grow;
                else
                    n += n;
            } else
                n = 1;
        } while (n < want);
        m_alloc = n;
    }
    if (m_p)
        m_p = (Elem44 *)g_109f3638(m_p, m_alloc * 0x44);
    else
        m_p = (Elem44 *)g_109f3634(m_alloc * 0x44);
}
// END FUNCTION

// FUNCTION: 0x100ee750 size=0x85
#include "CUnknown100ee750.h"

struct SHandleEntry { void *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

static inline void *GetEnt(unsigned h)
{
    void *ent;
    if (h == 0xffffffff)
        ent = 0;
    else {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        ent = (he->serial == (h >> 13)) ? he->p : 0;
    }
    return ent;
}

void CUnknown100ee750::sub_100ee750(void *pEntity)
{
    if (GetEnt(m_hFirst) == pEntity) {
        m_hFirst = 0xffffffff;
        return;
    }
    if (GetEnt(m_hSecond) == pEntity)
        m_hSecond = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x100f0300 size=0x8
void __fastcall sub_100f0300(char *p) { p[0x55c] = 1; }
// END FUNCTION

// FUNCTION: 0x100f0320 size=0x8
void __fastcall sub_100f0320(char *p) { p[0x55c] = 0; }
// END FUNCTION

// FUNCTION: 0x100f0e70 size=0xb
void __fastcall sub_100f0e70(char *self)
{
	*(int *)(self + 0x644) = 0;
}
// END FUNCTION

// FUNCTION: 0x100f0f30 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3();
	virtual void target(int a);
};

void __fastcall sub_100f0f30(CSlots *self)
{
	self->target(1);
}
// END FUNCTION

// FUNCTION: 0x100f1900 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000917e(GP *);
extern int vt_10454b94;
extern char g_10565430[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_door_rotating
extern "C" GP *func_door_rotating()
{
	GP *p = (GP *)sub_1000db89(0x710);
	if (p) {
		sub_1000917e(p);
		*(int **)p = &vt_10454b94;
	} else {
		p = 0;
	}
	p->name(g_10565430);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100f5600 size=0xd
#include "CUnknown100f5600.h"

void CUnknown100f5600::sub_100f5600(float value)
{
	m_fUnk454 = value;
}
// END FUNCTION

// FUNCTION: 0x100f6d80 size=0x84
#include "CUnknown100f6d80.h"

void CUnknown100f6d80::sub_100f6d80(int value)
{
    m_vec.AddToTailUnique(value);
}
// END FUNCTION

// FUNCTION: 0x100f8e20 size=0x80
void *sub_10430fa0(void *, const void *, unsigned);

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct SEntV116 {
    S100(a)
    S10(b0)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5();
    virtual bool v116();
};

struct UtlMem3 {
    SEntV116 **m_pMemory;
    int m_allocationCount;
    int m_growSize;
    void sub_100b4a40(int num);
};
struct SEntVec {
    UtlMem3 m_mem;
    int m_size;
    SEntV116 **m_pElements;
};
extern SEntVec g_107036b4;

void sub_100f8e20(SEntV116 *ent)
{
    if (!ent->v116()) {
        int idx = g_107036b4.m_size;
        int next = g_107036b4.m_size + 1;
        if (next > g_107036b4.m_mem.m_allocationCount)
            g_107036b4.m_mem.sub_100b4a40(g_107036b4.m_size - g_107036b4.m_mem.m_allocationCount + 1);
        g_107036b4.m_size++;
        g_107036b4.m_pElements = g_107036b4.m_mem.m_pMemory;
        int move = g_107036b4.m_size - idx - 1;
        if (move > 0)
            sub_10430fa0(g_107036b4.m_mem.m_pMemory + next, g_107036b4.m_mem.m_pMemory + idx, move * 4);
        SEntV116 **slot = g_107036b4.m_mem.m_pMemory + idx;
        if (slot)
            *slot = ent;
    }
}
// END FUNCTION

// FUNCTION: 0x100f9790 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_100f9790(); };
void CUtlVectorBase::sub_100f9790() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x100f97b0 size=0xc
CUnknown100f97b0_Elem *CUnknown100f97b0::sub_100f97b0(int index)
{
	return &m_pMemory[index];
}
// END FUNCTION

// FUNCTION: 0x100f9940 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_100f9940
void __fastcall sub_100f9940(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x100f99d0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8e_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8e_t::sub_100f99d0
	void sub_100f99d0(int num);
};

void CMem8e_t::sub_100f99d0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x100fa600 size=0x68
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S100fa600 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_100fa600(int num);
};
// TARGET: S100fa600::sub_100fa600
void S100fa600::sub_100fa600(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 6;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 6);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 6);
}
// END FUNCTION

// FUNCTION: 0x100fa690 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0();
	virtual void target();
};

void __fastcall sub_100fa690(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x100fa6b0 size=0xb
void CUnknown10081e70::sub_100fa6b0(int unused)
{
	vfunc242();
}
// END FUNCTION

// FUNCTION: 0x100fbef0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000a9d4(GP *);
extern int vt_104563bc;
extern char g_1056768c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: inspection_node
extern "C" GP *inspection_node()
{
	GP *p = (GP *)sub_1000db89(0x4a8);
	if (p) {
		sub_1000a9d4(p);
		*(int **)p = &vt_104563bc;
	} else {
		p = 0;
	}
	p->name(g_1056768c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100fc490 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000a9d4(GP *);
extern int vt_1045685c;
extern char g_10567720[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: env_particle_hud
extern "C" GP *env_particle_hud()
{
	GP *p = (GP *)sub_1000db89(0x4a4);
	if (p) {
		sub_1000a9d4(p);
		*(int **)p = &vt_1045685c;
	} else {
		p = 0;
	}
	p->name(g_10567720);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100fc5c0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000a9d4(GP *);
extern int vt_10456cf4;
extern char g_10567780[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_particle
extern "C" GP *func_particle()
{
	GP *p = (GP *)sub_1000db89(0x4c0);
	if (p) {
		sub_1000a9d4(p);
		*(int **)p = &vt_10456cf4;
	} else {
		p = 0;
	}
	p->name(g_10567780);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100fd000 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000a9d4(GP *);
extern int vt_1045762c;
extern char g_105678c4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: inspection_brush
extern "C" GP *inspection_brush()
{
	GP *p = (GP *)sub_1000db89(0x4c4);
	if (p) {
		sub_1000a9d4(p);
		*(int **)p = &vt_1045762c;
	} else {
		p = 0;
	}
	p->name(g_105678c4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100fdcc0 size=0xa
void __fastcall sub_100fdcc0(char *self, int, int)
{
	self[0x458] = 1;
}
// END FUNCTION

// FUNCTION: 0x100fdce0 size=0xa
void CUnknown100fdce0::sub_100fdce0(int unused)
{
	m_unk458 = 0;
}
// END FUNCTION

// FUNCTION: 0x100fdd50 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem7 {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_100fdd50(int num);
};

// TARGET: UtlMem7::sub_100fdd50
void UtlMem7::sub_100fdd50(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x10100ef0 size=0x52
struct ISaveRestoreOps;
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
extern int g_10568c10[2];
void sub_100073c9();

int *sub_10100ef0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_Duration", {0x450, 0}, 1, 0x6, "duration" },
        { 1, "m_HoldTime", {0x454, 0}, 1, 0x6, "holdtime" },
        { 0, "InputFade", {0x0, 0}, 1, 0x8, "Fade", 0, (void *)sub_100073c9 },
        { 10, "m_OnBeginFade", {0x458, 0}, 1, 0x16, "OnBeginFade", g_1055dc70 },
    };
    g_10568c10[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10568c10[0] = (int)&dataDesc[1];
    return g_10568c10;
}
// END FUNCTION

// FUNCTION: 0x10101e30 size=0x52
struct ISaveRestoreOps;
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
extern int g_105694a8[2];
void sub_1000a79a();

int *sub_10101e30()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_iszMessage", {0x450, 0}, 1, 0x6, "message" },
        { 17, "m_sNoise", {0x460, 0}, 1, 0x6, "messagesound" },
        { 4, "m_MessageAttenuation", {0x458, 0}, 1, 0x6, "messageattenuation" },
        { 1, "m_MessageVolume", {0x454, 0}, 1, 0x6, "messagevolume" },
        { 1, "m_Radius", {0x45c, 0}, 1, 0x2 },
        { 0, "InputShowMessage", {0x0, 0}, 1, 0x8, "ShowMessage", 0, (void *)sub_1000a79a },
        { 10, "m_OnShowMessage", {0x464, 0}, 1, 0x16, "OnShowMessage", g_1055dc70 },
    };
    g_105694a8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105694a8[0] = (int)&dataDesc[1];
    return g_105694a8;
}
// END FUNCTION

// FUNCTION: 0x10102410 size=0x52
struct ISaveRestoreOps;
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
extern int g_105698f8[2];
void sub_10003701();
void sub_10011022();

int *sub_10102410()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_nSoundMask", {0x458, 0}, 1, 6, "SoundMask" },
        { 1, "m_flSensitivity", {0x45c, 0}, 1, 6, "Sensitivity" },
        { 1, "m_flSmoothFactor", {0x460, 0}, 1, 6, "SmoothFactor" },
        { 5, "m_bDisabled", {0x450, 0}, 1, 6, "StartDisabled" },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_10003701 },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_10011022 },
        { 10, "m_SoundLevel", {0x464, 0}, 1, 0x16, "SoundLevel", g_1055dc70 },
    };
    g_105698f8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105698f8[0] = (int)&dataDesc[1];
    return g_105698f8;
}
// END FUNCTION

// FUNCTION: 0x101030e0 size=0xd
void CUnknown101030e0::sub_101030e0(int mode)
{
	mode = 0;
	sub_10102dd0(mode);
}
// END FUNCTION

// FUNCTION: 0x10103100 size=0xd
#include "CUnknown10103100.h"
// TARGET: CUnknown10103100::sub_10103100
void CUnknown10103100::sub_10103100(int value)
{
	sub_10102dd0(1);
}
// END FUNCTION

// FUNCTION: 0x10103c80 size=0x52
struct ISaveRestoreOps;
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
extern int g_1056a578[2];
void sub_10002126();
void sub_1000279d();
void sub_1000fb37();
void sub_10013381();
void sub_10003eb3();

int *sub_10103c80()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_flDelay", {0x450, 0}, 1, 6, "MaxDelay" },
        { 4, "m_nMagnitude", {0x458, 0}, 1, 6, "Magnitude" },
        { 4, "m_nTrailLength", {0x45c, 0}, 1, 6, "TrailLength" },
        { 0, "CEnvSparkSparkThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10002126 },
        { 0, "InputStartSpark", {0, 0}, 1, 8, "StartSpark", 0, (void *)sub_1000279d },
        { 0, "InputStopSpark", {0, 0}, 1, 8, "StopSpark", 0, (void *)sub_1000fb37 },
        { 0, "InputToggleSpark", {0, 0}, 1, 8, "ToggleSpark", 0, (void *)sub_10013381 },
        { 0, "InputSparkOnce", {0, 0}, 1, 8, "SparkOnce", 0, (void *)sub_10003eb3 },
        { 10, "m_OnSpark", {0x460, 0}, 1, 0x16, "OnSpark", g_1055dc70 },
    };
    g_1056a578[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1056a578[0] = (int)&dataDesc[1];
    return g_1056a578;
}
// END FUNCTION

// FUNCTION: 0x10104630 size=0x8
void sub_1000c586();
void __stdcall sub_10104630(int) { sub_1000c586(); }
// END FUNCTION

// FUNCTION: 0x10104ff0 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct Table {
    char pad[0xc];
    int m_nCount;
};

bool __fastcall sub_10104ff0(Table *self, int, int idx)
{
    g_109f3620[*g_109f3680].a = "CExpressionTable::IsValidExpressionIndex";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r;
    if (idx >= 0 && idx < self->m_nCount)
        r = true;
    else
        r = false;
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10106490 size=0xbc
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern void (*g_109f3624)(void *);
extern char g_106b8540[];
extern char g_105387dc[];
extern char g_1056bb3c[];

// TARGET: sub_10106490
void __fastcall sub_10106490(char *p)
{
	const char *name;
	if (p) {
		name = *(const char **)(p + 0x26c);
		if (!name)
			name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].a = g_1056bb3c;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	*(int *)(p + 0x10c8) = 0;
	if (*(int *)(p + 0x10c4) != -1) {
		if (*(void **)(p + 0x10bc)) {
			g_109f3624(*(void **)(p + 0x10bc));
			*(void **)(p + 0x10bc) = 0;
		}
		*(int *)(p + 0x10c0) = 0;
	}
	*(int *)(p + 0x10cc) = *(int *)(p + 0x10bc);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10106f90 size=0x81
#include "CBaseCombatCharacter.h"
#include "CExpressionTable.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1056bd64[];
extern char g_105387dc[];
extern char g_106b8540[];
extern CExpressionTable g_10709200;
bool CBaseCombatCharacter::sub_10106f90(int expression)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1056bd64;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    bool r = g_10709200.IsValidExpression(expression);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x101074c0 size=0x67
struct Mem32 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_101074c0
void __fastcall sub_101074c0(Mem32 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 1;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 5);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 5);
}
// END FUNCTION

// FUNCTION: 0x10107550 size=0x6d
struct Elem400 { char d[400]; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct Mem400 {
    Elem400 *m_p;
    int m_alloc;
    int m_grow;
    void sub_10107550(int num);
};
void Mem400::sub_10107550(int num)
{
    if (m_grow == -1)
        return;
    int want = m_alloc + num;
    if (m_alloc < want) {
        int n = m_alloc;
        do {
            if (n != 0) {
                if (m_grow != 0)
                    n += m_grow;
                else
                    n += n;
            } else
                n = 1;
        } while (n < want);
        m_alloc = n;
    }
    if (m_p)
        m_p = (Elem400 *)g_109f3638(m_p, m_alloc * 400);
    else
        m_p = (Elem400 *)g_109f3634(m_alloc * 400);
}
// END FUNCTION

// FUNCTION: 0x10109da0 size=0xa
void __fastcall sub_10109da0(char *self, int, int)
{
	self[0x490] = 1;
}
// END FUNCTION

// FUNCTION: 0x1010cbc0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8f_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8f_t::sub_1010cbc0
	void sub_1010cbc0(int num);
};

void CMem8f_t::sub_1010cbc0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x1010f4e0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_1010f4e0(void **p) { ((Fn *)*p)[241](p); }
// END FUNCTION

// FUNCTION: 0x1010f4f0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_1045f65c;
extern char g_1056f804[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: window_pane
extern "C" GP *window_pane()
{
	GP *p = (GP *)sub_1000db89(0x730);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_1045f65c;
	} else {
		p = 0;
	}
	p->name(g_1056f804);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10113ba0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000de36(GP *);
extern int vt_1046004c;
extern char g_105700c8[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_dustcloud
extern "C" GP *func_dustcloud()
{
	GP *p = (GP *)sub_1000db89(0x478);
	if (p) {
		sub_1000de36(p);
		*(int **)p = &vt_1046004c;
	} else {
		p = 0;
	}
	p->name(g_105700c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101151a0 size=0xa
struct CUnknown101151a0 { char p[0x204]; unsigned int a; unsigned int sub_101151a0(); };
// TARGET: CUnknown101151a0::sub_101151a0
unsigned int CUnknown101151a0::sub_101151a0() { return a & 1; }
// END FUNCTION

// FUNCTION: 0x1011a430 size=0x8
extern char g_1070b264;
void sub_1011a430() { g_1070b264 = 1; }
// END FUNCTION

// FUNCTION: 0x1011a580 size=0x7d
#include "UtlMem.h"

void *sub_10430fa0(void *, const void *, unsigned);

struct SHandleVec {
    UtlMem m_mem;
    int m_size;
    int *m_pElements;
};
extern SHandleVec g_1070b0d0;

struct SHandleHolder {
    virtual void v0();
    virtual int *GetHandle();
};

void sub_1011a580(SHandleHolder *holder)
{
    if (holder) {
        int h = *holder->GetHandle();
        int idx = g_1070b0d0.m_size;
        int next = g_1070b0d0.m_size + 1;
        if (next > g_1070b0d0.m_mem.m_allocationCount)
            g_1070b0d0.m_mem.sub_10055ec0(g_1070b0d0.m_size - g_1070b0d0.m_mem.m_allocationCount + 1);
        g_1070b0d0.m_size++;
        g_1070b0d0.m_pElements = g_1070b0d0.m_mem.m_pMemory;
        int move = g_1070b0d0.m_size - idx - 1;
        if (move > 0)
            sub_10430fa0(g_1070b0d0.m_mem.m_pMemory + next, g_1070b0d0.m_mem.m_pMemory + idx, move * 4);
        int *slot = g_1070b0d0.m_mem.m_pMemory + idx;
        if (slot)
            *slot = h;
    }
}
// END FUNCTION

// FUNCTION: 0x1011d6a0 size=0x6a
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S1011d6a0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_1011d6a0(int num);
};
// TARGET: S1011d6a0::sub_1011d6a0
void S1011d6a0::sub_1011d6a0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 1;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x60);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x60);
}
// END FUNCTION

// FUNCTION: 0x1011d8e0 size=0x7f
#include <stdarg.h>
struct IFileSys {
    virtual void *Open(const char *file, const char *mode, const char *pathId);
    virtual void Close(void *h);
    virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual int FPrintf(void *h, const char *fmt, ...);
};
extern IFileSys *g_1070b238;
extern int (*g_109f387c)(char *, int, const char *, char *);
extern char g_105724c8[];
extern char g_105724c4[];
extern char g_105490b0[];
void sub_1011d8e0(const char *file, const char *fmt, ...)
{
    char buf[1024];
    va_list ap;
    if (!file)
        file = g_105724c8;
    va_start(ap, fmt);
    g_109f387c(buf, 1024, fmt, ap);
    void *h = g_1070b238->Open(file, g_105724c4, 0);
    if (h) {
        g_1070b238->FPrintf(h, g_105490b0, buf);
        g_1070b238->Close(h);
    }
}
// END FUNCTION

// FUNCTION: 0x101251e0 size=0xb
void __fastcall sub_101251e0(char *self)
{
	*(int *)(self + 0xac) = -9999;
}
// END FUNCTION

// FUNCTION: 0x1012b290 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_10462b8c;
extern char g_10566070[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: gib
extern "C" GP *gib()
{
	GP *p = (GP *)sub_1000db89(0x740);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_10462b8c;
	} else {
		p = 0;
	}
	p->name(g_10566070);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1012b640 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_1046308c;
extern char g_105730ec[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: raggib
extern "C" GP *raggib()
{
	GP *p = (GP *)sub_1000db89(0x730);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_1046308c;
	} else {
		p = 0;
	}
	p->name(g_105730ec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1012c9c0 size=0x6a
struct TEnt;
struct TEntry {
	TEnt *ent;
	unsigned int serial;
	int pad;
};
extern char *g_10566458;

struct THandle {
	unsigned int index;
	TEnt *Get() const
	{
		TEnt *r;
		if (index == 0xffffffff)
			r = 0;
		else {
			TEntry *e = (TEntry *)(g_10566458 + 4) + (index & 0x1fff);
			if (e->serial == (index >> 13))
				r = e->ent;
			else
				r = 0;
		}
		return r;
	}
};

struct TEnt {
	char pad[0x25c];
	THandle moveParent;
};

TEnt *sub_1012c9c0(TEnt *e)
{
	while (e->moveParent.Get())
		e = e->moveParent.Get();
	return e;
}
// END FUNCTION

// FUNCTION: 0x1012ca50 size=0x78
struct EntInfo { void *ent; unsigned int serial; int pad; };
struct EntList {
    int vptr;
    EntInfo arr[1];
};
extern EntList *g_10566458;
struct Ent;
struct EHandle {
    unsigned int m_Index;
    Ent *Get() const
    {
        if (m_Index == 0xffffffff)
            return 0;
        const EntInfo *p = &g_10566458->arr[m_Index & 0x1fff];
        if (p->serial == (m_Index >> 13))
            return (Ent *)p->ent;
        return 0;
    }
};
struct Ent {
    char pad[0x25c];
    EHandle m_hParent;
};

bool sub_1012ca50(Ent *target, Ent *ent)
{
    while (ent->m_hParent.Get() != 0) {
        Ent *p = ent->m_hParent.Get();
        ent = p;
        if (target == ent)
            return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x1012cf10 size=0x9
CUnknown1012cf10 *CUnknown1012cf10::sub_1012cf10()
{
	m_unk0 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1012cf30 size=0x8
void sub_100027ac();
void __stdcall sub_1012cf30(int) { sub_100027ac(); }
// END FUNCTION

// FUNCTION: 0x1012cf50 size=0xd
#include "CUnknown1012cf50.h"
// TARGET: CUnknown1012cf50::sub_1012cf50
void CUnknown1012cf50::sub_1012cf50(int value)
{
	sub_1012d4e0(0);
}
// END FUNCTION

// FUNCTION: 0x1012cf70 size=0xd
void CUnknown1012cf70::sub_1012cf70(int flags)
{
	flags = 0;
	sub_100125f8(flags);
}
// END FUNCTION

// FUNCTION: 0x1012cf90 size=0x8
void sub_10003a94();
void __stdcall sub_1012cf90(int) { sub_10003a94(); }
// END FUNCTION

// FUNCTION: 0x1012d0a0 size=0x52
struct ISaveRestoreOps;
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
extern int g_10573960[2];
void sub_1000b7d0();
void sub_10010979();
void sub_1000d058();
void sub_1000b8e8();
void sub_10005ea2();
void sub_1000bd0c();

int *sub_1012d0a0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 1, "m_flCountTime", {0x468, 0}, 1, 0xe, "count_time" },
        { 4, "m_nCountType", {0x46c, 0}, 1, 6, "count_type" },
        { 0xf, "m_flRemainingTime", {0x480, 0}, 1, 6, "remaining_time" },
        { 0xf, "m_flLastTime", {0x47c, 0}, 1, 2 },
        { 5, "m_bIsPaused", {0x470, 0}, 1, 2 },
        { 5, "m_bShowTimer", {0x478, 0}, 1, 2 },
        { 4, "m_nTimerFlags", {0x488, 0}, 1, 2 },
        { 0, "CHudTimerTimerThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000b7d0 },
        { 0, "InputRestartTimer", {0, 0}, 1, 8, "RestartTimer", 0, (void *)sub_10010979 },
        { 0, "InputRestartTimer", {0, 0}, 1, 8, "ResetTimer", 0, (void *)sub_10010979 },
        { 0, "InputStartTimer", {0, 0}, 1, 8, "StartTimer", 0, (void *)sub_1000d058 },
        { 0, "InputPauseTimer", {0, 0}, 1, 8, "PauseTimer", 0, (void *)sub_1000b8e8 },
        { 0, "InputShow", {0, 0}, 1, 8, "Show", 0, (void *)sub_10005ea2 },
        { 0, "InputHide", {0, 0}, 1, 8, "Hide", 0, (void *)sub_1000bd0c },
        { 10, "m_OnTimerComplete", {0x450, 0}, 1, 0x16, "OnTimerComplete", g_1055dc70 },
    };
    g_10573960[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10573960[0] = (int)&dataDesc[1];
    return g_10573960;
}
// END FUNCTION

// FUNCTION: 0x1012e6a0 size=0xd
void CUnknown1012e6a0::sub_1012e6a0(int unused)
{
	m_unk450 = -1;
}
// END FUNCTION

// FUNCTION: 0x1012ee70 size=0x7c
#include "InterfaceReg.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern InterfaceReg *g_1070c4bc;

InterfaceReg *InterfaceReg::sub_1012ee70(void *createFn, const char *pName)
{
    m_pName = pName;
    g_109f3620[*g_109f3680].name = "InterfaceReg::InterfaceReg";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    m_CreateFn = createFn;
    m_pNext = g_1070c4bc;
    g_1070c4bc = this;
    --*g_109f3680;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1012f100 size=0x65
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_10574f74[];
extern char g_106b8540[];
extern "C" __declspec(dllimport) int __stdcall FreeLibrary(void* h);

// TARGET: sub_1012f100
void sub_1012f100(void* h)
{
	g_109f3620[*g_109f3680].a = g_10574f74;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	if (h)
		FreeLibrary(h);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1012f190 size=0x78
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern int (__stdcall *g_109f34ac)(int, const char *);

int sub_1012f190(int hModule)
{
    g_109f3620[*g_109f3680].a = "Sys_GetFactory";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    if (!hModule) {
        (*g_109f3680)--;
        return 0;
    }
    int r = g_109f34ac(hModule, "CreateInterface");
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1012f2b0 size=0x69
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
int sub_1012f340(const char *a, const char *b);

int sub_1012f2b0(const char *module)
{
    g_109f3620[*g_109f3680].a = "Sys_GetFactory";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = sub_1012f340(module, "CreateInterface");
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1012f340 size=0x6e
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern int (__stdcall *g_109f3588)(const char *, const char *);
extern int (__stdcall *g_109f34ac)(int);

int sub_1012f340(const char *a, const char *b)
{
    g_109f3620[*g_109f3680].a = "Sys_GetProcAddress";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = g_109f34ac(g_109f3588(a, b));
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1012f640 size=0x81
struct SFloatPair { float lo; float range; };

extern void (*g_109f3890)(char *dest, const char *src, int count);
char *sub_10432c14(char *str, const char *delim);
double sub_1043136f(const char *str);

SFloatPair sub_1012f640(const char *text)
{
    SFloatPair r;
    r.lo = 0;
    r.range = 0;
    char buf[128];
    g_109f3890(buf, text, 128);
    char *tok = sub_10432c14(buf, ",");
    if (tok) {
        r.lo = (float)sub_1043136f(tok);
        tok = sub_10432c14(0, ",");
        if (tok)
            r.range = sub_1043136f(tok) - r.lo;
    }
    return r;
}
// END FUNCTION

// FUNCTION: 0x1012f850 size=0x9
// TARGET: sub_1012f850
float sub_1012f850(float x) { return x * x; }
// END FUNCTION

// FUNCTION: 0x10130100 size=0xb
extern void (*g_105751b8[])();
void sub_10130100(int i)
{
	g_105751b8[i]();
}
// END FUNCTION

// FUNCTION: 0x10130a80 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100121c5(GP *);
extern int vt_10465204;
extern char g_10575904[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: light_environment
extern "C" GP *light_environment()
{
	GP *p = (GP *)sub_1000db89(0x460);
	if (p) {
		sub_100121c5(p);
		*(int **)p = &vt_10465204;
	} else {
		p = 0;
	}
	p->name(g_10575904);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101318a0 size=0x8
void sub_10002441();
void __stdcall sub_101318a0(int) { sub_10002441(); }
// END FUNCTION

// FUNCTION: 0x10131a40 size=0x52
struct ISaveRestoreOps;
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
extern int g_105760fc[2];

int *sub_10131a40()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_SourceName", {0x468, 0}, 1, 6, "source" },
        { 10, "m_Line", {0x450, 0}, 1, 0x16, "Line", g_1055dc70 },
    };
    g_105760fc[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105760fc[0] = (int)&dataDesc[1];
    return g_105760fc;
}
// END FUNCTION

// FUNCTION: 0x10132db0 size=0x52
struct ISaveRestoreOps;
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
extern int g_1057658c[2];
void sub_100120bc();

int *sub_10132db0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 12, "m_rgEntities", {0x450, 0}, 0x20, 2 },
        { 4, "m_rgTriggered", {0x4d0, 0}, 0x20, 2 },
        { 4, "m_iTotal", {0x568, 0}, 1, 2 },
        { 2, "m_globalstate", {0x56c, 0}, 1, 6, "globalstate" },
        { 0, "CMultiSourceRegister", {0, 0}, 1, 0x20, 0, 0, (void *)sub_100120bc },
        { 10, "m_OnTrigger", {0x550, 0}, 1, 0x16, "OnTrigger", g_1055dc70 },
    };
    g_1057658c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1057658c[0] = (int)&dataDesc[1];
    return g_1057658c;
}
// END FUNCTION

// FUNCTION: 0x101346e0 size=0x7f
#include "CUnknown101346e0.h"

int CUnknown101346e0::sub_101346e0(int steps)
{
    while (steps > 0) {
        m_current++;
        if (m_current < 0 || m_current >= 16)
            m_current = 0;
        if (m_slots[m_current] != 0)
            steps--;
    }
    while (steps < 0) {
        m_current--;
        if (m_current < 0 || m_current >= 16)
            m_current = 15;
        if (m_slots[m_current] != 0)
            steps++;
    }
    return m_current;
}
// END FUNCTION

// FUNCTION: 0x10136330 size=0x52
struct ISaveRestoreOps;
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
extern int g_10579058[2];
void sub_1000ebab();
void sub_1000b24e();
void sub_10005e89();
void sub_100089d6();
void sub_1000af6f();

int *sub_10136330()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bWaitForRefire", {0x451, 0}, 1, 2 },
        { 5, "m_bDisabled", {0x450, 0}, 1, 6, "StartDisabled" },
        { 0, "InputEnable", {0, 0}, 1, 8, "Enable", 0, (void *)sub_1000ebab },
        { 0, "InputEnableRefire", {0, 0}, 1, 8, "EnableRefire", 0, (void *)sub_1000b24e },
        { 0, "InputDisable", {0, 0}, 1, 8, "Disable", 0, (void *)sub_10005e89 },
        { 0, "InputToggle", {0, 0}, 1, 8, "Toggle", 0, (void *)sub_100089d6 },
        { 0, "InputTrigger", {0, 0}, 1, 8, "Trigger", 0, (void *)sub_1000af6f },
        { 10, "m_OnTrigger", {0x454, 0}, 1, 0x16, "OnTrigger", g_1055dc70 },
    };
    g_10579058[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10579058[0] = (int)&dataDesc[1];
    return g_10579058;
}
// END FUNCTION

// FUNCTION: 0x10136450 size=0xa
void __fastcall sub_10136450(char *self, int, int)
{
	self[0x450] = 0;
}
// END FUNCTION

// FUNCTION: 0x10136470 size=0xa
void __fastcall sub_10136470(char *self, int, int)
{
	self[0x451] = 0;
}
// END FUNCTION

// FUNCTION: 0x10136490 size=0xa
void __fastcall sub_10136490(char *self, int, int)
{
	self[0x450] = 1;
}
// END FUNCTION

// FUNCTION: 0x1013d900 size=0x72
extern int g_10579690[4][2][3];
bool sub_1013d900(int a, int b, int c, int *out)
{
    if (a < 0 || b < 0 || c < 0)
        return false;
    if (a >= 4 || b >= 2 || c >= 3)
        return false;
    for (int i = 0; i < 4; i++) {
        int idx = a + i;
        if (idx >= 4)
            idx -= 4;
        out[i] = g_10579690[idx][b][c];
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1013da70 size=0xa
extern int g_1071a240;
void sub_1013da70(int value)
{
	g_1071a240 = value;
}
// END FUNCTION

// FUNCTION: 0x1013dbb0 size=0x70
struct Blob { Blob *m_pNext; Blob *m_pPrev; int m_NumBytes; char m_Data[1]; };
struct BlobHead { Blob *m_pNext; Blob *m_pPrev; };
struct Pool {
    int m_BlockSize;
    int m_BlocksPerBlob;
    int m_GrowMode;
    BlobHead m_BlobHead;
    char pad[0x1c - 0x14];
    void *m_pHeadOfFreeList;
    char pad2[0x28 - 0x20];
    unsigned short m_NumBlobs;
};
void *sub_104320f7(unsigned int);

void __fastcall sub_1013dbb0(Pool *self)
{
    if (self->m_GrowMode == 2 || self->m_GrowMode != 0 || self->m_NumBlobs == 0) {
        int nElements = (self->m_NumBlobs + 1) * self->m_BlocksPerBlob;
        int sizeMultiplier = self->m_BlockSize * nElements;
        Blob *pBlob = (Blob *)sub_104320f7(sizeMultiplier + 0xf);
        pBlob->m_NumBytes = sizeMultiplier;
        pBlob->m_pPrev = (Blob *)&self->m_BlobHead;
        pBlob->m_pNext = self->m_BlobHead.m_pNext;
        pBlob->m_pNext->m_pPrev = pBlob;
        pBlob->m_pPrev->m_pNext = pBlob;
        char *p = pBlob->m_Data;
        self->m_pHeadOfFreeList = p;
        for (int i = nElements - 1; i > 0; i--) {
            char *next = p + self->m_BlockSize;
            *(char **)p = next;
            p = next;
        }
        *(char **)p = 0;
        self->m_NumBlobs++;
    }
}
// END FUNCTION

// FUNCTION: 0x1013e7e0 size=0xd
#include "CUnknown1013e7e0.h"
// TARGET: CUnknown1013e7e0::sub_1013e7e0
void CUnknown1013e7e0::sub_1013e7e0(int unused)
{
	sub_100b3640(0x400000);
}
// END FUNCTION

// FUNCTION: 0x1013e800 size=0xd
#include "CUnknown1013e7e0.h"
// TARGET: CUnknown1013e7e0::sub_1013e800
void CUnknown1013e7e0::sub_1013e800(int unused)
{
	sub_100b3580(0x400000);
}
// END FUNCTION

// FUNCTION: 0x1013eb90 size=0x7a
extern "C" int _strcmpi(const char *, const char *);
extern char g_106b8540[];
extern char g_1056eeec[];
bool __stdcall sub_1013eb90(CBaseEntity *ent, unsigned int flags)
{
    if (flags != 0) {
        if ((flags & 1) && *(int *)((char *)ent + 0xa8) != 0)
            return false;
        if ((flags & 2) && *(int *)((char *)ent + 0x2e0) != 0) {
            if (ent->sub_100b3700() & 0x2000)
                return false;
        }
        if (flags & 4) {
            const char *s = *(const char **)((char *)ent + 0x11c);
            if (!s)
                s = g_106b8540;
            if (!_strcmpi(s, g_1056eeec))
                return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x1013fd20 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory96 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1013fd20(int num);
};

void CUtlMemory96::sub_1013fd20(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 1;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 0x60);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 0x60);
}
// END FUNCTION

// FUNCTION: 0x10141b10 size=0x72
#include "IScorer.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct EntSlots138 {
    S100(a)
    S10(b0)
    S10(b1)
    S10(b2)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4();
    virtual void c5(); virtual void c6(); virtual void c7();
    virtual int v138();
};

extern int g_10538764;
extern int g_1057abf8;
void *sub_10430b64(void *, int, void *, void *, int);

CBaseEntity *__stdcall sub_10141b10(CBaseEntity *a, CBaseEntity *b)
{
    if (a) {
        if (((EntSlots138 *)a)->v138() == 1)
            return a;
        IScorer *s = (IScorer *)sub_10430b64(a, 0, &g_10538764, &g_1057abf8, 0);
        if (s)
            return s->vfunc0();
        s = (IScorer *)sub_10430b64(b, 0, &g_10538764, &g_1057abf8, 0);
        if (s)
            return s->vfunc0();
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101466e0 size=0xe
#include "CUnknown101466e0.h"
// TARGET: CUnknown101466e0::sub_101466e0
void CUnknown101466e0::sub_101466e0(char value)
{
	m_value = value != 0;
}
// END FUNCTION

// FUNCTION: 0x10146790 size=0x9
struct CUnknown10146790 { char a; char b; char c; void sub_10146790(); };
void CUnknown10146790::sub_10146790() { c = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x10148300 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_1046c424;
extern char g_1057bb08[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: gravity_pellet
extern "C" GP *gravity_pellet()
{
	GP *p = (GP *)sub_1000db89(0x738);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_1046c424;
	} else {
		p = 0;
	}
	p->name(g_1057bb08);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10156d30 size=0x8
void __fastcall sub_10156d30(char *p) { p[0x105c] = 1; }
// END FUNCTION

// FUNCTION: 0x10157890 size=0xd
#include "CUnknown101578b0.h"

void CUnknown101578b0::sub_10157890(char value)
{
	m_bFlag103c = value;
}
// END FUNCTION

// FUNCTION: 0x101578b0 size=0xc
bool CUnknown101578b0::sub_101578b0()
{
	bool r = (m_flags204 >> 4) & 1;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10157910 size=0xd
void CUnknown101578b0::sub_10157910(int value)
{
	m_unk104c = value;
}
// END FUNCTION

// FUNCTION: 0x10158570 size=0x6a
#include <malloc.h>

struct IRestoreSrc {
    virtual int StartBlock(int a, const char *name, int c);
    virtual void EndBlock(int h);
    virtual void ReadBytes(char *buf, int size, int h);
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual int BlockSize(int h);
};
struct IFieldSink {
    virtual void v0();
    virtual void SetString(int a, const char *s);
};
extern char g_105596cc[];

void sub_10158570(int a, IFieldSink *sink, IRestoreSrc *src)
{
    int h = src->StartBlock(a, g_105596cc, 0);
    if (h) {
        int size = src->BlockSize(h);
        char *buf = (char *)_alloca(size + 1);
        src->ReadBytes(buf, size, h);
        src->EndBlock(h);
        buf[size] = 0;
        sink->SetString(a, buf);
    }
}
// END FUNCTION

// FUNCTION: 0x10158d60 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_10158d60(void **p) { ((Fn *)*p)[243](p); }
// END FUNCTION

// FUNCTION: 0x10158d80 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown10158d80 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
	virtual void slot244();
	void sub_10158d80();
};
void CUnknown10158d80::sub_10158d80() { slot244(); }
// END FUNCTION

// FUNCTION: 0x10158da0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_10158da0(void **p) { ((Fn *)*p)[245](p); }
// END FUNCTION

// FUNCTION: 0x10158e50 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
extern int vt_1046ed1c;
extern char g_1058090c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_plat
extern "C" GP *func_plat()
{
	GP *p = (GP *)sub_1000db89(0x574);
	if (p) {
		sub_1000d5ee(p);
		*(int **)p = &vt_1046ed1c;
	} else {
		p = 0;
	}
	p->name(g_1058090c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1015a040 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000d5ee(GP *);
extern int vt_1046f654;
extern char g_10580980[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_platrot
extern "C" GP *func_platrot()
{
	GP *p = (GP *)sub_1000db89(0x58c);
	if (p) {
		sub_1000d5ee(p);
		*(int **)p = &vt_1046f654;
	} else {
		p = 0;
	}
	p->name(g_10580980);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1015eec0 size=0xe
bool CUnknown1015ef20::sub_1015eec0()
{
	return m_unk19f5 == 0;
}
// END FUNCTION

// FUNCTION: 0x1015eee0 size=0x8
void __fastcall sub_1015eee0(char *p) { p[0x19f5] = 0; }
// END FUNCTION

// FUNCTION: 0x1015ef00 size=0x8
struct CUnknown1015ef00 { char pad[0x19f5]; char m_Flag; void sub_1015ef00(); };
void CUnknown1015ef00::sub_1015ef00() { m_Flag = 1; }
// END FUNCTION

// FUNCTION: 0x1015ef20 size=0xe
bool CUnknown1015ef20::sub_1015ef20()
{
	return m_unk19f7 == 0;
}
// END FUNCTION

// FUNCTION: 0x1015ef40 size=0x8
void __fastcall sub_1015ef40(char *p)
{
	p[0x19f7] = 1;
}
// END FUNCTION

// FUNCTION: 0x1015ef60 size=0x8
void __fastcall sub_1015ef60(char *p) { p[0x19f7] = 0; }
// END FUNCTION

// FUNCTION: 0x10160680 size=0xd
extern float g_10725c9c;
// TARGET: CUnknown10160680::sub_10160680
float CUnknown10160680::sub_10160680()
{
	return g_10725c9c * m_flUnk1ddc;
}
// END FUNCTION

// FUNCTION: 0x10168e60 size=0x72
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
struct EntX {
    V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m)
    virtual void n0(); virtual void n1(); virtual void n2(); virtual void n3(); virtual void n4(); virtual void n5(); virtual void n6(); virtual void n7();
    virtual int v138();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10586828[];
extern char g_106b8540[];
bool sub_10168e60(void *unused, EntX *ent)
{
    g_109f3620[*g_109f3680].a = g_10586828;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (ent->v138() == 13) {
        --*g_109f3680;
        return true;
    }
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1016b440 size=0xb
struct IUnk1070ba0c {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21();
};
extern IUnk1070ba0c *g_1070ba0c;

void sub_1016b440()
{
	g_1070ba0c->v21();
}
// END FUNCTION

// FUNCTION: 0x1016b460 size=0xe
#include "CUnknown1016b460.h"
struct CUnk1070ba0c
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21();
};
extern CUnk1070ba0c *g_1070ba0c;
// TARGET: CUnknown1016b460::sub_1016b460
void CUnknown1016b460::sub_1016b460(int a, int b, int c)
{
	g_1070ba0c->v21();
}
// END FUNCTION

// FUNCTION: 0x10175180 size=0x74
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HUN(p) TEN(p##0) TEN(p##1) TEN(p##2) TEN(p##3) TEN(p##4) TEN(p##5) TEN(p##6) TEN(p##7) TEN(p##8) TEN(p##9)
struct E0 { HUN(a) };
struct Ent : E0 { TEN(b0) TEN(b1) TEN(b2) virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual int Slot138(); };
struct EntInfo { void *ent; unsigned int serial; int pad; };
struct EntList {
    int vptr;
    EntInfo arr[1];
};
extern EntList *g_10566458;
struct EHandle {
    unsigned int m_Index;
    Ent *Get() const
    {
        if (m_Index == 0xffffffff)
            return 0;
        const EntInfo *p = &g_10566458->arr[m_Index & 0x1fff];
        if (p->serial == (m_Index >> 13))
            return (Ent *)p->ent;
        return 0;
    }
};
struct Holder {
    char pad[0x1db0];
    EHandle m_hEnt;
};

bool __fastcall sub_10175180(Holder *self)
{
    if (self->m_hEnt.Get() != 0 && self->m_hEnt.Get()->Slot138() == 3)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x1017cf90 size=0x6f
struct EntInfo { void *ent; unsigned int serial; int pad; };
struct EntList {
    int vptr;
    EntInfo arr[1];
};
extern EntList *g_10566458;
struct EHandle {
    unsigned int m_Index;
    void *Get() const
    {
        if (m_Index == 0xffffffff)
            return 0;
        const EntInfo *p = &g_10566458->arr[m_Index & 0x1fff];
        if (p->serial == (m_Index >> 13))
            return p->ent;
        return 0;
    }
};
struct Holder {
    char pad0[0x19b4];
    EHandle m_hEnt;
    char pad1[0x1ec4 - 0x19b8];
    int m_nCount;
};

void * __fastcall sub_1017cf90(Holder *self)
{
    void *r = 0;
    if (self->m_nCount > 0 && self->m_hEnt.Get() != 0)
        r = self->m_hEnt.Get();
    return r;
}
// END FUNCTION

// FUNCTION: 0x101800e0 size=0xe
#include "CUnknown101800e0.h"
// TARGET: CUnknown101800e0::sub_101800e0
float CUnknown101800e0::sub_101800e0(int index)
{
	return m_values[index];
}
// END FUNCTION

// FUNCTION: 0x10181600 size=0xb
void __fastcall sub_10181600(char *self)
{
	*(int *)(self + 0x1d60) = 0;
}
// END FUNCTION

// FUNCTION: 0x10182810 size=0x80
#include "CUnknown10182810.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct SVF158 {
    V100(a)
    V10(d0) V10(d1) V10(d2) V10(d3) V10(d4)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
    virtual void e5(); virtual void e6(); virtual void e7();
    virtual bool v158();
};

struct SEntB { char pad[0x9c]; SVF158 *m_p9c; };
struct SHandleEntry { SEntB *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

static inline SEntB *GetEnt(unsigned h)
{
    SEntB *ent;
    if (h == 0xffffffff)
        ent = 0;
    else {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        ent = (he->serial == (h >> 13)) ? he->p : 0;
    }
    return ent;
}

int CUnknown10182810::sub_10182810()
{
    if (GetEnt(m_hTarget) != 0) {
        SEntB *e = GetEnt(*(volatile unsigned *)&m_hTarget);
        if (e->m_p9c != 0 && e->m_p9c->v158())
            return m_result1cc8;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10183100 size=0xd
#include "CUnknown10183100.h"

void CUnknown10183100::sub_10183100(int value)
{
	m_unk1df8 = value;
}
// END FUNCTION

// FUNCTION: 0x10183880 size=0x67
#include "CVStatList_t.h"
struct StatInfoRef { char pad[0x10]; int id; };
struct StatOwner {
    char pad[0x14];
    int m_count;
    StatInfoRef **m_items;
    CVStatList_t *sub_10183880(int id);
};
CVStatList_t *StatOwner::sub_10183880(int id)
{
    for (int i = 0; i < m_count; i++) {
        if (m_items[i]->id == id)
            return (CVStatList_t *)m_items[i];
    }
    static CVStatList_t s_default(-1);
    return &s_default;
}
// END FUNCTION

// FUNCTION: 0x10184360 size=0x8
void __fastcall sub_10184360(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10184380 size=0x8
void __fastcall sub_10184380(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10184f70 size=0x8
void __fastcall sub_10184f70(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10185180 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_10185180(); };
void CUtlVectorBase::sub_10185180() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x101852f0 size=0x8
void __fastcall sub_101852f0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10185490 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_10185490(); };
void CUtlVectorBase::sub_10185490() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x10185600 size=0x8
void __fastcall sub_10185600(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10185790 size=0x8
void __fastcall sub_10185790(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x101857f0 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct Elem16 { int a, b, c, d; };

struct UtlMem8 {
	Elem16* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_101857f0(int num);
};

// TARGET: UtlMem8::sub_101857f0
void UtlMem8::sub_101857f0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 2;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (Elem16*)Plat_Realloc(m_pMemory, m_nAllocationCount * sizeof(Elem16));
	else
		m_pMemory = (Elem16*)Plat_Alloc(m_nAllocationCount * sizeof(Elem16));
}
// END FUNCTION

// FUNCTION: 0x10185880 size=0x70
struct Elem { char data[0x34]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

void __fastcall sub_10185880(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_109f3638(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_109f3634(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10185910 size=0x67
struct Mem16 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_10185910
void __fastcall sub_10185910(Mem16 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 2;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 4);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x101859a0 size=0x6a
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S101859a0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_101859a0(int num);
};
// TARGET: S101859a0::sub_101859a0
void S101859a0::sub_101859a0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 1;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x48);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x48);
}
// END FUNCTION

// FUNCTION: 0x10185a30 size=0x6a
#include "CUnknown10185a30.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown10185a30::sub_10185a30(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 1;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x240);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x240);
}
// END FUNCTION

// FUNCTION: 0x10189510 size=0x77
struct Elem784 { char d[0x784]; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct Mem784 {
    Elem784 *m_p;
    int m_alloc;
    int m_grow;
    void sub_10189510(int num);
};
void Mem784::sub_10189510(int num)
{
    if (m_grow == -1)
        return;
    int want = m_alloc + num;
    if (m_alloc < want) {
        int n = m_alloc;
        do {
            if (n != 0) {
                if (m_grow != 0)
                    n += m_grow;
                else
                    n += n;
            } else
                n = 1;
        } while (n < want);
        m_alloc = n;
    }
    if (m_p)
        m_p = (Elem784 *)g_109f3638(m_p, m_alloc * 0x784);
    else
        m_p = (Elem784 *)g_109f3634(m_alloc * 0x784);
}
// END FUNCTION

// FUNCTION: 0x101895d0 size=0x64
#include "CRagdollProp.h"

struct IPlayerPickupVPhysics {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(int a, int b);
};

extern int g_10538764, g_10589544, g_1057c684;
extern "C" void *__cdecl sub_10430b64(void *, long, void *, void *, int);

void sub_101895d0(CBaseEntity *ent, int a, int b)
{
	IPlayerPickupVPhysics *p = (IPlayerPickupVPhysics *)sub_10430b64(ent, 0, &g_10538764, &g_10589544, 0);
	if (p) {
		p->vfunc2(a, b);
		return;
	}
	CRagdollProp *r = (CRagdollProp *)sub_10430b64(ent, 0, &g_10538764, &g_1057c684, 0);
	if (r)
		r->vfunc271(a, b);
}
// END FUNCTION

// FUNCTION: 0x10189660 size=0x64
struct IPlayerPickupVPhysics {
    virtual void vf0();
    virtual void vf1(int a, int b);
};
extern "C" void *__RTDynamicCast(void *, long, void *, void *, int);
extern int g_10538764, g_10589544, g_1057c684;

void sub_10189660(CBaseEntity *ent, int a, int b)
{
    IPlayerPickupVPhysics *p = (IPlayerPickupVPhysics *)__RTDynamicCast(ent, 0, &g_10538764, &g_10589544, 0);
    if (p) {
        p->vf1(a, b);
        return;
    }
    CRagdollProp *r = (CRagdollProp *)__RTDynamicCast(ent, 0, &g_10538764, &g_1057c684, 0);
    if (r)
        r->vfunc270(a, b);
}
// END FUNCTION

// FUNCTION: 0x1018c4d0 size=0xd
void CUnknown1018c4d0::sub_1018c4d0(char value)
{
	m_bFlag458 = value;
}
// END FUNCTION

// FUNCTION: 0x1018c6e0 size=0x82
#include "UtlMem.h"

void *sub_10430fa0(void *, const void *, unsigned);

struct SHandleVec {
    UtlMem m_mem;
    int m_size;
    int *m_pElements;
};
extern SHandleVec g_1072ada4;

struct SHandleHolder {
    virtual void v0();
    virtual int *GetHandle();
};

void sub_1018c6e0(SHandleHolder *holder)
{
    int h;
    if (holder)
        h = *holder->GetHandle();
    else
        h = -1;
    int idx = g_1072ada4.m_size;
    int next = g_1072ada4.m_size + 1;
    if (next > g_1072ada4.m_mem.m_allocationCount)
        g_1072ada4.m_mem.sub_10055ec0(g_1072ada4.m_size - g_1072ada4.m_mem.m_allocationCount + 1);
    g_1072ada4.m_size++;
    g_1072ada4.m_pElements = g_1072ada4.m_mem.m_pMemory;
    int move = g_1072ada4.m_size - idx - 1;
    if (move > 0)
        sub_10430fa0(g_1072ada4.m_mem.m_pMemory + next, g_1072ada4.m_mem.m_pMemory + idx, move * 4);
    int *slot = g_1072ada4.m_mem.m_pMemory + idx;
    if (slot)
        *slot = h;
}
// END FUNCTION

// FUNCTION: 0x1018df00 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_1047332c;
extern char g_1058ed0c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: prop_base
extern "C" GP *prop_base()
{
	GP *p = (GP *)sub_1000db89(0x730);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_1047332c;
	} else {
		p = 0;
	}
	p->name(g_1058ed0c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1018e9d0 size=0xa
extern int g_1058d1ac;
// TARGET: sub_1018e9d0
void sub_1018e9d0(int a, int b) { g_1058d1ac = b; }
// END FUNCTION

// FUNCTION: 0x1018f700 size=0xd
void CUnknown1018f700::sub_1018f700(char value)
{
	m_unk778 = value;
}
// END FUNCTION

// FUNCTION: 0x10190b10 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10001eba(GP *);
extern int vt_1047473c;
extern char g_1058efcc[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: prop_dynamic_ornament
extern "C" GP *prop_dynamic_ornament()
{
	GP *p = (GP *)sub_1000db89(0x8e4);
	if (p) {
		sub_10001eba(p);
		*(int **)p = &vt_1047473c;
	} else {
		p = 0;
	}
	p->name(g_1058efcc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10192a30 size=0x52
struct ISaveRestoreOps;
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
extern int g_1058da80[2];

int *sub_10192a30()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_nRequiredStr", {0x78c, 0}, 1, 6, "required_strength" },
        { 2, "m_sBreakSnd", {0x7a8, 0}, 1, 6, "break_sound" },
        { 2, "m_sBreakSnd", {0x7a8, 0}, 1, 6, "break_sound" },
        { 5, "m_bConstraintBroken", {0x7ac, 0}, 1, 2 },
        { 10, "m_OnBreakConstraint", {0x790, 0}, 1, 0x16, "OnBreakConstraint", g_1055dc70 },
    };
    g_1058da80[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1058da80[0] = (int)&dataDesc[1];
    return g_1058da80;
}
// END FUNCTION

// FUNCTION: 0x101931c0 size=0x52
struct ISaveRestoreOps;
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
extern int g_1058dba0[2];

int *sub_101931c0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 4, "m_nDamagedSkin", {0x730, 0}, 1, 6, "damaged_skin" },
        { 10, "m_OnSlashed", {0x734, 0}, 1, 0x16, "OnSlashed", g_1055dc70 },
    };
    g_1058dba0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1058dba0[0] = (int)&dataDesc[1];
    return g_1058dba0;
}
// END FUNCTION

// FUNCTION: 0x10194270 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_1047659c;
extern char g_1058f46c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: prop_largehull_ignore
extern "C" GP *prop_largehull_ignore()
{
	GP *p = (GP *)sub_1000db89(0x730);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_1047659c;
	} else {
		p = 0;
	}
	p->name(g_1058f46c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10194da0 size=0x74
#include "CUnknown10194da0.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown10194da0::sub_10194da0(int num)
{
    if (m_growSize == -1)
        return;
    int newAlloc = m_allocationCount;
    int target = num + newAlloc;
    if (newAlloc < target) {
        do {
            if (newAlloc != 0) {
                if (m_growSize != 0)
                    newAlloc += m_growSize;
                else
                    newAlloc += newAlloc;
            } else
                newAlloc = 1;
        } while (newAlloc < target);
        m_allocationCount = newAlloc;
    }
    if (m_pMemory)
        m_pMemory = (char *)g_109f3638(m_pMemory, m_allocationCount * 0x11c);
    else
        m_pMemory = (char *)g_109f3634(m_allocationCount * 0x11c);
}
// END FUNCTION

// FUNCTION: 0x10196c50 size=0x81
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct IEng {
    V100(a) V10(b) V10(c)
    virtual int v120();
};
struct PyObj { int refcnt; };
extern IEng *g_1070b22c;
extern int (*g_109f37a0)(PyObj *, const char *, ...);
extern PyObj *(*g_109f3798)(long);
extern void (*g_109f375c)();
extern char g_10590f48[];
PyObj *sub_10196c50(PyObj *self, PyObj *args)
{
    PyObj *r = 0;
    int local_8 = 0;
    int local_4 = 0;
    if (g_109f37a0(args, g_10590f48, &local_4, &local_8)) {
        int v = g_1070b22c->v120();
        if (v % local_8 == local_4 - 1)
            r = g_109f3798(1);
        else
            r = g_109f3798(0);
        r->refcnt++;
    } else {
        g_109f375c();
    }
    return r;
}
// END FUNCTION

// FUNCTION: 0x10196ea0 size=0x68
struct SPyObj { int refcnt; void **type; };
struct SSink { void sub_1000769e(SPyObj *a, int b, int c); };
extern SSink g_106e7050;
extern int (*g_109f37a0)(void *, const char *, ...);
extern SPyObj *(*g_109f37c8)(const char *);
extern "C" __declspec(dllimport) SPyObj _Py_NoneStruct;
// TARGET: sub_10196ea0
SPyObj *sub_10196ea0(void *self, void *args)
{
    int n;
    const char *s;
    if (g_109f37a0(args, "fs", &n, &s)) {
        SPyObj *o = g_109f37c8(s);
        g_106e7050.sub_1000769e(o, n, 0);
        if (--o->refcnt == 0)
            ((void (*)(SPyObj *))o->type[6])(o);
    }
    _Py_NoneStruct.refcnt++;
    return &_Py_NoneStruct;
}
// END FUNCTION

// FUNCTION: 0x10199e20 size=0x65
struct PyObj;
struct PyType { char pad[0x18]; void (*dealloc)(PyObj*); };
struct PyObj { int refcnt; PyType* type; };
extern "C" {
__declspec(dllimport) int Py_IsInitialized();
__declspec(dllimport) PyObj* PyDict_New();
}
extern PyObj* g_1072b370;
extern PyObj* g_1072b374;

// TARGET: sub_10199e20
void sub_10199e20()
{
	if (Py_IsInitialized()) {
		if (g_1072b370) {
			g_1072b370->refcnt--;
			if (g_1072b370->refcnt == 0)
				g_1072b370->type->dealloc(g_1072b370);
			g_1072b370 = PyDict_New();
		}
		if (g_1072b374) {
			g_1072b374->refcnt--;
			if (g_1072b374->refcnt == 0)
				g_1072b374->type->dealloc(g_1072b374);
			g_1072b374 = PyDict_New();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1019be80 size=0x67
struct PyObj;
struct PyType { char pad[0x18]; void (*dealloc)(PyObj*); };
struct PyObj { int refcnt; PyType* type; };
extern "C" {
__declspec(dllimport) PyObj* PyImport_ImportModule(const char* name);
__declspec(dllimport) PyObj* PyModule_GetDict(PyObj* m);
__declspec(dllimport) PyObj* PyDict_GetItemString(PyObj* d, const char* key);
}

// TARGET: sub_1019be80
PyObj* sub_1019be80(const char* module, const char* name)
{
	PyObj* result = 0;
	PyObj* mod = PyImport_ImportModule(module);
	if (mod) {
		PyObj* dict = PyModule_GetDict(mod);
		if (dict) {
			dict->refcnt++;
			result = PyDict_GetItemString(dict, name);
			if (--dict->refcnt == 0)
				dict->type->dealloc(dict);
		}
		if (--mod->refcnt == 0)
			mod->type->dealloc(mod);
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x1019c950 size=0x7d
struct IApi {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(void *p);
    virtual void v21(); virtual void v22();
    virtual void v23(void *p);
    virtual void v24(void *p);
};
extern IApi *g_10723940;
struct Item24 { int a; int b; int c; int d; int e; int f; };
struct Block {
    int count;
    void *m_p;
    int pad[2];
    int m_u14;
    Item24 items[1];
};
void sub_1019c950(int *s)
{
    int *b = s;
    if (*b != 0) {
        int i = 0;
        int *p;
        if (0 < *b) {
            p = b + 6;
            do {
                g_10723940->v23((void *)*p);
                *p = 0;
                i++;
                p += 6;
            } while (i < *b);
        }
        i = 0;
        if (0 < *b) {
            p = b + 5;
            do {
                g_10723940->v20((void *)*p);
                *p = 0;
                i++;
                p += 6;
            } while (i < *b);
        }
        g_10723940->v24((void *)b[1]);
        b[1] = 0;
        *b = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x1019d130 size=0x6c
#include "CUnknown1019d130.h"
struct IObj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34();
    virtual int v35(int);
};
extern IObj *g_1070b22c;
void sub_10430fa0(void *, const void *, unsigned);

void CUnknown1019d130::sub_1019d130(CBaseEntity *pEnt)
{
    int h = *(int *)((char *)pEnt + 0x2e0);
    int v = g_1070b22c->v35(h);
    int n = m_Size;
    int i = 0;
    for (; i < n; i++) {
        if (m_pData[i] == v)
            goto found;
    }
    return;
found:
    if (i != -1) {
        int c = n - i - 1;
        if (c > 0)
            sub_10430fa0(m_pData + i, m_pData + i + 1, c * 4);
        m_Size--;
    }
}
// END FUNCTION

// FUNCTION: 0x1019d490 size=0xa
void CUnknown1019d490::sub_1019d490(char value)
{
	m_unk29 = value;
}
// END FUNCTION

// FUNCTION: 0x101a17c0 size=0x77
#include "CRestore.h"
struct CRestoreField { int pad; const char *fieldName; char rest[0x2c - 8]; };
extern "C" int _strcmpi(const char *, const char *);
CRestoreField *CRestore::sub_101a17c0(const char *name, CRestoreField *fields, int count, int *pStart)
{
    if (name) {
        for (int i = 0; i < count; i++) {
            CRestoreField *f = &fields[(*pStart)++];
            if (*pStart == count)
                *pStart = 0;
            if (!_strcmpi(f->fieldName, name))
                return f;
        }
    }
    *pStart = 0;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101a1f70 size=0xc
int CUnknown101a1f70::sub_101a1f70()
{
	if (m_unk18 == 0)
		return 0;
	return m_unk18->m_unk4;
}
// END FUNCTION

// FUNCTION: 0x101a59f0 size=0x6a
#include "CUnknown101a59f0.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown101a59f0::sub_101a59f0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 1;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 40);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 40);
}
// END FUNCTION

// FUNCTION: 0x101ac2f0 size=0xa
unsigned int CAmbientGeneric::sub_101ac2f0()
{
	return m_spawnflags & 1;
}
// END FUNCTION

// FUNCTION: 0x101af9b0 size=0xa
char * __fastcall sub_101af9b0(char *self)
{
	self[0x100] = 0;
	return self;
}
// END FUNCTION

// FUNCTION: 0x101afba0 size=0x8
struct CUnknown101afba0 { char pad[0x100]; char m_Flag; void sub_101afba0(); };
void CUnknown101afba0::sub_101afba0() { m_Flag = 0; }
// END FUNCTION

// FUNCTION: 0x101b24d0 size=0x7b
struct ChanEnt { int value; const char *name; };
extern ChanEnt g_10598c78[7];
extern char g_10599140[];
extern char g_105990e8[];
extern int (*g_109f3848)(const char *, const char *, int);
extern int (*g_109f3880)(const char *, const char *);
extern void (*g_109f3630)(const char *, ...);
extern "C" unsigned strlen(const char *);
extern "C" int atoi(const char *);
int sub_101b24d0(const char *s)
{
    if (!s)
        return 0;
    if (g_109f3848(s, g_10599140, strlen(g_10599140)) != 0)
        return atoi(s);
    int (*cmp)(const char *, const char *) = g_109f3880;
    int i = 0;
    do {
        if (cmp(s, g_10598c78[i].name) == 0)
            return g_10598c78[i].value;
        i++;
    } while (i < 7);
    g_109f3630(g_105990e8, s);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b6a30 size=0x8
void __fastcall sub_101b6a30(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x101b72e0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem8_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem8_t::sub_101b72e0
	void sub_101b72e0(int num);
};

void CMem8_t::sub_101b72e0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 4;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x101b90a0 size=0x7c
#include "CUnknown101b90a0.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown101b90a0::sub_101b90a0(int num)
{
    if (m_growSize == -1)
        return;
    int newAlloc = m_allocationCount;
    int target = num + newAlloc;
    if (newAlloc < target) {
        do {
            if (newAlloc != 0) {
                if (m_growSize != 0)
                    newAlloc += m_growSize;
                else
                    newAlloc += newAlloc;
            } else
                newAlloc = 1;
        } while (newAlloc < target);
        m_allocationCount = newAlloc;
    }
    if (m_pMemory)
        m_pMemory = (char *)g_109f3638(m_pMemory, m_allocationCount * 0xe8);
    else
        m_pMemory = (char *)g_109f3634(m_allocationCount * 0xe8);
}
// END FUNCTION

// FUNCTION: 0x101bb220 size=0x6b
struct ScopeEntry {
    const char *a;
    const char *b;
    const char *c;
};
struct IStringTable {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
    virtual int v35(int a);
};
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern IStringTable *g_1070b22c;

int sub_101bb220(int a)
{
    g_109f3620[*g_109f3680].a = "CSoundEnt::ClientSoundIndex";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = g_1070b22c->v35(a) - 1;
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x101bc000 size=0x8
void __fastcall sub_101bc000(int *p)
{
	p[9] = 0;
}
// END FUNCTION

// FUNCTION: 0x101bd940 size=0x9
struct S { virtual void v0(); virtual void v1(); };
// TARGET: sub_101bd940
void __fastcall sub_101bd940(char *t) { ((S *)(t - 4))->v1(); }
// END FUNCTION

// FUNCTION: 0x101bd960 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101bd960(void **p) { void **q = p - 1; ((Fn *)*q)[0](q); }
// END FUNCTION

// FUNCTION: 0x101bdeb0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem4d_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem4d_t::sub_101bdeb0
	void sub_101bdeb0(int num);
};

void CMem4d_t::sub_101bdeb0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 8;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 2);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x101bdf90 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_101bdf90
void __fastcall sub_101bdf90(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x101be1d0 size=0x9
float CStealthKillRules::sub_101be1d0(CBaseEntity *pEntity)
{
	return m_flRange;
}
// END FUNCTION

// FUNCTION: 0x101c0240 size=0x6a
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S101c0240 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_101c0240(int num);
};
// TARGET: S101c0240::sub_101c0240
void S101c0240::sub_101c0240(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 3;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0xc);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0xc);
}
// END FUNCTION

// FUNCTION: 0x101c1b40 size=0xd
void CUnknown101c1b40::sub_101c1b40(int mode)
{
	mode = 0;
	sub_1000d90e(mode);
}
// END FUNCTION

// FUNCTION: 0x101c1b60 size=0xd
void CUnknown101c1b60::sub_101c1b60(int value)
{
	value = 1;
	sub_101c1bc0(value);
}
// END FUNCTION

// FUNCTION: 0x101c1b80 size=0xd
void CUnknown101c1b40::sub_101c1b80(int mode)
{
	mode = 2;
	sub_1000d90e(mode);
}
// END FUNCTION

// FUNCTION: 0x101c1ba0 size=0xd
void CUnknown101c1b60::sub_101c1ba0(int value)
{
	value = 3;
	sub_101c1bc0(value);
}
// END FUNCTION

// FUNCTION: 0x101c2a10 size=0xa
struct CUnknown101c2a10 { char p[0x40]; int a; void sub_101c2a10(int v); };
// TARGET: CUnknown101c2a10::sub_101c2a10
void CUnknown101c2a10::sub_101c2a10(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x101c2a50 size=0xa
struct CUnknown101c2a50 { char p[0x44]; int a; void sub_101c2a50(int v); };
// TARGET: CUnknown101c2a50::sub_101c2a50
void CUnknown101c2a50::sub_101c2a50(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x101c2a70 size=0xd
#include "CUnknown101c2a90.h"

float CUnknown101c2a90::sub_101c2a70()
{
	float f = m_fValue;
	if (m_pScale)
		f *= m_pScale->m_fScale;
	return f;
}
// END FUNCTION

// FUNCTION: 0x101c2a90 size=0xa
void CUnknown101c2a90::sub_101c2a90(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x101c2ad0 size=0xa
void CUnknown101c2a90::sub_101c2ad0(char value)
{
	m_bFlag2 = value;
}
// END FUNCTION

// FUNCTION: 0x101c2b10 size=0xa
struct CUnknown101c2b10 { char p[0x4a]; char a; void sub_101c2b10(char v); };
// TARGET: CUnknown101c2b10::sub_101c2b10
void CUnknown101c2b10::sub_101c2b10(char v) { a = v; }
// END FUNCTION

// FUNCTION: 0x101c4490 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem4e_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem4e_t::sub_101c4490
	void sub_101c4490(int num);
};

void CMem4e_t::sub_101c4490(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 8;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 2);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x101c4790 size=0xa
struct CUnknown101c4790 { CUnknown101c4790 *a; CUnknown101c4790 *b; CUnknown101c4790* sub_101c4790(int x); };
// TARGET: CUnknown101c4790::sub_101c4790
CUnknown101c4790* CUnknown101c4790::sub_101c4790(int x) { b = this; a = this; return this; }
// END FUNCTION

// FUNCTION: 0x101c4820 size=0x9
struct CUnknown101c4760 { int a; int b; int c; void sub_101c4760(); };
// TARGET: sub_101c4820
void sub_101c4820(CUnknown101c4760 *p) { p->sub_101c4760(); }
// END FUNCTION

// FUNCTION: 0x101c67e0 size=0x52
struct ISaveRestoreOps;
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
extern int g_1059da9c[2];
void sub_10015212();
void sub_1000ae1b();

int *sub_101c67e0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, "CTriggerMultipleMultiTouch", {0, 0}, 1, 0x20, 0, 0, (void *)sub_10015212 },
        { 0, "CTriggerMultipleMultiWaitOver", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000ae1b },
        { 10, "m_OnTrigger", {0x598, 0}, 1, 0x16, "OnTrigger", g_1055dc70 },
    };
    g_1059da9c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059da9c[0] = (int)&dataDesc[1];
    return g_1059da9c;
}
// END FUNCTION

// FUNCTION: 0x101c9cf0 size=0x52
struct ISaveRestoreOps;
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
extern int g_1059e208[2];
void sub_1000ffbf();

int *sub_101c9cf0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, "CTriggerProximityMeasureThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_1000ffbf },
        { 2, "m_iszMeasureTarget", {0x59c, 0}, 1, 6, "measuretarget" },
        { 1, "m_fRadius", {0x5a0, 0}, 1, 6, "radius" },
        { 10, "m_NearestEntityDistance", {0x5a8, 0}, 1, 0x16, "NearestEntityDistance", g_1055dc70 },
    };
    g_1059e208[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059e208[0] = (int)&dataDesc[1];
    return g_1059e208;
}
// END FUNCTION

// FUNCTION: 0x101cb6b0 size=0x52
struct ISaveRestoreOps;
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
extern int g_1059e768[2];
void sub_10004395();

int *sub_101cb6b0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, "InputCheckNow", {0, 0}, 1, 8, "CheckNow", 0, (void *)sub_10004395 },
        { 10, "m_OnEntityInVolume", {0x598, 0}, 1, 0x16, "OnEntityInVolume", g_1055dc70 },
    };
    g_1059e768[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1059e768[0] = (int)&dataDesc[1];
    return g_1059e768;
}
// END FUNCTION

// FUNCTION: 0x101cc790 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc790(void **p) { ((Fn *)*p)[247](p); }
// END FUNCTION

// FUNCTION: 0x101cc7a0 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown101cc7a0 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
	virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
	virtual void slot248();
	void sub_101cc7a0();
};
void CUnknown101cc7a0::sub_101cc7a0() { slot248(); }
// END FUNCTION

// FUNCTION: 0x101cc7b0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc7b0(void **p) { ((Fn *)*p)[249](p); }
// END FUNCTION

// FUNCTION: 0x101cc7c0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc7c0(void **p) { ((Fn *)*p)[242](p); }
// END FUNCTION

// FUNCTION: 0x101cc7d0 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown101cc7d0 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	V5(r0) V5(r1)
	virtual void f0();
	virtual void slot251();
	void sub_101cc7d0();
};
void CUnknown101cc7d0::sub_101cc7d0() { slot251(); }
// END FUNCTION

// FUNCTION: 0x101cc7e0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc7e0(void **p) { ((Fn *)*p)[243](p); }
// END FUNCTION

// FUNCTION: 0x101cc7f0 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc7f0(void **p) { ((Fn *)*p)[244](p); }
// END FUNCTION

// FUNCTION: 0x101cc800 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown101cc800 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	V5(r0)
	virtual void slot245();
	void sub_101cc800();
};
void CUnknown101cc800::sub_101cc800() { slot245(); }
// END FUNCTION

// FUNCTION: 0x101cc810 size=0x8
typedef void (__fastcall *Fn)(void *);
void __fastcall sub_101cc810(void **p) { ((Fn *)*p)[246](p); }
// END FUNCTION

// FUNCTION: 0x101cd070 size=0x73
struct EntInfo { void *ent; unsigned int serial; int pad; };
struct EntList {
    int vptr;
    EntInfo arr[1];
};
extern EntList *g_10566458;
struct Ent;
struct EHandle {
    unsigned int m_Index;
    Ent *Get() const
    {
        if (m_Index == 0xffffffff)
            return 0;
        const EntInfo *p = &g_10566458->arr[m_Index & 0x1fff];
        if (p->serial == (m_Index >> 13))
            return (Ent *)p->ent;
        return 0;
    }
};
struct Ent {
    char pad[0x25c];
    EHandle m_hParent;
};

Ent * __stdcall sub_101cd070(Ent *ent)
{
    if (ent == 0)
        return 0;
    while (ent->m_hParent.Get() != 0) {
        Ent *p = ent->m_hParent.Get();
        ent = p;
    }
    return ent;
}
// END FUNCTION

// FUNCTION: 0x101cf620 size=0xd
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

void sub_101cf620()
{
	Msg("UTIL_ParticleEffect:  Disabled\n");
}
// END FUNCTION

// FUNCTION: 0x101cf720 size=0x7b
struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern char g_1072d4b8[];
extern int (*g_109f387c)(char *, int, const char *, char *);

char *sub_101cf720(const char *format, ...)
{
    g_109f3620[*g_109f3680].name = "UTIL_VarArgs";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    char *argptr = (char *)&format + sizeof(format);
    g_109f387c(g_1072d4b8, 0x400, format, argptr);
    --*g_109f3680;
    return g_1072d4b8;
}
// END FUNCTION

// FUNCTION: 0x101cf9b0 size=0x6f
struct IInner {
    virtual void v0();
    virtual bool IsFlagged();
    char pad[0x28];
    int m_val2c;
};
struct IVar {
    int pad0;
    IInner *m_pInner;
};
struct IVarFinder {
    virtual void v0(); virtual void v1();
    virtual IVar *Find(const char *name);
};
extern IVarFinder *g_1070b234;

bool sub_101cf9b0(int id)
{
    if (id != -1) {
        if (id == 0xf7) {
            IVar *v = g_1070b234->Find("violence_hblood");
            if (v && !v->m_pInner->IsFlagged() && v->m_pInner->m_val2c != 0)
                return true;
        } else {
            IVar *v = g_1070b234->Find("violence_ablood");
            if (v && !v->m_pInner->IsFlagged() && v->m_pInner->m_val2c != 0)
                return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x101cfd80 size=0x69
struct TRandom {
	virtual void v0();
	virtual float RandomFloat(float lo, float hi);
};
extern TRandom *g_1070b244;

struct TVec {
	float x, y, z;
};

TVec sub_101cfd80()
{
	TVec v;
	v.x = g_1070b244->RandomFloat(-1.0f, 1.0f);
	v.y = g_1070b244->RandomFloat(-1.0f, 1.0f);
	v.z = g_1070b244->RandomFloat(0.0f, 1.0f);
	return v;
}
// END FUNCTION

// FUNCTION: 0x101d4f20 size=0xc
void CUnknown101d4f20::sub_101d4f20(CUnknown101d4f20_Value *out)
{
	CUnknown101d4f20_Value v = m_unk78;
	*out = v;
}
// END FUNCTION

// FUNCTION: 0x101d4f40 size=0xc
void CUnknown101d4f20::sub_101d4f40(CUnknown101d4f20_Value *out)
{
	CUnknown101d4f20_Value v = m_unk7c;
	*out = v;
}
// END FUNCTION

// FUNCTION: 0x101d54f0 size=0xd
// TARGET: CUnknown101d54f0::sub_101d54f0
CUnknown101d54f0 *CUnknown101d54f0::sub_101d54f0()
{
	m_unk8 = 0;
	m_unk0 = 0;
	m_unk4 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101d8890 size=0xa
extern int g_1073938c;
// TARGET: sub_101d8890
void sub_101d8890(int v) { g_1073938c = v; }
// END FUNCTION

// FUNCTION: 0x101d9210 size=0x7f
#include "CUnknown101d9210.h"

struct SHandleMgr { void sub_10202fb0(int handle); };
extern SHandleMgr g_1074e968;

void CUnknown101d9210::sub_101d9210()
{
    if (m_pBuf0c != 0) {
        delete m_pBuf0c;
        m_pBuf0c = 0;
        m_count0 = 0;
    }
    g_1074e968.sub_10202fb0(m_handle10);
    m_handle10 = -1;
    g_1074e968.sub_10202fb0(m_handle14);
    m_handle14 = -1;
    g_1074e968.sub_10202fb0(m_handle18);
    m_handle18 = -1;
    if (m_pBuf20 != 0) {
        delete m_pBuf20;
        m_pBuf20 = 0;
        m_count1c = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x101da960 size=0xe
#include "CUnknown101da960.h"
extern const char *g_105a1bdc[];
// TARGET: CUnknown101da960::sub_101da960
const char *CUnknown101da960::sub_101da960(int index)
{
	return g_105a1bdc[index];
}
// END FUNCTION

// FUNCTION: 0x101daf60 size=0x9
bool CUnknown101daf60::sub_101daf60()
{
	if (m_pData)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x101db5f0 size=0xd
CUnknown101db5f0* CUnknown101db5f0::sub_101db5f0()
{
	m_unk8 = 0;
	m_unk0 = 0;
	m_unk4 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101db7e0 size=0x66
struct Elem101db7e0 { void sub_100123f0(); };
struct S101db7e0 {
    int m0;
    int m4;
    Elem101db7e0 **m8;
    void sub_101db7e0();
};
// TARGET: S101db7e0::sub_101db7e0
void S101db7e0::sub_101db7e0()
{
    if (m8) {
        for (int i = 0; i < m4; i++) {
            Elem101db7e0 *e = m8[i];
            if (e) {
                e->sub_100123f0();
                delete e;
            }
            m8[i] = 0;
        }
        delete m8;
        m8 = 0;
    }
    m4 = 0;
    m0 = 0;
}
// END FUNCTION

// FUNCTION: 0x101db9a0 size=0x8
void __fastcall sub_100107d5(char *p);
void __fastcall sub_101db9a0(char *p) { sub_100107d5(p + 0x24); }
// END FUNCTION

// FUNCTION: 0x101dba50 size=0xc
extern const char *g_105a1c18[];
const char *sub_101dba50(int index)
{
	return g_105a1c18[index];
}
// END FUNCTION

// FUNCTION: 0x101dbb00 size=0xc
extern const char *g_105a1c20[];
const char *sub_101dbb00(int index)
{
	return g_105a1c20[index];
}
// END FUNCTION

// FUNCTION: 0x101ddb40 size=0x78
extern int (*g_109f388c)(char *, int, const char *, ...);
extern void (*g_109f3628)(const char *, ...);
struct Range {
    int m_Min;
    int m_Max;
    void sub_101ddb40(const char *name);
};

void Range::sub_101ddb40(const char *name)
{
    char buf[512];
    if (m_Min == m_Max) {
        if (m_Max == 0)
            return;
    }
    if (m_Min != m_Max)
        g_109f388c(buf, 512, "[%s]: %d - %d\n", name, m_Min, m_Max);
    else
        g_109f388c(buf, 512, "[%s]: %d\n", name, m_Min);
    g_109f3628("%s", buf);
}
// END FUNCTION

// FUNCTION: 0x101e0040 size=0xd
CUnknown101e0040* CUnknown101e0040::sub_101e0040()
{
	m_unk8 = 0;
	m_unk0 = 0;
	m_unk4 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101e1850 size=0xc
unsigned int __stdcall sub_101e1850(unsigned int value)
{
	return value & 0x7fffffff;
}
// END FUNCTION

// FUNCTION: 0x101e1870 size=0xc
unsigned int __stdcall sub_101e1870(unsigned int v)
{
	return v | 0x80000000;
}
// END FUNCTION

// FUNCTION: 0x101e22b0 size=0x8
struct CUnknown101e22b0 { int pad[5]; int m_State; bool sub_101e22b0(); };
bool CUnknown101e22b0::sub_101e22b0() { if (m_State == 1) return true; return false; }
// END FUNCTION

// FUNCTION: 0x101e4a00 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem4 {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_101e4a00(int num);
};

// TARGET: UtlMem4::sub_101e4a00
void UtlMem4::sub_101e4a00(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x101e4a90 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown101e4a90 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	V25(r0)
	virtual void f0();
	virtual void slot266();
	void sub_101e4a90();
};
void CUnknown101e4a90::sub_101e4a90() { slot266(); }
// END FUNCTION

// FUNCTION: 0x101e8080 size=0xd
// TARGET: CUnknown101e8080::sub_101e8080
void CUnknown101e8080::sub_101e8080(int *out, void *ent, float dist, int flags)
{
	*out = 3;
}
// END FUNCTION

// FUNCTION: 0x101e80a0 size=0x8
int __stdcall sub_101e80a0(int) { return 10; }
// END FUNCTION

// FUNCTION: 0x101e8250 size=0xb
struct CInner { unsigned int sub_1000f03d(int a); };
struct CMid { char pad[0x14]; CInner *m_p14; };
struct COwner
{
	char pad[0x1c];
	CMid *m_p1c;
	unsigned int sub_101e8250(int a);
};

unsigned int COwner::sub_101e8250(int a)
{
	return m_p1c->m_p14->sub_1000f03d(a);
}
// END FUNCTION

// FUNCTION: 0x101e83d0 size=0xd
#include "CUnknown101e83d0.h"
// TARGET: CUnknown101e83d0::sub_101e83d0
void CUnknown101e83d0::sub_101e83d0(int *out, void *ent, int flags)
{
	*out = 3;
}
// END FUNCTION

// FUNCTION: 0x101e83f0 size=0xd
void __stdcall sub_101e83f0(int* out, int b, int c)
{
	*out = 3;
}
// END FUNCTION

// FUNCTION: 0x101e8410 size=0xd
void __stdcall sub_101e8410(int *p, int a, int b)
{
	*p = 3;
}
// END FUNCTION

// FUNCTION: 0x101e94b0 size=0xa
extern int g_1073a144;

void sub_101e94b0(int value)
{
	g_1073a144 = value;
}
// END FUNCTION

// FUNCTION: 0x101e9880 size=0xd
CUnknown101e9880* CUnknown101e9880::sub_101e9880()
{
	m_unk0 = 0;
	m_unk4 = 0;
	m_unk8 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101e9a80 size=0xac
struct HNode { virtual void v0(); virtual void v1(); virtual HNode* Find(const char*); virtual HNode* Next(); };
struct HStream { virtual void v0(); virtual void Close(); };
struct HFile { virtual void v0(); virtual void v1(); virtual HNode* Find(const char*); int* vb; };
struct HItem { void sub_1000a989(HNode*); };
struct HOwner { HItem* sub_1000e18d(); char sub_101e9a80(const char*); };
extern void* g_1070b238;
HFile* sub_1000a119(const char*, void*);
extern void (*g_109f3628)(const char*, ...);
extern char g_105a4674[];
extern char g_105a4664[];
extern char g_105a4610[];
// TARGET: HOwner::sub_101e9a80
char HOwner::sub_101e9a80(const char* name)
{
	HFile* f = sub_1000a119(name, g_1070b238);
	if (!f) {
		g_109f3628(g_105a4674, name);
		return 0;
	}
	HNode* n = f->Find(g_105a4664);
	while (n) {
		HItem* it = sub_1000e18d();
		if (!it) {
			g_109f3628(g_105a4610, name);
			((HStream*)((char*)f + f->vb[1] + 4))->Close();
			return 0;
		}
		it->sub_1000a989(n);
		n = n->Next();
	}
	((HStream*)((char*)f + f->vb[1] + 4))->Close();
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101eaa40 size=0xa
extern int g_1073a38c;

void sub_101eaa40(int value)
{
	g_1073a38c = value;
}
// END FUNCTION

// FUNCTION: 0x101eaa60 size=0xa
extern int g_1073a390;

void sub_101eaa60(int value)
{
	g_1073a390 = value;
}
// END FUNCTION

// FUNCTION: 0x101eaa80 size=0xa
extern int g_1073a394;

void sub_101eaa80(int value)
{
	g_1073a394 = value;
}
// END FUNCTION

// FUNCTION: 0x101eaaa0 size=0xa
extern int g_1073a398;

void sub_101eaaa0(int value)
{
	g_1073a398 = value;
}
// END FUNCTION

// FUNCTION: 0x101eaac0 size=0xa
extern int g_1073a39c;

void sub_101eaac0(int value)
{
	g_1073a39c = value;
}
// END FUNCTION

// FUNCTION: 0x101eaae0 size=0xa
extern int g_1073a3a0;

void sub_101eaae0(int value)
{
	g_1073a3a0 = value;
}
// END FUNCTION

// FUNCTION: 0x101eab00 size=0xa
extern int g_1073a3a4;

void sub_101eab00(int value)
{
	g_1073a3a4 = value;
}
// END FUNCTION

// FUNCTION: 0x101eab20 size=0xa
extern int g_1073a3a8;

void sub_101eab20(int value)
{
	g_1073a3a8 = value;
}
// END FUNCTION

// FUNCTION: 0x101eab40 size=0xa
extern int g_1073a3ac;

void sub_101eab40(int value)
{
	g_1073a3ac = value;
}
// END FUNCTION

// FUNCTION: 0x101eab60 size=0xa
extern int g_1073a3b0;

void sub_101eab60(int value)
{
	g_1073a3b0 = value;
}
// END FUNCTION

// FUNCTION: 0x101ed170 size=0x7b
#include "CUnknown101ed170.h"

void CUnknown101ed170::sub_101ed170()
{
    if (m_p10 != 0) {
        delete m_p10;
        m_p10 = 0;
    }
    if (m_p14 != 0) {
        delete m_p14;
        m_p14 = 0;
    }
    if (m_p18 != 0) {
        delete m_p18;
        m_p18 = 0;
    }
    if (m_p20 != 0) {
        delete m_p20;
        m_p20 = 0;
    }
    if (m_p24 != 0) {
        delete m_p24;
        m_p24 = 0;
    }
    if (m_p28 != 0) {
        delete m_p28;
        m_p28 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x101ed9e0 size=0xb
CUnknown101ed9e0 *CUnknown101ed9e0::sub_101ed9e0(int value)
{
	m_unk0 = value;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101eddb0 size=0xa
extern int g_1073a3b4;

void sub_101eddb0(int value)
{
	g_1073a3b4 = value;
}
// END FUNCTION

// FUNCTION: 0x101eddd0 size=0xa
extern int g_1073a3b8;

void sub_101eddd0(int value)
{
	g_1073a3b8 = value;
}
// END FUNCTION

// FUNCTION: 0x101f0270 size=0xb
int * __fastcall sub_101f0270(int *self, int, int value)
{
	*self = value;
	return self;
}
// END FUNCTION

// FUNCTION: 0x101f0d40 size=0xd
void CUnknown101f0d40::sub_101f0d40(int* dest)
{
	dest[13] = m_unk8;
}
// END FUNCTION

// FUNCTION: 0x101f1050 size=0x6b
#include "CUnknown101f1050.h"

extern void (*g_109f3628)(const char *, ...);

int *CUnknown101f1050::sub_101f1050()
{
    int *p = (int *)operator new(m_nCount * 4 + 4);
    if (p) {
        int i = 0;
        if (m_nCount > 0) {
            do {
                i++;
                p[i - 1] = m_pData[i - 1];
            } while (i < m_nCount);
        }
        delete m_pData;
        int n = m_nCount + 1;
        m_pData = p;
        m_nCount = n;
        int *q = &m_pData[m_nCount - 1];
        return q;
    }
    g_109f3628("Unable to allocate memory for strings in ReactionInfoList!.\n");
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101f2500 size=0x9
struct CUnknown101f2500 { int a; char sub_101f2500(); };
// TARGET: CUnknown101f2500::sub_101f2500
char CUnknown101f2500::sub_101f2500() { int v = ((int *)this)[-5]; return v != 0; }
// END FUNCTION

// FUNCTION: 0x101f2ae0 size=0xe
void sub_101f3030(void* p);

void __stdcall sub_101f2ae0(void* p)
{
	sub_101f3030(p);
}
// END FUNCTION

// FUNCTION: 0x101f2cd0 size=0xa
struct CUnknown101f2cd0 { int p[6]; int a; void sub_101f2cd0(int v); };
// TARGET: CUnknown101f2cd0::sub_101f2cd0
void CUnknown101f2cd0::sub_101f2cd0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x101f3060 size=0x8
void __fastcall sub_1000be01(char *p);
void __fastcall sub_101f3060(char *p) { sub_1000be01(p - *(int *)(p - 4)); }
// END FUNCTION

// FUNCTION: 0x101f3070 size=0x8
void __fastcall sub_10001807(char *p);
void __fastcall sub_101f3070(char *p) { sub_10001807(p - *(int *)(p - 4)); }
// END FUNCTION

// FUNCTION: 0x101f4280 size=0x8
int __fastcall sub_101f4280(int *p) { return (*p)++; }
// END FUNCTION

// FUNCTION: 0x101f4570 size=0x68
struct TInner {
	char pad[0x14];
	int count;
};

struct TSeg {
	char pad[8];
	TInner *inner;
	int *sizes;
	void sub_101f4570(int target, int *outIndex, int *outOffset);
};

void TSeg::sub_101f4570(int target, int *outIndex, int *outOffset)
{
	int n = inner->count;
	int sum = 0;
	int i = 0;
	if (0 < n) {
		int *p = sizes;
		do {
			int next = *p + sum;
			if (next > target) {
				if (outIndex)
					*outIndex = i;
				if (outOffset)
					*outOffset = target - sum;
				return;
			}
			i++;
			p++;
			sum = next;
		} while (i < n);
	}
	if (outIndex)
		*outIndex = 0;
	if (outOffset)
		*outOffset = 0;
}
// END FUNCTION

// FUNCTION: 0x101f5d60 size=0xd
extern char g_106b8540[];
// TARGET: CUnknown101f5d60::sub_101f5d60
const char *CUnknown101f5d60::sub_101f5d60()
{
	if (m_pszUnk24)
		return m_pszUnk24;
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x101f6c30 size=0x9
bool CUnknown101f6c30::sub_101f6c30()
{
	if (m_nCount == 0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x101f74e0 size=0x8
bool __fastcall sub_101f74e0(int *p) { bool r = p[3] != -1; return r; }
// END FUNCTION

// FUNCTION: 0x101f7b20 size=0x6b
#include "CUnknown101f7b20.h"

extern void (*g_109f3628)(const char *, ...);

int *CUnknown101f7b20::sub_101f7b20()
{
    int *p = (int *)operator new(m_nCount * 4 + 4);
    if (p) {
        int i = 0;
        if (m_nCount > 0) {
            do {
                i++;
                p[i - 1] = m_pData[i - 1];
            } while (i < m_nCount);
        }
        delete m_pData;
        int n = m_nCount + 1;
        m_pData = p;
        m_nCount = n;
        int *q = &m_pData[m_nCount - 1];
        return q;
    }
    g_109f3628("Unable to allocate memory for strings in TraitEffectInfoList!.\n");
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101f9550 size=0xa
extern int g_1074e008;
void sub_101f9550(int value)
{
	g_1074e008 = value;
}
// END FUNCTION

// FUNCTION: 0x101f9570 size=0xa
extern int g_1074e00c;
void sub_101f9570(int value)
{
	g_1074e00c = value;
}
// END FUNCTION

// FUNCTION: 0x101f9590 size=0xa
extern int g_1074e010;

void sub_101f9590(int value)
{
	g_1074e010 = value;
}
// END FUNCTION

// FUNCTION: 0x101f95b0 size=0xa
extern int g_1074e014;
void sub_101f95b0(int value)
{
	g_1074e014 = value;
}
// END FUNCTION

// FUNCTION: 0x101f95d0 size=0xa
extern int g_1074e018;
void sub_101f95d0(int value)
{
	g_1074e018 = value;
}
// END FUNCTION

// FUNCTION: 0x101f95f0 size=0xa
extern int g_1074e01c;
void sub_101f95f0(int value)
{
	g_1074e01c = value;
}
// END FUNCTION

// FUNCTION: 0x101f9610 size=0xa
extern int g_1074e020;
void sub_101f9610(int value)
{
	g_1074e020 = value;
}
// END FUNCTION

// FUNCTION: 0x101f9630 size=0xa
extern int g_1074e024;
void sub_101f9630(int value)
{
	g_1074e024 = value;
}
// END FUNCTION

// FUNCTION: 0x101f9650 size=0xa
extern int g_1074e028;
void sub_101f9650(int value)
{
	g_1074e028 = value;
}
// END FUNCTION

// FUNCTION: 0x101f9670 size=0x9
CUnknown101f9670 *CUnknown101f9670::sub_101f9670()
{
	m_unk0 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101f9690 size=0xc
void CUnknown101f9670::sub_101f9690()
{
	if (m_unk0 != 0)
		m_unk0 = 0;
}
// END FUNCTION

// FUNCTION: 0x101f9c70 size=0xb6
#include "CUnknown101f9c70.h"
struct TraceEnt { const char *a; const void *b; const void *c; };
struct Res { void sub_10002d5b(); };
struct Loc { char buf[0x44]; void sub_10005ba0(int, int, int); int sub_1000b712(); };
struct Mgr { Res *sub_1000c5d1(int, Loc *); };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106b8540[];
extern Mgr g_1074df78;

// TARGET: CUnknown101f9c70::sub_101f9c70
int CUnknown101f9c70::sub_101f9c70(int a, int b, int c)
{
	g_109f3620[*g_109f3680].a = "CVTraitEffectList_t::Effect_Calc_Clan";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	Loc loc;
	loc.sub_10005ba0(a, b, c);
	for (int i = 0; i < m_count; i++)
		g_1074df78.sub_1000c5d1(m_items[i], &loc)->sub_10002d5b();
	int r = loc.sub_1000b712();
	--*g_109f3680;
	return r;
}
// END FUNCTION

// FUNCTION: 0x101fa8d0 size=0x6e
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct CVDmg_t { int f0; int f4; int f8; int fc; int f10; };

void __fastcall sub_101fa8d0(CVDmg_t *self, int, int a, int b, int c)
{
    g_109f3620[*g_109f3680].a = "CVDmg_t::Set";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    self->f0 = a;
    self->f10 = b;
    self->f4 = c;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x101faa70 size=0x7b
#include "CVDmg_t.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105a73fc[];
extern char g_106b8540[];
int CVDmg_t::sub_101faa70()
{
    g_109f3620[*g_109f3680].a = g_105a73fc;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (m_field08 > 0) {
        int v = m_field08;
        --*g_109f3680;
        return v;
    }
    if (m_field08 == 0) {
        int v = m_field04;
        --*g_109f3680;
        return v;
    }
    --*g_109f3680;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101fb200 size=0x83
#include "CVDmg_t.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern int (*g_1074e7bc)(CVDmg_t *, int, int);

int CVDmg_t::sub_101fb200(int a, int b)
{
    g_109f3620[*g_109f3680].name = "CVDmg_t::Apply";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    if (g_1074e7bc) {
        int r = g_1074e7bc(this, a, b);
        --*g_109f3680;
        return r;
    }
    --*g_109f3680;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101fb340 size=0x7e
#include "CVDmg_t.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern bool (*g_1074e7c0)(CVDmg_t *, int);

bool CVDmg_t::sub_101fb340(int target)
{
    g_109f3620[*g_109f3680].name = "CVDmg_t::EvadeCheck";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    if (g_1074e7c0) {
        bool r = g_1074e7c0(this, target);
        --*g_109f3680;
        return r;
    }
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x101fb3e0 size=0x66
struct ScopeTrace_t { const char *name; const char *a; const char *b; };
extern ScopeTrace_t *g_109f3620;
extern int *g_109f3680;
extern const char g_106b8540[];
extern const char g_105a75f0[];

struct CVDmg_t {
	char pad[0x40]; unsigned int m_nFlags;
	// TARGET: CVDmg_t::sub_101fb3e0
	void sub_101fb3e0(unsigned int flags);
};

void CVDmg_t::sub_101fb3e0(unsigned int flags)
{
	g_109f3620[*g_109f3680].name = g_105a75f0;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	++*g_109f3680;
	m_nFlags |= flags;
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x101fb8f0 size=0x6c
struct TraceEnt { const char *a; void *b; void *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105a768c[];
extern char g_106b8540[];
struct CVStatSubCost_t { int v; bool sub_101fb8f0(); };
bool CVStatSubCost_t::sub_101fb8f0()
{
    g_109f3620[*g_109f3680].a = g_105a768c;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (v != 10000) {
        --*g_109f3680;
        return false;
    }
    --*g_109f3680;
    return true;
}
// END FUNCTION

// FUNCTION: 0x101fc160 size=0x81
#include "CVStatCost_t.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

bool CVStatCost_t::sub_101fc160()
{
    g_109f3620[*g_109f3680].name = "CVStatCost_t::IsNull";
    g_109f3620[*g_109f3680].ent = g_106b8540;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    if (m_first.sub_101fb8f0() && m_second.sub_101fb8f0()) {
        --*g_109f3680;
        return true;
    }
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x101fc950 size=0x68
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_105a7940[];
extern char g_106b8540[];

struct TStat {
	char pad0[4];
	int f4;
	char pad8[0x34];
	int f3c;
	void sub_101fc950(int a, int b);
};

void TStat::sub_101fc950(int a, int b)
{
	g_109f3620[*g_109f3680].name = g_105a7940;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	f4 = a;
	f3c = b;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x101fceb0 size=0x7e
#include "CVStatAction_t.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105a7a2c[];
extern char g_106b8540[];
bool CVStatAction_t::sub_101fceb0(int value)
{
    g_109f3620[*g_109f3680].a = g_105a7a2c;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (value >= m_nMin && value <= m_nMax) {
        --*g_109f3680;
        return true;
    }
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x101fd110 size=0x7d
#include "CVStatAction_t.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105a7abc[];
extern char g_106b8540[];
extern void (*g_1074e7c8)(CVStatAction_t *, int, int, int, int);
void CVStatAction_t::sub_101fd110(int a, int b, int c, int d)
{
    g_109f3620[*g_109f3680].a = g_105a7abc;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (g_1074e7c8)
        g_1074e7c8(this, a, b, c, d);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x101fd1b0 size=0x78
#include "CVStatAction_t.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105a7ad8[];
extern char g_106b8540[];
extern void (*g_1074e7cc)(CVStatAction_t *, int, int, int);
void CVStatAction_t::sub_101fd1b0(int a, int b, int c)
{
    g_109f3620[*g_109f3680].a = g_105a7ad8;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (g_1074e7cc)
        g_1074e7cc(this, a, b, c);
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x101fd430 size=0x69
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_105a7b60[];
extern char g_106b8540[];

struct TList {
	int a, b, c;
	TList *sub_101fd430();
};

TList *TList::sub_101fd430()
{
	g_109f3620[*g_109f3680].name = g_105a7b60;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	a = 0;
	b = 0;
	c = 0;
	(*g_109f3680)--;
	return this;
}
// END FUNCTION

// FUNCTION: 0x101fdf40 size=0x69
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_105a7d34[];
extern char g_106b8540[];

struct TInfo {
	void *p;
	bool sub_101fdf40();
};

bool TInfo::sub_101fdf40()
{
	g_109f3620[*g_109f3680].name = g_105a7d34;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	if (p) {
		(*g_109f3680)--;
		return true;
	}
	(*g_109f3680)--;
	return false;
}
// END FUNCTION

// FUNCTION: 0x101fed00 size=0x6d
struct TraceEnt { const char *a; void *b; void *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_105a80c0[];
extern char g_106b8540[];
struct CVStatInfo_t { char pad[0xfc]; int m_hidden; bool sub_101fed00(); };
bool CVStatInfo_t::sub_101fed00()
{
    g_109f3620[*g_109f3680].a = g_105a80c0;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (m_hidden == 0) {
        --*g_109f3680;
        return false;
    }
    --*g_109f3680;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10202760 size=0xc
extern int g_105a6fc8[];
int sub_10202760(int index)
{
	return g_105a6fc8[index];
}
// END FUNCTION

// FUNCTION: 0x10202780 size=0xc
extern int g_105a6fd8[];
int sub_10202780(int i)
{
	return g_105a6fd8[i];
}
// END FUNCTION

// FUNCTION: 0x10203dd0 size=0xc
extern void (*g_1074ede0)();
void sub_10203dd0(void)
{
	if (g_1074ede0)
		g_1074ede0();
}
// END FUNCTION

// FUNCTION: 0x10203e30 size=0xa
extern int g_1074ede0;

void sub_10203e30(int value)
{
	g_1074ede0 = value;
}
// END FUNCTION

// FUNCTION: 0x10204550 size=0xa
extern int g_1074eec4;

void sub_10204550(int value)
{
	g_1074eec4 = value;
}
// END FUNCTION

// FUNCTION: 0x102056d0 size=0x9
struct CUnknown102056d0 { int m_val; CUnknown102056d0 *sub_102056d0(); };
CUnknown102056d0 *CUnknown102056d0::sub_102056d0() { m_val = -1; return this; }
// END FUNCTION

// FUNCTION: 0x10206300 size=0xb
int * __fastcall sub_10206300(int *self, int, int value)
{
	*self = value;
	return self;
}
// END FUNCTION

// FUNCTION: 0x10206980 size=0x7a
extern "C" int sprintf(char *, const char *, ...);
extern "C" int _strcmpi(const char *, const char *);
extern char g_10546244[];
extern char g_106b8540[];
void sub_10203dd0(char *);
struct StrHolder {
    const char *s;
    const char *Get() const { return s ? s : g_106b8540; }
};
struct NameItem { char pad[0xc]; StrHolder h; };
struct NameSet {
    char pad0[0xc];
    const char *m_name;
    int pad10;
    int m_count;
    NameItem **m_items;
    void sub_10206980(const char *other);
};
void NameSet::sub_10206980(const char *other)
{
    char buf[128];
    const char *n = m_name;
    if (!n)
        n = g_106b8540;
    sprintf(buf, g_10546244, n);
    sub_10203dd0(buf);
    if (other) {
        for (int i = 0; i < m_count; i++) {
            _strcmpi(m_items[i]->h.Get(), other);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10209a20 size=0x7c
#include "CItemContainer.h"
struct Sub { void *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
extern EntInfo *g_10566458;
extern char g_10538764[];
extern char g_105a9bac[];
extern "C" void *__RTDynamicCast(void *, long, void *, void *, int);
static inline void *HGet(const CItemContainerHandle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
static inline void *HPeek(const CItemContainerHandle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
void *CItemContainer::sub_10209a20()
{
    void *p = HPeek(&m_hLock);
    if (p == 0)
        return 0;
    return __RTDynamicCast(HGet(&m_hLock), 0, g_10538764, g_105a9bac, 0);
}
// END FUNCTION

// FUNCTION: 0x1020b000 size=0x9
int CBaseVampireSkillEntity::sub_1020b000(CBaseEntity *pPlayer)
{
	return m_unk78c;
}
// END FUNCTION

// FUNCTION: 0x1020b020 size=0x9
struct CUnknown1020b020 { char p[0x790]; int a; int sub_1020b020(int x); };
// TARGET: CUnknown1020b020::sub_1020b020
int CUnknown1020b020::sub_1020b020(int x) { return a; }
// END FUNCTION

// FUNCTION: 0x1020e060 size=0xa
void CUnknown1020e060::sub_1020e060(int unused)
{
	m_bFlag = 1;
}
// END FUNCTION

// FUNCTION: 0x1020e080 size=0xa
void CUnknown1020e060::sub_1020e080(int unused)
{
	m_bFlag = 0;
}
// END FUNCTION

// FUNCTION: 0x1020f2c0 size=0xa
void __fastcall sub_1020f2c0(char *self, int, int)
{
	self[0x80c] = 1;
}
// END FUNCTION

// FUNCTION: 0x1020f2e0 size=0xa
void __fastcall sub_1020f2e0(char *self, int, int)
{
	self[0x80c] = 0;
}
// END FUNCTION

// FUNCTION: 0x102158f0 size=0xa
void __fastcall sub_102158f0(char *self, int, int)
{
	self[0x738] = 1;
}
// END FUNCTION

// FUNCTION: 0x10215910 size=0xa
void CUnknown10215910::sub_10215910(int unused)
{
	m_unk738 = 0;
}
// END FUNCTION

// FUNCTION: 0x10216830 size=0xa
void __fastcall sub_10216830(char *self, int, int)
{
	self[0x734] = 1;
}
// END FUNCTION

// FUNCTION: 0x10216850 size=0xa
void __fastcall sub_10216850(char *self, int, int)
{
	self[0x734] = 0;
}
// END FUNCTION

// FUNCTION: 0x10216c20 size=0x52
struct ISaveRestoreOps;
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
extern int g_105ac944[2];

int *sub_10216c20()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_iszItemName", {0x598, 0}, 1, 6, "itemname" },
        { 10, "m_OnPlayerHasItem", {0x59c, 0}, 1, 0x16, "OnPlayerHasItem", g_1055dc70 },
    };
    g_105ac944[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105ac944[0] = (int)&dataDesc[1];
    return g_105ac944;
}
// END FUNCTION

// FUNCTION: 0x10217160 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown10217160 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8)
	V5(q0) V5(q1) V5(q2)
	V25(r0)
	virtual void slot265();
	void sub_10217160();
};
void CUnknown10217160::sub_10217160() { slot265(); }
// END FUNCTION

// FUNCTION: 0x10218080 size=0xa
void __fastcall sub_10218080(char *self, int, int)
{
	self[0x80c] = 1;
}
// END FUNCTION

// FUNCTION: 0x102180a0 size=0xa
void __fastcall sub_102180a0(char *self, int, int)
{
	self[0x80c] = 0;
}
// END FUNCTION

// FUNCTION: 0x1021e100 size=0x8
struct CUtlVectorBase { int a, b, c, m_Size; void sub_1021e100(); };
void CUtlVectorBase::sub_1021e100() { m_Size = 0; }
// END FUNCTION

// FUNCTION: 0x1021e160 size=0x8
void __fastcall sub_1021e160(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1021e1c0 size=0x8
void __fastcall sub_1021e1c0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1021e350 size=0x6d
struct Elem { char data[0x2b4]; };
struct Vec { Elem *m_pMemory; int pad[2]; int m_Size; };
void *sub_10430fa0(void *, const void *, unsigned int);

void __fastcall sub_1021e350(Vec *v, int, int index, int count)
{
    int n = v->m_Size - index - count;
    if (n > 0 && count > 0)
        sub_10430fa0(&v->m_pMemory[index + count], &v->m_pMemory[index], n * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x1021e410 size=0x8
void __fastcall sub_1021e410(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x1021e580 size=0x75
#include "CUnknown1021e580.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown1021e580::sub_1021e580(int num)
{
    if (m_growSize == -1)
        return;
    int newAlloc = m_allocationCount;
    int target = num + newAlloc;
    if (newAlloc < target) {
        do {
            if (newAlloc != 0) {
                if (m_growSize != 0)
                    newAlloc += m_growSize;
                else
                    newAlloc += newAlloc;
            } else
                newAlloc = 1;
        } while (newAlloc < target);
        m_allocationCount = newAlloc;
    }
    if (m_pMemory)
        m_pMemory = (char *)g_109f3638(m_pMemory, m_allocationCount * 0xd4);
    else
        m_pMemory = (char *)g_109f3634(m_allocationCount * 0xd4);
}
// END FUNCTION

// FUNCTION: 0x1021e620 size=0x7c
#include "CUnknown1021e620.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned long size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, unsigned long size);

struct Elem1021e620 { char data[0x2b4]; };

void CUnknown1021e620::sub_1021e620(int num)
{
	if (m_nGrowSize == -1)
		return;

	int nAllocationRequested = m_nAllocationCount + num;
	if (m_nAllocationCount < nAllocationRequested)
	{
		do
		{
			if (m_nAllocationCount)
			{
				if (m_nGrowSize)
					m_nAllocationCount += m_nGrowSize;
				else
					m_nAllocationCount += m_nAllocationCount;
			}
			else
			{
				m_nAllocationCount = 1;
			}
		} while (m_nAllocationCount < nAllocationRequested);
	}

	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * sizeof(Elem1021e620));
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * sizeof(Elem1021e620));
}
// END FUNCTION

// FUNCTION: 0x1021e6c0 size=0x70
struct Elem { char data[0x2c0]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

void __fastcall sub_1021e6c0(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_109f3638(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_109f3634(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10220e10 size=0x83
#include "QuestJournal.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

QuestJournal *QuestJournal::sub_10220e10()
{
    m_field[0] = 0;
    m_field[1] = 0;
    m_field[2] = 0;
    m_field[3] = 0;
    m_field[4] = 0;
    m_field[5] = 0;
    m_field[6] = 0;
    m_field[7] = 0;
    m_field[8] = 0;
    m_field[9] = 0;
    CScopeGuard guard("QuestJournal::QuestJournal");
    m_flag28 = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10221be0 size=0x85
#include "QuestJournal.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = g_106b8540;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

char QuestJournal::sub_10221be0(int index)
{
    CScopeGuard guard("QuestJournal::IsQuestIndexValid");
    if (index < 0)
        return 0;
    if (index >= m_field[8])
        return 0;
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10222da0 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory24 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_10222da0(int num);
};

void CUtlMemory24::sub_10222da0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 2;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 0x18);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 0x18);
}
// END FUNCTION

// FUNCTION: 0x10222e30 size=0x70
struct Elem { char data[0x68]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

void __fastcall sub_10222e30(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_109f3638(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_109f3634(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x10222ec0 size=0x6a
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S10222ec0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_10222ec0(int num);
};
// TARGET: S10222ec0::sub_10222ec0
void S10222ec0::sub_10222ec0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 3;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0xc);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0xc);
}
// END FUNCTION

// FUNCTION: 0x10223030 size=0x52
struct ISaveRestoreOps;
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
extern int g_105b19d0[2];

int *sub_10223030()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_iszNextKey", {0x450, 0}, 1, 6, "NextKey" },
        { 10, "m_OnReached", {0x45c, 0}, 1, 0x16, "OnReached", g_1055dc70 },
    };
    g_105b19d0[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105b19d0[0] = (int)&dataDesc[1];
    return g_105b19d0;
}
// END FUNCTION

// FUNCTION: 0x102237c0 size=0xd
void CUnknown102237c0::sub_102237c0(int value)
{
	value = 1;
	sub_10223940(value);
}
// END FUNCTION

// FUNCTION: 0x102237e0 size=0xd
void CUnknown102237e0::sub_102237e0(int index)
{
	index = -1;
	sub_1000e5ca(index);
}
// END FUNCTION

// FUNCTION: 0x10223800 size=0xd
#include "CUnknown10223800.h"
// TARGET: CUnknown10223800::sub_10223800
void CUnknown10223800::sub_10223800(int value)
{
	sub_10223940(0);
}
// END FUNCTION

// FUNCTION: 0x10223f20 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10011f9a(GP *);
extern int vt_1048bed4;
extern char g_105b2080[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: func_keyframed_mover
extern "C" GP *func_keyframed_mover()
{
	GP *p = (GP *)sub_1000db89(0x600);
	if (p) {
		sub_10011f9a(p);
		*(int **)p = &vt_1048bed4;
	} else {
		p = 0;
	}
	p->name(g_105b2080);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10224150 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3) T(c4) T(c5) T(c6)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void target();
};

void __fastcall sub_10224150(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10224170 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3) T(c4) T(c5) T(c6)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5();
	virtual void target();
};

void __fastcall sub_10224170(CSlots *self, int, int)
{
	self->target();
}
// END FUNCTION

// FUNCTION: 0x10227210 size=0xa
void CUnknown10227210::sub_10227210(int unused)
{
	m_unk450 = 1;
}
// END FUNCTION

// FUNCTION: 0x10227230 size=0xa
void __fastcall sub_10227230(char *self, int, int)
{
	self[0x450] = 0;
}
// END FUNCTION

// FUNCTION: 0x10227b20 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_10227b20
void __fastcall sub_10227b20(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x1022d260 size=0x6a
#include "CUnknown1022d260.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown1022d260::sub_1022d260(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 1;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x48);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x48);
}
// END FUNCTION

// FUNCTION: 0x1022d2f0 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem32_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem32_t::sub_1022d2f0
	void sub_1022d2f0(int num);
};

void CMem32_t::sub_1022d2f0(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 1;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 5);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 5);
}
// END FUNCTION

// FUNCTION: 0x1022d380 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_1022d380
void __fastcall sub_1022d380(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x1022d410 size=0x67
struct Mem256 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_1022d410
void __fastcall sub_1022d410(Mem256 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 1;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 8);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 8);
}
// END FUNCTION

// FUNCTION: 0x1022eb60 size=0x82
struct TStat { void sub_101fc950(int a, int b); };

int sub_1043e780(const char *, const char *);
extern void (*g_109f3628)(const char *fmt, ...);
void sub_100087f1();
void sub_10014489();
void sub_1000b893();

void sub_1022eb60(TStat *stat, const char *name)
{
    if (sub_1043e780(name, "BloodHealFunc") == 0) {
        stat->sub_101fc950(3, (int)sub_100087f1);
        return;
    }
    if (sub_1043e780(name, "ExperienceFunc") == 0) {
        stat->sub_101fc950(3, (int)sub_10014489);
        return;
    }
    if (sub_1043e780(name, "BloodPoolEmptyFunc") == 0) {
        stat->sub_101fc950(3, (int)sub_1000b893);
        return;
    }
    g_109f3628("Unable to read StatAction modifier: %s!\n", name);
}
// END FUNCTION

// FUNCTION: 0x10230280 size=0x75
struct H { int v; H(const H &); };
struct R { void sub_10204270(); void sub_102042d0(int t, int v); };
struct Mgr { H sub_1021e870(int name); };
extern Mgr g_1074f898;
struct Obj { virtual void f0(); virtual bool f1(); int sub_10013d13(); };
struct Src { virtual void f0(); virtual void f1(); virtual Obj *f2(int name); };
extern Src *g_1070b234;
H sub_1042bff0(int);

void sub_10230280(R *out, int name)
{
    int v = g_1074f898.sub_1021e870(name).v;
    if (v != 0) {
        out->sub_102042d0(6, v);
        return;
    }
    Obj *o = g_1070b234->f2(name);
    if (o != 0 && !o->f1()) {
        out->sub_102042d0(7, sub_1042bff0(o->sub_10013d13()).v);
        return;
    }
    out->sub_10204270();
}
// END FUNCTION

// FUNCTION: 0x10231e60 size=0xa
unsigned int __fastcall sub_10231e60(char *self)
{
	return *(unsigned int *)(self + 0x464) & 1;
}
// END FUNCTION

// FUNCTION: 0x10231ed0 size=0xc
unsigned int CUnknown10231ed0::sub_10231ed0()
{
	return (m_flags464 >> 1) & 1;
}
// END FUNCTION

// FUNCTION: 0x10232520 size=0xa
void __fastcall sub_10232520(int *self, int, int value)
{
	self[4] = value;
}
// END FUNCTION

// FUNCTION: 0x102346f0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_1048f08c;
extern char g_105876e0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_colt_anaconda
extern "C" GP *item_w_colt_anaconda()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_1048f08c;
	} else {
		p = 0;
	}
	p->name(g_105876e0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10234af0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_1048f79c;
extern char g_105c199c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_crossbow
extern "C" GP *item_w_crossbow()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_1048f79c;
	} else {
		p = 0;
	}
	p->name(g_105c199c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10234e30 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_1048feac;
extern char g_105c1a1c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_crossbow_flaming
extern "C" GP *item_w_crossbow_flaming()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_1048feac;
	} else {
		p = 0;
	}
	p->name(g_105c1a1c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10235170 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_104905bc;
extern char g_105c1a8c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_glock_17c
extern "C" GP *item_w_glock_17c()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_104905bc;
	} else {
		p = 0;
	}
	p->name(g_105c1a8c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x102354b0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_10490ccc;
extern char g_105876c8[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_deserteagle
extern "C" GP *item_w_deserteagle()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_10490ccc;
	} else {
		p = 0;
	}
	p->name(g_105876c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x102357f0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_104913dc;
extern char g_105876b0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_ithaca_m_37
extern "C" GP *item_w_ithaca_m_37()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_104913dc;
	} else {
		p = 0;
	}
	p->name(g_105876b0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10235b30 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_10491aec;
extern char g_105876a0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_mac_10
extern "C" GP *item_w_mac_10()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_10491aec;
	} else {
		p = 0;
	}
	p->name(g_105876a0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10236510 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e9bc(GP *);
extern int vt_1049290c;
extern char g_105c1c70[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_rem_m_700_bach
extern "C" GP *item_w_rem_m_700_bach()
{
	GP *p = (GP *)sub_1000db89(0x948);
	if (p) {
		sub_1000e9bc(p);
		*(int **)p = &vt_1049290c;
	} else {
		p = 0;
	}
	p->name(g_105c1c70);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10236800 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000e9bc(GP *);
extern int vt_1049301c;
extern char g_105c1ce4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_steyr_aug
extern "C" GP *item_w_steyr_aug()
{
	GP *p = (GP *)sub_1000db89(0x948);
	if (p) {
		sub_1000e9bc(p);
		*(int **)p = &vt_1049301c;
	} else {
		p = 0;
	}
	p->name(g_105c1ce4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10236b40 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_1049372c;
extern char g_10587688[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_supershotgun
extern "C" GP *item_w_supershotgun()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_1049372c;
	} else {
		p = 0;
	}
	p->name(g_10587688);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10236e80 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_10493e3c;
extern char g_10587678[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_uzi
extern "C" GP *item_w_uzi()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_10493e3c;
	} else {
		p = 0;
	}
	p->name(g_10587678);
	return p;
}
// END FUNCTION

// FUNCTION: 0x102371c0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_1049454c;
extern char g_10586a78[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_thirtyeight
extern "C" GP *item_w_thirtyeight()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_1049454c;
	} else {
		p = 0;
	}
	p->name(g_10586a78);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10237500 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_10494c5c;
extern char g_105c1e58[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_tzimisce2_head
extern "C" GP *item_w_tzimisce2_head()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_10494c5c;
	} else {
		p = 0;
	}
	p->name(g_105c1e58);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10237970 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000ab0a(GP *);
extern int vt_1049536c;
extern char g_105c1ee0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_mingxiao_spit
extern "C" GP *item_w_mingxiao_spit()
{
	GP *p = (GP *)sub_1000db89(0x91c);
	if (p) {
		sub_1000ab0a(p);
		*(int **)p = &vt_1049536c;
	} else {
		p = 0;
	}
	p->name(g_105c1ee0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10237c30 size=0xd
extern int g_10751a54;
extern int g_10752954;

void sub_10237c30()
{
	g_10751a54 = 0;
	g_10752954 = 0;
}
// END FUNCTION

// FUNCTION: 0x1023f040 size=0xb
void sub_1023f040(int *p)
{
	*p = -1;
}
// END FUNCTION

// FUNCTION: 0x1023f060 size=0xb
void sub_1023f060(unsigned int *p)
{
	*p = ~*p;
}
// END FUNCTION

// FUNCTION: 0x10245790 size=0xd
void CUnknown10245790::sub_10245790(unsigned int flags)
{
	m_unk4->m_flags |= flags;
}
// END FUNCTION

// FUNCTION: 0x102457d0 size=0xa
void CUnknown102457d0::sub_102457d0(int value)
{
	m_unk8 = value;
}
// END FUNCTION

// FUNCTION: 0x102461b0 size=0xd
void CUnknown102461b0::sub_102461b0()
{
	m_pTarget->vfunc6(m_pTarget->m_unk1c);
}
// END FUNCTION

// FUNCTION: 0x10246300 size=0xd
void sub_10246300(int unused, int *src, int *dst)
{
	*dst = *src;
}
// END FUNCTION

// FUNCTION: 0x10246430 size=0xd
void sub_10246430(int unused, int *src, int *dst)
{
	*dst = *src;
}
// END FUNCTION

// FUNCTION: 0x10246490 size=0xd
void sub_10246490(int unused, int *src, int *dst)
{
	*dst = *src;
}
// END FUNCTION

// FUNCTION: 0x102464b0 size=0xb
void sub_102464b0(int a, int b, int *c)
{
	*c = b;
}
// END FUNCTION

// FUNCTION: 0x102477a0 size=0x9
struct CUnknown102477a0 { int a; int b; int c; int d; void sub_102477a0(); };
// TARGET: CUnknown102477a0::sub_102477a0
void CUnknown102477a0::sub_102477a0() { c = 0; d = 0; }
// END FUNCTION

// FUNCTION: 0x102477c0 size=0x9
struct CUnknown102477c0 { int p[6]; int a; int b; void sub_102477c0(); };
// TARGET: CUnknown102477c0::sub_102477c0
void CUnknown102477c0::sub_102477c0() { a = 0; b = 0; }
// END FUNCTION

// FUNCTION: 0x102480f0 size=0x159
struct IFileSys
{
	virtual int Open(const char *name, const char *mode, const char *path);
	virtual void Close(int fh);
	virtual int Read(void *out, int size, int fh);
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual int Size(int fh);
};

int sub_10431510(const char *, const char *);
char *sub_102482f0(const char *, IFileSys *);
char *sub_102482b0(char **buf, int);
void sub_10430964(char *);
void sub_10431641(char *);
void *sub_104320f7(int);
void *sub_104312d5(int);
extern char g_10546e4c[];
extern char g_105596cc[];

class CUnknown10248a50
{
public:
	char *m_name;
	CUnknown10248a50 *sub_10247ba0(const char *name);
	void sub_10247cf0(const char *name);
	void sub_10248510(char **buf, IFileSys *fs);
	void sub_10248a50(CUnknown10248a50 *next);
	bool sub_102480f0(const char *resourceName, IFileSys *fs, const char *pathID, bool b);
};

bool CUnknown10248a50::sub_102480f0(const char *resourceName, IFileSys *fs, const char *pathID, bool b)
{
	char *buffer = 0;
	char *mem = 0;
	if (b)
	{
		if (sub_10431510(resourceName, g_10546e4c))
			buffer = sub_102482f0(resourceName, fs);
		if (buffer)
			goto parse;
	}
	{
		int fh = fs->Open(resourceName, g_105596cc, pathID);
		if (!fh)
			return false;
		int size = fs->Size(fh);
		mem = (char *)sub_104320f7(size + 1);
		fs->Read(mem, size, fh);
		fs->Close(fh);
		mem[size] = 0;
		buffer = mem;
	}
parse:
	CUnknown10248a50 *pPrev = 0;
	CUnknown10248a50 *pCur = this;
	while (1)
	{
		char *s = sub_102482b0(&buffer, 0);
		if (!buffer)
			break;
		if (!pCur)
		{
			void *m = sub_104312d5(0x1c);
			if (m)
				pCur = ((CUnknown10248a50 *)m)->sub_10247ba0(s);
			else
				pCur = 0;
			if (pPrev)
				pPrev->sub_10248a50(pCur);
		}
		else
		{
			sub_10430964(pCur->m_name);
			pCur->sub_10247cf0(s);
		}
		s = sub_102482b0(&buffer, 0);
		if (pCur->m_name && s && *s == '{')
			pCur->sub_10248510(&buffer, fs);
		pPrev = pCur;
		pCur = 0;
	}
	if (mem)
		sub_10431641(mem);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10248850 size=0xa
void CUnknown10248850::sub_10248850(int value)
{
	m_unk18 = value;
}
// END FUNCTION

// FUNCTION: 0x10248980 size=0x9
struct CUnknown10248980 { int p[5]; int a; char sub_10248980(); };
// TARGET: CUnknown10248980::sub_10248980
char CUnknown10248980::sub_10248980() { int v = a; return v != 0; }
// END FUNCTION

// FUNCTION: 0x10248a50 size=0xa
struct CUnknown10248a50 { int p[4]; int a; void sub_10248a50(int v); };
// TARGET: CUnknown10248a50::sub_10248a50
void CUnknown10248a50::sub_10248a50(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10249450 size=0xa
void CUnknown10249450::sub_10249450(int value)
{
	m_unk4 = value;
}
// END FUNCTION

// FUNCTION: 0x10249960 size=0xb
unsigned int __fastcall sub_10249960(char **self)
{
	return *(unsigned short *)(*self + 0x12);
}
// END FUNCTION

// FUNCTION: 0x1024a080 size=0x7e
struct Node16 {
    unsigned short m_Left, m_Right, m_Parent, m_Tag;
    int m_pad8;
    int m_Elem;
};
struct Hdr { int m_pad0; Node16 *m_pNodes; };
extern unsigned char g_109f085d;
extern Node16 g_1088ae24;
struct NodeHolder {
    Hdr *m_pHdr;
    int sub_1024a080(unsigned short idx);
};
int NodeHolder::sub_1024a080(unsigned short idx)
{
    Hdr *h = m_pHdr;
    if (!(g_109f085d & 1)) {
        g_109f085d |= 1;
        g_1088ae24.m_Left = 0xffff;
        g_1088ae24.m_Right = 0xffff;
        g_1088ae24.m_Parent = 0xffff;
        g_1088ae24.m_Tag = 1;
    }
    Node16 *n;
    if (idx != 0xffff)
        n = &h->m_pNodes[idx];
    else
        n = &g_1088ae24;
    if (n->m_Left == idx)
        return 0;
    return m_pHdr->m_pNodes[idx].m_Elem;
}
// END FUNCTION

// FUNCTION: 0x1024afe0 size=0xb
void sub_100139d5();
extern int g_1088ae3c;
int sub_1024afe0()
{
	sub_100139d5();
	return g_1088ae3c;
}
// END FUNCTION

// FUNCTION: 0x1024b070 size=0x8
extern char g_105c5338;
void sub_1024b070() { g_105c5338 = 0; }
// END FUNCTION

// FUNCTION: 0x1024b230 size=0x7d
struct StrRef { unsigned short blk; unsigned short off; };
struct StrTable { char pad[0x18]; char **blocks; };
extern char *g_1088ae34;
extern StrTable *g_1088ae38;
int sub_1043e780(const char *, const char *);

static inline const char *StrOf(const StrRef *r)
{
    if (r->blk == 0xffff && r->off == 0xffff)
        return g_1088ae34;
    return g_1088ae38->blocks[r->blk] + 8 + r->off;
}

bool sub_1024b230(const StrRef *a, const StrRef *b)
{
    const char *s1 = StrOf(a);
    const char *s2 = StrOf(b);
    return sub_1043e780(s1, s2) < 0;
}
// END FUNCTION

// FUNCTION: 0x1024b2d0 size=0x71
#include "CUnknown1024b2d0.h"

void sub_10011383();
void sub_1000c496();
extern void *(*g_109f3634)(int);

CUnknown1024b2d0 *CUnknown1024b2d0::sub_1024b2d0(int arg, int count, char flag)
{
    m_pfn = flag ? (void *)sub_10011383 : (void *)sub_1000c496;
    m_pData = 0;
    m_count = count;
    m_arg = arg;
    if (count != 0)
        m_pData = g_109f3634(count * 12);
    m_w12 = 0;
    m_w10 = 0xffff;
    m_w14 = 0xffff;
    m_w16 = 0;
    m_i18 = 0;
    m_i1c = 0;
    m_i20 = 8;
    m_i24 = 0;
    m_i28 = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1024c050 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_1024c050
void __fastcall sub_1024c050(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x1024cef0 size=0x67
struct CBlock64_t {
	int d[16];
	// TARGET: CBlock64_t::sub_1024cef0
	CBlock64_t *sub_1024cef0(const CBlock64_t *o);
};

CBlock64_t *CBlock64_t::sub_1024cef0(const CBlock64_t *o)
{
	d[0] = o->d[0]; d[1] = o->d[1]; d[2] = o->d[2]; d[3] = o->d[3];
	d[4] = o->d[4]; d[5] = o->d[5]; d[6] = o->d[6]; d[7] = o->d[7];
	d[8] = o->d[8]; d[9] = o->d[9]; d[10] = o->d[10]; d[11] = o->d[11];
	d[12] = o->d[12]; d[13] = o->d[13]; d[14] = o->d[14]; d[15] = o->d[15];
	return this;
}
// END FUNCTION

// FUNCTION: 0x1024e030 size=0xc4
#include <math.h>
struct mat34_1024e030 { float m[3][4]; float *operator[](int i) { return m[i]; } const float *operator[](int i) const { return m[i]; } };
struct ang_1024e030 { float x, y, z; float &operator[](int i) { return ((float *)this)[i]; } };

#define M_PI_F_1024e030 ((float)(3.14159265358979323846))
#define RAD2DEG_1024e030(x) ((float)(x) * (float)(180.f / M_PI_F_1024e030))

void sub_1024e030(const mat34_1024e030 &matrix, ang_1024e030 &angles)
{
	float forward[3];
	float left[3];
	float up[3];

	forward[0] = matrix[0][0];
	forward[1] = matrix[1][0];
	forward[2] = matrix[2][0];
	left[0] = matrix[0][1];
	left[1] = matrix[1][1];
	left[2] = matrix[2][1];
	up[2] = matrix[2][2];

	float xyDist = (float)sqrt(forward[0] * forward[0] + forward[1] * forward[1]);
	if (xyDist > 0.001f)
	{
		angles[1] = RAD2DEG_1024e030((float)atan2(forward[1], forward[0]));
		angles[0] = RAD2DEG_1024e030((float)atan2(-forward[2], xyDist));
		angles[2] = RAD2DEG_1024e030((float)atan2(left[2], up[2]));
	}
	else
	{
		angles[1] = RAD2DEG_1024e030((float)atan2(-left[0], left[1]));
		angles[0] = RAD2DEG_1024e030((float)atan2(-forward[2], xyDist));
		angles[2] = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x102507b0 size=0x8
void CBaseCombatWeapon::sub_102507b0() { vfunc361(); }
// END FUNCTION

// FUNCTION: 0x102508f0 size=0xc
CUnknown102508f0_Elem *CUnknown102508f0::sub_102508f0(int index)
{
	return &m_pMemory[index];
}
// END FUNCTION

// FUNCTION: 0x10250910 size=0x67
struct Mem8 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_10250910
void __fastcall sub_10250910(Mem8 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 4;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 3);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10252450 size=0xe
float CUnknown10252450::sub_10252450(int index)
{
	return m_unk730[index];
}
// END FUNCTION

// FUNCTION: 0x10256200 size=0xb
unsigned char __fastcall sub_10256200(unsigned char *self)
{
	unsigned char v = self[0x778];
	v >>= 1;
	v &= 1;
	return v;
}
// END FUNCTION

// FUNCTION: 0x10258500 size=0xc
extern const char *g_105c6388[];
const char *sub_10258500(int index)
{
	return g_105c6388[index];
}
// END FUNCTION

// FUNCTION: 0x10258870 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown10258870 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9) V25(q0) V25(q1)
	V5(r0)
	virtual void slot305();
	void sub_10258870();
};
void CUnknown10258870::sub_10258870() { slot305(); }
// END FUNCTION

// FUNCTION: 0x10258af0 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown10258af0 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2) V25(q3) V25(q4) V25(q5)
	V5(r0) virtual void f0(); virtual void f1();
	virtual void slot407();
	void sub_10258af0();
};
void CUnknown10258af0::sub_10258af0() { slot407(); }
// END FUNCTION

// FUNCTION: 0x1025b5b0 size=0x9
extern unsigned short g_1089d7da;

int sub_1025b5b0()
{
	return g_1089d7da;
}
// END FUNCTION

// FUNCTION: 0x1025d820 size=0x9
struct CUnknown1025d820 { int a; CUnknown1025d820* sub_1025d820(); };
// TARGET: CUnknown1025d820::sub_1025d820
CUnknown1025d820* CUnknown1025d820::sub_1025d820() { a = -1; return this; }
// END FUNCTION

// FUNCTION: 0x1025db50 size=0xb
char __fastcall sub_1025db50(int *self)
{
	return self[4] < self[0];
}
// END FUNCTION

// FUNCTION: 0x1025e140 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_1025e140
void __fastcall sub_1025e140(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x10260750 size=0xb
void __fastcall sub_10260750(char *self)
{
	*(int *)(self + 0x5f9c) = 0;
}
// END FUNCTION

// FUNCTION: 0x10260980 size=0xa
struct CUnknown10260980 { int p; int a; CUnknown10260980* sub_10260980(); };
// TARGET: CUnknown10260980::sub_10260980
CUnknown10260980* CUnknown10260980::sub_10260980() { a = -1; return this; }
// END FUNCTION

// FUNCTION: 0x10264370 size=0x76
struct Elem38 { char d[0x38]; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct Mem38 {
    Elem38 *m_p;
    int m_alloc;
    int m_grow;
    void sub_10264370(int num);
};
void Mem38::sub_10264370(int num)
{
    if (m_grow == -1)
        return;
    int want = m_alloc + num;
    if (m_alloc < want) {
        int n = m_alloc;
        do {
            if (n != 0) {
                if (m_grow != 0)
                    n += m_grow;
                else
                    n += n;
            } else
                n = 1;
        } while (n < want);
        m_alloc = n;
    }
    if (m_p)
        m_p = (Elem38 *)g_109f3638(m_p, m_alloc * 0x38);
    else
        m_p = (Elem38 *)g_109f3634(m_alloc * 0x38);
}
// END FUNCTION

// FUNCTION: 0x10264450 size=0xb
void CUnknown102e12c0::sub_10264450()
{
	m_pOuter->vfunc310();
}
// END FUNCTION

// FUNCTION: 0x102652d0 size=0xd
int CUnknown102652d0::sub_102652d0()
{
	if (m_unkC != 0)
		return m_unk0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10265800 size=0xa
extern unsigned char g_1092053c;

unsigned char sub_10265800()
{
	unsigned char v = ~g_1092053c;
	v &= 1;
	return v;
}
// END FUNCTION

// FUNCTION: 0x10267350 size=0xd
extern int g_10920544;
extern int g_10920548;
void sub_10267350()
{
	g_10920544 = 0;
	g_10920548 = 0;
}
// END FUNCTION

// FUNCTION: 0x102696f0 size=0x8e
struct Globals { char pad0[0xc]; float curtime; char pad1[4]; int maxclients; };
extern Globals *g_1070b228;
extern float g_1044e664;
#define D5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define D10(p) D5(p##a) D5(p##b)
#define D100(p) D10(p##0) D10(p##1) D10(p##2) D10(p##3) D10(p##4) D10(p##5) D10(p##6) D10(p##7) D10(p##8) D10(p##9)
struct E {
	D100(a) D100(b) virtual void c0();
	virtual char v201(void *, int, int, int);
	D100(d) D10(e0) D10(e1) D10(e2) D10(e3) D10(e4) D10(e5) virtual void h0();
	virtual char v363(void *);
};
E *sub_1000ac8b(int);
char sub_10015960(void *, void *);
void sub_10014614(void *);

// TARGET: sub_102696f0
void __fastcall sub_102696f0(char *self)
{
	for (int i = 0; i < g_1070b228->maxclients; i++) {
		E *p = sub_1000ac8b(i + 1);
		if (p && p->v363(self) && sub_10015960(self, p) && p->v201(self, 0x2804091, 0, 0)) {
			float t = g_1070b228->curtime;
			*(float *)(self + 0x17c) = t + g_1044e664;
			return;
		}
	}
	sub_10014614(self);
}
// END FUNCTION

// FUNCTION: 0x1026d0c0 size=0x43
struct Helper { void sub_1000a8a8(void*); };
// TARGET: sub_1026d0c0
void __fastcall sub_1026d0c0(char* p)
{
	if (--*(int*)(p + 0x5bb0) <= 0) {
		Helper* h = *(Helper**)(p + 0x5da4);
		if (h)
			h->sub_1000a8a8(p);
		*(int*)(p + 0x5bb0) = 0;
	}
	*(unsigned int*)(p + 0x14bc) &= 0x7f7fffff;
}
// END FUNCTION

// FUNCTION: 0x1026dc60 size=0xb
void CUnknown1026dc60::sub_1026dc60()
{
	m_unk5cec = 0;
}
// END FUNCTION

// FUNCTION: 0x10270290 size=0xd
void CUnknown10270290::sub_10270290(int value)
{
	m_unk5b90 = value;
}
// END FUNCTION

// FUNCTION: 0x102718e0 size=0xd
CUnknown102718e0 *CUnknown102718e0::sub_102718e0(const CUnknown102718e0 *other)
{
	m_unk0 = other->m_unk0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1027d990 size=0xa
struct CUnknown1027d990Sub { int p[6]; int a; };
struct CUnknown1027d990 { char p[0x5d34]; CUnknown1027d990Sub *m; int sub_1027d990(); };
// TARGET: CUnknown1027d990::sub_1027d990
int CUnknown1027d990::sub_1027d990() { return m->a; }
// END FUNCTION

// FUNCTION: 0x1027d9b0 size=0xb
void __fastcall sub_102eeba0(void *);
void __fastcall sub_1027d9b0(char *self)
{
	sub_102eeba0(*(void **)(self + 0x5d34));
}
// END FUNCTION

// FUNCTION: 0x1027ee90 size=0x6c
#include "CUnknown1027ef20.h"

struct SEnt { char pad[0x94]; CUnknown1027ef20 *m_p94; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
struct SLogEntry { unsigned handle; char text[0x200]; };
extern int g_10920538;
extern SLogEntry g_1090ff60[];
extern SEntList *g_10566458;

void sub_1027ee90()
{
    int i = 0;
    if (0 < g_10920538) {
        SLogEntry *l = g_1090ff60;
        do {
            unsigned h = l->handle;
            SEnt *ent;
            if (h == 0xffffffff)
                ent = 0;
            else {
                SHandleEntry *he = &g_10566458->e[h & 0x1fff];
                ent = (he->serial == (h >> 13)) ? he->p : 0;
            }
            if (ent->m_p94)
                ent->m_p94->sub_1027ef20(l->text);
            i++;
            l++;
        } while (i < g_10920538);
    }
    g_10920538 = 0;
}
// END FUNCTION

// FUNCTION: 0x1027ef20 size=0x6f
#include "CUnknown1027ef20.h"

extern "C" void *memset(void *, int, unsigned);
int sub_10431c2f(char *, const char *, ...);

void CUnknown1027ef20::sub_1027ef20(const char *text)
{
    if (text) {
        m_pos += sub_10431c2f(m_buf + m_pos, text);
        if (m_pos >= 0x3e00) {
            memset(m_buf + m_pos, 0, 0x4000 - m_pos);
            m_overflow = 1;
            m_pos = 0;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1027f1e0 size=0x6c
const char * __stdcall sub_1027f1e0(int state)
{
    switch (state) {
    case 0: return "PLAYING";
    case 1: return "WAIT";
    case 2: return "POST_IDLE";
    case 3: return "CLEANUP";
    case 4: return "WALK_TO_MARK";
    case 5: return "RUN_TO_MARK";
    case 6: return "CUSTOM_MOVE_TO_MARK";
    default: return "**UNKNOWN**";
    }
}
// END FUNCTION

// FUNCTION: 0x1027fbf0 size=0x9
struct CUnknown1027fbf0 { int a; CUnknown1027fbf0* sub_1027fbf0(); };
// TARGET: CUnknown1027fbf0::sub_1027fbf0
CUnknown1027fbf0* CUnknown1027fbf0::sub_1027fbf0() { a = -1; return this; }
// END FUNCTION

// FUNCTION: 0x1027fc40 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown1027fc40 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2) V25(q3) V25(q4) V25(q5) V25(q6)
	V5(r0) virtual void f0();
	virtual void slot431();
	void sub_1027fc40();
};
void CUnknown1027fc40::sub_1027fc40() { slot431(); }
// END FUNCTION

// FUNCTION: 0x10280d10 size=0xc
bool CUnknown10280d10::sub_10280d10()
{
	bool r = m_unk5c38 != 0;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10288540 size=0x9
struct CUnknown10288540 { int m_p; CUnknown10288540 *sub_10288540(); };
CUnknown10288540 *CUnknown10288540::sub_10288540() { m_p = 0; return this; }
// END FUNCTION

// FUNCTION: 0x102885d0 size=0x8
typedef void (__fastcall *Fn102885d0)(void *);

void __fastcall sub_102885d0(void *p)
{
	(*(Fn102885d0 *)((char *)*(void **)p + 0xf8))(p);
}
// END FUNCTION

// FUNCTION: 0x102885f0 size=0x8
struct NPCStub;
struct NPCStubVtbl { void (__fastcall *f[256])(NPCStub *); };
struct NPCStub { NPCStubVtbl *vt; };

void __fastcall sub_102885f0(NPCStub *o)
{
	o->vt->f[221](o);
}
// END FUNCTION

// FUNCTION: 0x102886f0 size=0xa
struct CUnknown102886f0 { char p[0x40]; int a; void sub_102886f0(int v); };
// TARGET: CUnknown102886f0::sub_102886f0
void CUnknown102886f0::sub_102886f0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10289cc0 size=0xb
void CUnknown10289cc0::sub_10289cc0()
{
	m_unk5cf4.sub_102e8a40();
}
// END FUNCTION

// FUNCTION: 0x1028eb30 size=0x66
struct Vec3 { int x, y, z; };
struct HandleObj {
	virtual void vf0();
	virtual int* vf1();
};
struct Holder {
	char pad0[0x6368];
	int f6368;
	char pad1[0x6374 - 0x636c];
	int f6374, f6378, f637c;
	char pad2[0x6390 - 0x6380];
	int f6390;
	char f6394;
	void sub_1028eb30(int a, Vec3* v, HandleObj* h, char c);
};

// TARGET: Holder::sub_1028eb30
void Holder::sub_1028eb30(int a, Vec3* v, HandleObj* h, char c)
{
	f6368 = a;
	f6374 = v->x;
	f6378 = v->y;
	f637c = v->z;
	if (h) {
		f6390 = *h->vf1();
		f6394 = c;
		return;
	}
	f6390 = -1;
	f6394 = c;
}
// END FUNCTION

// FUNCTION: 0x1029ca30 size=0xd
extern float g_10457f54;
float __stdcall sub_1029ca30(float x)
{
	float r = x;
	r *= g_10457f54;
	return r;
}
// END FUNCTION

// FUNCTION: 0x102a0eb0 size=0xb
void __fastcall sub_100037e2(void *);
void __fastcall sub_102a0eb0(char *self)
{
	sub_100037e2(*(void **)(self + 0x5d34));
}
// END FUNCTION

// FUNCTION: 0x102a95e0 size=0xa
struct CUnknown102a95e0 { int a[1]; int *sub_102a95e0(int i); };
// TARGET: CUnknown102a95e0::sub_102a95e0
int *CUnknown102a95e0::sub_102a95e0(int i) { return &a[i]; }
// END FUNCTION

// FUNCTION: 0x102a9600 size=0xa
struct CUnknown102a9600 { float a[1]; float sub_102a9600(int i); };
// TARGET: CUnknown102a9600::sub_102a9600
float CUnknown102a9600::sub_102a9600(int i) { return a[i]; }
// END FUNCTION

// FUNCTION: 0x102a9690 size=0xa
struct CUnknown102a9690 { int p[3]; int a; void sub_102a9690(int v); };
// TARGET: CUnknown102a9690::sub_102a9690
void CUnknown102a9690::sub_102a9690(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102a96f0 size=0x8
struct TroikaStub;
struct TroikaStubVtbl { void (__fastcall *f[256])(TroikaStub *); };
struct TroikaStub { TroikaStubVtbl *vt; };

void __fastcall sub_102a96f0(TroikaStub *o)
{
	o->vt->f[220](o);
}
// END FUNCTION

// FUNCTION: 0x102a9750 size=0xd
void CUnknown102a9750::sub_102a9750(int value)
{
	m_unk3ec = value;
}
// END FUNCTION

// FUNCTION: 0x102a9940 size=0xd
void CUnknown102a9750::sub_102a9940(int value)
{
	m_unk63ec = value;
}
// END FUNCTION

// FUNCTION: 0x102a99a0 size=0xd
void CUnknown102a9750::sub_102a99a0(char value)
{
	m_unk6498 = value;
}
// END FUNCTION

// FUNCTION: 0x102a99c0 size=0xa
void CUnknown102a99c0::sub_102a99c0(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x102a9c80 size=0x77
struct Vec3 { int x, y, z; };
extern Vec3 g_1093404c;
extern Vec3 g_10934060;
struct Obj {
    int f0;
    Vec3 v4;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    Vec3 v2c;
    int f38;
    int f3c;
    Obj *sub_102a9c80(int a1, int a2, int a3, int a4, int a5);
};

Obj *Obj::sub_102a9c80(int a1, int a2, int a3, int a4, int a5)
{
    f0 = a1;
    v4 = g_1093404c;
    f14 = a2;
    f10 = -1;
    f18 = -1;
    f1c = -1;
    f20 = a3;
    f24 = a4;
    f28 = a5;
    v2c = g_10934060;
    f38 = 0;
    f3c = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x102a9dc0 size=0x72
struct Vec3 { int x, y, z; };
extern Vec3 g_10934060;
struct Obj {
    int f0;
    Vec3 v4;
    int f10;
    int f14;
    int f18;
    int f1c;
    int f20;
    int f24;
    int f28;
    Vec3 v2c;
    int f38;
    int f3c;
    Obj *sub_102a9dc0(int a1, Vec3 *a2, int a3, int a4, int a5, int a6, int a7, int a8);
};

Obj *Obj::sub_102a9dc0(int a1, Vec3 *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    f0 = a1;
    v4 = *a2;
    f14 = a3;
    f10 = -1;
    f18 = -1;
    f1c = -1;
    f20 = a4;
    f24 = a5;
    f28 = a6;
    v2c = g_10934060;
    f38 = 0;
    f3c = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x102a9e60 size=0xc
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1)
	virtual void g0();
	virtual char *target();
};

float __fastcall sub_102a9e60(CSlots *self)
{
	return *(float *)(self->target() + 4);
}
// END FUNCTION

// FUNCTION: 0x102a9ea0 size=0xa
struct CUnknown102a9ea0 { int a[1]; int sub_102a9ea0(int i); };
// TARGET: CUnknown102a9ea0::sub_102a9ea0
int CUnknown102a9ea0::sub_102a9ea0(int i) { return a[i]; }
// END FUNCTION

// FUNCTION: 0x102a9ec0 size=0xe
char CAI_BaseNPCTroika::sub_102a9ec0(int index)
{
	return *((char *)this + index + 0x88);
}
// END FUNCTION

// FUNCTION: 0x102ae7f0 size=0xd
void CUnknown102b5dc0::sub_102ae7f0(int value)
{
	m_unk65c8 = value;
}
// END FUNCTION

// FUNCTION: 0x102ae8c0 size=0xd
void CUnknown102b5dc0::sub_102ae8c0(int value)
{
	m_unk65cc = value;
}
// END FUNCTION

// FUNCTION: 0x102b5dc0 size=0xd
void CUnknown102b5dc0::sub_102b5dc0(int value)
{
	m_unk63f4 = value;
}
// END FUNCTION

// FUNCTION: 0x102c1170 size=0x85
#include "CAI_BaseNPCTroika.h"

struct SEnt { int pad; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

char CAI_BaseNPCTroika::sub_102c1170()
{
    if (*((char *)this + 0x64c0))
        return 1;
    if (*((char *)this + 0x64ec))
        return 1;
    unsigned h = *(unsigned *)((char *)this + 0xfe8);
    if (h != 0xffffffff) {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        if (he->serial == (h >> 13) && he->p != 0)
            return 1;
    }
    h = *(unsigned *)((char *)this + 0x6554);
    if (h != 0xffffffff) {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        if (he->serial == (h >> 13) && he->p != 0)
            return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102c3690 size=0xe
extern const char *g_105d1068[];

const char *CAI_BaseNPCTroika::sub_102c3690(int task)
{
	return g_105d1068[task];
}
// END FUNCTION

// FUNCTION: 0x102c36b0 size=0xe
extern const char* g_105d1488[];

const char* CAI_BaseNPCTroika::sub_102c36b0(int schedule)
{
	return g_105d1488[schedule];
}
// END FUNCTION

// FUNCTION: 0x102c6590 size=0xc
int *CUnknown102c6590::sub_102c6590(int index)
{
	return &m_pMemory[index];
}
// END FUNCTION

// FUNCTION: 0x102c6740 size=0xc
CUnknown102c6740_Elem *CUnknown102c6740::sub_102c6740(int index)
{
	return &m_pMemory[index];
}
// END FUNCTION

// FUNCTION: 0x102c68e0 size=0xc
int *CUnknown102c68e0::sub_102c68e0(int index)
{
	return &m_pMemory[index];
}
// END FUNCTION

// FUNCTION: 0x102c6bd0 size=0x8
void __fastcall sub_102c6bd0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102c6d80 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown102c6d80 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2) V25(q3) V25(q4) V25(q5) V25(q6) V25(q7) V25(q8)
	V5(r0) V5(r1) virtual void f0();
	virtual void slot486();
	void sub_102c6d80();
};
void CUnknown102c6d80::sub_102c6d80() { slot486(); }
// END FUNCTION

// FUNCTION: 0x102c6d90 size=0xb
struct CAI_BaseNPC_Ext : public CAI_BaseNPC {
	virtual void vfunc569(); virtual void vfunc570(); virtual void vfunc571(); virtual void vfunc572();
	virtual void vfunc573(); virtual void vfunc574(); virtual void vfunc575(); virtual void vfunc576();
	virtual void vfunc577(); virtual void vfunc578(); virtual void vfunc579(); virtual void vfunc580();
};

void CUnknown102e12c0::sub_102c6d90()
{
	((CAI_BaseNPC_Ext *)m_pOuter)->vfunc580();
}
// END FUNCTION

// FUNCTION: 0x102c7390 size=0xa
void CUnknown102c7390::sub_102c7390(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x102c8ca0 size=0xa
extern char g_109203dc;
void __fastcall sub_1000c3c9(void *);
void sub_102c8ca0(void)
{
	sub_1000c3c9(&g_109203dc);
}
// END FUNCTION

// FUNCTION: 0x102ca6c0 size=0x79
struct EntInfo { void *ent; unsigned int serial; int pad; };
struct EntList {
    int vptr;
    EntInfo arr[1];
};
extern EntList *g_10566458;
struct EntX {
    virtual void v0();
    virtual unsigned int *v1();
};
struct EHandle {
    unsigned int m_Index;
    EntX *Get() const
    {
        if (m_Index == 0xffffffff)
            return 0;
        const EntInfo *p = &g_10566458->arr[m_Index & 0x1fff];
        if (p->serial == (m_Index >> 13))
            return (EntX *)p->ent;
        return 0;
    }
};
struct Slot {
    char pad[0x20];
    EHandle m_h;
    char pad2[0x28 - 0x24];
};
struct Obj {
    char pad[4];
    Slot m_Slots[1];
    void sub_102ca6c0(EntX *target, EntX *newEnt);
};

void Obj::sub_102ca6c0(EntX *target, EntX *newEnt)
{
    if (target != 0) {
        Slot *s = m_Slots;
        Slot *end = s + *(int *)((char *)this + 0xa04);
        for (; s < end; s++) {
            if (target == s->m_h.Get()) {
                if (newEnt != 0)
                    s->m_h.m_Index = *newEnt->v1();
                else
                    s->m_h.m_Index = 0xffffffff;
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x102ca760 size=0xb
void __fastcall sub_102ca760(char *self)
{
	*(int *)(self + 0xa04) = 0;
}
// END FUNCTION

// FUNCTION: 0x102cc520 size=0x9
CUnknown102cc520 *CUnknown102cc520::sub_102cc520()
{
	m_unk0 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102cc7e0 size=0x8
void __fastcall sub_102cc7e0(int *p) { p[16] = 0; }
// END FUNCTION

// FUNCTION: 0x102cef30 size=0x67
extern "C" {
__declspec(dllimport) void* Plat_Alloc(int size);
__declspec(dllimport) void* Plat_Realloc(void* p, int size);
}

struct UtlMem9 {
	int* m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_102cef30(int num);
};

// TARGET: UtlMem9::sub_102cef30
void UtlMem9::sub_102cef30(int num)
{
	if (m_nGrowSize == -1)
		return;
	int newAlloc = m_nAllocationCount;
	int target = newAlloc + num;
	if (newAlloc < target) {
		do {
			if (newAlloc != 0) {
				if (m_nGrowSize != 0)
					newAlloc += m_nGrowSize;
				else
					newAlloc += newAlloc;
			} else {
				newAlloc = 8;
			}
		} while (newAlloc < target);
		m_nAllocationCount = newAlloc;
	}
	if (m_pMemory)
		m_pMemory = (int*)Plat_Realloc(m_pMemory, m_nAllocationCount * 4);
	else
		m_pMemory = (int*)Plat_Alloc(m_nAllocationCount * 4);
}
// END FUNCTION

// FUNCTION: 0x102d0080 size=0xa
void __fastcall sub_102d0080(int *self, int, int value)
{
	self[1] = value;
}
// END FUNCTION

// FUNCTION: 0x102d00a0 size=0xd
void CUnknown102d00a0::sub_102d00a0(unsigned int mask)
{
	m_flags |= mask;
}
// END FUNCTION

// FUNCTION: 0x102d00c0 size=0xa
void __fastcall sub_102d00c0(int *self, int, int value)
{
	self[2] = value;
}
// END FUNCTION

// FUNCTION: 0x102d00e0 size=0x79
#include "S102d4390.h"

void *sub_10430fa0(void *, const void *, unsigned);

void __stdcall sub_102d00e0(S102d4390 *vec, const float *v, float w)
{
    int old = vec->m_size;
    if (old + 1 > vec->m_allocationCount)
        vec->sub_102d4390(old - vec->m_allocationCount + 1);
    int newSize = vec->m_size + 1;
    S102d4390Element *mem = vec->m_pMemory;
    vec->m_pElements = mem;
    vec->m_size = newSize;
    int move = newSize - old - 1;
    if (move > 0)
        sub_10430fa0(mem + (old + 1), mem + old, move * 16);
    S102d4390Element *e = vec->m_pMemory + old;
    e->x = v[0];
    e->y = v[1];
    e->z = v[2];
    vec->m_pMemory[old].w = w;
}
// END FUNCTION

// FUNCTION: 0x102d2840 size=0x82
extern "C" int strcmp(const char *, const char *);
extern char g_106b8540[];

struct SNode {
    char pad0[0x5d8];
    SNode *m_pNext;
    int m_type;
    char pad5e0[0x5f0 - 0x5e0];
    const char *m_pName;
};
extern SNode *g_10925450;

SNode *sub_102d2840(int unused, const char *name)
{
    for (SNode *n = g_10925450; n; n = n->m_pNext) {
        if (n->m_type == 10000 || n->m_type == 800) {
            const char *s = n->m_pName;
            if (!s)
                s = g_106b8540;
            if (strcmp(s, name) == 0)
                return n;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102d41f0 size=0x8
void __fastcall sub_102d41f0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102d4390 size=0x67
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S102d4390 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_102d4390(int num);
};
// TARGET: S102d4390::sub_102d4390
void S102d4390::sub_102d4390(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 2;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount << 4);
    else
        m_pMemory = g_109f3634(m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x102d6210 size=0xe
extern int *g_1060a750[];

int sub_102d6210(int i)
{
	return *g_1060a750[i];
}
// END FUNCTION

// FUNCTION: 0x102d9150 size=0xa
CUnknown102d9150 *CUnknown102d9150::sub_102d9150()
{
	m_unk4 = -1;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102d9170 size=0x6a
#include "CUnknown102d9170.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown102d9170::sub_102d9170(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 1;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x24);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x24);
}
// END FUNCTION

// FUNCTION: 0x102db420 size=0xa
void CUnknown102db420::sub_102db420(int unused)
{
	m_bFlag = 1;
}
// END FUNCTION

// FUNCTION: 0x102db630 size=0xa
extern char g_1092719c;
void sub_102db630(char value)
{
	g_1092719c = value;
}
// END FUNCTION

// FUNCTION: 0x102db740 size=0xd
void CAI_InterestingPlaceConverstation::sub_102db740(int value)
{
	m_unk608 = value;
}
// END FUNCTION

// FUNCTION: 0x102dcd10 size=0xa
void CUnknown102dcd10::sub_102dcd10(int unused)
{
	m_unk45d = 1;
}
// END FUNCTION

// FUNCTION: 0x102dce10 size=0x8
void __fastcall sub_102dce10(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x102dcec0 size=0x67
struct Mem4 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_102dcec0
void __fastcall sub_102dcec0(Mem4 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 8;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 2);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x102dd450 size=0x9
bool CUnknown102dd450::sub_102dd450()
{
	if (m_nCount > 0)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x102dd8b0 size=0x65
struct PatrolPlace { char pad[676]; };
extern int g_10931bc8;
extern int g_10931bcc;
extern char g_10927280[];
extern PatrolPlace g_109272c8[];
extern char g_1060d800[];
extern "C" __declspec(dllimport) void Error(const char* fmt, ...);

// TARGET: sub_102dd8b0
PatrolPlace* sub_102dd8b0()
{
	int i = g_10931bc8;
	while (i < 0x40) {
		if (!g_10927280[i]) {
			g_10931bc8++;
			g_10931bcc++;
			g_10927280[i] = 1;
			return &g_109272c8[i];
		}
		i++;
	}
	Error(g_1060d800, 0x40);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102deea0 size=0x8
void __fastcall sub_102deea0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x102e0900 size=0x64
extern int vt_1049d79c[];
extern int vt_1049d854[];
extern int vt_1049d824[];

CAI_Motor *CAI_Motor::sub_102e0900(int outer)
{
	m_pOuter = (char *)outer;
	*(volatile int *)&m_0c = -1;
	*(volatile int *)&m_14 = 0;
	*(void * volatile *)&m_pSinkVtbl = vt_1049d79c;
	m_54 = 0;
	m_58 = 0;
	m_5c = 0;
	m_60 = 0;
	m_64 = 0;
	*(void **)this = vt_1049d854;
	m_pSinkVtbl = vt_1049d824;
	m_30 = 0;
	m_34 = 0;
	m_38 = 0;
	m_3c = 0;
	m_40 = 0;
	m_44 = 0;
	m_68 = 0;
	m_18 = 0;
	m_1c = 0x43340000;
	m_28 = 0;
	m_2c = 0xbf800000;
	return this;
}
// END FUNCTION

// FUNCTION: 0x102e0a40 size=0xa
struct CUnknown102e0a40 { int p[6]; int a; void sub_102e0a40(int v); };
// TARGET: CUnknown102e0a40::sub_102e0a40
void CUnknown102e0a40::sub_102e0a40(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102e0a60 size=0xa
struct CUnknown102e0a60 { int p[7]; int a; void sub_102e0a60(int v); };
// TARGET: CUnknown102e0a60::sub_102e0a60
void CUnknown102e0a60::sub_102e0a60(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102e0b40 size=0x8
void __fastcall sub_102e0b40(float *p)
{
	p[11] = -1.0f;
}
// END FUNCTION

// FUNCTION: 0x102e12c0 size=0xb
void CUnknown102e12c0::sub_102e12c0()
{
	m_pOuter->vfunc248();
}
// END FUNCTION

// FUNCTION: 0x102e12e0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) T(c0) T(c1) T(c2) T(c3)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e12e0(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e2610 size=0xa
int CAI_Motor::sub_102e2610()
{
	return *(int *)(m_pOuter + 0x5d34);
}
// END FUNCTION

// FUNCTION: 0x102e26f0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0) T(f1)
	virtual void g0(); virtual void g1();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e26f0(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e2710 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0) T(f1)
	virtual void g0(); virtual void g1(); virtual void g2();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e2710(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e2730 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) T(b0) T(b1) T(b2) T(b3) T(b4) T(b5)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e2730(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e2750 size=0xb
void CUnknown102e12c0::sub_102e2750()
{
	m_pOuter->vfunc515();
}
// END FUNCTION

// FUNCTION: 0x102e27b0 size=0xa
float __fastcall sub_102e27b0(char *self)
{
	return *(float *)(*(char **)(self + 4) + 0x6f4);
}
// END FUNCTION

// FUNCTION: 0x102e2800 size=0x8
struct B { void sub_1000108c(int); };
struct A { int a; B *b; void sub_102e2800(int x); };
void A::sub_102e2800(int x) { b->sub_1000108c(x); }
// END FUNCTION

// FUNCTION: 0x102e2840 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CSlots
{
	T(a0) T(a1) T(a2) T(a3) T(a4) T(a5) T(a6) T(a7) T(a8)
	virtual void d0(); virtual void d1(); virtual void d2();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e2840(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e7e00 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0) T(f1)
	virtual void g0(); virtual void g1();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e7e00(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e7e20 size=0xb
void CUnknown102e12c0::sub_102e7e20()
{
	m_pOuter->vfunc523();
}
// END FUNCTION

// FUNCTION: 0x102e7e40 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) T(b0) T(b1) T(b2) T(b3) T(b4) T(b5)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102e7e40(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102e7e60 size=0xb
void CUnknown102e12c0::sub_102e7e60()
{
	m_pOuter->vfunc521();
}
// END FUNCTION

// FUNCTION: 0x102e8250 size=0x8
void __fastcall sub_102e8250(float *p) { p[6] = 3.402823466e+38f; }
// END FUNCTION

// FUNCTION: 0x102e8a80 size=0xa
void __fastcall sub_102e8a80(int *self, int, int value)
{
	self[0xb] = value;
}
// END FUNCTION

// FUNCTION: 0x102e9e50 size=0x73
struct Elem { char data[0x118]; };
struct Mem {
    Elem *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
};
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

void __fastcall sub_102e9e50(Mem *self, int, int num)
{
    if (self->m_nGrowSize == -1)
        return;
    int nAllocationRequested = self->m_nAllocationCount + num;
    if (self->m_nAllocationCount < nAllocationRequested) {
        int count = self->m_nAllocationCount;
        do {
            if (count != 0) {
                if (self->m_nGrowSize != 0)
                    count += self->m_nGrowSize;
                else
                    count += count;
            } else
                count = 1;
        } while (count < nAllocationRequested);
        self->m_nAllocationCount = count;
    }
    if (self->m_pMemory)
        self->m_pMemory = (Elem *)g_109f3638(self->m_pMemory, self->m_nAllocationCount * sizeof(Elem));
    else
        self->m_pMemory = (Elem *)g_109f3634(self->m_nAllocationCount * sizeof(Elem));
}
// END FUNCTION

// FUNCTION: 0x102ec320 size=0x6a
#include "CUnknown102ec320.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown102ec320::sub_102ec320(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 3;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 12);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x102ecbe0 size=0xd
bool sub_102ecbe0(int a)
{
	return a > 1;
}
// END FUNCTION

// FUNCTION: 0x102ecc00 size=0xa
struct CUnknown102ecc00Outer { char p[0x5d3c]; int a; };
struct CUnknown102ecc00 { int v; CUnknown102ecc00Outer *o; int sub_102ecc00(); };
// TARGET: CUnknown102ecc00::sub_102ecc00
int CUnknown102ecc00::sub_102ecc00() { return o->a; }
// END FUNCTION

// FUNCTION: 0x102ecc20 size=0xa
int __fastcall sub_102ecc20(char *self)
{
	return *(int *)(*(char **)(self + 4) + 0x5d3c);
}
// END FUNCTION

// FUNCTION: 0x102ecce0 size=0xb
#define T(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define H(p) T(p##0) T(p##1) T(p##2) T(p##3) T(p##4) T(p##5) T(p##6) T(p##7) T(p##8) T(p##9)
struct CSlots
{
	H(a) H(b) H(c) H(d) H(e) T(f0)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5();
	virtual void target();
};
struct COwner
{
	int pad;
	CSlots *m_pOuter;
};

void __fastcall sub_102ecce0(COwner *self)
{
	self->m_pOuter->target();
}
// END FUNCTION

// FUNCTION: 0x102ee120 size=0xb
void CUnknown102ee120::sub_102ee120(int a, int b, int c)
{
	m_unk30->m_unk24.sub_10319f70(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x102ee1c0 size=0xd
void CUnknown102ee120::sub_102ee1c0(int value)
{
	m_unk30->m_unk28 = value;
}
// END FUNCTION

// FUNCTION: 0x102ee250 size=0xd
__declspec(naked) void CUnknown102ee120::sub_102ee250(int value)
{
	__asm {
		mov ecx, dword ptr [ecx + 0x30]
		mov eax, dword ptr [esp + 4]
		mov dword ptr [ecx + 0x2c], eax
		ret 4
	}
}
// END FUNCTION

// FUNCTION: 0x102ee4f0 size=0x8
struct CInner100016b3 { void sub_100016b3(); };
struct CUnknown102ee4f0 { char pad[0x30]; CInner100016b3 *m_pInner; void sub_102ee4f0(); };
void CUnknown102ee4f0::sub_102ee4f0() { m_pInner->sub_100016b3(); }
// END FUNCTION

// FUNCTION: 0x102ee590 size=0x8
struct B { void sub_10014ef2(int *); };
struct A { char pad[0x30]; B *b; void sub_102ee590(int *x); };
void A::sub_102ee590(int *x) { b->sub_10014ef2(x); }
// END FUNCTION

// FUNCTION: 0x102ee5e0 size=0x8
CUnknown1030bc20_Record *CUnknown102ee120::sub_102ee5e0()
{
	return ((CUnknown1030bc20 *)m_unk30)->sub_1030b7c0();
}
// END FUNCTION

// FUNCTION: 0x102ee600 size=0x8
struct CInner1000a704 { int sub_1000a704(); };
struct CUnknown102ee600 { char pad[0x30]; CInner1000a704 *m_pInner; int sub_102ee600(); };
int CUnknown102ee600::sub_102ee600() { return m_pInner->sub_1000a704(); }
// END FUNCTION

// FUNCTION: 0x102eeba0 size=0xa
struct CUnknown102eeba0 { int p[6]; int a; void sub_102eeba0(int v); };
// TARGET: CUnknown102eeba0::sub_102eeba0
void CUnknown102eeba0::sub_102eeba0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x102f1690 size=0x168
#include "CUnknown102ee120.h"
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)

#define VP(n) virtual void v##n();
#define VP10(n) VP(n##0) VP(n##1) VP(n##2) VP(n##3) VP(n##4) VP(n##5) VP(n##6) VP(n##7) VP(n##8) VP(n##9)
struct HelperEnt102f1690
{
	VP10(0) VP10(1) VP10(2) VP10(3) VP10(4) VP10(5) VP10(6) VP10(7) VP10(8) VP10(9)
	VP10(10) VP10(11) VP10(12) VP10(13) VP10(14) VP10(15) VP10(16) VP10(17) VP10(18) VP10(19)
	VP10(20) VP(210) VP(211) VP(212) VP(213) VP(214) VP(215) VP(216) VP(217) VP(218) VP(219)
	virtual float *v220();
};

struct HelperTrace102f1690
{
	int m_0;
	int pad4[6];
	int m_1c;
	int pad20;
	float m_24;
	int pad28[4];
};

struct HelperParams102f1690
{
	int m_0;
	float m_4;
	float m_8;
	int pad0c[2];
	int m_14;
	int m_18;
	char m_1c;
};

struct HelperTracer102f1690
{
	void sub_102e6d70(int a, float *b, int c, int d, int e, float f, int g, HelperTrace102f1690 *h, int i, int j);
};

struct HelperSelf102f1690
{
	char pad0[4];
	HelperEnt102f1690 *m_4;
	char pad8[0x1c];
	HelperTracer102f1690 *m_24;
	char pad28[8];
	CUnknown1030bc20 *m_30;
};

class CUnknown1030bc20_x : public CUnknown1030bc20
{
public:
	bool sub_1030bd50();
	int sub_1030b7e0();
};

extern float (*g_10579660)(float);

static inline float Dist102f1690(const float *b, const float *a)
{
	float dx = b[0] - a[0];
	float dy = b[1] - a[1];
	float dz = b[2] - a[2];
	return g_10579660(dx * dx + dy * dy + dz * dz);
}

class CUnknown102ee120_x : public CUnknown102ee120
{
public:
	bool sub_102f1690(HelperParams102f1690 *p);
	void sub_102f0400();
	void sub_102ede30(float f, int a);
};

bool CUnknown102ee120_x::sub_102f1690(HelperParams102f1690 *p)
{
	HelperSelf102f1690 *self = (HelperSelf102f1690 *)this;
	if (((CUnknown1030bc20_x *)self->m_30)->m_unk24 == 0)
		return false;
	bool result = false;
	if ((p->m_1c && !(((CUnknown1030bc20_x *)self->m_30)->sub_1030bc20() & 0x22))
		|| Dist102f1690((float *)sub_102ee5e0(), self->m_4->v220()) < p->m_4)
	{
		if (((CUnknown1030bc20_x *)self->m_30)->sub_1030bd50())
			return false;
		HelperTrace102f1690 tr;
		memset(&tr, 0, sizeof(tr));
		CUnknown1030bc20_x *t = (CUnknown1030bc20_x *)self->m_30;
		float *eye = self->m_4->v220();
		HelperTracer102f1690 *tracer = self->m_24;
		int p18 = p->m_18;
		int p0 = p->m_0;
		int mask = t->sub_1030b7e0();
		tracer->sub_102e6d70(2, eye, mask, p0, p18, 100.0f, 0, &tr, 0, 0);
		if (tr.m_24 - p->m_8 < 0.01 || (p->m_14 == 2 && tr.m_0 == -3))
		{
			sub_102f0400();
			result = true;
		}
		else if (tr.m_1c != 0 && p->m_14 == 1)
		{
			sub_102ede30(tr.m_24, 0);
		}
	}
	return result;
}
// END FUNCTION

// FUNCTION: 0x102f2fe0 size=0xd
void CUnknown102ee120::sub_102f2fe0(int value)
{
	m_unk30->m_unk20 = value;
}
// END FUNCTION

// FUNCTION: 0x102f48b0 size=0x67
extern char g_1061052c[];
extern void (*g_109f3630)(const char* fmt, ...);

struct NodeObj { char pad[0x94]; int m_type; };
struct NodeGraph {
	int m_nNodes;
	NodeObj** m_pNodes;
	bool sub_102f48b0(int a, int b);
};

// TARGET: NodeGraph::sub_102f48b0
bool NodeGraph::sub_102f48b0(int a, int b)
{
	if (a > m_nNodes || b > m_nNodes) {
		g_109f3630(g_1061052c);
		return false;
	}
	if (a == b)
		return true;
	int ta = m_pNodes[a]->m_type;
	int tb = m_pNodes[b]->m_type;
	if (ta == 1 || tb == 1)
		return false;
	if (ta == 3 || tb == 3)
		return true;
	return ta == tb;
}
// END FUNCTION

// FUNCTION: 0x102f65b0 size=0xd
extern char g_1093408c;
extern int g_1093407c;
void sub_102f65b0()
{
	g_1093408c = 0;
	g_1093407c = 0;
}
// END FUNCTION

// FUNCTION: 0x102f7970 size=0x79
#include "CUnknown102f7970.h"

extern int g_106c994c;

static inline CUnknown102f7970Node *NodeAt(CUnknown102f7970Vec *v, int i)
{
    if (i < 0 || i >= v->m_count) {
        g_106c994c++;
        return 0;
    }
    return v->m_pData[i];
}

void CUnknown102f7970::sub_102f7970()
{
    m_flags |= 8;
    int i = 0;
    if (m_pVec->m_count > 0) {
        do {
            NodeAt(m_pVec, i)->m_flags74 &= 0xdfffffff;
            NodeAt(m_pVec, i)->m_flags74 &= 0xefffffff;
            i++;
        } while (i < m_pVec->m_count);
    }
}
// END FUNCTION

// FUNCTION: 0x102f8ef0 size=0x8
void __fastcall sub_102f8ef0(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x102f9330 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem4_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem4_t::sub_102f9330
	void sub_102f9330(int num);
};

void CMem4_t::sub_102f9330(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 8;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 2);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x102f9900 size=0xd
extern int g_10610be8;
extern char g_1093412c;
void sub_102f9900()
{
	g_10610be8 = 0;
	g_1093412c = 0;
}
// END FUNCTION

// FUNCTION: 0x102f9990 size=0x8
extern char g_1093412c;
void sub_102f9990() { g_1093412c = 0; }
// END FUNCTION

// FUNCTION: 0x102f99b0 size=0x8
extern char g_1093412c;
void sub_102f99b0() { g_1093412c = 1; }
// END FUNCTION

// FUNCTION: 0x102fc540 size=0x6b
#include <stdarg.h>
#include <stdio.h>

extern int g_10610bec, g_10610bf0;
extern void (*g_109f3630)(const char *);

void sub_102fc540(int a, int b, const char *fmt, ...)
{
    char buf[256];
    if ((a == g_10610bec && b == g_10610bf0) || (a == g_10610bf0 && b == g_10610bec)) {
        va_list args;
        va_start(args, fmt);
        _vsnprintf(buf, 255, fmt, args);
        buf[255] = 0;
        g_109f3630(buf);
    }
}
// END FUNCTION

// FUNCTION: 0x10307b40 size=0x9
struct CUnknown10307b40 { int a; void sub_10307b40(int v); };
// TARGET: CUnknown10307b40::sub_10307b40
void CUnknown10307b40::sub_10307b40(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x1030b2f0 size=0x6a
#include "CUnknown1030b2f0.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown1030b2f0::sub_1030b2f0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 2;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x18);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x18);
}
// END FUNCTION

// FUNCTION: 0x1030b7c0 size=0xd
extern CUnknown1030bc20_Record g_10936afc;
CUnknown1030bc20_Record *CUnknown1030bc20::sub_1030b7c0()
{
	if (m_unk24)
		return m_unk24;
	return &g_10936afc;
}
// END FUNCTION

// FUNCTION: 0x1030ba50 size=0xe
void CUnknown1030ba50::sub_1030ba50(int value)
{
	m_bSet58 = 1;
	m_unk5c = value;
}
// END FUNCTION

// FUNCTION: 0x1030bc20 size=0xc
int CUnknown1030bc20::sub_1030bc20()
{
	if (m_unk24 == 0)
		return 0;
	return m_unk24->m_unk28;
}
// END FUNCTION

// FUNCTION: 0x1030bec0 size=0x69
extern int g_1070d1b0, g_1070d1b4, g_1070d1b8;

struct TObj {
	char pad0[0x11];
	char f11;
	char pad12[2];
	int v14, v18, v1c;
	char pad20[4];
	int f24, f28, f2c, f30;
	char pad34[0xc];
	int f40, f44;
	char pad48[4];
	int v4c, v50, v54;
	char pad58[4];
	int f5c, f60;
	char pad64[0xc];
	int f70;
	TObj *sub_1030bec0();
};

TObj *TObj::sub_1030bec0()
{
	f24 = 0;
	f30 = -1;
	f70 = -1;
	f5c = 0;
	v4c = g_1070d1b0;
	v50 = g_1070d1b4;
	v54 = g_1070d1b8;
	f28 = 0;
	f2c = 1;
	f30 = -1;
	f60 = 0;
	f44 = -1;
	f40 = 0x3dcccccd;
	f11 = 0;
	v14 = g_1070d1b0;
	v18 = g_1070d1b4;
	v1c = g_1070d1b8;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1030ca70 size=0x67
extern "C" int _strcmpi(const char *, const char *);
extern void (*g_109f366c)(const char *, ...);
struct S1030ca70 { int sub_1030ca70(const char *s); };
// TARGET: S1030ca70::sub_1030ca70
int S1030ca70::sub_1030ca70(const char *s)
{
    if (!_strcmpi(s, "TRAVEL"))
        return 0;
    if (!_strcmpi(s, "LOS"))
        return 1;
    if (!_strcmpi(s, "COVER"))
        return 2;
    g_109f366c("Schedule has invalid path ID '%s'\n", s);
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1030d650 size=0x82
int sub_1043e780(const char *, const char *);
extern void (*g_109f366c)(const char *fmt, ...);

int __stdcall sub_1030d650(const char *phase)
{
    if (sub_1043e780(phase, "TENTACLE") == 0)
        return 0;
    if (sub_1043e780(phase, "TENTACLE_TO_GRUB") == 0)
        return 1;
    if (sub_1043e780(phase, "GRUB") == 0)
        return 2;
    if (sub_1043e780(phase, "GRUB_TO_PROXY") == 0)
        return 3;
    g_109f366c("Schedule has invalid MXTPHASE: ID '%s'\n", phase);
    return -1;
}
// END FUNCTION

// FUNCTION: 0x1030f660 size=0x8
extern char g_106b8540;
char * __stdcall sub_1030f660(int) { return &g_106b8540; }
// END FUNCTION

// FUNCTION: 0x1030f680 size=0x70
inline void *operator new(unsigned, void *p) { return p; }
struct Z24 { int d[6]; Z24() { for (int i = 0; i < 6; i++) d[i] = 0; } };
extern char *(*g_109f3890)(char *, const char *, int);
extern "C" unsigned strlen(const char *);
struct Helper1030f680 {
    int a[6];
    int m18;
    int m1c;
    int m20;
    int m24;
    int b[6];
    char *m40;
    int m44;
    Helper1030f680 *sub_1030f680(const char *s, int v1, int v2);
};
Helper1030f680 *Helper1030f680::sub_1030f680(const char *s, int v1, int v2)
{
    new (a) Z24;
    new (b) Z24;
    m1c = v1;
    int n = strlen(s);
    m40 = new char[n + 1];
    g_109f3890(m40, s, n + 1);
    m20 = 0;
    m24 = 0;
    m44 = v2;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1030fc90 size=0x68
struct SInner { void *ent; unsigned serial; };
struct SEnt { int pad; SInner in; };
extern SEnt *g_10566458;
struct SHandle {
    unsigned v;
    void *Get() const
    {
        if (v == 0xffffffff)
            return 0;
        SInner *e = &g_10566458[v & 0x1fff].in;
        if (e->serial != (v >> 13))
            return 0;
        return e->ent;
    }
};
struct SBox { SHandle *p; char pad[8]; int count; };
struct S1030fc90 {
    char pad[0x5c];
    SBox *m5c[3];
    void *sub_1030fc90(unsigned *out);
};
// TARGET: S1030fc90::sub_1030fc90
void *S1030fc90::sub_1030fc90(unsigned *out)
{
    unsigned i = 0;
    do {
        if (m5c[i]->count != 0) {
            ((unsigned short *)out)[0] = (unsigned short)i;
            ((unsigned short *)out)[1] = 1;
            return m5c[i]->p->Get();
        }
        i++;
    } while (i < 3);
    *out = 0xffffffff;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1030fe50 size=0xe
#include "CUnknown1030fe50.h"
// TARGET: CUnknown1030fe50::sub_1030fe50
void CUnknown1030fe50::sub_1030fe50()
{
	m_pOwner->m_unk1f8 = 0;
}
// END FUNCTION

// FUNCTION: 0x10312320 size=0x8
struct CSub10002397 { void sub_10002397(); };
struct CUnknown10312320 { char pad[0x30]; CSub10002397 m_Sub; void sub_10312320(); };
void CUnknown10312320::sub_10312320() { m_Sub.sub_10002397(); }
// END FUNCTION

// FUNCTION: 0x10313f70 size=0x67
struct Mem16 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_10313f70
void __fastcall sub_10313f70(Mem16 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 2;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 4);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x103159d0 size=0x6d
struct Squad;
struct Ent {
    virtual void v0();
    virtual int *v1();
    char pad[0x5da4 - 4];
    Squad *m_pSquad;
};
struct Squad {
    int pad0;
    int m_pName;
    char pad1[0x1c - 8];
    int m_Members[16];
    int m_Count;
};
extern void (*g_109f3630)(const char *, ...);

void __fastcall sub_103159d0(Squad *self, int, Ent *ent)
{
    if (self->m_Count + 1 >= 16) {
        g_109f3630("Error!! Squad %s is too big!!! Replacing last member\n", self->m_pName);
        self->m_Count--;
    }
    int *slot = &self->m_Members[self->m_Count];
    if (ent)
        *slot = *ent->v1();
    else
        *slot = -1;
    ent->m_pSquad = self;
    self->m_Count++;
}
// END FUNCTION

// FUNCTION: 0x10315ec0 size=0x71
#include "CUnknown10315ec0.h"

struct SEnt { int pad; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

bool CUnknown10315ec0::sub_10315ec0(CUnknown10315ec0Ent *pEnt)
{
    CUnknown10315ec0Owner *owner = pEnt->m_pOwner;
    if (owner && owner->m_count5bb0 <= 0) {
        for (int i = 0; i < m_numHandles; i++) {
            unsigned h = m_handles[i];
            SEnt *ent;
            if (h == 0xffffffff)
                ent = 0;
            else {
                SHandleEntry *he = &g_10566458->e[h & 0x1fff];
                ent = (he->serial == (h >> 13)) ? he->p : 0;
            }
            if ((void *)ent == (void *)owner)
                return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x103167f0 size=0x72
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
struct Ent {
    V10(a) V10(b) V10(c) V10(d) V10(e)
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
    virtual bool v54(void *arg);
};
struct Sub { Ent *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
struct Handle { unsigned int m_Index; };
extern EntInfo *g_10566458;
static inline Ent *HGet(const Handle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
static inline Ent *HPeek(const Handle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
struct HandleList {
    char pad[0x1c];
    Handle m_h[16];
    int m_count;
    bool sub_103167f0(void *arg);
};
bool HandleList::sub_103167f0(void *arg)
{
    for (int i = 0; i < m_count; i++) {
        if (HPeek(&m_h[i]) != 0) {
            if (!HGet(&m_h[i])->v54(arg))
                return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x10319f10 size=0xc
bool sub_1000528b(void *);
bool CUnknown10319f10::sub_10319f10()
{
	return sub_1000528b(m_unk0);
}
// END FUNCTION

// FUNCTION: 0x10319fe0 size=0x9
struct CUnknown10319fe0 { int a; void sub_10319fe0(int v); };
// TARGET: CUnknown10319fe0::sub_10319fe0
void CUnknown10319fe0::sub_10319fe0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10321ec0 size=0xb
extern int g_10937ccc;
void sub_10321ec0(void)
{
	g_10937ccc = 0;
}
// END FUNCTION

// FUNCTION: 0x10323210 size=0x79
#include "CBaseCombatCharacter.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseCombatCharacter::sub_10323210()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseCombatCharacter::GetPresenceBenefit";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    int v = *(int *)((char *)this + 0xe80);
    --*g_109f3680;
    return v;
}
// END FUNCTION

// FUNCTION: 0x10323a70 size=0x8
short __fastcall sub_10323a70(char *p)
{
	return *(short *)(p + 0x10b0);
}
// END FUNCTION

// FUNCTION: 0x10324500 size=0x7e
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f1dc[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10324500(int action)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f1dc;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0xff0) = action;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103245a0 size=0x7e
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f20c[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::sub_103245a0(int translated)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f20c;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0xff4) = translated;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10327960 size=0x7e
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_1061f878[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10327960(int color)
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_1061f878;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x1570) = color;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103282e0 size=0x7e
#include "CBaseCombatCharacter.h"

struct Ent { bool sub_10336920(); };

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

struct CScopeGuard {
    CScopeGuard(const char *name, const char *ent)
    {
        g_109f3620[*g_109f3680].name = name;
        g_109f3620[*g_109f3680].ent = ent;
        g_109f3620[*g_109f3680].extra = g_106b8540;
        ++*g_109f3680;
    }
    ~CScopeGuard() { --*g_109f3680; }
};

int CBaseCombatCharacter::sub_103282e0()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    CScopeGuard guard("CBaseCombatCharacter::GetGrappleSize", n);
    return ((Ent *)this)->sub_10336920() != 0;
}
// END FUNCTION

// FUNCTION: 0x10330ce0 size=0xd
#include "CUnknown10330ce0.h"
// TARGET: CUnknown10330ce0::sub_10330ce0
void CUnknown10330ce0::sub_10330ce0(char value)
{
	m_unkfc8 = value;
}
// END FUNCTION

// FUNCTION: 0x103326b0 size=0xf9
struct ScopeEntry { const char *name; const char *ent; const char *extra; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
extern char g_10620b4c[];

struct CSlowUnk
{
	void sub_10013ba6(int);
	void sub_1000e66a(int, int);
	char pad[0x10];
	int m_f10;
};
extern unsigned char g_109f0b2a;
extern CSlowUnk g_109f0b40;
void sub_10430923(void (*)());
void sub_10012a8a();

// TARGET: CBaseCombatCharacter::sub_103326b0
void CBaseCombatCharacter::sub_103326b0(float amount)
{
	const char *name;
	if (this) {
		name = *(const char **)((char *)this + 0x26c);
		if (!name)
			name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].name = g_10620b4c;
	g_109f3620[*g_109f3680].ent = name;
	g_109f3620[*g_109f3680].extra = g_106b8540;
	++*g_109f3680;

	int i = 0;
	float *pf = (float *)((char *)this + 0x10a8);
	*pf = amount + *pf;
	CSlowUnk *p;
	int n;
	if ((n = *(int *)((char *)this + 0x13bc)) > 0) {
		CSlowUnk **list = *(CSlowUnk ***)((char *)this + 0x13c0);
		CSlowUnk **q = list;
		do {
			int f = (*q)->m_f10;
			if (f == 0) {
				p = list[i];
				goto done;
			}
			i++;
			q++;
		} while (i < n);
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.sub_10013ba6(-1);
		sub_10430923(sub_10012a8a);
	}
	p = &g_109f0b40;
done:
	p->sub_1000e66a(0x1a, (int)amount);
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10334600 size=0x83
#include "CBaseCombatCharacter.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_10334600(int count, int ammoIndex)
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseCombatCharacter::SetAmmoCount";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0x15a4 + ammoIndex * 4) = count;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x10336920 size=0xe7
struct TraceEnt { const char *a; const char *b; const char *c; };
extern TraceEnt *g_109f3620;
extern int *g_109f3680;
extern char g_1062147c[];
extern char g_105387dc[];
extern char g_106b8540[];
extern unsigned char g_109f0b2a;
void sub_10012a8a();
int sub_10430923(void (*)());

struct Slot {
	int pad[4];
	int field10;
	void sub_10013ba6(int);
	int sub_10010609(int);
};
extern Slot g_109f0b40;

struct Ent {
	char pad[0x26c];
	const char *name;
	char pad2[0x13bc - 0x270];
	int count;
	Slot **slots;
	bool sub_10336920();
};

bool Ent::sub_10336920()
{
	const char *n;
	if (this != 0) {
		n = name;
		if (!n)
			n = g_106b8540;
	} else
		n = g_105387dc;
	g_109f3620[*g_109f3680].a = g_1062147c;
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	Slot *s;
	for (int i = 0; i < count; i++) {
		if (slots[i]->field10 == 0) {
			s = slots[i];
			goto call;
		}
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.sub_10013ba6(-1);
		sub_10430923(sub_10012a8a);
	}
	s = &g_109f0b40;
call:
	if (s->sub_10010609(11) == 1) {
		--*g_109f3680;
		return true;
	}
	--*g_109f3680;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10337a60 size=0x79
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106216b0[];
extern char g_105387dc[];
extern char g_106b8540[];
int CBaseCombatCharacter::sub_10337a60()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106216b0;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int v = m_field13a0;
    --*g_109f3680;
    return v;
}
// END FUNCTION

// FUNCTION: 0x10339560 size=0x6f
#include "CBaseCombatCharacter.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106219d8[];
extern char g_105387dc[];
extern char g_106b8540[];
void CBaseCombatCharacter::sub_10339560()
{
    const char *name;
    if (this != 0) {
        name = m_name26c;
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    g_109f3620[*g_109f3680].a = g_106219d8;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033c9c0 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_1033c9c0(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::GetMiscFlags";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0xfe4);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x1033ca60 size=0x7c
#include "CBaseCombatCharacter.h"

struct ScopeTrace { const char *name; const char *ent; const char *extra; };
extern ScopeTrace *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CBaseCombatCharacter::sub_1033ca60()
{
    const char *n;
    if (this) {
        n = m_name26c;
        if (!n)
            n = g_106b8540;
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].name = "CBaseCombatCharacter::ClearMiscFlags";
    g_109f3620[*g_109f3680].ent = n;
    g_109f3620[*g_109f3680].extra = g_106b8540;
    ++*g_109f3680;
    *(int *)((char *)this + 0xfe4) = 0;
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1033d380 size=0x69
struct SInner { char *ent; unsigned serial; };
struct SEnt { int pad; SInner in; };
extern SEnt *g_10566458;
struct SHandle {
    unsigned v;
    char *Get() const
    {
        if (v == 0xffffffff)
            return 0;
        SInner *e = &g_10566458[v & 0x1fff].in;
        if (e->serial != (v >> 13))
            return 0;
        return e->ent;
    }
};
struct SItem { int key; SHandle handle; int a; int b; };
struct S1033d380 {
    char pad0[0xfb4];
    SItem *m_items;
    char pad1[0xfc0 - 0xfb8];
    int m_count;
    int sub_1033d380(int key);
};
// TARGET: S1033d380::sub_1033d380
int S1033d380::sub_1033d380(int key)
{
    for (int i = 0; i < m_count; i++) {
        if (m_items[i].key == key) {
            char *ent = m_items[i].handle.Get();
            if (!ent)
                return 0;
            return *(int *)(ent + 0x9c);
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10341120 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int __fastcall sub_10341120(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseCombatCharacter::MoneyValueGet";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    int r = *(int *)(self + 0x13d8);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10349a00 size=0x8
void __fastcall sub_10349a00(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10349ea0 size=0x8
void __fastcall sub_10349ea0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1034a010 size=0x8
void __fastcall sub_1034a010(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1034a1a0 size=0x67
struct Mem16 { void *m_pMemory; int m_nAllocationCount; int m_nGrowSize; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

// TARGET: sub_1034a1a0
void __fastcall sub_1034a1a0(Mem16 *self, int, int num)
{
	if (self->m_nGrowSize == -1)
		return;
	int alloc = self->m_nAllocationCount;
	int need = alloc + num;
	if (alloc < need) {
		do {
			if (alloc != 0) {
				if (self->m_nGrowSize != 0)
					alloc = alloc + self->m_nGrowSize;
				else
					alloc = alloc + alloc;
			} else {
				alloc = 2;
			}
		} while (alloc < need);
		self->m_nAllocationCount = alloc;
	}
	if (self->m_pMemory)
		self->m_pMemory = g_109f3638(self->m_pMemory, self->m_nAllocationCount << 4);
	else
		self->m_pMemory = g_109f3634(self->m_nAllocationCount << 4);
}
// END FUNCTION

// FUNCTION: 0x1034a230 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown1034a230 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2)
	V5(r0) V5(r1) V5(r2) V5(r3)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
	virtual void slot349();
	void sub_1034a230();
};
void CUnknown1034a230::sub_1034a230() { slot349(); }
// END FUNCTION

// FUNCTION: 0x1034a240 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
struct CUnknown1034a240 {
	V25(p0) V25(p1) V25(p2) V25(p3) V25(p4) V25(p5) V25(p6) V25(p7) V25(p8) V25(p9)
	V25(q0) V25(q1) V25(q2)
	V5(r0) V5(r1) V5(r2) V5(r3)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
	virtual void slot350();
	void sub_1034a240();
};
void CUnknown1034a240::sub_1034a240() { slot350(); }
// END FUNCTION

// FUNCTION: 0x1034b520 size=0x8
struct CUnknown1034b520 { void sub_1000d48b(); void sub_1034b520(int); };
void CUnknown1034b520::sub_1034b520(int) { sub_1000d48b(); }
// END FUNCTION

// FUNCTION: 0x1034b540 size=0x8
struct CUnknown1034b540 { void sub_1000efd9(); void sub_1034b540(int); };
void CUnknown1034b540::sub_1034b540(int) { sub_1000efd9(); }
// END FUNCTION

// FUNCTION: 0x1034b560 size=0x8
struct CUnknown1034b560 { void sub_10001375(); void sub_1034b560(int); };
void CUnknown1034b560::sub_1034b560(int) { sub_10001375(); }
// END FUNCTION

// FUNCTION: 0x1034d590 size=0x8
struct CUnknown1034d590 { void sub_1000a1b4(); void sub_1034d590(int); };
void CUnknown1034d590::sub_1034d590(int) { sub_1000a1b4(); }
// END FUNCTION

// FUNCTION: 0x10355d70 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_100103fc(GP *);
extern int vt_104a320c;
extern char g_10628024[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: bodyque
extern "C" GP *bodyque()
{
	GP *p = (GP *)sub_1000db89(0x734);
	if (p) {
		sub_100103fc(p);
		*(int **)p = &vt_104a320c;
	} else {
		p = 0;
	}
	p->name(g_10628024);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10359ba0 size=0x8
void __fastcall sub_10359ba0(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x1035b1c0 size=0x8
struct CUnknown1035b1c0 { int sub_1035b1c0(int, int, int, int); };
int CUnknown1035b1c0::sub_1035b1c0(int, int, int, int) { return 1; }
// END FUNCTION

// FUNCTION: 0x10362670 size=0x81
#include "CNPC_VAsianVampire.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
struct GlobalVars { char pad[0xc]; float curtime; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern GlobalVars *g_1070b228;
extern char g_1062cfec[];
extern char g_106b8540[];
extern float g_104a9318;
bool CNPC_VAsianVampire::sub_10362670()
{
    g_109f3620[*g_109f3680].a = g_1062cfec;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (g_1070b228->curtime - m_flStationaryTime >= g_104a9318) {
        --*g_109f3680;
        return true;
    }
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x103661d0 size=0xa
void __fastcall sub_103661d0(char *self, int, int)
{
	self[0x66a8] = 1;
}
// END FUNCTION

// FUNCTION: 0x1036c7f0 size=0xd
void CUnknown1036c7f0::sub_1036c7f0(int value)
{
	m_unk66b8 = value;
}
// END FUNCTION

// FUNCTION: 0x10373420 size=0x8
void __fastcall sub_10373420(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10377970 size=0x52
struct ISaveRestoreOps;
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
extern int g_1063949c[2];

int *sub_10377970()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 12, "m_hPillarTarget", {0x667c, 0}, 1, 2 },
        { 4, "m_iShunnedFindPillar", {0x6680, 0}, 1, 2 },
        { 4, "m_iDoingGibDeath", {0x6684, 0}, 1, 2 },
        { 4, "m_iCanKnockback", {0x6688, 0}, 1, 2 },
        { 10, "m_OnGibDeath", {0x6664, 0}, 1, 0x16, "OnGibDeath", g_1055dc70 },
    };
    g_1063949c[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1063949c[0] = (int)&dataDesc[1];
    return g_1063949c;
}
// END FUNCTION

// FUNCTION: 0x10379040 size=0xc
bool CUnknown10381be0::sub_10379040()
{
	bool r = (m_flags14b8 >> 4) & 1;
	return r;
}
// END FUNCTION

// FUNCTION: 0x1037bb20 size=0x79
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

bool __fastcall sub_1037bb20(char *self)
{
    const char *name = self ? (*(const char **)(self + 0x26c) ? *(const char **)(self + 0x26c) : g_106b8540) : "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CNPC_VGhoulCroucher::IsDisturbed";
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    bool r = *(bool *)(self + 0x6666);
    (*g_109f3680)--;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10381be0 size=0xc
bool CUnknown10381be0::sub_10381be0()
{
	bool r = (m_flags14b8 >> 4) & 1;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10381c80 size=0xc
unsigned char __fastcall sub_10381c80(char *self)
{
	unsigned char v = (unsigned char)(*(unsigned int *)(self + 0x14b8) >> 5);
	v &= 1;
	return v;
}
// END FUNCTION

// FUNCTION: 0x1038f640 size=0xc
unsigned char __fastcall sub_1038f640(char *self)
{
	unsigned char v = (unsigned char)(*(unsigned int *)(self + 0x14b8) >> 5);
	v &= 1;
	return v;
}
// END FUNCTION

// FUNCTION: 0x10390040 size=0x8
void __fastcall sub_10390040(char *p) { p[0x66b8] = 0; }
// END FUNCTION

// FUNCTION: 0x10398d90 size=0xd
void CUnknown10398d90::sub_10398d90(int value)
{
	m_unk673c = value;
}
// END FUNCTION

// FUNCTION: 0x10399c70 size=0x95
struct ScopeEntry { const char *a; const char *b; const char *c; };
class CVProfile {
public:
	__declspec(dllimport) void EnterScope(const char *, int, const char *, bool);
	__declspec(dllimport) void ExitScope();
};
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern CVProfile *g_109f3648;
extern char g_10647288[];
extern char g_106472b4[];
extern char g_1053a868[];
extern char g_106b8540[];
extern char g_105387dc[];

// TARGET: sub_10399c70
void __fastcall sub_10399c70(char *self)
{
	const char *name;
	if (self) {
		name = *(const char **)(self + 0x26c);
		if (!name)
			name = g_106b8540;
	} else {
		name = g_105387dc;
	}
	g_109f3620[*g_109f3680].a = g_10647288;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	g_109f3648->EnterScope(g_106472b4, 0, g_1053a868, false);
	g_109f3648->ExitScope();
	--*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x1039aaf0 size=0xd
// TARGET: CUnknown1039aaf0::sub_1039aaf0
void CUnknown1039aaf0::sub_1039aaf0(char value)
{
	m_unk6750 = value;
}
// END FUNCTION

// FUNCTION: 0x103a1320 size=0x6a
#include "CUnknown103a1320.h"

extern void *(*g_109f3634)(int);
extern void *(*g_109f3638)(void *, int);

void CUnknown103a1320::sub_103a1320(int num)
{
    if (m_nGrowSize == -1)
        return;
    int requested = m_nAllocationCount + num;
    int alloc = m_nAllocationCount;
    if (alloc < requested) {
        while (alloc < requested) {
            if (alloc) {
                if (m_nGrowSize)
                    alloc += m_nGrowSize;
                else
                    alloc += alloc;
            } else
                alloc = 1;
        }
        m_nAllocationCount = alloc;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount * 0x28);
    else
        m_pMemory = g_109f3634(m_nAllocationCount * 0x28);
}
// END FUNCTION

// FUNCTION: 0x103adb00 size=0x52
struct ISaveRestoreOps;
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
extern int g_106504e8[2];
void sub_10014817();
void sub_1000157d();

int *sub_103adb00()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 12, "m_hTeleportSwarm", {0x66d0, 0}, 1, 2 },
        { 3, "m_vLastTeleportPosition", {0x66d4, 0}, 1, 2 },
        { 15, "m_fLastTeleportTime", {0x66e0, 0}, 1, 2 },
        { 5, "m_bTeleporting", {0x66e4, 0}, 1, 2 },
        { 5, "m_bDead", {0x66e5, 0}, 1, 2 },
        { 5, "m_bActivated", {0x66e6, 0}, 1, 2 },
        { 1, "m_fTeleportSpeed", {0x66f0, 0}, 1, 2 },
        { 15, "m_fTeleportStartTime", {0x66f4, 0}, 1, 2 },
        { 0, "StartAttacking", {0, 0}, 1, 8, "StartAttacking", 0, (void *)sub_10014817 },
        { 0, "StartTransformation", {0, 0}, 1, 8, "StartTransformation", 0, (void *)sub_1000157d },
        { 10, "m_OnFinishTransformation", {0x66b8, 0}, 1, 0x16, "OnFinishTransformation", g_1055dc70 },
    };
    g_106504e8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_106504e8[0] = (int)&dataDesc[1];
    return g_106504e8;
}
// END FUNCTION

// FUNCTION: 0x103be090 size=0xc
bool CUnknown10381be0::sub_103be090()
{
	bool r = (m_flags14b8 >> 4) & 1;
	return r;
}
// END FUNCTION

// FUNCTION: 0x103be130 size=0xc
bool CUnknown10381be0::sub_103be130()
{
	bool r = (m_flags14b8 >> 5) & 1;
	return r;
}
// END FUNCTION

// FUNCTION: 0x103c50c0 size=0x52
struct ISaveRestoreOps;
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
extern int g_1065e418[2];
void sub_103c76b0();

int *sub_103c50c0()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 5, "m_bJumping", {0x6498, 0}, 1, 2 },
        { 2, "m_pMonsterModelName", {0x6680, 0}, 1, 2 },
        { 2, "m_pBodyEmitterNames", {0x6684, 0}, 4, 2 },
        { 3, "m_vJumpOrigin", {0x649c, 0}, 1, 2 },
        { 3, "m_vJumpTarget", {0x64a8, 0}, 1, 2 },
        { 1, "m_fJumpHeight", {0x64b4, 0}, 1, 2 },
        { 1, "m_HealthPercentRecord", {0x6698, 0}, 1, 2 },
        { 1, "m_fJumpGravity", {0x64b8, 0}, 1, 2 },
        { 15, "m_fTaskStartTime", {0x669c, 0}, 1, 2 },
        { 12, "m_hParticleEmitters", {0x66a0, 0}, 4, 2 },
        { 12, "m_hTransformPartner", {0x66b0, 0}, 1, 2 },
        { 16, "m_MorphModelName", {0x667c, 0}, 1, 6, "MorphModel" },
        { 0, "InputTransformModel", {0, 0}, 1, 8, "TransformModel", 0, (void *)sub_103c76b0 },
        { 10, "m_OnTransformComplete", {0x6664, 0}, 1, 0x16, "OnTransformComplete", g_1055dc70 },
    };
    g_1065e418[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_1065e418[0] = (int)&dataDesc[1];
    return g_1065e418;
}
// END FUNCTION

// FUNCTION: 0x103c6df0 size=0x69
#include "CNPC_VVampireBoss.h"

struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_1065ee4c[];
extern char g_106b8540[];

void CNPC_VVampireBoss::sub_103c6df0(int index, const char *name)
{
	g_109f3620[*g_109f3680].name = g_1065ee4c;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	m_pBodyEmitterNames[index] = name;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103c6eb0 size=0x6b
struct ScopeEntry {
    const char *a;
    const char *b;
    const char *c;
};
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CNPC_VVampireBoss::sub_103c6eb0()
{
    g_109f3620[*g_109f3680].a = "CNPC_VVampireBoss::ClearBodyEmitterNames";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    for (int i = 0; i < 4; i++)
        m_pBodyEmitterNames[i] = 0;
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103c76b0 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
#define V100(n) V25(n##0) V25(n##1) V25(n##2) V25(n##3)
struct CUnknown103c76b0 {
	V100(p) V100(q) V100(r) V100(s) V100(t) V100(u)
	V5(w0) V5(w1) V5(w2)
	virtual void f0(); virtual void f1();
	virtual void slot617();
	void sub_103c76b0();
};
void CUnknown103c76b0::sub_103c76b0() { slot617(); }
// END FUNCTION

// FUNCTION: 0x103d1ca0 size=0x81
#include "CNPC_VWerewolf.h"
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_106625b0[];
extern char g_105387dc[];
extern char g_106b8540[];
extern unsigned int g_1093d638[2];
void CNPC_VWerewolf::sub_103d1ca0()
{
    const char *name;
    if (this != 0) {
        name = *(const char **)((char *)this + 0x26c);
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    unsigned int *p = g_1093d638;
    g_109f3620[*g_109f3680].a = g_106625b0;
    g_109f3620[*g_109f3680].b = name;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    __asm {
        mov ecx, p
        rdtsc
        mov [ecx], eax
        mov [ecx + 4], edx
    }
    --*g_109f3680;
}
// END FUNCTION

// FUNCTION: 0x103dc260 size=0x8
void __fastcall sub_103dc260(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x103dc400 size=0x67
extern "C" __declspec(dllimport) void *Plat_Alloc(int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, int size);

struct CMem4b_t {
	void *m_pMemory; int m_nAllocationCount; int m_nGrowSize;
	// TARGET: CMem4b_t::sub_103dc400
	void sub_103dc400(int num);
};

void CMem4b_t::sub_103dc400(int num)
{
	if (m_nGrowSize == -1)
		return;
	int alloc = m_nAllocationCount;
	int newAlloc = num + alloc;
	if (alloc < newAlloc) {
		do {
			if (alloc != 0) {
				if (m_nGrowSize != 0)
					alloc += m_nGrowSize;
				else
					alloc += alloc;
			} else
				alloc = 8;
		} while (alloc < newAlloc);
		m_nAllocationCount = alloc;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount << 2);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x103dc490 size=0x67
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S103dc490 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_103dc490(int num);
};
// TARGET: S103dc490::sub_103dc490
void S103dc490::sub_103dc490(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 8;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount << 2);
    else
        m_pMemory = g_109f3634(m_nAllocationCount << 2);
}
// END FUNCTION

// FUNCTION: 0x103dc520 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory12 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_103dc520(int num);
};

void CUtlMemory12::sub_103dc520(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 3;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 12);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 12);
}
// END FUNCTION

// FUNCTION: 0x103e3ec0 size=0x76
struct Elem1c { char d[0x1c]; };
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct Mem1c {
    Elem1c *m_p;
    int m_alloc;
    int m_grow;
    void sub_103e3ec0(int num);
};
void Mem1c::sub_103e3ec0(int num)
{
    if (m_grow == -1)
        return;
    int want = m_alloc + num;
    if (m_alloc < want) {
        int n = m_alloc;
        do {
            if (n != 0) {
                if (m_grow != 0)
                    n += m_grow;
                else
                    n += n;
            } else
                n = 2;
        } while (n < want);
        m_alloc = n;
    }
    if (m_p)
        m_p = (Elem1c *)g_109f3638(m_p, m_alloc * 0x1c);
    else
        m_p = (Elem1c *)g_109f3634(m_alloc * 0x1c);
}
// END FUNCTION

// FUNCTION: 0x103e3f60 size=0x67
extern void *(__cdecl *g_109f3638)(void *, int);
extern void *(__cdecl *g_109f3634)(int);

struct CUtlMemory8 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_103e3f60(int num);
};

void CUtlMemory8::sub_103e3f60(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 4;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount << 3);
	else
		m_pMemory = g_109f3634(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x103e43a0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d349c;
extern char g_10587618[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_baseball_bat
extern "C" GP *item_w_baseball_bat()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d349c;
	} else {
		p = 0;
	}
	p->name(g_10587618);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e4750 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d3ba4;
extern char g_10587654[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_bush_hook
extern "C" GP *item_w_bush_hook()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d3ba4;
	} else {
		p = 0;
	}
	p->name(g_10587654);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e4ac0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d42ac;
extern char g_1067bee4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_claws
extern "C" GP *item_w_claws()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d42ac;
	} else {
		p = 0;
	}
	p->name(g_1067bee4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e4e20 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d49b4;
extern char g_1063b128[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_claws_ghoul
extern "C" GP *item_w_claws_ghoul()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d49b4;
	} else {
		p = 0;
	}
	p->name(g_1063b128);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e5130 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d50bc;
extern char g_105871ac[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_claws_protean4
extern "C" GP *item_w_claws_protean4()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d50bc;
	} else {
		p = 0;
	}
	p->name(g_105871ac);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e5490 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d57c4;
extern char g_10587190[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_claws_protean5
extern "C" GP *item_w_claws_protean5()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d57c4;
	} else {
		p = 0;
	}
	p->name(g_10587190);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e57f0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d5ecc;
extern char g_10585f08[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_fists
extern "C" GP *item_w_fists()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d5ecc;
	} else {
		p = 0;
	}
	p->name(g_10585f08);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e5b80 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d65d4;
extern char g_10625644[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_zombie_fists
extern "C" GP *item_w_zombie_fists()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d65d4;
	} else {
		p = 0;
	}
	p->name(g_10625644);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e5ec0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d6cdc;
extern char g_1067c0cc[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_fireaxe
extern "C" GP *item_w_fireaxe()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d6cdc;
	} else {
		p = 0;
	}
	p->name(g_1067c0cc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e62d0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d73e4;
extern char g_10587668[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_katana
extern "C" GP *item_w_katana()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d73e4;
	} else {
		p = 0;
	}
	p->name(g_10587668);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e6610 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d7aec;
extern char g_10587630[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_knife
extern "C" GP *item_w_knife()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d7aec;
	} else {
		p = 0;
	}
	p->name(g_10587630);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e6970 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d81f4;
extern char g_1067c1b0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_occultblade
extern "C" GP *item_w_occultblade()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d81f4;
	} else {
		p = 0;
	}
	p->name(g_1067c1b0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e6cb0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d88fc;
extern char g_106511f4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_sheriff_sword
extern "C" GP *item_w_sheriff_sword()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d88fc;
	} else {
		p = 0;
	}
	p->name(g_106511f4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e6fa0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d9004;
extern char g_10587600[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_sledgehammer
extern "C" GP *item_w_sledgehammer()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d9004;
	} else {
		p = 0;
	}
	p->name(g_10587600);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e7c20 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104d9e14;
extern char g_1061f8c8[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_severed_arm
extern "C" GP *item_w_severed_arm()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104d9e14;
	} else {
		p = 0;
	}
	p->name(g_1061f8c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e7f90 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104da51c;
extern char g_10587640[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_tire_iron
extern "C" GP *item_w_tire_iron()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104da51c;
	} else {
		p = 0;
	}
	p->name(g_10587640);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e8320 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104dac24;
extern char g_1067c3a8[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_baton
extern "C" GP *item_w_baton()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104dac24;
	} else {
		p = 0;
	}
	p->name(g_1067c3a8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e8680 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104db32c;
extern char g_10661a20[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_werewolf_attacks
extern "C" GP *item_w_werewolf_attacks()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104db32c;
	} else {
		p = 0;
	}
	p->name(g_10661a20);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e9040 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104dc15c;
extern char g_1064e858[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_sabbatleader_attack
extern "C" GP *item_w_sabbatleader_attack()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104dc15c;
	} else {
		p = 0;
	}
	p->name(g_1064e858);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e9380 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104dc864;
extern char g_10630dd0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_chang_claw
extern "C" GP *item_w_chang_claw()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104dc864;
	} else {
		p = 0;
	}
	p->name(g_10630dd0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e96c0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104dcf6c;
extern char g_10630db8[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_chang_blade
extern "C" GP *item_w_chang_blade()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104dcf6c;
	} else {
		p = 0;
	}
	p->name(g_10630db8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103e9a00 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104dd674;
extern char g_1062cc10[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_avamp_blade
extern "C" GP *item_w_avamp_blade()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104dd674;
	} else {
		p = 0;
	}
	p->name(g_1062cc10);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103eb1c0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104de494;
extern char g_1063a508[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_gargoyle_fist
extern "C" GP *item_w_gargoyle_fist()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104de494;
	} else {
		p = 0;
	}
	p->name(g_1063a508);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103eb4d0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104deb9c;
extern char g_1065d420[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_tzimisce2_claw
extern "C" GP *item_w_tzimisce2_claw()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104deb9c;
	} else {
		p = 0;
	}
	p->name(g_1065d420);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103eb810 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104df2a4;
extern char g_1065deb0[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_tzimisce3_claw
extern "C" GP *item_w_tzimisce3_claw()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104df2a4;
	} else {
		p = 0;
	}
	p->name(g_1065deb0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103ebc20 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104df9ac;
extern char g_1063f408[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_hengeyokai_fist
extern "C" GP *item_w_hengeyokai_fist()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104df9ac;
	} else {
		p = 0;
	}
	p->name(g_1063f408);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103ebf30 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000955c(GP *);
extern int vt_104e00b4;
extern char g_10642ac4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_manbat_claw
extern "C" GP *item_w_manbat_claw()
{
	GP *p = (GP *)sub_1000db89(0x910);
	if (p) {
		sub_1000955c(p);
		*(int **)p = &vt_104e00b4;
	} else {
		p = 0;
	}
	p->name(g_10642ac4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103eec60 size=0xd
void CUnknown103eec60::sub_103eec60(char value)
{
	m_unk931 = value;
}
// END FUNCTION

// FUNCTION: 0x103eee60 size=0x8
#define V5(n) virtual void a##n(); virtual void b##n(); virtual void c##n(); virtual void d##n(); virtual void e##n();
#define V25(n) V5(n##0) V5(n##1) V5(n##2) V5(n##3) V5(n##4)
#define V100(n) V25(n##0) V25(n##1) V25(n##2) V25(n##3)
struct CUnknown103eee60 {
	V100(p) V100(q) V100(r)
	V25(w0) V25(w1) V25(w2)
	virtual void slot375();
	void sub_103eee60();
};
void CUnknown103eee60::sub_103eee60() { slot375(); }
// END FUNCTION

// FUNCTION: 0x103eeec0 size=0xd
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

void sub_103eeec0()
{
	Msg("CWeaponIThrownGrenade::Detonate");
}
// END FUNCTION

// FUNCTION: 0x103ef550 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_1000c748(GP *);
extern int vt_104e1d5c;
extern char g_1062eac4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_w_grenade_frag
extern "C" GP *item_w_grenade_frag()
{
	GP *p = (GP *)sub_1000db89(0x934);
	if (p) {
		sub_1000c748(p);
		*(int **)p = &vt_104e1d5c;
	} else {
		p = 0;
	}
	p->name(g_1062eac4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f04f0 size=0xd
CUnknown103f04f0* CUnknown103f04f0::sub_103f04f0(const CUnknown103f04f0& other)
{
	m_unk0 = other.m_unk0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f3200 size=0x49
#include "CWeaponIArmor_Hvy_Cloth.h"
extern void* vt_104e45bc;
extern const char g_105871f0[];
void* sub_1000db89(unsigned int);

// TARGET: item_a_lt_cloth
extern "C" CWeaponIArmor_Hvy_Cloth* item_a_lt_cloth()
{
	CWeaponIArmor_Hvy_Cloth* p = (CWeaponIArmor_Hvy_Cloth*)sub_1000db89(0x910);
	if (p) {
		p->sub_10001a3c();
		*(void**)p = &vt_104e45bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_105871f0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f3540 size=0x49
#include "CWeaponIArmor_Hvy_Cloth.h"
extern void* vt_104e4cbc;
extern const char g_105875ec[];
void* sub_1000db89(unsigned int);

// TARGET: item_a_hvy_cloth
extern "C" CWeaponIArmor_Hvy_Cloth* item_a_hvy_cloth()
{
	CWeaponIArmor_Hvy_Cloth* p = (CWeaponIArmor_Hvy_Cloth*)sub_1000db89(0x910);
	if (p) {
		p->sub_10001a3c();
		*(void**)p = &vt_104e4cbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_105875ec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f3840 size=0x49
#include "CWeaponIArmor_Hvy_Cloth.h"
extern void* vt_104e53bc;
extern const char g_105875d4[];
void* sub_1000db89(unsigned int);

// TARGET: item_a_lt_leather
extern "C" CWeaponIArmor_Hvy_Cloth* item_a_lt_leather()
{
	CWeaponIArmor_Hvy_Cloth* p = (CWeaponIArmor_Hvy_Cloth*)sub_1000db89(0x910);
	if (p) {
		p->sub_10001a3c();
		*(void**)p = &vt_104e53bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_105875d4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f3b40 size=0x49
#include "CWeaponIArmor_Hvy_Cloth.h"
extern void* vt_104e5abc;
extern const char g_105875bc[];
void* sub_1000db89(unsigned int);

// TARGET: item_a_hvy_leather
extern "C" CWeaponIArmor_Hvy_Cloth* item_a_hvy_leather()
{
	CWeaponIArmor_Hvy_Cloth* p = (CWeaponIArmor_Hvy_Cloth*)sub_1000db89(0x910);
	if (p) {
		p->sub_10001a3c();
		*(void**)p = &vt_104e5abc;
	} else {
		p = 0;
	}
	p->vfunc106(g_105875bc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f3e40 size=0x49
#include "CWeaponIArmor_Hvy_Cloth.h"
extern void* vt_104e61bc;
extern const char g_105875a4[];
void* sub_1000db89(unsigned int);

// TARGET: item_a_body_armor
extern "C" CWeaponIArmor_Hvy_Cloth* item_a_body_armor()
{
	CWeaponIArmor_Hvy_Cloth* p = (CWeaponIArmor_Hvy_Cloth*)sub_1000db89(0x910);
	if (p) {
		p->sub_10001a3c();
		*(void**)p = &vt_104e61bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_105875a4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f4d00 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104e76bc[];
extern char g_105876fc[];

// TARGET: item_g_lockpick
extern "C" CItemGWarrLedger1* item_g_lockpick()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104e76bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_105876fc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f5ac0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10004d9f(GP *);
extern int vt_104e8bbc;
extern char g_106809d4[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_m_wallet
extern "C" GP *item_m_wallet()
{
	GP *p = (GP *)sub_1000db89(0x918);
	if (p) {
		sub_10004d9f(p);
		*(int **)p = &vt_104e8bbc;
	} else {
		p = 0;
	}
	p->name(g_106809d4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f5dc0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10004d9f(GP *);
extern int vt_104e92bc;
extern char g_10680a1c[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_m_money_clip
extern "C" GP *item_m_money_clip()
{
	GP *p = (GP *)sub_1000db89(0x918);
	if (p) {
		sub_10004d9f(p);
		*(int **)p = &vt_104e92bc;
	} else {
		p = 0;
	}
	p->name(g_10680a1c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f60c0 size=0x49
void *sub_1000db89(int);
struct GP;
void __fastcall sub_10004d9f(GP *);
extern int vt_104e99bc;
extern char g_10680a74[];
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};
// TARGET: item_m_money_envelope
extern "C" GP *item_m_money_envelope()
{
	GP *p = (GP *)sub_1000db89(0x918);
	if (p) {
		sub_10004d9f(p);
		*(int **)p = &vt_104e99bc;
	} else {
		p = 0;
	}
	p->name(g_10680a74);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f6400 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ea0bc[];
extern char g_10587204[];

// TARGET: item_g_wallet
extern "C" CItemGWarrLedger1* item_g_wallet()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ea0bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10587204);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f6e00 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104eaebc[];
extern char g_10680b20[];

// TARGET: item_p_research_lg_computers
extern "C" CItemGWarrLedger1* item_p_research_lg_computers()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104eaebc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680b20);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f7100 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104eb5bc[];
extern char g_10680b8c[];

// TARGET: item_p_research_hg_computers
extern "C" CItemGWarrLedger1* item_p_research_hg_computers()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104eb5bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680b8c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f7400 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ebcbc[];
extern char g_10680bf8[];

// TARGET: item_p_research_mg_security
extern "C" CItemGWarrLedger1* item_p_research_mg_security()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ebcbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680bf8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f7700 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ec3bc[];
extern char g_10680c64[];

// TARGET: item_p_research_mg_finance
extern "C" CItemGWarrLedger1* item_p_research_mg_finance()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ec3bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680c64);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f7a00 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ecabc[];
extern char g_10680ccc[];

// TARGET: item_p_research_hg_firearms
extern "C" CItemGWarrLedger1* item_p_research_hg_firearms()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ecabc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680ccc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f7d00 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ed1bc[];
extern char g_10680d38[];

// TARGET: item_p_research_mg_brawl
extern "C" CItemGWarrLedger1* item_p_research_mg_brawl()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ed1bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680d38);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f8000 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ed8bc[];
extern char g_10680da0[];

// TARGET: item_p_research_lg_dodge
extern "C" CItemGWarrLedger1* item_p_research_lg_dodge()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ed8bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680da0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f8300 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104edfbc[];
extern char g_10680e08[];

// TARGET: item_p_research_hg_melee
extern "C" CItemGWarrLedger1* item_p_research_hg_melee()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104edfbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680e08);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f8600 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ee6bc[];
extern char g_10680e70[];

// TARGET: item_p_research_mg_melee
extern "C" CItemGWarrLedger1* item_p_research_mg_melee()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ee6bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680e70);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f8900 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104eedbc[];
extern char g_10680ed8[];

// TARGET: item_p_research_hg_dodge
extern "C" CItemGWarrLedger1* item_p_research_hg_dodge()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104eedbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680ed8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f8c00 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ef4bc[];
extern char g_10680f48[];

// TARGET: item_p_research_lg_stealth
extern "C" CItemGWarrLedger1* item_p_research_lg_stealth()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ef4bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680f48);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f8f00 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104efbbc[];
extern char g_10680fb8[];

// TARGET: item_p_research_lg_firearms
extern "C" CItemGWarrLedger1* item_p_research_lg_firearms()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104efbbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10680fb8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f98a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f09bc[];
extern char g_10681090[];

// TARGET: item_p_occult_hacking
extern "C" CItemGWarrLedger1* item_p_occult_hacking()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f09bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681090);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f9ba0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f10bc[];
extern char g_106810e0[];

// TARGET: item_p_occult_frenzy
extern "C" CItemGWarrLedger1* item_p_occult_frenzy()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f10bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106810e0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103f9ea0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f17bc[];
extern char g_1068113c[];

// TARGET: item_p_occult_lockpicking
extern "C" CItemGWarrLedger1* item_p_occult_lockpicking()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f17bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_1068113c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fa1a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f1ebc[];
extern char g_10681194[];

// TARGET: item_p_occult_presence
extern "C" CItemGWarrLedger1* item_p_occult_presence()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f1ebc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681194);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fa4a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f25bc[];
extern char g_106811ec[];

// TARGET: item_p_occult_obfuscate
extern "C" CItemGWarrLedger1* item_p_occult_obfuscate()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f25bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106811ec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fa7a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f2cbc[];
extern char g_10681244[];

// TARGET: item_p_occult_dexterity
extern "C" CItemGWarrLedger1* item_p_occult_dexterity()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f2cbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681244);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103faaa0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f33bc[];
extern char g_10681298[];

// TARGET: item_p_occult_strength
extern "C" CItemGWarrLedger1* item_p_occult_strength()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f33bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681298);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fada0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f3abc[];
extern char g_106812f4[];

// TARGET: item_p_occult_experience
extern "C" CItemGWarrLedger1* item_p_occult_experience()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f3abc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106812f4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fb0a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f41bc[];
extern char g_10681350[];

// TARGET: item_p_occult_blood_buff
extern "C" CItemGWarrLedger1* item_p_occult_blood_buff()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f41bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681350);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fb3a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f48bc[];
extern char g_106813a0[];

// TARGET: item_p_occult_dodge
extern "C" CItemGWarrLedger1* item_p_occult_dodge()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f48bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106813a0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fb6a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f4fbc[];
extern char g_106813f8[];

// TARGET: item_p_occult_thaum_damage
extern "C" CItemGWarrLedger1* item_p_occult_thaum_damage()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f4fbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106813f8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fb9a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f56bc[];
extern char g_10681464[];

// TARGET: item_p_occult_passive_durations
extern "C" CItemGWarrLedger1* item_p_occult_passive_durations()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f56bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681464);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fbca0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f5dbc[];
extern char g_106814c4[];

// TARGET: item_p_occult_heal_rate
extern "C" CItemGWarrLedger1* item_p_occult_heal_rate()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f5dbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106814c4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fbfa0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f64bc[];
extern char g_10681520[];

// TARGET: item_p_gargoyle_talisman
extern "C" CItemGWarrLedger1* item_p_gargoyle_talisman()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f64bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681520);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fc420 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f6bbc[];
extern char g_10560060[];

// TARGET: item_g_bloodpack
extern "C" CItemGWarrLedger1* item_g_bloodpack()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f6bbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10560060);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fc880 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f72bc[];
extern char g_10560044[];

// TARGET: item_g_bluebloodpack
extern "C" CItemGWarrLedger1* item_g_bluebloodpack()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f72bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10560044);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fccb0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f79bc[];
extern char g_10560028[];

// TARGET: item_g_eldervitaepack
extern "C" CItemGWarrLedger1* item_g_eldervitaepack()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f79bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10560028);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fcfb0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f80bc[];
extern char g_10681618[];

// TARGET: item_g_car_stereo
extern "C" CItemGWarrLedger1* item_g_car_stereo()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f80bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681618);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fd260 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f87bc[];
extern char g_10681664[];

// TARGET: item_g_cash_box
extern "C" CItemGWarrLedger1* item_g_cash_box()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f87bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681664);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fd510 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f8ebc[];
extern char g_106816b8[];

// TARGET: item_g_drugs_drug_box
extern "C" CItemGWarrLedger1* item_g_drugs_drug_box()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f8ebc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106816b8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fd7c0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f95bc[];
extern char g_10681724[];

// TARGET: item_g_drugs_morphine_bottle
extern "C" CItemGWarrLedger1* item_g_drugs_morphine_bottle()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f95bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681724);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fda70 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104f9cbc[];
extern char g_106817a0[];

// TARGET: item_g_drugs_perscription_bottle
extern "C" CItemGWarrLedger1* item_g_drugs_perscription_bottle()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104f9cbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106817a0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fdd20 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fa3bc[];
extern char g_10681810[];

// TARGET: item_g_drugs_pill_bottle
extern "C" CItemGWarrLedger1* item_g_drugs_pill_bottle()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fa3bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681810);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fdfd0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104faabc[];
extern char g_10681870[];

// TARGET: item_g_ghost_pendant
extern "C" CItemGWarrLedger1* item_g_ghost_pendant()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104faabc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681870);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fe280 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fb1bc[];
extern char g_106818bc[];

// TARGET: item_g_ring03
extern "C" CItemGWarrLedger1* item_g_ring03()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fb1bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106818bc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fe530 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fb8bc[];
extern char g_10681908[];

// TARGET: item_g_ring_silver
extern "C" CItemGWarrLedger1* item_g_ring_silver()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fb8bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681908);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fe7e0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fbfbc[];
extern char g_10681958[];

// TARGET: item_g_ring_gold
extern "C" CItemGWarrLedger1* item_g_ring_gold()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fbfbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681958);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fea90 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fc6bc[];
extern char g_106819ac[];

// TARGET: item_g_watch_normal
extern "C" CItemGWarrLedger1* item_g_watch_normal()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fc6bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106819ac);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103fed40 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fcdbc[];
extern char g_10681a00[];

// TARGET: item_g_watch_fancy
extern "C" CItemGWarrLedger1* item_g_watch_fancy()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fcdbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681a00);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103feff0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fd4bc[];
extern char g_10681a54[];

// TARGET: item_g_lilly_photo
extern "C" CItemGWarrLedger1* item_g_lilly_photo()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fd4bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681a54);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103ff2a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fdbbc[];
extern char g_10681aa8[];

// TARGET: item_g_lilly_diary
extern "C" CItemGWarrLedger1* item_g_lilly_diary()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fdbbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681aa8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103ff550 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fe2bc[];
extern char g_10681afc[];

// TARGET: item_g_lilly_purse
extern "C" CItemGWarrLedger1* item_g_lilly_purse()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fe2bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681afc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103ff800 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104fe9bc[];
extern char g_10681b5c[];

// TARGET: item_g_bailbond_receipt
extern "C" CItemGWarrLedger1* item_g_bailbond_receipt()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104fe9bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681b5c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103ffab0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ff0bc[];
extern char g_10681bcc[];

// TARGET: item_g_driver_license_gimble
extern "C" CItemGWarrLedger1* item_g_driver_license_gimble()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ff0bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681bcc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x103ffd60 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ff7bc[];
extern char g_10681c30[];

// TARGET: item_g_werewolf_bloodpack
extern "C" CItemGWarrLedger1* item_g_werewolf_bloodpack()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ff7bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681c30);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10400010 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_104ffebc[];
extern char g_10681c90[];

// TARGET: item_g_jumbles_flyer
extern "C" CItemGWarrLedger1* item_g_jumbles_flyer()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_104ffebc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681c90);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104002c0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105005bc[];
extern char g_10681cf4[];

// TARGET: item_g_larry_briefcase
extern "C" CItemGWarrLedger1* item_g_larry_briefcase()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105005bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681cf4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10400570 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10500cbc[];
extern char g_10681d50[];

// TARGET: item_g_horrortape_1
extern "C" CItemGWarrLedger1* item_g_horrortape_1()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10500cbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681d50);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10400820 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105013bc[];
extern char g_10681da8[];

// TARGET: item_g_horrortape_2
extern "C" CItemGWarrLedger1* item_g_horrortape_2()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105013bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681da8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10400ad0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10501abc[];
extern char g_10681df4[];

// TARGET: item_g_oh_diary
extern "C" CItemGWarrLedger1* item_g_oh_diary()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10501abc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681df4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10400d80 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105021bc[];
extern char g_10681e48[];

// TARGET: item_g_bach_journal
extern "C" CItemGWarrLedger1* item_g_bach_journal()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105021bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681e48);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10401030 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105028bc[];
extern char g_10681ea8[];

// TARGET: item_g_vampyr_apocrypha
extern "C" CItemGWarrLedger1* item_g_vampyr_apocrypha()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105028bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681ea8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104012e0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10502fbc[];
extern char g_10681f04[];

// TARGET: item_g_pisha_fetish
extern "C" CItemGWarrLedger1* item_g_pisha_fetish()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10502fbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681f04);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10401590 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105036bc[];
extern char g_10681f64[];

// TARGET: item_g_edane_print_report
extern "C" CItemGWarrLedger1* item_g_edane_print_report()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105036bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681f64);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10401840 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10503dbc[];
extern char g_10681fc4[];

// TARGET: item_g_edane_report
extern "C" CItemGWarrLedger1* item_g_edane_report()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10503dbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10681fc4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10401af0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105044bc[];
extern char g_1068203c[];

// TARGET: item_g_giovanni_invitation_victor
extern "C" CItemGWarrLedger1* item_g_giovanni_invitation_victor()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105044bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_1068203c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10401da0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10504bbc[];
extern char g_106820bc[];

// TARGET: item_g_giovanni_invitation_maria
extern "C" CItemGWarrLedger1* item_g_giovanni_invitation_maria()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10504bbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106820bc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10402050 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105052bc[];
extern char g_10682124[];

// TARGET: item_g_guy_magazine
extern "C" CItemGWarrLedger1* item_g_guy_magazine()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105052bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682124);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10402300 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105059bc[];
extern char g_10682184[];

// TARGET: item_g_brotherhood_flyer
extern "C" CItemGWarrLedger1* item_g_brotherhood_flyer()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105059bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682184);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104025b0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105060bc[];
extern char g_106821fc[];

// TARGET: item_g_milligans_businesscard
extern "C" CItemGWarrLedger1* item_g_milligans_businesscard()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105060bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106821fc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10402860 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105067bc[];
extern char g_10682258[];

// TARGET: item_g_pisha_book
extern "C" CItemGWarrLedger1* item_g_pisha_book()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105067bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682258);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10402b10 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10506ebc[];
extern char g_106822b8[];

// TARGET: item_g_badlucktalisman
extern "C" CItemGWarrLedger1* item_g_badlucktalisman()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10506ebc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106822b8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10402dc0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105075bc[];
extern char g_1068093c[];

// TARGET: item_g_warrens4_passkey
extern "C" CItemGWarrLedger1* item_g_warrens4_passkey()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105075bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_1068093c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10403070 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10507cbc[];
extern char g_10682364[];

// TARGET: item_g_wireless_camera_1
extern "C" CItemGWarrLedger1* item_g_wireless_camera_1()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10507cbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682364);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10403320 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105083bc[];
extern char g_106823cc[];

// TARGET: item_g_wireless_camera_2
extern "C" CItemGWarrLedger1* item_g_wireless_camera_2()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105083bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106823cc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104035d0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10508abc[];
extern char g_10682434[];

// TARGET: item_g_wireless_camera_3
extern "C" CItemGWarrLedger1* item_g_wireless_camera_3()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10508abc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682434);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10403880 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105091bc[];
extern char g_1068249c[];

// TARGET: item_g_wireless_camera_4
extern "C" CItemGWarrLedger1* item_g_wireless_camera_4()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105091bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_1068249c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10403b30 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105098bc[];
extern char g_106824ec[];

// TARGET: item_g_eyes
extern "C" CItemGWarrLedger1* item_g_eyes()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105098bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106824ec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10403de0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10509fbc[];
extern char g_10682548[];

// TARGET: item_g_hatters_screenplay
extern "C" CItemGWarrLedger1* item_g_hatters_screenplay()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10509fbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682548);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10404090 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050a6bc[];
extern char g_10682598[];

// TARGET: item_g_stake
extern "C" CItemGWarrLedger1* item_g_stake()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050a6bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682598);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10404340 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050adbc[];
extern char g_106825e8[];

// TARGET: item_g_warr_clipboard
extern "C" CItemGWarrLedger1* item_g_warr_clipboard()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050adbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106825e8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104045f0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050b4bc[];
extern char g_10682644[];

// TARGET: item_g_warr_ledger_1
extern "C" CItemGWarrLedger1* item_g_warr_ledger_1()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050b4bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682644);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104048a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050bbbc[];
extern char g_106826a0[];

// TARGET: item_g_warr_ledger_2
extern "C" CItemGWarrLedger1* item_g_warr_ledger_2()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050bbbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106826a0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10404b50 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050c2bc[];
extern char g_10682704[];

// TARGET: item_g_mercurio_journal
extern "C" CItemGWarrLedger1* item_g_mercurio_journal()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050c2bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682704);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10404e00 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050c9bc[];
extern char g_10682768[];

// TARGET: item_g_hannahs_appt_book
extern "C" CItemGWarrLedger1* item_g_hannahs_appt_book()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050c9bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682768);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104050b0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050d0bc[];
extern char g_106827dc[];

// TARGET: item_g_junkyard_businesscard
extern "C" CItemGWarrLedger1* item_g_junkyard_businesscard()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050d0bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106827dc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10405360 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050d7bc[];
extern char g_10682834[];

// TARGET: item_g_idol_cat
extern "C" CItemGWarrLedger1* item_g_idol_cat()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050d7bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682834);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10405610 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050debc[];
extern char g_10682880[];

// TARGET: item_g_idol_crane
extern "C" CItemGWarrLedger1* item_g_idol_crane()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050debc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682880);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104058c0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050e5bc[];
extern char g_106828d4[];

// TARGET: item_g_idol_dragon
extern "C" CItemGWarrLedger1* item_g_idol_dragon()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050e5bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106828d4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10405b70 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050ecbc[];
extern char g_1068292c[];

// TARGET: item_g_idol_elephant
extern "C" CItemGWarrLedger1* item_g_idol_elephant()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050ecbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_1068292c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10405e20 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050f3bc[];
extern char g_1068297c[];

// TARGET: item_g_garys_cd
extern "C" CItemGWarrLedger1* item_g_garys_cd()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050f3bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_1068297c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104060d0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_1050fabc[];
extern char g_106829c8[];

// TARGET: item_g_garys_film
extern "C" CItemGWarrLedger1* item_g_garys_film()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_1050fabc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106829c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10406380 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105101bc[];
extern char g_10682a1c[];

// TARGET: item_g_garys_photo
extern "C" CItemGWarrLedger1* item_g_garys_photo()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105101bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682a1c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10406630 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105108bc[];
extern char g_10682a6c[];

// TARGET: item_g_garys_tape
extern "C" CItemGWarrLedger1* item_g_garys_tape()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105108bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682a6c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104068e0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10510fbc[];
extern char g_10682ac0[];

// TARGET: item_g_bertrams_cd
extern "C" CItemGWarrLedger1* item_g_bertrams_cd()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10510fbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682ac0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10406b90 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105116bc[];
extern char g_10682b24[];

// TARGET: item_g_ring_serial_killer_1
extern "C" CItemGWarrLedger1* item_g_ring_serial_killer_1()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105116bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682b24);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10406e40 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10511dbc[];
extern char g_10682b88[];

// TARGET: item_g_gargoyle_book
extern "C" CItemGWarrLedger1* item_g_gargoyle_book()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10511dbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682b88);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104070f0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105124bc[];
extern char g_10682bd8[];

// TARGET: item_g_vv_photo
extern "C" CItemGWarrLedger1* item_g_vv_photo()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105124bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682bd8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104073a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_10512bbc[];
extern char g_10682c34[];

// TARGET: item_k_sarcophagus_key
extern "C" CItemGWarrLedger1* item_k_sarcophagus_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_10512bbc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682c34);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10407650 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105132bc[];
extern char g_10682c8c[];

// TARGET: item_g_sewerbook_1
extern "C" CItemGWarrLedger1* item_g_sewerbook_1()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x914);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105132bc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682c8c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104085f0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682d24[];

// TARGET: item_k_key_generic
extern "C" CItemGWarrLedger1* item_k_key_generic()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682d24);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104089c0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682d60[];

// TARGET: item_k_gallery_noir_key
extern "C" CItemGWarrLedger1* item_k_gallery_noir_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682d60);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408a30 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682d7c[];

// TARGET: item_k_lilly_key
extern "C" CItemGWarrLedger1* item_k_lilly_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682d7c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408aa0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682d90[];

// TARGET: item_k_murietta_key
extern "C" CItemGWarrLedger1* item_k_murietta_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682d90);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408b10 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682da8[];

// TARGET: item_k_oceanhouse_sewer_key
extern "C" CItemGWarrLedger1* item_k_oceanhouse_sewer_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682da8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408b80 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682dcc[];

// TARGET: item_k_oceanhouse_basement_key
extern "C" CItemGWarrLedger1* item_k_oceanhouse_basement_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682dcc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408bf0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682df4[];

// TARGET: item_k_oceanhouse_upstairs_key
extern "C" CItemGWarrLedger1* item_k_oceanhouse_upstairs_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682df4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408c60 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682e1c[];

// TARGET: item_k_clinic_maintenance_key
extern "C" CItemGWarrLedger1* item_k_clinic_maintenance_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682e1c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408cd0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682e40[];

// TARGET: item_k_clinic_stairs_key
extern "C" CItemGWarrLedger1* item_k_clinic_stairs_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682e40);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408d40 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682e60[];

// TARGET: item_k_clinic_cs_key
extern "C" CItemGWarrLedger1* item_k_clinic_cs_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682e60);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408db0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682e7c[];

// TARGET: item_k_malcolm_office_key
extern "C" CItemGWarrLedger1* item_k_malcolm_office_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682e7c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408e20 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682e9c[];

// TARGET: item_k_gimble_key
extern "C" CItemGWarrLedger1* item_k_gimble_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682e9c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408e90 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682eb4[];

// TARGET: item_k_lucky_star_murder_key
extern "C" CItemGWarrLedger1* item_k_lucky_star_murder_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682eb4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408f00 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682ed8[];

// TARGET: item_k_leopold_int_key
extern "C" CItemGWarrLedger1* item_k_leopold_int_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682ed8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408f70 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682ef4[];

// TARGET: item_k_museum_basement_key
extern "C" CItemGWarrLedger1* item_k_museum_basement_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682ef4);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10408fe0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682f14[];

// TARGET: item_k_museum_storeroom_key
extern "C" CItemGWarrLedger1* item_k_museum_storeroom_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682f14);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409050 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682f38[];

// TARGET: item_k_museum_storage_key
extern "C" CItemGWarrLedger1* item_k_museum_storage_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682f38);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104090c0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682f58[];

// TARGET: item_k_netcafe_office_key
extern "C" CItemGWarrLedger1* item_k_netcafe_office_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682f58);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409130 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682f78[];

// TARGET: item_k_edane_key
extern "C" CItemGWarrLedger1* item_k_edane_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682f78);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104091a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682f8c[];

// TARGET: item_k_empire_mafia_key
extern "C" CItemGWarrLedger1* item_k_empire_mafia_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682f8c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409210 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682fa8[];

// TARGET: item_k_empire_jezebel_key
extern "C" CItemGWarrLedger1* item_k_empire_jezebel_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682fa8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409280 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682fc8[];

// TARGET: item_k_carson_apartment_key
extern "C" CItemGWarrLedger1* item_k_carson_apartment_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682fc8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104092f0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10682fec[];

// TARGET: item_k_tatoo_parlor_key
extern "C" CItemGWarrLedger1* item_k_tatoo_parlor_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10682fec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409360 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10683008[];

// TARGET: item_k_malkavian_refrigerator_key
extern "C" CItemGWarrLedger1* item_k_malkavian_refrigerator_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10683008);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104093d0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10683030[];

// TARGET: item_k_tutorial_chopshop_stairs_key
extern "C" CItemGWarrLedger1* item_k_tutorial_chopshop_stairs_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10683030);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409440 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_1068305c[];

// TARGET: item_k_tawni_apartment_key
extern "C" CItemGWarrLedger1* item_k_tawni_apartment_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_1068305c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104094b0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_1068307c[];

// TARGET: item_k_shrekhub_one_key
extern "C" CItemGWarrLedger1* item_k_shrekhub_one_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_1068307c);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409520 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10683098[];

// TARGET: item_k_shrekhub_three_key
extern "C" CItemGWarrLedger1* item_k_shrekhub_three_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10683098);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409590 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_106830b8[];

// TARGET: item_k_shrekhub_four_key
extern "C" CItemGWarrLedger1* item_k_shrekhub_four_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106830b8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409600 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_106830d8[];

// TARGET: item_k_kiki_key
extern "C" CItemGWarrLedger1* item_k_kiki_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106830d8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409670 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_106830ec[];

// TARGET: item_k_oh_front_key
extern "C" CItemGWarrLedger1* item_k_oh_front_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_106830ec);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104096e0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10683104[];

// TARGET: item_k_fu_office_key
extern "C" CItemGWarrLedger1* item_k_fu_office_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10683104);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409750 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10683120[];

// TARGET: item_k_fu_cell_key
extern "C" CItemGWarrLedger1* item_k_fu_cell_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10683120);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104097c0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10683138[];

// TARGET: item_k_chinese_theatre_key
extern "C" CItemGWarrLedger1* item_k_chinese_theatre_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10683138);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10409830 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10683158[];

// TARGET: item_k_hitman_lu_key
extern "C" CItemGWarrLedger1* item_k_hitman_lu_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10683158);
	return p;
}
// END FUNCTION

// FUNCTION: 0x104098a0 size=0x49
#include "CItemGWarrLedger1.h"
extern void* sub_1000db89(unsigned int);
extern void* vt_105140dc[];
extern char g_10683174[];

// TARGET: item_k_hitman_ji_key
extern "C" CItemGWarrLedger1* item_k_hitman_ji_key()
{
	CItemGWarrLedger1* p = (CItemGWarrLedger1*)sub_1000db89(0x954);
	if (p) {
		p->sub_1000d26f();
		*(void***)p = vt_105140dc;
	} else {
		p = 0;
	}
	p->vfunc106(g_10683174);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1040b120 size=0x6a
extern "C" __declspec(dllimport) void *__cdecl Plat_Realloc(void *, int);
extern "C" __declspec(dllimport) void *__cdecl Plat_Alloc(int);

struct CUtlMemory192 {
	void *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;
	void sub_1040b120(int num);
};

void CUtlMemory192::sub_1040b120(int num)
{
	if (m_nGrowSize == -1)
		return;
	int requested = m_nAllocationCount + num;
	if (m_nAllocationCount < requested) {
		int n = m_nAllocationCount;
		do {
			if (n) {
				if (m_nGrowSize)
					n = n + m_nGrowSize;
				else
					n = n + n;
			} else
				n = 1;
		} while (n < requested);
		m_nAllocationCount = n;
	}
	if (m_pMemory)
		m_pMemory = Plat_Realloc(m_pMemory, m_nAllocationCount * 0xc0);
	else
		m_pMemory = Plat_Alloc(m_nAllocationCount * 0xc0);
}
// END FUNCTION

// FUNCTION: 0x104110d0 size=0x6d
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
#define V100(a) V10(a##0) V10(a##1) V10(a##2) V10(a##3) V10(a##4) V10(a##5) V10(a##6) V10(a##7) V10(a##8) V10(a##9)
struct Info { char pad[0x70]; short m_type; };
struct IReg { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual Info *v5(int id); };
struct Item { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual int v19(); };
struct Holder {
    V100(a) V100(b)
    V10(c) V10(d) V10(e)
    virtual void m0(); virtual void m1(); virtual void m2();
    virtual int v233(Item **out, int max);
};
extern IReg *g_10723944;
bool __stdcall sub_104110d0(Holder *h)
{
    Item *items[64];
    int n = h->v233(items, 64);
    int i = 0;
    while (i < n) {
        int id = items[i]->v19();
        short t = g_10723944->v5(id)->m_type;
        if (t == 0x46 || t == 0x42 || t == 0x48)
            return true;
        i++;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x104121d0 size=0xb
extern int g_109d3080;
void sub_104121d0()
{
	g_109d3080 = 0;
}
// END FUNCTION

// FUNCTION: 0x104273f0 size=0x67
extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);
struct S104273f0 {
    void *m_pMemory;
    int m_nAllocationCount;
    int m_nGrowSize;
    void sub_104273f0(int num);
};
// TARGET: S104273f0::sub_104273f0
void S104273f0::sub_104273f0(int num)
{
    if (m_nGrowSize == -1)
        return;
    int newCount = m_nAllocationCount + num;
    if (m_nAllocationCount < newCount) {
        int a = m_nAllocationCount;
        do {
            if (a != 0) {
                if (m_nGrowSize != 0)
                    a = a + m_nGrowSize;
                else
                    a = a * 2;
            } else
                a = 4;
        } while (a < newCount);
        m_nAllocationCount = a;
    }
    if (m_pMemory)
        m_pMemory = g_109f3638(m_pMemory, m_nAllocationCount << 3);
    else
        m_pMemory = g_109f3634(m_nAllocationCount << 3);
}
// END FUNCTION

// FUNCTION: 0x10427700 size=0x69
#include "CUnknown10427700.h"
#include <string.h>

extern char *(*g_109f3890)(char *, const char *, int);

bool CUnknown10427700::sub_10427700(const char *name, int a, int b)
{
    if (m_nEntries == 0x20)
        return false;
    unsigned int len = strlen(name);
    m_entries[m_nEntries].m_pName = (char *)operator new(len + 1);
    g_109f3890(m_entries[m_nEntries].m_pName, name, len + 1);
    m_entries[m_nEntries].m_a = a;
    m_entries[m_nEntries].m_b = b;
    return true;
}
// END FUNCTION

// FUNCTION: 0x10428eb0 size=0xd
int sub_10428eb0(char *p)
{
	return *(int *)(p + 0x188) + (int)p;
}
// END FUNCTION

// FUNCTION: 0x10429240 size=0xc
extern const char *g_106ac3a0[];
const char *sub_10429240(int index)
{
	return g_106ac3a0[index];
}
// END FUNCTION

// FUNCTION: 0x1042ba00 size=0xd
// TARGET: CUnknown1042ba00::sub_1042ba00
void CUnknown1042ba00::sub_1042ba00(int value)
{
	m_unk730 = value;
}
// END FUNCTION

// FUNCTION: 0x1042c4a0 size=0xb
extern int g_109eed5c;
void sub_1042c4a0(void)
{
	g_109eed5c = 0;
}
// END FUNCTION

// FUNCTION: 0x1042d650 size=0x9
struct CUnknown1042d650 { int a; CUnknown1042d650* sub_1042d650(); };
// TARGET: CUnknown1042d650::sub_1042d650
CUnknown1042d650* CUnknown1042d650::sub_1042d650() { a = 0; return this; }
// END FUNCTION

// FUNCTION: 0x1042d700 size=0x8
unsigned int __fastcall sub_1042d700(unsigned int *p) { return (*p >> 1) & 0x1f; }
// END FUNCTION

// FUNCTION: 0x1042d720 size=0xb
unsigned int __fastcall sub_1042d720(unsigned int *self)
{
	return *self >> 6 & 0x3ff;
}
// END FUNCTION

// FUNCTION: 0x1042d9a0 size=0xa
unsigned short CUnknown1042d9a0::sub_1042d9a0()
{
	return m_unk2 & 0xfff;
}
// END FUNCTION

// FUNCTION: 0x1042da80 size=0x9
void CUnknown1042da80::sub_1042da80(int value)
{
	m_unk0 = value;
}
// END FUNCTION

// FUNCTION: 0x1042daa0 size=0x7e
#include "CUnknown1042d9a0.h"

unsigned __fastcall sub_1042d700(unsigned *p) { return *p >> 1 & 0x1f; }
unsigned __fastcall sub_1042d720(unsigned *p) { return *p >> 6 & 0x3ff; }
unsigned __fastcall sub_1042d9a0(unsigned *p) { return ((unsigned short *)p)[1] & 0xfff; }
unsigned __fastcall sub_10011e4b(unsigned *p) { return *p >> 28; }

// TARGET: CUnknown1042d9a0::sub_1042daa0
char CUnknown1042d9a0::sub_1042daa0(CUnknown1042d9a0 *other)
{
    if (this == other)
        return 1;
    if (sub_1042d700((unsigned *)this) != sub_1042d700((unsigned *)other))
        return 0;
    if (sub_1042d720((unsigned *)this) != sub_1042d720((unsigned *)other))
        return 0;
    if (::sub_1042d9a0((unsigned *)this) != ::sub_1042d9a0((unsigned *)other))
        return 0;
    return sub_10011e4b((unsigned *)this) == sub_10011e4b((unsigned *)other);
}
// END FUNCTION

// FUNCTION: 0x10436900 size=0xd
#pragma optimize("s", on)
int sub_10436900(char **ap)
{
	return *(int *)((*ap += 4) - 4);
}
// END FUNCTION

// FUNCTION: 0x10436e0e size=0xd
__declspec(naked) void sub_10436e0e()
{
	__asm {
		cmp word ptr [esp], 0x27f
		je skip
		fldcw word ptr [esp]
	skip:
		pop edx
		ret
	}
}
// END FUNCTION

// FUNCTION: 0x1043ac71 size=0xc
__declspec(naked) void sub_1043ac71(int *p)
{
	__asm {
		push edi
		mov edi, dword ptr [esp + 8]
		xor eax, eax
		stosd
		stosd
		stosd
		pop edi
		ret
	}
}
// END FUNCTION
