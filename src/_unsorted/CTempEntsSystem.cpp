// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100582d0 size=0x3
#include "CTempEntsSystem.h"
void CTempEntsSystem::vfunc1(int a0, int a1, int a2)
{
}
// END FUNCTION

// FUNCTION: 0x100582f0 size=0x64
#include "CTempEntsSystem.h"

void sub_1000a99d(CUnknown1019d130 *filter, int a, int b, int c, int d);

void CTempEntsSystem::vfunc2(CUnknown1019d130 *filter, int a, int b, int c, int d)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_1000a99d(filter, a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x10058380 size=0x69
#include "CTempEntsSystem.h"

void sub_10069e80(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);

void CTempEntsSystem::vfunc3(CUnknown1019d130 *filter, int a, int b, int c, int d, int e)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10069e80(filter, a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x10058410 size=0x69
#include "CTempEntsSystem.h"

void sub_1006a370(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);

void CTempEntsSystem::vfunc4(CUnknown1019d130 *filter, int a, int b, int c, int d, int e)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1006a370(filter, a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x100584a0 size=0x5f
#include "CTempEntsSystem.h"

void sub_100095d9(CUnknown1019d130 *filter, int a, int b, int c);

void CTempEntsSystem::sub_100584a0(CUnknown1019d130 *filter, int a, int b, int c)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_100095d9(filter, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10058520 size=0xaf
#include "CTempEntsSystem.h"

void sub_1000ac72(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s);

void CTempEntsSystem::vfunc6(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000ac72(filter, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s);
}
// END FUNCTION

// FUNCTION: 0x10058600 size=0xa5
#include "CTempEntsSystem.h"

void sub_10013f89(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q);

void CTempEntsSystem::vfunc7(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10013f89(filter, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q);
}
// END FUNCTION

// FUNCTION: 0x100586e0 size=0xb4
#include "CTempEntsSystem.h"

void sub_100072d4(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q);

void CTempEntsSystem::vfunc8(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, float j, int k, float l, int m, int n, int o, int p, int q)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_100072d4(filter, a, b, c, d, e, f, g, h, (int)i, (int)j, k, (int)l, m, n, o, p, q);
}
// END FUNCTION

// FUNCTION: 0x100587d0 size=0xb4
#include "CTempEntsSystem.h"

void sub_1000b5ff(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q);

void CTempEntsSystem::vfunc9(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, float j, int k, float l, int m, int n, int o, int p, int q)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000b5ff(filter, a, b, c, d, e, f, g, h, (int)i, (int)j, k, (int)l, m, n, o, p, q);
}
// END FUNCTION

// FUNCTION: 0x100588c0 size=0xaa
#include "CTempEntsSystem.h"

void sub_1000e700(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p);

void CTempEntsSystem::vfunc10(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, int j, float k, int l, int m, int n, int o, int p)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000e700(filter, a, b, c, d, e, f, g, h, (int)i, j, (int)k, l, m, n, o, p);
}
// END FUNCTION

// FUNCTION: 0x100589a0 size=0xaf
#include "CBaseEntity.h"
#include "CTempEntsSystem.h"

extern void sub_1005d110(CUnknown1019d130 *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int);

void CTempEntsSystem::vfunc11(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, float j, int k, float l, int m, int n, int o, int p, int q)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_1005d110(filter, a, b, c, d, e, f, g, h, i, (int)j, k, (int)l, m, n, o, p, q);
}
// END FUNCTION

// FUNCTION: 0x10058a80 size=0x5f
#include "CTempEntsSystem.h"

void sub_10009d9a(CUnknown1019d130 *filter, int a, int b, int c);

void CTempEntsSystem::vfunc12(CUnknown1019d130 *filter, int a, int b, int c)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10009d9a(filter, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10058b00 size=0x78
#include "CTempEntsSystem.h"

void sub_1000d044(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);

void CTempEntsSystem::vfunc13(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_1000d044(filter, a, b, c, d, e, f, g, h);
}
// END FUNCTION

// FUNCTION: 0x10058ba0 size=0x78
#include "CTempEntsSystem.h"

void sub_100038fa(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);

void CTempEntsSystem::vfunc14(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_100038fa(filter, a, b, c, d, e, f, g, h);
}
// END FUNCTION

// FUNCTION: 0x10058c40 size=0x7d
#include "CTempEntsSystem.h"

void sub_100019dd(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i);

void CTempEntsSystem::vfunc15(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_100019dd(filter, a, b, c, d, e, f, g, h, i);
}
// END FUNCTION

// FUNCTION: 0x10058ce0 size=0x64
#include "CTempEntsSystem.h"

void sub_100118ba(CUnknown1019d130 *filter, int a, int b, int c, int d);

void CTempEntsSystem::vfunc16(CUnknown1019d130 *filter, int a, int b, int c, int d)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_100118ba(filter, a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x10058d70 size=0x73
#include "CTempEntsSystem.h"

void sub_1000bf5f(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);

void CTempEntsSystem::sub_10058d70(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000bf5f(filter, a, b, c, d, e, f, g);
}
// END FUNCTION

// FUNCTION: 0x10058e10 size=0x73
#include "CTempEntsSystem.h"

void sub_10011450(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);

void CTempEntsSystem::vfunc18(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10011450(filter, a, b, c, d, e, f, g);
}
// END FUNCTION

// FUNCTION: 0x10058eb0 size=0x73
#include "CTempEntsSystem.h"

void sub_1000ab28(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);

void CTempEntsSystem::vfunc19(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000ab28(filter, a, b, c, d, e, f, g);
}
// END FUNCTION

// FUNCTION: 0x10058f50 size=0x7d
#include "CTempEntsSystem.h"

void sub_10005fb0(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i);

void CTempEntsSystem::vfunc20(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10005fb0(filter, a, b, c, d, e, f, g, h, i);
}
// END FUNCTION

// FUNCTION: 0x10058ff0 size=0x82
#include "CTempEntsSystem.h"
void sub_10061e80(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);

// TARGET: CTempEntsSystem::vfunc21
void CTempEntsSystem::vfunc21(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j)
{
    if (m_nSuppressCount <= 0 && m_pSuppressHost) {
        if (!filter->sub_1000aa60())
            filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
        if (!filter->vfunc2())
            return;
    }
    sub_10061e80(filter, a, b, c, d, e, f, g, h, i, j);
}
// END FUNCTION

// FUNCTION: 0x100590b0 size=0x5f
#include "CTempEntsSystem.h"

void sub_10005376(CUnknown1019d130 *filter, int a, int b, int c);

void CTempEntsSystem::vfunc22(CUnknown1019d130 *filter, int a, int b, int c)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10005376(filter, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10059130 size=0x9b
#include "CTempEntsSystem.h"

void sub_1000c919(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o);

void CTempEntsSystem::vfunc23(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000c919(filter, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o);
}
// END FUNCTION

// FUNCTION: 0x10059200 size=0x6e
#include "CTempEntsSystem.h"

void sub_10008878(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);

void CTempEntsSystem::vfunc24(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_10008878(filter, a, b, c, d, e, f);
}
// END FUNCTION

// FUNCTION: 0x10059290 size=0x8c
#include "CTempEntsSystem.h"
void sub_10064870(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);
// TARGET: CTempEntsSystem::vfunc25
void CTempEntsSystem::vfunc25(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l)
{
    if (m_nSuppressCount <= 0 && m_pSuppressHost) {
        if (!filter->sub_1000aa60())
            filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
        if (!filter->vfunc2())
            return;
    }
    sub_10064870(filter, a, b, c, d, e, f, g, h, i, j, k, l);
}
// END FUNCTION

// FUNCTION: 0x10059350 size=0x87
#include "CTempEntsSystem.h"
void sub_10064df0(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);
void CTempEntsSystem::vfunc26(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_10064df0(filter, a, b, c, d, e, f, g, h, i, j, k);
}
// END FUNCTION

// FUNCTION: 0x10059410 size=0x6e
#include "CTempEntsSystem.h"

void sub_10009f89(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);

void CTempEntsSystem::vfunc27(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_10009f89(filter, a, b, c, d, e, f);
}
// END FUNCTION

// FUNCTION: 0x100594a0 size=0x64
#include "CTempEntsSystem.h"

void sub_10013a16(CUnknown1019d130 *filter, int a, int b, int c, int d);

void CTempEntsSystem::vfunc28(CUnknown1019d130 *filter, int a, int b, int c, int d)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_10013a16(filter, a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x10059530 size=0x5a
#include "CTempEntsSystem.h"

void sub_100029a5(CUnknown1019d130 *filter, int a, int b);

void CTempEntsSystem::vfunc29(CUnknown1019d130 *filter, int a, int b)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_100029a5(filter, a, b);
}
// END FUNCTION

// FUNCTION: 0x100595b0 size=0x5f
#include "CTempEntsSystem.h"

void sub_10007c34(CUnknown1019d130 *filter, int a, int b, int c);

void CTempEntsSystem::vfunc30(CUnknown1019d130 *filter, int a, int b, int c)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10007c34(filter, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10059630 size=0x64
#include "CTempEntsSystem.h"

void sub_1000a533(CUnknown1019d130 *filter, int a, int b, int c, int d);

void CTempEntsSystem::vfunc31(CUnknown1019d130 *filter, int a, int b, int c, int d)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_1000a533(filter, a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x100596c0 size=0x69
#include "CTempEntsSystem.h"

void sub_10066a00(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);

void CTempEntsSystem::vfunc32(CUnknown1019d130 *filter, int a, int b, int c, int d, int e)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10066a00(filter, a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x10059750 size=0x5f
#include "CTempEntsSystem.h"

void sub_1000b325(CUnknown1019d130 *filter, int a, int b, int c);

void CTempEntsSystem::vfunc33(CUnknown1019d130 *filter, int a, int b, int c)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000b325(filter, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x100597d0 size=0x69
#include "CTempEntsSystem.h"

void sub_100675b0(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);

void CTempEntsSystem::vfunc34(CUnknown1019d130 *filter, int a, int b, int c, int d, int e)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_100675b0(filter, a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x10059860 size=0x69
#include "CTempEntsSystem.h"

void sub_10067b70(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);

void CTempEntsSystem::vfunc35(CUnknown1019d130 *filter, int a, int b, int c, int d, int e)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10067b70(filter, a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x100598f0 size=0x78
#include "CTempEntsSystem.h"

void sub_1001220b(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);

void CTempEntsSystem::vfunc36(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_1001220b(filter, a, b, c, d, e, f, g, h);
}
// END FUNCTION

// FUNCTION: 0x10059990 size=0x73
#include "CTempEntsSystem.h"

void sub_10014e3e(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);

void CTempEntsSystem::vfunc37(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10014e3e(filter, a, b, c, d, e, f, g);
}
// END FUNCTION

// FUNCTION: 0x10059a30 size=0x5f
#include "CTempEntsSystem.h"

void sub_100140f6(CUnknown1019d130 *filter, int a, int b, int c);

void CTempEntsSystem::vfunc38(CUnknown1019d130 *filter, int a, int b, int c)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_100140f6(filter, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10059ab0 size=0x64
#include "CTempEntsSystem.h"

void sub_10008891(CUnknown1019d130 *filter, int a, int b, int c, int d);

void CTempEntsSystem::vfunc39(CUnknown1019d130 *filter, int a, int b, int c, int d)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_10008891(filter, a, b, c, d);
}
// END FUNCTION

// FUNCTION: 0x10059b40 size=0x6e
#include "CTempEntsSystem.h"

void sub_1000db6b(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);

void CTempEntsSystem::vfunc40(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130((m_nSuppressCount > 0) ? 0 : m_pSuppressHost);
		if (!filter->vfunc2())
			return;
	}
	sub_1000db6b(filter, a, b, c, d, e, f);
}
// END FUNCTION

// FUNCTION: 0x10059bd0 size=0x5f
#include "CTempEntsSystem.h"

void sub_1000365c(CUnknown1019d130 *filter, int a, int b, int c);

void CTempEntsSystem::vfunc41(CUnknown1019d130 *filter, int a, int b, int c)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_1000365c(filter, a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10059c50 size=0x69
#include "CTempEntsSystem.h"

void sub_10066290(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);

void CTempEntsSystem::vfunc42(CUnknown1019d130 *filter, int a, int b, int c, int d, int e)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10066290(filter, a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x10059ce0 size=0x69
#include "CTempEntsSystem.h"

void sub_10114440(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);

void CTempEntsSystem::vfunc43(CUnknown1019d130 *filter, int a, int b, int c, int d, int e)
{
	if (m_nSuppressCount <= 0 && m_pSuppressHost) {
		if (!filter->sub_1000aa60())
			filter->sub_1019d130(m_nSuppressCount > 0 ? 0 : m_pSuppressHost);
		if (filter->vfunc2() == 0)
			return;
	}
	sub_10114440(filter, a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x10059de0 size=0x20
#include "CTempEntsSystem.h"

extern char g_1044db7c[];

// TARGET: CTempEntsSystem::vfunc0
void *CTempEntsSystem::vfunc0(unsigned int flags)
{
	*(void **)this = g_1044db7c;
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
