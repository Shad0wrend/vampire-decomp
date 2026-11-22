// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 13 blocks
#include "vampire.h"

// FUNCTION: 0x10428310 size=0x36
// TARGET: sub_10428310
__declspec(dllimport) void Warning(const char *pszFormat, ...);

struct CEyePosSource
{
	char pad00[0x9c];
	int m_eyePos[3];	// 0x9c
};

void sub_10428310(CEyePosSource *pSource, int *pOut)
{
	if (pSource == 0) {
		Warning("GetEyePosition() Can't get pstudiohdr ptr!\n");
		return;
	}
	pOut[0] = pSource->m_eyePos[0];
	pOut[1] = pSource->m_eyePos[1];
	pOut[2] = pSource->m_eyePos[2];
}
// END FUNCTION

// FUNCTION: 0x10428360 size=0xc3
extern "C" int __cdecl _strcmpi(const char *, const char *);
void sub_10427dc0(char *);
int sub_10001aaa(char *p, const char *name);
struct SlotObjX { virtual void v0(); virtual char *v1(char *a, int b); };
struct SlotRecX { int a; SlotObjX *obj; char pad[0x6c]; };

int sub_10428360(char *p, const char *name)
{
    if (p) {
        if (*(int *)(p + 0x110)) {
            sub_10427dc0(p);
            char *base = p + *(int *)(p + 0x114);
            int i = 0;
            if (0 < *(int *)(p + 0x110)) {
                char *e = base;
                do {
                    if (_strcmpi(e + *(int *)(e + 4), name) == 0)
                        return *(int *)(base + i * 0x2fc + 0xc);
                    i++;
                    e += 0x2fc;
                } while (i < *(int *)(p + 0x110));
            }
        }
        int j = 0;
        if (0 < *(int *)(p + 0x194)) {
            int o = 0;
            do {
                SlotRecX *q = (SlotRecX *)((char *)(*(int *)(p + 0x198) + o) + (int)p);
                if (q->obj) {
                    int r = sub_10001aaa(q->obj->v1(p, j), name);
                    if (r != -1)
                        return r;
                }
                j++;
                o += 0x74;
            } while (j < *(int *)(p + 0x194));
        }
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10428470 size=0x40
int sub_104284c0(int a, int b);
int sub_10428360(int a, int b);
int sub_10428280(int a, int b, int c, int d, int e);

// TARGET: sub_10428470
int sub_10428470(int a, int b)
{
    int iVar1 = sub_104284c0(a, b);
    if (iVar1 < 0) {
        iVar1 = sub_10428360(a, b);
        if (iVar1 != -1) {
            return sub_10428280(a, iVar1, 0, 0, -1);
        }
        iVar1 = -1;
    }
    return iVar1;
}
// END FUNCTION

// FUNCTION: 0x104284c0 size=0xc2
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct IncludeModelProvider
{
	virtual void v0();
	virtual struct StudioHdr *vfunc1(StudioHdr *pHdr, int index);
};

struct SeqDesc
{
	int m_nLabelIndex;
	char m_pad0004[0x2fc - 4];
};

struct IncludeModel
{
	int m_pad0000;
	IncludeModelProvider *m_pProvider;	// 0x04
	int m_nBaseSequence;	// 0x08
	char m_pad000c[0x74 - 0xc];
};

struct StudioHdr
{
	char m_pad0000[0x110];
	int numseq;	// 0x110
	int seqindex;	// 0x114
	char m_pad0118[0x194 - 0x118];
	int numincludemodels;	// 0x194
	int includemodelindex;	// 0x198
};

int sub_104284c0(StudioHdr *pHdr, const char *pszLabel)
{
	if (!pHdr)
		return -1;
	for (int i = 0; i < pHdr->numseq; i++) {
		int idx = i;
		if (idx < 0)
			idx = 0;
		SeqDesc *pSeq = (SeqDesc *)((char *)pHdr + (pHdr->seqindex + idx * sizeof(SeqDesc)));
		if (_strcmpi((const char *)pSeq + pSeq->m_nLabelIndex, pszLabel) == 0)
			return i;
	}
	for (int j = 0; j < pHdr->numincludemodels; j++) {
		IncludeModel *pInc = (IncludeModel *)((char *)pHdr + (pHdr->includemodelindex + j * sizeof(IncludeModel)));
		if (pInc->m_pProvider) {
			int r = sub_104284c0(pInc->m_pProvider->vfunc1(pHdr, j), pszLabel);
			if (r >= 0)
				return pInc->m_nBaseSequence + r;
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x104285d0 size=0x87
#include "StudioHdr.h"

extern void (*g_109f3630)(const char *fmt, ...);
void *__cdecl sub_100c7480(StudioHdr *pstudiohdr, int iSequence);
void __cdecl sub_100c5d10(StudioHdr *pstudiohdr, int iSequence, float flCycle, float flFraction, float *poseParameter, float *pVec, float *pOut);

void sub_104285d0(StudioHdr *pstudiohdr, int iSequence, float *pPose, float *pVec)
{
	float vecOut[3];
	if (!pstudiohdr) {
		g_109f3630("Bad pstudiohdr in GetSequenceLinearMotion()!\n");
		return;
	}
	if (!sub_100c7480(pstudiohdr, iSequence)) {
		if (sub_100c7480(pstudiohdr, 0)) {
			g_109f3630("Bad sequence (%i out of %i max) in GetSequenceLinearMotion() for model '%s'!\n", iSequence, pstudiohdr->m_nLocalSeq, (char *)pstudiohdr + 0xc);
			return;
		}
	} else {
		sub_100c5d10(pstudiohdr, iSequence, 0, 1.0f, pPose, pVec, vecOut);
	}
}
// END FUNCTION

// FUNCTION: 0x10428690 size=0x87
#include "Vector.h"
struct CStudioHdrRaw
{
	char m_pad0000[0xc];
	char m_szName[0x104];	// 0x0c
	int m_numSequences;	// 0x110
};
extern __declspec(dllimport) void DevMsg(const char *fmt, ...);
void *sub_100c7480(CStudioHdrRaw *pStudioHdr, int iSequence);
void sub_100c5d10(CStudioHdrRaw *pStudioHdr, int iSequence, int a, float flRate, float *pPoseParameter, Vector *pOut, float flCycle);
void sub_10428690(CStudioHdrRaw *pStudioHdr, int iSequence, float *pPoseParameter, float flCycle)
{
	Vector vecOut;
	if (!pStudioHdr) {
		DevMsg("Bad pstudiohdr in GetSequenceLinearMotion()!\n");
		return;
	}
	if (!sub_100c7480(pStudioHdr, iSequence)) {
		if (sub_100c7480(pStudioHdr, 0))
			DevMsg("Bad sequence (%i out of %i max) in GetSequenceAngularMotion() for model '%s'!\n", iSequence, pStudioHdr->m_numSequences, pStudioHdr->m_szName);
	} else {
		sub_100c5d10(pStudioHdr, iSequence, 0, 1.0f, pPoseParameter, &vecOut, flCycle);
	}
}
// END FUNCTION

// FUNCTION: 0x10428750 size=0x57
extern __declspec(dllimport) void __cdecl DevMsg(const char *, ...);
int *sub_100c7480(int a, int b);
const char *sub_10428750(int pStudioHdr, int iSequence)
{
    int *seqdesc = sub_100c7480(pStudioHdr, iSequence);
    if (!seqdesc) {
        if (pStudioHdr) {
            DevMsg("Bad sequence %d in GetSequenceName() for model '%s'!\n", iSequence, (char *)pStudioHdr + 0xc);
            return "Unknown";
        }
        DevMsg("Null model in GetSequenceName() for sequence %d\n", iSequence);
        return "Unknown";
    }
    return (const char *)seqdesc + seqdesc[0];
}
// END FUNCTION

// FUNCTION: 0x104287d0 size=0x58
extern __declspec(dllimport) void __cdecl DevMsg(const char *, ...);
int *sub_100c7480(int a, int b);
const char *sub_104287d0(int pStudioHdr, int iSequence)
{
    int *seqdesc = sub_100c7480(pStudioHdr, iSequence);
    if (!seqdesc) {
        if (pStudioHdr) {
            DevMsg("Bad sequence %d in GetSequenceActivityName() for model '%s'!\n", iSequence, (char *)pStudioHdr + 0xc);
            return "Unknown";
        }
        DevMsg("Null model in GetSequenceActivityName() for sequence %d\n", iSequence);
        return "Unknown";
    }
    return (const char *)seqdesc + seqdesc[1];
}
// END FUNCTION

// FUNCTION: 0x10428850 size=0x1b
// TARGET: sub_10428850
int sub_10428850(int v)
{
    if (v == 0x3ec || v == 0x3f0) {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10428880 size=0xbe
#include <string.h>

struct CStudioEvent	// 0x4c bytes
{
	float m_flCycle;	// 0x00
	int m_nEvent;	// 0x04
	int m_nType;	// 0x08
	char m_szOptions[64];	// 0x0c
};

struct CStudioSeqDesc
{
	char m_pad0000[0x14];
	int m_nEvents;	// 0x14
	int m_iEventIndex;	// 0x18
};

struct CEngineSoundView
{
	virtual int vfunc0(const char *pszName, int a);
};

extern CEngineSoundView *g_1070b248;
__declspec(dllimport) void Warning(const char *pszFormat, ...);
int sub_10428470(void *pHdr, int iSequence);
CStudioSeqDesc *sub_100c7480(void *pHdr, int index);
const char **sub_1042bff0(void *pOut, const char *pszOptions);

namespace block_10428880 {
int sub_10428850(int nEvent)
{
	if (nEvent != 0x3ec && nEvent != 0x3f0)
		return 0;
	return 1;
}
}
using namespace block_10428880;

// TARGET: sub_10428880
void sub_10428880(void *pHdr, int iSequence)
{
	int iIndex = sub_10428470(pHdr, iSequence);
	if (iIndex >= 0) {
		CStudioSeqDesc *pSeq = sub_100c7480(pHdr, iIndex);
		if (pSeq) {
			CStudioEvent *pEvent = (CStudioEvent *)((char *)pSeq + pSeq->m_iEventIndex);
			for (int i = 0; i < pSeq->m_nEvents; i++, pEvent++) {
				if (pEvent->m_nEvent < 5000 && sub_10428850(pEvent->m_nEvent)) {
					if (strlen(pEvent->m_szOptions) == 0)
						Warning("Bad sound event %d in sequence %s :: %s (sound is \"%s\")\n", pEvent->m_nEvent, (char *)pHdr + 0xc, iSequence, pEvent->m_szOptions);
					char dummy[4];
					const char *pszName = *sub_1042bff0(dummy, pEvent->m_szOptions);
					if (!pszName)
						pszName = "";
					g_1070b248->vfunc0(pszName, 0);
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10428970 size=0x1d
// TARGET: sub_10428970
struct CUnk10428970
{
    char pad[8];
    int m_8;
};
CUnk10428970 *__cdecl sub_100c7480(int a, int b);
int __cdecl sub_10428970(int a, int b)
{
    CUnk10428970 *p = sub_100c7480(a, b);
    if (p)
    {
        return p->m_8;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x104289a0 size=0xe1
#include "CLogicAuto.h"
struct CTimeTableRec
{
	float m_flTime;	// 0x00
	int m_nPriority;	// 0x04
	int m_n08;
	char m_data0c[0x4c - 0x0c];
};

struct CTimeTable
{
	int m_n00;
	int m_n04;
	unsigned char m_nFlags;	// 0x08
	char m_pad09[0x14 - 9];
	int m_nCount;	// 0x14
	int m_nOffset;	// 0x18
};

struct CTimeTableHit
{
	int m_nPriority;	// 0x00
	char *m_pData;	// 0x04
	float m_flTime;	// 0x08
	float m_flStamp;	// 0x0c
	int m_nUsed;	// 0x10
};


CTimeTable *sub_100c7480(const void *a, const void *b);

// TARGET: sub_104289a0
int sub_104289a0(const void *a, const void *b, CTimeTableHit *pOut, float flFrom, float flTo, int iStart)
{
	if (pOut)
	{
		CTimeTable *pTable = sub_100c7480(a, b);
		if (pTable && pTable->m_nCount && iStart <= pTable->m_nCount)
		{
			int nCount = pTable->m_nCount;
			CTimeTableRec *pRecs = (CTimeTableRec *)((char *)pTable + pTable->m_nOffset);
			if (iStart < nCount)
			{
				CTimeTableRec *pRec = &pRecs[iStart];
				do
				{
					if (pRec->m_nPriority < 5000)
					{
						if (pRec->m_flTime >= flFrom)
						{
							if (pRec->m_flTime < flTo)
								goto hit;
						}
						if ((pTable->m_nFlags & 1) && flTo >= 1.0f && pRec->m_flTime < flTo - 1.0f)
						{
hit:
							pOut->m_nUsed = 0;
							pOut->m_flTime = pRecs[iStart].m_flTime;
							pOut->m_flStamp = gpGlobals->curtime;
							pOut->m_nPriority = pRecs[iStart].m_nPriority;
							pOut->m_pData = pRecs[iStart].m_data0c;
							return iStart + 1;
						}
					}
					iStart++;
					pRec++;
				} while (iStart < nCount);
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10428ad0 size=0x13d
struct CStudioHdr;
char *sub_100c7560(CStudioHdr *pStudioHdr, int iSequence, CStudioHdr **ppOwner);
extern void (__cdecl *g_109f3628)(const char *fmt, ...);	// Msg

// TARGET: sub_10428ad0
int sub_10428ad0(CStudioHdr *pStudioHdr, int iFrom, int iTo, int *pDirection)
{
	CStudioHdr *pFromHdr;
	CStudioHdr *pToHdr;
	char *pFrom = sub_100c7560(pStudioHdr, iFrom, &pFromHdr);
	char *pTo = sub_100c7560(pStudioHdr, iTo, &pToHdr);
	unsigned int uEntryNode;
	unsigned int uExitNode;
	if (!pFrom || !(uEntryNode = *(unsigned int *)(pFrom + 0x270)) || !pTo || !(uExitNode = *(unsigned int *)(pTo + 0x270)) || pFromHdr != pToHdr)
	{
		*pDirection = 1;
		return iTo;
	}
	unsigned int uNode = *pDirection > 0 ? *(unsigned int *)(pFrom + 0x274) : uEntryNode;
	if (uNode == uExitNode)
	{
		*pDirection = 1;
		return iTo;
	}
	char *pBase = (char *)pFromHdr;
	unsigned int uStep = *(unsigned char *)(pBase + *(int *)(pBase + 0x150) * (uNode - 1) + *(int *)(pBase + 0x154) + uExitNode - 1);
	if (uStep == 0)
		return iTo;
	int i = 0;
	char *pSeq = pBase + *(int *)(pBase + 0x114);
	int nSeqs = *(int *)(pBase + 0x110);
	if (0 < nSeqs)
	{
		do
		{
			if (*(unsigned int *)(pSeq + 0x270) == uNode && *(unsigned int *)(pSeq + 0x274) == uStep)
			{
				*pDirection = 1;
				return i;
			}
			if (*(unsigned int *)(pSeq + 0x278) != 0 && *(unsigned int *)(pSeq + 0x274) == uNode && *(unsigned int *)(pSeq + 0x270) == uStep)
			{
				*pDirection = -1;
				return i;
			}
			i++;
			pSeq += 0x2fc;
		} while (i < nSeqs);
	}
	g_109f3628("error in transition graph");
	*pDirection = 1;
	return iTo;
}
// END FUNCTION
