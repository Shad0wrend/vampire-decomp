// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa5d0 size=0xf
#include "CAI_BaseNPCTroika.h"
int CAI_BaseNPCTroika::vfunc586(int a0)
{
    *(int *)((char *)a0) = *(int *)((char *)this + 0x6088);
    return a0;
}
// END FUNCTION

// FUNCTION: 0x101aa5f0 size=0x7
float __fastcall sub_101aa5f0(int p)
{
	return *(float *)((char *)p + 0x63c0);
}
// END FUNCTION

// FUNCTION: 0x101aa610 size=0x7
float __fastcall sub_101aa610(int p)
{
	return *(float *)((char *)p + 0x63c4);
}
// END FUNCTION

// FUNCTION: 0x101aa630 size=0x7
float __fastcall sub_101aa630(int p)
{
	return *(float *)((char *)p + 0x63c8);
}
// END FUNCTION

// FUNCTION: 0x101aa650 size=0x7
float __fastcall sub_101aa650(int p)
{
	return *(float *)((char *)p + 0x63cc);
}
// END FUNCTION

// FUNCTION: 0x101aa670 size=0x7
float sub_101aa670()
{
	return 36.0f;
}
// END FUNCTION

// FUNCTION: 0x101aa690 size=0x3
#include "CAI_BaseNPCTroika.h"
bool CAI_BaseNPCTroika::vfunc591()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101aa6b0 size=0x7
char __fastcall sub_101aa6b0(int p)
{
	return *(char *)((char *)p + 0x63fc);
}
// END FUNCTION

// FUNCTION: 0x101aa6d0 size=0x7
float __fastcall sub_101aa6d0(int p)
{
	return *(float *)((char *)p + 0x6254);
}
// END FUNCTION

// FUNCTION: 0x101aa6f0 size=0x7
float __fastcall sub_101aa6f0(int p)
{
	return *(float *)((char *)p + 0x6258);
}
// END FUNCTION

// FUNCTION: 0x101aa710 size=0x7
float __fastcall sub_101aa710(int p)
{
	return *(float *)((char *)p + 0x625c);
}
// END FUNCTION

// FUNCTION: 0x101aa730 size=0x7
float __fastcall sub_101aa730(int p)
{
	return *(float *)((char *)p + 0x6260);
}
// END FUNCTION

// FUNCTION: 0x101aa750 size=0xd
#include "CAI_BaseNPCTroika.h"
struct TroikaField63f0 { char pad[0x63f0]; char m; };
void CAI_BaseNPCTroika::vfunc416(char value)
{
	((TroikaField63f0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x101aa770 size=0x7
char __fastcall sub_101aa770(int p)
{
	return *(char *)((char *)p + 0x63f0);
}
// END FUNCTION

// FUNCTION: 0x101aa790 size=0x6
#include "CAI_BaseNPCTroika.h"
namespace lifted {
extern char g_10924248;
}
CAI_CondOwner * CAI_BaseNPCTroika::vfunc580()
{
    return (CAI_CondOwner *)((int)&lifted::g_10924248);
}
// END FUNCTION

// FUNCTION: 0x101aa7b0 size=0x6
#include "CAI_BaseNPCTroika.h"
namespace lifted {
extern int g_105d1060;
}
const char * CAI_BaseNPCTroika::vfunc451()
{
    return (const char *)lifted::g_105d1060;
}
// END FUNCTION

// FUNCTION: 0x1028cd10 size=0x6
extern void *g_105ce470;

void *sub_1028cd10(void)
{
    return &g_105ce470;
}
// END FUNCTION

// FUNCTION: 0x1028d5e0 size=0x1e
#include "CAI_BaseNPCTroika.h"

void sub_100123af();
void sub_100aa7b0(void *p);

CAI_BaseNPC *CAI_BaseNPCTroika::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1028d6e0 size=0x66
#include "CAI_BaseNPCTroika.h"

void CAI_BaseNPCTroika::vfunc180()
{
    sub_10295ab0(5.0f);
    if (*(int *)((char *)this + 0x65e8) != 0)
        vfunc601((int)this);
    sub_102b53d0(0, "Leaving interesting place (UpdateOnRemove)");
    if (sub_102c1170())
        sub_102c0bb0();
    sub_1029f5d0((char *)this + 0x658c);
    sub_1029f5d0((char *)this + 0x6594);
    sub_1027ca30();
}
// END FUNCTION

// FUNCTION: 0x1028d860 size=0x50
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "Vector.h"
#define V100(p) CAI_NPC_V10(p##0) CAI_NPC_V10(p##1) CAI_NPC_V10(p##2) CAI_NPC_V10(p##3) CAI_NPC_V10(p##4) CAI_NPC_V10(p##5) CAI_NPC_V10(p##6) CAI_NPC_V10(p##7) CAI_NPC_V10(p##8) CAI_NPC_V10(p##9)
struct CTroikaSlot614 {
	V100(0) V100(1) V100(2) V100(3) V100(4) V100(5)
	CAI_NPC_V10(60) CAI_NPC_V(610) CAI_NPC_V(611) CAI_NPC_V(612) CAI_NPC_V(613)
	virtual void vfunc614();
};
void CAI_BaseNPCTroika::sub_1028d860(const Vector *pPos)
{
	const Vector *pOrigin = (const Vector *)vfunc217();
	float dx = pPos->x - pOrigin->x;
	float dy = pPos->y - pOrigin->y;
	float dz = pPos->z - pOrigin->z;
	if (dx * dx + dy * dy + dz * dz <= 4194304.0f)
		((CTroikaSlot614 *)this)->vfunc614();
}
// END FUNCTION

// FUNCTION: 0x1028d910 size=0x58
#include "CAI_BaseNPCTroika.h"
#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct STroikaSlots {
	V100(0) V100(1) V100(2) V100(3) V100(4) V100(5)
	V10(60) V(610) V(611) V(612) V(613)
	virtual void Slot614();
};
struct STroikaTimes {
	char pad0[0x178];
	float m_flTime178;
	char pad1[0x6254 - 0x17c];
	float m_flTime6254;
	float m_flTime6258;
	float m_flTime625c;
	float m_flTime6260;
};
void CAI_BaseNPCTroika::vfunc584(int unused)
{
	((STroikaSlots *)this)->Slot614();
	STroikaTimes *p = (STroikaTimes *)this;
	p->m_flTime178 = gpGlobals->curtime;
	p->m_flTime6254 = gpGlobals->curtime;
	p->m_flTime6258 = gpGlobals->curtime;
	p->m_flTime625c = gpGlobals->curtime;
	p->m_flTime6260 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1028de10 size=0x5e
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027ef20.h"
extern char g_10920534;
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
struct CTroikaMsgView : CAI_BaseNPCTroika
{
	void sub_1028d990(int a, int b, char *pBuf, int nSize);
};

// TARGET: CAI_BaseNPCTroika::vfunc18
void CAI_BaseNPCTroika::vfunc18(int a, int b)
{
	char szBuf[512];
	((CTroikaMsgView *)this)->sub_1028d990(a, b, szBuf, sizeof(szBuf));
	if (g_10920534)
		((CUnknown1027ef20 *)this)->sub_1027ef20(szBuf);
	else
		DevMsg(szBuf);
}
// END FUNCTION

// FUNCTION: 0x1028de90 size=0x7d
#include "CAI_BaseNPCTroika.h"
extern char g_10920534;
extern __declspec(dllimport) void DevMsg(const char *fmt, ...);
extern "C" __declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
void sub_10013304(CAI_BaseNPCTroika *pNpc, const char *pszText);
void CAI_BaseNPCTroika::vfunc17(const char *pszFormat, int arg)
{
	char szCopy[512];
	char szText[512];
	sub_10004011(pszFormat, arg, szText, 512);
	if (g_10920534) {
		Q_strncpy(szCopy, pszFormat, 512);
		sub_10013304(this, szCopy);
	} else {
		DevMsg(szText);
	}
}
// END FUNCTION

// FUNCTION: 0x1028df30 size=0x59
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027ef20.h"
extern char g_10920534;
__declspec(dllimport) void DevMsg(const char *fmt, ...);
extern "C" __declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);

void CAI_BaseNPCTroika::vfunc20(const char *pszMessage)
{
	char szBuf[512];
	if (pszMessage)
	{
		if (g_10920534)
		{
			Q_strncpy(szBuf, pszMessage, 512);
			((CUnknown1027ef20 *)this)->sub_1027ef20(szBuf);
		}
		else
			DevMsg(pszMessage);
	}
}
// END FUNCTION

// FUNCTION: 0x1028dfb0 size=0x58
#include "CAI_BaseNPCTroika.h"
extern char g_10920534;
extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
__declspec(dllimport) void DevMsg(const char *fmt, ...);
void sub_1027ee20(void *pNpc, char *msg);
void CAI_BaseNPCTroika::vfunc19(const char *pszMsg)
{
	if (pszMsg) {
		if (g_10920534) {
			char buf[512];
			Q_strncpy(buf, pszMsg, 512);
			sub_1027ee20(this, buf);
			return;
		}
		DevMsg(pszMsg);
	}
}
// END FUNCTION

// FUNCTION: 0x1028e310 size=0x31
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
extern char g_106b8540[];
void CAI_BaseNPCTroika::vfunc113()
{
	sub_100a0bc0();
	if (((CEntityVSlots *)this)->slot138()) {
		const char *psz = m_pszDisposition6558;
		if (!psz)
			psz = g_106b8540;
		sub_102c0f70(psz, 1);
	}
}
// END FUNCTION

// FUNCTION: 0x1028ef20 size=0x76
#include "CAI_BaseNPCTroika.h"
char CAI_BaseNPCTroika::vfunc587(int unused)
{
    if (sub_10337f30())
        return 0;
    if (*(int *)((char *)this + 0x128))
        return 0;
    if (*(int *)((char *)this + 0x5bb4) > 0)
        return 0;
    if (*((unsigned char *)this + 0x5b84) & 0x10)
        return 0;
    if (sub_1033e2b0())
        return 0;
    if (*(int *)((char *)this + 0x6354) <= 2)
        return 1;
    return *(int *)((char *)this + 0x6358) <= 2;
}
// END FUNCTION

// FUNCTION: 0x1028fcc0 size=0x8d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPCTroika.h"

void sub_102a0d20();

void CAI_BaseNPCTroika::vfunc432(int a)
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	ScopeTrace trace("CAI_BaseNPCTroika::RunAI", pEnt ? (pEnt->m_name26c ? pEnt->m_name26c : g_106b8540) : g_105387dc);
	sub_1028fc90();
	sub_102a0d20();
	sub_1026f110(a);
}
// END FUNCTION

// FUNCTION: 0x10290570 size=0xb4
#include "CAI_BaseNPCTroika.h"
#include "CAI_Navigator.h"
#include "CEntityVSlots.h"

// TARGET: CAI_BaseNPCTroika::vfunc532
void CAI_BaseNPCTroika::vfunc532(int a)
{
	switch (a) {
	case 1:
		if (m_n644c <= 0)
			break;
		if (m_n644c > 4)
			break;
		goto check;
	case 2:
	case 4:
		if (m_n644c != 4)
			break;
		((CEntityVSlots *)this)->slot448(0xe);
		m_h5d24 = 0xffffffff;
		m_b5d30 = 0;
		goto clear;
	default:
		break;
	case 8:
		if (m_n644c <= 0)
			break;
		if (m_n644c <= 3)
			goto clear;
		if (m_n644c != 4)
			break;
	check:
		if (((CAI_Navigator *)m_p5d34)->sub_102ee2e0())
			sub_102bf7e0();
	clear:
		m_n644c = 0;
		break;
	}
	sub_1027e0f0(a);
}
// END FUNCTION

// FUNCTION: 0x10290720 size=0x35d
#include "CAI_BaseNPCTroika.h"
#include "CVProfile.h"
#include "engineiface.h"
#include "globalvars.h"

struct CCycleSample
{
	unsigned int m_lo;
	unsigned int m_hi;
	void Sample()
	{
		__asm
		{
			mov ecx, this
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

#define EXIT_SCOPE() \
	{ \
		CVProfile *pp = g_109f3648; \
		if (!pp->m_bAtRoot || pp->m_enabled) \
		{ \
			CVProfNode *n = pp->m_pCurNode; \
			if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) \
			{ \
				CCycleSample t; \
				t.m_lo = 0; \
				t.m_hi = 0; \
				t.Sample(); \
				CUnknownCycle100335e0 *pc = &n->m_CurFrameTime; \
				pc->m_Int64 = *(unsigned __int64 *)&t - pc->m_Int64; \
				n->m_TotalTime += pc->m_Int64; \
				g_109f3648->PopGroup(); \
			} \
			if (n->m_nRecursions == 0) \
				pp->m_pCurNode = pp->m_pCurNode->m_pParent; \
			pp->m_bAtRoot = (pp->m_pCurNode == pp->m_pRoot); \
		} \
	}

namespace block_10290720 {
int __stdcall sub_10290660(float t)
{
	if (t - gpGlobals->curtime <= gpGlobals->frametime)
		return 1;
	return 0;
}
struct CTroikaUnit : CAI_BaseNPCTroika
{
	char sub_102906a0();
};
char CTroikaUnit::sub_102906a0()
{
	return (char)sub_10290660(m_f6244);
}
}
using namespace block_10290720;

#define MAXF(a, b) ((a) > (b) ? (a) : (b))
#define MINF(a, b) ((a) < (b) ? (a) : (b))

// TARGET: CAI_BaseNPCTroika::CalcNextUpdateThink
bool CAI_BaseNPCTroika::CalcNextUpdateThink(float *pOut)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot)
	{
		if (p->m_pCurNode->m_pszName != "CAI_BaseNPCTroika_CalcNextUpdateThink")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CAI_BaseNPCTroika_CalcNextUpdateThink", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0)
		{
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
	if (((CTroikaUnit *)this)->sub_102906a0())
	{
		float delay;
		if (m_h628c.Get())
		{
			float d = (m_f6264 - 512.0f) * 0.0014204546f;
			delay = d > 8.0f ? 8.0f : (d < 0.03f ? 0.03f : d);
			if (delay == 8.0f)
				delay += enginerandom->vfunc1(0.0f, 0.8f);
		}
		else
			delay = 0.03f;
		if (m_b6278)
		{
			if (!m_b6279)
				delay = MINF(delay * 5.0f, 12.0f);
		}
		else
			delay = MINF(delay * 10.0f, 16.0f);
		if (sub_102c2430())
			delay = 0.03f;
		*pOut = m_f6244 - m_f6254;
		float cur; cur = m_f6244;
		m_f6254 = cur;
		m_f6244 = MAXF(cur, gpGlobals->curtime) + delay;
		EXIT_SCOPE();
		return true;
	}
	EXIT_SCOPE();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10290b60 size=0x371
#include "CAI_BaseNPCTroika.h"
#include "CVProfile.h"
#include "engineiface.h"
#include "globalvars.h"

struct CCycleSample
{
	unsigned int m_lo;
	unsigned int m_hi;
	void Sample()
	{
		__asm
		{
			mov ecx, this
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

#define EXIT_SCOPE() \
	{ \
		CVProfile *pp = g_109f3648; \
		if (!pp->m_bAtRoot || pp->m_enabled) \
		{ \
			CVProfNode *n = pp->m_pCurNode; \
			if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) \
			{ \
				CCycleSample t; \
				t.m_lo = 0; \
				t.m_hi = 0; \
				t.Sample(); \
				CUnknownCycle100335e0 *pc = &n->m_CurFrameTime; \
				pc->m_Int64 = *(unsigned __int64 *)&t - pc->m_Int64; \
				n->m_TotalTime += pc->m_Int64; \
				g_109f3648->PopGroup(); \
			} \
			if (n->m_nRecursions == 0) \
				pp->m_pCurNode = pp->m_pCurNode->m_pParent; \
			pp->m_bAtRoot = (pp->m_pCurNode == pp->m_pRoot); \
		} \
	}

namespace block_10290b60 {
int __stdcall sub_10290660(float t)
{
	if (t - gpGlobals->curtime <= gpGlobals->frametime)
		return 1;
	return 0;
}
struct CTroikaUnit : CAI_BaseNPCTroika
{
	char sub_102906c0();
};
char CTroikaUnit::sub_102906c0()
{
	return (char)sub_10290660(m_f6248);
}
}
using namespace block_10290b60;

// TARGET: CAI_BaseNPCTroika::CalcNextNormalThink
bool CAI_BaseNPCTroika::CalcNextNormalThink(float *pOut)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot)
	{
		if (p->m_pCurNode->m_pszName != "CAI_BaseNPCTroika_CalcNextNormalThink")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CAI_BaseNPCTroika_CalcNextNormalThink", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0)
		{
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
	if (((CTroikaUnit *)this)->sub_102906c0())
	{
		float d;
		if (sub_102c2430())
			d = 0.01f;
		else if ((m_flags5b84 & 8) == 8 || (m_flags14bc & 4) || m_b6279)
			d = 0.1f;
		else
		{
			if (m_h628c.Get())
			{
				float t3;
				d = (m_f6264 - 2048.0f) * 0.0007324219f;
				if (d > 3.0f)
				{
					t3 = 3.0f;
					goto rnd;
				}
				else if (d < 0.1f)
					d = 0.1f;
				else
				{
					t3 = d;
					if (d == 3.0f)
					{
rnd:
						d = enginerandom->vfunc1(0.0f, 0.3f) + t3;
					}
				}
			}
			else
				d = 0.1f;
			if (m_b6278)
			{
				if (!m_b6279)
					d = (d * 3.0f < 6.0f) ? d * 3.0f : 6.0f;
			}
			else
			{
				d = (d * 10.0f < 16.0f) ? d * 10.0f : 16.0f;
			}
		}
		*pOut = m_f6248 - m_f6258;
		float cur = m_f6248;
		m_f6258 = cur;
		float now = gpGlobals->curtime;
		if (!(cur > now))
			cur = gpGlobals->curtime;
		m_f6248 = cur + d;
		EXIT_SCOPE();
		return true;
	}
	EXIT_SCOPE();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10291230 size=0x30f
#include "CAI_BaseNPCTroika.h"
#include "CVProfile.h"
#include "engineiface.h"
#include "globalvars.h"

struct CCycleSample
{
	unsigned int m_lo;
	unsigned int m_hi;
	void Sample()
	{
		__asm
		{
			mov ecx, this
			rdtsc
			mov [ecx], eax
			mov [ecx + 4], edx
		}
	}
};

#define EXIT_SCOPE() \
	{ \
		CVProfile *pp = g_109f3648; \
		if (!pp->m_bAtRoot || pp->m_enabled) \
		{ \
			CVProfNode *n = pp->m_pCurNode; \
			if (--n->m_nRecursions == 0 && n->m_nCurFrameCalls != 0) \
			{ \
				CCycleSample t; \
				t.m_lo = 0; \
				t.m_hi = 0; \
				t.Sample(); \
				CUnknownCycle100335e0 *pc = &n->m_CurFrameTime; \
				pc->m_Int64 = *(unsigned __int64 *)&t - pc->m_Int64; \
				n->m_TotalTime += pc->m_Int64; \
				g_109f3648->PopGroup(); \
			} \
			if (n->m_nRecursions == 0) \
				pp->m_pCurNode = pp->m_pCurNode->m_pParent; \
			pp->m_bAtRoot = (pp->m_pCurNode == pp->m_pRoot); \
		} \
	}

namespace block_10291230 {
int __stdcall sub_10290660(float t)
{
	if (t - gpGlobals->curtime <= gpGlobals->frametime)
		return 1;
	return 0;
}
struct CTroikaUnit : CAI_BaseNPCTroika
{
	char sub_10290700();
};
char CTroikaUnit::sub_10290700()
{
	return (char)sub_10290660(m_f6250);
}
}
using namespace block_10291230;

#define MAXF(a, b) ((a) > (b) ? (a) : (b))

// TARGET: CAI_BaseNPCTroika::CalcNextAIThink
bool CAI_BaseNPCTroika::CalcNextAIThink(float *pOut)
{
	CVProfile *p = g_109f3648;
	if (p->m_enabled || !p->m_bAtRoot)
	{
		if (p->m_pCurNode->m_pszName != "CAI_BaseNPCTroika_CalcNextAIThink")
			p->m_pCurNode = p->m_pCurNode->GetSubNode("CAI_BaseNPCTroika_CalcNextAIThink", 0, "Unaccounted");
		CVProfNode *n = p->m_pCurNode;
		n->m_nCurFrameCalls++;
		if (n->m_nRecursions++ == 0)
		{
			((CCycleSample *)&n->m_CurFrameTime)->Sample();
			g_109f3648->PushGroup(n->m_nBudgetGroupID);
		}
		p->m_bAtRoot = false;
	}
	if (((CTroikaUnit *)this)->sub_10290700()) {
		float flLocal;
		float flDelay;
		if (!((m_flags5b84 & 8) == 8 || ((int)m_flags14bc & 4) || *(char *)((char *)this + 0x6279) || !m_h628c.Get())) {
			flDelay = (m_f6264 - 512.0f) * 0.0011160715f;
			if (flDelay > 4.0f) {
				flLocal = 4.0f;
				goto random;
			} else if (flDelay < 0.1f) {
				flDelay = 0.1f;
			} else {
				flLocal = flDelay;
				if (flDelay == 4.0f) {
random:
					flDelay = flLocal + enginerandom->vfunc1(0, 0.4f);
				}
			}
		} else {
			flDelay = 0.1f;
		}
		float *pNext = (float *)(0x6250 + (char *)this);
		float *pPrev = (float *)(0x6260 + (char *)this);
		float flBase;
		*pOut = *pNext - *pPrev;
		flBase = *pNext;
		*pPrev = flBase;
		*pNext = flDelay + MAXF(flBase, gpGlobals->curtime);
		EXIT_SCOPE();
		return true;
	}
	EXIT_SCOPE();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10292de0 size=0x9f8
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Vector.h"
#include "QAngle.h"
#include "globalvars.h"
#include "ehandle.h"
#include "ScopeTrace.h"
#include <math.h>

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_105387dc[];


class CCycleCount
{
public:
	CCycleCount() { Init(); }
	void Init() { m_Int64 = 0; }
	void Sample()
	{
		unsigned long *pSample = (unsigned long *)&m_Int64;
		__asm
		{
			mov		ecx, pSample
			rdtsc
			mov		[ecx],     eax
			mov		[ecx+4],   edx
		}
	}
	CCycleCount &operator+=(CCycleCount const &other) { m_Int64 += other.m_Int64; return *this; }
	__int64 m_Int64;
};

class CFastTimer
{
public:
	void Start() { m_Duration.Sample(); }
	void sub_100335e0()	// CFastTimer::End (its out-of-line copy is 0x100335e0)
	{
		CCycleCount cnt;
		cnt.Sample();
		m_Duration.m_Int64 = cnt.m_Int64 - m_Duration.m_Int64;
	}
	const CCycleCount &GetDuration() const { return m_Duration; }
	CCycleCount m_Duration;
};

class CVProfile;
extern CVProfile *g_109f3648;
__declspec(dllimport) void vtune(bool bEnable);

class __declspec(dllimport) CVProfNode
{
public:
	CVProfNode *GetSubNode(const char *pszName, int detailLevel, const char *pBudgetGroupName);
	void EnterScope();
	bool ExitScope();
	const char *GetName() { return m_pszName; }
	CVProfNode *GetParent() { return m_pParent; }
	int GetBudgetGroupID() { return m_BudgetGroupID; }

	const char *m_pszName;	// 0x00
	CFastTimer m_Timer;	// 0x08
	int m_nRecursions;	// 0x10
	unsigned m_nCurFrameCalls;	// 0x14
	CCycleCount m_CurFrameTime;	// 0x18
	unsigned m_nPrevFrameCalls;
	CCycleCount m_PrevFrameTime;
	unsigned m_nTotalCalls;
	CCycleCount m_TotalTime;
	CCycleCount m_PeakTime;
	CVProfNode *m_pParent;	// 0x48
	CVProfNode *m_pChild;
	CVProfNode *m_pSibling;
	int m_BudgetGroupID;	// 0x54
};

class __declspec(dllimport) CVProfile
{
public:
	void EnterScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted);
	void ExitScope();
	void PushGroup(int nGroupID);
	void PopGroup();

	char m_bVTuneGroupsEnabled;	// 0x0000
	char m_pad0001[3];
	int m_nVTuneGroupID;	// 0x0004
	int m_GroupIDStack[1024];	// 0x0008
	int m_nGroupStackDepth;	// 0x1008
	int m_enabled;	// 0x100c
	bool m_fAtRoot;	// 0x1010
	char m_pad1011[3];
	CVProfNode *m_pCurNode;	// 0x1014
	CVProfNode *m_pRoot;	// 0x1018
};

inline void CVProfile::PushGroup(int nGroupID)
{
	m_GroupIDStack[m_nGroupStackDepth] = nGroupID;
	m_nGroupStackDepth++;
	if (m_GroupIDStack[m_nGroupStackDepth - 2] != nGroupID && m_bVTuneGroupsEnabled && nGroupID == m_nVTuneGroupID)
		vtune(true);
}

inline void CVProfNode::EnterScope()
{
	m_nCurFrameCalls++;
	if (m_nRecursions++ == 0)
	{
		m_Timer.Start();
		g_109f3648->PushGroup(m_BudgetGroupID);
	}
}

inline bool CVProfNode::ExitScope()
{
	if (--m_nRecursions == 0 && m_nCurFrameCalls != 0)
	{
		m_Timer.sub_100335e0();
		m_CurFrameTime += m_Timer.GetDuration();
		g_109f3648->PopGroup();
	}
	return (m_nRecursions == 0);
}

inline void CVProfile::ExitScope()
{
	if (!m_fAtRoot || m_enabled != 0)
	{
		if (m_pCurNode->ExitScope())
		{
			m_pCurNode = m_pCurNode->GetParent();
		}
		m_fAtRoot = (m_pCurNode == m_pRoot);
	}
}

class CVProfScope
{
public:
	CVProfScope(const char *pszName, int detailLevel, const char *pBudgetGroupName, bool bAssertAccounted)
	{
		g_109f3648->EnterScope(pszName, detailLevel, pBudgetGroupName, bAssertAccounted);
	}
	~CVProfScope()
	{
		g_109f3648->ExitScope();
	}
};
struct CNTTimerOOL
{
	void sub_100335e0();
};

class CNTInnerScope
{
public:
	CNTInnerScope(const char *pszName)
	{
		CVProfile *p = g_109f3648;
		if (p->m_enabled != 0 || !p->m_fAtRoot)
		{
			if (pszName != p->m_pCurNode->GetName())
				p->m_pCurNode = p->m_pCurNode->GetSubNode(pszName, 0, "Unaccounted");
			p->m_pCurNode->EnterScope();
			p->m_fAtRoot = false;
		}
	}
	~CNTInnerScope()
	{
		CVProfile *pP = g_109f3648;
		if (!pP->m_fAtRoot || pP->m_enabled != 0)
		{
			CVProfNode *pN = pP->m_pCurNode;
			if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0)
			{
				((CNTTimerOOL *)&pN->m_Timer)->sub_100335e0();
				pN->m_CurFrameTime += pN->m_Timer.GetDuration();
				g_109f3648->PopGroup();
			}
			if (pN->m_nRecursions == 0)
				pP->m_pCurNode = pP->m_pCurNode->GetParent();
			pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot);
		}
	}
};
#define VPROF(name) CVProfScope VProf_(name, 0, "Unaccounted", false)
#define AI_PROFILE_SCOPE(tag) VPROF(#tag)
#define AI_PROFILE_SCOPE_BEGIN(tag) if (0) ; else { AI_PROFILE_SCOPE(tag)
#define AI_PROFILE_SCOPE_END() } do {} while (0)


class CBaseEntity;
struct CNTEnemies
{
	Vector sub_102dfed0(CBaseEntity *pEnemy);
};

class CNTSlots
{
public:
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9();
	virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19();
	virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23(); virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29();
	virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35(); virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39();
	virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47(); virtual void s48(); virtual void s49();
	virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61(); virtual void s62(); virtual void s63(); virtual void s64(); virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69();
	virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76(); virtual void s77(); virtual void s78(); virtual void s79();
	virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88(); virtual void s89();
	virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99();
	virtual void s100(); virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104(); virtual void s105(); virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109();
	virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114(); virtual void s115(); virtual void s116(); virtual void s117(); virtual void s118(); virtual void s119();
	virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124(); virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129();
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137(); virtual void s138(); virtual void s139();
	virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149();
	virtual void s150(); virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154(); virtual void s155(); virtual void s156(); virtual void s157(); virtual void s158(); virtual void s159();
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164(); virtual void s165(); virtual void s166();
	virtual CBaseEntity *GetEnemy();	// slot 167
	virtual void s168(); virtual void s169(); virtual void s170(); virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174(); virtual void s175(); virtual void s176(); virtual void s177();
	virtual void s178(); virtual void s179(); virtual void s180(); virtual void s181(); virtual void s182(); virtual void s183(); virtual void s184(); virtual void s185(); virtual void s186(); virtual void s187();
	virtual void s188(); virtual void s189(); virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194(); virtual void s195(); virtual void s196(); virtual void s197();
	virtual void s198(); virtual void s199(); virtual void s200();
	virtual bool FVisible(CBaseEntity *pEnt, int mask, CBaseEntity **ppBlocker, int nOrigin);	// slot 201
	virtual void s202(); virtual void s203(); virtual void s204(); virtual void s205(); virtual void s206(); virtual void s207(); virtual void s208(); virtual void s209(); virtual void s210(); virtual void s211();
	virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual const Vector *GetAbsOrigin();	// slot 217
	virtual void s218(); virtual void s219(); virtual void s220();
	virtual const QAngle *GetAbsAngles();	// slot 221
	virtual void s222(); virtual void s223(); virtual void s224(); virtual void s225(); virtual void s226(); virtual void s227(); virtual void s228(); virtual void s229(); virtual void s230(); virtual void s231();
	virtual void s232(); virtual void s233(); virtual void s234(); virtual void s235(); virtual void s236(); virtual void s237(); virtual void s238(); virtual void s239(); virtual void s240(); virtual void s241();
	virtual void s242(); virtual void s243(); virtual void s244(); virtual void s245(); virtual void s246(); virtual void s247(); virtual void s248(); virtual void s249(); virtual void s250(); virtual void s251();
	virtual void s252(); virtual void s253(); virtual void s254(); virtual void s255(); virtual void s256(); virtual void s257(); virtual void s258(); virtual void s259(); virtual void s260(); virtual void s261();
	virtual void s262(); virtual void s263(); virtual void s264(); virtual void s265(); virtual void s266(); virtual void s267(); virtual void s268(); virtual void s269(); virtual void s270(); virtual void s271();
	virtual void s272(); virtual void s273(); virtual void s274(); virtual void s275(); virtual void s276(); virtual void s277(); virtual void s278(); virtual void s279(); virtual void s280(); virtual void s281();
	virtual void s282(); virtual void s283(); virtual void s284(); virtual void s285(); virtual void s286(); virtual void s287(); virtual void s288(); virtual void s289(); virtual void s290(); virtual void s291();
	virtual void s292(); virtual void s293(); virtual void s294(); virtual void s295(); virtual void s296(); virtual void s297(); virtual void s298(); virtual void s299(); virtual void s300(); virtual void s301();
	virtual void s302(); virtual void s303(); virtual void s304(); virtual void s305(); virtual void s306(); virtual void s307(); virtual void s308(); virtual void s309(); virtual void s310(); virtual void s311();
	virtual void UpdateCharacter(float flInterval);	// slot 312
	virtual void s313(); virtual void s314(); virtual void s315(); virtual void s316(); virtual void s317(); virtual void s318(); virtual void s319(); virtual void s320(); virtual void s321(); virtual void s322();
	virtual void s323(); virtual void s324(); virtual void s325(); virtual void s326(); virtual void s327(); virtual void s328(); virtual void s329(); virtual void s330(); virtual void s331(); virtual void s332();
	virtual void s333(); virtual void s334(); virtual void s335(); virtual void s336(); virtual void s337(); virtual void s338(); virtual void s339(); virtual void s340(); virtual void s341(); virtual void s342();
	virtual void s343(); virtual void s344(); virtual void s345(); virtual void s346(); virtual void s347(); virtual void s348(); virtual void s349(); virtual void s350(); virtual void s351(); virtual void s352();
	virtual void s353(); virtual void s354(); virtual void s355(); virtual void s356(); virtual void s357(); virtual void s358(); virtual void s359(); virtual void s360(); virtual void s361(); virtual void s362();
	virtual void s363(); virtual void s364(); virtual void s365(); virtual void s366(); virtual void s367(); virtual void s368(); virtual void s369(); virtual void s370(); virtual void s371(); virtual void s372();
	virtual void s373(); virtual void s374(); virtual void s375(); virtual void s376(); virtual void s377(); virtual void s378(); virtual void s379(); virtual void s380(); virtual void s381(); virtual void s382();
	virtual void s383(); virtual void s384(); virtual void s385(); virtual void s386(); virtual void s387(); virtual void s388(); virtual void s389(); virtual void s390(); virtual void s391(); virtual void s392();
	virtual void s393(); virtual void s394(); virtual void s395(); virtual void s396(); virtual void s397(); virtual void s398(); virtual void s399(); virtual void s400(); virtual void s401(); virtual void s402();
	virtual void s403(); virtual void s404(); virtual void s405(); virtual void s406(); virtual void s407(); virtual void s408(); virtual void s409(); virtual void s410(); virtual void s411(); virtual void s412();
	virtual void s413(); virtual void s414(); virtual void s415(); virtual void s416(); virtual void s417(); virtual void s418(); virtual void s419(); virtual void s420(); virtual void s421(); virtual void s422();
	virtual void s423(); virtual void s424(); virtual void s425(); virtual void s426(); virtual void s427(); virtual void s428(); virtual void s429(); virtual void s430(); virtual void s431();
	virtual void RunAI(char bSkip);	// slot 432
	virtual void s433(); virtual void s434(); virtual void s435(); virtual void s436(); virtual void s437(); virtual void s438(); virtual void s439(); virtual void s440(); virtual void s441(); virtual void s442();
	virtual void s443(); virtual void s444(); virtual void s445(); virtual void s446(); virtual void s447(); virtual void s448(); virtual void s449(); virtual void s450(); virtual void s451(); virtual void s452();
	virtual void s453(); virtual void s454(); virtual void s455(); virtual void s456(); virtual void s457(); virtual void s458(); virtual void s459(); virtual void s460(); virtual void s461(); virtual void s462();
	virtual void s463(); virtual void s464(); virtual void s465(); virtual void s466(); virtual void s467(); virtual void s468(); virtual void s469(); virtual void s470(); virtual void s471(); virtual void s472();
	virtual void s473(); virtual void s474(); virtual void s475(); virtual void s476(); virtual void s477(); virtual void s478(); virtual void s479(); virtual void s480(); virtual void s481(); virtual void s482();
	virtual void s483(); virtual void s484(); virtual void s485(); virtual void s486(); virtual void s487(); virtual void s488(); virtual void s489(); virtual void s490(); virtual void s491(); virtual void s492();
	virtual void s493(); virtual void s494(); virtual void s495(); virtual void s496(); virtual void s497(); virtual void s498(); virtual void s499(); virtual void s500(); virtual void s501(); virtual void s502();
	virtual void s503(); virtual void s504(); virtual void s505(); virtual void s506(); virtual void s507(); virtual void s508(); virtual void s509(); virtual void s510(); virtual void s511(); virtual void s512();
	virtual void s513(); virtual void s514(); virtual void s515(); virtual void s516();
	virtual void MotorSlot517(CBaseEntity *pEnt, Vector *pPos, float a, float b, int c);	// slot 517
	virtual void s518(); virtual void s519(); virtual void s520(); virtual void s521(); virtual void s522(); virtual void s523(); virtual void s524(); virtual void s525(); virtual void s526(); virtual void s527();
	virtual void s528(); virtual void s529(); virtual void s530(); virtual void s531(); virtual void s532(); virtual void s533(); virtual void s534(); virtual void s535(); virtual void s536(); virtual void s537();
	virtual void s538(); virtual void s539(); virtual void s540();
	virtual CNTEnemies *GetEnemies();	// slot 541
	virtual void s542(); virtual void s543(); virtual void s544(); virtual void s545(); virtual void s546(); virtual void s547(); virtual void s548(); virtual void s549(); virtual void s550(); virtual void s551();
	virtual void s552(); virtual void s553(); virtual void s554(); virtual void s555(); virtual void s556(); virtual void s557(); virtual void s558(); virtual void s559(); virtual void s560(); virtual void s561();
	virtual void s562(); virtual void s563(); virtual void s564(); virtual void s565();
	virtual bool FValidateHint(void *pHint);	// slot 566
};

struct CNTConVar
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};

struct CNTDevFlag { virtual void vfunc0(); virtual void vfunc1(); };

struct CNTRandom
{
	virtual void v0();
	virtual void v1();
	virtual int RandomInt(int a, int b);
};

struct CNTSoundName
{
	const char *m_psz;
	const char *Get() const { return m_psz ? m_psz : g_106b8540; }
};

struct CNTSoundEntry
{
	int m_id;
	CNTSoundName m_name;
};

struct CNTSoundPlayer
{
	void sub_100119fa(void *pEntity, int id, int flags, float volume, float pitch);
};

extern CNTConVar *g_10924f74;
extern CNTConVar *g_10924d24;
extern CNTDevFlag *g_10924a6c;
extern CNTRandom *g_1070b244;
extern int g_1073dc3c;
extern CNTSoundEntry **g_1073dc40;
extern CNTSoundPlayer g_1073dc28;
extern char g_1093408c;
extern char g_105d0fb0[];
extern char g_105d0ff0[];
extern unsigned char g_10923dd7;
extern int g_109246c0;

static inline float NT_min(float a, float b)
{
	return a <= b ? a : b;
}

static inline int NT_LookupSound(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(g_1073dc40[i]->m_name.Get(), name))
			return g_1073dc40[i]->m_id;
	}
	return -1;
}

void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
char sub_101d1a90(CBaseEntity *pTarget, void *pNPC);
void sub_101cd940(void *pEnt);


#pragma auto_inline(off)
namespace block_10292de0 {
int __stdcall sub_10290660(float a)
{
	float d = a - gpGlobals->curtime;
	if (d <= gpGlobals->frametime) {
		return 1;
	}
	return 0;
}
struct CNTUnit
{
	char sub_102906e0();
	int sub_10290700();
	int sub_102906a0();
	int sub_102906c0();
};
char CNTUnit::sub_102906e0()
{
	return 1;
}
int CNTUnit::sub_10290700()
{
	return sub_10290660(*(float *)((char *)this + 0x6250));
}
int CNTUnit::sub_102906a0()
{
	return sub_10290660(*(float *)((char *)this + 0x6244));
}
int CNTUnit::sub_102906c0()
{
	return sub_10290660(*(float *)((char *)this + 0x6248));
}
}
#pragma auto_inline(on)
#define UNIT ((block_10292de0::CNTUnit *)this)


struct CNTTimer
{
	void sub_100335e0();
};

#define NT_TRACE_PUSH(fn, nm) 	g_109f3620[*g_109f3680].name = fn; 	g_109f3620[*g_109f3680].file = nm; 	g_109f3620[*g_109f3680].line = g_106b8540; 	(*g_109f3680)++;
#define NT_TRACE_POP() (*g_109f3680)--;

#define NT_EXIT_CALL() 	{ 		CVProfile *pP = g_109f3648; 		if (!pP->m_fAtRoot || pP->m_enabled != 0) 		{ 			CVProfNode *pN = pP->m_pCurNode; 			if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0) 			{ 				((CNTTimer *)&pN->m_Timer)->sub_100335e0(); 				pN->m_CurFrameTime += pN->m_Timer.GetDuration(); 				g_109f3648->PopGroup(); 			} 			if (pN->m_nRecursions == 0) 				pP->m_pCurNode = pP->m_pCurNode->GetParent(); 			pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot); 		} 	}

#define NT_EXIT_FULL() 	{ 		CVProfile *pP = g_109f3648; 		if (!pP->m_fAtRoot || pP->m_enabled != 0) 		{ 			CVProfNode *pN = pP->m_pCurNode; 			if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0) 			{ 				pN->m_Timer.sub_100335e0(); 				pN->m_CurFrameTime += pN->m_Timer.GetDuration(); 				CVProfile *pG = g_109f3648; 				pG->m_nGroupStackDepth--; 				if (pG->m_GroupIDStack[pG->m_nGroupStackDepth] != pG->m_GroupIDStack[pG->m_nGroupStackDepth + 1] && pG->m_bVTuneGroupsEnabled && pG->m_GroupIDStack[pG->m_nGroupStackDepth + 1] == pG->m_nVTuneGroupID) 					vtune(false); 			} 			if (pN->m_nRecursions == 0) 				pP->m_pCurNode = pP->m_pCurNode->GetParent(); 			pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot); 		} 	}

struct CNTFields
{
	char m_pad0000[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad0180[0x26c - 0x180];
	const char *m_name;	// 0x26c
	char m_pad0270[0x14b8 - 0x270];
	int m_bfAINPCFlags;	// 0x14b8
	int m_bfAINPCFlags2;	// 0x14bc
	char m_pad14c0[0x5b84 - 0x14c0];
	unsigned int m_flags5b84;	// 0x5b84
	char m_pad5b88[0x5ba8 - 0x5b88];
	EHANDLE m_h5ba8;	// 0x5ba8
	char m_pad5bac[0x5ddc - 0x5bac];
	void *m_pHintNode;	// 0x5ddc
	char m_pad5de0[0x6080 - 0x5de0];
	char m_b6080;	// 0x6080
	char m_pad6081[0x6244 - 0x6081];
	float m_f6244;	// 0x6244
	float m_f6248;	// 0x6248
	char m_pad624c[0x6254 - 0x624c];
	float m_f6254;	// 0x6254
	float m_f6258;	// 0x6258
	char m_pad625c[0x6264 - 0x625c];
	float m_f6264;	// 0x6264
	float m_f6268;	// 0x6268
	float m_f626c;	// 0x626c
	float m_f6270;	// 0x6270
	char m_pad6274[0x628c - 0x6274];
	EHANDLE m_h628c;	// 0x628c
	Vector m_vecForward;	// 0x6290
	Vector m_vecRight;	// 0x629c
	char m_pad62a8[0x62c0 - 0x62a8];
	float m_flOccludedDelayNormal;	// 0x62c0
	float m_flOccludedDelayCover;	// 0x62c4
	float m_flOccludedDelay;	// 0x62c8
	char m_pad62cc[0x6435 - 0x62cc];
	char m_b6435;	// 0x6435
	char m_pad6436[0x6444 - 0x6436];
	CBaseEntity *m_p6444;	// 0x6444
	EHANDLE m_h6448;	// 0x6448
	char m_pad644c[0x6498 - 0x644c];
	char m_bJumping;	// 0x6498
	char m_pad6499[0x64c0 - 0x6499];
	char m_b64c0;	// 0x64c0
};

struct CNTEnemyFields
{
	char m_pad0000[0x200];
	int m_lifeState;	// 0x200
};

class CTroikaView_10292de0
{
public:
	bool sub_10291230(float *pOut);
	bool sub_10290720(float *pOut);
	bool sub_10290b60(float *pOut);
	bool sub_10290fc0(float *pOut);
	void sub_10292500();
	bool sub_1028fd80(char arg);
	void sub_10291610();
	char sub_102c0aa0();
	void sub_102c0ca0();
	void sub_10295ab0(float flDelay);
	void sub_102bf820(float flFrame);
	void sub_102bfdf0(float flFrame);
	void sub_102bfe10(float flFrame);
	void sub_102bf310(float flFrame);
	float sub_10293a80();
	void sub_1026a0f0();
	bool sub_10280a50();
	bool sub_10269aa0(int condition);
	void sub_10269a20(int a);
	char sub_1026c3d0();
	float sub_1026c7c0();
	void sub_1026c120(int a, char b);
	void sub_10292dc0();
	void sub_10292de0();
};

#define F ((CNTFields *)this)
#define SL ((CNTSlots *)this)

// TARGET: CTroikaView_10292de0::sub_10292de0
void CTroikaView_10292de0::sub_10292de0()
{
	float flNormal;
	ScopeTrace trace("CAI_BaseNPCTroika::NPCThink", this ? (F->m_name ? F->m_name : g_106b8540) : g_105387dc, g_106b8540);
	sub_10292500();
	F->m_bfAINPCFlags2 &= 0x7ffffffb;
	if (F->m_b6080)
		return;

	g_109f3648->EnterScope("CAI_BaseNPC_NPCThink", 0, "Unaccounted", false);
	CVProfile *pP;
	CVProfNode *pN;

	char bSet1 = UNIT->sub_102906c0();
	if (bSet1)
	{
		ScopeTrace trace1("CAI_BaseNPCTroika::NPCThink Set1", F->m_name ? F->m_name : g_106b8540, g_106b8540);
		F->m_f6264 = sub_10293a80();
		CBaseEntity *pEnemy = SL->GetEnemy();
		if (pEnemy && !((CNTEnemyFields *)pEnemy)->m_lifeState)
		{
			Vector vecMy = *SL->GetAbsOrigin();
			Vector vecEnemy = *((CNTSlots *)pEnemy)->GetAbsOrigin();
			Vector vecLKP = SL->GetEnemies()->sub_102dfed0(pEnemy);
			F->m_f6268 = (vecMy - vecEnemy).Length();
			F->m_f626c = fabs(vecMy.z - vecEnemy.z);
			F->m_f6270 = (*SL->GetAbsOrigin() - vecLKP).Length();
			if (!g_10924f74->vfunc1() && g_10924f74->m_n2c && (F->m_bfAINPCFlags2 & 0x400) == 0x400)
				SL->MotorSlot517(pEnemy, &vecLKP, 1.0f, 0.8f, 0);
		}
		else
		{
			F->m_f6268 = 20000.0f;
			F->m_f626c = 20000.0f;
			F->m_f6270 = 20000.0f;
		}
		sub_10139610(SL->GetAbsAngles(), &F->m_vecForward, &F->m_vecRight, 0);
		sub_10291610();
		sub_1026a0f0();
		if ((F->m_bfAINPCFlags & 0x4000) == 0x4000)
			sub_10280a50();
		if (F->m_pHintNode)
		{
			F->m_flOccludedDelay = F->m_flOccludedDelayCover;
			if (!SL->FValidateHint(F->m_pHintNode) || (!F->m_b6435 && F->m_h6448.Get() == SL->GetEnemy() && (sub_10269aa0(0x2e) || sub_10269aa0(0x48))))
			{
				sub_10295ab0(5.0f);
				g_10924a6c->vfunc1();
				sub_10269a20(0x29);
			}
		}
		else
			F->m_flOccludedDelay = F->m_flOccludedDelayNormal;
		if (F->m_p6444)
		{
			if (SL->FValidateHint(F->m_p6444))
				F->m_h5ba8 = F->m_p6444;
			else
			{
				F->m_h5ba8 = 0;
				F->m_p6444 = 0;
			}
		}
		if ((F->m_flags5b84 & 0x8000) == 0x8000 && g_1070b244->RandomInt(0, 0x63) < 1)
		{
			if (!(g_10923dd7 & 1))
			{
				g_10923dd7 |= 1;
				g_109246c0 = NT_LookupSound("Scream_Death");
			}
			g_1073dc28.sub_100119fa(this, g_109246c0, 2, 1.0f, 1.25f);
		}
	}

	{
	float flUpdate = gpGlobals->curtime - F->m_f6254;
	char bUpdate = UNIT->sub_102906a0();
	{
	flNormal = gpGlobals->curtime - F->m_f6258;
	if (bSet1)
	{
		const char *pszName2 = F->m_name ? F->m_name : g_106b8540;
		NT_TRACE_PUSH("CAI_BaseNPCTroika::NPCThink Set2", pszName2)
		sub_102bf820(flNormal);
		if (~F->m_bfAINPCFlags2 & 0x4000)
			sub_102bfdf0(flNormal);
		if (!g_10924d24->vfunc1() && g_10924d24->m_n2c)
			sub_102bfe10(flNormal);
		sub_102bf310(flNormal);
		if (F->m_bfAINPCFlags2 & 0x20000000)
		{
			if (!sub_101d1a90(F->m_h628c.Get(), this) || !((CBaseEntity *)this)->vfunc201((CBaseEntity *)F->m_h628c.Get(), 0x2804091, 0, 0))
				sub_101cd940(this);
		}
		if (!sub_1026c3d0())
		{
			if (!g_1093408c)
				F->m_flNextThink = gpGlobals->curtime + 0.1f;
			NT_TRACE_POP()
			pP = g_109f3648;
			if (!pP->m_fAtRoot || pP->m_enabled != 0)
			{
				pN = pP->m_pCurNode;
				if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0)
				{
					((CNTTimer *)&pN->m_Timer)->sub_100335e0();
					pN->m_CurFrameTime += pN->m_Timer.GetDuration();
					g_109f3648->PopGroup();
				}
				if (pN->m_nRecursions == 0)
					pP->m_pCurNode = pP->m_pCurNode->GetParent();
				pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot);
			}
			return;
		}
		char bNormal = UNIT->sub_102906e0();
		char bSimple = UNIT->sub_10290700();
		{
			CNTInnerScope vprof2(bNormal ? g_105d0fb0 : g_105d0ff0);
			if (!sub_1028fd80(!bSimple))
				SL->RunAI(!bSimple);
			flNormal = sub_1026c7c0();
			sub_1026c120(*(int *)&flNormal, !bNormal);
		}
		{
		float flNext;
		sub_10290fc0(&flNext);
		sub_10291230(&flNext);
		}
		NT_TRACE_POP()
	}
	}
	if (bUpdate)
	{
		SL->UpdateCharacter(flUpdate);
		if (F->m_b64c0 && !sub_102c0aa0())
			sub_102c0ca0();
	}
	sub_10290720(&flUpdate);
	}
	{
		float flNext2;
		sub_10290b60(&flNext2);
	}
	F->m_flNextThink = ((F->m_f6248 + 0.0f) < (F->m_f6244 + 0.0f)) ? F->m_f6248 : F->m_f6244;
	if (F->m_bJumping)
		F->m_flNextThink = gpGlobals->curtime + 0.01f;
	sub_10292dc0();
	pP = g_109f3648;
	if (!pP->m_fAtRoot || pP->m_enabled != 0)
	{
		pN = pP->m_pCurNode;
		if (--pN->m_nRecursions == 0 && pN->m_nCurFrameCalls != 0)
		{
			pN->m_Timer.sub_100335e0();
			pN->m_CurFrameTime += pN->m_Timer.GetDuration();
			CVProfile *pG = g_109f3648;
			pG->m_nGroupStackDepth--;
			if (pG->m_GroupIDStack[pG->m_nGroupStackDepth] != pG->m_GroupIDStack[pG->m_nGroupStackDepth + 1] && pG->m_bVTuneGroupsEnabled && pG->m_GroupIDStack[pG->m_nGroupStackDepth + 1] == pG->m_nVTuneGroupID)
				vtune(false);
		}
		if (pN->m_nRecursions == 0)
			pP->m_pCurNode = pP->m_pCurNode->GetParent();
		pP->m_fAtRoot = (pP->m_pCurNode == pP->m_pRoot);
	}
}
// END FUNCTION

// FUNCTION: 0x10293a60 size=0x5
#include "CTakeDamageInfo.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

// TARGET: CAI_BaseNPCTroika::vfunc301
// the game's 0x10293a60: a tail call (jmp) of CBaseCombatCharacter::vfunc301
void CAI_BaseNPCTroika::vfunc301(Vector const *a0, CTakeDamageInfo *a1)
{
	((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc301(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10293e50 size=0x1d
#include "CAI_BaseNPCTroika.h"

struct CAI_TroikaSoundPlaceholder {
	void sub_10289ee0(int a);
};

void CAI_BaseNPCTroika::vfunc588()
{
	if (vfunc251())
		((CAI_TroikaSoundPlaceholder *)this)->sub_10289ee0(0xf1);
}
// END FUNCTION

// FUNCTION: 0x10293e80 size=0x24
#include "CAI_BaseNPCTroika.h"

struct CTroikaVFunc527 {
	bool sub_10293e80(void *pArg);
};

// TARGET: CTroikaVFunc527::sub_10293e80
bool CTroikaVFunc527::sub_10293e80(void *pArg)
{
	CAI_BaseNPCTroika *pObj = *(CAI_BaseNPCTroika **)((char *)pArg + 0xa0);
	if (pObj != 0) {
		if (!pObj->sub_102d1540(this)) {
			return true;
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10293ec0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc488()
{
	static int id = FindSound("Death");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10293f80 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc489()
{
	static int id = FindSound("Target_Suspect");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294040 size=0x18
#include "CAI_BaseNPCTroika.h"

bool CAI_BaseNPCTroika::vfunc509()
{
	if (sub_102c1170())
		return false;
	return sub_1027a420();
}
// END FUNCTION

// FUNCTION: 0x10294070 size=0x19a
#include "CAI_BaseNPCTroika.h"
#include "StatDefault.h"

struct StatOwner
{
	StatDefault *sub_1006cff0(int id);
	int sub_1000fb46(const char *pszName);
};
extern StatOwner g_106c7c34;

struct CDialogPartnerView
{
	char m_pad0000[0xfe8];
	EHANDLE m_hfe8;
};

bool CAI_BaseNPCTroika::vfunc510()
{
	if (sub_102c1170())
		return false;
	if (m_h1538.Get() && m_n153c != -1)
		return false;
	if (((CBaseCombatCharacter *)this)->sub_10341aa0())
		return false;
	if (m_flags14b8 & 0x20000)
		return false;
	if (m_n5cc4 != 1 || m_n5cc0 != 1)
		return false;
	if (!m_h628c.Get())
		return false;
	if (((CDialogPartnerView *)m_h628c.Get())->m_hfe8.Get())
		return false;
	static int id = g_106c7c34.sub_1000fb46("Float_Sound_Info");
	static float v = g_106c7c34.sub_1006cff0(id)->sub_1006caa0(0);
	if (!(m_f6264 > v))
		return CAI_BaseNPC::vfunc510();
	return false;
}
// END FUNCTION

// FUNCTION: 0x10294280 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc490()
{
	static int id = FindSound("Idle_Calm");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294340 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc491()
{
	static int id = FindSound("Pain");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294400 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc492()
{
	static int id = FindSound("Fear_Start");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102944c0 size=0xa0
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

extern char g_106b8540[];

struct SSoundName
{
	const char *m_psz;

	const char *Get() const { return m_psz ? m_psz : g_106b8540; }
};

struct SSoundEntry
{
	int m_id;
	SSoundName m_name;
};

struct ISoundSettings
{
	virtual void v0();
	virtual void v1();
	virtual int vfunc2(int a, int b);
};

struct CSoundPlayer
{
	void sub_100119fa(void *pEntity, int id, int flags, float volume, float pitch);
};

extern ISoundSettings *g_1070b244;
extern int g_1073dc3c;
extern SSoundEntry **g_1073dc40;
extern CSoundPlayer g_1073dc28;

static inline int LookupSoundId(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(g_1073dc40[i]->m_name.Get(), name))
			return g_1073dc40[i]->m_id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc493()
{
	if (g_1070b244->vfunc2(0, 0x63) < 0x19) {
		static int s_nSoundId = LookupSoundId("Target_Lost");
		g_1073dc28.sub_100119fa(this, s_nSoundId, 2, 1.0f, 1.25f);
	}
}
// END FUNCTION

// FUNCTION: 0x10294590 size=0x93
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CAI_BaseNPCTroika.h"
extern char g_106b8540[];
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CVSoundRec {
	int m_nIndex;
	const char *m_pszName;
};

static inline const char *SafeStr(const char *const *pp)
{
	return *pp ? *pp : g_106b8540;
}

struct CVSoundTable {
	char m_pad00[0x14];
	int m_nCount;	// 0x14
	CVSoundRec **m_ppRecs;	// 0x18

	int Find(const char *pszName)
	{
		for (int i = 0; i < m_nCount; i++) {
			if (!_strcmpi(SafeStr(&m_ppRecs[i]->m_pszName), pszName))
				return m_ppRecs[i]->m_nIndex;
		}
		return -1;
	}
	void sub_101f5950(CAI_BaseNPCTroika *pEnt, int index, int a, float b, float c);
};
extern CVSoundTable g_1073dc28;

void CAI_BaseNPCTroika::vfunc494()
{
	if (!sub_1033e2b0()) {
		static int s_nSound = g_1073dc28.Find("Target_Reacquired");
		g_1073dc28.sub_101f5950(this, s_nSound, 2, 1.0f, 1.25f);
	}
}
// END FUNCTION

// FUNCTION: 0x10294660 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc495()
{
	static int id = FindSound("Surprised");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294720 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc496()
{
	static int id = FindSound("Target_Acquired");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102947e0 size=0x6e
#include "CAI_BaseNPCTroika.h"

struct CNPCTroikaNameRecord
{
	int m_nId;
	const char *m_pszName;
};

extern int g_1073dc3c;
extern CNPCTroikaNameRecord **g_1073dc40;
extern char g_105d8ccc[];
extern char g_106b8540[];
extern "C" int _strcmpi(const char *, const char *);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline int FindNameRecord(const char *pszName)
{
	for (int i = 0; i < g_1073dc3c; i++)
	{
		if (_strcmpi(STRINGR(g_1073dc40[i]->m_pszName), pszName) == 0)
			return g_1073dc40[i]->m_nId;
	}
	return -1;
}

// TARGET: CAI_BaseNPCTroika::vfunc497
void CAI_BaseNPCTroika::vfunc497()
{
	static int s_nId = FindNameRecord(g_105d8ccc);
}
// END FUNCTION

// FUNCTION: 0x10294870 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc498()
{
	static int id = FindSound("Flee");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294930 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc499()
{
	static int id = FindSound("Idle_Agitated");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x102949f0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc500()
{
	static int id = FindSound("Exert_Heavy");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294ab0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc501()
{
	static int id = FindSound("Exert_Light");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294b70 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc502()
{
	static int id = FindSound("Riled");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294c30 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc503()
{
	static int id = FindSound("Comfort");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294cf0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc504()
{
	static int id = FindSound("Upset");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294db0 size=0x8a
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc505()
{
	static int id = FindSound("Target_GiveUp");
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294e70 size=0x93
#include "CAI_BaseNPCTroika.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SoundRecord { int m_Id; const char *m_pszName; };
struct SoundSystem { void sub_100119fa(void *pEntity, int a, int b, float c, float d); };
extern int g_1073dc3c;
extern SoundRecord **g_1073dc40;
extern SoundSystem g_1073dc28;
extern char g_106b8540[];

static inline const char *NameOf(const char *const *p)
{
	return *p ? *p : g_106b8540;
}

static inline int FindSound(const char *name)
{
	for (int i = 0; i < g_1073dc3c; i++) {
		if (!_strcmpi(NameOf(&g_1073dc40[i]->m_pszName), name))
			return g_1073dc40[i]->m_Id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc506()
{
	if (sub_1033e2b0())
		return;
	static int s_nSound = FindSound("Target_Reacquired");
	g_1073dc28.sub_100119fa(this, s_nSound, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10294f40 size=0x12e
#include "CAI_BaseNPCTroika.h"
#include "StatDefault.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

struct SndEntry {
	int id;
	const char *name;
};
struct SndTable {
	char pad[0x14];
	int count;
	SndEntry **items;
	SndEntry *&Get(int i) { return items[i]; }
	void sub_100119fa(CAI_BaseNPCTroika *pEnt, int id, int a, float b, float c);
};
extern SndTable g_1073dc28;
extern char g_106b8540[];

struct StatOwner {
	int sub_1006cf30(const char *pszName);
	StatDefault *sub_1006cff0(int id);
};
extern StatOwner g_106c7c34;

static inline const char *NameOf(SndEntry *&e)
{
	const char *&r = e->name;
	return r ? r : g_106b8540;
}

static inline int FindSound(const char *wanted)
{
	for (int i = 0; i < g_1073dc28.count; i++) {
		if (!_strcmpi(NameOf(g_1073dc28.Get(i)), wanted))
			return g_1073dc28.Get(i)->id;
	}
	return -1;
}

void CAI_BaseNPCTroika::vfunc507()
{
	static int id = FindSound("Float");
	int base = (*(int *)((char *)this + 0x128) ? 0xe : 0) + 0x42;
	float pitch = base > 0x32 ? 20 / (base - 0x32) : 4.0;
	g_1073dc28.sub_100119fa(this, id, 2, 1.0f, pitch);
	static int statId = g_106c7c34.sub_1006cf30("Float_Sound_Info");
	static int bonus = g_106c7c34.sub_1006cff0(statId)->sub_1006cb60(1);
	*(float *)((char *)this + 0x10ec) = engine->vfunc119(0) + bonus;
}
// END FUNCTION

// FUNCTION: 0x10295300 size=0x7d
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027d990.h"
#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
struct CEntPosView {
	PV10(a0) PV10(a1) PV10(a2) PV10(a3) PV10(a4) PV10(a5) PV10(a6) PV10(a7) PV10(a8) PV10(a9)
	PV10(b0) PV10(b1) PV10(b2) PV10(b3) PV10(b4) PV10(b5) PV10(b6) PV10(b7) PV10(b8)
	PV(c0) PV(c1) PV(c2)
	virtual Vector *vfunc193(Vector *pOut);
	PV10(d0) PV10(d1) PV(d2) PV(d3) PV(d4)
	virtual Vector *vfunc217();
};
float sub_102d61b0(int a);
void CAI_BaseNPCTroika::vfunc563(CBaseEntity *pEnt, const void *pGoal, const void *pParams, const void *pExtra)
{
	if (((CUnknown1027d990 *)this)->sub_1027d990() == 2) {
		CEntPosView *pView = (CEntPosView *)pEnt;
		Vector *pVec = (Vector *)pGoal;
		const Vector *pB = pView->vfunc217();
		{
			Vector buf;
			const Vector *pA = pView->vfunc193(&buf);
			*pVec += *pA - *pB;
		}
		*(float *)pParams = sub_102d61b0(*(int *)((char *)this + 0x1568));
	}
}
// END FUNCTION

// FUNCTION: 0x102953a0 size=0x30
#include "CAI_BaseNPCTroika.h"
bool CAI_BaseNPCTroika::vfunc564()
{
	if ((vfunc513() & 0x8000) && sub_1032e7b0() && !*((char *)this + 0x6078))
		return false;
	return CAI_BaseNPC::vfunc564();
}
// END FUNCTION

// FUNCTION: 0x102953e0 size=0x59
#include "CAI_BaseNPCTroika.h"
// TARGET: CAI_BaseNPCTroika::vfunc592
bool CAI_BaseNPCTroika::vfunc592()
{
    if (sub_10014df8(0x48))
        return true;
    if (gpGlobals->curtime >= m_f607c)
        return true;
    if (m_f607c - 1.0f <= gpGlobals->curtime && !sub_10014df8(0x4f))
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x102954b0 size=0x8d
#include "CAI_BaseNPCTroika.h"

int CAI_BaseNPCTroika::vfunc570(CBaseEntity *pHint)
{
	int act = 0x55;
	if (pHint) {
		switch (*(int *)((char *)pHint + 0x5dc)) {
		case 100:
			if (sub_1008dc40(0x57, -1) != -1)
				act = 0x57;
			else if (sub_10295460(0x1111, 0) != -1)
				act = 0x1111;
			break;
		case 101:
			if (sub_1008dc40(0x57, -1) != -1)
				act = 0x57;
			else if (sub_10295460(0x110d, 0) != -1)
				act = 0x110d;
			break;
		}
	}
	return act;
}
// END FUNCTION

// FUNCTION: 0x10295570 size=0x5
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

// TARGET: CAI_BaseNPCTroika::vfunc381
// the game's 0x10295570: a tail call (jmp) of CBaseCombatCharacter::vfunc381
int CAI_BaseNPCTroika::vfunc381(int a0)
{
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc381(a0);
}
// END FUNCTION

// FUNCTION: 0x10295590 size=0x127
#include "CAI_BaseNPCTroika.h"

struct TranslateGlobal {
    virtual void v0();
    virtual bool IsPaused();
    char pad[0x2c - 4];
    int m_nMode;
};
extern TranslateGlobal *g_10924d6c;
struct TranslateBase { int sub_10328030(int act); };

int CAI_BaseNPCTroika::sub_10295590(int act)
{
    int mode = g_10924d6c->IsPaused() ? 0 : g_10924d6c->m_nMode;
    switch (mode) {
    case 1:
        if (act == 9 || act == 0x1115)
            act = 0x13;
        break;
    case 2:
        if (act == 0x13)
            act = 9;
        break;
    }
    unsigned int flags = *(unsigned int *)((char *)this + 0x5b84);
    if ((flags & 0x40) == 0x40) {
        switch (act) {
        case 9: case 0x13: case 0x17: case 0x1115: case 0x1121:
            act = 0xf17;
            goto translated;
        case 0x16:
            act = 0xf17;
            goto translated;
        }
    } else if ((flags & 0x20) == 0x20) {
        switch (act) {
        case 9: case 0x1115: case 0x1121:
            act = 0x13;
            goto translated;
        case 0x16:
            act = 0x13;
            goto translated;
        }
    }
    if (act == 3)
        act = 1;
translated:
    if (vfunc513() & 0x8000000) {
        if (act == 0x55)
            return vfunc570(*(CBaseEntity **)((char *)this + 0x5ddc));
        if (act == 6 || (act == 1 && (*(unsigned char *)((char *)this + 0x5d8c) & 2)))
            return vfunc569(*(CBaseEntity **)((char *)this + 0x5ddc));
    }
    return ((TranslateBase *)this)->sub_10328030(act);
}
// END FUNCTION

// FUNCTION: 0x10295710 size=0x25
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc376
int CAI_BaseNPCTroika::vfunc376(int a)
{
	switch (a)
	{
	case 1:
		if ((m_flags14bc & 0x80000) == 0x80000)
			a = 0x105d;
		break;
	}
	return a;
}
// END FUNCTION

// FUNCTION: 0x10295750 size=0x264
#include "CAI_BaseNPCTroika.h"
#include "engineiface.h"
#include "Vector.h"
typedef int (__fastcall *TroikaFn0)(void *);
typedef void *(__fastcall *TroikaFnP)(void *);
#define TROIKA_SLOT_I(p, n) ((*(TroikaFn0 **)(p))[n](p))
#define TROIKA_SLOT_P(p, n) ((*(TroikaFnP **)(p))[n](p))
struct TroikaEnemies {
	char sub_102dfa20(void *pEnemy);
	void sub_102dfed0(Vector *pOut, void *pEnemy);
};
#define TF(type, off) (*(type *)((char *)this + (off)))
inline float Dot2D(const Vector &a, const Vector &b) { return a.x * b.x + a.y * b.y; }
void CAI_BaseNPCTroika::vfunc310(int act)
{
	if (act == 0x1093) {
		if (TF(int, 0xfec) >= 0x1093 && TF(int, 0xfec) <= 0x1096) {
			if ((char)TROIKA_SLOT_I(this, 251)) {
				TF(char, 0x5cd8) = 1;
				int r = enginerandom->vfunc2(0, 99);
				if (r < 15)
					CAI_BaseNPC::vfunc310(0x1095);
				else if (r < 30)
					CAI_BaseNPC::vfunc310(0x1096);
				else if (r < 40)
					CAI_BaseNPC::vfunc310(0x1094);
				else
					CAI_BaseNPC::vfunc310(0x1093);
				TF(char, 0x5cd8) = 0;
			}
		} else {
			CAI_BaseNPC::vfunc310(0x1093);
		}
	} else if (act == 0x1115) {
		if ((TF(int, 0x5b84) & 0x40) == 0x40) {
			if (TF(int, 0xfec) != 0xf17)
				CAI_BaseNPC::vfunc310(0xf17);
		} else if ((TF(int, 0x5b84) & 0x20) == 0x20) {
			if (TF(int, 0xfec) != 0x13)
				CAI_BaseNPC::vfunc310(0x13);
		} else if (TF(int, 0xfec) >= 0x1115 && TF(int, 0xfec) <= 0x1117) {
			if ((char)TROIKA_SLOT_I(this, 251)) {
				int nLow = 0xf;
				int nMid = nLow;
				void *pEnemy = (void *)TROIKA_SLOT_I(this, 168);
				if (pEnemy) {
					if (((TroikaEnemies *)TROIKA_SLOT_P(this, 541))->sub_102dfa20(pEnemy)) {
						Vector vecPos;
						((TroikaEnemies *)TROIKA_SLOT_P(this, 541))->sub_102dfed0(&vecPos, pEnemy);
						Vector *pOrigin = (Vector *)TROIKA_SLOT_P(this, 217);
						Vector vecDelta;
						vecDelta.x = vecPos.x - pOrigin->x;
						vecDelta.y = vecPos.y - pOrigin->y;
						if (Dot2D(vecDelta, TF(Vector, 0x629c)) > 0.0f) {
							nLow = 8;
							nMid = 0x18;
						} else {
							nLow = 8;
							nMid = 0x18;
						}
					}
				}
				TF(char, 0x5cd8) = 1;
				int r = enginerandom->vfunc2(0, 99);
				if (nLow > r)
					CAI_BaseNPC::vfunc310(0x1116);
				else if (nMid + nLow > r)
					CAI_BaseNPC::vfunc310(0x1117);
				else
					CAI_BaseNPC::vfunc310(0x1115);
				TF(char, 0x5cd8) = 0;
			}
		} else {
			CAI_BaseNPC::vfunc310(0x1115);
		}
	} else {
		CAI_BaseNPC::vfunc310(act);
	}
}
// END FUNCTION

// FUNCTION: 0x10295a60 size=0x3
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::vfunc465(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10295c20 size=0x220
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"
#include "CUnknown100290c0.h"

extern unsigned int g_10925444;
extern "C" int sprintf(char *, const char *, ...);
char *sub_101d3730(const char *, ...);
struct CAI_FailView { void sub_102d0ab0(const char *); };
struct HintV { char pad[0x470]; unsigned int m470; char pad2[0x5dc - 0x474]; int m5dc; };
struct CTroikaHintCall { bool sub_102974f0(CAI_BaseNPCTroika *pOther); };

// TARGET: CAI_BaseNPCTroika::vfunc566
bool CAI_BaseNPCTroika::vfunc566(CBaseEntity *pEnt)
{
	HintV *pHint = (HintV *)pEnt;
	ScopeTrace trace("CAI_BaseNPCTroika::FValidateHintType", this ? (((CBaseEntity *)this)->m_name26c ? ((CBaseEntity *)this)->m_name26c : g_106b8540) : g_105387dc);
	if (pHint != 0) {
		unsigned int mask = pHint->m470;
		if ((mask & *(unsigned int *)((char *)this + 0x62e4)) == 0) {
			if ((void *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&g_10925444) == (void *)this) {
				char a[128];
				char b[128];
				char *p = a;
				int i = 0;
				do {
					unsigned int bit = 1 << i;
					if ((bit & mask) == bit)
						p += sprintf(p, " %d", i + 1);
					i++;
				} while (i < 32);
				*p = 0;
				p = b;
				i = 0;
				do {
					unsigned int bit = 1 << i;
					if ((*(unsigned int *)((char *)this + 0x62e4) & bit) == bit)
						p += sprintf(p, " %d", i + 1);
					i++;
				} while (i < 32);
				*p = 0;
				((CAI_FailView *)pHint)->sub_102d0ab0(sub_101d3730("Hint group id %s usable %s", a, b));
			}
		} else {
			switch (pHint->m5dc) {
			case 100:
			case 101:
				return ((CTroikaHintCall *)this)->sub_102974f0((CAI_BaseNPCTroika *)pHint);
			case 0x27d8:
				return sub_10297430((CAI_BaseNPCTroika *)pHint);
			case 0x2774:
				return true;
			case 0x283c:
			case 0x283d:
				return sub_10295ed0(pEnt);
			case 0x28a0:
				return sub_102961a0(pEnt);
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10297560 size=0xa1
#include "CAI_BaseNPCTroika.h"

int CAI_BaseNPCTroika::vfunc569(CBaseEntity *pHint)
{
    if ((*(unsigned int *)((char *)this + 0x14b8) & 0x200) == 0x200)
        return 8;
    if (pHint) {
        switch (*(int *)((char *)pHint + 0x5dc)) {
        case 100:
            if (sub_10295460(0x1111, 0) != -1)
                return 0x1111;
            break;
        case 101:
            if (sub_10295460(0x110d, 0) != -1)
                return 0x110d;
            break;
        case 0x27d8:
            if (sub_10295460(0x1118, 0) != -1)
                return 0x1118;
            break;
        }
    }
    return sub_10274aa0(pHint);
}
// END FUNCTION

// FUNCTION: 0x10297640 size=0x251
// TARGET: CAI_BaseNPCTroika::vfunc572

#include "CAI_BaseNPCTroika.h"
#include "CAI_Motor.h"
#include "ConVar.h"

extern ConVar *g_109247ec;

void CAI_BaseNPCTroika::vfunc572()
{
	if ((!g_109247ec->vfunc1() && g_109247ec->m_nValue != 0) || *(char *)((char *)this + 0x65f9) != 0)
	{
		float flValue = (*(CAI_Motor **)((char *)this + 0x5d44))->sub_102e1f90();

		if (flValue <= -70.0f && flValue >= -140.0f)
		{
			if (sub_10295460(0xa2, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0xa2);
				return;
			}
		}
		if (flValue >= 70.0f && flValue <= 140.0f)
		{
			if (sub_10295460(0xa1, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0xa1);
				return;
			}
		}
		if (flValue < -140.0f)
		{
			if (sub_10295460(0x9e, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x9e);
				return;
			}
			if (sub_10295460(0x9d, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x9d);
				return;
			}
		}
		if (flValue > 140.0f)
		{
			if (sub_10295460(0x9d, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x9d);
				return;
			}
			if (sub_10295460(0x9e, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x9e);
				return;
			}
		}
		if (flValue <= -15.0f)
		{
			if (sub_10295460(0x3c, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x3c);
				return;
			}
		}
		if (flValue >= 15.0f)
		{
			if (sub_10295460(0x3b, 0) != -1)
			{
				m_flags5d8c |= 0x2000;
				sub_10272650(0x3b);
				return;
			}
		}
	}

	sub_10272650(1);
}
// END FUNCTION

// FUNCTION: 0x10297ce0 size=0x297
#include "CAI_BaseNPCTroika.h"
#include "ConVar.h"
#include <math.h>

inline bool IsBitSet(unsigned int x, int bit) { return (x >> bit) & 1; }
// TARGET: CAI_BaseNPCTroika::vfunc516

extern ConVar g_10924c90;
extern ConVar g_109247e8;
extern ConVar g_10923e80;

float CAI_BaseNPCTroika::vfunc516()
{
	if ( m_flags5d8c & 0x2000 )
	{
		typedef float (__fastcall *CVFunc242)(void *);
		float f = ((CVFunc242)((*(void ***)this)[242]))(this);
		float r = fabs(f) * g_10924c90.GetFloat();
		if ( r > 1.0f )
			return r;
		return 1.0f;
	}

	if ( m_flags14b8 & 0x08000000 )
		return 45.0f;

	switch ( m_nState0fec )
	{
	case 1:
	case 5:
				if ( IsBitSet(*(int *)((char *)this + 0x5b64), 7) )
				{
					if ( g_109247e8.GetBool() )
						return 30.0f;
					return g_10923e80.GetFloat();
				}
				{
					static ConVar debug_slow_idle_yaw_speed("debug_slow_idle_yaw_speed", "20", 0);
					return debug_slow_idle_yaw_speed.GetFloat();
				}
	case 9:
				if ( IsBitSet(*(int *)((char *)this + 0x5b64), 7) )
					return 45.0f;
				{
					static ConVar debug_slow_walk_yaw_speed("debug_slow_walk_yaw_speed", "25", 0);
					return debug_slow_walk_yaw_speed.GetFloat();
				}
	case 0x13:
	case 0x1093:
	case 0x1094:
		return 160.0f;
	case 0x1095:
	case 0x1096:
		return 160.0f;
	case 0x3b:
	case 0x3c:
	case 0x1121:
		return 30.0f;
	default:
		return 45.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x10298070 size=0x23e
#include "MvsnSec0.h"
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CHL2_Player.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "ScopeTrace.h"
#include "CAI_BaseNPCTroika.h"
#include <string.h>

// TARGET: ?vfunc312@CAI_BaseNPCTroika@@QAEXH@Z
extern char g_10924fb8;
extern CBaseHandle g_109247e0[2];

#include "CAI_BaseNPC_vfunc144.h"
#include "CCineNPC.h"
#include "CUnknown103158f0.h"
#include "IPhysicsObject.h"
#include "ConVar.h"

extern ConVar g_106bbaa0;
extern ConVar g_10924a68;
#define FILE_144 "E:\\Vampire\\main\\dlls\\AI_BaseNPC.cpp"

// The game's first decliner of the header inline EHandleEntityList::LookupEntity in this unit is
// CAI_BaseNPC::Event_Killed (0x10265ad0, judged 0 below as a same-unit copy): its LookupEntity COMDAT is compiled
// before this function, so VC6 knows the call's side effects (not its registers) here, as in the game.
namespace block_10298070
{
struct CScriptView144
{
	char m_pad0000[0x204];
	unsigned int m_spawnflags;
	char m_pad0208[0x5f91 - 0x208];
	char m_bPlayedSequence;
};

struct CDamageInfo144 : CAI_NPCDamageRecord
{
	CBaseEntity *GetAttacker() const { return m_pInflictor; }
};

struct CEventKilled144 : CAI_BaseNPCUnit144
{
	IPhysicsObject *VPhysicsGetObject() const { return m_pPhysObj36c; }
	void SetIdealStateDbg(int state, const char *pszFile, int nLine) { m_pszFile1b3c = pszFile; m_nLine1b40 = nLine; m_nIdealState5cc4 = state; }
	void SetTouchNull() { *(int *)((char *)this + 0x1ec) = 0; }
	void SetCondition(int iCondition) { if (g_10924a68.GetBool()) {} sub_10269a20(iCondition); }
	void sub_10265ad0(const CDamageInfo144 &info);
};

void CEventKilled144::sub_10265ad0(const CDamageInfo144 &info)
{
	if (m_pSchedule5c38 && (int)m_pSchedule5c38 == sub_102cc1f0(0x3a))
		return;

	if (m_nState5cc0 == 4 && m_hScript5d74.Get())
	{
		CScriptView144 *pScript = (CScriptView144 *)m_hScript5d74.Get();
		if (pScript->m_bPlayedSequence && (((CScriptView144 *)m_hScript5d74.Get())->m_spawnflags & 0x2080) != 0x80)
		{
			m_LastDamage = info;
			return;
		}
		((CCineNPC *)m_hScript5d74.Get())->sub_101a8c30();
		IPhysicsObject *pPhys;
		if (g_106bbaa0.GetBool() && (pPhys = VPhysicsGetObject()))
		{
			Vector vecTmp;
			Vector vecPos;
			vecPos = *vfunc263(&vecTmp);
			pPhys->vfunc39((float *)&vecPos, 0);
		}
	}

	vfunc511();
	if (m_n153c == -1 || !m_h1538.Get())
		vfunc488();

	sub_10265a90(info.GetAttacker());
	if (((CBaseEntity *)this)->sub_100b3700() & 0x2000)
	{
		SetTouchNull();
		sub_10265a40();
	}
	sub_1032b9b0((int)&info);
	SetIdealStateDbg(7, FILE_144, 0x217);
	SetCondition(0x4c);
	m_hAttacker5b7c = info.GetAttacker();
	m_b5b80 = 1;
	sub_1028ae60();
	if (m_pSquad5da4)
		((CUnknown103158f0 *)m_pSquad5da4)->sub_103158f0((CBaseEntity *)this);
	if ((char)vfunc552())
		sub_102695d0();
	else
		sub_101babc0(0x20, vfunc217(), 0x180, 30.0f, 0);
	SetIdealStateDbg(7, FILE_144, 0x241);
	sub_1026e340(7);
}
}



inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
inline const char *EntName(CBaseEntity *p) { return p ? STRINGR(p->m_name26c) : g_105387dc; }

struct CUpdateCharacterKeep
{
	CUtlVector<CBaseHandle> m_List;
};

void CAI_BaseNPCTroika::vfunc312(int nArg)
{
	ScopeTrace scope("CAI_BaseNPCTroika::UpdateCharacter", EntName((CBaseEntity *)this));
	if (m_b6496) {
		if (!m_b6497 && g_10924fb8 < 2 && vfunc464() == 2) {
			CBaseHandle &slot = g_109247e0[g_10924fb8++];
			slot = *(CBaseHandle *)((IHandleEntity *)this)->vfunc1();
			m_b6497 = 1;
		}
	}
	if (!m_b6496 && m_b6497) {
		CUpdateCharacterKeep keep;
		int i;
		for (i = 0; i < 2; i++) {
			if (g_109247e0[i].Get() && (void *)g_109247e0[i].Get() != (void *)this) {
				CBaseHandle h;
				h.Set(g_109247e0[i].Get());
				keep.m_List.AddToTail(h);
			}
		}
		g_10924fb8 = keep.m_List.Count();
		memset(g_109247e0, 0, sizeof(g_109247e0));
		if (g_10924fb8)
			for (i = 0; i < 2; i++)
				g_109247e0[i] = keep.m_List[i];
		m_b6497 = 0;
	}
	sub_103246d0(nArg);
}
// END FUNCTION

// FUNCTION: 0x102984a0 size=0x2a2
#include "CAI_BaseNPCTroika.h"
#include "CAI_Pathfinder.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "globalvars.h"

__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
extern CGlobalEntityList *g_10566458;

struct CDoorTarget { char m_pad0000[0x28]; float m_f28; };
struct CDoorView
{
	EVS(0) virtual unsigned int *slot1(); EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23)
	EVS(240) EVS(241) EVS(242) EVS(243) EVS(244) EVS(245)
	virtual void slot246(void *pNpc, int *pOut, bool bFlag);
	char m_pad0004[0x4f8 - 4];
	int m_n4f8;
};
struct CTroikaDoorNpc : CAI_BaseNPCTroika { void sub_100f0e70(); };
struct CDoorLinkTest { bool sub_10319f30(void *pLink); };
struct CNavTarget { char m_pad0000[0x24]; CDoorLinkTest m_Test; };
struct CNavProvView { char m_pad0000[0x30]; CNavTarget *m_p30; };
void *__fastcall sub_103166b0(void *pSquad);

// TARGET: CAI_BaseNPCTroika::vfunc531
bool CAI_BaseNPCTroika::vfunc531(void *pTarget, void *pDoor, float flDist, int *pOut)
{
	if (!pDoor) {
		DevMsg("\n\n**WARNING**\nNo door given to OnUpcomingDoor()\n**WARNING**\n\n");
		return false;
	}
	CDoorTarget *pRec = (CDoorTarget *)pTarget;
	CDoorView *pView = (CDoorView *)pDoor;
	CTroikaDoorNpc *pNpc = (CTroikaDoorNpc *)pDoor;
	if (pRec->m_f28 < flDist)
		return false;
	if (pDoor == ((CGlobalEntityList *)g_10566458)->sub_100290c0(&m_h5d24)) {
		*pOut = 0;
		pNpc->sub_100f0e70();
		return true;
	}
	if (m_n5bb0 <= 0 && m_p5da4 && sub_103166b0(m_p5da4) == pDoor) {
		*pOut = -2;
		pNpc->sub_100f0e90(1);
		return true;
	}
	if (vfunc464() == 4 && (vfunc513() & 0xd00) != 0xd00) {
		if (flDist < 64.0f) {
			sub_102bf770();
			m_n644c = 4;
			m_f6450 = gpGlobals->curtime + 3.0f;
			m_h5d24 = *pView->slot1();
		}
		*pOut = 0;
		pNpc->sub_100f0e70();
		return true;
	}
	if (!sub_1027f550((CAI_BaseNPCTroika *)pDoor)) {
		*pOut = -2;
		pNpc->sub_100f0e90(4);
		return true;
	}
	if (vfunc513() & 0xd00) {
		int buf[7];
		pView->slot246(this, buf, pView->m_n4f8 == 2);
		if (buf[6] == -1) {
			*pOut = 0;
			pNpc->sub_100f0e70();
			return true;
		}
		CAI_Pathfinder *pPath = m_p5d3c;
		char *pFound = (char *)pPath->sub_10304130((const float *)vfunc217(), (const float *)buf, 0, 0x30, -1, 1, 0, 0);
		if (!pFound) {
			if (pView->m_n4f8 == 0 || pView->m_n4f8 == 2) {
				pNpc->sub_100f0e70();
				return false;
			}
			m_h5d24 = *pView->slot1();
			if (sub_10298840((CBaseEntity *)pDoor)) {
				m_h5d24 = 0xffffffff;
				pNpc->sub_100f0e70();
			} else {
				*pOut = -2;
				pNpc->sub_100f0e90(0x40);
				return true;
			}
		} else {
			*(unsigned int *)(pFound + 0x24) = *pView->slot1();
			CNavTarget *pNav = ((CNavProvView *)m_p5d34)->m_p30;
			if (pNav->m_Test.sub_10319f30(pFound)) {
				m_h5d24 = *pView->slot1();
				m_b5d30 = pView->m_n4f8 == 2;
				pRec->m_f28 = flDist;
				*pOut = 0;
				pNpc->sub_100f0e70();
				return true;
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10298ad0 size=0x19d
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include <string.h>
extern int (*g_109f388c)(char *pDest, int nSize, const char *pFmt, ...);
extern void (*g_109f3860)(char *pDest, int nSize);
extern char g_105d90c4[];
extern char g_106b8540[];
void sub_101d0ec0(const char *);
void sub_101d0f10(char *, const char *, int, int);
struct CUnknown10924980 { int sub_100ec640(void *p); };
extern CUnknown10924980 g_10924980;
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CS { const char *p; CS(const char *s) { p = *s ? s : 0; } };
struct SV { const char *pszValue; bool operator!() const { return pszValue == 0; } const char *ToCStr() const { return pszValue ? pszValue : g_106b8540; } };
struct NPCView {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8();
    virtual SV *GetN(int *pOut);
    virtual void SetIdx(int idx);
    V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t) V10(u) V10(v)
    virtual void z0();
    virtual void SetThing(CS s);
    char pad[0x128 - 4];
    const char *m_pName128;
    char pad2[0x1a98 - 0x12c];
    const char *m_pWeapon1a98;
    char pad3[0x64e8 - 0x1a9c];
    int m_n64e8;
};
inline const char *STRS(const string_t &s) { return s.pszValue ? s.pszValue : g_106b8540; }
inline const char *STRING(const char *s) { return s ? s : g_106b8540; }
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CAI_BaseNPCTroika::vfunc104()
{
    char buf[0x104];
    NPCView *v = (NPCView *)this;
    int n;
    if (!*v->GetN(&n) || !v->GetN(&n)->ToCStr() || !v->GetN(&n)->ToCStr()[0])
        v->SetThing(CS(g_105d90c4));
    v->SetIdx(engine->vfunc13(v->GetN(&n)->ToCStr(), 0));
    if (v->m_pWeapon1a98) {
        if (strcmp(STRINGR(v->m_pWeapon1a98), "0") && strcmp(STRINGR(v->m_pWeapon1a98), "item_w_unarmed"))
            sub_101d0ec0(STRINGR(v->m_pWeapon1a98));
    }
    CAI_BaseNPC::vfunc104();
    if (v->m_pName128) {
        g_109f388c(buf, 0x104, "sound/character/%s", STRINGR(v->m_pName128));
        buf[strlen(buf) - 4] = 0;
        g_109f3860(buf, strlen(buf));
        sub_101d0f10(buf, ".wav", 1, 0);
        sub_101d0f10(buf, ".mp3", 1, 0);
    }
    v->m_n64e8 = g_10924980.sub_100ec640(this);
    this->vfunc608("Normal");
}
// END FUNCTION

// FUNCTION: 0x10298ce0 size=0x32
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100ecee0.h"
extern CUnknown100ecee0 g_10924980;
void CAI_BaseNPCTroika::vfunc105(const char *pszName)
{
	sub_103409a0(pszName);
	sub_10273070(1);
	CAI_BaseNPC::sub_10274ca0();
	m_n64e8 = g_10924980.sub_100ec640((CBaseAnimating *)this);
}
// END FUNCTION

// FUNCTION: 0x10298d30 size=0x538
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
// TARGET: CAI_BaseNPCTroika::vfunc103
#include <string.h>
#include "ScopeTrace.h"
#include "Tier1.h"
#include "CUnknown10206c70.h"
#include "CCollisionProperty.h"
#define M(T, off) (*(T *)((char *)this + off))
extern CUnknown10206c70 g_1074f028;
extern void (*g_109f3650)(int, const char *, ...);
void sub_101cf600(void *);
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
struct PctView { int a, b, c, d, e; };
void CAI_BaseNPCTroika::vfunc103()
{
	M(char, 0x62e9) = 1;
	if (strcmp(STRINGR(M(const char *, 0x10e4)), g_106b8540) != 0)
		g_1074f028.sub_10206c30(STRINGR(M(const char *, 0x10e4)), (CBaseCombatCharacter *)this);
	vfunc104();
	const char *p10ac = STRINGR(M(const char *, 0x10ac));
	if (*p10ac)
		sub_103239a0(p10ac);
	int tmp;
	((CBaseEntity *)this)->vfunc105(STRINGR(*(const char **)vfunc9(&tmp)));
	M(int, 0x1570) = 0xf7;
	M(float, 0x1574) = 0.2f;
	sub_1026dc00(1);
	sub_1026dc00(0x800000);
	sub_1026dc00(8);
	M(Vector, 0x1578).Init(0.0f, 0.0f, 55.0f);
	M(int, 0x62ec) = 0;
	M(char, 0x62e8) = 0;
	{ ScopeTrace t("CBaseEntity::SetSolidFlags", M(const char *, 0x26c) ? M(const char *, 0x26c) : g_106b8540, g_106b8540); M(CCollisionProperty, 0x270).sub_100dc580(0); }
	{ ScopeTrace t("CBaseEntity::AddSolidFlags", M(const char *, 0x26c) ? M(const char *, 0x26c) : g_106b8540, g_106b8540); M(CCollisionProperty, 0x270).AddSolidFlags(1); }
	{ ScopeTrace t("CBaseEntity::AddSolidFlags", M(const char *, 0x26c) ? M(const char *, 0x26c) : g_106b8540, g_106b8540); M(CCollisionProperty, 0x270).AddSolidFlags(0x40); }
	{ ScopeTrace t("CBaseEntity::SetSolid", M(const char *, 0x26c) ? M(const char *, 0x26c) : g_106b8540, g_106b8540); M(CCollisionProperty, 0x270).sub_100dc480(2); }
	((CBaseEntity *)this)->vfunc93(4, 0);
	sub_10273070(0);
	sub_101cf600(this);
	CAI_BaseNPC::vfunc103();
	Vector *v = (Vector *)vfunc217();
	M(Vector, 0x62a8) = *v;
	v = (Vector *)vfunc219();
	M(Vector, 0x62b4) = *v;
	vfunc420();
	sub_1033df80();
	void (*pDev)(int, const char *, ...) = g_109f3650;
	if (M(int, 0x6348) < 1) { pDev(1, "Warning: Invalid m_iPLInvestigateLevel ('pl_investigate' in world craft)\n"); M(int, 0x6348) = 6; }
	if (M(int, 0x634c) < 1) { pDev(1, "Warning: Invalid m_iPLCriminalFleeLevel ('pl_criminal_flee' in world craft)\n"); M(int, 0x634c) = 6; }
	if (M(int, 0x6350) < 1) { pDev(1, "Warning: Invalid m_iPLCriminalAttackLevel ('pl_criminal_attack' in world craft)\n"); M(int, 0x6350) = 6; }
	if (M(int, 0x6354) < 1) { pDev(1, "Warning: Invalid m_iPLSupernaturalFleeLevel ('pl_supernatural_flee' in world craft)\n"); M(int, 0x6354) = 6; }
	if (M(int, 0x6358) < 1) { pDev(1, "Warning: Invalid m_iPLSupernaturalAttackLevel ('pl_supernatural_attack' in world craft)\n"); M(int, 0x6358) = 6; }
	PctView &pc = M(PctView, 0x6420);
	int sum = pc.a + pc.b + pc.c + pc.d + pc.e;
	if (sum > 0) {
		pc.e = 100;
		pc.a = pc.a * 100 / sum;
		pc.b = pc.a + pc.b * 100 / sum;
		pc.c = pc.b + pc.c * 100 / sum;
		pc.d = pc.c + pc.d * 100 / sum;
	}
	if (pc.e != 100) {
		g_109f3630("Occluded target reaction percentages for %s (%f, %f, %f) do not add up to 100%\n", sub_100ab4f0(), (double)M(float, 0x62a8), (double)M(float, 0x62ac), (double)M(float, 0x62b0));
		if (pc.e <= 0) {
			pc.a = 10; pc.b = 40; pc.c = 50; pc.d = 70; pc.e = 100;
		}
	}
	sub_10298910(STRINGR(M(const char *, 0x62d8)));
	sub_102989e0(STRINGR(M(const char *, 0x62e0)));
	M(int, 0x65e4) = sub_1029f340(STRINGR(M(const char *, 0x65e0)));
	g_1074f028.sub_10207e60((CBaseCombatCharacter *)this);
	((CBaseEntity *)this)->sub_100b3840(4);
}
// END FUNCTION

// FUNCTION: 0x102993c0 size=0x290
#include "CAI_BaseNPCTroika.h"
#include "CSave.h"

void sub_1009d940(void *p, int n);
void sub_1009d960(void *p, int n);
struct CTimer2c { void sub_101b9840(); void sub_101b9860(); };

int CAI_BaseNPCTroika::vfunc126(CSave *pSave)
{
	char *p = (char *)this;
	sub_1009d940(p + 0x607c, 3);
	sub_1009d940(p + 0x6084, 2);
	sub_1009d940(p + 0x6274, 2);
	sub_1009d940(p + 0x62cc, 3);
	sub_1009d940(p + 0x62d0, 3);
	sub_1009d940(p + 0x62d4, 3);
	sub_1009d940(p + 0x632c, 3);
	sub_1009d940(p + 0x63d4, 2);
	sub_1009d940(p + 0x63dc, 2);
	sub_1009d940(p + 0x6458, 4);
	sub_1009d940(p + 0x657c, 4);
	((CTimer2c *)(p + 0x60b0))->sub_101b9840();
	((CTimer2c *)(p + 0x60dc))->sub_101b9840();
	((CTimer2c *)(p + 0x6108))->sub_101b9840();
	((CTimer2c *)(p + 0x6134))->sub_101b9840();
	((CTimer2c *)(p + 0x6160))->sub_101b9840();
	((CTimer2c *)(p + 0x618c))->sub_101b9840();
	((CTimer2c *)(p + 0x61b8))->sub_101b9840();
	((CTimer2c *)(p + 0x61e4))->sub_101b9840();
	((CTimer2c *)(p + 0x6210))->sub_101b9840();
	int r = CAI_BaseNPC::vfunc126(pSave);
	char b = *(int *)(p + 0x630c) != 0;
	pSave->vfunc12(&b, 1);
	if (b) {
		pSave->vfunc10(*(char **)(p + 0x630c) + 4, 1);
		pSave->vfunc10(*(char **)(p + 0x630c) + 8, 1);
	}
	sub_1009d960(p + 0x607c, 3);
	sub_1009d960(p + 0x6084, 2);
	sub_1009d960(p + 0x6274, 2);
	sub_1009d960(p + 0x62cc, 3);
	sub_1009d960(p + 0x62d0, 3);
	sub_1009d960(p + 0x62d4, 3);
	sub_1009d960(p + 0x632c, 3);
	sub_1009d960(p + 0x63d4, 2);
	sub_1009d960(p + 0x63dc, 2);
	sub_1009d960(p + 0x6458, 4);
	sub_1009d960(p + 0x657c, 4);
	((CTimer2c *)(p + 0x60b0))->sub_101b9860();
	((CTimer2c *)(p + 0x60dc))->sub_101b9860();
	((CTimer2c *)(p + 0x6108))->sub_101b9860();
	((CTimer2c *)(p + 0x6134))->sub_101b9860();
	((CTimer2c *)(p + 0x6160))->sub_101b9860();
	((CTimer2c *)(p + 0x618c))->sub_101b9860();
	((CTimer2c *)(p + 0x61b8))->sub_101b9860();
	((CTimer2c *)(p + 0x61e4))->sub_101b9860();
	((CTimer2c *)(p + 0x6210))->sub_101b9860();
	return r;
}
// END FUNCTION

// FUNCTION: 0x10299700 size=0x158
#include "CAI_BaseNPCTroika.h"
#include "CRestore.h"

struct CTimerSub
{
	void sub_101b9860();
};
extern void sub_1009d960(float *, int);

int CAI_BaseNPCTroika::vfunc127(CRestore *pRestore)
{
	int result = CAI_BaseNPC::vfunc127(pRestore);
	char bFlag;
	pRestore->vfunc17(&bFlag, 1, 0);
	if (bFlag) {
		pRestore->vfunc15((int *)((char *)this + 0x6310), 1, 0);
		pRestore->vfunc15((int *)((char *)this + 0x6314), 1, 0);
	}
	sub_1009d960((float *)((char *)this + 0x607c), 3);
	sub_1009d960((float *)((char *)this + 0x6084), 2);
	sub_1009d960((float *)((char *)this + 0x6274), 2);
	sub_1009d960((float *)((char *)this + 0x62cc), 3);
	sub_1009d960((float *)((char *)this + 0x62d0), 3);
	sub_1009d960((float *)((char *)this + 0x62d4), 3);
	sub_1009d960((float *)((char *)this + 0x632c), 3);
	sub_1009d960((float *)((char *)this + 0x63d4), 2);
	sub_1009d960((float *)((char *)this + 0x63dc), 2);
	sub_1009d960((float *)((char *)this + 0x6458), 4);
	sub_1009d960((float *)((char *)this + 0x657c), 4);
	((CTimerSub *)((char *)this + 0x60b0))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x60dc))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6108))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6134))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6160))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x618c))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x61b8))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x61e4))->sub_101b9860();
	((CTimerSub *)((char *)this + 0x6210))->sub_101b9860();
	return result;
}
// END FUNCTION

// FUNCTION: 0x102998c0 size=0x15a
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "engineiface.h"
#include "globalvars.h"
#include "CAI_NodeGraph.h"
struct SNPCTroikaRef_t;
int __cdecl sub_102db5e0(void *p);
void __stdcall sub_1029f5d0(SNPCTroikaRef_t *p);
char __stdcall sub_1029f610(void *p);
extern char g_106b8540[];

class CAINodeView { public: char *sub_102f96e0(int n); };
struct SNetOwner { char pad[0x2c]; CAI_NodeGraph *pNet; };
struct SNameView { char pad[0x65e0]; const char *psz65e0; int n65e4; int sub_1029f340(const char *p); };
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CAI_BaseNPCTroika::vfunc130(int a)
{
	if (!sub_1029f610(&m_ref658c)) sub_1029f5d0((SNPCTroikaRef_t *)&m_ref658c);
	if (!sub_1029f610(&m_ref6594)) sub_1029f5d0((SNPCTroikaRef_t *)&m_ref6594);
	CAI_BaseNPC::vfunc130(a);
	m_p62ec = (CBaseEntity *)sub_102db5e0(this);
	if (m_n6310 != -1 && m_n6314 != -1) {
		CAI_NodeGraph *pNet = ((SNetOwner *)m_p5d34)->pNet;
		int idx = m_n6310;
		CAI_Node *pNode;
		if (idx >= 0 && idx < pNet->m_nNodes) {
			pNode = pNet->m_ppNodes[idx];
		} else {
			g_106c994c++;
			pNode = 0;
		}
		if (pNode)
			m_p630c = ((CAINodeView *)pNode)->sub_102f96e0(m_n6314);
	}
	m_f6440 = enginerandom->vfunc1(2.0f, 2.5f) + gpGlobals->curtime;
	m_p6444 = 0;
	sub_102c44e0(STRINGR(m_psz6478));
	sub_102c4680(STRINGR(m_psz6480));
	SNameView *v = (SNameView *)this;
	v->n65e4 = v->sub_1029f340(STRINGR(v->psz65e0));
	m_b62e9 = 1;
	sub_10299a80();
	if (sub_100b5190()) {
		sub_100ac4e0(0, 0, 0);
		((CBaseEntity *)this)->m_flNextThink = 3.4028235e38f;
	}
	vfunc593();
}
// END FUNCTION

// FUNCTION: 0x10299d80 size=0x6
int sub_10299d80(void)
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x10299da0 size=0x21d
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
struct Troika404View { char pad[0x98]; CAI_BaseNPCTroika *p98; CAI_BaseNPCTroika *p9c; };

int CAI_BaseNPCTroika::vfunc404(CBaseEntity *pOther)
{
	if (pOther == (CBaseEntity *)this)
		return 0;
	if (!pOther)
		return 0;
	CAI_BaseNPCTroika *pOwner = ((Troika404View *)pOther)->p9c;
	if (pOwner && (pOwner->m_flags14bc & 0x20000) == 0x20000 && m_h628c.Get()) {
		if (vfunc404(m_h628c.Get()) == 1 || vfunc168() == m_h628c.Get())
			return 1;
	}
	CAI_BaseNPCTroika *p98 = ((Troika404View *)pOther)->p98;
	if (p98) {
		CBaseEntity *pEnt = p98->m_h647c.Get();
		if (pEnt) {
			if (vfunc404(pEnt) == 1 || vfunc168() == pEnt)
				return 1;
		}
	}
	CBaseEntity *pFollow = m_h647c.Get();
	if (pFollow) {
		CAI_BaseNPCTroika *pFollowOwner = ((Troika404View *)pFollow)->p9c;
		if (pFollowOwner) {
			if (pFollowOwner == (CAI_BaseNPCTroika *)pOther)
				return 3;
			int r = pFollowOwner->vfunc404(pOther);
			if (r == 1 || (CBaseEntity *)pFollowOwner->vfunc167() == pOther)
				return 1;
			if (pOwner) {
				r = pOwner->vfunc404((CBaseEntity *)pFollowOwner);
				if (r == 1 || pOwner->vfunc168() == (CBaseEntity *)pFollowOwner)
					return 1;
			}
			return r;
		}
	}
	return sub_10013016(pOther);
}
// END FUNCTION

// FUNCTION: 0x1029a050 size=0x8
#include "CAI_BaseNPCTroika.h"
#include "CAI_BaseNPC.h"

char CAI_BaseNPCTroika::sub_1029a050()
{
	unsigned char result = ((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc337();
	result |= 1;
	return result;
}
// END FUNCTION

// FUNCTION: 0x1029a070 size=0x30
#include "CAI_BaseNPCTroika.h"
int CAI_BaseNPCTroika::vfunc593()
{
    *(int *)((char *)this + 0x655c) = 0x3dcccccd;
    *(int *)((char *)this + 0x6560) = 0x3f800000;
    *(int *)((char *)this + 0x6564) = 0x42480000;
    *(int *)((char *)this + 0x6568) = 0x42480000;
    *(int *)((char *)this + 0x656c) = 0x3c23d70a;
    return 0x42480000;
}
// END FUNCTION

// FUNCTION: 0x1029a8b0 size=0x51
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
extern char g_106b8540[];
void sub_1000f4e8();
float __fastcall sub_10293a80(CAI_BaseNPCTroika *p);

// TARGET: CAI_BaseNPCTroika::vfunc422
void CAI_BaseNPCTroika::vfunc422()
{
	CAI_BaseNPC::vfunc422();
	sub_100ac4e0((int)sub_1000f4e8, 0, 0);
	sub_102c44e0(m_psz6478 ? m_psz6478 : g_106b8540);
	sub_102c4680(*(const char **)((char *)this + 0x6480) ? *(const char **)((char *)this + 0x6480) : g_106b8540);
	sub_10293a80(this);
}
// END FUNCTION

// FUNCTION: 0x1029aa10 size=0x2df
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1028fb70.h"
#include "globalvars.h"

extern "C" int _strcmpi(const char *s1, const char *s2);
extern "C" int atoi(const char *s);
extern "C" double atof(const char *s);
extern void (*g_109f3650)(int level, const char *pMsg, ...);
extern void (*g_109f366c)(const char *pMsg, ...);

class CUnknown1028fc90
{
public:
	int sub_1028fc90();
};

void CAI_BaseNPCTroika::vfunc585(const char *pszName, const char *pszValue)
{
	CUnknown1028fb70 *pView = (CUnknown1028fb70 *)this;
	int nCmp = _strcmpi(pszName, "CAPABILITIES");
	void (*pfnDevMsg)(int level, const char *pMsg, ...) = g_109f3650;
	if (!nCmp)
	{
		pfnDevMsg(2, "Maybe this should be in a func/input SetCapability!\n");
	}
	else if (!_strcmpi(pszName, "GOALS"))
	{
		pfnDevMsg(2, "Hey foo!  You need to implement some goals!\n");
	}
	else
	{
		if (!_strcmpi(pszName, "NPCPERCEPTION"))
		{
			int n = atoi(pszValue);
			void (*pfnError)(const char *pMsg, ...) = g_109f366c;
			pView->m_nLevel = n;
			if (n < 1)
			{
				pfnError("ProcessTweakParam:  %s - You specified an invalid NPCPERCEPTION parameter (%d).  Must be between 1 and %d\n", pView->sub_100ab4f0(), n, 10);
				pView->m_nLevel = 1;
			}
			if (pView->m_nLevel > 10)
			{
				pfnError("ProcessTweakParam:  %s - You specified an invalid NPCPERCEPTION parameter (%d).  Must be between 1 and %d\n", pView->sub_100ab4f0(), pView->m_nLevel, 10);
				pView->m_nLevel = 10;
			}
			pView->sub_1028fb70();
			((CUnknown1028fc90 *)this)->sub_1028fc90();
			return;
		}
		else if (!_strcmpi(pszName, "VISION"))
		{
			pView->m_flVisionOverride = atof(pszValue);
			if (pView->m_flVisionOverride < 0.0f && pView->m_flVisionOverride != -1.0f)
			{
				g_109f366c("ProcessTweakParam:  %s - You specified a negative VISION parameter.  NPCs are not allowed to view their inner-selves.\n", pView->sub_100ab4f0());
			}
		}
		else if (!_strcmpi(pszName, "HEARING"))
		{
			pView->m_flHearingOverride = atof(pszValue);
			if (pView->m_flHearingOverride < 0.0f && pView->m_flHearingOverride != -1.0f)
			{
				g_109f366c("ProcessTweakParam:  %s - You specified a negative HEARING parameter.  Inside of your ears there are drums.\n", pView->sub_100ab4f0());
			}
		}
		else
		{
			if (!_strcmpi(pszName, "SQUAD"))
			{
				sub_1029a930(pszValue);
				return;
			}
			if (!_strcmpi(pszName, "IPGROUPS"))
			{
				sub_10298910(pszValue);
				return;
			}
			if (!_strcmpi(pszName, "HINTGROUPS"))
			{
				sub_102989e0(pszValue);
				return;
			}
			if (!_strcmpi(pszName, "TPMOVETIMER"))
			{
				*(float *)((char *)this + 0x65dc) = atof(pszValue) + gpGlobals->curtime;
				return;
			}
			if (!_strcmpi(pszName, "IGNOREATTACK"))
			{
				*(bool *)((char *)this + 0x65f5) = atoi(pszValue) != 0;
				return;
			}
			if (!_strcmpi(pszName, "NOALERTSTATE"))
			{
				*(bool *)((char *)this + 0x65f6) = atoi(pszValue) != 0;
				return;
			}
			goto ignored;
		}
		pView->sub_1028fb70();
		((CUnknown1028fc90 *)this)->sub_1028fc90();
		return;
	}
ignored:
	pfnDevMsg(2, "ProcessTweakParam(%s, %s) ignored by base class.\n", pszName, pszValue);
}
// END FUNCTION

// FUNCTION: 0x1029adb0 size=0x19a
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027d990.h"
#include "CEHandleGet.h"

struct CTroikaMotor448 {
	char m_pad00[0x28];
	char m_b28;
	void sub_102e0a60(float f);
};

struct CTroikaTarget448 {
	char m_pad0000[0x788];
	char m_b788;
};

struct CTroikaSlot15 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void slot15(float *pOut);
};

struct CTroika448Vec {
	float x, y, z;
};

struct CTroika448Bits {
	unsigned int b0 : 1; unsigned int b1 : 1; unsigned int b2 : 1; unsigned int b3 : 1;
	unsigned int b4 : 1; unsigned int b5 : 1; unsigned int b6 : 1; unsigned int b7 : 1;
	unsigned int b8 : 1; unsigned int b9 : 1; unsigned int b10 : 1; unsigned int b11 : 1;
	unsigned int b12 : 1; unsigned int b13 : 1; unsigned int b14 : 1; unsigned int b15 : 1;
	unsigned int b16 : 1; unsigned int b17 : 1; unsigned int b18 : 1; unsigned int b19 : 1;
	unsigned int b20 : 1; unsigned int b21 : 1; unsigned int b22 : 1; unsigned int b23 : 1;
	unsigned int b24 : 1; unsigned int b25 : 1; unsigned int b26 : 1; unsigned int b27 : 1;
	unsigned int b28 : 1; unsigned int b29 : 1; unsigned int b30 : 1; unsigned int b31 : 1;
};

struct CTroika448View {
	char m_pad0000[0x14b8];
	CTroika448Bits m_bits14b8;
	CTroika448Bits m_bits14bc;
	char m_pad14c0[0x5d44 - 0x14c0];
	CTroikaMotor448 *m_pMotor;
	char m_pad5d48[0x5d8c - 0x5d48];
	CTroika448Bits m_bits5d8c;
	char m_pad5d90[0x6240 - 0x5d90];
	CBaseHandle m_h6240;
	float m_f6244;
	float m_f6248;
	float m_f624c;
	float m_f6250;
	char m_pad6254[0x6300 - 0x6254];
	int m_n6300;
	char m_pad6304[0x631c - 0x6304];
	int m_n631c;
	int m_n6320;
	int m_n6324;
	int m_n6328;
	int m_n632c;
	char m_pad6330[0x63e0 - 0x6330];
	char m_b63e0;
	char m_pad63e1[0x63ec - 0x63e1];
	int m_n63ec;
	char m_pad63f0[0x643c - 0x63f0];
	CBaseHandle m_h643c;
	char m_pad6440[0x659c - 0x6440];
	int m_n659c;
	char m_b65a0;
	char m_pad65a1[0x65d0 - 0x65a1];
	CTroika448Vec m_vec65d0;
};

void CAI_BaseNPCTroika::vfunc448(int a)
{
	CTroika448View *p = (CTroika448View *)this;
	sub_102b53d0(1, "Leaving interesting place (TaskFail)");
	if (((CUnknown1027d990 *)this)->sub_1027d990() != 3 && ((CUnknown1027d990 *)this)->sub_1027d990() != 1)
		p->m_bits14b8.b3 = 0;
	p->m_pMotor->sub_102e0a60(180.0f);
	p->m_n63ec = 0;
	p->m_f6244 = gpGlobals->curtime;
	p->m_f6248 = gpGlobals->curtime;
	p->m_f6250 = gpGlobals->curtime;
	p->m_f624c = gpGlobals->curtime;
	p->m_n6320 = 0;
	p->m_n6324 = 0;
	p->m_n6328 = 0;
	p->m_n632c = 0;
	p->m_h6240 = (IHandleEntity *)0;
	CGlobalEntityList *pList = g_10566458;
	CBaseEntity *pEnt = pList->sub_100290c0((unsigned int *)&p->m_h643c);
	if (pEnt) {
		((CTroikaTarget448 *)pList->sub_100290c0((unsigned int *)&p->m_h643c))->m_b788 = 0;
		p->m_h643c = (IHandleEntity *)0;
	}
	if (p->m_bits5d8c.b13)
		p->m_bits5d8c.b13 = 0;
	p->m_bits5d8c.b28 = 0;
	p->m_bits5d8c.b29 = 0;
	p->m_bits5d8c.b30 = 0;
	p->m_bits5d8c.b31 = 0;
	p->m_bits14b8.b0 = 0;
	p->m_bits14b8.b1 = 0;
	p->m_bits14b8.b2 = 0;
	p->m_bits14b8.b7 = 0;
	p->m_bits14b8.b9 = 0;
	p->m_bits14b8.b10 = 0;
	p->m_bits14b8.b11 = 0;
	p->m_bits14b8.b12 = 0;
	p->m_bits14b8.b13 = 0;
	p->m_bits14b8.b14 = 0;
	p->m_bits14b8.b15 = 0;
	p->m_bits14b8.b16 = 0;
	p->m_bits14b8.b17 = 0;
	p->m_bits14b8.b19 = 0;
	p->m_bits14b8.b26 = 0;
	p->m_bits14b8.b27 = 0;
	p->m_bits14b8.b28 = 0;
	p->m_bits14b8.b30 = 0;
	p->m_bits14bc.b4 = 0;
	p->m_bits14bc.b5 = 0;
	p->m_bits14bc.b7 = 0;
	p->m_bits14bc.b8 = 0;
	p->m_bits14bc.b10 = 0;
	p->m_bits14bc.b11 = 0;
	p->m_bits14bc.b12 = 0;
	p->m_bits14bc.b31 = 0;
	if (p->m_bits14bc.b0 == 1) {
		CTroika448Vec *pVec = &p->m_vec65d0;
		((CTroikaSlot15 *)this)->slot15(&pVec->x);
		pVec->x = -1.0f;
		pVec->y = -1.0f;
		pVec->z = -1.0f;
		p->m_bits14bc.b0 = 0;
		p->m_bits14bc.b31 = 0;
	}
	p->m_b63e0 = 0;
	sub_10295ab0(5.0f);
	p->m_pMotor->m_b28 = 0;
	p->m_n6300 = 0;
	p->m_n659c = 0;
	p->m_b65a0 = 0;
	CAI_BaseNPC::vfunc448(a);
}
// END FUNCTION

// FUNCTION: 0x1029afc0 size=0x15f
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"
#include "CEHandleGet.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))
#define ENTF(type, p, off) (*(type *)((char *)(p) + (off)))

// TARGET: CAI_BaseNPCTroika::vfunc68
bool CAI_BaseNPCTroika::vfunc68(void *pOther)
{
	if (!NPCF(char, 0x63da))
	{
		if ((NPCF(unsigned int, 0x14b8) & 0x40) == 0x40)
		{
			if (ENTF(int, pOther, 0x94))
				return true;
			if (ENTF(int, pOther, 0xa8))
				return true;
		}
		else
		{
			void *p = (void *)ENTF(int, pOther, 0x98);
			if (p && (ENTF(unsigned int, p, 0x14b8) & 0x20000))
				return true;
		}
	}
	if (pOther == EHandle_Get(NPCF(unsigned int, 0x643c)))
		return true;
	if (ENTF(int, pOther, 0xa0))
		return true;
	void *q = (void *)NPCF(int, 0x5ddc);
	if (q)
	{
		int id = ENTF(int, q, 0x5dc);
		if (id >= 0x283c && id <= 0x283d && (ENTF(unsigned char, pOther, 0x4c) & 0x14))
			return true;
	}
	if ((unsigned char)(ENTF(unsigned int, pOther, 0x4c) >> 1) & 1)
		return true;
	if (EHandle_Get(NPCF(unsigned int, 0x1538)) && NPCF(int, 0x153c) != -1)
	{
		if (EHandle_Get(NPCF(unsigned int, 0x1538)) == pOther)
			return true;
	}
	return ((CBaseAnimating *)this)->sub_1008be20((CBaseEntity *)pOther);
}
// END FUNCTION

// FUNCTION: 0x1029b180 size=0xce
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"

extern char *g_10566458;

struct SOtherNpc { char pad[0x14b8]; unsigned int flags; };
struct SOther {
    char pad0[0x4c];
    unsigned char b4c;
    char pad1[0x94 - 0x4d];
    int m94;
    SOtherNpc *m98;
    char pad2[4];
    int ma0;
    char pad3[4];
    int ma8;
};
struct SHandleEntry { SOther *pEnt; unsigned int serial; };
struct STroikaView {
    char pad0[0x14b8];
    unsigned int flags14b8;
    char pad1[0x63da - 0x14bc];
    char b63da;
    char pad2[0x643c - 0x63db];
    unsigned int h643c;
    char pad3[0x65f7 - 0x6440];
    char b65f7;
};

bool CAI_BaseNPCTroika::sub_1029b180(void *pOtherArg)
{
    STroikaView *t = (STroikaView *)this;
    SOther *pOther = (SOther *)pOtherArg;
    if (!t->b63da) {
        if ((t->flags14b8 & 0x40) == 0x40) {
            if (pOther->m94)
                return true;
            if (pOther->ma8)
                return true;
        } else {
            if (pOther->m98 && (pOther->m98->flags & 0x20000))
                return true;
        }
    }
    unsigned int h = t->h643c;
    SOther *pHandled;
    if (h == 0xffffffff) {
        pHandled = 0;
    } else {
        SHandleEntry *e = (SHandleEntry *)(g_10566458 + 4 + (h & 0x1fff) * 12);
        pHandled = e->serial == (h >> 13) ? e->pEnt : 0;
    }
    if (pOther == pHandled)
        return true;
    if (pOther->ma0)
        return true;
    if (t->b65f7) {
        if (pOther->b4c & 0x16)
            return true;
    } else {
        if (pOther->b4c & 0x12)
            return true;
    }
    return ((CBaseAnimating *)this)->sub_1008be20((CBaseEntity *)pOther);
}
// END FUNCTION

// FUNCTION: 0x1029b290 size=0x724
#include "CAI_BaseNPCTroika.h"
#include "animevent_t.h"
#include "CBaseCombatWeapon.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "CEntitySoundOriginView.h"
#include "engineserver.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Tier1.h"
#include "CRecipientFilter.h"
#include "CPASAttenuationFilter.h"
#include "CVDmg_t.h"
#include "CVStatList_t.h"
#include <stdio.h>

struct CAnimEdictView
{
	char m_pad0000[0x2e0];
	int m_pEdict2e0;
	char m_pad02e4[0x6f0 - 0x2e4];
	int m_n6f0;
	char m_pad06f4[4];
	float m_fl6f8;
};

struct CAnimCharCall
{
	void sub_10106580(const char *psz, int a, float b, float c, float d, float e);
	char sub_10336920();	// IsMale
};

struct CHEInfo
{
	char m_data[0x4c];
	void sub_101c26d0(void *pA, void *pB, float f, int a, int b, void *pDmg, int c);
	void sub_101c2a90(int a);
};

struct CHEFileSystem
{
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
	virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8();
	virtual bool FileExists(const char *pszName, const char *pszPathID);	// slot 9
};
extern CHEFileSystem *g_1070b238;

#define HV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HV100(p) HV10(p##0) HV10(p##1) HV10(p##2) HV10(p##3) HV10(p##4) HV10(p##5) HV10(p##6) HV10(p##7) HV10(p##8) HV10(p##9)

struct CHESlots
{
	HV100(a) HV100(b) HV100(c) HV100(d)
	virtual void e0(); virtual void e1(); virtual void e2();
	virtual void vfunc403();
};

const char *sub_101d3730(const char *pszFormat, ...);
extern "C" int __cdecl atexit(void (__cdecl *)(void));
extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
__forceinline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++) {
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.CVStatList_t::CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}
static inline const float *HEVecPtr(const Vector &v) { return &v.x; }

void CAI_BaseNPCTroika::vfunc259(animevent_t *pEvent)
{
	int *pTask = sub_1028a150();
	switch (pEvent->event)
	{
	case 0x7e5:
		sub_10293d70();
		return;
	case 0x7f8:
	{
		CBaseCombatWeapon *pWeapon = dynamic_cast<CBaseCombatWeapon *>((CBaseEntity *)EHandle_Get(*(unsigned int *)((char *)this + 0x5ce4)));
		if (pWeapon)
		{
			if (pWeapon->sub_102521f0())
			{
				vfunc448((int)"Weapon in use by someone else");
				return;
			}
			if (!vfunc382(pWeapon))
			{
				vfunc448((int)"Can't use this weapon type");
				return;
			}
			vfunc383(pWeapon, 0);
			sub_10273e80(0);
			return;
		}
		vfunc448((int)"Weapon stolen by someone else");
		return;
	}
	case 0x7d5:
	{
		const char *pszSample = pEvent->options;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int ed = ((CAnimEdictView *)this)->m_pEdict2e0;
		int entindex = engine->vfunc35(ed);
		enginesound->vfunc2(&filter, entindex, 0, pszSample, 1.0f, 0x42, 0, 100,
			(const float *)&((CEntitySoundOriginView *)this)->GetSoundEmissionOrigin(), 0, 1, 0);
		return;
	}
	case 0x1038:
	case 0x1039:
	{
		if (!pTask || *pTask != 0xb4)
			return;
		int nChannel = (pEvent->event == 0x1038) ? 4 : 2;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int ed = ((CAnimEdictView *)this)->m_pEdict2e0;
		int entindex = engine->vfunc35(ed);
		enginesound->vfunc11(&filter, entindex, nChannel, 0, 0, 0x24, 100,
			(const float *)&((CEntitySoundOriginView *)this)->GetSoundEmissionOrigin(), 0, 1, 0);
		return;
	}
	case 0x1036:
	case 0x1037:
	case 0x103a:
	case 0x103b:
	{
		if (!pTask || *pTask != 0xb4)
			return;
		const char *pszGender = ((CAnimCharCall *)this)->sub_10336920() ? "male" : "female";
		const char *pszSample;
		if (g_1070b238->FileExists(sub_101d3730("sound/Interesting_places/%s/%s.wav", pszGender, pEvent->options), 0))
			pszSample = sub_101d3730("Interesting_places/%s/%s.wav", pszGender, pEvent->options);
		else
			pszSample = sub_101d3730("Interesting_places/%s.wav", pEvent->options);
		int nChannel = (pEvent->event == 0x1036 || pEvent->event == 0x103a) ? 4 : 2;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int ed = ((CAnimEdictView *)this)->m_pEdict2e0;
		int entindex = engine->vfunc35(ed);
		enginesound->vfunc2(&filter, entindex, nChannel, pszSample, 1.0f, 0x42, 0x180, 100,
			(const float *)&((CEntitySoundOriginView *)this)->GetSoundEmissionOrigin(), 0, 1, 0);
		return;
	}
	case 0x7d6:
	{
		CVDmg_t dmg;
		dmg.sub_101fa960((CVDmgSource_t *)this);
		dmg.m_field04 = 1;
		dmg.m_field0c = 1;
		CHEInfo info;
		info.sub_101c26d0(0, EHandle_Get(*(unsigned int *)((char *)this + 0x628c)), 1.0f, 0, 0, &dmg, -1);
		info.sub_101c2a90(1);
		FindStatList(CVStatListSet::Of(this), 0)->sub_10200a70(0xf, 0x11);
		vfunc144((int)&info);
		((CHESlots *)this)->vfunc403();
		dmg.sub_101fa680();
		return;
	}
	case 0x80c:
	{
		float fRate = 1.0f, fMin = 0.2f, fMax = 0.2f, fExtra;
		char szName[0x40];
		if (sscanf(pEvent->options, "%s %f %f %f", szName, &fRate, &fMin, &fMax) <= 1)
			return;
		if (!(fRate > 0.0f))
			return;
		if (fMin + fMax > fRate)
		{
			float t = fRate / (fMin + fMax);
			fMin *= t;
			fMax *= t;
		}
		float x = fRate - (fMin + fMax);
		if (x > 0.0f)
			fExtra = x;
		else
			fExtra = 0.0f;
		((CAnimCharCall *)this)->sub_10106580(szName, 0, fMin, fExtra, fMax, 1.0f);
		return;
	}
	case 0x80d:
	{
		if (pEvent->options == 0 || pEvent->options[0] == 0)
			return;
		CAnimEdictView *pView = (CAnimEdictView *)this;
		float fDur = sub_10091080(pView->m_n6f0) * pView->m_fl6f8 + 0.1;
		((CAnimCharCall *)this)->sub_10106580(pEvent->options, 0, 0, fDur, 0, 1.0f);
		return;
	}
	}
	CAI_BaseNPC::vfunc259(pEvent);
}
// END FUNCTION

// FUNCTION: 0x1029c010 size=0x39d
#include "CAI_BaseNPCTroika.h"
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "ehandle.h"
#include "engineserver.h"
#include "globalvars.h"

void sub_10119750(const char *fmt, ...);
void *__cdecl sub_100c7480(void *hdr, int idx);

struct CSceneObj76 { float sub_1007dfa0(); };
struct CExprEvent76 { float sub_10076280(float f); };
struct CExprRec76
{
	int m_nIndex;
	char pad[0x14];
	CSceneObj76 *m_pScene;
	CExprEvent76 *m_pEvent;
};
struct CExprEntry76 { char pad[0x18c]; unsigned char m_flags; };
struct CExprTable76 { CExprEntry76 *sub_101051b0(int index); };
struct CDispTable76 { const char *sub_100ec410(int idx); int sub_100eccf0(int idx); };
extern CDispTable76 g_10924980;
extern CExprTable76 g_10709200;
struct CSceneEnt76 { char pad[0x4bc]; CSceneObj76 *m_pScene; };
struct CLookEnt76 { char pad[0x2e0]; int m_pEdict; const char *sub_100ab4f0(); };
struct CNpcView76 { float sub_10106e20(float t, CExprRec76 *pRec); void sub_102775e0(); };

#define AT76(T, off) (*(T *)((char *)this + (off)))

// TARGET: CAI_BaseNPCTroika::sub_1029c010
void CAI_BaseNPCTroika::sub_1029c010()
{
	if (AT76(int, 0x128)) {
		const char *pExprName;
		if (((CBaseCombatCharacter *)this)->sub_10106f90(AT76(int, 0x10b4)))
			pExprName = (const char *)((CBaseCombatCharacter *)this)->sub_101073c0(AT76(int, 0x10b4));
		else
			pExprName = "None";
		void *pHdr = sub_100952d0(-1);
		sub_10119750("Expression / Gesture information for %s:", sub_100ab4f0());
		int *pSeqA = (int *)((CBaseAnimating *)this)->sub_1008d990(AT76(int, 0x6f0));
		int *pSeqB = (int *)((CBaseAnimating *)this)->sub_1008d990(AT76(int, 0x6f0));
		sub_10119750("Seq (%.2f): %s / %s ", (double)AT76(float, 0x6f8), (char *)pSeqB + *pSeqB, (char *)pSeqA + pSeqA[1]);
		sub_10119750("Disposition:  %s,  Expression: %s (%.2f)", g_10924980.sub_100ec410(m_nCurrDisposition), pExprName, (double)((CBaseCombatCharacter *)this)->m_flDefExpressionIntensity);
		if (AT76(EHANDLE, 0x6554).Get()) {
			CSceneEnt76 *pScene = (CSceneEnt76 *)AT76(EHANDLE, 0x6554).Get();
			if (pScene->m_pScene)
				sub_10119750("Scene time: %.2f", (double)pScene->m_pScene->sub_1007dfa0());
			else
				sub_10119750("No Scene");
		} else
			sub_10119750("No Scene Entity");
		for (int i = 0; i < AT76(int, 0x10c8); i++) {
			CExprRec76 *pRec = (CExprRec76 *)(AT76(char *, 0x10bc) + i * 0x20);
			float flLevel;
			if (pRec->m_pEvent && pRec->m_pScene)
				flLevel = pRec->m_pEvent->sub_10076280(pRec->m_pScene->sub_1007dfa0());
			else
				flLevel = ((CNpcView76 *)this)->sub_10106e20(gpGlobals->curtime, pRec);
			CExprEntry76 *pEntry = g_10709200.sub_101051b0(pRec->m_nIndex);
			if (pEntry) {
				if (pEntry->m_flags & 1)
					sub_10119750("Expression:(O) %s level: %0.2f", pEntry, (double)flLevel);
				else
					sub_10119750("Expression:(N) %s level: %0.2f", pEntry, (double)flLevel);
			}
		}
		for (int j = 0; j < 4; j++) {
			float flWeight = AT76(float, 0x748 + j * 0x30);
			if (flWeight > 0.0f) {
				int *pName = (int *)sub_100c7480(pHdr, AT76(int, 0x73c + j * 0x30));
				sub_10119750("Anim Layer %d: %s (weight: %f)", j, (char *)pName + *pName, (double)AT76(float, 0x748 + j * 0x30));
			}
		}
		int nDefault = g_10924980.sub_100eccf0(m_nCurrDisposition);
		sub_10119750("Eye targets -  current: %d  default: %d  step: %d", AT76(int, 0x5b94), nDefault, AT76(int, 0x6578));
		if (AT76(EHANDLE, 0xe64).Get()) {
			CLookEnt76 *pLook = (CLookEnt76 *)AT76(EHANDLE, 0xe64).Get();
			CLookEnt76 *pLook2 = (CLookEnt76 *)AT76(EHANDLE, 0xe64).Get();
			int nEdict = pLook2->m_pEdict;
			int nIndex = engine->vfunc35(nEdict);
			sub_10119750("Looking at entity %d (%s)", nIndex, pLook->sub_100ab4f0());
		}
		if (AT76(char, 0x64ec))
			sub_10119750("Qued Dialog: %s", &AT76(char, 0x64ec));
		float flTalk = m_f64cc - gpGlobals->curtime;
		if (0.0f > flTalk)
			flTalk = 0.0f;
		sub_10119750("Talk Time Remaining: %.2f", (double)flTalk);
	} else
		((CNpcView76 *)this)->sub_102775e0();
}
// END FUNCTION

// FUNCTION: 0x1029ca50 size=0x864
#include "CNPC_VTzimisce.h"
#include "CAI_BaseNPCTroika.h"
#include "DebugOverlay.h"
#include "ConVar.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

extern ConVar g_10924f20;
extern CGlobalEntityList g_106eb5d8;
extern Vector g_1070d1b0;

void sub_10144cd0(const Vector *pOrg, const Vector *pAng, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, int dur);
void sub_10142b80(const Vector &org, const Vector &mins, const Vector &maxs, const Vector &ang, int r, int g, int b, int a, float dur);
void sub_10142aa0(const Vector *pOrg, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, float dur);
void sub_10142af0(const Vector &org, const Vector &mins, const Vector &maxs, const Vector &dir, int r, int g, int b, int a, float dur);
void sub_10144a30(const Vector *pOrg, const Vector &dir, float flRadius, float flHeight, int r, int g, int b, int a, int dur);
void sub_101d2f40(Vector *pOut, float flYaw);
const Vector *sub_102d6100(int hull);
const Vector *sub_102d6120(int hull);

struct ICollView
{
	virtual void s0();
	virtual const Vector &WorldAlignMins();
	virtual const Vector &WorldAlignMaxs();
};

struct CSlot29View
{
	EVS10(0) EVS10(1)
	EVS(20) EVS(21) EVS(22) EVS(23) EVS(24) EVS(25) EVS(26) EVS(27) EVS(28)
	virtual float slot29();
};

#define V100(q) EVS10(q##0) EVS10(q##1) EVS10(q##2) EVS10(q##3) EVS10(q##4) EVS10(q##5) EVS10(q##6) EVS10(q##7) EVS10(q##8) EVS10(q##9)
struct CDbgSlots
{
	V100(0)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15)
	EVS(160) EVS(161) EVS(162) EVS(163) EVS(164) EVS(165) EVS(166)
	virtual CBaseEntity *slot167();
	EVS(168) EVS(169)
	EVS10(17) EVS10(18)
	EVS(190) EVS(191)
	virtual Vector slot192();
	EVS(193) EVS(194) EVS(195) EVS(196)
	virtual Vector slot197(const Vector &posSrc, char bNoisy, int c);
	EVS(198) EVS(199)
	EVS10(20) EVS10(21)
	virtual const Vector *slot220();
	EVS(221) EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	V100(3)
	EVS(400) EVS(401) EVS(402) EVS(403)
	virtual int slot404(CBaseEntity *pEnt);
	virtual int slot405(CBaseEntity *pEnt);
};

struct CHintView
{
	float sub_102d12e0();
};

struct CDbgFields
{
	char m_pad0[0x50];
	Vector m_vecOrigin;	// 0x50
	char m_pad5c[0x224 - 0x5c];
	int m_debugOverlays;	// 0x224
	char m_pad228[0x1568 - 0x228];
	int m_n1568;
	int m_n156c;
	int m_n1570;
	float m_f1574;
	char m_pad1578[0x5d60 - 0x1578];
	Vector m_v5d60;
	char m_pad5d6c[0x5ddc - 0x5d6c];
	CHintView *m_pHint;	// 0x5ddc
	char m_pad5de0[0x6290 - 0x5de0];
	Vector m_v6290;
	char m_pad629c[0x63fd - 0x629c];
	char m_b63fd;
	char m_pad63fe[0x6658 - 0x63fe];
	char m_b6658;
};

struct CHintFields
{
	char m_pad0[0x454];
	float m_flYaw;
	char m_pad458[0x5dc - 0x458];
	int m_nType;
};

struct CBaseNPCView
{
	void sub_10275760();
};

#define W(off) (*(float *)((char *)sub_1032e7b0() + (off)))

namespace block_1029ca50 {
struct CUnk1029c9f0
{
	char pad0000[0x1c70];
	float m_1c70;
};
#pragma auto_inline(off)
struct CTroikaDbgUnit : CAI_BaseNPCTroika
{
	float sub_1029c9f0(float f, CBaseEntity *p);
	float sub_1029ca30(float f);
};
float CTroikaDbgUnit::sub_1029c9f0(float f, CBaseEntity *p)
{
	float r = f * ((CUnk1029c9f0 *)p)->m_1c70;
	if (0.0f > r)
		r = 0.0f;
	return r;
}
float CTroikaDbgUnit::sub_1029ca30(float f)
{
	return f * 0.7f;
}
#pragma auto_inline(on)
}
using namespace block_1029ca50;

#define MAXF(a, b) (((a) > (b)) ? (a) : (b))
#define MINF(a, b) (((a) < (b)) ? (a) : (b))

inline CBaseEntity *NextNPCInSphere(CBaseEntity *pStart, Vector *pCenter)
{
	CBaseEntity *pEnt = g_106eb5d8.sub_100f8490(pStart, 0x820, pCenter, 4096.0f);
	return pEnt ? (CBaseEntity *)pEnt->m_p9c : 0;
}
__forceinline void AddIn(const Vector &a, const Vector &b, Vector &r) { r.x = a[0] + b.x; r.y = a.y + b.y; r.z = a.z + b.z; }
struct VecAddM : Vector { Vector Add(const Vector &v) const { Vector res; AddIn(*this, v, res); return res; } };
inline void HullMinsTo(int h, Vector &v) { v = *sub_102d6100(h); }
inline void HullMaxsTo(int h, Vector &v) { v = *sub_102d6120(h); }
// TARGET: CAI_BaseNPCTroika::vfunc123
void CAI_BaseNPCTroika::vfunc123()
{
	CTroikaDbgUnit *pUnit = (CTroikaDbgUnit *)this;
	CDbgSlots *pSlots = (CDbgSlots *)this;
	CDbgFields *pF = (CDbgFields *)this;
	float fA, fMin, fYMax;
	if (pF->m_debugOverlays & 0x400000) {
		float flRange = sub_1029c970();
		float flCos = pF->m_f1574;
		sub_1029c4a0(flRange, flCos, 0, 0x40, 0xc0, 0x40, 0x32, 1);
		CBaseEntity *pTarget = m_h628c.Get();
		if (pTarget) {
			flRange = pUnit->sub_1029c9f0(flRange, pTarget);
			flCos = pF->m_f1574 / ((CSlot29View *)pTarget)->slot29();
			sub_1029c4a0(flRange, flCos, 2.0f, 0xc0, 0x40, 0, 0x64, 0);
		}
		sub_1029c4a0(pUnit->sub_1029ca30(flRange), flCos, 4.0f, 0xff, 0, 0x80, 0x96, 0);
	}
	if (pF->m_debugOverlays & 0x1000) {
		ICollView *pColl = (ICollView *)((char *)this + 0x270);
		Vector vecMins = pColl->WorldAlignMins();
		Vector vecMaxs = pColl->WorldAlignMaxs();
		if (vecMaxs != vecMins)
			sub_10144cd0((const Vector *)vfunc217(), &pF->m_v6290, vecMins, vecMaxs, 0x80, 0, 0, 0x28, 0);
		Vector vecBone;
		Vector angBone;
		((CBaseAnimating *)this)->sub_10092610((int)"Bip01", (int)&vecBone, (int)&angBone);
		sub_10142b80(vecBone, Vector(-10, -10, -10), Vector(10, 10, 10), angBone, 0x80, 0, 0, 0x28, 0);
		if (pF->m_vecOrigin != g_1070d1b0) {
			vecMins -= pF->m_vecOrigin;
			vecMaxs += pF->m_vecOrigin;
			sub_10142aa0((const Vector *)vfunc217(), vecMins, vecMaxs, 0xff, 0x80, 0, 0x14, 0);
		}
		if (pF->m_n1568 != pF->m_n156c) {
			HullMinsTo(pF->m_n156c, vecMins);
			HullMaxsTo(pF->m_n156c, vecMaxs);
			sub_10142aa0((const Vector *)vfunc217(), vecMins, vecMaxs, 0xff, 0xff, 0x40, 10, 0);
		}
	}
	if (pF->m_debugOverlays & 0x20000000) {
		if (sub_1032e7b0()) {
			fA = MAXF(W(0x8c0), W(0x8c4));
			fMin = MINF(W(0x8b8), W(0x8bc));
		} else {
			fA = 2000.0f;
			fMin = 0;
		}
		sub_10144a30(pSlots->slot220(), Vector(1, 0, 0), fMin, 32.0f, 0xff, 0xff, 0x20, 0x80, 0);
		sub_10144a30(pSlots->slot220(), Vector(1, 0, 0), fA, 32.0f, 0x80, 0x80, 0x10, 0x80, 0);
	}
	if (g_10924f20.GetInt()) {
		CBaseEntity *pEnemy = pSlots->slot167();
		if (pEnemy) {
			Vector vecSrc;
			for (int i = 0; i < 5; i++) {
				Vector vecPos = ((CDbgSlots *)pEnemy)->slot197(vecSrc, 1, 0);
				sub_10143b70(&vecPos, &Vector(-2, -2, -2), &Vector(2, 2, 2), 0xff, 0x20, 0x20, 1, 0.1f);
			}
		}
	}
	if (pF->m_pHint) {
		switch (((CHintFields *)pF->m_pHint)->m_nType) {
		case 0x27d8:
			if (pF->m_b63fd) {
				fA = 43.0f;
				fYMax = ((CHintFields *)pF->m_pHint)->m_flYaw;
				break;
			}
			fYMax = -43.0f;
			goto negmin;
		case 100:
		case 0x283d:
			fYMax = ((CHintFields *)pF->m_pHint)->m_flYaw;
			goto negmin;
		case 101:
		case 0x283c:
			fYMax = ((CHintFields *)pF->m_pHint)->m_flYaw;
		negmin:
			fA = -((CHintFields *)pF->m_pHint)->m_flYaw;
			break;
		default:
			goto skipHint;
		}
		{
			Vector vec1, vec2;
			sub_101d2f40(&vec1, pF->m_pHint->sub_102d12e0() + fA);
			sub_101d2f40(&vec2, pF->m_pHint->sub_102d12e0() + fYMax);
			Vector vecOrg = ((const VecAddM &)pF->m_v5d60).Add(*((CEntityVSlots *)pF->m_pHint)->slot217());
			sub_10142af0(vecOrg, Vector(0, 0, -10), Vector(200, 0, 10), vec1, 0xff, 0, 0, 0x32, 0);
			sub_10142af0(vecOrg, Vector(0, 0, -10), Vector(200, 0, 10), vec2, 0xff, 0, 0, 0x32, 0);
		}
	}
skipHint:
	if (pF->m_b6658) {
		Vector vecCenter = pSlots->slot192();
		CBaseEntity *pOther;
		for (pOther = NextNPCInSphere(0, &vecCenter); pOther; pOther = NextNPCInSphere(pOther, &vecCenter)) {
			if (pOther != (CBaseEntity *)this) {
				int r, g, b;
				switch (pSlots->slot404(pOther)) {
				case 1: r = 4; g = 1; b = 1; break;
				case 2: r = 4; g = 4; b = 1; break;
				case 3: r = 1; g = 4; b = 1; break;
				case 4: r = 1; g = 1; b = 4; break;
				default: r = 4; g = 0; b = 0; break;
				}
				int n = (pSlots->slot405(pOther) + 2) * 6;
				n = n > 63 ? 63 : (n < 0 ? 0 : n);
				sub_10142e90(&vecCenter, &((CDbgSlots *)pOther)->slot192(), n * r, n * g, n * b, 1, 0);
			}
		}
	}
	if (*(short *)&fA == -1) ((CBaseNPCView *)this)->sub_10275760(); else ((CBaseNPCView *)this)->sub_10275760();
}
// END FUNCTION

// FUNCTION: 0x1029d4e0 size=0xec0
#include "string_t.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CAI_BaseNPC.h"
#include "CAI_TroikaLink.h"
#include "CAI_BaseNPCTroika.h"
#include <string.h>
#include "Tier1.h"
#include "ehandle.h"
#include "globalvars.h"
#include "engineserver.h"

// TARGET: ?sub_1029d4e0@CAI_BaseNPCTroikaDbg@@QAEHXZ
extern char g_106b8540[];
__declspec(dllimport) int Q_snprintf(char *pDest, int destLen, const char *pFormat, ...);
void sub_101434b0(int ent, int text_offset, const char *text, int duration, int r, int g, int b, int a);	// NDebugOverlay::EntityText
char *sub_101d3730(const char *pFmt, ...);	// UTIL_VarArgs
extern "C" int __cdecl _toupper_lk(int c);
extern "C" int sprintf(char *pDest, const char *pFmt, ...);

#define FLD(T, o) (*(T *)((char *)this + (o)))

struct CDbgDispTable { const char *sub_100ec410(int n); };
extern CDbgDispTable g_10924980;

struct CDbgHB { int sub_101c2a30(); };
struct CDbgAnim { float sub_100920d0(const char *pName); };

struct CDbgDoorAI
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad4[0x2c - 4];
	int m_n2c;	// 0x2c
};
extern CDbgDoorAI *g_1092429c;

struct CDbgChoreo { float sub_1007dfa0(); };

struct CDbgScene
{
	char m_pad0[0x450];
	const char *m_iszSceneFile;	// 0x450
	char m_pad454[0x4bc - 0x454];
	CDbgChoreo *m_pScene;	// 0x4bc
};

struct CDbgVec { float x, y, z; };

struct CDbgSlots
{
	virtual void v0();
	#define DV(n) virtual void v##n();
	#define DV10(p) DV(p##0) DV(p##1) DV(p##2) DV(p##3) DV(p##4) DV(p##5) DV(p##6) DV(p##7) DV(p##8) DV(p##9)
	DV(1) DV(2) DV(3) DV(4) DV(5) DV(6) DV(7) DV(8) DV(9)
	DV10(1) DV10(2) DV10(3) DV10(4) DV10(5) DV10(6) DV10(7) DV10(8) DV10(9)
	DV10(10) DV10(11) DV10(12) DV10(13) DV10(14) DV10(15) DV10(16) DV10(17) DV10(18) DV10(19) DV10(20)
	DV(210) DV(211) DV(212) DV(213) DV(214) DV(215) DV(216)
	virtual const CDbgVec &slot217();
	DV(218)
	virtual const CDbgVec &slot219();
};

struct CDbgBits
{
	int m_Ints[6];
	CDbgBits() { if (GetInts()) memset(GetInts(), 0, 6 * sizeof(int)); }
	int *GetInts() { return m_Ints; }
	const int *GetInts() const { return m_Ints; }
	void Copy(CDbgBits *out) const
	{
		int *pDest = out->GetInts();
		const int *pInts = GetInts();
		pDest[0] = pInts[0];
		pDest[1] = pInts[1];
		pDest[2] = pInts[2];
		pDest[3] = pInts[3];
		pDest[4] = pInts[4];
		pDest[5] = pInts[5];
	}
	bool IsBitSet(int bit) const { return (m_Ints[bit >> 5] & (1 << (bit & 31))) != 0; }
};

struct CDbgFields
{
	float GetDoorTime() { return *(float *)((char *)this + 0x6450) - gpGlobals->curtime; }
	char m_pad0[0x5c74];
	CDbgBits m_Conditions;	// 0x5c74
	CDbgBits m_CustomInterruptConditions;	// 0x5c8c
	char m_pad5ca4[0x6554 - 0x5ca4];
	CHandle<CDbgScene> m_hScene;	// 0x6554
};

struct CDbgFloats
{
	char m_pad0[0x654];
	float m_flGroundSpeed;	// 0x654
	char m_pad658[0x6f8 - 0x658];
	float m_flCycle;	// 0x6f8
	char m_pad6fc[0x6264 - 0x6fc];
	float m_flDistToPlayer;	// 0x6264
};
struct CDbgNVF { float m_Value; operator const float &() const { return m_Value; } };
struct CDbgFloats2
{
	char m_pad0[0x654];
	float m_flGroundSpeed;	// 0x654
	char m_pad658[0x6f8 - 0x658];
	CDbgNVF m_flCycle;	// 0x6f8
	char m_pad6fc[0x6264 - 0x6fc];
	float m_flDistToPlayer;	// 0x6264
};
#define FF ((CDbgFloats *)this)
#define FF2 ((CDbgFloats2 *)this)
#define SLOTS ((CDbgSlots *)this)
#define DF ((CDbgFields *)this)

struct CAI_BaseNPCTroikaDbg : public CAI_BaseNPCTroika
{
	int sub_1029d4e0();
};

int CAI_BaseNPCTroikaDbg::sub_1029d4e0()
{
	int text_offset = CAI_BaseNPC::sub_102767d0();

	if (FLD(unsigned char, 0x224) & 1)
	{
		char tempstr[512];
		g_109f3890(tempstr, "Seq: ", sizeof(tempstr));
		void *pStudioHdr = sub_100952d0(-1);
		int *pSeqDesc = (int *)sub_1008d990(FLD(int, 0x6f0));
		if (!pSeqDesc)
		{
			g_109f3884(tempstr, "(INVALID)", sizeof(tempstr), -1);
		}
		else
		{
			g_109f3884(tempstr, (char *)pSeqDesc + pSeqDesc[0], sizeof(tempstr), -1);
			g_109f3884(tempstr, " / ", sizeof(tempstr), -1);
			g_109f3884(tempstr, (char *)pSeqDesc + pSeqDesc[1], sizeof(tempstr), -1);
		}
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "Cycle: %.2f", FF->m_flCycle);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if (pStudioHdr)
		{
			Q_snprintf(tempstr, sizeof(tempstr), "move_yaw: %.3f", ((CDbgAnim *)this)->sub_100920d0("move_yaw"));
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;

			Q_snprintf(tempstr, sizeof(tempstr), "aim_pitch: %.3f", ((CDbgAnim *)this)->sub_100920d0("aim_pitch"));
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;

			Q_snprintf(tempstr, sizeof(tempstr), "aim_yaw: %.3", ((CDbgAnim *)this)->sub_100920d0("aim_yaw"));
			sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}

		Q_snprintf(tempstr, sizeof(tempstr), "ground speed: %.3f", FF->m_flGroundSpeed);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "dist to player: %.3f", FF->m_flDistToPlayer);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "Disposition: %s", g_10924980.sub_100ec410(FLD(int, 0x64d4)));
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "pos: %5.1f, %5.1f, %5.1f", SLOTS->slot217().x, SLOTS->slot217().y, SLOTS->slot217().z);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		Q_snprintf(tempstr, sizeof(tempstr), "dir: %5.1f, %5.1f, %5.1f", SLOTS->slot219().x, SLOTS->slot219().y, SLOTS->slot219().z);
		sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if ((FLD(unsigned int, 0x224) & 0x10000000) && FLD(int, 0x5c38))
		{
			int conds[] = { 0x40, 0x46, 1, 0x47, 0x48, 0x49, 0x4c, 0x4f, 0x51, 8, 0x5f, 0x60, 9,
				0x54, 0x56, 0x57, 0x58, 0x59, 0x63, 0x6d, 0x6f, 0x70, 0xa, 0xb, 0xc, 0xd };
			sub_101434b0(entindexDbg(), text_offset, "INT COND\n", 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
			char *p = tempstr;
			CDbgBits conditions;
			CDbgBits interrupts;
			int count = 0;
			DF->m_Conditions.Copy(&conditions);
			DF->m_CustomInterruptConditions.Copy(&interrupts);
			int i;
			int len;
			const char *pName;
			char buf[8];
			int j;
			for (i = 0; i < 0x77; i++)
			{
				bool bInt = interrupts.IsBitSet(i);
				if (conditions.IsBitSet(i))
				{
					count++;
					len = 0;
					if (sub_10269aa0(i))
						len = 10;
					len = len * 4 / 10;
					pName = vfunc408(i);
					for (j = 0; j < 3; j++)
					{
						if (j < len)
							buf[j] = _toupper_lk(pName[j]);
						else
							buf[j] = pName[j];
					}
					buf[j] = 0;
					p += sprintf(p, "%s  ", buf);
					if (!(count & 7))
					{
						sprintf(p, "\n");
						sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
						text_offset++;
						p = tempstr;
					}
				}
				if (bInt)
				{
					count++;
					len = 0;
					if (!sub_10269aa0(i))
						len = 10;
					len = len * 4 / 10;
					pName = vfunc408(i);
					for (j = 0; j < 3; j++)
					{
						if (j < len)
							buf[j] = _toupper_lk(pName[j]);
						else
							buf[j] = pName[j];
					}
					buf[j] = 0;
					p += sprintf(p, "!%s ", buf);
					if (!(count & 7))
					{
						sprintf(p, "\n");
						sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
						text_offset++;
						p = tempstr;
					}
				}
			}
			int rem = count & 7;
			if (rem)
			{
				sprintf(p, "\n");
				sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
			sub_101434b0(entindexDbg(), text_offset, "COND\n", 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
			p = tempstr;
			for (i = 0; i < 26; i++)
			{
				int cond = conds[i];
				len = 0;
				if (sub_10269aa0(cond))
					len = 10;
				len = len * 4 / 10;
				pName = vfunc408(cond);
				for (j = 0; j < 3; j++)
				{
					if (j < len)
						buf[j] = _toupper_lk(pName[j]);
					else
						buf[j] = pName[j];
				}
				buf[j] = 0;
				p += sprintf(p, "%s ", buf);
				if ((i & 7) == 7)
				{
					sprintf(p, "\n");
					sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
					text_offset++;
					p = tempstr;
				}
			}
			if (rem != 7)
			{
				sprintf(p, "\n");
				sub_101434b0(entindexDbg(), text_offset, tempstr, 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
		}
		else if (sub_10269aa0(0x55))
		{
			sub_101434b0(entindexDbg(), text_offset, "Enemy too far to attack", 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}

		int nHG = FLD(int, 0x1594);
		sub_101434b0(entindexDbg(), text_offset, sub_101d3730("HG - %d : HB - %d", nHG, ((CDbgHB *)((char *)this + 0x660c))->sub_101c2a30()), 0, 0xff, 0xff, 0xff, 0xff);
		text_offset++;

		if (!g_1092429c->vfunc1() && g_1092429c->m_n2c)
		{
			char buf[100];
			switch (FLD(int, 0x644c))
			{
			default:
				goto noai;
			case 1:
				sprintf(buf, "EALTAI_OPEN_DOOR              - %f", DF->GetDoorTime());
				break;
			case 2:
				sprintf(buf, "EALTAI_WAIT_DOOR              - %f", DF->GetDoorTime());
				break;
			case 3:
				sprintf(buf, "EALTAI_BLOCKED_DOOR           - %f", DF->GetDoorTime());
				break;
			case 4:
				sprintf(buf, "EALTAI_SCRIPT_STOPPED_AT_DOOR - %f", DF->GetDoorTime());
				break;
			case 0:
				goto noai;
			}
			sub_101434b0(entindexDbg(), text_offset, buf, 0, 0xff, 0xff, 0xff, 0xff);
			text_offset++;
		}
noai:

		if (DF->m_hScene)
		{
			CDbgScene *pScene = DF->m_hScene;
			CDbgChoreo *pChoreo = DF->m_hScene->m_pScene;
			if (pChoreo && pScene)
			{
				const char *pszName = pScene->m_iszSceneFile ? pScene->m_iszSceneFile : g_106b8540;
				sub_101434b0(entindexDbg(), text_offset, sub_101d3730("Scene: %s time: %.2f", pszName, pChoreo->sub_1007dfa0()), 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
			else if (pScene)
			{
				const char *pszName = pScene->m_iszSceneFile ? pScene->m_iszSceneFile : g_106b8540;
				sub_101434b0(entindexDbg(), text_offset, sub_101d3730("Scene: %s", pszName), 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
			else
			{
				sub_101434b0(entindexDbg(), text_offset, "??? scene", 0, 0xff, 0xff, 0xff, 0xff);
				text_offset++;
			}
		}
	}
	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x1029f800 size=0x32
#include "CAI_BaseNPCTroika.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;

// TARGET: CAI_BaseNPCTroika::vfunc21
void CAI_BaseNPCTroika::vfunc21(int a)
{
	sub_102bf5d0(a);
	++m_n6064;
	g_10924a6c->vfunc1();
	sub_10269a20(0xa);
}
// END FUNCTION

// FUNCTION: 0x1029f850 size=0x25
#include "CAI_BaseNPCTroika.h"

struct CUnknown10924a6c
{
	virtual void a0();
	virtual void vfunc1();
};

extern CUnknown10924a6c *g_10924a6c;

// TARGET: CAI_BaseNPCTroika::vfunc22
void CAI_BaseNPCTroika::vfunc22(int a)
{
	sub_102bf5d0(a);
	g_10924a6c->vfunc1();
	sub_100041b0(10);
}
// END FUNCTION

// FUNCTION: 0x1029f890 size=0x25
#include "CAI_BaseNPCTroika.h"

struct CUnknown102bf5d0
{
    void sub_102bf5d0(int a);
};

struct CUnknown10924a6c
{
    virtual void a0();
    virtual void vfunc1();
};

extern CUnknown10924a6c *g_10924a6c;

struct CUnknown1029f890
{
    void sub_1029f890(int a);
};

// TARGET: CUnknown1029f890::sub_1029f890
void CUnknown1029f890::sub_1029f890(int a)
{
    ((CUnknown102bf5d0 *)this)->sub_102bf5d0(a);
    g_10924a6c->vfunc1();
    ((CAI_BaseNPCTroika *)this)->sub_100041b0(10);
}
// END FUNCTION

// FUNCTION: 0x1029f8d0 size=0xe
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPCTroikaView6028
{
	char m_pad[0x6028];
	void sub_1028b160();
};

void CAI_BaseNPCTroika::vfunc24(int unused)
{
	CAI_BaseNPCTroikaView6028 *p = (CAI_BaseNPCTroikaView6028 *)((char *)this + 0x6028);
	p->sub_1028b160();
}
// END FUNCTION

// FUNCTION: 0x1029f8f0 size=0x32
#include "CAI_BaseNPCTroika.h"
#include "CDevFlagObj.h"

extern CDevFlagObj *g_10924a6c;

// TARGET: CAI_BaseNPCTroika::vfunc27
void CAI_BaseNPCTroika::vfunc27(int a)
{
	sub_102bf5d0(a);
	g_10924a6c->vfunc1();
	sub_10269a20(0xa);
	vfunc600(a);
}
// END FUNCTION

// FUNCTION: 0x1029f940 size=0xc1
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc590
char CAI_BaseNPCTroika::vfunc590()
{
	if (!sub_1028a190())
		return 0;
	int state = *(int *)((char *)this + 0xfec);
	switch (state)
	{
	case 1: case 9: case 0x13: case 0x30: case 0x4b: case 0x4d: case 0x51:
	case 0x73: case 0x74: case 0x75: case 0x76: case 0x77: case 0x78: case 0x79: case 0x7a:
	case 0x7b: case 0x7c: case 0x7d: case 0x7e: case 0x7f: case 0x80: case 0x81: case 0x82:
	case 0x83: case 0x84: case 0x85: case 0x86: case 0x87: case 0x88: case 0x89: case 0x8a:
	case 0xcb5: case 0xd25: case 0x1121: case 0x1157: case 0x1158:
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1029fb70 size=0x44
#include "CAI_BaseNPCTroika.h"

struct CUnknown10924a6c
{
	virtual void vfunc0();
	virtual void vfunc1();
};
extern CUnknown10924a6c *g_10924a6c;

bool CAI_BaseNPCTroika::vfunc317(int unused)
{
	g_10924a6c->vfunc1();
	sub_100041b0(10);
	if (sub_10269c70(12)) {
		g_10924a6c->vfunc1();
		sub_100041b0(12);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1029fdb0 size=0x5e
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
struct CTroikaOther { int sub_10349830(); };
extern float g_1049a1bc, g_1049a1b8;
bool CAI_BaseNPCTroika::vfunc319(int a, CBaseEntity *pOther, int c)
{
    sub_10272650(((CBaseCombatCharacter *)this)->sub_10345f10());
    float f = 0;
    if (pOther && ((CTroikaOther *)pOther)->sub_10349830() == 2)
        f = 1.0f;
    float flDelay = (g_1049a1bc - g_1049a1b8) * f + g_1049a1b8;
    *(float *)((char *)this + 0x1564) = flDelay + gpGlobals->curtime;
    return true;
}
// END FUNCTION

// FUNCTION: 0x1029fec0 size=0x51
#include "CAI_BaseNPCTroika.h"

struct CUnk109245e4 {
    virtual void vfunc0();
    virtual char vfunc1();
    char m_pad[0x2c - 4];
    int m_n2c;
};
extern CUnk109245e4 *g_109245e4;

struct CArg326 {
    char m_pad[0xba];
    char m_b;
};
struct CTroika326View {
    char m_pad[0x6064];
    int m_n6064;
};

bool CAI_BaseNPCTroika::vfunc326(CBaseEntity *pEnt, int b)
{
    if (sub_1000e494(pEnt, b)) {
        int n;
        if (g_109245e4->vfunc1())
            n = 0;
        else
            n = g_109245e4->m_n2c;
        if (((CTroika326View *)this)->m_n6064 <= n || ((CArg326 *)pEnt)->m_b == 2)
            return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x102a0910 size=0x1e
#include "CAI_BaseNPCTroika.h"

#define CVS(n) virtual void s##n();
#define CVS10(p) CVS(p##0) CVS(p##1) CVS(p##2) CVS(p##3) CVS(p##4) CVS(p##5) CVS(p##6) CVS(p##7) CVS(p##8) CVS(p##9)

struct CBaseNPCTroikaSlots600
{
	CVS10(0) CVS10(1) CVS10(2) CVS10(3) CVS10(4) CVS10(5) CVS10(6) CVS10(7) CVS10(8) CVS10(9)
	CVS10(10) CVS10(11) CVS10(12) CVS10(13) CVS10(14) CVS10(15) CVS10(16) CVS10(17) CVS10(18) CVS10(19)
	CVS10(20) CVS10(21) CVS10(22) CVS10(23) CVS10(24) CVS10(25) CVS10(26) CVS10(27) CVS10(28) CVS10(29)
	CVS10(30) CVS10(31) CVS10(32) CVS10(33) CVS10(34) CVS10(35) CVS10(36) CVS10(37) CVS10(38) CVS10(39)
	CVS10(40) CVS10(41) CVS10(42) CVS10(43) CVS10(44) CVS10(45) CVS10(46) CVS10(47) CVS10(48) CVS10(49)
	CVS10(50) CVS10(51) CVS10(52) CVS10(53) CVS10(54) CVS10(55) CVS10(56) CVS10(57) CVS10(58) CVS10(59)
	virtual void s600(int a);
};

void CAI_BaseNPCTroika::vfunc322(int a)
{
	sub_102bf5d0(a);
	((CBaseNPCTroikaSlots600 *)this)->s600(a);
}
// END FUNCTION

// FUNCTION: 0x102a0940 size=0x1c7
// TARGET: ?vfunc435@CAI_BaseNPCTroika@@UAEXPAX@Z
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "CUnknown1027d990.h"
#include "CUnknown102ee270.h"
#include "CUnknown102e0a60.h"
#include "CUnknown101e3af0.h"

extern CGlobalEntityList *g_10566458;
extern unsigned char g_10739a64;
extern CUnknown101e3af0 g_10739a4c;
void sub_1018e910(void *pThis);

struct CUnk1026d160X
{
	void sub_1026d160();
};

struct CSetAttackExtentsSlot
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(const float *pExtents);
};

void CAI_BaseNPCTroika::vfunc435(void *pSchedule)
{
	CAI_BaseNPC::vfunc435(pSchedule);
	m_flags14bc |= 0x80000004;

	if ((~m_flags14b8 & 8) != 0) {
		if (((CUnknown1027d990 *)this)->sub_1027d990() != 3
			&& ((CUnknown1027d990 *)this)->sub_1027d990() != 1)
			((CUnknown102ee270 *)m_p5d34)->sub_102ee270();

		sub_102b53d0(1, "Leaving interesting place (OnScheduleChange)");
		m_n6300 = 0;
		m_n659c = 0;
		((CUnknown102e0a60 *)m_pMotor5d44)->sub_102e0a60(0x43340000);
		m_b1a40 = 0;
		m_flGoalTolerance = 0;
		m_flInsideInterruptDistanceSqr = 0;
		m_flOutsideInterruptDistanceSqr = 0;
		m_flInterruptTime = 0;
		((CBaseHandle &)m_hMoveTargetEnt) = (IHandleEntity *)0;

		if (((CGlobalEntityList *)g_10566458)->sub_100290c0(&m_h5d24))
			((CEntityVSlots *)this)->slot532(8);

		m_flags14b8 &= 0xbbf4b97e;
		m_flags14bc &= 0x77fff14f;
		if (m_flags14bc & 0x1000) {
			m_flags14bc &= 0x7fffefff;
			((CUnk1026d160X *)this)->sub_1026d160();
		}

		if ((m_flags14bc & 1) == 1) {
			float *pExtents = (float *)((char *)this + 0x65d0);
			((CSetAttackExtentsSlot *)this)->v15(pExtents);
			pExtents[0] = -1.0f;
			pExtents[1] = -1.0f;
			pExtents[2] = -1.0f;
			m_flags14bc &= 0x7ffffffe;
		}

		*((char *)m_pMotor5d44 + 0x28) = 0;
		m_flDesiredMoveYaw = 0;
		m_bWaitFinishedSet = 0;
	}

	if (m_flags14bc & 0x40000000) {
		if (g_10739a64)
			g_10739a4c.sub_101e3c80((CBaseCombatCharacter *)this, 1);
		sub_1018e910(this);
		m_b63d8 = 0;
	}

	m_flags14bc &= 0x3fffffff;
	m_flags14b8 &= 0xd7ffffff;
	if (m_flags5d8c & 0x2000)
		m_flags5d8c &= 0xffffdfff;
}
// END FUNCTION

// FUNCTION: 0x102ad0c0 size=0x34
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc615
bool CAI_BaseNPCTroika::vfunc615()
{
	if (sub_10014df8(0x30))
		return false;
	return gpGlobals->curtime > m_f65bc;
}
// END FUNCTION

// FUNCTION: 0x102ad110 size=0x20
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::vfunc616()
{
	sub_10015839(0x30);
	m_f65bc = gpGlobals->curtime + 15.0f;
}
// END FUNCTION

// FUNCTION: 0x102ad140 size=0xe0
#include "CAI_BaseNPCTroika.h"
// TARGET: CAI_BaseNPCTroika::vfunc453
void CAI_BaseNPCTroika::vfunc453()
{
    sub_10280fb0();
    unsigned int flags14b8 = *(unsigned int *)((char *)this + 0x14b8);
    if (!(flags14b8 & 0x4000080)) {
        if (!sub_1033e2b0() && (m_flags14bc & 0x40000) != 0x40000) {
            char *pHint = *(char **)((char *)this + 0x5ddc);
            if (!pHint || *(int *)(pHint + 0x5dc) != 0x2774) {
                sub_10269eb0(0x1e);
                sub_10269eb0(0x1f);
                sub_10269eb0(0x21);
            }
            if (!vfunc167()) {
                if ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 4) & 1)
                    sub_10269eb0(0x72);
                if ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 5) & 1) {
                    sub_10269eb0(0x20);
                    sub_10269eb0(0x22);
                }
            }
            if (~*(unsigned int *)((char *)this + 0x14b8) & 0x400)
                sub_10269eb0(0x27);
        }
    }
    if ((m_flags14bc & 0x40) == 0x40)
        sub_10269f30(0x31);
}
// END FUNCTION

// FUNCTION: 0x102adfe0 size=0x101
#include "CAI_BaseNPCTroika.h"

struct CExprSets
{
	int sub_100ec360(int index, void *pNpc);
	int sub_100ec2e0(int index, void *pNpc);
	float sub_100ec3d0(int index);
};
extern CExprSets g_10924980;

struct CTroikaExprView
{
	char m_pad0[0x10b4];
	int m_nExpression10b4;
	float m_flWeight10b8;
	char m_pad10bc[0x64d0 - 0x10bc];
	int m_nExpression64d0;
	int m_nIndex64d4;
};

// TARGET: CAI_BaseNPCTroika::vfunc610
void CAI_BaseNPCTroika::vfunc610(int emotion)
{
    CTroikaExprView *p = (CTroikaExprView *)this;
    switch (emotion) {
    case 8:
    case 10:
        p->m_nExpression10b4 = sub_10106a40("Fear");
        p->m_nExpression64d0 = sub_10106a40("Fear_NoDeform");
        p->m_flWeight10b8 = 1.0f;
        return;
    case 3:
    case 0xb:
    case 0xe:
        p->m_nExpression10b4 = sub_10106a40("Anger");
        p->m_nExpression64d0 = sub_10106a40("Anger_No Deform");
        p->m_flWeight10b8 = 0.5f;
        return;
    case 2:
        p->m_nExpression10b4 = sub_10106a40("Anger");
        p->m_nExpression64d0 = sub_10106a40("Anger_No Deform");
        p->m_flWeight10b8 = 1.0f;
        return;
    default:
        p->m_nExpression10b4 = g_10924980.sub_100ec360(p->m_nIndex64d4, this);
        p->m_nExpression64d0 = g_10924980.sub_100ec2e0(p->m_nIndex64d4, this);
        p->m_flWeight10b8 = g_10924980.sub_100ec3d0(p->m_nIndex64d4);
        return;
    }
}
// END FUNCTION

// FUNCTION: 0x102ae140 size=0x16d
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1027d990.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S_Slot610 {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
    V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
    V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5) V10(c6) V10(c7) V10(c8) V10(c9)
    V10(d0) V10(d1) V10(d2) V10(d3) V10(d4) V10(d5) V10(d6) V10(d7) V10(d8) V10(d9)
    V10(e0) V10(e1) V10(e2) V10(e3) V10(e4) V10(e5) V10(e6) V10(e7) V10(e8) V10(e9)
    V10(f0) V10(f1) V10(f2) V10(f3) V10(f4) V10(f5) V10(f6) V10(f7) V10(f8) V10(f9)
    V10(g0)
    virtual void s610(int);
};
struct S_Rnd { virtual void s0(); virtual float RandomFloat(float a, float b); };
extern S_Rnd *g_1070b244;
struct S_Holder { void sub_100cd660(CBaseEntity *a, CBaseEntity *b, int c); };
struct S_V {
    char pad0[0x5b80]; char m_b5b80;
    char pad2[0x5d8c - 0x5b81]; unsigned int m_flags5d8c;
    char pad3[0x5fbc - 0x5d90]; S_Holder m_h5fbc;
    char pad4[0x63fc - 0x5fbd]; char m_b63fc;
    char pad5[0x6474 - 0x63fd]; float m_f6474;
    char pad6[0x6494 - 0x6478]; char m_b6494;
    char pad7[0x658c - 0x6495]; int m_h658c; int m_p6590; int m_h6594;
};
void CAI_BaseNPCTroika::vfunc463(int a, int b)
{
    S_V *v = (S_V *)this;
    CUnknown1027d990 *u = (CUnknown1027d990 *)this;
    if (a != b) {
        ((S_Slot610 *)this)->s610(b);
        sub_102ae310();
        char flag = 1;
        switch (b) {
        case 2: case 3:
            v->m_b6494 = flag;
            break;
        case 0xb:
            v->m_f6474 = g_1070b244->RandomFloat(10.0f, 20.0f) + gpGlobals->curtime;
            v->m_b6494 = flag;
            break;
        case 7:
            if (v->m_p6590 != 0)
                sub_1029f5d0(&v->m_h658c);
            break;
        case 8: {
            CBaseEntity *p = (CBaseEntity *)vfunc167();
            if (!p) p = (CBaseEntity *)this;
            v->m_h5fbc.sub_100cd660(p, (CBaseEntity *)this, 0);
            v->m_b6494 = flag;
            break; }
        case 0xe:
            sub_10293d90(2.0f);
            v->m_b6494 = flag;
            break;
        }
        v->m_flags5d8c &= 0x7ffffff;
        if (u->sub_1027d990() != 3 && u->sub_1027d990() != flag)
            m_flags14b8 &= ~8u;
    }
    void *ph = &v->m_h6594;
    m_flags14b8 &= ~0x1000u;
    sub_1029f5d0(ph);
    m_flags14b8 &= ~4u;
    v->m_b63fc = 0;
    sub_10295ab0(5.0f);
    v->m_b5b80 = 0;
    CAI_BaseNPC::vfunc463(a, b);
}
// END FUNCTION

// FUNCTION: 0x102b12f0 size=0x23e
#include "CAI_BaseNPCTroika.h"

struct CTroikaHint440 { char m_pad0000[0x5dc]; int m_nType; };

int CAI_BaseNPCTroika::vfunc440(int a)
{
	int r;
	if ((m_flags5b84 & 0x100) == 0x100 && (r = sub_102b11c0(a)) != 0)
		return r;
	switch (a)
	{
	case 1:
	case 0x6b:
		return (m_flags14bc & 0x80000) != 0x80000 ? 0x6b : 0x132;
	case 2:
		return 0x46;
	case 3:
		return 0x47;
	case 6:
		return 0x4a;
	case 0x15:
		return 0xb8;
	case 0xf:
		return 0xb1;
	case 0x10:
		return 0xb7;
	case 0x28:
		return 0xc2;
	case 0x25:
		return 0xc1;
	case 0x21:
		return 0xed;
	case 0x22:
		return 0xee;
	case 0x2f:
		return 0xf2;
	case 0x30:
		return 0xf4;
	case 0x31:
		return 0xf6;
	case 0x32:
		return 0xf8;
	case 0x33:
		return 0xf9;
	case 0x77:
	{
		CTroikaHint440 *pHint = *(CTroikaHint440 **)((char *)this + 0x5ddc);
		if (pHint && pHint->m_nType == 0x2774)
			return 0x78;
		break;
	}
	case 0x94:
		if (vfunc293())
			return 0x95;
		break;
	case 0x96:
		if (vfunc293())
			return 0x97;
		break;
	}
	return CAI_BaseNPC::vfunc440(a);
}
// END FUNCTION

// FUNCTION: 0x102b27f0 size=0x855
#include "ScopeTrace.h"
#include "CAIPendingCondList.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CGameTrace.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "UTIL_Trace.h"
#include "Vector.h"
struct CCondHookView_433 { virtual void v0(); virtual void v1(); };
extern CCondHookView_433 *g_10924a6c;
extern char g_105387dc[];
extern float g_104454c4;

struct CNavView_433 { char pad[0x14]; float m_f14; };
char __fastcall sub_102ee6a0(CNavView_433 *p);

// TARGET: CAI_BaseNPCTroika::vfunc433
void CAI_BaseNPCTroika::vfunc433()
{
	ScopeTrace trace("CAI_BaseNPCTroika::GatherConditions", this ? (((CBaseEntity *)this)->m_name26c ? ((CBaseEntity *)this)->m_name26c : g_106b8540) : g_105387dc, g_106b8540);
	sub_10269b50(0x26);
	sub_10269b50(0x27);
	sub_10269b50(1);
	sub_10269b50(2);
	sub_10269b50(3);
	sub_10269b50(4);
	sub_10269b50(5);
	sub_10269b50(6);
	sub_10269b50(7);
	sub_10269b50(0x30);
	sub_10269b50(0xb);
	sub_1026ec30();
	CAI_BaseNPCTroika *pEnemy = (CAI_BaseNPCTroika *)vfunc168();
	if (pEnemy && !pEnemy->vfunc158())
	{
		g_10924a6c->v1();
		sub_10269a20(0x58);
		sub_10269b50(0x46);
		sub_10269b50(0x48);
	}
	sub_1028efc0();
	sub_1028fa50();
	sub_10269b50(0x15);
	sub_10269b50(0x14);
	sub_10269b50(0x17);
	sub_10269b50(0x16);
	sub_10269b50(0x19);
	sub_10269b50(0x18);
	if (m_flInsideInterruptDistanceSqr > g_104454c4)
	{
		if (sub_102ee6a0((CNavView_433 *)m_p5d34) && ((CNavView_433 *)m_p5d34)->m_f14 < m_flInsideInterruptDistanceSqr)
		{
			g_10924a6c->v1();
			sub_10269a20(0x15);
		}
		if (pEnemy)
		{
			Vector *pE = (Vector *)pEnemy->vfunc220();
			Vector *pT = (Vector *)vfunc220();
			float dx = pT->x - pE->x, dy = pT->y - pE->y, dz = pT->z - pE->z;
			if (dx * dx + dy * dy + dz * dz < m_flInsideInterruptDistanceSqr)
			{
				g_10924a6c->v1();
				sub_10269a20(0x17);
			}
		}
		CAI_BaseNPCTroika *pOther = (CAI_BaseNPCTroika *)vfunc293();
		if (pOther)
		{
			Vector *pE = (Vector *)pOther->vfunc220();
			Vector *pT = (Vector *)vfunc220();
			float dx = pT->x - pE->x, dy = pT->y - pE->y, dz = pT->z - pE->z;
			if (dx * dx + dy * dy + dz * dz < m_flInsideInterruptDistanceSqr)
			{
				g_10924a6c->v1();
				sub_10269a20(0x19);
			}
		}
	}
	if (m_flOutsideInterruptDistanceSqr > g_104454c4)
	{
		if (sub_102ee6a0((CNavView_433 *)m_p5d34) && ((CNavView_433 *)m_p5d34)->m_f14 > m_flOutsideInterruptDistanceSqr)
		{
			g_10924a6c->v1();
			sub_10269a20(0x14);
		}
		if (pEnemy)
		{
			Vector *pE = (Vector *)pEnemy->vfunc220();
			Vector *pT = (Vector *)vfunc220();
			float dx = pT->x - pE->x, dy = pT->y - pE->y, dz = pT->z - pE->z;
			if (dx * dx + dy * dy + dz * dz > m_flOutsideInterruptDistanceSqr)
			{
				g_10924a6c->v1();
				sub_10269a20(0x16);
			}
		}
		CAI_BaseNPCTroika *pOther = (CAI_BaseNPCTroika *)vfunc293();
		if (pOther)
		{
			Vector *pE = (Vector *)pOther->vfunc220();
			Vector *pT = (Vector *)vfunc220();
			float dx = pT->x - pE->x, dy = pT->y - pE->y, dz = pT->z - pE->z;
			if (dx * dx + dy * dy + dz * dz > m_flOutsideInterruptDistanceSqr)
			{
				g_10924a6c->v1();
				sub_10269a20(0x18);
			}
		}
	}
	if (m_flInterruptTime > g_104454c4 && gpGlobals->curtime >= m_flInterruptTime)
	{
		g_10924a6c->v1();
		sub_10269a20(0x1a);
	}
	sub_102b15c0();
	sub_102b1a20();
	sub_102b1cd0();
	if (sub_10269c70(0x2c))
	{
		sub_10269b50(0x2c);
		if (pEnemy)
		{
			Vector d = *(Vector *)pEnemy->vfunc217() - *(Vector *)vfunc217();
			d.z = 0;
			VectorNormalize(d);
			if (d.y * m_vec6290.y + d.x * m_vec6290.x <= 0.707)
			{
				g_10924a6c->v1();
				sub_10269a20(0x2c);
			}
		}
	}
	else
		sub_10269b50(0x2c);
	sub_102b2570();
	for (int i = 0; i < 18; i++)
	{
		if (m_hFireEmitters[i] && *(int *)((char *)m_hFireEmitters[i].Get() + 0x484))
		{
			g_10924a6c->v1();
			sub_10269a20(0x30);
			break;
		}
	}
	sub_102b2730();
	if (m_h5d28.Get())
	{
		if (sub_10269aa0(0x46) || sub_10269aa0(0x54))
			*(int *)&m_h5d28 = -1;
	}
	if (sub_10269c70(0xb) && gpGlobals->curtime < *(float *)((char *)this + 0x65c4) && ((EHANDLE *)((char *)this + 0x65c0))->Get())
	{
		float flRand = enginerandom->vfunc1(0.9f, 1.3f);
		((CAIPendingCondList *)((char *)this + 0x1a9c))->sub_102cc6c0(0xb, flRand);
		*(float *)((char *)this + 0x65c4) = gpGlobals->curtime;
	}
	if (gpGlobals->curtime >= *(float *)((char *)this + 0x6600))
	{
		*(float *)((char *)this + 0x6600) = gpGlobals->curtime + 3.0f;
		Vector vecStart = vfunc193();
		CGameTrace tr;
		UTIL_TraceLine(vecStart, vecStart + m_vec6290 * 32.0f, 0x2000b, this, 0, &tr);
		bool bHit = false;
		if (tr.m_fraction < 1.0f)
			bHit = true;
		else if (tr.m_allsolid)
			bHit = true;
		else if (tr.m_startsolid)
			bHit = true;
		if (bHit)
		{
			g_10924a6c->v1();
			sub_10269a20(0x3c);
		}
		else
		{
			sub_10269b50(0x3c);
		}
	}
	if (sub_10269aa0(0x4c) || sub_10269aa0(0x4d) || sub_10269aa0(0x4e))
		m_b5b80 = 1;
	else if (m_b5b80)
	{
		g_10924a6c->v1();
		sub_10269a20(0x4c);
	}
}
// END FUNCTION

// FUNCTION: 0x102b35b0 size=0x25d
#include "CAI_Motor.h"
#include "CAI_Navigator.h"
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"
#include "CBCCSlotViews.h"
#include "CBaseCombatCharacter.h"
#include "ehandle.h"
#include "CStealthKillRules.h"
#include "Vector.h"

extern char g_10924fba;
extern char g_10924fb9;
extern CStealthKillRules g_1072c540;

struct CSoundView
{
	EHANDLE m_hOwner;	// +0
	int m_iType;		// +4
	int m_iVolume;		// +8
	int m_unkC;
	int m_unk10;
	int m_unk14;
	int m_unk18;
	int m_unk1C;
	Vector m_vecOrigin;	// +0x20
};

// The game's first decliner of the header inline EHandleEntityList::LookupEntity in this unit is
// CAI_BaseNPCTroika::OnScheduleChange (vfunc435, 0x102a0940, judged 0 below as a same-unit copy): its LookupEntity
// COMDAT is compiled before this function, so VC6 knows the call's side effects (not its registers) here.
#include "CUnknown1027d990.h"
#include "CUnknown102ee270.h"
#include "CUnknown102e0a60.h"
#include "CUnknown101e3af0.h"

extern unsigned char g_10739a64;
extern CUnknown101e3af0 g_10739a4c;
void sub_1018e910(void *pThis);

namespace block_102b35b0
{
struct CUnk1026d160X
{
	void sub_1026d160();
};

struct CSetAttackExtentsSlot
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(const float *pExtents);
};

struct CScheduleChange435 : CAI_BaseNPCTroika
{
	CAI_Motor *GetMotor() { return m_pMotor5d44; }
	CAI_Navigator *GetNavigator() { return m_p5d34; }
	void AddNpcFlags(unsigned int f) { m_flags14bc |= f; }
	unsigned int HasNpcFlags(unsigned int f) const { return m_flags14bc & f; }
	void RemoveNpcFlags(unsigned int f) { m_flags14bc &= ~f; }
	void RemoveTroikaFlags(unsigned int f) { m_flags14b8 &= ~f; }
	unsigned int HasNavFlags(unsigned int f) const { return m_flags5d8c & f; }
	void RemoveNavFlags(unsigned int f) { m_flags5d8c &= ~f; }
	void sub_102a0940(void *pSchedule);
};

void CScheduleChange435::sub_102a0940(void *pSchedule)
{
	CAI_BaseNPC::vfunc435(pSchedule);
	AddNpcFlags(0x80000004);

	if ((~m_flags14b8 & 8) != 0) {
		if (((CUnknown1027d990 *)this)->sub_1027d990() != 3
			&& ((CUnknown1027d990 *)this)->sub_1027d990() != 1)
			((CUnknown102ee270 *)GetNavigator())->sub_102ee270();

		sub_102b53d0(1, "Leaving interesting place (OnScheduleChange)");
		m_n6300 = 0;
		m_n659c = 0;
		((CUnknown102e0a60 *)GetMotor())->sub_102e0a60(0x43340000);
		m_b1a40 = 0;
		m_flGoalTolerance = 0;
		m_flInsideInterruptDistanceSqr = 0;
		m_flOutsideInterruptDistanceSqr = 0;
		m_flInterruptTime = 0;
		((CBaseHandle &)m_hMoveTargetEnt) = (IHandleEntity *)0;

		if (((const CBaseHandle *)&m_h5d24)->Get())
			((CEntityVSlots *)this)->slot532(8);

		RemoveTroikaFlags(0x440b4681);
		RemoveNpcFlags(0x88000eb0);
		if (HasNpcFlags(0x1000)) {
			RemoveNpcFlags(0x80001000);
			((CUnk1026d160X *)this)->sub_1026d160();
		}

		if ((m_flags14bc & 1) == 1) {
			float *pExtents = (float *)((char *)this + 0x65d0);
			((CSetAttackExtentsSlot *)this)->v15(pExtents);
			pExtents[0] = -1.0f;
			pExtents[1] = -1.0f;
			pExtents[2] = -1.0f;
			RemoveNpcFlags(0x80000001);
		}

		*((char *)GetMotor() + 0x28) = 0;
		m_flDesiredMoveYaw = 0;
		m_bWaitFinishedSet = 0;
	}

	if (HasNpcFlags(0x40000000)) {
		if (g_10739a64)
			g_10739a4c.sub_101e3c80((CBaseCombatCharacter *)this, 1);
		sub_1018e910(this);
		m_b63d8 = 0;
	}

	RemoveNpcFlags(0xc0000000);
	RemoveTroikaFlags(0x28000000);
	if (HasNavFlags(0x2000))
		RemoveNavFlags(0x2000);
}
}


struct CSoundView467 : CSoundView
{
	int SoundType() const { return m_iType; }
	const Vector &GetSoundOrigin() { return m_vecOrigin; }
};

// TARGET: ?vfunc467@CAI_BaseNPCTroika@@QAE_NPAH@Z
bool CAI_BaseNPCTroika::vfunc467(int *pOther)
{
	CSoundView467 *pSound = (CSoundView467 *)pOther;

	if (!pSound)
		return false;
	if (g_10924fba)
		return false;
	if (g_10924fb9 && pSound->m_hOwner.Get() && pSound->m_hOwner->m_pA8)
		return false;
	if ((*(unsigned int *)((char *)this + 0x5b84) & 0x800) == 0x800) {
		CBaseEntity *pFriend = m_hFriendPlayer.Get();
		if (pSound->m_hOwner.Get() == pFriend)
			return false;
	}
	if (pSound->m_hOwner.Get() == (CBaseEntity *)this)
		return false;
	if (pSound->m_hOwner.Get() != 0) {
		CBaseCombatCharacter *pBCC = (CBaseCombatCharacter *)pSound->m_hOwner->m_p9c;
		if (!pBCC || !pBCC->sub_10146b20((CBaseCombatCharacter *)this))
			return false;
	}
	if (pSound->SoundType() == 4) {
		CBaseEntity *pEnt = pSound->m_hOwner.Get();
		if (pEnt && pEnt->m_pA8 && g_1072c540.sub_101be710((CBaseEntity *)pEnt->m_pA8, (CBaseEntity *)this))
			return false;
	}
	if ((*(unsigned int *)((char *)this + 0x14b8) & 0x20400) != 0) {
		Vector v;
		float flDist = (pSound->GetSoundOrigin() - *((CEntityVSlots *)this)->slot196(&v)).Length();
		float f = ((CNpcVFunc476SlotView *)this)->vfunc476() * pSound->m_iVolume * 0.25f;
		if (pSound->m_hOwner.Get() != 0)
			pSound->m_hOwner->sub_1009d850(pOther, &f);
		if (flDist > f)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102b38b0 size=0xb4
#include "CAI_BaseNPCTroika.h"

struct EntA8 { char pad[0xa8]; int f; };
struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern char g_10924fba;
extern char g_10924fb9;
extern HandleList *g_10566458;

bool CAI_BaseNPCTroika::vfunc468(CBaseEntity *pEnt)
{
	if (g_10924fba)
		return false;
	if (g_10924fb9 && pEnt && ((EntA8 *)pEnt)->f)
		return false;
	if ((*(unsigned int *)((char *)this + 0x5b84) & 0x800) == 0x800 && pEnt) {
		unsigned int h = *(unsigned int *)((char *)this + 0x60ac);
		void *other;
		if (h != 0xffffffff) {
			HandleEntry *p = &g_10566458->e[h & 0x1fff];
			if (p->serial == (h >> 13))
				other = p->ent;
			else
				other = 0;
		} else
			other = 0;
		if (pEnt == other)
			return false;
	}
	if (((EntA8 *)pEnt)->f)
		return true;
	switch (vfunc404(pEnt)) {
	case 0:
		return false;
	case 1:
	case 2:
		return true;
	case 3:
	case 4:
		return false;
	default:
		return false;
	}
}
// END FUNCTION

// FUNCTION: 0x102b39a0 size=0x24
struct CAI_BaseNPCTroikaCallee {
    void sub_10007bdf(int a);
    bool sub_10014df8(int condition);
    void sub_102b39a0(int arg);
};

// TARGET: CAI_BaseNPCTroikaCallee::sub_102b39a0
void CAI_BaseNPCTroikaCallee::sub_102b39a0(int arg)
{
    sub_10007bdf(arg);
    if (sub_10014df8(0x54)) {
        *(int *)((char *)this + 0x60a8) = *(int *)((char *)this + 0x60a8) + 1;
    }
}
// END FUNCTION

// FUNCTION: 0x102b39e0 size=0x2e4
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_Senses.h"
#include "CEHandleGet.h"
#include "CGlobalEntityList.h"
#include "CAI_Timer2c.h"
#include "CUnknown102c66b0.h"

struct CSenseSnap {
	int m_n00, m_n04, m_n08, m_n0c, m_n10;
	char m_b14;
	int m_n18, m_n1c;
	Vector m_vec20;
};

#define COPY_SNAP(off, type) { \
	const CSenseSnap *r = (const CSenseSnap *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(type); \
	CSenseSnap *d = (CSenseSnap *)((char *)this + off); \
	d->m_n00 = r->m_n00; d->m_n04 = r->m_n04; d->m_n08 = r->m_n08; d->m_n0c = r->m_n0c; d->m_n10 = r->m_n10; \
	d->m_b14 = r->m_b14; d->m_n18 = r->m_n18; d->m_n1c = r->m_n1c; d->m_vec20.sub_1003e4b0(r->m_vec20); }

#define FLAGS (*(unsigned int *)((char *)this + 0x5cb4))
#define TEST_BIT(n) unsigned char b##n = (unsigned char)((FLAGS >> n) & 1); if (b##n)

void CAI_BaseNPCTroika::vfunc470()
{
	CAI_BaseNPC::vfunc470();
	{ TEST_BIT(14) COPY_SNAP(0x61e4, 2) }
	{ TEST_BIT(17) COPY_SNAP(0x6134, 0x400) }
	{ TEST_BIT(10) COPY_SNAP(0x6108, 8) }
	{ TEST_BIT(15) COPY_SNAP(0x61b8, 4) }
	if (*(unsigned char *)((char *)this + 0x5cb6) & 1)
		COPY_SNAP(0x618c, 0x10)
	{ TEST_BIT(13) ((CAI_Timer2c *)((char *)this + 0x6160))->sub_102b3d90(*(CAI_Timer2c *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(1)); }
	if (((CUnknown102c66b0 *)((char *)this + 0x5ca8))->sub_102c66b0(0x72))
		((CAI_Timer2c *)((char *)this + 0x6210))->sub_102b3d90(*(CAI_Timer2c *)((CAI_Senses *)m_pSenses5cdc)->sub_103105d0(0x800));
	if (sub_10014df8(0x6d))
		sub_1028e8b0((CBaseEntity *)g_10566458->sub_100290c0((unsigned int *)((char *)this + 0x6160)), 0x3f800000);
	if (sub_10014df8(0x70))
		sub_1028e8b0((CBaseEntity *)g_10566458->sub_100290c0((unsigned int *)((char *)this + 0x618c)), 0x3f800000);
}
// END FUNCTION

// FUNCTION: 0x102b3e00 size=0x1e5
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100290c0.h"
#include "CDevFlagObj.h"
#include "COutputEvent.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
extern CDevFlagObj *g_10924a6c;
struct EntWithPlayer { char pad[0xa8]; CBaseCombatCharacter *m_pPlayer; };

// TARGET: CAI_BaseNPCTroika::vfunc472
void CAI_BaseNPCTroika::vfunc472(CBaseEntity *pEnt)
{
	if ((~m_flags14bc & 0x4000000) && m_b6081 && sub_102b3270(pEnt, 0)) {
		if (((EntWithPlayer *)pEnt)->m_pPlayer && ((EntWithPlayer *)pEnt)->m_pPlayer->sub_101671a0()) {
			g_10924a6c->vfunc1();
			sub_100041b0(1);
			unsigned int *pCur = &m_h6088;
			if ((CBaseEntity *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(pCur) == pEnt)
				return;
			*pCur = *(unsigned int *)pEnt->vfunc1();
			m_n60a8++;
			CUnknown100290c0 *pList = (CUnknown100290c0 *)g_10566458;
			if (pList->sub_100290c0(&m_h6088) == pList->sub_100290c0(&m_h608c)) {
				m_n60a4++;
				m_flags14b8 &= 0xfebfffff;
				return;
			}
			if (((EntWithPlayer *)pEnt)->m_pPlayer)
				((COutputEvent *)((char *)this + 0x5fa4))->sub_100cd660(pEnt, this, 0);
			m_h608c = m_h6088;
			CAI_BaseNPC *pOld = (CAI_BaseNPC *)((CUnknown100290c0 *)g_10566458)->sub_100290c0(&m_h608c);
			float *pPos = pOld->vfunc217();
			m_v6090[0] = pPos[0];
			m_v6090[1] = pPos[1];
			m_v6090[2] = pPos[2];
			m_n60a4 = 0;
			m_f609c = gpGlobals->curtime + enginerandom->vfunc1(10.0f, 20.0f);
			m_f60a0 = gpGlobals->curtime + enginerandom->vfunc1(5.0f, 10.0f);
			m_flags14b8 &= 0xfe9fffff;
			return;
		}
		m_flags14b8 |= 0x800000;
	}
	if ((CBaseEntity *)EHandle_Get(m_h6088) == pEnt) {
		m_h6088 = 0xffffffff;
		m_flags14b8 &= 0xfe9fffff;
	}
}
// END FUNCTION

// FUNCTION: 0x102b4070 size=0x6
int sub_102b4070(void)
{
    return 0x81f;
}
// END FUNCTION

// FUNCTION: 0x102b4520 size=0x7
int __fastcall sub_102b4520(int p)
{
	return p + 0x60b0;
}
// END FUNCTION

// FUNCTION: 0x102b4540 size=0xb4
#include "CAI_BaseNPCTroika.h"
#include "CGlobalEntityList.h"

struct SHandleSlot
{
	CBaseEntity *m_pEntity;
	int m_Serial;
};

struct SOtherEntity
{
	char m_pad0000[0x98];
	char *m_p0098;
	int m_n00a0pad;
	int m_n00a8;
};

// the CBaseCombatCharacter implementation of the slot (stub 0x10010e24)
struct SBaseCharacter
{
	char sub_10326750(SOtherEntity *pOther);
};

extern char g_10924fba;
extern char g_10924fb9;
extern CGlobalEntityList *g_10566458;

static inline CBaseEntity *ResolveHandle(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	SHandleSlot *s = (SHandleSlot *)&g_10566458->m_Slots[h & 0x1fff].m_pEntity;
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

// CAI_BaseNPCTroika::vfunc363 as a fastcall function: ecx = this, edx unused
// TARGET: CAI_BaseNPCTroika::vfunc363
char CAI_BaseNPCTroika::vfunc363(CBaseEntity *pEnt)
{
	CAI_BaseNPCTroika *self = this;
	SOtherEntity *pOther = (SOtherEntity *)pEnt;
	if (!pOther)
		return false;
	if (g_10924fba)
		return false;
	if (g_10924fb9 && *(int *)((char *)pOther + 0xa8))
		return false;
	if (self->vfunc293()) {
		CBaseEntity *pTarget = ResolveHandle(*(unsigned int *)((char *)self + 0x628c));
		if (self->vfunc293() == (int)pTarget && pOther->m_p0098 && *(pOther->m_p0098 + 0x6279))
			return true;
	}
	char c = ((SBaseCharacter *)self)->sub_10326750(pOther);
	return c != '\0';
}
// END FUNCTION

// FUNCTION: 0x102b4630 size=0xe8
#include "CAI_BaseNPCTroika.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
#define SV100(p) SV10(p##0) SV10(p##1) SV10(p##2) SV10(p##3) SV10(p##4) SV10(p##5) SV10(p##6) SV10(p##7) SV10(p##8) SV10(p##9)
struct CSlot594View
{
	SV100(a) SV100(b) SV100(c) SV100(d) SV100(e)
	SV10(f0) SV10(f1) SV10(f2) SV10(f3) SV10(f4) SV10(f5) SV10(f6) SV10(f7) SV10(f8)
	SV(f90) SV(f91) SV(f92) SV(f93)
	virtual char s594(CBaseEntity *pEnt, int a, int b, int c);
};

struct CNameTable
{
	unsigned int sub_101e1590(const char *pszName);
	unsigned int sub_101e1870(unsigned int id);
};
extern CNameTable g_10739a4c;
extern char g_10924fba;
extern char g_10924fb9;

// TARGET: CAI_BaseNPCTroika::vfunc201
bool CAI_BaseNPCTroika::vfunc201(CBaseEntity *pEnt, int a, int *pOut, int d)
{
    static unsigned int s_nBrainWipe = g_10739a4c.sub_101e1870(g_10739a4c.sub_101e1590("Dominate_BrainWipe"));
    if (!pEnt)
        return false;
    if (g_10924fba) {
        if (pOut)
            *pOut = 0;
        return false;
    }
    if (g_10924fb9 && *(int *)((int)pEnt + 0xa8)) {
        if (pOut)
            *pOut = 0;
        return false;
    }
    if (!((CSlot594View *)this)->s594(pEnt, a, 0, 0))
        return false;
    if (sub_1033d2f0(s_nBrainWipe))
        return false;
    if (sub_100a6fa0(pEnt, a, pOut, d)) return true; return false;
}
// END FUNCTION

// FUNCTION: 0x102b4760 size=0x29c
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "Vector.h"
extern void sub_10142aa0(int, int, int, int, int, int, int, int);

inline void Box(const Vector &origin, const Vector &mins, const Vector &maxs, int g)
{
	sub_10142aa0((int)&origin, (int)&mins, (int)&maxs, 0xff, g, 0, 0, 0x3f000000);
}

bool CAI_BaseNPCTroika::vfunc594(CBaseEntity *pEnt, int a, int *pOut, int d)
{
	Vector vThis, vOther;
	m_b6081 = 0;
	((CEntityVSlots *)this)->slot193(&vThis);
	((CEntityVSlots *)pEnt)->slot193(&vOther);
	switch (m_n5cc0)
	{
	case 2:
		if (!m_b5bc5)
			break;
	default:
		if (gpGlobals->curtime >= *(float *)((char *)this + 0x6604))
		{
			float flDist = (vOther - vThis).Length();
			float flRange = pEnt->vfunc28() * m_f63b8;
			if (flDist > flRange)
			{
				if (pOut)
					*pOut = 0;
				return false;
			}
			if (flDist > flRange * 0.7f)
				m_b6081 = 1;
		}
		break;
	}
	if (pEnt->m_p9c && !((CBaseCombatCharacter *)pEnt->m_p9c)->sub_10146b20((CBaseCombatCharacter *)this))
	{
		if ((m_fDebugOverlays224 & 0x80000000u) && pEnt->m_pA8)
		{
			Vector vecOrigin = *(Vector *)vfunc220();
			vecOrigin.z = vecOrigin.z + (((CCollisionProperty *)((char *)this + 0x270))->vfunc2()[2] + 12.0f);
			Box(vecOrigin, Vector(-2.0f, -2.0f, -2.0f), Vector(2.0f, 2.0f, 2.0f), 160);
		}
		if (pOut)
			*pOut = 0;
		return false;
	}
	if ((m_fDebugOverlays224 & 0x80000000u) && pEnt->m_pA8)
	{
		Vector vecOrigin = *(Vector *)vfunc220();
		vecOrigin.z = vecOrigin.z + (((CCollisionProperty *)((char *)this + 0x270))->vfunc2()[2] + 13.0f);
		Box(vecOrigin, Vector(-3.0f, -3.0f, -3.0f), Vector(3.0f, 3.0f, 3.0f), 255);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x102b4ab0 size=0x104
#include "CAI_BaseNPC.h"
#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"

struct CTroikaHint533
{
	void sub_102d1180(void *pNpc, Vector *pOut);
};

struct CTroikaView533
{
	char pad0[0x5d60];
	Vector m_vecOffset;
	char pad5d6c[0x5ddc - 0x5d6c];
	CTroikaHint533 *m_pHint;
};

struct CAI_BaseNPCTroikaUnit533 : CAI_BaseNPCTroika
{
	void sub_102b6120(Vector *pVec, int a);
};

Vector CAI_BaseNPCTroika::vfunc533(int a, int b)
{
	CTroikaView533 *pView = (CTroikaView533 *)this;
	if (pView->m_pHint)
	{
		switch (a)
		{
		case 0x1119:
		case 0x111a:
		case 0x111b:
		case 0x111c:
		case 0x111f:
		case 0x1120:
			{
				Vector vecOrigin = *((CEntityVSlots *)this)->slot217();
				((CAI_BaseNPCTroikaUnit533 *)this)->sub_102b6120(&vecOrigin, 0);
				Vector vecPos;
				pView->m_pHint->sub_102d1180(this, &vecPos);
				return (vecPos - vecOrigin) + pView->m_vecOffset;
			}
		}
	}
	return CAI_BaseNPC::vfunc533(a, b);
}
// END FUNCTION

// FUNCTION: 0x102b4c10 size=0x18
#include "CAI_BaseNPCTroika.h"

int sub_102c6d80();

// TARGET: CAI_BaseNPCTroika::vfunc486
bool CAI_BaseNPCTroika::vfunc486()
{
	if (sub_102c1170())
		return false;
	return sub_102c6d80 != 0;
}
// END FUNCTION

// FUNCTION: 0x102b4c40 size=0x5d
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
#include "engineiface.h"
// TARGET: CAI_BaseNPCTroika::vfunc487
void CAI_BaseNPCTroika::vfunc487()
{
	*(float *)((char *)this + 0x5ce8) = enginerandom->vfunc1(0.25f, 0.75f) + gpGlobals->curtime;
	if (*(int *)((char *)this + 0x5bb0) <= 0) {
		char *pSquad = *(char **)((char *)this + 0x5da4);
		if (pSquad)
			*(float *)(pSquad + 0x60) = enginerandom->vfunc1(0.25f, 0.75f) + gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x102b4cc0 size=0x1f7
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "Vector.h"

struct CEdictView2b4 { char pad[0x9c]; CBaseCombatCharacter *m_pUnk; };
int sub_101ccc80(CEdictView2b4 **pList, int nMax, const Vector *mins, const Vector *maxs, int flags, int a);

inline int EntitiesInBox2b4(CEdictView2b4 **pList, int nMax, const Vector &mins, const Vector &maxs, int flags)
{
	return sub_101ccc80(pList, nMax, &mins, &maxs, flags, 0);
}

void CAI_BaseNPCTroika::vfunc595()
{
	static Vector s_vecExtents(1024.0f, 1024.0f, 128.0f);
	Vector vecOrigin = *(Vector *)vfunc217();
	float flBestDist = 3.4028235e38f;
	CBaseEntity *pBest = 0;
	CEdictView2b4 *pList[32];
	int n = EntitiesInBox2b4(pList, 32, vecOrigin - s_vecExtents, vecOrigin + s_vecExtents, 0x40);
	for (int i = 0; i < n; i++)
	{
		if (pList[i])
		{
			CBaseCombatCharacter *pInner = pList[i]->m_pUnk;
			if (pInner && !(pInner->sub_100b3700() & 0x8000) && pInner->m_b1480 && ((CEntityVSlots *)pInner)->slot158() && !pInner->sub_100b5190()
				&& (CBaseEntity *)pInner != (CBaseEntity *)this && vfunc404(pInner) == 1)
			{
				float flDist = (vecOrigin - *((CEntityVSlots *)pInner)->slot217()).LengthSqr();
				if (flDist < flBestDist)
				{
					flBestDist = flDist;
					pBest = pInner;
				}
			}
		}
	}
	if (pBest)
		vfunc596((int)pBest);
}
// END FUNCTION

// FUNCTION: 0x102b4f60 size=0x40
#include "CAI_BaseNPCTroika.h"

#define P10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CNPCSlotView
{
	P10(a) P10(b) P10(c) P10(d) P10(e) P10(f) P10(g) P10(h) P10(i) P10(j) P10(k) P10(l) P10(m)
	P10(n) P10(o) P10(p) P10(q) P10(r) P10(s) P10(t) P10(u)
	virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215(); virtual void s216();
	virtual const Vector &vfunc217();
	P10(v) P10(w) P10(x) P10(y) P10(z)
	P10(A) P10(B) P10(C) P10(D) P10(E) P10(F) P10(G) P10(H) P10(I) P10(J) P10(K) P10(L) P10(M)
	P10(N) P10(O) P10(P) P10(Q) P10(R) P10(S) P10(T) P10(U) P10(W) P10(X) P10(Y) P10(Z) P10(Vv)
	P10(aa)
	virtual void s538(); virtual void s539(); virtual void s540(); virtual void s541(); virtual void s542(); virtual void s543();
	virtual void vfunc544(CNPCSlotView *pEnt, const Vector &pos, const Vector *pVel);
	char m_pad0004[0x3d4 - 4];
	Vector m_vecVelocity;
};

int __stdcall sub_102707d0(void *p);

// TARGET: CAI_BaseNPCTroika::vfunc596
void CAI_BaseNPCTroika::vfunc596(int a)
{
	if (a != 0)
	{
		CNPCSlotView *pNPC = (CNPCSlotView *)sub_102707d0((void *)a);
		sub_10279a50((int)pNPC);
		((CNPCSlotView *)this)->vfunc544(pNPC, pNPC->vfunc217(), &pNPC->m_vecVelocity);
	}
}
// END FUNCTION

// FUNCTION: 0x102b4fb0 size=0x14
#include "CAI_BaseNPCTroika.h"
namespace lifted {
struct C10005849 { int sub_10005849(int, int, int); };
}
int CAI_BaseNPCTroika::vfunc597(int a0, int a1)
{
    return ((lifted::C10005849 *)this)->sub_10005849(a0, 1, a1);
}
// END FUNCTION

// FUNCTION: 0x102b50b0 size=0x3b
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPCTroikaUnit54 : CAI_BaseNPCTroika
{
    bool sub_102b50b0(int a);
};

// TARGET: ?sub_102b50b0@CAI_BaseNPCTroikaUnit54@@QAE_NH@Z
bool CAI_BaseNPCTroikaUnit54::sub_102b50b0(int a)
{
    if (a != 0) {
        if (a == vfunc167()) {
            if (*(void **)((char *)this + 0x5c38) != 0) {
                if (!sub_10269c70(0x47)) {
                    return false;
                }
            }
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x102b5100 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc55
void CAI_BaseNPCTroika::vfunc55(int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x102b5120 size=0x53
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
void CAI_BaseNPCTroika::vfunc56(CBaseEntity *pEnt, int b, int c, int d, int e, int f, int g, int h)
{
    if (pEnt && pEnt->m_field200) {
        if (pEnt == ((EHANDLE *)((char *)this + 0x1a94))->Get())
            sub_10279b70(0);
    }
}
// END FUNCTION

// FUNCTION: 0x102b51a0 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc57
void CAI_BaseNPCTroika::vfunc57(int, int, int, int, int, int, int)
{
}
// END FUNCTION

// FUNCTION: 0x102b51c0 size=0x3
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc58
void CAI_BaseNPCTroika::vfunc58(int)
{
}
// END FUNCTION

// FUNCTION: 0x102b51e0 size=0x21
struct Helper
{
	void sub_102b51e0(void *pNPC);
};

// TARGET: Helper::sub_102b51e0
void Helper::sub_102b51e0(void *pNPC)
{
	*(unsigned char *)((char *)this + 0x5bc4) = 1;
	if (*(char *)((char *)pNPC + 0x57d))
		*(unsigned char *)((char *)this + 0x1590) = 1;
}
// END FUNCTION

// FUNCTION: 0x102b5220 size=0x21
struct Helper
{
	void sub_102b5220(void *pNPC);
};

// TARGET: Helper::sub_102b5220
void Helper::sub_102b5220(void *pNPC)
{
	*(unsigned char *)((char *)this + 0x5bc4) = 0;
	if (*(char *)((char *)pNPC + 0x57d))
		*(unsigned char *)((char *)this + 0x1590) = 0;
}
// END FUNCTION

// FUNCTION: 0x102b5260 size=0x21
struct Helper
{
	void sub_102b5260(void *pNPC);
};

// TARGET: Helper::sub_102b5260
void Helper::sub_102b5260(void *pNPC)
{
	*(unsigned char *)((char *)this + 0x5bc4) = 0;
	if (*(char *)((char *)pNPC + 0x57d))
		*(unsigned char *)((char *)this + 0x1590) = 0;
}
// END FUNCTION

// FUNCTION: 0x102b5360 size=0x4b
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
CBaseEntity *CAI_BaseNPCTroika::vfunc168()
{
	CBaseEntity *pEnt = (CBaseEntity *)vfunc167();
	if (!pEnt && ((char)(*(unsigned int *)((char *)this + 0x5b64) >> 6) & 1))
		pEnt = ((EHANDLE *)((char *)this + 0x1a94))->Get();
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x102b5650 size=0x120
#include "Ray_t.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1025ddd0.h"
#include "ConVar.h"

extern ConVar *g_10924a1c;

struct NotifyObj {
	virtual void v0();
	virtual void Notify();
};
extern NotifyObj *g_10924edc;

struct TroikaV {
	char m_pad[0x6070];
	float m_f6070;
	char m_pad6074[0x6078 - 0x6074];
	char m_b6078;
	char m_pad6079[0x626c - 0x6079];
	float m_f626c;
	char m_pad6270[0x65e8 - 0x6270];
	CUnknown1025ddd0 *m_pList;
};

static inline float Twice(float f) { return f + f; }

char CAI_BaseNPCTroika::vfunc599(int unused)
{
	TroikaV *v = (TroikaV *)this;
	if ((m_flags5b84 & 2) == 2 || vfunc293() != 0) {
		v->m_b6078 = 1;
		return 1;
	}
	if (gpGlobals->curtime >= v->m_f6070) {
		bool bOk = true;
		float f;
		if (g_10924a1c->vfunc1())
			f = Twice(g_104454c4);
		else
			f = Twice(g_10924a1c->m_fValue);
		if (f < m_f6268 && vfunc308())
			bOk = false;
		if ((!(v->m_f626c > 64.0f) || !sub_10014df8(0x59)) && bOk
			&& ((m_flags5b84 & 0x1000) == 0x1000 || v->m_pList->sub_1025db70((CBaseEntity *)this))) {
			v->m_b6078 = 1;
			m_f6074 = enginerandom->vfunc1(7.5f, 15.0f) + gpGlobals->curtime;
			g_10924edc->Notify();
			return 1;
		}
	}
	v->m_b6078 = 0;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b57c0 size=0x8d
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"


struct CRandomX {
	virtual void v0();
	virtual float RandomFloat(float flMin, float flMax);
};
extern CRandomX *g_1070b244;

struct CNotifyX {
	virtual void v0();
	virtual void v1();
};
extern CNotifyX *g_10924edc;

char CAI_BaseNPCTroika::sub_102b57c0(int unused)
{
	unsigned int flags = sub_10007e19() ? ((CBaseCombatWeapon *)sub_10007e19())->vfunc360() : 0;
	if ((flags & 0x18000) && !*((char *)this + 0x6078)) {
		if ((*(CAI_NamedThing **)((char *)this + 0x65e8))->sub_1025dca0(this, 0)) {
			*((char *)this + 0x6078) = 1;
			*(float *)((char *)this + 0x6074) = g_1070b244->RandomFloat(7.5f, 15.0f) + gpGlobals->curtime;
			g_10924edc->v1();
			return 1;
		}
		*((char *)this + 0x6078) = 0;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102b5880 size=0x5b
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"
#include "engineiface.h"
struct STroikaNotify { virtual void a0(); virtual void vfunc1(); };
extern STroikaNotify *g_10924edc;
// TARGET: CAI_BaseNPCTroika::vfunc601
void CAI_BaseNPCTroika::vfunc601(int a)
{
	g_10924edc->vfunc1();
	*(char *)((char *)this + 0x6078) = 0;
	if (((char (__fastcall *)(CAI_BaseNPCTroika *))(*(void ***)this)[308])(this))
		*(float *)((char *)this + 0x6070) = enginerandom->vfunc1(5.0f, 10.0f) + gpGlobals->curtime;
	CAI_NamedThing *pThing = *(CAI_NamedThing **)((char *)this + 0x65e8);
	if (pThing)
		pThing->sub_1025ddd0(this);
}
// END FUNCTION

// FUNCTION: 0x102b5900 size=0xab
#include "CAI_BaseNPCTroika.h"


struct SDifficulty {
	virtual void s0();
	virtual char s1();
	char pad[0x24];
	float m28;
};
extern SDifficulty *g_10924a1c;

#define NAMED (*(CAI_NamedThing **)((char *)this + 0x65e8))

char CAI_BaseNPCTroika::vfunc602()
{
	if ((m_flags5b84 & 2) == 2 || vfunc293() != 0 || !NAMED)
		return 0;
	if (((CAI_BaseNPC *)this)->vfunc308()) {
		if (gpGlobals->curtime >= m_f6074)
			return 1;
	} else {
		double f = g_10924a1c->s1() ? 0.0f : g_10924a1c->m28;
		if ((float)(f + f) <= m_f6268 && !NAMED->sub_1025db50())
			return 1;
	}
	return NAMED->sub_1025de90(this);
}
// END FUNCTION

// FUNCTION: 0x102b59e0 size=0xf1
#include "CAI_BaseNPCTroika.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

// TARGET: CAI_BaseNPCTroika::vfunc603
float CAI_BaseNPCTroika::vfunc603(float *pCur, float *pTarget)
{
	if (*pTarget + 32.0f < *pCur) {
		if (g_1070b244->vfunc2(0, 1))
			return g_1070b244->vfunc1(30.0f, 45.0f);
		return g_1070b244->vfunc1(-30.0f, -45.0f);
	}
	if (*pTarget - 32.0f > *pCur) {
		*pCur = *pTarget;
		if (g_1070b244->vfunc2(0, 1))
			return g_1070b244->vfunc1(170.0f, 179.0f);
		return g_1070b244->vfunc1(-170.0f, -179.0f);
	}
	if (g_1070b244->vfunc2(0, 1))
		return g_1070b244->vfunc1(80.0f, 120.0f);
	return g_1070b244->vfunc1(-80.0f, -120.0f);
}
// END FUNCTION

// FUNCTION: 0x102b5b20 size=0x38
#include "CAI_BaseNPCTroika.h"

class CBaseCombatWeapon;
class CBaseCombatCharacter;
CBaseCombatWeapon *sub_1021fe50(CBaseCombatCharacter *pOwner, const char *pszName, char b);

// TARGET: CAI_BaseNPCTroika::vfunc304
void CAI_BaseNPCTroika::vfunc304()
{
	if (!vfunc307()) {
		if (!vfunc308()) {
			sub_1021fe50((CBaseCombatCharacter *)this, "item_w_fists", 0);
			sub_1033c6b0(0x10);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102b5b70 size=0x25
#include "CBaseCombatCharacter.h"
#include "CNPC_VWerewolf.h"

void sub_1021fee0(void *self, const char *name);

struct Helper
{
	void sub_102b5b70();
};

// TARGET: Helper::sub_102b5b70
void Helper::sub_102b5b70()
{
	CBaseCombatCharacter *pThis = (CBaseCombatCharacter *)this;
	if (((CNPC_VWerewolf *)this)->sub_1033c9c0() & 0x10)
	{
		sub_1021fee0(this, "item_w_fists");
		pThis->sub_1033c770(0x10);
	}
}
// END FUNCTION

// FUNCTION: 0x102b5c00 size=0x131
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CTakeDamageInfo.h"
#include "CCineNPC.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern "C" __declspec(dllimport) int RandomInt(int minVal, int maxVal);

struct CTroikaScriptHandle
{
	unsigned int m_Index;
	CCineNPC *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *e = &g_10566458->m_Slots[m_Index & 0x1fff];
		return e->m_Serial == (int)(m_Index >> 13) ? (CCineNPC *)e->m_pEntity : 0;
	}
};

inline bool IsHandleValid(unsigned int index)
{
	if (index == 0xffffffff)
		return false;
	CGlobalEntityList_Slot *e = &g_10566458->m_Slots[index & 0x1fff];
	return e->m_Serial == (int)(index >> 13) && e->m_pEntity != 0;
}

bool CAI_BaseNPCTroika::vfunc379(CBaseEntity *pEnt, int b, int c, int d, int e, int f, int g)
{
	int i = 0;
	if (m_nDamageRecords > 0)
	{
		do
		{
			CTakeDamageInfo *pInfo = &m_pDamageRecords[i];
			pInfo->m_pInflictor = this;
			pInfo->m_pAttacker = (CTakeDamageAttacker *)this;
			if (RandomInt(0, 1))
				pInfo->sub_101c2a10(4);
			else
				pInfo->sub_101c2a10(5);
			pEnt->sub_100a1250(pInfo);
			i++;
		} while (i < m_nDamageRecords);
	}
	if (i <= 0 && sub_10005bfa(pEnt, b, c, d, e, f, g))
	{
		if (sub_102c1170())
			sub_102c0bb0();
		CTroikaScriptHandle *h = (CTroikaScriptHandle *)&m_h5d74;
		if (IsHandleValid(m_h5d74))
		{
			h->Get()->sub_101a8c30();
			if (*(int *)((char *)this + 0x5cc0) != *(int *)((char *)this + 0x5cc4))
				sub_1026e340(*(int *)((char *)this + 0x5cc4));
		}
		sub_10280d30();
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102b5d90 size=0x13
#include "CAI_BaseNPCTroika.h"

struct CAI_BaseNPCTroikaSlotsView : public CAI_BaseNPCTroika
{
	virtual void pad610();
	virtual void pad611();
	virtual void pad612();
	virtual void pad613();
	virtual void slot614();
};

void CAI_BaseNPCTroika::vfunc380()
{
	CAI_BaseNPC::vfunc380();
	((CAI_BaseNPCTroikaSlotsView *)this)->slot614();
}
// END FUNCTION

// FUNCTION: 0x102b6b50 size=0xaa
#include "CAI_BaseNPCTroika.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CTroikaSlotsX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1) PV100(2) PV100(3) PV100(4)
	PV10(50) PV10(51) PV10(52) PV10(53) PV10(54) PV10(55)
	PV(560) PV(561) PV(562) PV(563) PV(564) PV(565)
	virtual bool vfunc566(CBaseEntity *pHint);
};

struct CRandomX
{
	virtual void v0();
	virtual float vfunc1(float flMin, float flMax);
};


struct CWeaponRangeX
{
	char m_pad0000[0x8c0];
	float m_fl8c0;
};

extern CRandomX *g_1070b244;
int __cdecl sub_102d2980(CAI_BaseNPCTroika *pNPC, int a, int b, float c, int d, int e);

// TARGET: CAI_BaseNPCTroika::vfunc609
int CAI_BaseNPCTroika::vfunc609(char bForce)
{
	if (m_p6444 && ((CTroikaSlotsX *)this)->vfunc566(m_p6444))
		return (int)m_p6444;
	if (!bForce && !(gpGlobals->curtime >= m_f6440))
		return 0;
	m_f6440 = g_1070b244->vfunc1(2.0f, 2.5f) + gpGlobals->curtime;
	float range = 1024.0f;
	if (sub_10007e19())
		range = ((CWeaponRangeX *)sub_10007e19())->m_fl8c0;
	return ::sub_102d2980(this, 8, 0x10, range, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x102b97f0 size=0x6
extern char g_105d1058;

char sub_102b97f0(void)
{
    return g_105d1058;
}
// END FUNCTION

// FUNCTION: 0x102bed30 size=0x42
#include "CAI_BaseNPCTroika.h"
#include "COutputEvent.h"
int CAI_BaseNPCTroika::vfunc142(int a)
{
	if (m_b63d8) {
		if (m_f5d98 != gpGlobals->curtime) {
			m_f5d98 = gpGlobals->curtime;
			((COutputEvent *)((char *)this + 0x5e0c))->sub_100cd660(this, this, 0.0f);
		}
		return 0;
	}
	return CAI_BaseNPC::vfunc142(a);
}
// END FUNCTION

// FUNCTION: 0x102bf070 size=0x210
// TARGET: CAI_BaseNPCTroika::vfunc314
#include "CAI_BaseNPCTroika.h"
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "QAngle.h"

extern CGlobalEntityList *g_10566458;
float sub_1013d650(float flAngle);
void sub_10139970(const Vector &vec, QAngle &ang);

void CAI_BaseNPCTroika::vfunc314(float flDeltaTime)
{
	CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)(void *)this;
	CBaseEntity *pEnt = g_10566458->sub_100290c0((const unsigned int *)&m_h5ba8);
	float flRel, flAbs;

	if (!pEnt)
		pEnt = (CBaseEntity *)vfunc167();

	if (pEnt && *(int *)((char *)this + 0x5bb4) <= 0) {
		Vector vecEye = vfunc193();
		Vector vecPos = sub_10278650(vecEye, 0, 1);
		Vector vecDir = vecPos - vecEye;
		VectorNormalize(vecDir);

		pChar->m_bAimWeaponAtTarget = true;
		pChar->m_hWeaponAimTarget = pEnt;
		pChar->m_vWeaponAimOffset = vecPos - *(Vector *)((CAI_BaseNPC *)(void *)pEnt)->vfunc217();

		QAngle angDir;
		sub_10139970(vecDir, angDir);
		angDir.y += 7.5f;

		QAngle angAbs = *(QAngle *)vfunc219();
		flRel = sub_1013d650(angDir.y - angAbs.y);
		flAbs = sub_1013d650(angDir.x);

		if (-45.0f > flRel) flRel = -45.0f;
		else if (45.0f < flRel) flRel = 45.0f;
		if (-45.0f > flAbs) flAbs = -45.0f;
		else if (45.0f < flAbs) flAbs = 45.0f;
	} else {
		flRel = 0.0f;
		flAbs = 0.0f;
		pChar->m_bAimWeaponAtTarget = false;
	}
	pChar->m_flPoseValue[0] = flAbs;
	pChar->m_flPoseValue[1] = flRel;
	pChar->CBaseCombatCharacter::vfunc314(flDeltaTime);
}
// END FUNCTION

// FUNCTION: 0x102bf340 size=0x105
#include "CAI_BaseNPCTroika.h"
#include "CAI_CsActList.h"
#include "CTakeDamageInfo.h"
#include "CEHandleGet.h"

extern "C" __declspec(dllimport) int __cdecl PyRun_SimpleString(const char *command);

struct CCsActListV : CAI_CsActList
{
	void sub_102ca2a0(int nType, CBaseEntity *pSource, Vector vecPos, int nLevel, float flDuration, CBaseEntity *pOffender, CBaseEntity *pOwner, char bExternal);
};

extern CCsActListV *g_109253f8;
const char *sub_101d3730(const char *fmt, const char *name);

// TARGET: CAI_BaseNPCTroika::vfunc144
void CAI_BaseNPCTroika::vfunc144(int a)
{
	if (!((CTakeDamageInfo *)a)->sub_101c2af0()) {
		Vector vecPos = *(Vector *)vfunc217();
		vecPos.z += 16.0f;
		g_109253f8->sub_102ca2a0(1, (CBaseEntity *)this, vecPos, 3, 100000.0f, 0, (CBaseEntity *)this, 1);
	}
	sub_10265ad0(a);
	sub_10295ab0(5.0f);
	vfunc601((int)this);
	sub_102b53d0(0, "Leaving interesting place (Event_Killed)");
	if (sub_102c1170())
		sub_102c0bb0();
	const char *pszName = *(const char **)((char *)this + 0x26c);
	if (pszName)
		PyRun_SimpleString(sub_101d3730("MarkAsDead(\"%s\")", pszName));
	CGlobalEntityList_Ent *pEnt = EHandle_Get(*(unsigned int *)((char *)this + 0x628c));
	if (pEnt)
		((CAI_BaseNPC *)pEnt)->sub_101828b0((CBaseEntity *)this, 99999.9f);
}
// END FUNCTION

// FUNCTION: 0x102bf4a0 size=0x50
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatWeapon.h"
bool CAI_BaseNPCTroika::vfunc575()
{
	if (vfunc167() && (m_flags14bc & 0x400) == 0x400 && sub_1032e7b0()) {
		if (((CBaseCombatWeapon *)sub_1032e7b0())->vfunc360() & 0x6000)
			return sub_10278c60();
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102bf510 size=0x35
#include "CAI_BaseNPCTroika.h"

// TARGET: CAI_BaseNPCTroika::vfunc466
bool CAI_BaseNPCTroika::vfunc466()
{
	if (sub_1028a150() != 0 && *sub_1028a150() == 0xb9)
		return false;
	if (*(char *)((char *)this + 0x65fa))
		return true;
	return CAI_BaseNPC::vfunc466();
}
// END FUNCTION

// FUNCTION: 0x102bf6e0 size=0x68
#include "CAI_BaseNPCTroika.h"

#define NPCF(type, off) (*(type *)((char *)this + (off)))

// TARGET: CAI_BaseNPCTroika::vfunc418
float CAI_BaseNPCTroika::vfunc418(float a)
{
	switch ((int)a)
	{
	case -1000005:
		return NPCF(float, 0x6484);
	case -1000006:
		return NPCF(float, 0x6488);
	case -1000007:
		return NPCF(float, 0x648c);
	case -1000008:
		return 10.0f;
	default:
		return CAI_BaseNPC::vfunc418(a);
	}
}
// END FUNCTION

// FUNCTION: 0x102bff20 size=0xb6
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CUnknown1070b244.h"

struct TroikaView102bff20 {
	char pad0[0x5d6c];
	float m_f5d6c;
	char pad1[0x6264 - 0x5d70];
	float m_f6264;
	char pad2[0x64d8 - 0x6268];
	float m_f64d8;
	float m_f64dc;
	char pad3[0x6570 - 0x64e0];
	float m_f6570;
};
extern CUnknown1070b244 *g_1070b244;

void CAI_BaseNPCTroika::vfunc333(float flInterval)
{
	TroikaView102bff20 *p = (TroikaView102bff20 *)this;
	if (512.0f > p->m_f6264) {
		p->m_f6570 -= flInterval;
		if (p->m_f6570 < 0.0f) {
			vfunc276();
			p->m_f6570 = g_1070b244->vfunc1(p->m_f64d8, p->m_f64dc);
		}
	}
	if (EHandle_Get(m_hfe8) != 0)
		p->m_f5d6c = gpGlobals->curtime + 2.0f;
	sub_102c0010(flInterval);
	sub_1026b810(flInterval);
}
// END FUNCTION

// FUNCTION: 0x102c0220 size=0x39
#include "CAI_BaseNPCTroika.h"
#include "Ent.h"

// TARGET: CAI_BaseNPCTroika::vfunc35
int CAI_BaseNPCTroika::vfunc35(int a)
{
	if (!sub_102c1170()) {
		if (vfunc295((CBaseCombatCharacter *)a)) {
			return 14 + (((Ent *)this)->sub_10336920() ? 1 : 0);
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x102c0420 size=0x36
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

// TARGET: CAI_BaseNPCTroika::vfunc86
char CAI_BaseNPCTroika::vfunc86(int a, int b, int c, int d, int e)
{
	if (sub_102c1170())
		return 1;
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc86(a, b, c, d, e);
}
// END FUNCTION

// FUNCTION: 0x102c04b0 size=0x4e
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
// TARGET: CAI_BaseNPCTroika::vfunc612
int CAI_BaseNPCTroika::vfunc612()
{
	int r = 0x80;
	CGlobalEntityList_Ent *pEnt = EHandle_Get(m_hfe8);
	if (pEnt) {
		r = 0x280;
		if (!m_b654c)
			r = 0x680;
	}
	return r;
}
// END FUNCTION

// FUNCTION: 0x102c0b60 size=0x3c
#include "CEHandleGet.h"

bool __fastcall sub_102c0b60(void *self)
{
    return EHandle_Get(*(const unsigned int *)((char *)self + 0xfe8)) != 0;
}
// END FUNCTION

// FUNCTION: 0x102c12a0 size=0x10b
#include "CAI_BaseNPCTroika.h"
#include "CUnknown100ecee0.h"

extern CUnknown100ecee0 g_10924980;
extern int (*g_109f3868)(int, int);
struct TroikaView { char pad[0x64e4]; float m_f64e4; };

#define TFIELD(type, off) (*(type *)((char *)this + (off)))

int CAI_BaseNPCTroika::vfunc611()
{
    float fA;
    int iB, iC;
    int *tbl = (int *)g_10924980.sub_100ecee0((CTableNpc_t *)this, (int *)&fA, &iB, &iC);
    int result;
    if (TFIELD(char, 0x64c0) != 0) {
        result = tbl[TFIELD(int, 0x64c8) + 2];
        TFIELD(char, 0x64e0) = 0;
        TFIELD(char, 0x64e1) = 0;
    } else if (TFIELD(char, 0x64e0) == 0 && TFIELD(char, 0x64e1) == 0) {
        int idx = TFIELD(int, 0x64c8);
        int (*pfnRandom)(int, int) = g_109f3868;
        if (tbl[idx + 2] != tbl[idx + 5] && iC > pfnRandom(1, 100)) {
            result = tbl[TFIELD(int, 0x64c8) + 5];
            TFIELD(char, 0x64e0) = 1;
            TFIELD(char, 0x64e1) = 0;
        } else if (gpGlobals->curtime - ((TroikaView *)this)->m_f64e4 > fA && iB > pfnRandom(1, 100)) {
            result = sub_102c1230();
            TFIELD(char, 0x64e0) = 0;
            TFIELD(char, 0x64e1) = 1;
        } else {
            result = tbl[TFIELD(int, 0x64c8) + 2];
            TFIELD(char, 0x64e0) = 0;
            TFIELD(char, 0x64e1) = 0;
        }
    } else {
        result = tbl[TFIELD(int, 0x64c8) + 2];
        TFIELD(char, 0x64e0) = 0;
        TFIELD(char, 0x64e1) = 0;
    }
    if (result == -1)
        result = TFIELD(int, 0x6f0);
    return result;
}
// END FUNCTION

// FUNCTION: 0x102c1680 size=0x321
// TARGET: CAI_BaseNPCTroika::vfunc286
#include "CAI_BaseNPCTroika.h"
#include "CBaseFlex.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CUnknown100ecee0.h"
#include "CBaseAnimating.h"
#include "globalvars.h"

extern int (__cdecl *g_109f3868)(int, int);
extern "C" double __cdecl atof(const char *);
extern CUnknown100ecee0 g_10924980;
void sub_100ea2d0(const char *p0, void *p1, void *p2, int p3, int p4);
int sub_101cd9e0(int a);
char *sub_101d3730(const char *pszFormat, ...);

struct CUnknown10075b70 { int sub_10075b70(); };
struct CUnknown10075c50 { const char *sub_10075c50(); };
struct CUnknown10075ca0 { const char *sub_10075ca0(); };

void CAI_BaseNPCTroika::vfunc286(int a, void *pEvent)
{
	CUnknown10075b70 *pEv = (CUnknown10075b70 *)pEvent;
	CUnknown10075c50 *pEv2 = (CUnknown10075c50 *)pEvent;
	CUnknown10075ca0 *pEv3 = (CUnknown10075ca0 *)pEvent;

	if (pEv->sub_10075b70() == 2)
	{
		sub_102c1a80(a, pEvent);
		return;
	}

	if (pEv->sub_10075b70() == 7)
	{
		int nSeq = ((CBaseAnimating *)this)->sub_1008f7b0(pEv2->sub_10075c50());
		if (nSeq <= -1)
			return;
		int nAct = ((CBaseAnimating *)this)->sub_10090020(nSeq);
		((CEntityVSlots *)this)->slot311(nAct, nAct, nSeq);
		m_b64e0 = 0;
		m_bInStanceChange = 0;
		return;
	}

	if (pEv->sub_10075b70() == 0xd)
	{
		if (!EHandle_Get(m_hfe8))
			return;
		float flValue = atof(pEv2->sub_10075c50());
		float flMin;
		int nChance;
		g_10924980.sub_100ec5d0(m_nCurrDisposition, (int *)&flMin, &nChance);
		if (flValue > flMin)
		{
			if (nChance > g_109f3868(1, 100))
			{
				int nAct = sub_102c1230();
				if (nAct > -1)
				{
					*(int *)((char *)this + 0x6f0) = nAct;
					((CBaseAnimating *)this)->sub_10090950();
					m_n06f8 = 0;
					*(float *)((char *)this + 0x174) = gpGlobals->curtime;
					m_nActivityff0 = 0xf1;
					m_nState0fec = 0xf1;
					m_b64e0 = 0;
					m_bInStanceChange = 1;
				}
			}
		}
		return;
	}

	if (pEv->sub_10075b70() == 0xe)
	{
		if (gpGlobals->curtime > m_flLoudExpressionTime)
		{
			float flA, flB, flMin, flMax;
			int n5;
			const char *pszItem = (const char *)g_10924980.sub_100ec450(m_nCurrDisposition, (int *)&flA, (int *)&flB, (int *)&flMin, (int *)&flMax, &n5);
			float flTime = atof(pEv2->sub_10075c50()) > flMax ? flMax
				: (atof(pEv2->sub_10075c50()) < flMin ? flMin : atof(pEv2->sub_10075c50()));
			((CBaseCombatCharacter *)this)->sub_101067e0(pszItem, flA, flB, 1.0f, 0.0f, flTime);
			m_flLoudExpressionTime = flTime + gpGlobals->curtime + flA + flB + 0.1;
		}
		return;
	}

	if (pEv->sub_10075b70() == 0xf)
	{
		void *pTarget = EHandle_Get(m_hfe8);
		if (!pTarget)
			pTarget = (void *)sub_101cd9e0(1);
		char *psz1 = sub_101d3730("\"%s\"", pEv2->sub_10075c50());
		char *psz = sub_101d3730(pEv3->sub_10075ca0(), psz1);
		sub_100ea2d0(psz, pTarget, this, 0x102, 0);
		return;
	}

	((CBaseFlex *)this)->CBaseFlex::vfunc286(a, pEvent);
}
// END FUNCTION

// FUNCTION: 0x102c1c10 size=0x96
#include "CAI_BaseNPCTroika.h"
extern char *(__cdecl *g_109f3890)(char *, const char *, int);

// TARGET: CAI_BaseNPCTroika::vfunc347
bool CAI_BaseNPCTroika::vfunc347(int event, char *pszName, float *pA, float *pB, float *pC, float *pD)
{
    if (event == 1) {
        g_109f3890(pszName, "Knockback", 0x40);
        *pA = 1.0f;
        *pB = 0.25f;
        *pC = 0.8f;
        *pD = 0.5f;
        int seq = sub_1008dd30(*(int *)((char *)this + 0x6068), -1);
        if (seq >= 0)
            *pC += sub_10091080(seq);
        return true;
    }
    return sub_10107120(event, pszName, pA, pB, pC, pD);
}
// END FUNCTION

// FUNCTION: 0x102c1ce0 size=0x171
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CCineNPC.h"
#include "CUnknown102b5dc0.h"
#include "CBaseCombatWeapon.h"

__declspec(dllimport) void DevWarning(const char *, ...);

void CAI_BaseNPCTroika::vfunc77()
{
    if (*(int *)((char *)this + 0x5cc0) == 4 || EHandle_Get(m_h5d74)) {
        const char *pszName = EHandle_Get(m_h5d74) ? ((CCineNPC *)EHandle_Get(m_h5d74))->sub_1000b5cd() : "**UNKNOWN**";
        DevWarning("Attempting to ScriptHide an NPC (%s) playing a scripted sequence (%s).  Satan will eat your babies if you continue to do this.\n", ((CCineNPC *)this)->sub_1000b5cd(), pszName);
        DevWarning("Cancelling script...\n");
        if (EHandle_Get(m_h5d74))
            ((CCineNPC *)EHandle_Get(m_h5d74))->sub_101a8c30();
        else
            sub_1027d170();
        if (*(int *)((char *)this + 0x5cc0) != 7)
            ((CUnknown102b5dc0 *)this)->sub_102ae7f0(0x6b);
    }
    sub_100a8710();
    if (sub_10007e19())
        ((CBaseCombatWeapon *)sub_10007e19())->vfunc77();
}
// END FUNCTION

// FUNCTION: 0x102c1ec0 size=0x255
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"
#include "CBaseCombatCharacter.h"
#include "CNPCSlots614.h"

struct SScriptRec
{
	char m_pad[0x5f78];
	int m_n5f78;
	int m_n5f7c;
	int m_n5f80;
	int m_n5f84;
	int m_n5f88;
	int m_n5f8c;
};

class SSlotView
{
public:
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8)
	EVS(90) EVS(91) virtual int slot92(); EVS(93) virtual int slot94(); virtual int slot95();
	EVS(96) EVS(97) EVS(98) EVS(99)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS(200) EVS(201) EVS(202) EVS(203) EVS(204) EVS(205) EVS(206) EVS(207) EVS(208) EVS(209)
	EVS(210) virtual int slot211();
};

void CAI_BaseNPCTroika::vfunc78()
{
	SSlotView *pView = (SSlotView *)this;
	if (m_b5d78 && EHandle_Get(m_h5d74)) {
		pView->slot94();
		pView->slot95();
		pView->slot92();
		pView->slot211();
	}
	sub_100a8990();
	((CNPCSlots614 *)this)->slot614();
	if (sub_1032e7b0())
		((CEntityVSlots *)sub_1032e7b0())->slot78();
	if (m_b5d78 && EHandle_Get(m_h5d74)) {
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f78 = pView->slot94();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f7c = pView->slot95();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f80 = pView->slot92();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f84 = pView->slot211();
		((SScriptRec *)EHandle_Get(m_h5d74))->m_n5f88 = m_flags19c;
		unsigned int h = m_h5d74;
		unsigned int flags = m_flags14b8;
		((SScriptRec *)EHandle_Get(h))->m_n5f8c = flags;
	}
	m_b5d78 = 0;
}
// END FUNCTION

// FUNCTION: 0x102c21c0 size=0xf4
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"

int sub_1023bd00();
bool __fastcall sub_10175180(CBaseCombatCharacter *pChar);

#define PV1(p) virtual void p();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CTroikaSlots404
{
	PV100(ta) PV100(tb) PV100(tc) PV100(td)
	PV1(te0) PV1(te1) PV1(te2) PV1(te3)
	virtual int vfunc404(CBaseCombatCharacter *pOther);
};

struct CTroikaCheckView : public CBaseCombatCharacter
{
	char sub_100b5190();	// stub 0x10014da8
};

struct CTroikaOtherView : public CBaseCombatCharacter
{
	char sub_10146b20(CAI_BaseNPCTroika *pNPC);	// stub 0x1000983b
};

struct CTroikaWorldView
{
	char pad[0x4ac];
	int m_n4ac;
};
CTroikaWorldView *sub_1023bd00_w();

// TARGET: CAI_BaseNPCTroika::vfunc295
bool CAI_BaseNPCTroika::vfunc295(CBaseCombatCharacter *pOther)
{
	CTroikaCheckView *pSelf = (CTroikaCheckView *)this;
	if (!pOther)
		return false;
	if (!*(int *)((char *)this + 0x128))
		return false;
	if (!pSelf->vfunc158())
		return false;
	if (!pOther->vfunc158())
		return false;
	if (pSelf->sub_10341aa0())
		return false;
	if (pSelf->sub_100b5190())
		return false;
	if (!*((char *)this + 0x1088))
		return false;
	if ((unsigned char)(*(unsigned int *)((char *)this + 0x5b64) >> 2) & 1)
		return false;
	if (*(unsigned int *)((char *)this + 0x14b8) & 0x80000)
		return false;
	if (sub_102c1170())
		return false;
	if (sub_10175180(pOther))
		return false;
	if (!((CTroikaOtherView *)pOther)->sub_10146b20(this))
		return false;
	if (pSelf->sub_1033e2b0())
		return false;
	if (*(unsigned int *)((char *)this + 0x14bc) & 0x10000000)
		return false;
	CTroikaWorldView *pWorld = (CTroikaWorldView *)sub_1023bd00();
	if (pWorld && pWorld->m_n4ac)
		return false;
	int r = ((CTroikaSlots404 *)this)->vfunc404(pOther);
	if (r == 1 || r == 2)
		return false;
	return true;
}
// END FUNCTION

// FUNCTION: 0x102c2300 size=0xc0
#include "CAI_BaseNPCTroika.h"

struct CTroikaGameState
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x2c - 4];
	int m_n2c;
};
extern CTroikaGameState *g_10924afc;

inline bool TroikaStateActive()
{
	if (g_10924afc->vfunc1())
		return false;
	if (!g_10924afc->m_n2c)
		return false;
	return true;
}

bool CAI_BaseNPCTroika::vfunc294(int unused)
{
	if (sub_100b5190())
		return false;
	if (*(int *)((char *)this + 0x128))
		return false;
	if (m_b63d8)
		return false;
	if (!TroikaStateActive())
	{
		if (vfunc464() != 1 && vfunc464() != 13)
			return false;
	}
	else if (vfunc464() == 7)
		return false;
	if (sub_10014df8(0x6f))
		return false;
	if (sub_10014df8(0x5a))
		return false;
	bool r = ((char (__fastcall *)(CAI_BaseNPCTroika *))(*(void ***)this)[158])(this) != 0;
	return r;
}
// END FUNCTION

// FUNCTION: 0x102c23f0 size=0x27
#include "CAI_BaseNPCTroika.h"
#include "globalvars.h"

// TARGET: CAI_BaseNPCTroika::vfunc614
void CAI_BaseNPCTroika::vfunc614()
{
	float t = gpGlobals->curtime;
	*(float *)((char *)this + 0x17c) = t;
	*(float *)((char *)this + 0x6244) = t;
	*(float *)((char *)this + 0x6248) = t;
	*(float *)((char *)this + 0x624c) = t;
	*(float *)((char *)this + 0x6250) = t;
}
// END FUNCTION

// FUNCTION: 0x102c2ec0 size=0x33e
#include "CAI_BaseNPCTroika.h"
#include "CVStatList_t.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
void CAI_BaseNPCTroika::vfunc589(int stat, int target)
{
	CVStatListSet *pSet = CVStatListSet::Of(this);
	int cur = pSet->Find(3)->sub_10200ca0(stat);
	if (cur < target) {
		if (pSet->Find(2)->sub_10200ca0(stat) < target)
			pSet->Find(2)->sub_10200be0(stat, target);
		int diff = target - cur;
		pSet->Find(3)->sub_10200fc0(stat, diff);
		pSet->Find(3)->sub_10200be0(stat, target);
	} else if (cur > target) {
		int diff = cur - target;
		pSet->Find(3)->sub_10200be0(stat, target);
		pSet->Find(3)->sub_10201100(stat, diff);
	}
}
// END FUNCTION

// FUNCTION: 0x102c48b0 size=0x146
#include "CAI_BaseNPCTroika.h"

#pragma intrinsic(strcmp)
extern "C" int __cdecl strcmp(const char *, const char *);

extern CAI_NamedThing *g_1090fbec;
extern CAI_NamedThing *g_1090fbf0;
extern CAI_NamedThing *g_1090fbf4;

// TARGET: CAI_BaseNPCTroika::vfunc608
bool CAI_BaseNPCTroika::vfunc608(const char *pszName)
{
	CAI_NamedThing *pObj;
	if (!pszName || !*pszName)
		return false;
	if (g_1090fbec && strcmp(pszName, g_1090fbec->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbec;
		pObj = g_1090fbec;
		goto done;
	}
	if (g_1090fbf0 && strcmp(pszName, g_1090fbf0->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbf0;
		pObj = g_1090fbf0;
		goto done;
	}
	if (g_1090fbf4 && strcmp(pszName, g_1090fbf4->sub_1025e120()) == 0) {
		*(CAI_NamedThing **)((char *)this + 0x65e8) = g_1090fbf4;
		pObj = g_1090fbf4;
done:
		const char *pName = pObj->sub_1025e120();
		*(const char **)((char *)this + 0x65ec) = *pName ? pName : 0;
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x102c4a60 size=0x4d
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
// TARGET: CAI_BaseNPCTroika::vfunc342
char CAI_BaseNPCTroika::vfunc342(int pEnt)
{
	if (m_b63d8)
		return 0;
	int p = (int)vfunc293();
	CBaseCombatCharacter *pBase = (CBaseCombatCharacter *)this;
	if (p && p == pEnt && !pBase->sub_1033c900(0x40000))
		return 0;
	return pBase->CBaseCombatCharacter::vfunc342(pEnt);
}
// END FUNCTION

// FUNCTION: 0x102c5470 size=0x38
#include "CAI_BaseNPCTroika.h"

struct EntObj {
	char pad[0x9c];
	int field9c;
};
struct EntSlot {
	EntObj *ent;
	int serial;
	int pad;
};
extern char *g_10566458;

static inline EntObj *ResolveHandle(unsigned int h)
{
	if (h != 0xffffffff) {
		EntSlot *slot = (EntSlot *)(g_10566458 + 4) + (h & 0x1fff);
		if (slot->serial == (int)(h >> 13))
			return slot->ent;
	}
	return 0;
}

int CAI_BaseNPCTroika::vfunc293()
{
	EntObj *ent = ResolveHandle(*(unsigned int *)(m_pad0004 + 0x647c - 4));
	return ent == 0 ? 0 : ent->field9c;
}
// END FUNCTION

// FUNCTION: 0x102c5500 size=0x45
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::vfunc419()
{
	int pWeapon = sub_10007e19();
	if (pWeapon) {
		m_f5bbc = sub_1000cabd(pWeapon);
		m_f5bc0 = sub_10014655(pWeapon);
	} else {
		m_f5bbc = 0.3f;
		m_f5bc0 = 0.5f;
	}
}
// END FUNCTION

// FUNCTION: 0x102c5870 size=0x6
extern void *g_109248d4;

void *sub_102c5870(void)
{
    return &g_109248d4;
}
// END FUNCTION

// FUNCTION: 0x102c5890 size=0x3
#include "CAI_BaseNPCTroika.h"

int CAI_BaseNPCTroika::vfunc81()
{
	return 0;
}
// END FUNCTION
