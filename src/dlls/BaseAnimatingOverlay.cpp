// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 45 blocks
#include "vampire.h"

// FUNCTION: 0x10097ce0 size=0x6
#include "datamap.h"
#include "CBaseAnimatingOverlay.h"
namespace lifted {
extern char g_105509f8;
}
datamap_t *CBaseAnimatingOverlay::vfunc82()
{
    return (datamap_t *)&lifted::g_105509f8;
}
// END FUNCTION

// FUNCTION: 0x10097d00 size=0x5
int sub_10097d40(void);
int g_106ce630 = ((int (*)(int))sub_10097d40)(0);
// END FUNCTION

// FUNCTION: 0x10097d40 size=0x1a
namespace lifted {
extern int g_105509f8;
extern int g_105509fc;
extern char g_10550a3c;
}
int sub_10097d40()
{
    lifted::g_105509fc = 0x46;
    lifted::g_105509f8 = (int)&lifted::g_10550a3c;
    return (int)&lifted::g_105509f8;
}
// END FUNCTION

// FUNCTION: 0x10097d70 size=0x6
#include "CBaseAnimatingOverlay.h"
namespace lifted {
extern char g_10551644;
}
int CBaseAnimatingOverlay::vfunc79()
{
    return (int)&lifted::g_10551644;
}
// END FUNCTION

// FUNCTION: 0x10097d90 size=0xa
#include "SendTable.h"
SendTable g_106ce614;
// END FUNCTION

// FUNCTION: 0x10097e10 size=0x5
int sub_10097e50(void);
int g_106ce610 = ((int (*)(int))sub_10097e50)(0);
// END FUNCTION

// FUNCTION: 0x10097e50 size=0xea
#include "SendProp.h"

class SendTable
{
public:
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);	// SendTable::Construct (stub 0x1000e8fe)
};

SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int extra, void *proxy);
SendProp sub_10246510(const char *name, int offset, int size, int bits, int flags, float low, float high, void *proxy);
void sub_10246300();
extern SendTable g_106ce614;
extern const char *g_1055165c;

// TARGET: sub_10097e50
int sub_10097e50()
{
    static SendProp g_SendProps[] = {
        sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
        sub_10246af0("sequence", 8, 4, 8, 1, 0, 0),
        sub_10246510("cycle", 0xc, 4, 10, 8, 0.0f, 1.0f, (void *)sub_10246300),
        sub_10246510("playbackrate", 0x10, 4, 8, 0x10, -4.0f, 18.0f, (void *)sub_10246300),
        sub_10246510("weight", 0x14, 4, 8, 0, 0.0f, 1.0f, (void *)sub_10246300),
    };
    g_106ce614.sub_10247240(g_SendProps + 1, 4, g_1055165c);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10097fb0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106ce7fc;
extern char g_10551660[];
ServerClassReg g_106ce634("CBaseAnimatingOverlay", &g_106ce7fc, g_10551660);
// END FUNCTION

// FUNCTION: 0x10098020 size=0x6
#include "CBaseAnimatingOverlay.h"
namespace lifted {
extern char g_106ce634;
}
int CBaseAnimatingOverlay::vfunc80()
{
    return (int)&lifted::g_106ce634;
}
// END FUNCTION

// FUNCTION: 0x10098040 size=0x3
#include "CBaseAnimatingOverlay.h"
int CBaseAnimatingOverlay::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10098060 size=0xa
#include "SendTable.h"
SendTable g_106ce7fc;
// END FUNCTION

// FUNCTION: 0x100980e0 size=0x5
int sub_10098120(void);
int g_106ce7f8 = ((int (*)(int))sub_10098120)(0);
// END FUNCTION

// FUNCTION: 0x10098120 size=0x559
#include "SendTable.h"
SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int a, int b);
SendProp sub_10246510(const char *name, int offset, int size, int bits, int flags, float lo, float hi, void *proxy);
SendProp sub_10246dc0(const char *name, int a, void *pTable, void *proxy);
extern void *g_1054d524;
extern const char *g_1055166c;
extern SendTable g_106ce7fc;
void sub_102464d0();
void sub_10246300();
#define P_SEQ(n, o) sub_10246af0(n, o, 4, 0xb, 1, 0, 0)
#define P_CYC(n, o) sub_10246510(n, o, 4, 0xa, 8, 0.0f, 1.0f, (void *)sub_10246300)
#define P_RATE(n, o) sub_10246510(n, o, 4, 8, 0x10, -4.0f, 12.0f, (void *)sub_10246300)
#define P_WGT(n, o) sub_10246510(n, o, 4, 8, 0, 0.0f, 1.0f, (void *)sub_10246300)
#define P_LATCH(n, o) sub_10246af0(n, o, 4, 2, 1, 0, 0)
#define P_FADE(n, o) sub_10246510(n, o, 4, 8, 8, 0.0f, 4.0f, (void *)sub_10246300)
#define P_PIDX(n, o) sub_10246af0(n, o, 4, 4, 1, 0, 0)
#define P_PVAL(n, o) sub_10246510(n, o, 4, 8, 8, 0.0f, 1.0f, (void *)sub_10246300)
int sub_10098120()
{
	static SendProp props[36] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_1054d524, (void *)sub_102464d0),
		P_SEQ("sequence0", 0x73c), P_CYC("cycle0", 0x740), P_RATE("playbackrate0", 0x744), P_WGT("weight0", 0x748),
		P_SEQ("sequence1", 0x76c), P_CYC("cycle1", 0x770), P_RATE("playbackrate1", 0x774), P_WGT("weight1", 0x778),
		P_SEQ("sequence2", 0x79c), P_CYC("cycle2", 0x7a0), P_RATE("playbackrate2", 0x7a4), P_WGT("weight2", 0x7a8),
		P_SEQ("sequence3", 0x7cc), P_CYC("cycle3", 0x7d0), P_RATE("playbackrate3", 0x7d4), P_WGT("weight3", 0x7d8),
		P_SEQ("flinchSequence0", 0x7f4), P_LATCH("flinchLatch0", 0x7f8), P_FADE("flinchFadeIn0", 0x7fc), P_FADE("flinchFadeOut0", 0x800), P_PIDX("flinchPoseParamIndex0", 0x804), P_PVAL("flinchPoseParamValue0", 0x808),
		P_SEQ("flinchSequence1", 0x810), P_LATCH("flinchLatch1", 0x814), P_FADE("flinchFadeIn1", 0x818), P_FADE("flinchFadeOut1", 0x81c), P_PIDX("flinchPoseParamIndex1", 0x820), P_PVAL("flinchPoseParamValue1", 0x824),
		P_SEQ("flinchSequence2", 0x82c), P_LATCH("flinchLatch2", 0x830), P_FADE("flinchFadeIn2", 0x834), P_FADE("flinchFadeOut2", 0x838), P_PIDX("flinchPoseParamIndex2", 0x83c), P_PVAL("flinchPoseParamValue2", 0x840),
	};
	g_106ce7fc.sub_10247240(&props[1], 0x23, g_1055166c);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10098810 size=0xb
#include "CUnknown10098810.h"
CUnknown10098810 *CUnknown10098810::sub_10098810()
{
	m_unk14 = 0;
	m_unk4 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10098830 size=0x15d
#include "CBaseAnimatingOverlay.h"

struct LayerV {
	int m_n00;
	int m_bFinished;
	int m_nSequence;
	float m_flCycle;
	float m_flRate;
	float m_flWeight;
	float m_flMaxWeight;
	float m_flFadeIn;
	float m_flFadeOut;
};

float CAnimationLayerAdvance::sub_10098830(float dt, CBaseAnimatingOverlay *pEntity)
{
	LayerV *l = (LayerV *)this;
	l->m_flCycle = pEntity->sub_10091230(l->m_nSequence) * l->m_flRate * dt + l->m_flCycle;
	if (l->m_flCycle < 0.0) {
		if (pEntity->sub_10090ef0(l->m_nSequence) & 1)
			l->m_flCycle = l->m_flCycle - (int)l->m_flCycle;
		else
			l->m_flCycle = 0.0f;
	} else if (l->m_flCycle >= 1.0) {
		l->m_bFinished = 1;
		if (pEntity->sub_10090ef0(l->m_nSequence) & 1)
			l->m_flCycle = l->m_flCycle - (int)l->m_flCycle;
		else
			l->m_flCycle = 1.0f;
	}
	l->m_flWeight = 1.0f;
	if (l->m_flFadeIn < 0.95f || l->m_flFadeOut < 0.95f) {
		if (l->m_flFadeIn != 0.0f && l->m_flCycle < l->m_flFadeIn)
			l->m_flWeight = l->m_flCycle / l->m_flFadeIn;
		if (l->m_flFadeOut != 0.0f && l->m_flCycle > 1.0 - l->m_flFadeOut)
			l->m_flWeight = (1.0 - l->m_flCycle) / l->m_flFadeOut;
		double flSq = l->m_flWeight * l->m_flWeight;
		double flCube = l->m_flWeight * flSq;
		l->m_flWeight = 3.0 * flSq - (flCube + flCube);
	}
	if (l->m_flMaxWeight < l->m_flWeight)
		l->m_flWeight = l->m_flMaxWeight;
	return dt;
}
// END FUNCTION

// FUNCTION: 0x100989f0 size=0x33
extern char vt_10450024[];

namespace block_100989f0 {
    struct CUnknown10098810Unit {
        char pad0[4];
        int m_n4;
        char pad1[0xc];
        int m_n14;
        CUnknown10098810Unit *sub_10098810();
    };
    CUnknown10098810Unit *CUnknown10098810Unit::sub_10098810()
    {
        m_n14 = 0;
        m_n4 = 0;
        return this;
    }
}
using namespace block_100989f0;

struct COverlayElemView {
    char pad0[0x30];
};

struct COverlayView {
    void *vfptr;
    char pad0[0x730 - 4];
    unsigned char m_b730;
    char pad1[3];
    COverlayElemView m_elems[4];
    void sub_1008b230();
};

// TARGET: sub_100989f0
COverlayView *__fastcall sub_100989f0(COverlayView *p)
{
    p->sub_1008b230();
    for (int i = 0; i < 4; i++)
        ((CUnknown10098810Unit *)&p->m_elems[i])->sub_10098810();
    p->vfptr = vt_10450024;
    p->m_b730 = 0;
    return p;
}
// END FUNCTION

// FUNCTION: 0x10098a40 size=0x3
#include "CBaseAnimatingOverlay.h"
int CBaseAnimatingOverlay::vfunc267()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10098a60 size=0x1e
#include "CBaseAnimatingOverlay.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseAnimatingOverlay::vfunc5
CBaseEntity *CBaseAnimatingOverlay::vfunc5(unsigned int flags)
{
	sub_10004c3c();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10098a90 size=0xe0
#include "CBaseEntity.h"
#include "CBaseAnimatingOverlay.h"

void CBaseAnimatingOverlay::vfunc31(int a)
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	int *p = (int *)((char *)this + 0x738);
	for (int i = 24; i != 0; i--) {
		pEnt->sub_1009b8a0(a, (int)"m_bNoFlinch", *((char *)this + 0x730));
		pEnt->sub_1009b640(a, (int)"m_AnimOverlay", (int)"-v-");
		pEnt->sub_1009bb40(a, (int)"  m_fFlags", p[-1]);
		pEnt->sub_1009b8a0(a, (int)"  m_fSequenceFinished", p[0] != 0);
		pEnt->sub_1009b980(a, "  m_nSequence", p[1]);
		pEnt->sub_1009ba60(a, "  m_flCycle", p[2]);
		pEnt->sub_1009ba60(a, "  m_flPlaybackRate", p[3]);
		pEnt->sub_1009ba60(a, "  m_flWeight", p[4]);
		pEnt->sub_1009b980(a, "  m_nActivity", p[8]);
		pEnt->sub_1009b8a0(a, (int)"  m_bAutoKillWhenFinished", (char)p[9]);
		p += 12;
	}
	sub_1008b530(a);
}
// END FUNCTION

// FUNCTION: 0x10098bb0 size=0x70
#include "CBaseAnimatingOverlay.h"

#define OV(n) virtual void v##n();
#define OV10(p) OV(p##0) OV(p##1) OV(p##2) OV(p##3) OV(p##4) OV(p##5) OV(p##6) OV(p##7) OV(p##8) OV(p##9)
struct COverlayVSlots {
	OV(0) OV(1) OV(2) OV(3) OV(4) OV(5) OV(6) OV(7) OV(8) OV(9)
	OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10)
	OV(110) OV(111)
	virtual void v112(int layer, int activity);
};

extern float g_104454c4;

float CBaseAnimatingOverlay::vfunc250(float a)
{
	float result = sub_1008f120(a);
	int i = 0;
	CAnimationLayer *layer = m_Layers;
	do {
		if (layer->m_f10 != g_104454c4) {
			((CAnimationLayerAdvance *)((char *)layer - 4))->sub_10098830(result, this);
			if (layer->m_n00 && layer->m_b24) {
				int n = layer->m_n20;
				layer->m_f10 = 0.0f;
				((COverlayVSlots *)this)->v112(i, n);
			}
		}
		i++;
		layer++;
	} while (i < 4);
	return result;
}
// END FUNCTION

// FUNCTION: 0x10098c40 size=0x28
struct CUnknownEntry10098c40 {
    float fl;
    char pad_0004[0x30 - 4];
};

struct CUnknown10098c40 {
    char pad_0000[0x748];
    CUnknownEntry10098c40 m_entries[4];
    int sub_10098c40();
};

// TARGET: CUnknown10098c40::sub_10098c40
int CUnknown10098c40::sub_10098c40()
{
    int n = 0;
    for (int i = 0; i < 4; i++) {
        if (m_entries[i].fl != 0.0f)
            n++;
    }
    return n;
}
// END FUNCTION

// FUNCTION: 0x10098c80 size=0x3b
#include "CBaseAnimatingOverlay.h"

struct COverlayBase
{
	void sub_10091880(float flInterval, void *pListener);
};

// TARGET: CBaseAnimatingOverlay::vfunc258
void CBaseAnimatingOverlay::vfunc258(float flInterval, void *pListener)
{
	((COverlayBase *)this)->sub_10091880(flInterval, pListener);
	CAnimationLayerAdvance *pLayer = (CAnimationLayerAdvance *)((char *)this + 0x734);
	for (int i = 0; i < 4; i++)
	{
		pLayer->sub_10098cd0(*(int *)&flInterval, pListener, this);
		pLayer = (CAnimationLayerAdvance *)((char *)pLayer + 0x30);
	}
}
// END FUNCTION

// FUNCTION: 0x10098cd0 size=0x17c
#include "CBaseAnimating.h"
#include "CBaseAnimatingOverlay.h"
#include "CEntityVSlots.h"

struct OptBuf_t { char c[64]; };

struct AnimEvent_t {
	int event;
	char *options;
	float cycle;
	float eventtime;
	CBaseAnimating *pSource;
	OptBuf_t optionBuf;
};

struct SeqEvent_t {
	float cycle;
	int event;
	int type;
	OptBuf_t options;
};

struct SeqDesc_t {
	char pad0[8];
	int flags;
	char pad1[8];
	int numevents;
	int eventindex;
};

struct LayerView {
	int pad0;
	int finished;
	int sequence;
	float cycle;
	float rate;
	char pad14[0x18];
	float lastCycle;
};

struct EntView {
	char pad[0x174];
	float animTime;
	char pad2[0xac];
	unsigned int field224;
};

void CAnimationLayerAdvance::sub_10098cd0(int unused, void *pListener, void *pEntity)
{
	LayerView *layer = (LayerView *)this;
	CBaseAnimating *pAnim = (CBaseAnimating *)pEntity;
	float flCycleRate = pAnim->sub_10091230(layer->sequence) * layer->rate;
	float flLast = layer->lastCycle;
	float flNew = flCycleRate * 0.1f + layer->cycle;
	layer->finished = 0;
	layer->lastCycle = flNew;
	SeqDesc_t *pSeq = (SeqDesc_t *)pAnim->sub_1008d990(layer->sequence);
	if (pSeq) {
		AnimEvent_t ev;
		for (int i = 0; i < pSeq->numevents; i++) {
			SeqEvent_t *pe = (SeqEvent_t *)((char *)pSeq + pSeq->eventindex + i * 0x4c);
			if (pe->event < 5000
				&& ((pe->cycle >= flLast && pe->cycle < flNew)
					|| ((pSeq->flags & 1) && flNew >= 1.0f && pe->cycle < flNew - 1.0f))) {
				ev.pSource = pAnim;
				ev.cycle = pe->cycle;
				ev.eventtime = (ev.cycle - layer->cycle) / flCycleRate + ((EntView *)pEntity)->animTime;
				ev.event = pe->event;
				ev.optionBuf = pe->options;
				ev.options = ev.optionBuf.c;
				if (((EntView *)pEntity)->field224 & 0x80000000)
					pAnim->sub_1008cfc0(pAnim->sub_100ab4f0(), &ev);
				((CEntityVSlots *)pListener)->slot259(&ev);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10098eb0 size=0x11d
#include "CBaseAnimating.h"
#include "CBaseAnimatingOverlay.h"
#include "Quaternion.h"

void sub_100c32e0(void *pHdr, void *pPos, void *pQ, float *pPose, int mask);
void sub_100c2ce0(void *pHdr, void *pPos, void *pQ, float *pCtl, int mask);

void CBaseAnimatingOverlay::vfunc255(void *pPos, void *pQ, int mask)
{
	Quaternion q2[350];
	Vector pos2[350];
	CBaseAnimating *pAnim = (CBaseAnimating *)this;
	void *pHdr = engine->vfunc18(((CBaseEntity *)this)->vfunc8());
	if (pHdr) {
		pAnim->sub_1008e770(pPos, pQ, *(int *)((char *)this + 0x6f0), *(int *)((char *)this + 0x6f8), (float *)((char *)this + 0x690), mask);
		for (int i = 0; i < 4; i++) {
			if (m_Layers[i].m_f10 > 0.0f) {
				pAnim->sub_1008e770(pos2, q2, m_Layers[i].m_nSequence, m_Layers[i].m_n08, (float *)((char *)this + 0x690), mask);
				pAnim->sub_1008eb70((int)pQ, (int)pPos, m_Layers[i].m_nSequence, (int)q2, (int)pos2, *(int *)&m_Layers[i].m_f10, mask);
			}
		}
		sub_100c32e0(pHdr, pPos, pQ, (float *)((char *)this + 0x690), mask);
		sub_100c2ce0(pHdr, pPos, pQ, (float *)((char *)this + 0x6fc), mask);
	}
}
// END FUNCTION

// FUNCTION: 0x10099020 size=0x98
#include "CBaseAnimatingOverlay.h"

void CBaseAnimatingOverlay::vfunc268(int index, int a, int sequence, char flag)
{
	m_Layers[index].m_n20 = a;
	m_Layers[index].m_n08 = 0;
	m_Layers[index].m_f0c = 1.0f;
	m_Layers[index].m_nSequence = sequence;
	m_Layers[index].m_f18 = 0.2f;
	m_Layers[index].m_f1c = 0.2f;
	m_Layers[index].m_f10 = 0.1f;
	m_Layers[index].m_f14 = 1.0f;
	m_Layers[index].m_b24 = flag;
	m_Layers[index].m_n00 = 0;
	m_Layers[index].m_n28 = 0;
	char *pSeq = sub_1008d990(sequence);
	if (pSeq && (pSeq[8] & 2)) {
		m_Layers[index].m_f18 = 0;
		m_Layers[index].m_f1c = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100990f0 size=0x31
#include "CBaseAnimatingOverlay.h"
#include "CBCCSlotViews.h"

class COverlaySlotView100990f0
{
public:
	VIEW_SLOT100(0) VIEW_SLOT100(1)
	VIEW_SLOT10(20) VIEW_SLOT10(21) VIEW_SLOT10(22) VIEW_SLOT10(23) VIEW_SLOT10(24) VIEW_SLOT10(25)
	VIEW_SLOT(260) VIEW_SLOT(261) VIEW_SLOT(262) VIEW_SLOT(263) VIEW_SLOT(264) VIEW_SLOT(265) VIEW_SLOT(266) VIEW_SLOT(267)
	virtual void vfunc268(int index, int a, int sequence, int b);
	VIEW_SLOT(269) VIEW_SLOT(270) VIEW_SLOT(271)
	virtual int vfunc272();
};

// TARGET: CBaseAnimatingOverlay::sub_100990f0
int CBaseAnimatingOverlay::sub_100990f0(int sequence, int b)
{
	COverlaySlotView100990f0 *pView = (COverlaySlotView100990f0 *)this;
	int index = pView->vfunc272();
	if (index != -1)
		pView->vfunc268(index, -1, sequence, b);
	return index;
}
// END FUNCTION

// FUNCTION: 0x10099140 size=0x4e
#include "CBaseAnimatingOverlay.h"
int CBaseAnimatingOverlay::sub_10099140(int sequence, float flDivisor, int b)
{
	int i = sub_100990f0(sequence, b);
	if (i >= 0 && flDivisor > 0.0f)
		m_Layers[i].m_f0c = sub_10091080(sequence) / flDivisor;
	return i;
}
// END FUNCTION

// FUNCTION: 0x100991b0 size=0x72
#include "CBaseAnimatingOverlay.h"

#define OV(n) virtual void v##n();
#define OV10(p) OV(p##0) OV(p##1) OV(p##2) OV(p##3) OV(p##4) OV(p##5) OV(p##6) OV(p##7) OV(p##8) OV(p##9)
struct COverlayVSlots2 {
	OV(0) OV(1) OV(2) OV(3) OV(4) OV(5) OV(6) OV(7) OV(8) OV(9)
	OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10) OV10(11) OV10(12) OV10(13) OV10(14) OV10(15) OV10(16) OV10(17) OV10(18) OV10(19)
	OV10(20) OV10(21) OV10(22) OV10(23) OV10(24) OV10(25) OV10(26)
	virtual char v270(int activity);
	virtual int v271(int activity);
};

extern void (*g_109f3630)(const char *fmt, ...);
const char *sub_1025d730(int activity);

int CBaseAnimatingOverlay::sub_100991b0(int activity, int b)
{
	if (((COverlayVSlots2 *)this)->v270(activity))
		return ((COverlayVSlots2 *)this)->v271(activity);
	int sequence = sub_1008dc40(activity, -1);
	if (sequence <= 0) {
		g_109f3630("CBaseAnimatingOverlay::AddGesture:  model missing activity %s\n", sub_1025d730(activity));
		return -1;
	}
	int layer = sub_100990f0(sequence, b);
	if (layer != -1)
		m_Layers[layer].m_n20 = activity;
	return layer;
}
// END FUNCTION

// FUNCTION: 0x10099250 size=0x59
#include "CBaseAnimatingOverlay.h"
int CBaseAnimatingOverlay::sub_10099250(int activity, float flDivisor, int b)
{
	int layer = sub_100991b0(activity, b);
	if (layer >= 0 && flDivisor > 0.0f)
		m_Layers[layer].m_f0c = sub_10091080(m_Layers[layer].m_nSequence) / flDivisor;
	return layer;
}
// END FUNCTION

// FUNCTION: 0x100992d0 size=0x3f
#include "CBaseAnimatingOverlay.h"

struct COverlayView100992d0
{
	char m_pad0[0x73c];
	int m_nSequence;
	int m_n740;
	float m_flRate;
	int m_n748;
	int m_nValue;
};

// TARGET: CBaseAnimatingOverlay::sub_100992d0
bool CBaseAnimatingOverlay::sub_100992d0(int index, float flDivisor, int nValue)
{
	if (index != -1)
	{
		float flRate = sub_10091080(((COverlayView100992d0 *)((char *)this + index * 0x30))->m_nSequence) / flDivisor;
		COverlayView100992d0 *pRec = (COverlayView100992d0 *)((char *)this + index * 0x30);
		pRec->m_nValue = nValue;
		pRec->m_flRate = flRate;
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10099320 size=0x28
#include "CBaseAnimatingOverlay.h"
#define VS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
// the slots 0 to 270 of the overlay's vtable, only the slot 271 is called
struct CUnknown10099320VT
{
	VS10(a) VS10(b) VS10(c) VS10(d) VS10(e) VS10(f) VS10(g) VS10(h) VS10(i) VS10(j)
	VS10(k) VS10(l) VS10(m) VS10(n) VS10(o) VS10(p) VS10(q) VS10(r) VS10(s) VS10(t)
	VS10(u) VS10(v) VS10(w) VS10(x) VS10(y) VS10(z) VS10(A)
	virtual void zz();
	virtual int vfunc271(int a);
};
// TARGET: CBaseAnimatingOverlay::sub_10099320
void CBaseAnimatingOverlay::sub_10099320(int a, float b, int c)
{
    int r = ((CUnknown10099320VT *)this)->vfunc271(a);
    sub_100992d0(r, b, c);
}
// END FUNCTION

// FUNCTION: 0x10099360 size=0x1a
struct CUnk10099360
{
	void sub_10099360(int index, float flValue);
};

// TARGET: sub_10099360
void CUnk10099360::sub_10099360(int index, float flValue)
{
	if (index != -1) {
		*(float *)((char *)this + (index * 3 + 0x75) * 0x10) = flValue;
	}
}
// END FUNCTION

// FUNCTION: 0x10099390 size=0x1d
struct CUnk10099390
{
	void sub_10099390(int index, float flValue);
};

// TARGET: CUnk10099390::sub_10099390
void CUnk10099390::sub_10099390(int index, float flValue)
{
	if (index != -1) {
		*(float *)((char *)this + index * 0x30 + 0x754) = flValue;
	}
}
// END FUNCTION

// FUNCTION: 0x100993c0 size=0x23
// TARGET: sub_100993c0
char __fastcall sub_100993c0(void *pSelf, int unused, int index)
{
    if (index != -1) {
        return *(int *)((char *)pSelf + index * 0x30 + 0x738) != 0;
    }
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10099400 size=0x1e
#include "CBasePlayer.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CSlotView
{
	V100(a0) V100(a1) V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) virtual void c0();
	virtual int vfunc271(int a);
};

char CBasePlayer::sub_10099400(int a)
{
	int r = ((CSlotView *)this)->vfunc271(a);
	return sub_100993c0(r);
}
// END FUNCTION

// FUNCTION: 0x10099430 size=0x2a
char __stdcall sub_10014ffb(int p);

struct CUnit10099430 {
    char sub_10099430(int index);
};

char CUnit10099430::sub_10099430(int index)
{
    if (index != -1) {
        int p = *(int *)((char *)this + index * 0x30 + 0x73c);
        if (p != 0) {
            char r = sub_10014ffb(p);
            r &= 1;
            return r;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10099470 size=0x40
#include "CBaseAnimatingOverlay.h"

// TARGET: CBaseAnimatingOverlay::vfunc272
int CBaseAnimatingOverlay::vfunc272()
{
	int i = (*(int (__fastcall **)(CBaseAnimatingOverlay *))(*(int *)this + 0x42c))(this);
	if (i < 4) {
		do {
			if (m_Layers[i].m_f10 == 0.0f) {
				return i;
			}
			i++;
		} while (i < 4);
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x100994c0 size=0x54
#include "CBaseAnimatingOverlay.h"
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SOverlaySlots {
	V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
	V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
	V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5)
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6();
	virtual int slot267();
};
// TARGET: CBaseAnimatingOverlay::vfunc271
int CBaseAnimatingOverlay::vfunc271(int a)
{
	for (int i = ((SOverlaySlots *)this)->slot267(); i < 4; i++) {
		if (m_Layers[i].m_f10 != 0.0f && m_Layers[i].m_n20 != -1 && m_Layers[i].m_n20 == a)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10099540 size=0x16
#include "CBaseAnimatingOverlay.h"
#include "CEntityVSlots.h"

char CBaseAnimatingOverlay::vfunc270(int activity)
{
	return ((CEntityVSlots *)this)->slot271(activity) != -1;
}
// END FUNCTION

// FUNCTION: 0x10099570 size=0x46
#include "CBaseAnimatingOverlay.h"
#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
#define V100(n) V10(n##0) V10(n##1) V10(n##2) V10(n##3) V10(n##4) V10(n##5) V10(n##6) V10(n##7) V10(n##8) V10(n##9)
struct COverlayView {
	V100(a) V100(b)
	V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5) V10(c6)
	virtual void d0();
	virtual int Slot271(int a);
};
// TARGET: CBaseAnimatingOverlay::vfunc273
void CBaseAnimatingOverlay::vfunc273(int a, char b, int c)
{
	int i = ((COverlayView *)this)->Slot271(a);
	if (i == -1) {
		if (b)
			sub_100991b0(a, c);
	} else {
		m_Layers[i].m_n08 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x100995e0 size=0x32
#include "CBaseAnimatingOverlay.h"
#include "CEntityVSlots.h"
void CBaseAnimatingOverlay::vfunc274(int a)
{
	int i = ((CEntityVSlots *)this)->slot271(a);
	if (i != -1) {
		m_Layers[i].m_f10 = 0;
		m_Layers[i].m_nSequence = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10099630 size=0x19
#include "CBaseAnimatingOverlay.h"

void CBaseAnimatingOverlay::vfunc275()
{
	for (int i = 0; i < 4; i++)
	{
		m_Layers[i].m_f10 = 0;
		m_Layers[i].m_nSequence = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10099660 size=0x1d
#include "CBaseAnimatingOverlay.h"

// TARGET: CBaseAnimatingOverlay::vfunc269
void CBaseAnimatingOverlay::vfunc269(int index)
{
	m_Layers[index].m_f10 = 0;
	m_Layers[index].m_nSequence = 0;
}
// END FUNCTION

// FUNCTION: 0x10099690 size=0x110
#include "CBaseAnimatingOverlay.h"
#include "CEntityVSlots.h"

float sub_100c43e0(void *pStudioHdr, int nSequence, int nExtra, int *pData);

void CBaseAnimatingOverlay::vfunc265(int activity, float flWeight, float flFade, int pszEvent, int nExtra)
{
	if (((CEntityVSlots *)this)->slot158() && !m_bNoFlinch)
	{
		int iBest = 0;
		for (int i = 1; i < 3; i++)
		{
			if (m_Flinch[i].m_fl18 < m_Flinch[iBest].m_fl18)
				iBest = i;
		}
		int nSequence = sub_1008dc40(activity, -1);
		if (nSequence >= 0)
		{
			m_Flinch[iBest].m_n00 = nSequence;
			m_Flinch[iBest].m_fl08 = flWeight;
			m_Flinch[iBest].m_fl0c = flFade;
			m_Flinch[iBest].m_n10 = 0x18;
			m_Flinch[iBest].m_n04 = (m_Flinch[iBest].m_n04 + 1) & 3;
			m_Flinch[iBest].m_fl18 = flWeight + gpGlobals->curtime + flFade;
			if (pszEvent)
			{
				int nEventSeq = sub_10092270(pszEvent);
				if (nEventSeq >= 0)
				{
					m_Flinch[iBest].m_n10 = nEventSeq;
					sub_100c43e0(sub_100952d0(-1), nEventSeq, nExtra, &m_Flinch[iBest].m_n14);
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100997f0 size=0x2b
#include "CBaseAnimatingOverlay.h"

// TARGET: CBaseAnimatingOverlay::vfunc266
void CBaseAnimatingOverlay::vfunc266()
{
	CAnimationLayer28 *pLayer = (CAnimationLayer28 *)((char *)this + 0x7f4);
	int i = 3;
	do
	{
		pLayer->m_fl18 = gpGlobals->curtime - 1.0f;
		pLayer->m_n00 = -1;
		pLayer++;
	} while (--i);
}
// END FUNCTION
