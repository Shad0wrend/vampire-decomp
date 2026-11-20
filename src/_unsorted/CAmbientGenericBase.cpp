// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1009d980 size=0x42f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CAmbientGeneric.h"
#include "CBaseEntity.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CFlagsUnit.h"
// TARGET: CAmbientGenericBase::CAmbientGenericBase
extern int vt_10450a10[];
extern int vt_10450584[];
extern float g_1070d1b0[];
extern char *g_1070b228;
void __fastcall sub_100cd2a0(void *p);
void __fastcall sub_1000a64b(void *p);
void __fastcall sub_100026a8(void *p);
void __fastcall sub_10011482(void *p);
void __fastcall sub_1000b523(void *p);
void __fastcall sub_10002e1e(void *p);
void __cdecl sub_1000949e(void *p);
struct V1 { int a, b, c, size; int *elem; void sub_100066f9(int, int); void sub_1000e999(int, int); void sub_1001163a(int, int); void sub_1000adcb(void *); void sub_1000f47f(void *); };
struct V2 { int a, b, c, d, e, f, g, h; int *elem; };
typedef void (CBaseEntity::*PfnStr)(string_t);
CAmbientGenericBase::CAmbientGenericBase(char bAddAsDefault)
{
	char *p = (char *)this;
	CBaseEntity *e = (CBaseEntity *)this;
	const char *const &rn = *(const char *const *)(p + 0x26c);
	*(void **)p = vt_10450a10;
	sub_100cd2a0(p + 0x5c);
	sub_100cd2a0(p + 0x74);
	*(int *)(p + 0x8c) = -1;
	*(int *)(p + 0xc8) = -1;
	*(int *)(p + 0xd0) = -1;
	*(int *)(p + 0x100) = -1;
	*(int *)(p + 0x10c) = -1;
	*(int *)(p + 0x110) = -1;
	sub_1000a64b(p + 0x1a8);
	sub_100026a8(p + 0x1b0);
	{
		V1 *v1 = (V1 *)(p + 0x1b8);
		v1->sub_100066f9(0, 0);
		v1->size = 0;
		v1->elem = (int *)v1->a;
	}
	{
		V1 *v2 = (V1 *)(p + 0x1d0);
		v2->sub_1000e999(0, 0);
		v2->size = 0;
		v2->elem = (int *)v2->a;
	}
	((CBaseHandle *)(p + 0x218))->CBaseHandle::CBaseHandle();
	((CBaseHandle *)(p + 0x220))->CBaseHandle::CBaseHandle();
	{
		V1 *v3 = (V1 *)(p + 0x230);
		v3->sub_1001163a(0, 0);
		sub_1000b523(v3);
		((V2 *)v3)->elem = (int *)v3->a;
	}
	((CBaseHandle *)(p + 0x254))->CBaseHandle::CBaseHandle();
	((CBaseHandle *)(p + 0x25c))->CBaseHandle::CBaseHandle();
	((CBaseHandle *)(p + 0x260))->CBaseHandle::CBaseHandle();
	((CBaseHandle *)(p + 0x264))->CBaseHandle::CBaseHandle();
	sub_10002e1e(p + 0x270);
	sub_10011482(p + 0x2d4);
	*(int *)(p + 0x364) = -1;
	*(int *)(p + 0x37c) = -1;
	*(int *)(p + 0x384) = -1;
	*(int *)(p + 0x3e8) = -1;
	*(int *)(p + 0x440) = -1;
	*(int *)(p + 0x448) = -1;
	const char *name0 = rn;
	*(void **)p = vt_10450584;
	ScopeTrace scope("CBaseEntity::CBaseEntity", name0 ? name0 : g_106b8540);
	*(int *)(p + 0x44) = -1;
	*(int *)(p + 0x48) = -1;
	*(int *)(p + 0xc4) = 0;
	*(int *)(p + 0x368) = 0;
	*(bool *)(p + 0x258) = false;
	((V1 *)(p + 0x270))->sub_1000f47f(p);
	((V1 *)(p + 0x2d4))->sub_1000adcb(p);
	*(int *)(p + 0x224) = 0;
	*(int *)(p + 0x228) = 0;
	*(int *)(p + 0x36c) = 0;
	*(int *)(p + 0x378) = 0;
	*(float *)(p + 0x370) = 1.0f;
	*(unsigned char *)(p + 0x1a0) = 255;
	*(unsigned char *)(p + 0x1a1) = 255;
	*(unsigned char *)(p + 0x1a2) = 255;
	*(unsigned char *)(p + 0x1a3) = 255;
	*(int *)(p + 0x178) = *(int *)(g_1070b228 + 0xc);
	*(int *)(p + 0x22c) = -1;
	sub_1000949e(p + 0x130);
	*(int *)(p + 0x3e8) = -1;
	{
		const char *n2 = rn;
		e->m_iCurrentThinkContext = -1;
		ScopeTrace s2("CBaseEntity::SetSolid", n2 ? n2 : g_106b8540);
		((CCollisionProperty *)(p + 0x270))->sub_100dc480(0);
	}
	{
		ScopeTrace s3("CBaseEntity::ClearSolidFlags", e->m_name26c ? e->m_name26c : g_106b8540);
		((CFlagsUnit *)(p + 0x270))->sub_100dc580(0);
	}
	*(int *)(p + 0x4c) = 0;
	e->CBaseEntity::vfunc93(0, 0);
	e->CBaseEntity::vfunc202(0);
	e->CBaseEntity::vfunc6(0);
	e->sub_100b12e0(0);
	e->sub_100b1750(0);
	e->CBaseEntity::vfunc212(string_t(0));
	e->sub_1009edc0(g_1070d1b0, g_1070d1b0);
	e->sub_100b37a0();
	*(float *)(p + 0x3f0) = 1.0f;
	if (bAddAsDefault)
		*(int *)(p + 0x268) |= 0x200;
	*(int *)(p + 0x268) |= 0x50000;
	*(int *)(p + 0x94) = 0;
	*(int *)(p + 0x98) = 0;
	*(int *)(p + 0x9c) = 0;
	*(int *)(p + 0xa0) = 0;
	*(int *)(p + 0xa4) = 0;
	*(int *)(p + 0xa8) = 0;
	*(int *)(p + 0xac) = 0;
	*(int *)(p + 0xb0) = 0;
	*(int *)(p + 0xc0) = 0;
	*(int *)(p + 0xb4) = -2;
	*(int *)(p + 0xb8) = -2;
	*(int *)(p + 0xbc) = -2;
	*(bool *)(p + 0xf4) = false;
	*(bool *)(p + 0xfc) = false;
	*(bool *)(p + 0xfd) = false;
	*(bool *)(p + 0xfe) = false;
	*(int *)(p + 0x3e0) = 0;
	*(int *)(p + 0xc8) = -1;
	*(int *)(p + 0xcc) = 0;
	*(int *)(p + 0xd0) = -1;
	*(int *)(p + 0xd4) = 0;
	*(int *)(p + 0xd8) = 0;
	*(int *)(p + 0x100) = -1;
	*(bool *)(p + 0x104) = false;
	*(int *)(p + 0x108) = 0;
	*(int *)(p + 0xdc) = 0;
	*(int *)(p + 0x10c) = -1;
	*(int *)(p + 0x110) = -1;
	*(int *)(p + 0x1a4) = 0;
	*(bool *)(p + 0x44c) = false;
}
// END FUNCTION
