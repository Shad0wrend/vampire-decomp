// CTempEntsSystem: temp entity system (ITempEntsSystem / IPredictionSystem). Declared flat; only what decompiled code needs.
// Most slots are the same wrapper: unless suppressed, filter the recipients, then forward to a free function.
#pragma once
#include "CUnknown1019d130.h"

#ifdef PCD_INITIALIZERS
#include "IPredictionSystem.h"
#endif

class CTempEntsSystem
#ifdef PCD_INITIALIZERS
	: public IPredictionSystem	// the base the matched code does not model
#endif
{
public:
#ifndef PCD_INITIALIZERS
	char m_pad0000[0xc];
	void *vfunc0(unsigned int flags);	// slot 0 (the deleting-destructor-shaped body at 0x10059de0)
	CBaseEntity *m_pSuppressHost;	// 0x000c
	int m_nSuppressCount;			// 0x0010
#endif

#ifndef PCD_INITIALIZERS	// matched code: the slots as plain members
	void vfunc2(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 2
	void vfunc29(CUnknown1019d130 *filter, int a, int b);	// slot 29
	void vfunc16(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 16
	void vfunc28(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 28
	void vfunc31(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 31
	void vfunc39(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 39
	void vfunc4(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// slot 4
	void sub_100584a0(CUnknown1019d130 *filter, int a, int b, int c);	// slot 5
	void vfunc13(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);	// slot 13
	void sub_10058d70(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);	// slot 17
	void vfunc24(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);	// slot 24
	void vfunc12(CUnknown1019d130 *filter, int a, int b, int c);	// as in CTempEntsSystem (transplant)
	void vfunc22(CUnknown1019d130 *filter, int a, int b, int c);	// as in CTempEntsSystem (transplant)
	void vfunc30(CUnknown1019d130 *filter, int a, int b, int c);	// as in CTempEntsSystem (transplant)
	void vfunc33(CUnknown1019d130 *filter, int a, int b, int c);	// as in CTempEntsSystem (transplant)
	void vfunc38(CUnknown1019d130 *filter, int a, int b, int c);	// as in CTempEntsSystem (transplant)
	void vfunc41(CUnknown1019d130 *filter, int a, int b, int c);	// as in CTempEntsSystem (transplant)
	void vfunc18(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);	// as in CTempEntsSystem (transplant)
	void vfunc19(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);	// as in CTempEntsSystem (transplant)
	void vfunc37(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);	// as in CTempEntsSystem (transplant)
	void vfunc14(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);	// as in CTempEntsSystem (transplant)
	void vfunc36(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);	// as in CTempEntsSystem (transplant)
	void vfunc27(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);	// as in CTempEntsSystem (transplant)
	void vfunc40(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);	// as in CTempEntsSystem (transplant)
	void vfunc20(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i);	// slot 20 (CTEDynamicLight forwarder)
	void vfunc15(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i);	// slot 15
	void vfunc21(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);	// slot 21 (CTEExplosion forwarder)
	void vfunc25(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);	// slot 25
	void vfunc26(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);	// slot 26
	void vfunc11(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, float j, int k, float l, int m, int n, int o, int p, int q);	// slot 11: as slot 10 with one more leading int; the two floats j and l are truncated to int for the worker
	void vfunc10(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, int j, float k, int l, int m, int n, int o, int p);	// slot 10: like the other wrappers, but the two floats i and k are truncated to int for the worker
	void vfunc9(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, float j, int k, float l, int m, int n, int o, int p, int q);	// slot 9: as slot 10 with three floats (i, j, l) truncated to int for the worker
	void vfunc8(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, float j, int k, float l, int m, int n, int o, int p, int q);	// slot 8: same as slot 9
	void vfunc23(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o);	// slot 23
	void vfunc7(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q);	// slot 7
	void vfunc6(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s);	// slot 6
	void vfunc3(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// as in CTempEntsSystem (transplant)
	void vfunc32(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// as in CTempEntsSystem (transplant)
	void vfunc34(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// as in CTempEntsSystem (transplant)
	void vfunc35(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// as in CTempEntsSystem (transplant)
	void vfunc42(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// as in CTempEntsSystem (transplant)
	void vfunc43(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// as in CTempEntsSystem (transplant)
public:
	void vfunc1(int, int, int);
#else	// the initializer unit (the global g_106be9e4): the 43 own slots after IPredictionSystem's destructor, in the
	// game's order; declared only (the matched definitions are the flat model's plain members), the standalone link
	// takes the game's words
	virtual void vfunc1(int, int, int);	// slot 1
	virtual void vfunc2(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 2
	virtual void vfunc3(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// slot 3
	virtual void vfunc4(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// slot 4
	virtual void sub_100584a0(CUnknown1019d130 *filter, int a, int b, int c);	// slot 5
	virtual void vfunc6(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r, int s);	// slot 6
	virtual void vfunc7(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q);	// slot 7
	virtual void vfunc8(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, float j, int k, float l, int m, int n, int o, int p, int q);	// slot 8
	virtual void vfunc9(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, float j, int k, float l, int m, int n, int o, int p, int q);	// slot 9
	virtual void vfunc10(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, float i, int j, float k, int l, int m, int n, int o, int p);	// slot 10
	virtual void vfunc11(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, float j, int k, float l, int m, int n, int o, int p, int q);	// slot 11
	virtual void vfunc12(CUnknown1019d130 *filter, int a, int b, int c);	// slot 12
	virtual void vfunc13(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);	// slot 13
	virtual void vfunc14(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);	// slot 14
	virtual void vfunc15(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i);	// slot 15
	virtual void vfunc16(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 16
	virtual void sub_10058d70(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);	// slot 17
	virtual void vfunc18(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);	// slot 18
	virtual void vfunc19(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);	// slot 19
	virtual void vfunc20(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i);	// slot 20
	virtual void vfunc21(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j);	// slot 21
	virtual void vfunc22(CUnknown1019d130 *filter, int a, int b, int c);	// slot 22
	virtual void vfunc23(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o);	// slot 23
	virtual void vfunc24(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);	// slot 24
	virtual void vfunc25(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l);	// slot 25
	virtual void vfunc26(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);	// slot 26
	virtual void vfunc27(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);	// slot 27
	virtual void vfunc28(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 28
	virtual void vfunc29(CUnknown1019d130 *filter, int a, int b);	// slot 29
	virtual void vfunc30(CUnknown1019d130 *filter, int a, int b, int c);	// slot 30
	virtual void vfunc31(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 31
	virtual void vfunc32(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// slot 32
	virtual void vfunc33(CUnknown1019d130 *filter, int a, int b, int c);	// slot 33
	virtual void vfunc34(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// slot 34
	virtual void vfunc35(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// slot 35
	virtual void vfunc36(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g, int h);	// slot 36
	virtual void vfunc37(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f, int g);	// slot 37
	virtual void vfunc38(CUnknown1019d130 *filter, int a, int b, int c);	// slot 38
	virtual void vfunc39(CUnknown1019d130 *filter, int a, int b, int c, int d);	// slot 39
	virtual void vfunc40(CUnknown1019d130 *filter, int a, int b, int c, int d, int e, int f);	// slot 40
	virtual void vfunc41(CUnknown1019d130 *filter, int a, int b, int c);	// slot 41
	virtual void vfunc42(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// slot 42
	virtual void vfunc43(CUnknown1019d130 *filter, int a, int b, int c, int d, int e);	// slot 43
#endif
};
