// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1003c660 size=0x221
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CDataObjectAccessSystem.h"
#include "ScopeTrace.h"
#include "UtlHash8.h"

extern char vt_104493a8[];
extern char vt_10449390[];
extern char vt_10449378[];
extern char vt_10449360[];
extern char vt_10449348[];
bool __cdecl sub_10041b40(void *, void *);
unsigned int __cdecl sub_10041b70(void *);
bool __cdecl sub_10041b90(void *, void *);
unsigned int __cdecl sub_10041bc0(void *);
bool __cdecl sub_10041be0(void *, void *);
unsigned int __cdecl sub_10041c10(void *);
bool __cdecl sub_10041c30(void *, void *);
unsigned int __cdecl sub_10041c60(void *);

struct SInstBase { void *m_vtbl; SInstBase() { m_vtbl = vt_104493a8; } };
struct SInstTouch : SInstBase { UtlHash8 m_hash;
	SInstTouch() { m_hash.sub_10041c80(0x40, 0, 0, sub_10041b40, sub_10041b70); m_vtbl = vt_10449390; } };
struct SInstGround : SInstBase { UtlHash8 m_hash;
	SInstGround() { m_hash.sub_10041de0(0x40, 0, 0, sub_10041b90, sub_10041bc0); m_vtbl = vt_10449378; } };
struct SInstStep : SInstBase { UtlHash8 m_hash;
	SInstStep() { m_hash.sub_10041f40(0x40, 0, 0, sub_10041be0, sub_10041c10); m_vtbl = vt_10449360; } };
struct SInstWidth : SInstBase { UtlHash8 m_hash;
	SInstWidth() { m_hash.sub_100420a0(0x40, 0, 0, sub_10041c30, sub_10041c60); m_vtbl = vt_10449348; } };

inline void CDataObjectAccessSystem::AddDataAccessor(int index, void *pData)
{
	ScopeTrace trace("CDataObjectAccessSystem::AddDataAccessor", g_106b8540, g_106b8540);
	if (index < 0 || index >= 32)
		return;
	if (m_data[index])
		return;
	m_data[index] = pData;
	if (0) m_data[index] = 0;
	if (0) m_data[index] = 0;
}

// TARGET: CDataObjectAccessSystem::vfunc0
bool CDataObjectAccessSystem::vfunc0()
{
	ScopeTrace trace("CDataObjectAccessSystem::Init", g_106b8540, g_106b8540);
	AddDataAccessor(1, new SInstTouch);
	AddDataAccessor(0, new SInstGround);
	AddDataAccessor(2, new SInstStep);
	AddDataAccessor(3, new SInstWidth);
	return true;
}
// END FUNCTION

// FUNCTION: 0x1003c950 size=0x77
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
struct IObj { virtual ~IObj(); };
struct Sys {
    char pad[8];
    IObj *m_pObjects[32];
};

void __fastcall sub_1003c950(Sys *self)
{
    g_109f3620[*g_109f3680].a = "CDataObjectAccessSystem::Shutdown";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    (*g_109f3680)++;
    for (int i = 0; i < 32; i++) {
        delete self->m_pObjects[i];
        self->m_pObjects[i] = 0;
    }
    (*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1003ca90 size=0x1e
#include "CDataObjectAccessSystem.h"

// TARGET: CDataObjectAccessSystem::vfunc8
CAutoGameSystem *CDataObjectAccessSystem::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
