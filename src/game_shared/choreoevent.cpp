// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 115 blocks
#include "vampire.h"

// FUNCTION: 0x10073b80 size=0x50
#include "CUnknown10075aa0.h"
#include "CFlexAnimationTrack.h"
CFlexAnimationTrack::CFlexAnimationTrack(CUnknown10075aa0 *pEvent)
{
	m_pEvent = pEvent;
	m_n04 = 0;
	m_b08 = 0;
	m_b09 = 0;
	m_n40 = -1;
	m_n3c = -1;
	m_n48 = -1;
	m_n44 = -1;
	m_n0c = 0;
	m_n10 = 0;
}
// END FUNCTION

// FUNCTION: 0x10073bf0 size=0x1e
#include "CFlexAnimationTrack.h"

// TARGET: CFlexAnimationTrack::vfunc0
CFlexAnimationTrack *CFlexAnimationTrack::vfunc0(unsigned int flags)
{
	sub_1000fbaa();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10073c20 size=0x1c6
#include "CVTraitEffect_t.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CFlexAnimationTrack.h"
// identifier-count dial (link audit 2026-11-18): VC6 orders this function's tied stack slots by symbol numbers mod 64,
// so 49 declarations here keep the game's slot order with these headers (window 45..53).
typedef int pcd_dial0; typedef int pcd_dial1; typedef int pcd_dial2; typedef int pcd_dial3; typedef int pcd_dial4; typedef int pcd_dial5; typedef int pcd_dial6; typedef int pcd_dial7;
typedef int pcd_dial8; typedef int pcd_dial9; typedef int pcd_dial10; typedef int pcd_dial11; typedef int pcd_dial12; typedef int pcd_dial13; typedef int pcd_dial14; typedef int pcd_dial15;
typedef int pcd_dial16; typedef int pcd_dial17; typedef int pcd_dial18; typedef int pcd_dial19; typedef int pcd_dial20; typedef int pcd_dial21; typedef int pcd_dial22; typedef int pcd_dial23;
typedef int pcd_dial24; typedef int pcd_dial25; typedef int pcd_dial26; typedef int pcd_dial27; typedef int pcd_dial28; typedef int pcd_dial29; typedef int pcd_dial30; typedef int pcd_dial31;
typedef int pcd_dial32; typedef int pcd_dial33; typedef int pcd_dial34; typedef int pcd_dial35; typedef int pcd_dial36; typedef int pcd_dial37; typedef int pcd_dial38; typedef int pcd_dial39;
typedef int pcd_dial40; typedef int pcd_dial41; typedef int pcd_dial42; typedef int pcd_dial43; typedef int pcd_dial44; typedef int pcd_dial45; typedef int pcd_dial46; typedef int pcd_dial47;
typedef int pcd_dial48;
// TARGET: CFlexAnimationTrack::CFlexAnimationTrack
typedef CUtlVector<CExpressionSampleStub> SampleVec;
CFlexAnimationTrack::CFlexAnimationTrack(const CFlexAnimationTrack *src)
{
	m_n04 = 0;
	sub_10074000(src->m_n04 ? (const char *)src->m_n04 : "");
	m_b08 = src->m_b08;
	m_b09 = src->m_b09;
	for (int t = 0; t < 2; t++) {
		((SampleVec &)m_Samples[t]).Purge();
		for (int i = 0; i < ((const SampleVec &)src->m_Samples[t]).Count(); i++) {
			CExpressionSampleStub s = ((const SampleVec &)src->m_Samples[t])[i];
			((SampleVec &)m_Samples[t]).AddToTail(s);
		}
	}
	for (t = 0; t < 2; t++) {
		(&m_n3c)[t] = (&src->m_n3c)[t];
		(&m_n44)[t] = (&src->m_n44)[t];
	}
	m_n0c = src->m_n0c;
	m_n10 = src->m_n10;
	m_pEvent = 0;
}
// END FUNCTION

// FUNCTION: 0x10073e70 size=0xa0
#include "utlrbtree.h"
#include "CFlexAnimationTrack.h"
#include "utlvector.h"
extern char vt_1044f014[];
struct TrackView {
	void *vptr;
	void *m_p;
	char pad[0xc];
	CUtlVector<CExpressionSampleStub> v[2];
};
void CFlexAnimationTrack::sub_10073e70()
{
	TrackView *t = (TrackView *)this;
	*(void **)this = vt_1044f014;
	operator delete(t->m_p);
	for (int i = 0; i < 2; i++)
		t->v[i].Purge();
	CUtlVector<CExpressionSampleStub> *p = t->v + 2;
	for (int n = 2; n; n--) {
		--p;
		p->~CUtlVector();
	}
}
// END FUNCTION

// FUNCTION: 0x10073f40 size=0xa
struct CUnknown10073f40 { char p[0x4c]; int a; void sub_10073f40(int v); };
// TARGET: CUnknown10073f40::sub_10073f40
void CUnknown10073f40::sub_10073f40(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10073f60 size=0x15
struct CUnknown10073f60Item
{
	int m_n0000;
	char m_pad0004[0x10];
};

struct CUnknown10073f60
{
	char m_pad0000[0x20];
	CUnknown10073f60Item m_items[2];

	void sub_10073f60();
};

// TARGET: CUnknown10073f60::sub_10073f60
void CUnknown10073f60::sub_10073f60()
{
	for (int i = 0; i < 2; i++)
	{
		m_items[i].m_n0000 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10073f90 size=0x45
#include "utlrbtree.h"
#include "utlvector.h"
struct Elem12 { int a, b, c; };
struct VecHolder {
    char pad[0x14];
    CUtlVector<Elem12> m_Lists[1];
    void sub_10073f90(int elem, int list);
};
void VecHolder::sub_10073f90(int elem, int list)
{
    m_Lists[list].Remove(elem);
}
// END FUNCTION

// FUNCTION: 0x10074000 size=0x3d
#include <string.h>

struct CUnk10074000 {
	int m_unk0;
	char *m_pName;

	void sub_10074000(const char *pName);
};

void CUnk10074000::sub_10074000(const char *pName)
{
	delete m_pName;
	m_pName = new char[strlen(pName) + 1];
	strcpy(m_pName, pName);
}
// END FUNCTION

// FUNCTION: 0x10074050 size=0xd
#include "CUnknown10074050.h"
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

// FUNCTION: 0x10074090 size=0x2e
#include "CUnknown10074070.h"

namespace block_10074090 {
	struct CUnit10074070 : CUnknown10074070 {
		int sub_10074070(int index);
	};
	int CUnit10074070::sub_10074070(int index)
	{
		return *(int *)((char *)this + 0x20 + index * 0x14);
	}
}
using namespace block_10074090;

// TARGET: CUnknown10074070::sub_10074090
float *CUnknown10074070::sub_10074090(int index, int b)
{
	if (index >= 0 && index < ((CUnit10074070 *)this)->sub_10074070(b))
		return (float *)(*(char **)((char *)this + 0x14 + b * 0x14) + index * 12);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100740d0 size=0x4
struct CUnknown100740d0 { char sub_100740d0(); };
char CUnknown100740d0::sub_100740d0()
{
    return *(char *)((char *)this + 8);
}
// END FUNCTION

// FUNCTION: 0x100740f0 size=0xa
struct CUnknown100740f0 { int p[2]; char a; void sub_100740f0(char v); };
// TARGET: CUnknown100740f0::sub_100740f0
void CUnknown100740f0::sub_100740f0(char v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10074110 size=0x39
extern float g_104454d0;

struct CUnknown10074110 {
    char m_pad0000[0xc];
    float m_flA;	// 0x0c
    float m_flB;	// 0x10
    float sub_10074110(int nMode);
};

// TARGET: CUnknown10074110::sub_10074110
float CUnknown10074110::sub_10074110(int nMode)
{
    float flResult = 0.0f;
    if (nMode == 1) {
        return g_104454d0;
    }
    if (m_flA != m_flB) {
        flResult = (-m_flA) / (m_flB - m_flA);
    }
    return flResult;
}
// END FUNCTION

// FUNCTION: 0x10074160 size=0x70
#include "CUnknown10074070.h"

extern float g_106c855c[2];
extern float g_106c83f0[2];

struct CObj4c
{
	float sub_10076b30();
};

struct CView4c
{
	char m_pad0000[0x4c];
	CObj4c *m_p4c;
};

namespace block_10074160 {
struct CRecUnit : CUnknown10074070
{
	int sub_10074070(int index);
};

int CRecUnit::sub_10074070(int index)
{
	return m_records[index].m_value;
}
}
using namespace block_10074160;

// TARGET: CUnknown10074070::sub_10074160
float *CUnknown10074070::sub_10074160(int index, int b)
{
	g_106c855c[1] = 0;
	g_106c855c[0] = sub_10074110(b);
	g_106c83f0[1] = ((CView4c *)this)->m_p4c->sub_10076b30();
	g_106c83f0[0] = sub_10074110(b);
	if (index < 0)
		return g_106c855c;
	if (index >= ((CRecUnit *)this)->sub_10074070(b))
		return g_106c83f0;
	return sub_10074090(index, b);
}
// END FUNCTION

// FUNCTION: 0x100741f0 size=0x8d
#include "CUnknown10074070.h"

float CUnknown10074070::sub_100741f0(float flTime, int index)
{
	float flValue = sub_10074110(index);
	if (m_pRange && m_pRange->sub_10075f30() && !(m_pRange->sub_10075e70() > flTime) && !(m_pRange->sub_10075f10() < flTime)) {
		float flRelative = flTime - m_pRange->sub_10075e70();
		flValue = sub_100742b0(flRelative, index);
		if (m_f0c != m_f10)
			flValue = (m_f10 - m_f0c) * flValue + m_f0c;
	}
	return flValue;
}
// END FUNCTION

// FUNCTION: 0x100742b0 size=0x25b
// TARGET: CUnknown10074070::sub_100742b0
#include "CUnknown10074070.h"
#include "Vector.h"

void sub_1013bd20(const Vector &v0, const Vector &v1, const Vector &v2, const Vector &v3, float t, Vector &vOut);

namespace block_100742b0 {
struct CKeyUnit : CUnknown10074070 {
	int sub_10074070(int index);
};
int CKeyUnit::sub_10074070(int index)
{
	return *(int *)((char *)this + 0x20 + index * 0x14);
}
}
using namespace block_100742b0;

float CUnknown10074070::sub_100742b0(float flTime, int index)
{
	CKeyUnit *u = (CKeyUnit *)this;
	float flResult = sub_10074110(index);
	if (m_pRange && m_pRange->sub_10075f30() && u->sub_10074070(index) >= 1)
	{
		int i = -1;
		if (-1 < u->sub_10074070(index))
		{
			do
			{
				float *p0 = sub_10074160(i, index);
				float *p1 = sub_10074160(i + 1, index);
				if (p0 && p1 && flTime >= p0[1] && flTime <= p1[1])
					break;
				i++;
			} while (i < u->sub_10074070(index));
		}

		int i0 = i - 1;
		int i2 = i + 1;
		int i3 = i + 2;
		if (i0 < -1)
			i0 = -1;
		if (i < -1)
			i = -1;
		if (i2 >= u->sub_10074070(index))
			i2 = u->sub_10074070(index);
		if (i3 >= u->sub_10074070(index))
			i3 = u->sub_10074070(index);

		float *k0 = sub_10074160(i0, index);
		float *k1 = sub_10074160(i, index);
		float *k2 = sub_10074160(i2, index);
		float *k3 = sub_10074160(i3, index);

		float dt = k2[1] - k1[1];
		Vector v0(k0[1], k0[0], 0.0f);
		Vector v1(k1[1], k1[0], 0.0f);
		Vector v2(k2[1], k2[0], 0.0f);
		Vector v3(k3[1], k3[0], 0.0f);

		float t = 0.0f;
		if (dt > 0.0f)
		{
			t = (flTime - k1[1]) / dt;
			if (t > 1.0f)
				t = 1.0f;
			else if (t < 0.0f)
				t = 0.0f;
		}

		Vector vOut;
		sub_1013bd20(v0, v1, v2, v3, t, vOut);
		if (vOut.y > 1.0f)
			return 1.0f;
		if (vOut.y < 0.0f)
			return 0.0f;
		return vOut.y;
	}
	return flResult;
}
// END FUNCTION

// FUNCTION: 0x100745b0 size=0xf
namespace lifted {
int __stdcall sub_10007635(int, int);
}
int __stdcall sub_100745b0(int a0)
{
    return lifted::sub_10007635(a0, 0);
}
// END FUNCTION

// FUNCTION: 0x100745d0 size=0x28
#include "CUnknown10074a30.h"
#include "CUnknown10074070.h"

// TARGET: CUnknown10074a30::sub_100745d0
float CUnknown10074a30::sub_100745d0(float flValue)
{
    if (sub_10074a50())
        return ((CUnknown10074070 *)this)->sub_100741f0(flValue, 1);
    return 1.0f;
}
// END FUNCTION

// FUNCTION: 0x10074610 size=0x9f
#include "CUnknown10074a30.h"

float CUnknown10074a30::sub_10074610(float flValue, int nMode)
{
	float flWeight = sub_100745b0(flValue);
	float flScale = 1.0f;
	if (sub_10074a50()) {
		flValue = sub_100745d0(flValue);
		if (nMode == 0) {
			if (flValue > 0.5f)
				flScale = (1.0f - flValue + (1.0f - flValue));
		} else if (nMode == 1) {
			if (flValue < 0.5f)
				flScale = flValue + flValue;
		}
	}
	return flScale * flWeight;
}
// END FUNCTION

// FUNCTION: 0x100746e0 size=0xf6
#include "CLogicAuto.h"
#include "CFlexAnimationTrack.h"
#include "utlvector.h"

void CFlexAnimationTrack::sub_100746e0(float flTime, float flValue, int nList)
{
	CExpressionSampleStub sample;
	sample.m_flTime = flTime;
	sample.m_flValue = flValue;
	*(char *)&sample.m_nFlags = 0;
	((CUtlVector<CExpressionSampleStub> *)&m_Samples[nList])->AddToTail(sample);
	sub_10074820(nList);
}
// END FUNCTION

// FUNCTION: 0x10074820 size=0x10e
#include "CLogicAuto.h"
#include "CFlexAnimationTrack.h"

// TARGET: CFlexAnimationTrack::sub_10074820
void CFlexAnimationTrack::sub_10074820(int nList)
{
	for (int i = 0; i < m_Samples[nList].m_nSize; i++)
	{
		for (int j = i + 1; j < m_Samples[nList].m_nSize; j++)
		{
			CExpressionSampleStub a = m_Samples[nList].m_pMemory[i];
			CExpressionSampleStub b = m_Samples[nList].m_pMemory[j];
			if (a.m_flTime > b.m_flTime)
			{
				m_Samples[nList].m_pMemory[i] = b;
				m_Samples[nList].m_pMemory[j] = a;
			}
		}
	}
	sub_10074b10(0);
	sub_10074b10(1);
}
// END FUNCTION

// FUNCTION: 0x10074980 size=0x4
struct CUnknown10074980 { int sub_10074980(); };
int CUnknown10074980::sub_10074980()
{
    return *(int *)((char *)this + 0x4c);
}
// END FUNCTION

// FUNCTION: 0x100749a0 size=0x1f
struct CUnk100749a0 {
	char m_pad0000[0x3c];
	int m_3c[1];
	bool sub_10074a50();
	int sub_100749a0(int a);
};

// TARGET: CUnk100749a0::sub_100749a0
int CUnk100749a0::sub_100749a0(int a)
{
	if (sub_10074a50())
	{
		return m_3c[a];
	}
	return m_3c[0];
}
// END FUNCTION

// FUNCTION: 0x100749d0 size=0x1f
struct CUnk100749d0 {
	char m_pad0000[0x44];
	int m_44[1];
	bool sub_10074a50();
	int sub_100749d0(int a);
};

// TARGET: CUnk100749d0::sub_100749d0
int CUnk100749d0::sub_100749d0(int a)
{
	if (sub_10074a50())
	{
		return m_44[a];
	}
	return m_44[0];
}
// END FUNCTION

// FUNCTION: 0x10074a00 size=0x17
struct CUnknown10074a00
{
	void sub_10074a00(int a, int b, int idx);
};

// TARGET: CUnknown10074a00::sub_10074a00
void CUnknown10074a00::sub_10074a00(int a, int b, int idx)
{
	*(int *)((char *)this + idx * 4 + 0x3c) = b;
	*(int *)((char *)this + idx * 4 + 0x44) = a;
}
// END FUNCTION

// FUNCTION: 0x10074a30 size=0xa
#include "CUnknown10074a30.h"
void CUnknown10074a30::sub_10074a30(char value)
{
	m_bFlag = value;
}
// END FUNCTION

// FUNCTION: 0x10074a50 size=0x4
struct CUnknown10074a50 { char sub_10074a50(); };
char CUnknown10074a50::sub_10074a50()
{
    return *(char *)((char *)this + 9);
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

// FUNCTION: 0x10074ab0 size=0x17
struct CUnknown10074ab0
{
	char m_pad0000[0xc];
	float m_f0c;

	float sub_10074ab0(int a);
};

// TARGET: CUnknown10074ab0::sub_10074ab0
float CUnknown10074ab0::sub_10074ab0(int a)
{
	if (a == 0)
	{
		return m_f0c;
	}
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x10074ae0 size=0x17
struct CUnknown10074ae0
{
	char m_pad0000[0x10];
	float m_f10;

	float sub_10074ae0(int a);
};

// TARGET: CUnknown10074ae0::sub_10074ae0
float CUnknown10074ae0::sub_10074ae0(int a)
{
	if (a == 0)
	{
		return m_f10;
	}
	return 1.0f;
}
// END FUNCTION

// FUNCTION: 0x10074b10 size=0xa8
#include "CLogicAuto.h"
#include "CFlexAnimationTrack.h"
#include "CUnknown10075aa0.h"
#include <string.h>

extern float g_104454c4;

void CFlexAnimationTrack::sub_10074b10(int nList)
{
	if (!m_pEvent)
		return;
	float flEnd = m_pEvent->sub_10076b30();
	for (int i = m_Samples[nList].m_nSize - 1; i >= 0; i--) {
		CExpressionSampleList *pList = &m_Samples[nList];
		CExpressionSampleStub sample = m_Samples[nList].m_pMemory[i];
		if (sample.m_flTime < g_104454c4 || sample.m_flTime > flEnd) {
			int nMove = pList->m_nSize - i - 1;
			if (nMove > 0)
				memmove(&pList->m_pMemory[i], &pList->m_pMemory[i + 1], nMove * sizeof(CExpressionSampleStub));
			pList->m_nSize--;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10074bf0 size=0x244
#include "CUnknown10074f70.h"
extern "C" char *__cdecl strcpy(char *, const char *);
#pragma intrinsic(strcpy)

void CUnknown10074f70::sub_10074bf0(char *pBuf)
{
	switch (sub_10075b70()) {
	case 1: strcpy(pBuf, "SECTION"); break;
	case 2: strcpy(pBuf, "EXPRESSION"); break;
	case 3: strcpy(pBuf, "LOOKAT"); break;
	case 4: strcpy(pBuf, "MOVETO"); break;
	case 5: strcpy(pBuf, "SPEAK"); break;
	case 6: strcpy(pBuf, "GESTURE"); break;
	case 7: strcpy(pBuf, "SEQUENCE"); break;
	case 8: strcpy(pBuf, "FACE"); break;
	case 9: strcpy(pBuf, "FIRETRIGGER"); break;
	case 10: strcpy(pBuf, "FLEXANIMATION"); break;
	case 11: strcpy(pBuf, "SUBSCENE"); break;
	case 12: strcpy(pBuf, "LOOP"); break;
	case 13: strcpy(pBuf, "SILENCE"); break;
	case 14: strcpy(pBuf, "LOUD"); break;
	case 15: strcpy(pBuf, "PYTHON"); break;
	case 16: strcpy(pBuf, "CAMERAMOVE"); break;
	case 17: strcpy(pBuf, "CAMERASHOT"); break;
	case 18: strcpy(pBuf, "CAMERARESTORE"); break;
	case 19: strcpy(pBuf, "BODYSOUND"); break;
	default: strcpy(pBuf, "**UNKNOWN**"); break;
	}
}
// END FUNCTION

// FUNCTION: 0x10074ee0 size=0xa
#include "ConVar.h"
ConVar g_106c8518("ent_trace_choreo_event", "0", 256, "Set this to false if you don't care about choreo events being traced.");
// END FUNCTION

// FUNCTION: 0x10074f70 size=0x9f
#include "CUnknown10074f70.h"
extern CUnknown10074f70_Global *g_106c851c;
extern char g_106b8540[];
int sub_10431c2f(char *, const char *, ...);
extern "C" __declspec(dllimport) void Msg(const char *, ...);

void CUnknown10074f70::sub_10074f70(CUnknown10074f70_Actor *pActor)
{
	if (!g_106c851c->vfunc1() && g_106c851c->m_n2c) {
		char szName[256];
		char szMsg[256];
		const char *pszActor;
		sub_10074bf0(szName);
		if (pActor) {
			pszActor = pActor->m_pszName;
			if (!pszActor)
				pszActor = g_106b8540;
		} else {
			pszActor = "NULL_ENTITY";
		}
		sub_10431c2f(szMsg, "Processing choreo event at %5.2f %d( %s ) actor %s", sub_10075e70(), sub_10075b70(), szName, pszActor);
		Msg("%s\n", szMsg);
	}
}
// END FUNCTION

// FUNCTION: 0x10075040 size=0xae
#include "CUnknown10075aa0.h"

CUnknown10075aa0 *CUnknown10075aa0::sub_10075040(int arg)
{
	m_vec19c.m_pMemory = 0;
	m_vec19c.m_allocationCount = 0;
	m_vec19c.m_growSize = 0;
	m_vec19c.m_size = 0;
	m_vec19c.m_pElements = 0;
	m_vec2bc.m_pMemory = 0;
	m_vec2bc.m_allocationCount = 0;
	m_vec2bc.m_growSize = 0;
	m_vec2bc.m_size = 0;
	m_vec2bc.m_pElements = 0;
	m_vec2d0.m_pMemory = 0;
	m_vec2d0.m_allocationCount = 0;
	m_vec2d0.m_growSize = 0;
	m_vec2d0.m_size = 0;
	m_vec2d0.m_pElements = 0;
	CUnknown10075aa0Vec *p = m_vec2e4;
	int n = 2;
	do {
		p->m_pMemory = 0;
		p->m_allocationCount = 0;
		p->m_growSize = 0;
		p->m_size = 0;
		p->m_pElements = 0;
		p++;
		n--;
	} while (n != 0);
	m_vec30c.m_pMemory = 0;
	m_vec30c.m_allocationCount = 0;
	m_vec30c.m_growSize = 0;
	m_vec30c.m_size = 0;
	m_vec30c.m_pElements = 0;
	sub_10075aa0(arg);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10075120 size=0xc6
#include "CUnknown10075aa0.h"

struct CSceneEventSetterView	// the two setters called on the new event (stubs 0x10010c94 and 0x100110f9)
{
	void sub_10075b90(int b);
	void sub_10075bd0(int c);
};

CUnknown10075aa0 *CUnknown10075aa0::sub_10075120(int a, int b, int c)
{
	int n = 2;
	m_vec19c.m_pMemory = 0;
	m_vec19c.m_allocationCount = 0;
	m_vec19c.m_growSize = 0;
	m_vec19c.m_size = 0;
	m_vec19c.m_pElements = 0;
	m_vec2bc.m_pMemory = 0;
	m_vec2bc.m_allocationCount = 0;
	m_vec2bc.m_growSize = 0;
	m_vec2bc.m_size = 0;
	m_vec2bc.m_pElements = 0;
	m_vec2d0.m_pMemory = 0;
	m_vec2d0.m_allocationCount = 0;
	m_vec2d0.m_growSize = 0;
	m_vec2d0.m_size = 0;
	m_vec2d0.m_pElements = 0;
	CUnknown10075aa0Vec *p = m_vec2e4;
	do {
		p->m_pMemory = 0;
		p->m_allocationCount = 0;
		p->m_growSize = 0;
		p->m_size = 0;
		p->m_pElements = 0;
		p++;
		n--;
	} while (n != 0);
	m_vec30c.m_pMemory = 0;
	m_vec30c.m_allocationCount = 0;
	m_vec30c.m_growSize = 0;
	m_vec30c.m_size = 0;
	m_vec30c.m_pElements = 0;
	sub_10075aa0(a);
	((CSceneEventSetterView *)this)->sub_10075b90(b);
	((CSceneEventSetterView *)this)->sub_10075bd0(c);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10075230 size=0xd2
#include "CUnknown10075aa0.h"
struct S10075b90 { void sub_10075b90(int a); };
struct S10075bd0 { void sub_10075bd0(int a); };
struct S10075c20 { void sub_10075c20(int a); };
CUnknown10075aa0 *CUnknown10075aa0::sub_10075230(int a, int b, int c, int d)
{
    m_vec19c.m_pMemory = 0;
    m_vec19c.m_allocationCount = 0;
    m_vec19c.m_growSize = 0;
    m_vec19c.m_size = 0;
    m_vec19c.m_pElements = 0;
    m_vec2bc.m_pMemory = 0;
    m_vec2bc.m_allocationCount = 0;
    m_vec2bc.m_growSize = 0;
    m_vec2bc.m_size = 0;
    m_vec2bc.m_pElements = 0;
    m_vec2d0.m_pMemory = 0;
    m_vec2d0.m_allocationCount = 0;
    m_vec2d0.m_growSize = 0;
    m_vec2d0.m_size = 0;
    m_vec2d0.m_pElements = 0;
    CUnknown10075aa0Vec *p = m_vec2e4;
    int n = 2;
    do {
        p->m_pMemory = 0;
        p->m_allocationCount = 0;
        p->m_growSize = 0;
        p->m_size = 0;
        p->m_pElements = 0;
        p++;
    } while (--n);
    m_vec30c.m_pMemory = 0;
    m_vec30c.m_allocationCount = 0;
    m_vec30c.m_growSize = 0;
    m_vec30c.m_size = 0;
    m_vec30c.m_pElements = 0;
    sub_10075aa0(a);
    ((S10075b90 *)this)->sub_10075b90(b);
    ((S10075bd0 *)this)->sub_10075bd0(c);
    ((S10075c20 *)this)->sub_10075c20(d);
    return this;
}
// END FUNCTION

// FUNCTION: 0x10075350 size=0x136
#include "CUnknown10075aa0.h"
#include "UtlMem.h"

extern "C" __declspec(dllimport) void Plat_Free(void *);

void __fastcall sub_10078b10(int *p);
void __fastcall sub_10078b70(int *p);
void __fastcall sub_10078bd0(int *p);
void __fastcall sub_10078c30(int *p);

class CUnknown100799b0
{
public:
	void sub_100799b0();
};

struct VecBase : CUnknown10075aa0Vec
{
	void PurgeMemory()
	{
		m_pElements = m_pMemory;
		if (m_growSize != -1) {
			if (m_pMemory) {
				Plat_Free((void *)m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
	}
};

struct Vec19c : VecBase
{
	~Vec19c()
	{
		sub_10078b10((int *)this);
		((UtlMem *)this)->sub_10078b30();
		PurgeMemory();
	}
};

struct Vec2bc : VecBase
{
	~Vec2bc()
	{
		sub_10078b70((int *)this);
		((UtlMem *)this)->sub_10078b90();
		PurgeMemory();
	}
};

struct Vec2d0 : VecBase
{
	~Vec2d0()
	{
		sub_10078bd0((int *)this);
		((UtlMem *)this)->sub_10078bf0();
		PurgeMemory();
	}
};

struct Vec2e4 : VecBase
{
	~Vec2e4()
	{
		sub_10078c30((int *)this);
		((UtlMem *)this)->sub_10078c50();
		PurgeMemory();
	}
};

struct Vec30c : VecBase
{
	~Vec30c()
	{
		m_size = 0;
		((UtlMem *)this)->sub_10078f90();
		PurgeMemory();
	}
};

struct Members
{
	char pad0[0x19c];
	Vec19c v19c;
	char pad1[0x2bc - 0x19c - sizeof(Vec19c)];
	Vec2bc v2bc;
	Vec2d0 v2d0;
	Vec2e4 v2e4[2];
	Vec30c v30c;
};

void CUnknown10075aa0::sub_10075350()
{
	sub_10077650();
	CUnknown100799b0 *pObject = (CUnknown100799b0 *)m_i324;
	if (pObject) {
		pObject->sub_100799b0();
		operator delete(pObject);
	}
	((Members *)this)->~Members();
}
// END FUNCTION

// FUNCTION: 0x100754e0 size=0x490
#include "utlrbtree.h"
#include "CUnknown10075aa0.h"
#include "CUnknown10077990.h"
#include "utlvector.h"
#include <string.h>

struct EntA { char d[0x88]; EntA *sub_10073850(EntA *src); void sub_10073920(CUnknown10075aa0 *o); };
struct EntB { char d[0x8c]; EntB *sub_100739d0(EntB *src); void sub_10073920(CUnknown10075aa0 *o); };
struct EntC { char d[0x88]; void sub_10073a90(EntC *src); void sub_10073b60(CUnknown10075aa0 *o); };
struct Obj50 { char d[0x50]; Obj50 *sub_10073c20(Obj50 *src); void sub_10073f40(CUnknown10075aa0 *o); };
struct VecA { char *m; int alloc; int grow; int size; char *el; void sub_10078c90(int n); void sub_10078d60(int i, int n); void sub_10078f20(int i, int n); void sub_10079100(int n); };
struct VecB { char *m; int alloc; int grow; int size; char *el; void sub_10078dd0(int n); void sub_10078ea0(int i, int n); };
class Mem30c : public CUtlMemory<Obj50 *>
{
public:
	void sub_100791a0(int n);
	void Grow(int num = 1) { sub_100791a0(num); }
};
typedef CUtlVector<Obj50 *, Mem30c> Vec30c;
struct CUnknown10077430 { void sub_10077a50(int); void sub_10077650(); };
struct Ramp { float value; float time; bool selected; };
typedef CUtlVector<Ramp> RampVec;
struct R10078690 { void sub_10078690(float time, float value, bool selected); };
struct CEventCopy : public CUnknown10075aa0
{
	CUnknown10075aa0 *sub_100754e0(CUnknown10077990 *pSource);
};

CUnknown10075aa0 *CEventCopy::sub_100754e0(CUnknown10077990 *pSource)
{
	CUnknown10075aa0 *s = (CUnknown10075aa0 *)pSource;
	m_i2b4 = 0;
	m_i2b8 = 0;
	m_i00 = s->m_i00;
	strcpy(&m_b04, &s->m_b04);
	strcpy(&m_b84, &s->m_b84);
	strcpy(&m_b104, &s->m_b104);
	m_i184 = s->m_i184;
	m_f188 = s->m_f188;
	m_b198 = s->m_b198;
	m_i18c = s->m_i18c;
	m_b1b0 = s->m_b1b0;
	m_pad1b1[0] = s->m_pad1b1[0];
	strcpy(&m_pad1b1[1], &s->m_pad1b1[1]);
	strcpy(&m_pad1b1[0x81], &s->m_pad1b1[0x81]);
	sub_10076b60();
	sub_10076fe0();
	for (int k = 0; k < 2; k++)
		((CUnknown10077430 *)this)->sub_10077a50(k);
	int i;
	for (i = 0; i < s->m_vec2bc.m_size; i++) {
		EntA tmp;
		tmp.sub_10073850((EntA *)(s->m_vec2bc.m_pMemory + i * 0x88));
		tmp.sub_10073920(this);
		VecA *v = (VecA *)&m_vec2bc;
		int n = v->size;
		v->sub_10078c90(1);
		v->sub_10078d60(n, 1);
		EntA *p = (EntA *)(v->m + n * 0x88);
		if (p)
			p->sub_10073850(&tmp);
	}
	for (i = 0; i < s->m_vec2d0.m_size; i++) {
		EntB tmp;
		tmp.sub_100739d0((EntB *)(s->m_vec2d0.m_pMemory + i * 0x8c));
		tmp.sub_10073920(this);
		VecB *v = (VecB *)&m_vec2d0;
		int n = v->size;
		v->sub_10078dd0(1);
		v->sub_10078ea0(n, 1);
		EntB *p = (EntB *)(v->m + n * 0x8c);
		if (p)
			p->sub_100739d0(&tmp);
	}
	for (int j = 0; j < 2; j++) {
		for (i = 0; i < s->m_vec2e4[j].m_size; i++) {
			EntC tmp;
			tmp.sub_10073a90((EntC *)(s->m_vec2e4[j].m_pMemory + i * 0x88));
			tmp.sub_10073b60(this);
			VecA *v = (VecA *)&m_vec2e4[j];
			int n = v->size;
			if (n + 1 > v->alloc)
				v->sub_10079100(n - v->alloc + 1);
			v->size++;
			v->el = v->m;
			v->sub_10078f20(n, 1);
			EntC *p = (EntC *)(v->m + n * 0x88);
			if (p)
				p->sub_10073a90(&tmp);
		}
	}
	((CUnknown10077430 *)this)->sub_10077650();
	for (i = 0; i < ((Vec30c *)&s->m_vec30c)->Count(); i++) {
		Obj50 *o = (Obj50 *)operator new(0x50);
		Obj50 *q;
		if (o)
			q = o->sub_10073c20(((Vec30c *)&s->m_vec30c)->Element(i));
		else
			q = 0;
		q->sub_10073f40(this);
		((Vec30c *)&m_vec30c)->AddToTail(q);
	}
	m_b320 = s->m_b320;
	m_b328 = s->m_b328;
	m_i32c = s->m_i32c;
	m_i330 = s->m_i330;
	m_i334 = s->m_i334;
	m_i338 = s->m_i338;
	m_b33c = s->m_b33c;
	m_i190 = s->m_i190;
	m_i194 = s->m_i194;
	for (int pk0 = m_i00; --pk0 >= 0; ) ;
	for (int pk1 = m_i00; --pk1 >= 0; ) ;
	for (int pk2 = m_i00; --pk2 >= 0; ) ;
	for (int pk3 = m_i00; --pk3 >= 0; ) ;
	for (int pk4 = m_i00; --pk4 >= 0; ) ;
	for (int pk5 = m_i00; --pk5 >= 0; ) ;
	for (int pk6 = m_i00; --pk6 >= 0; ) ;
	for (int pk7 = m_i00; --pk7 >= 0; ) ;
	for (int pk8 = m_i00; --pk8 >= 0; ) ;
	for (int pk9 = m_i00; --pk9 >= 0; ) ;
	((RampVec *)&m_vec19c)->RemoveAll();
	for (i = 0; i < ((RampVec *)&s->m_vec19c)->Count(); i++) {
		Ramp r = ((RampVec *)&s->m_vec19c)->Element(i);
		((R10078690 *)this)->sub_10078690(r.time, r.value, r.selected);
	}
	return this;
}
// END FUNCTION

// FUNCTION: 0x10075aa0 size=0x97
#include "CUnknown10075aa0.h"

void CUnknown10075aa0::sub_10075aa0(int arg)
{
	m_i00 = 0;
	m_b04 = 0;
	m_b84 = 0;
	m_b104 = 0;
	m_i184 = 0;
	m_f188 = -1.0f;
	m_i2b4 = 0;
	m_i2b8 = 0;
	m_i330 = arg;
	m_b198 = 0;
	m_b1b0 = 0;
	sub_10076f10(0, 0, 0);
	m_b320 = 0;
	m_i324 = 0;
	m_b328 = 0;
	m_i32c = 0;
	m_i18c = 0;
	m_i338 = 0;
	m_i334 = 0;
	m_i190 = -1;
	m_i194 = 0;
	m_b33c = 1;
}
// END FUNCTION

// FUNCTION: 0x10075b70 size=0x3
struct CUnknown10075b70 { int sub_10075b70(); };
int CUnknown10075b70::sub_10075b70()
{
    return *(int *)this;
}
// END FUNCTION

// FUNCTION: 0x10075b90 size=0x24
struct CUnknown10075b90
{
    void sub_10075b90(int a);
};

// TARGET: CUnknown10075b90::sub_10075b90
void CUnknown10075b90::sub_10075b90(int a)
{
    *(int *)this = a;
    if (a != 5 && a != 0xb)
    {
        *((char *)this + 0x198) = 0;
        return;
    }
    *((char *)this + 0x198) = 1;
}
// END FUNCTION

// FUNCTION: 0x10075bd0 size=0x16
struct S10075bd0 {
	char m_pad[0x4];
	char m_name[64];
	// TARGET: S10075bd0::sub_10075bd0
	void sub_10075bd0(const char *src);
};

void S10075bd0::sub_10075bd0(const char *src)
{
	const char *p = src;
	char *d = m_name;
	char c;
	do {
		c = *p;
		*d = c;
		p++;
		d++;
	} while (c != 0);
}
// END FUNCTION

// FUNCTION: 0x10075c00 size=0x4
struct CUnknown10075c00 { char * sub_10075c00(); };
char * CUnknown10075c00::sub_10075c00()
{
    return (char *)this + 4;
}
// END FUNCTION

// FUNCTION: 0x10075c20 size=0x19
struct S10075c20 {
	char m_pad[0x84];
	char m_name[64];
	// TARGET: S10075c20::sub_10075c20
	void sub_10075c20(const char *src);
};

void S10075c20::sub_10075c20(const char *src)
{
	const char *p = src;
	char *d = m_name;
	char c;
	do {
		c = *p;
		*d = c;
		p++;
		d++;
	} while (c != 0);
}
// END FUNCTION

// FUNCTION: 0x10075c50 size=0x7
struct CUnknown10075c50 { char * sub_10075c50(); };
char * CUnknown10075c50::sub_10075c50()
{
    return (char *)this + 0x84;
}
// END FUNCTION

// FUNCTION: 0x10075c70 size=0x19
struct S10075c70 {
	char m_pad[0x104];
	char m_name[64];
	// TARGET: S10075c70::sub_10075c70
	void sub_10075c70(const char *src);
};

void S10075c70::sub_10075c70(const char *src)
{
	const char *p = src;
	char *d = m_name;
	char c;
	do {
		c = *p;
		*d = c;
		p++;
		d++;
	} while (c != 0);
}
// END FUNCTION

// FUNCTION: 0x10075ca0 size=0x7
struct CUnknown10075ca0 { char * sub_10075ca0(); };
char * CUnknown10075ca0::sub_10075ca0()
{
    return (char *)this + 0x104;
}
// END FUNCTION

// FUNCTION: 0x10075cc0 size=0x7
struct CUnknown10075cc0 { char sub_10075cc0(); };
char CUnknown10075cc0::sub_10075cc0()
{
    return *(char *)((char *)this + 0x33c);
}
// END FUNCTION

// FUNCTION: 0x10075ce0 size=0xd
#include "CUnknown10077730.h"

void CUnknown10077730::sub_10075ce0(char value)
{
	m_bFlag33c = value;
}
// END FUNCTION

// FUNCTION: 0x10075d00 size=0xe0
#include "CUnknown10075aa0.h"
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
extern "C" __declspec(dllimport) char *Q_strncat(char *pDest, const char *pSrc, int maxLen, int max_chars_to_copy);
int __fastcall sub_10076690(CUnknown10075aa0 *p);
const char *sub_10076990(int type);
int __fastcall sub_10075c00(CUnknown10075aa0 *p);
int __fastcall sub_10073520(void *p);
int __fastcall sub_10072d90(void *p);
extern char g_106c8418[256];

namespace block_10075d00 {
char *__fastcall sub_10075c50(CUnknown10075aa0 *p) { return (char *)p + 0x84; }
char *__fastcall sub_10075ca0(CUnknown10075aa0 *p) { return (char *)p + 0x104; }
int __fastcall sub_10075b70(CUnknown10075aa0 *p) { return p->m_i00; }
}
using namespace block_10075d00;

// TARGET: sub_10075d00
const char *__fastcall sub_10075d00(CUnknown10075aa0 *p)
{
	g_106c8418[0] = 0;
	if (!sub_10076690(p))
	{
		Q_snprintf(g_106c8418, 256, "global %s", &p->m_b04);
	}
	else
	{
		Q_snprintf(g_106c8418, 256, "%s : %s : %s -- %s \"%s\"", sub_10072d90((void *)p->m_i2b4), sub_10073520((void *)p->m_i2b8), sub_10075c00(p), sub_10076990(sub_10075b70(p)), sub_10075c50(p));
		if (sub_10075b70(p) == 2)
		{
			char tmp[256];
			Q_snprintf(tmp, 256, " \"%s\"", sub_10075ca0(p));
			Q_strncat(g_106c8418, tmp, 256, -1);
		}
	}
	return g_106c8418;
}
// END FUNCTION

// FUNCTION: 0x10075e20 size=0x35
// TARGET: CUnknown10075e20::sub_10075e20
struct CUnknown10075e20
{
	char m_pad0000[0x184];
	float m_f184;
	float m_f188;

	void sub_10075e20(float flValue);
};

void CUnknown10075e20::sub_10075e20(float flValue)
{
	m_f184 = flValue;
	if (*(int *)&m_f188 != 0xbf800000 && m_f188 < flValue) {
		m_f188 = flValue;
	}
}
// END FUNCTION

// FUNCTION: 0x10075e70 size=0x7
struct CUnknown10075e70 { float sub_10075e70(); };
float CUnknown10075e70::sub_10075e70()
{
    return *(float *)((char *)this + 0x184);
}
// END FUNCTION

// FUNCTION: 0x10075e90 size=0x5b
class CUnknown10075e90
{
public:
	char m_pad0000[0x184];
	float m_fMin184;
	float m_fValue188;
	void sub_10075e90(float flValue);
	void sub_100773f0();
};

void CUnknown10075e90::sub_10075e90(float flValue)
{
	bool bChanged = m_fValue188 != flValue;
	m_fValue188 = flValue;
	if (flValue != -1.0f)
	{
		if (flValue < m_fMin184)
			m_fValue188 = m_fMin184;
		if (bChanged)
			sub_100773f0();
	}
}
// END FUNCTION

// FUNCTION: 0x10075f10 size=0x7
struct CUnknown10075f10 { float sub_10075f10(); };
float CUnknown10075f10::sub_10075f10()
{
    return *(float *)((char *)this + 0x188);
}
// END FUNCTION

// FUNCTION: 0x10075f30 size=0x12
struct CUnknown10075f30 {
    char pad[0x188];
    float field;
    unsigned char sub_10075f30();
};
unsigned char CUnknown10075f30::sub_10075f30()
{
    if (field != -1.0f)
        return 1;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10075f60 size=0x4a
struct CRampView
{
	char m_pad0000[0x184];
	float m_flStart;
	float m_flEnd;
};
float __fastcall sub_10075f60(CRampView *p, int unused, float flTime)
{
	float f = (flTime - p->m_flStart) / (p->m_flEnd - p->m_flStart);
	if (f < 0.0f)
		return 0.0f;
	if (f > 1.0f)
		return 1.0f;
	return f;
}
// END FUNCTION

// FUNCTION: 0x10075fd0 size=0x211
#include "CLogicAuto.h"
#include "CUnknown10075aa0.h"
#include "Vector.h"
void sub_1013bb40(const Vector &p1, const Vector &p2, const Vector &p3, const Vector &p4, float t, Vector &out);

float CUnknown10075aa0::sub_10075fd0(float flTime)
{
	if (!sub_10075f30())
		return 0.0f;
	int count = sub_10078630();
	if (count < 1)
		return 0.0f;

	int i;
	for (i = -1; i < count; i++) {
		CUnknown10075aa0Sample *pPrev = sub_100789b0(i);
		CUnknown10075aa0Sample *pNext = sub_100789b0(i + 1);
		if (pPrev && pNext && flTime >= pPrev->m_flTime && flTime <= pNext->m_flTime)
			break;
	}

	int i0 = i - 1;
	int i2 = i + 1;
	int i3 = i + 2;
	if (i0 < -1) i0 = -1;
	if (i < -1) i = -1;
	if (i2 >= count) i2 = count;
	if (i3 >= count) i3 = count;

	CUnknown10075aa0Sample *s0 = sub_100789b0(i0);
	CUnknown10075aa0Sample *s1 = sub_100789b0(i);
	CUnknown10075aa0Sample *s2 = sub_100789b0(i2);
	CUnknown10075aa0Sample *s3 = sub_100789b0(i3);

	float dt = s2->m_flTime - s1->m_flTime;
	Vector v0(s0->m_flTime, s0->m_flValue, 0.0f);
	Vector v1(s1->m_flTime, s1->m_flValue, 0.0f);
	Vector v2(s2->m_flTime, s2->m_flValue, 0.0f);
	Vector v3(s3->m_flTime, s3->m_flValue, 0.0f);

	float t = 0.0f;
	if (dt > 0.0f) {
		t = (flTime - s1->m_flTime) / dt;
		if (t > 1.0f)
			t = 1.0f;
		else if (t < 0.0f)
			t = 0.0f;
	}

	Vector out;
	sub_1013bb40(v0, v1, v2, v3, t, out);
	if (out.y > 1.0f)
		return 1.0f;
	if (out.y < 0.0f)
		return 0.0f;
	return out.y;
}
// END FUNCTION

// FUNCTION: 0x10076280 size=0x29b
#include "CLogicAuto.h"
#include "CUnknown10075aa0.h"
#include "Vector.h"
void sub_1013bb40(const Vector &p1, const Vector &p2, const Vector &p3, const Vector &p4, float t, Vector &out);

float CUnknown10075aa0::sub_10076280(float flTime)
{
	float flRel = flTime - m_i184;
	if (flTime < 0.001)
		return 0.0f;
	if (flRel < 0.001)
		return 0.0f;
	if (flTime < m_i184)
		return 0.0f;
	if (flTime > m_f188)
		return 0.0f;
	if (!sub_10075f30())
		return 0.0f;
	int count = sub_10078630();
	if (count < 1)
		return 1.0f;

	int i;
	for (i = -1; i < count; i++) {
		CUnknown10075aa0Sample *pPrev = sub_100789b0(i);
		CUnknown10075aa0Sample *pNext = sub_100789b0(i + 1);
		if (pPrev && pNext && flRel >= pPrev->m_flTime && flRel <= pNext->m_flTime)
			break;
	}

	int i0 = i - 1;
	int i2 = i + 1;
	int i3 = i + 2;
	if (i0 < -1) i0 = -1;
	if (i < -1) i = -1;
	if (i2 >= count) i2 = count;
	if (i3 >= count) i3 = count;

	CUnknown10075aa0Sample *s0 = sub_100789b0(i0);
	CUnknown10075aa0Sample *s1 = sub_100789b0(i);
	CUnknown10075aa0Sample *s2 = sub_100789b0(i2);
	CUnknown10075aa0Sample *s3 = sub_100789b0(i3);

	float dt = s2->m_flTime - s1->m_flTime;
	Vector v0(s0->m_flTime, s0->m_flValue, 0.0f);
	Vector v1(s1->m_flTime, s1->m_flValue, 0.0f);
	Vector v2(s2->m_flTime, s2->m_flValue, 0.0f);
	Vector v3(s3->m_flTime, s3->m_flValue, 0.0f);

	float t = 0.0f;
	if (dt > 0.0f) {
		t = (flRel - s1->m_flTime) / dt;
		if (t > 1.0f)
			t = 1.0f;
		else if (t < 0.0f)
			t = 0.0f;
	}

	Vector out;
	sub_1013bb40(v0, v1, v2, v3, t, out);
	if (out.y > 1.0f)
		return 1.0f;
	if (out.y < 0.0f)
		return 0.0f;
	return out.y;
}
// END FUNCTION

// FUNCTION: 0x100765d0 size=0x15
namespace block_10075e70 {
struct CUnknown10075e70
{
	char m_pad0000[0x184];
	float m_f184;

	float sub_10075e70();
};

float CUnknown10075e70::sub_10075e70()
{
	return m_f184;
}
}
using namespace block_10075e70;

struct CUnknown10075e20
{
	void sub_10075e20(float f);
};

struct CUnknown100765d0
{
	void sub_100765d0(float f);
};

// TARGET: CUnknown100765d0::sub_100765d0
void CUnknown100765d0::sub_100765d0(float f)
{
	float v = ((CUnknown10075e70 *)this)->sub_10075e70();
	((CUnknown10075e20 *)this)->sub_10075e20(v + f);
}
// END FUNCTION

// FUNCTION: 0x10076600 size=0x1e
// TARGET: sub_10076600
char __cdecl sub_10075f30();
float __cdecl sub_10075f10();
void __stdcall sub_10075e90(float v);
void __stdcall sub_10076600(float v)
{
    if (sub_10075f30())
    {
        sub_10075e90(sub_10075f10() + v);
    }
}
// END FUNCTION

// FUNCTION: 0x10076630 size=0x2c
struct CUnit10076630 {
    char pad[0x184];
    float m_f184;
    float m_f188;
    void sub_10076630(float f);
};

namespace block_10076630 {
struct CUnit : CUnit10076630 {
    unsigned char sub_10075f30();
};
unsigned char CUnit::sub_10075f30()
{
    if (m_f188 != -1.0f)
        return 1;
    return 0;
}
}
using namespace block_10076630;

// TARGET: CUnit10076630::sub_10076630
void CUnit10076630::sub_10076630(float f)
{
    if (((CUnit *)this)->sub_10075f30()) {
        m_f188 = f + m_f188;
    }
    m_f184 = f + m_f184;
}
// END FUNCTION

// FUNCTION: 0x10076670 size=0xd
#include "CUnknown10076670.h"
void CUnknown10076670::sub_10076670(int value)
{
	m_unk2b4 = value;
}
// END FUNCTION

// FUNCTION: 0x10076690 size=0x7
struct CUnknown10076690 { int sub_10076690(); };
int CUnknown10076690::sub_10076690()
{
    return *(int *)((char *)this + 0x2b4);
}
// END FUNCTION

// FUNCTION: 0x100766b0 size=0xd
#include "CUnknown10076670.h"
void CUnknown10076670::sub_100766b0(int value)
{
	m_unk2b8 = value;
}
// END FUNCTION

// FUNCTION: 0x100766d0 size=0x7
struct CUnknown100766d0 { int sub_100766d0(); };
int CUnknown100766d0::sub_100766d0()
{
    return *(int *)((char *)this + 0x2b8);
}
// END FUNCTION

// FUNCTION: 0x100766f0 size=0xd
#include "CUnknown100766f0.h"
void CUnknown100766f0::sub_100766f0(int value)
{
	m_unk324 = value;
}
// END FUNCTION

// FUNCTION: 0x10076710 size=0x7
struct CUnknown10076710 { int sub_10076710(); };
int CUnknown10076710::sub_10076710()
{
    return *(int *)((char *)this + 0x324);
}
// END FUNCTION

// FUNCTION: 0x10076730 size=0x1e0
#include <string.h>

int sub_10076730(const char *pszName)
{
	if (!_strcmpi(pszName, "section"))
		return 1;
	if (!_strcmpi(pszName, "expression"))
		return 2;
	if (!_strcmpi(pszName, "speak"))
		return 5;
	if (!_strcmpi(pszName, "lookat"))
		return 3;
	if (!_strcmpi(pszName, "moveto"))
		return 4;
	if (!_strcmpi(pszName, "gesture"))
		return 6;
	if (!_strcmpi(pszName, "face"))
		return 8;
	if (!_strcmpi(pszName, "firetrigger"))
		return 9;
	if (!_strcmpi(pszName, "sequence"))
		return 7;
	if (!_strcmpi(pszName, "flexanimation"))
		return 10;
	if (!_strcmpi(pszName, "subscene"))
		return 11;
	if (!_strcmpi(pszName, "loop"))
		return 12;
	if (!_strcmpi(pszName, "silence"))
		return 13;
	if (!_strcmpi(pszName, "loud"))
		return 14;
	if (!_strcmpi(pszName, "python"))
		return 15;
	if (!_strcmpi(pszName, "cameramove"))
		return 16;
	if (!_strcmpi(pszName, "camerashot"))
		return 17;
	if (!_strcmpi(pszName, "camerarestore"))
		return 18;
	if (!_strcmpi(pszName, "bodysound"))
		return 19;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10076990 size=0xd8
// TARGET: sub_10076990
const char *sub_10076990(int type)
{
    switch (type) {
    case 1: return "section";
    case 2: return "expression";
    case 3: return "lookat";
    case 4: return "moveto";
    case 5: return "speak";
    case 6: return "gesture";
    case 8: return "face";
    case 9: return "firetrigger";
    case 7: return "sequence";
    case 10: return "flexanimation";
    case 11: return "subscene";
    case 12: return "loop";
    case 13: return "silence";
    case 14: return "loud";
    case 15: return "python";
    case 16: return "cameramove";
    case 17: return "camerashot";
    case 18: return "camerarestore";
    case 19: return "bodysound";
    default: return "unspecified";
    }
}

int sub_dummy_after(int a)
{
    return a + 1;
}
// END FUNCTION

// FUNCTION: 0x10076ab0 size=0x7
struct CUnknown10076ab0 { char sub_10076ab0(); };
char CUnknown10076ab0::sub_10076ab0()
{
    return *(char *)((char *)this + 0x198);
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
#include "CUnknown10076af0.h"
void CUnknown10076af0::sub_10076af0(char value)
{
	m_unk1b0 = value;
}
// END FUNCTION

// FUNCTION: 0x10076b10 size=0x7
struct CUnknown10076b10 { char sub_10076b10(); };
char CUnknown10076b10::sub_10076b10()
{
    return *(char *)((char *)this + 0x1b0);
}
// END FUNCTION

// FUNCTION: 0x10076b30 size=0x1d
namespace block_10076b30 {
struct CUnit {
	char pad[0x184];
	float m_f184;
	float m_f188;
	char sub_10075f30();
	float sub_10075f10();
	float sub_10075e70();
	float sub_10076b30();
};
#pragma auto_inline(off)
char CUnit::sub_10075f30()
{
	if (m_f188 != -1.0f)
		return 1;
	return 0;
}
float CUnit::sub_10075f10() { return m_f188; }
float CUnit::sub_10075e70() { return m_f184; }
float CUnit::sub_10076b30()
{
	if (sub_10075f30())
		return sub_10075f10() - sub_10075e70();
	return 0.0f;
}
}
// TARGET: block_10076b30::CUnit::sub_10076b30
// END FUNCTION

// FUNCTION: 0x10076b60 size=0x5c
#include "CUnknown10075aa0.h"

extern void (__cdecl *g_109f3624)(void *);	// Plat_Free

// TARGET: CUnknown10075aa0::sub_10076b60
void CUnknown10075aa0::sub_10076b60()
{
	m_vec2bc.m_size = 0;
	if (m_vec2bc.m_growSize != -1) {
		if (m_vec2bc.m_pMemory) {
			g_109f3624((void *)m_vec2bc.m_pMemory);
			m_vec2bc.m_pMemory = 0;
		}
		m_vec2bc.m_allocationCount = 0;
	}
	m_vec2bc.m_pElements = m_vec2bc.m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10076be0 size=0x7
struct CUnknown10076be0 { int sub_10076be0(); };
int CUnknown10076be0::sub_10076be0()
{
    return *(int *)((char *)this + 0x2c8);
}
// END FUNCTION

// FUNCTION: 0x10076c00 size=0x17
struct CUnknown10076c00
{
	char m_pad0000[0x2bc];
	int m_n2bc;

	int sub_10076c00(int idx);
};

// TARGET: CUnknown10076c00::sub_10076c00
int CUnknown10076c00::sub_10076c00(int idx)
{
	return m_n2bc + idx * 0x88;
}
// END FUNCTION

// FUNCTION: 0x10076c30 size=0x119
#include "CUnknown10076da0.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned long size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *p, unsigned long size);

struct EntryVecOps
{
	static void Grow(CUnknown10076da0 *v, int num)
	{
		if (v->m_nGrow == -1)
			return;
		int nAllocationRequested = v->m_nAlloc + num;
		if (v->m_nAlloc < nAllocationRequested) {
			int n = v->m_nAlloc;
			do {
				if (n != 0) {
					if (v->m_nGrow)
						n += v->m_nGrow;
					else
						n += n;
				} else {
					n = 1;
				}
			} while (n < nAllocationRequested);
			v->m_nAlloc = n;
		}
		if (v->m_pEntries)
			v->m_pEntries = (CUnknown10076da0Entry *)Plat_Realloc(v->m_pEntries, v->m_nAlloc * sizeof(CUnknown10076da0Entry));
		else
			v->m_pEntries = (CUnknown10076da0Entry *)Plat_Alloc(v->m_nAlloc * sizeof(CUnknown10076da0Entry));
	}
	static void GrowVector(CUnknown10076da0 *v, int num)
	{
		if (v->m_nEntries + num > v->m_nAlloc)
			Grow(v, v->m_nEntries + num - v->m_nAlloc);
		v->m_nEntries += num;
		v->m_pElements = v->m_pEntries;
	}
};

void CUnknown10076da0::sub_10076c30(int a, int b)
{
	CUnknown10076da0Entry tmp;
	tmp.sub_10073810(this, a, b);
	int elem = m_nEntries;
	EntryVecOps::GrowVector(this, 1);
	int numToMove = m_nEntries - elem - 1;
	if (numToMove > 0)
		memmove(&m_pEntries[elem + 1], &m_pEntries[elem], numToMove * sizeof(CUnknown10076da0Entry));
	CUnknown10076da0Entry *pNew = &m_pEntries[elem];
	if (pNew)
		pNew->sub_10073850(&tmp);
}
// END FUNCTION

// FUNCTION: 0x10076da0 size=0x9d
#include "CUnknown10076da0.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

void CUnknown10076da0::sub_10076da0(const char *name)
{
	for (int i = 0; i < m_nEntries; i++) {
		CUnknown10076da0Entry *p = &m_pEntries[i];
		if (p && !_strcmpi(p->sub_100738a0(), name)) {
			int nMove = m_nEntries - i - 1;
			if (nMove > 0)
				memmove(&m_pEntries[i], &m_pEntries[i + 1], nMove * sizeof(CUnknown10076da0Entry));
			m_nEntries--;
			return;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10076e70 size=0x5a
#include <string.h>
struct CUnknown100738a0 {
	const char *sub_100738a0();
};
struct CChoreoEvent10076e70 {
	char m_pad0000[0x2bc];
	char *m_pElems;	// 0x2bc: elements of 0x88 bytes
	char m_pad02c0[0x2c8 - 0x2c0];
	int m_nElems;	// 0x2c8
	CUnknown100738a0 *sub_10076e70(const char *pszName);
};

CUnknown100738a0 *CChoreoEvent10076e70::sub_10076e70(const char *pszName)
{
	for (int i = 0; i < m_nElems; i++) {
		CUnknown100738a0 *p = (CUnknown100738a0 *)(m_pElems + i * 0x88);
		if (p && strcmpi(p->sub_100738a0(), pszName) == 0)
			return p;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10076ef0 size=0x7
struct CUnknown10076ef0 { char sub_10076ef0(); };
char CUnknown10076ef0::sub_10076ef0()
{
    return *(char *)((char *)this + 0x1b1);
}
// END FUNCTION

// FUNCTION: 0x10076f10 size=0x6a
extern char g_106b8540[];
struct S10076f10 {
    char pad[0x1b1];
    char m1b1;
    char m1b2[0x80];
    char m232[0x80];
    void sub_10076f10(char c, const char *a, const char *b);
};
inline void CopyStr(char *d, const char *s)
{
    while ((*d++ = *s++) != 0)
        ;
}
// TARGET: S10076f10::sub_10076f10
void S10076f10::sub_10076f10(char c, const char *a, const char *b)
{
    m1b1 = c;
    if (a)
        CopyStr(m1b2, a);
    else
        CopyStr(m1b2, g_106b8540);
    if (b)
        CopyStr(m232, b);
    else
        CopyStr(m232, g_106b8540);
}
// END FUNCTION

// FUNCTION: 0x10076fa0 size=0x7
struct CUnknown10076fa0 { char * sub_10076fa0(); };
char * CUnknown10076fa0::sub_10076fa0()
{
    return (char *)this + 0x1b2;
}
// END FUNCTION

// FUNCTION: 0x10076fc0 size=0x7
struct CUnknown10076fc0 { char * sub_10076fc0(); };
char * CUnknown10076fc0::sub_10076fc0()
{
    return (char *)this + 0x232;
}
// END FUNCTION

// FUNCTION: 0x10076fe0 size=0x5c
#include "CUnknown10075aa0.h"

extern void (__cdecl *g_109f3624)(void *);	// Plat_Free

// TARGET: CUnknown10075aa0::sub_10076fe0
void CUnknown10075aa0::sub_10076fe0()
{
	m_vec2d0.m_size = 0;
	if (m_vec2d0.m_growSize != -1) {
		if (m_vec2d0.m_pMemory) {
			g_109f3624((void *)m_vec2d0.m_pMemory);
			m_vec2d0.m_pMemory = 0;
		}
		m_vec2d0.m_allocationCount = 0;
	}
	m_vec2d0.m_pElements = m_vec2d0.m_pMemory;
}
// END FUNCTION

// FUNCTION: 0x10077060 size=0x7
struct CUnknown10077060 { int sub_10077060(); };
int CUnknown10077060::sub_10077060()
{
    return *(int *)((char *)this + 0x2dc);
}
// END FUNCTION

// FUNCTION: 0x10077080 size=0x1c
struct CUnk10077080
{
	char m_pad0000[0x2d0];
	char *m_p2d0;

	char *sub_10077080(int index);
};

// TARGET: sub_10077080
char *CUnk10077080::sub_10077080(int index)
{
	return m_p2d0 + index * 0x8c;
}
// END FUNCTION

// FUNCTION: 0x100770b0 size=0x17f
#include "utlrbtree.h"
// TARGET: ?sub_100770b0@CUnknown10076da0@@QAEXPBDM_N@Z
#include "CUnknown10076da0.h"

extern char g_106b8540[];

namespace block_100770b0 {
struct CTimingTagUnit : CUnknown10076da0TimingTag
{
	float sub_100738c0() const;
};
float CTimingTagUnit::sub_100738c0() const
{
	return m_flPercentage;
}
}
using namespace block_100770b0;

void CUnknown10076da0::sub_100770b0(const char *name, float percentage, bool locked)
{
	CUnknown10076da0TimingTag tag((int)this, name, percentage, locked);
	m_TimingTags.AddToTail(tag);

	CUnknown10076da0TimingTag temp(1, g_106b8540, 0, 0);
	for (int i = 0; i < m_TimingTags.Count(); i++) {
		for (int j = i + 1; j < m_TimingTags.Count(); j++) {
			CUnknown10076da0TimingTag *pI = &m_TimingTags[i];
			CUnknown10076da0TimingTag *pJ = &m_TimingTags[j];
			if (((CTimingTagUnit *)pI)->sub_100738c0() > ((CTimingTagUnit *)pJ)->sub_100738c0()) {
				temp = *pI;
				*pI = *pJ;
				*pJ = temp;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10077290 size=0xac
#include "CUnknown10077290.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

void CUnknown10077290::sub_10077290(const char *name)
{
	for (int i = 0; i < m_nEntries; i++) {
		CUnknown10077290Entry *e = &m_pEntries[i];
		if (e && _strcmpi(e->sub_100738a0(), name) == 0) {
			int n = m_nEntries - i - 1;
			if (n > 0) {
				int sz = n * sizeof(CUnknown10077290Entry);
				memmove(&m_pEntries[i], &m_pEntries[i + 1], sz);
			}
			--m_nEntries;
			return;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10077370 size=0x5a
#include "CUnknown10077290.h"
#include <string.h>

CUnknown10077290Entry *CUnknown10077290::sub_10077370(const char *name)
{
	for (int i = 0; i < m_nEntries; i++) {
		CUnknown10077290Entry *pEntry = &m_pEntries[i];
		if (pEntry && !_strcmpi(pEntry->sub_100738a0(), name))
			return pEntry;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100773f0 size=0x30
#include "CUnknown10077430.h"
#include "CFlexAnimationTrack.h"
void CUnknown10077430::sub_100773f0()
{
	int n = sub_10077430();
	for (int i = 0; i < n; i++) {
		CFlexAnimationTrack *pTrack = (CFlexAnimationTrack *)sub_10077450(i);
		if (pTrack)
			pTrack->sub_10074820(0);
	}
}
// END FUNCTION

// FUNCTION: 0x10077430 size=0x7
struct CUnknown10077430 { int sub_10077430(); };
int CUnknown10077430::sub_10077430()
{
    return *(int *)((char *)this + 0x318);
}
// END FUNCTION

// FUNCTION: 0x10077450 size=0x22
struct CUnk10077450 {
	char m_pad0000[0x30c];
	int *m_p28;
	char m_pad002c[0x34 - 0x2c];
	int m_34;
	int sub_10077450(int index);
};

namespace block_10077430 {
	struct CUnk10077450Unit : CUnk10077450 {
		int sub_10077430();
	};
	int CUnk10077450Unit::sub_10077430()
	{
		return m_34;
	}
}
using namespace block_10077430;

// TARGET: CUnk10077450::sub_10077450
int CUnk10077450::sub_10077450(int index)
{
	if (index >= 0)
	{
		int count = ((block_10077430::CUnk10077450Unit *)this)->sub_10077430();
		if (index < count)
		{
			return m_p28[index];
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10077490 size=0xf6
#include "utlmemory.h"
#include "CUtlVector4.h"

extern "C" __declspec(dllimport) void *Plat_Alloc(unsigned int size);
extern "C" __declspec(dllimport) void *Plat_Realloc(void *pMem, unsigned int size);

struct CFlexTrackParent;

struct CFlexTrack {
	char m_pad0000[0x50];
	CFlexTrack *sub_10073b80(CFlexTrackParent *pParent);	// constructor (stub 0x1001329b)
	void sub_10074000(const char *pszName);	// stub 0x1000d391
};

struct CFlexTrackParent {
	char m_pad0000[0x30c];
	CFlexTrack **m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CFlexTrack **m_pElements;
	CFlexTrack *sub_10077490(const char *pszName);

	void Grow(int num)
	{
		if (m_growSize == -1)
			return;
		int nAllocationRequested = m_allocationCount + num;
		while (m_allocationCount < nAllocationRequested) {
			if (m_allocationCount != 0) {
				if (m_growSize != 0)
					m_allocationCount += m_growSize;
				else
					m_allocationCount += m_allocationCount;
			} else {
				m_allocationCount = 8;
			}
		}
		if (m_pMemory)
			m_pMemory = (CFlexTrack **)Plat_Realloc(m_pMemory, m_allocationCount * 4);
		else
			m_pMemory = (CFlexTrack **)Plat_Alloc(m_allocationCount * 4);
	}
};

CFlexTrack *CFlexTrackParent::sub_10077490(const char *pszName)
{
	void *pMem = operator new(0x50);
	CFlexTrack *pTrack = pMem ? ((CFlexTrack *)pMem)->sub_10073b80(this) : 0;
	pTrack->sub_10074000(pszName);
	int elem = m_size;
	if (m_size + 1 > m_allocationCount)
		Grow(m_size + 1 - m_allocationCount);
	m_size++;
	m_pElements = m_pMemory;
	int numToMove = m_size - elem - 1;
	if (numToMove > 0)
		memmove(m_pMemory + elem + 1, m_pMemory + elem, numToMove * 4);
	CFlexTrack **ppElem = m_pMemory + elem;
	if (ppElem)
		*ppElem = pTrack;
	return pTrack;
}
// END FUNCTION

// FUNCTION: 0x100775d0 size=0x58
#include "utlrbtree.h"
#include "CUnknown10077430.h"
class CUnknown10077430Track { public: virtual ~CUnknown10077430Track(); };
// TARGET: CUnknown10077430::sub_100775d0
void CUnknown10077430::sub_100775d0(int index)
{
	CUnknown10077430Track *pTrack = (CUnknown10077430Track *)sub_10077450(index);
	if (pTrack) {
		m_Tracks.Remove(index);
		delete pTrack;
	}
}
// END FUNCTION

// FUNCTION: 0x10077650 size=0x22
// TARGET: CUnknown10077430::sub_10077650
#include "CUnknown10077430.h"
void CUnknown10077430::sub_10077650()
{
    while (sub_10077430() > 0) {
        sub_100775d0(0);
    }
}
// END FUNCTION

// FUNCTION: 0x10077690 size=0x56
#include "CUnknown10077430.h"
#include "CUnknown10074050.h"

extern "C" int _strcmpi(const char *, const char *);

struct CUnknown10077430Find : CUnknown10077430
{
	void *sub_10077690(const char *pszName);
};

void *CUnknown10077430Find::sub_10077690(const char *pszName)
{
	for (int i = 0; i < sub_10077430(); i++)
	{
		CUnknown10074050 *pTrack = (CUnknown10074050 *)sub_10077450(i);
		if (pTrack && _strcmpi(pTrack->sub_10074050(), pszName) == 0)
			return pTrack;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10077710 size=0x7
struct CUnknown10077710 { char sub_10077710(); };
char CUnknown10077710::sub_10077710()
{
    return *(char *)((char *)this + 0x320);
}
// END FUNCTION

// FUNCTION: 0x10077730 size=0xd
#include "CUnknown10077730.h"

void CUnknown10077730::sub_10077730(char value)
{
	m_bFlag320 = value;
}
// END FUNCTION

// FUNCTION: 0x10077750 size=0x7
struct CUnknown10077750 { char sub_10077750(); };
char CUnknown10077750::sub_10077750()
{
    return *(char *)((char *)this + 0x328);
}
// END FUNCTION

// FUNCTION: 0x10077770 size=0x23
struct CUnknownSlot0Obj {
	virtual void vfunc0(int a, int b, void *c);
};

struct CUnknown10077770 {
	char m_pad0000[0x328];
	char m_b328;
	void sub_10077770(CUnknownSlot0Obj *pObj, int a, int b);
};

// TARGET: CUnknown10077770::sub_10077770
void CUnknown10077770::sub_10077770(CUnknownSlot0Obj *pObj, int a, int b)
{
	m_b328 = 1;
	if (pObj != 0) {
		pObj->vfunc0(b, a, this);
	}
}
// END FUNCTION

// FUNCTION: 0x100777b0 size=0x1d
struct CUnknown100777b0 {
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(int a, int b, int c);
	void sub_100777b0(CUnknown100777b0 *p, int a, int b);
};

// TARGET: CUnknown100777b0::sub_100777b0
void CUnknown100777b0::sub_100777b0(CUnknown100777b0 *p, int a, int b)
{
	if (p)
		p->vfunc2(b, a, (int)this);
}
// END FUNCTION

// FUNCTION: 0x100777e0 size=0x26
struct CUnknown100777e0Vt {
    virtual void vfunc0();
    virtual void vfunc1(int a, int b, void *pWho);
};

struct CUnknown100777e0View {
    char m_pad0000[0x328];
    char m_b0328;	// 0x328

    void sub_100777e0(CUnknown100777e0Vt *p, int a, int b);
};

// TARGET: CUnknown100777e0View::sub_100777e0
void CUnknown100777e0View::sub_100777e0(CUnknown100777e0Vt *p, int a, int b)
{
    if (p != 0) {
        p->vfunc1(b, a, this);
    }
    m_b0328 = 0;
}
// END FUNCTION

// FUNCTION: 0x10077820 size=0x22
struct CUnknownSlot3Obj {
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual char vfunc3(int a, int b, void *c);
};

struct CUnknown10077820 {
	char sub_10077820(CUnknownSlot3Obj *pObj, int a, int b);
};

// TARGET: CUnknown10077820::sub_10077820
char CUnknown10077820::sub_10077820(CUnknownSlot3Obj *pObj, int a, int b)
{
	if (pObj != 0) {
		return pObj->vfunc3(b, a, this);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10077860 size=0x1e
struct CUnk10077860
{
    int m_000;
    char pad[0x190 - 4];
    int m_190;
    int m_194;
    char pad2[0x328 - 0x198];
    char m_328;
    int sub_10075b70();
    void sub_10077860();
};

int CUnk10077860::sub_10075b70()
{
    return m_000;
}

void CUnk10077860::sub_10077860()
{
    int r = sub_10075b70();
    m_328 = 0;
    if (r == 0xc)
        m_194 = m_190;
}
// END FUNCTION

// FUNCTION: 0x10077890 size=0xd
#include "CUnknown10077890.h"
void CUnknown10077890::sub_10077890(int value)
{
	m_unk32c = value;
}
// END FUNCTION

// FUNCTION: 0x100778b0 size=0x7
struct CUnknown100778b0 { int sub_100778b0(); };
int CUnknown100778b0::sub_100778b0()
{
    return *(int *)((char *)this + 0x32c);
}
// END FUNCTION

// FUNCTION: 0x100778d0 size=0x65
struct CUnknown1007edb0Obj { void sub_1007edb0(float x); };
#pragma auto_inline(off)
namespace block_100778d0 {
struct CView {
	char m_pad0000[0x184];
	float m_fl184;
	float m_fl188;
	char m_pad18c[0xc];
	char m_b198;
	char m_pad199[0x330 - 0x199];
	int m_n330;
	unsigned char sub_10075f30();
	char sub_10076ab0();
	int sub_10077990();
	float sub_10077960(float x);
};
unsigned char CView::sub_10075f30()
{
	if (m_fl188 != -1.0f)
		return 1;
	return 0;
}
char CView::sub_10076ab0()
{
	return m_b198;
}
int CView::sub_10077990()
{
	return m_n330;
}
float CView::sub_10077960(float x)
{
	CUnknown1007edb0Obj *p = (CUnknown1007edb0Obj *)sub_10077990();
	if (!p)
		return x;
	p->sub_1007edb0(x);
}
}
#pragma auto_inline(on)
using namespace block_100778d0;
struct CUnknown100778d0 : CView { void sub_100778d0(); };
// TARGET: sub_100778d0
void CUnknown100778d0::sub_100778d0()
{
	if (sub_10075f30() && !sub_10076ab0())
		m_fl188 = sub_10077960(m_fl188);
	float flOld = m_fl184;
	m_fl184 = sub_10077960(m_fl184);
	if (sub_10076ab0())
		m_fl188 += m_fl184 - flOld;
}
// END FUNCTION

// FUNCTION: 0x10077960 size=0x1f
struct CUnknown1007edb0Obj { void sub_1007edb0(float x); };
int __cdecl sub_10077990(void);
// TARGET: sub_10077960
float __stdcall sub_10077960(float x)
{
    CUnknown1007edb0Obj *p = (CUnknown1007edb0Obj *)sub_10077990();
    if (!p)
        return x;
    p->sub_1007edb0(x);
}
// END FUNCTION

// FUNCTION: 0x10077990 size=0x7
struct CUnknown10077990 { int sub_10077990(); };
int CUnknown10077990::sub_10077990()
{
    return *(int *)((char *)this + 0x330);
}
// END FUNCTION

// FUNCTION: 0x100779b0 size=0xd
#include "CUnknown100779b0.h"
void CUnknown100779b0::sub_100779b0(int value)
{
	m_unk330 = value;
}
// END FUNCTION

// FUNCTION: 0x100779d0 size=0x1e
// TARGET: sub_100779d0
const char *__cdecl sub_100779d0(int type)
{
    switch (type)
    {
    case 0:
        return "playback_time";
    case 1:
        return "shifted_time";
    }
    return "AbsTagType(unknown)";
}
// END FUNCTION
