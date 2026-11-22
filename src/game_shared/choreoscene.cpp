// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 52 blocks
#include "vampire.h"

// FUNCTION: 0x1007a5b0 size=0x470
#include "CLogicAuto.h"
#include "utlrbtree.h"
#include <string.h>
#include <stdlib.h>
#include "utlvector.h"
#include "CFlexAnimationTrack.h"

struct ISceneTokenProcessor
{
	virtual const char *CurrentToken();
	virtual bool GetToken(bool crossline);
	virtual void vfunc2();
	virtual void Error(const char *fmt, ...);
};

struct FlexTrackSetters
{
	void sub_100740f0(bool b);
	void sub_10074a30(bool b);
	void sub_10074a70(float f);
	void sub_10074a90(float f);
};

struct CChoreoEventX
{
	void sub_10077650();
	void sub_10077730(bool b);
	float sub_10075f10();
	float sub_10075e70();
	FlexTrackSetters *sub_10077490(const char *name);
};

// TARGET: sub_1007a5b0
void sub_1007a5b0(ISceneTokenProcessor *tokenizer, CChoreoEventX *e, bool removeold)
{
	if (removeold) {
		e->sub_10077650();
		e->sub_10077730(false);
	}
	bool samples_use_realtime = false;
	tokenizer->GetToken(true);
	float endtime = e->sub_10075f10();
	float starttime = e->sub_10075e70();
	float event_time = endtime - starttime;
	if (!_stricmp(tokenizer->CurrentToken(), "samples_use_time")) {
		samples_use_realtime = true;
		tokenizer->GetToken(true);
	}
	if (_stricmp(tokenizer->CurrentToken(), "{"))
		tokenizer->Error("expecting {\n");
	while (1) {
		tokenizer->GetToken(true);
		if (strlen(tokenizer->CurrentToken()) <= 0) {
			tokenizer->Error("expecting flex animation data\n");
			break;
		}
		if (!_stricmp(tokenizer->CurrentToken(), "}"))
			break;
		char flexcontroller[0x80];
		strcpy(flexcontroller, tokenizer->CurrentToken());
		bool active = true;
		bool combo = false;
		float range_min = 0.0f;
		float range_max = 1.0f;
		tokenizer->GetToken(true);
		if (!_stricmp(tokenizer->CurrentToken(), "disabled")) {
			active = false;
			tokenizer->GetToken(true);
		}
		if (!_stricmp(tokenizer->CurrentToken(), "combo")) {
			combo = true;
			tokenizer->GetToken(true);
		}
		if (!_stricmp(tokenizer->CurrentToken(), "range")) {
			tokenizer->GetToken(false);
			range_min = atof(tokenizer->CurrentToken());
			tokenizer->GetToken(false);
			range_max = atof(tokenizer->CurrentToken());
			tokenizer->GetToken(true);
		}
		CUtlVector<CExpressionSampleStub> samples[2];
		for (int samplecount = 0; samplecount < (combo ? 2 : 1); samplecount++) {
			if (_stricmp(tokenizer->CurrentToken(), "{"))
				tokenizer->Error("expecting {\n");
			while (1) {
				tokenizer->GetToken(true);
				if (strlen(tokenizer->CurrentToken()) <= 0) {
					tokenizer->Error("expecting flex animation data\n");
					break;
				}
				if (!_stricmp(tokenizer->CurrentToken(), "}"))
					break;
				float time = (float)atof(tokenizer->CurrentToken());
				tokenizer->GetToken(false);
				float value = (float)atof(tokenizer->CurrentToken());
				int idx = samples[samplecount].AddToTail();
				CExpressionSampleStub *s = &samples[samplecount][idx];
				if (samples_use_realtime)
					s->m_flTime = time;
				else
					s->m_flTime = time * event_time;
				s->m_flValue = value;
			}
			if (combo && samplecount == 0)
				tokenizer->GetToken(true);
		}
		if (active || samples[0].Count() >= 1) {
			FlexTrackSetters *track = e->sub_10077490(flexcontroller);
			track->sub_100740f0(active);
			track->sub_10074a30(combo);
			track->sub_10074a70(range_min);
			track->sub_10074a90(range_max);
			for (int t = 0; t < (combo ? 2 : 1); t++) {
				for (int i = 0; i < samples[t].Count(); i++) {
					CExpressionSampleStub *sample = &samples[t][i];
					((CFlexAnimationTrack *)track)->sub_100746e0(sample->m_flTime, sample->m_flValue, t);
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1007ab40 size=0x9e9
#include "CUnknown1007b7b0.h"
#include "CUnknown100735a0.h"
extern "C" int _strcmpi(const char *, const char *);
extern "C" double atof(const char *);
extern "C" int atoi(const char *);
extern "C" unsigned int strlen(const char *);
extern "C" char *strcpy(char *, const char *);
int sub_10076730(const char *);
int sub_10077a00(const char *);
void sub_1007a390(CUnknown1007bb30Reader *, CUnknown10075aa0 *);
void sub_1007a5b0(CUnknown1007bb30Reader *, CUnknown10075aa0 *, int);
CUnknown10075aa0 *__fastcall sub_10079e60(void *);

// TARGET: CUnknown1007b7b0::sub_1007ab40
CUnknown10075aa0 *CUnknown1007b7b0::sub_1007ab40(CUnknown10076670 *pScene, void *pChannel, float flTimeOffset)
{
	bool hadramp = false;
	float attack = 1.0f, sustain = 1.0f, decay = 1.0f;

	CUnknown10075aa0 *ev = sub_10079e60(this);
	m_pReader->vfunc1(0);
	ev->sub_10075b90(sub_10076730(m_pReader->vfunc0()));
	m_pReader->vfunc1(0);
	ev->sub_10075bd0(m_pReader->vfunc0());
	m_pReader->vfunc1(1);
	if (_strcmpi(m_pReader->vfunc0(), "{") != 0)
		m_pReader->vfunc3("expecting {\n");
	while (1)
	{
		m_pReader->vfunc1(1);
		if (_strcmpi(m_pReader->vfunc0(), "}") == 0)
			break;
		if (strlen(m_pReader->vfunc0()) == 0)
		{
			m_pReader->vfunc3("expecting more tokens!");
			break;
		}
		if (_strcmpi(m_pReader->vfunc0(), "time") == 0)
		{
			float flStart;
			float flEnd = 1.0f;
			m_pReader->vfunc1(0);
			flStart = atof(m_pReader->vfunc0());
			if (m_pReader->vfunc2())
			{
				m_pReader->vfunc1(0);
				flEnd = atof(m_pReader->vfunc0());
			}
			flStart += flTimeOffset;
			if (flEnd != -1.0f)
				flEnd += flTimeOffset;
			ev->sub_10075e20(flStart);
			ev->sub_10075e90(flEnd);
		}
		else if (_strcmpi(m_pReader->vfunc0(), "ramp") == 0)
		{
			hadramp = true;
			m_pReader->vfunc1(0);
			attack = atof(m_pReader->vfunc0());
			if (m_pReader->vfunc2())
			{
				m_pReader->vfunc1(0);
				sustain = atof(m_pReader->vfunc0());
			}
			if (m_pReader->vfunc2())
			{
				m_pReader->vfunc1(0);
				decay = atof(m_pReader->vfunc0());
			}
		}
		else if (_strcmpi(m_pReader->vfunc0(), "param") == 0)
		{
			m_pReader->vfunc1(0);
			ev->sub_10075c20(m_pReader->vfunc0());
		}
		else if (_strcmpi(m_pReader->vfunc0(), "param2") == 0)
		{
			m_pReader->vfunc1(0);
			ev->sub_10075c70(m_pReader->vfunc0());
		}
		else if (_strcmpi(m_pReader->vfunc0(), "pitch") == 0)
		{
			m_pReader->vfunc1(0);
			ev->sub_10078540(atoi(m_pReader->vfunc0()));
		}
		else if (_strcmpi(m_pReader->vfunc0(), "yaw") == 0)
		{
			m_pReader->vfunc1(0);
			ev->sub_10078580(atoi(m_pReader->vfunc0()));
		}
		else if (_strcmpi(m_pReader->vfunc0(), "loopcount") == 0)
		{
			m_pReader->vfunc1(0);
			ev->sub_100785a0(atoi(m_pReader->vfunc0()));
		}
		else if (_strcmpi(m_pReader->vfunc0(), "resumecondition") == 0)
		{
			ev->sub_10076af0(1);
		}
		else if (_strcmpi(m_pReader->vfunc0(), "fixedlength") == 0)
		{
			ev->sub_10076ad0(1);
		}
		else if (_strcmpi(m_pReader->vfunc0(), "targethead") == 0)
		{
			m_pReader->vfunc1(0);
			ev->sub_10075ce0(atoi(m_pReader->vfunc0()) != 0);
		}
		else if (_strcmpi(m_pReader->vfunc0(), "tags") == 0)
		{
			m_pReader->vfunc1(1);
			if (_strcmpi(m_pReader->vfunc0(), "{") != 0)
				m_pReader->vfunc3("expecting {\n");
			while (1)
			{
				m_pReader->vfunc1(1);
				if (strlen(m_pReader->vfunc0()) == 0)
				{
					m_pReader->vfunc3("expecting relative tag\n");
					break;
				}
				if (_strcmpi(m_pReader->vfunc0(), "}") == 0)
					break;
				char szTag[128];
				float flPct;
				strcpy(szTag, m_pReader->vfunc0());
				m_pReader->vfunc1(0);
				flPct = atof(m_pReader->vfunc0());
				ev->sub_10076c30(szTag, flPct);
			}
		}
		else if (_strcmpi(m_pReader->vfunc0(), "sequenceduration") == 0)
		{
			float flDur = 0.0f;
			m_pReader->vfunc1(0);
			flDur = atof(m_pReader->vfunc0());
			ev->sub_100784b0(flDur);
		}
		else if (_strcmpi(m_pReader->vfunc0(), "absolutetags") == 0)
		{
			m_pReader->vfunc1(1);
			int nTag = sub_10077a00(m_pReader->vfunc0());
			if (nTag == -1)
				m_pReader->vfunc3("expecting valid tag type!!!");
			m_pReader->vfunc1(1);
			if (_strcmpi(m_pReader->vfunc0(), "{") != 0)
				m_pReader->vfunc3("expecting {\n");
			while (1)
			{
				m_pReader->vfunc1(1);
				if (strlen(m_pReader->vfunc0()) == 0)
				{
					m_pReader->vfunc3("expecting relative tag\n");
					break;
				}
				if (_strcmpi(m_pReader->vfunc0(), "}") == 0)
					break;
				char szAbs[128];
				float t;
				strcpy(szAbs, m_pReader->vfunc0());
				m_pReader->vfunc1(0);
				t = atof(m_pReader->vfunc0());
				ev->sub_10077bd0(nTag, szAbs, *(int *)&t);
			}
		}
		else if (_strcmpi(m_pReader->vfunc0(), "flextimingtags") == 0)
		{
			m_pReader->vfunc1(1);
			if (_strcmpi(m_pReader->vfunc0(), "{") != 0)
				m_pReader->vfunc3("expecting {\n");
			while (1)
			{
				m_pReader->vfunc1(1);
				if (strlen(m_pReader->vfunc0()) == 0)
				{
					m_pReader->vfunc3("expecting relative tag\n");
					break;
				}
				if (_strcmpi(m_pReader->vfunc0(), "}") == 0)
					break;
				char szFlex[128];
				float flPct;
				bool bLocked;
				strcpy(szFlex, m_pReader->vfunc0());
				m_pReader->vfunc1(0);
				flPct = atof(m_pReader->vfunc0());
				m_pReader->vfunc1(0);
				bLocked = atoi(m_pReader->vfunc0()) ? true : false;
				ev->sub_100770b0(szFlex, flPct, bLocked);
			}
		}
		else if (_strcmpi(m_pReader->vfunc0(), "relativetag") == 0)
		{
			char szRel1[128];
			char szRel2[128];
			m_pReader->vfunc1(0);
			strcpy(szRel1, m_pReader->vfunc0());
			m_pReader->vfunc1(0);
			strcpy(szRel2, m_pReader->vfunc0());
			ev->sub_10076f10(1, szRel1, szRel2);
		}
		else if (_strcmpi(m_pReader->vfunc0(), "flexanimations") == 0)
		{
			sub_1007a5b0(m_pReader, ev, 1);
		}
		else if (_strcmpi(m_pReader->vfunc0(), "event_ramp") == 0)
		{
			sub_1007a390(m_pReader, ev);
		}
	}
	if (pChannel)
		((CUnknown100735a0 *)pChannel)->sub_100735a0((int)ev);
	ev->sub_10076670((int)pScene);
	ev->sub_100766b0((int)pChannel);
	if (hadramp && !ev->sub_10078630())
	{
		if (attack != 1.0f || sustain != 1.0f || decay != 1.0f)
		{
			float attacktime = (1.0f - attack) * ev->sub_10076b30();
			float decaytime = decay * ev->sub_10076b30();
			float midpoint = (attacktime + decaytime) * 0.5f;
			ev->sub_10078690(attacktime, sustain, 0);
			ev->sub_10078690(midpoint, sustain, 0);
			ev->sub_10078690(decaytime, sustain, 0);
			ev->sub_10078880();
		}
	}
	return ev;
}
// END FUNCTION

// FUNCTION: 0x1007b7b0 size=0x17a
#include "CUnknown1007b7b0.h"
#include "CUnknown1007bb30.h"
#include "CUnknown100732b0.h"

struct S10072d60 { void sub_10072d60(const char *pszName); };
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);
extern char g_10547b78[];
extern char g_10547b64[];

CUnknown1007a060Elem *CUnknown1007b7b0::sub_1007b7b0()
{
	CUnknown1007a060Elem *pElem = ((CUnknown1007a060 *)this)->sub_1007a060();
	m_pReader->vfunc1(0);
	((S10072d60 *)pElem)->sub_10072d60(m_pReader->vfunc0());
	m_pReader->vfunc1(1);
	if (_strcmpi(m_pReader->vfunc0(), g_10547b78))
		m_pReader->vfunc3("expecting {");
	while (1) {
		m_pReader->vfunc1(1);
		if (!_strcmpi(m_pReader->vfunc0(), g_10547b64))
			break;
		if (!_strcmpi(m_pReader->vfunc0(), "channel"))
			sub_1007bbc0(pElem);
		else if (!_strcmpi(m_pReader->vfunc0(), "faceposermodel"))
			sub_1007baf0(pElem);
		else if (!_strcmpi(m_pReader->vfunc0(), "bonerename"))
			((CUnknown1007bb30 *)this)->sub_1007bb30((CUnknown1007bb30Dest *)pElem);
		else if (!_strcmpi(m_pReader->vfunc0(), "active")) {
			m_pReader->vfunc1(1);
			((CUnknown100732b0 *)pElem)->sub_100732b0(atoi(m_pReader->vfunc0()) != 0);
		} else
			m_pReader->vfunc3("expecting channel got %s\n", m_pReader->vfunc0());
	}
	return pElem;
}
// END FUNCTION

// FUNCTION: 0x1007b990 size=0x7
struct CUnknown1007b990 { char * sub_1007b990(); };
char * CUnknown1007b990::sub_1007b990()
{
    return (char *)this + 0xac;
}
// END FUNCTION

// FUNCTION: 0x1007b9b0 size=0x19
struct S1007b9b0 {
	char m_pad[0xac];
	char m_name[64];
	// TARGET: S1007b9b0::sub_1007b9b0
	void sub_1007b9b0(const char *src);
};

void S1007b9b0::sub_1007b9b0(const char *src)
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

// FUNCTION: 0x1007b9e0 size=0x33
struct CNameSourceView {
    virtual const char *f0();
    virtual void f1(int a);
};

struct CNameOwnerView {
    char pad0[0xa8];
    CNameSourceView *m_pSource;
    char m_szName[1];
};

// TARGET: sub_1007b9e0
void __fastcall sub_1007b9e0(CNameOwnerView *p)
{
    p->m_szName[0] = 0;
    p->m_pSource->f1(1);
    const char *s = p->m_pSource->f0();
    char *d = p->m_szName;
    char c;
    do {
        c = *s;
        s++;
        *d = c;
        d++;
    } while (c != 0);
}
// END FUNCTION

// FUNCTION: 0x1007ba30 size=0x4f
#include <stdlib.h>
#include "CUnknown1007b7b0.h"
void CUnknown1007b7b0::sub_1007ba30()
{
	m_pReader->vfunc1(1);
	int n = atoi(m_pReader->vfunc0());
	m_nFps130 = n;
	if (n > 240)
		n = 240;
	else if (n < 10)
		n = 10;
	m_nFps130 = n;
}
// END FUNCTION

// FUNCTION: 0x1007baa0 size=0x35
#include "CUnknown1007b7b0.h"
#include <string.h>
void CUnknown1007b7b0::sub_1007baa0()
{
	m_pReader->vfunc1(1);
	m_bSnap12d = strcmpi(m_pReader->vfunc0(), "on") == 0;
}
// END FUNCTION

// FUNCTION: 0x1007baf0 size=0x28
#include "CUnknown1007b7b0.h"

// TARGET: CUnknown1007b7b0::sub_1007baf0
void CUnknown1007b7b0::sub_1007baf0(CUnknown1007a060Elem *pElem)
{
	m_pReader->vfunc1(0);
	pElem->sub_10073260(m_pReader->vfunc0());
}
// END FUNCTION

// FUNCTION: 0x1007bb30 size=0x67
#include "CUnknown1007bb30.h"
extern void (__cdecl *g_109f3890)(char *, const char *, int);

void CUnknown1007bb30::sub_1007bb30(CUnknown1007bb30Dest *pDest)
{
    char buf[256];
    m_pReader->vfunc1(0);
    g_109f3890(buf, m_pReader->vfunc0(), 0x100);
    m_pReader->vfunc1(0);
    pDest->sub_10002eb9(buf, m_pReader->vfunc0());
}
// END FUNCTION

// FUNCTION: 0x1007bbc0 size=0x149
#include "CUnknown10072f10.h"
#include "CUnknown100735a0.h"
#include "CUnknown10076670.h"
#include "CUnknown1007a060.h"
#include "CUnknown1007b7b0.h"
#include <string.h>
#include <stdlib.h>
struct CSceneElem9c;
struct CSceneElemVecOwner;
CSceneElem9c *__fastcall sub_10079f50(CSceneElemVecOwner *p);

// TARGET: CUnknown1007b7b0::sub_1007bbc0
CUnknown100735a0 *CUnknown1007b7b0::sub_1007bbc0(CUnknown1007a060Elem *pElem)
{
	CUnknown100735a0 *pChannel = (CUnknown100735a0 *)sub_10079f50((CSceneElemVecOwner *)this);
	m_pReader->vfunc1(0);
	pChannel->sub_100734f0(m_pReader->vfunc0());
	m_pReader->vfunc1(1);
	if (_strcmpi(m_pReader->vfunc0(), "{") != 0)
		m_pReader->vfunc3("expecting {");
	while (1) {
		m_pReader->vfunc1(1);
		if (!_strcmpi(m_pReader->vfunc0(), "}"))
			break;
		if (!_strcmpi(m_pReader->vfunc0(), "event")) {
			sub_1007ab40((CUnknown10076670 *)pElem, pChannel, 0);
		} else if (!_strcmpi(m_pReader->vfunc0(), "active")) {
			m_pReader->vfunc1(1);
			pChannel->sub_100737d0(atoi(m_pReader->vfunc0()) != 0);
		} else {
			m_pReader->vfunc3("expecting event got %s\n", m_pReader->vfunc0());
		}
	}
	if (pElem) {
		((CUnknown10072f10 *)pElem)->sub_10072f10((int)pChannel);
		pChannel->sub_100737b0((int)pElem);
	}
	return pChannel;
}
// END FUNCTION

// FUNCTION: 0x1007bd70 size=0x12f
#include "CUnknown1007b7b0.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" unsigned int __cdecl strlen(const char *);
// TARGET: CUnknown1007b7b0::sub_1007bd70
bool CUnknown1007b7b0::sub_1007bd70(CUnknown1007bb30Reader *pReader)
{
	m_pReader = pReader;
	while (true) {
		if (!m_pReader->vfunc1(1) || !strlen(m_pReader->vfunc0())) {
			sub_1007e5f0();
			return true;
		}
		if (!_strcmpi(m_pReader->vfunc0(), "event")) {
			sub_1007ab40(0, 0, 0);
		} else if (!_strcmpi(m_pReader->vfunc0(), "actor")) {
			sub_1007b7b0();
		} else if (!_strcmpi(m_pReader->vfunc0(), "mapname")) {
			sub_1007b9e0();
		} else if (!_strcmpi(m_pReader->vfunc0(), "fps")) {
			sub_1007ba30();
		} else if (!_strcmpi(m_pReader->vfunc0(), "snap")) {
			sub_1007baa0();
		} else {
			m_pReader->vfunc3("unexpected token %s\n", m_pReader->vfunc0());
			sub_1007e5f0();
			return true;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1007bef0 size=0x5b
class CUnknown10075f30
{
public:
	bool sub_10075f30();
};
class CUnknown10075f10
{
public:
	float sub_10075f10();
};
class CUnknown10075e70
{
public:
	float sub_10075e70();
};

class CUnknown1007bef0
{
public:
	CUnknown10075e70 **m_ppItems;	// 0x00
	int m_nAlloc;
	int m_nGrow;
	int m_nCount;	// 0x0c
	float sub_1007bef0();
};

float CUnknown1007bef0::sub_1007bef0()
{
	float flMax = 0;
	for (int i = 0; i < m_nCount; i++)
	{
		CUnknown10075e70 *pItem = m_ppItems[i];
		float fl;
		if (((CUnknown10075f30 *)pItem)->sub_10075f30())
			fl = ((CUnknown10075f10 *)pItem)->sub_10075f10();
		else
			fl = pItem->sub_10075e70();
		if (fl > flMax)
			flMax = fl;
	}
	return flMax;
}
// END FUNCTION

// FUNCTION: 0x1007bf70 size=0x33
extern int g_10547ad4;
void sub_10007f04(void *p, void *s);
struct CUnk_1007bf70 { void sub_10007bf3(int v, int *va); };

void sub_1007bf70(void *p, int n, int v, int a4)
{
    int i;
    for (i = n; i > 0; i--)
        sub_10007f04(p, &g_10547ad4);
    ((CUnk_1007bf70 *)p)->sub_10007bf3(v, &a4);
}
// END FUNCTION

// FUNCTION: 0x1007bfc0 size=0x17
namespace lifted {
extern char g_10547dd4;
int sub_10008c2e(int, int, int);
}
int __stdcall sub_1007bfc0(int a0)
{
    return lifted::sub_10008c2e(a0, 0, (int)&lifted::g_10547dd4);
}
// END FUNCTION

// FUNCTION: 0x1007bff0 size=0x16c
#include "CUtlBuffer.h"
#include "FileSystemViews.h"
#include "CChoreoScene1007e970.h"

extern IFileSystemView *g_1070b238;
extern "C" void __cdecl sub_1007bf70(void *pBuf, int nIndent, const char *pszFmt, ...);
struct CChoreoActorView;
struct CChoreoEventView { int sub_10076690(); };

struct CChoreoSaverView
{
	CChoreoEventView **m_ppEvents;	// 0x0
	char m_pad04[8];
	int m_nEvents;	// 0xc
	char m_pad10[4];
	CChoreoSceneActor1007e970 **m_ppActors;	// 0x14
	char m_pad18[8];
	int m_nActors;	// 0x20
	char m_pad24[0xac - 0x24];
	char m_szMapName[0x81];	// 0xac
	bool m_bSnap;	// 0x12d
	char m_pad12e[2];
	int m_nFps;	// 0x130

	void sub_10009818(void *pBuf);
	void sub_1007c600(void *pBuf, int nIndent, CChoreoEventView *pEvent, float flOffset);
	void sub_1007ccc0(void *pBuf, int nIndent, CChoreoActorView *pActor);
	bool sub_1007bff0(const char *pszFile);
};

bool CChoreoSaverView::sub_1007bff0(const char *pszFile)
{
	CUtlBuffer buf(0, 0, 1);
	sub_10009818(&buf);
	for (int i = 0; i < m_nEvents; i++) {
		CChoreoEventView *pEvent = m_ppEvents[i];
		if (!pEvent->sub_10076690())
			sub_1007c600(&buf, 0, pEvent, 0);
	}
	for (int j = 0; j < m_nActors; j++) {
		CChoreoSceneActor1007e970 *pActor = m_ppActors[j];
		if (pActor)
			sub_1007ccc0(&buf, 0, (CChoreoActorView *)pActor);
	}
	if (m_szMapName[0])
		sub_1007bf70(&buf, 0, "mapname \"%s\"\n", m_szMapName);
	sub_1007bf70(&buf, 0, "fps %i\n", m_nFps);
	sub_1007bf70(&buf, 0, "snap %s\n", m_bSnap ? "on" : "off");
	int hFile = g_1070b238->vfunc0(pszFile, "wt", 0);
	if (hFile) {
		g_1070b238->vfunc3((const char *)buf.m_pBuffer, buf.m_nPut, hFile);
		g_1070b238->vfunc1(hFile);
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1007c1c0 size=0x84
#include "CLogicAuto.h"
#include "CUnknown10078540.h"
#include "CFlexAnimationTrack.h"

void __cdecl sub_1007bf70(void *pFile, int nIndent, const char *pszFormat, ...);

void __cdecl sub_1007c1c0(void *pFile, int nIndent, CUnknown10078540 *pEvent)
{
	int nRamp = pEvent->sub_10078630();
	if (nRamp > 0) {
		sub_1007bf70(pFile, nIndent, "event_ramp\n");
		sub_1007bf70(pFile, nIndent, "{\n");
		for (int i = 0; i < nRamp; i++) {
			CExpressionSampleStub *p = pEvent->sub_10078650(i);
			sub_1007bf70(pFile, nIndent + 1, "%.4f %.4f\n", p->m_flTime, p->m_flValue);
		}
		sub_1007bf70(pFile, nIndent, "}\n");
	}
}
// END FUNCTION

// FUNCTION: 0x1007c280 size=0x1ed
#include "CUnknown10074050.h"
#include "CUnknown10074070.h"
struct CUnknown100740d0 { char sub_100740d0(); };
struct CUnknown10074a50 { char sub_10074a50(); };
struct CUnknown10074ab0 { float sub_10074ab0(int); float sub_10074ae0(int); };
void sub_1007bf70(void *buf, int indent, const char *fmt, ...);
void sub_1007c280(void *buf, int indent, void *pObj)
{
	if (!pObj)
		return;
	if (!((CUnknown100740d0 *)pObj)->sub_100740d0() && ((CUnknown10074070 *)pObj)->sub_10074070(0) <= 0)
		return;
	int ind = indent + 2;
	sub_1007bf70(buf, ind, "\"%s\"", ((CUnknown10074050 *)pObj)->sub_10074050());
	if (!((CUnknown100740d0 *)pObj)->sub_100740d0())
		sub_1007bf70(buf, ind, " disabled");
	if (((CUnknown10074a50 *)pObj)->sub_10074a50())
		sub_1007bf70(buf, ind, " combo");
	if (((CUnknown10074ab0 *)pObj)->sub_10074ab0(0) != 0.0f || ((CUnknown10074ab0 *)pObj)->sub_10074ae0(0) != 1.0f)
		sub_1007bf70(buf, ind, " range %.1f %.1f", (double)((CUnknown10074ab0 *)pObj)->sub_10074ab0(0), (double)((CUnknown10074ab0 *)pObj)->sub_10074ae0(0));
	sub_1007bf70(buf, ind, "\n");
	sub_1007bf70(buf, ind, "{\n");
	for (int i = 0; i < ((CUnknown10074070 *)pObj)->sub_10074070(0); i++) {
		float *p = ((CUnknown10074070 *)pObj)->sub_10074090(i, 0);
		if (p)
			sub_1007bf70(buf, indent + 3, "%.4f %.4f\n", (double)p[1], (double)p[0]);
	}
	sub_1007bf70(buf, ind, "}\n");
	if (((CUnknown10074a50 *)pObj)->sub_10074a50()) {
		sub_1007bf70(buf, ind, "{\n");
		for (int i = 0; i < ((CUnknown10074070 *)pObj)->sub_10074070(1); i++) {
			float *p = ((CUnknown10074070 *)pObj)->sub_10074090(i, 1);
			if (p)
				sub_1007bf70(buf, indent + 3, "%.4f %.4f\n", (double)p[1], (double)p[0]);
		}
		sub_1007bf70(buf, ind, "}\n");
	}
}
// END FUNCTION

// FUNCTION: 0x1007c4f0 size=0x81
#include "CUnknown10077430.h"

void sub_1007bf70(void *pWriter, int nTabs, const char *pszFormat, ...);
void sub_1007c280(void *pWriter, int nTabs, void *pTrack);

// TARGET: sub_1007c4f0
void sub_1007c4f0(void *pWriter, int nTabs, CUnknown10077430 *pEvent)
{
	if (pEvent->sub_10077430() > 0) {
		int nInner = nTabs + 1;
		sub_1007bf70(pWriter, nInner, "flexanimations samples_use_time\n");
		sub_1007bf70(pWriter, nInner, "{\n");
		for (int i = 0; i < pEvent->sub_10077430(); i++)
			sub_1007c280(pWriter, nTabs, pEvent->sub_10077450(i));
		sub_1007bf70(pWriter, nInner, "}\n");
	}
}
// END FUNCTION

// FUNCTION: 0x1007c5b0 size=0x3e
#include <string.h>

struct CUnknownStrObj
{
	int sub_100029c8();	// stub 0x100029c8, called directly
	const char *sub_1000b0e1();	// stub 0x1000b0e1, called directly
};

// TARGET: sub_1007c5b0
bool __stdcall sub_1007c5b0(CUnknownStrObj *pObj)
{
	if (pObj->sub_100029c8()) {
		if (pObj->sub_1000b0e1()) {
			if (strlen(pObj->sub_1000b0e1()) != 0) {
				return true;
			}
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1007c600 size=0x4ac
#include <string.h>

// TARGET: sub_1007c600
extern float g_104454c4;
char __stdcall sub_1007c5b0(void *);
void sub_1007bf70(void *, int, const char *, ...);
const char *sub_10076990(int);
const char *sub_100779d0(int);
void sub_1007c1c0(void *, int, void *);
void sub_1007c4f0(void *, int, void *);

struct EvView
{
	int sub_10075b70();
	const char *sub_10075c00();
	float sub_10075e70();
	float sub_10075f10();
	char sub_10075f30();
	const char *sub_10075c50();
	const char *sub_10075ca0();
	int sub_10078630();
	int sub_10078520();
	int sub_10078560();
	char sub_10076b10();
	char sub_10076ab0();
	int sub_10076be0();
	void *sub_10076c00(int);
	float sub_100738c0();
	const char *sub_100738a0();
	int sub_10077060();
	void *sub_10077080(int);
	char sub_10073a10();
	const char *sub_10073ae0();
	int sub_10077ac0(int);
	void *sub_10077af0(int, int);
	float sub_10073b00();
	char sub_100784d0(float *);
	char sub_10076ef0();
	const char *sub_10076fc0();
	const char *sub_10076fa0();
	int sub_10077430();
	int sub_10078610();
	int sub_10075cc0();
};

void __stdcall sub_1007c600(void *pBuf, int level, void *pEvent, float flStartOffset)
{
	EvView *e = (EvView *)pEvent;

	if (!sub_1007c5b0(e))
		return;

	sub_1007bf70(pBuf, level, "event %s \"%s\"\n",
		sub_10076990(e->sub_10075b70()), e->sub_10075c00());
	sub_1007bf70(pBuf, level, "{\n");

	float st = e->sub_10075e70();
	float et = e->sub_10075f10();
	if (flStartOffset != g_104454c4)
	{
		if (e->sub_10075f30())
			et -= flStartOffset;
		st -= flStartOffset;
	}
	sub_1007bf70(pBuf, level + 1, "time %f %f\n", st, et);
	sub_1007bf70(pBuf, level + 1, "param \"%s\"\n", e->sub_10075c50());
	if (strlen(e->sub_10075ca0()) > 0)
		sub_1007bf70(pBuf, level + 1, "param2 \"%s\"\n", e->sub_10075ca0());

	if (e->sub_10078630() > 0)
		sub_1007c1c0(pBuf, level + 1, e);

	if (e->sub_10078520() != 0)
		sub_1007bf70(pBuf, level + 1, "pitch \"%i\"\n", e->sub_10078520());
	if (e->sub_10078560() != 0)
		sub_1007bf70(pBuf, level + 1, "yaw \"%i\"\n", e->sub_10078560());

	if (e->sub_10076b10())
		sub_1007bf70(pBuf, level + 1, "resumecondition\n");
	if (e->sub_10076ab0())
		sub_1007bf70(pBuf, level + 1, "fixedlength\n");

	if (e->sub_10076be0() > 0)
	{
		sub_1007bf70(pBuf, level + 1, "tags\n");
		sub_1007bf70(pBuf, level + 1, "{\n");
		for (int t = 0; t < e->sub_10076be0(); t++)
		{
			EvView *rt = (EvView *)e->sub_10076c00(t);
			sub_1007bf70(pBuf, level + 2, "\"%s\" %f\n", rt->sub_100738a0(), rt->sub_100738c0());
		}
		sub_1007bf70(pBuf, level + 1, "}\n");
	}

	if (e->sub_10077060() > 0)
	{
		sub_1007bf70(pBuf, level + 1, "flextimingtags\n");
		sub_1007bf70(pBuf, level + 1, "{\n");
		for (int t = 0; t < e->sub_10077060(); t++)
		{
			EvView *tt = (EvView *)e->sub_10077080(t);
			sub_1007bf70(pBuf, level + 2, "\"%s\" %f %i\n", tt->sub_100738a0(), tt->sub_100738c0(),
				tt->sub_10073a10() ? 1 : 0);
		}
		sub_1007bf70(pBuf, level + 1, "}\n");
	}

	for (int tagtype = 0; tagtype < 2; tagtype++)
	{
		if (e->sub_10077ac0(tagtype) > 0)
		{
			sub_1007bf70(pBuf, level + 1, "absolutetags %s\n", sub_100779d0(tagtype));
			sub_1007bf70(pBuf, level + 1, "{\n");
			for (int t = 0; t < e->sub_10077ac0(tagtype); t++)
			{
				EvView *at = (EvView *)e->sub_10077af0(tagtype, t);
				sub_1007bf70(pBuf, level + 2, "\"%s\" %f\n", at->sub_10073ae0(), at->sub_10073b00());
			}
			sub_1007bf70(pBuf, level + 1, "}\n");
		}
	}

	if (e->sub_10075b70() == 6)
	{
		float dur;
		if (e->sub_100784d0(&dur))
			sub_1007bf70(pBuf, level + 1, "sequenceduration %f\n", dur);
	}

	if (e->sub_10076ef0())
		sub_1007bf70(pBuf, level + 1, "relativetag \"%s\" \"%s\"\n", e->sub_10076fa0(), e->sub_10076fc0());

	if (e->sub_10077430() > 0)
		sub_1007c4f0(pBuf, level, e);

	if (e->sub_10075b70() == 0xc)
		sub_1007bf70(pBuf, level + 1, "loopcount \"%i\"\n", e->sub_10078610());
	if (e->sub_10075b70() == 0x10)
		sub_1007bf70(pBuf, level + 1, "targethead \"%d\"\n", e->sub_10075cc0() & 0xff);

	sub_1007bf70(pBuf, level, "}\n");
}
// END FUNCTION

// FUNCTION: 0x1007cbe0 size=0xa2
struct CChoreoChannelView
{
	const char *sub_10073520();
	int sub_10073540();
	void *sub_10073560(int index);
	char sub_100737f0();
};
struct CChoreoSaverView
{
	void sub_1007c600(void *pBuf, int tabs, void *pEvent, int a);
};
void sub_1007bf70(void *pBuf, int tabs, const char *pszFormat, ...);
// TARGET: sub_1007cbe0
void __fastcall sub_1007cbe0(CChoreoSaverView *pThis, int unused, void *pBuf, int tabs, CChoreoChannelView *pChannel)
{
	sub_1007bf70(pBuf, tabs, "channel \"%s\"\n", pChannel->sub_10073520());
	sub_1007bf70(pBuf, tabs, "{\n");
	for (int i = 0; i < pChannel->sub_10073540(); i++) {
		void *pEvent = pChannel->sub_10073560(i);
		if (pEvent)
			pThis->sub_1007c600(pBuf, tabs + 1, pEvent, 0);
	}
	if (!pChannel->sub_100737f0())
		sub_1007bf70(pBuf, tabs + 1, "active \"0\"\n");
	sub_1007bf70(pBuf, tabs, "}\n");
}
// END FUNCTION

// FUNCTION: 0x1007ccc0 size=0x10a
#include <string.h>

struct CChoreoChannelView;

struct CChoreoActorView
{
	const char *sub_10072d90();
	int sub_10072eb0();
	CChoreoChannelView *sub_10072ed0(int index);
	const char *sub_10073290();
	const char *sub_10072e20();
	const char *sub_10072e40();
	char sub_100732d0();
};

struct CChoreoSaverView
{
	void sub_1007cbe0(void *pFile, int indent, CChoreoChannelView *pChannel);
	void sub_1007ccc0(void *pFile, int indent, CChoreoActorView *pActor);
};

void sub_1007bf70(void *pFile, int indent, const char *pszFormat, ...);

void CChoreoSaverView::sub_1007ccc0(void *pFile, int indent, CChoreoActorView *pActor)
{
	sub_1007bf70(pFile, indent, "actor \"%s\"\n", pActor->sub_10072d90());
	sub_1007bf70(pFile, indent, "{\n");
	for (int i = 0; i < pActor->sub_10072eb0(); i++)
	{
		CChoreoChannelView *pChannel = pActor->sub_10072ed0(i);
		if (pChannel)
			sub_1007cbe0(pFile, indent + 1, pChannel);
	}
	if ((int)strlen(pActor->sub_10073290()) > 0)
		sub_1007bf70(pFile, indent + 1, "faceposermodel \"%s\"\n", pActor->sub_10073290());
	if ((int)strlen(pActor->sub_10072e20()) > 0)
		sub_1007bf70(pFile, indent + 1, "bonerename \"%s\" \"%s\"\n", pActor->sub_10072e20(), pActor->sub_10072e40());
	if (!pActor->sub_100732d0())
		sub_1007bf70(pFile, indent + 1, "active \"0\"\n");
	sub_1007bf70(pFile, indent, "}\n\n");
}
// END FUNCTION

// FUNCTION: 0x1007ce20 size=0x65
#include "CUnknown1007ce20.h"

float CUnknown1007ce20::sub_1007ce20()
{
	float flMin = 0.0f;
	for (int i = 0; i < m_size; i++) {
		CUnknown10075aa0 *pEvent = m_pMemory[i];
		float flTime = pEvent->sub_10075e70();
		if (pEvent->sub_10075b70() == 5)
			flTime -= m_f98;
		if (flTime < flMin)
			flMin = flTime;
	}
	return flMin;
}
// END FUNCTION

// FUNCTION: 0x1007ceb0 size=0xc9
#include "CUnknown1007ce20.h"

// TARGET: CUnknown1007ce20::sub_1007ceb0
float CUnknown1007ce20::sub_1007ceb0()
{
	float flMax = 0.0f;
	for (int i = 0; i < m_size; i++) {
		CUnknown10075aa0 *pEvent = m_pMemory[i];
		if (((pEvent->sub_10075b70() != 0xe) && (pEvent->sub_10075b70() != 0xd))
			|| (!(pEvent->sub_10075e70() >= m_f80) && !(pEvent->sub_10075f10() >= m_f80))) {
			float flTime = pEvent->sub_10075e70();
			if (pEvent->sub_10075f30())
				flTime = pEvent->sub_10075f10();
			if (pEvent->sub_10075b70() == 5)
				flTime += m_f98;
			if (flTime > flMax)
				flMax = flTime;
		}
	}
	return flMax;
}
// END FUNCTION

// FUNCTION: 0x1007cfc0 size=0x16d
#include "CUnknown1007ce20.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
void sub_1007f510(void **pDest, void *const *pSrc);

static inline void GrowVector(UtlMem6 *v, int num)
{
	if (v->m_size + num > v->m_allocationCount)
		v->sub_1007fce0(v->m_size + num - v->m_allocationCount);
	v->m_size += num;
	v->m_pElements = v->m_pMemory;
}

static inline void ShiftRight(UtlMem6 *v, int elem, int num)
{
	int numToMove = v->m_size - elem - num;
	if (numToMove > 0)
		memmove(&v->m_pMemory[elem + num], &v->m_pMemory[elem], numToMove * 4);
}

static inline int InsertBefore(UtlMem6 *v, int elem, void *const *pValue)
{
	GrowVector(v, 1);
	ShiftRight(v, elem, 1);
	sub_1007f510(&v->m_pMemory[elem], pValue);
	return elem;
}

// TARGET: CUnknown1007ce20::sub_1007cfc0
void CUnknown1007ce20::sub_1007cfc0(char bUseStart, int a, int b)
{
	int i = 0;
	UtlMem6 *pTimed = &m_vec3c;
	UtlMem6 *pType1 = &m_vec64;
	m_n5c = 0;
	pTimed->m_size = 0;
	pType1->m_size = 0;
	for (; i < m_size; i++) {
		CUnknown10075aa0 *pEvent = m_pMemory[i];
		pEvent->sub_10077860();
		if (pEvent->sub_10075b70() == 1)
			InsertBefore(pType1, pType1->m_size, (void **)&pEvent);
		else if (pEvent->sub_10076b10())
			InsertBefore(pTimed, pTimed->m_size, (void **)&pEvent);
	}
	m_f8c = sub_1007ce20();
	m_f90 = sub_1007ceb0();
	float f = m_f90;
	if (bUseStart)
		f = m_f8c;
	m_f7c = f;
	m_n9c = 0;
	m_n94 = m_size;
	m_n84 = a;
	m_n88 = b;
}
// END FUNCTION

// FUNCTION: 0x1007d190 size=0x3f
#include "vampire.h"

struct CUnknownItem1007d190
{
    bool sub_10009f16(int a, void *pOwner, int b);
};

struct CUnknown1007d190
{
    void sub_1007d190();
    char m_pad00[0x3c];
    CUnknownItem1007d190 **m_pItems;
    char m_pad40[0x48 - 0x40];
    int m_nItems;
    char m_pad4c[0x7c - 0x4c];
    int m_n7c;
    char m_pad80[0xa4 - 0x80];
    int m_na4;
};

// TARGET: CUnknown1007d190::sub_1007d190
void CUnknown1007d190::sub_1007d190()
{
    bool bOk = true;
    for (int i = 0; i < m_nItems; i++)
    {
        CUnknownItem1007d190 *pItem = m_pItems[i];
        if (bOk && pItem->sub_10009f16(m_na4, this, m_n7c))
        {
            bOk = true;
        }
        else
        {
            bOk = false;
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1007d1e0 size=0x34
struct CUnknown1007d1e0
{
	char m_pad0000[0x7c];
	float m_f7c;
	char m_pad0080[0x8c - 0x80];
	float m_f8c;
	float m_f90;
	int m_i94;

	char sub_1007d1e0();
};

char CUnknown1007d1e0::sub_1007d1e0()
{
	if (m_f7c > m_f90)
		return m_i94 == 0;
	return m_f7c < m_f8c;
}
// END FUNCTION

// FUNCTION: 0x1007d230 size=0x51
#include "CUnknown1007ce20.h"
char CUnknown1007ce20::sub_1007d230(float a, float b)
{
    for (int i = 0; i < m_vec64.m_size; i++) {
        CUnknown10075aa0 *p = (CUnknown10075aa0 *)m_vec64.m_pMemory[i];
        if (p) {
            if (!sub_1007d2b0(p->sub_10075e70(), a, b))
                return 1;
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007d2b0 size=0x35
// TARGET: sub_1007d2b0
int __stdcall sub_1007d2b0(float a, float b, float c)
{
    if (a > c) {
        return 2;
    }
    if (a < b) {
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1007d300 size=0x206
#include "CUnknown10075aa0.h"
#include "CUnknown1007ce20.h"
struct CUnknown1007d300Event : CUnknown10075aa0 { char sub_10077750(); bool sub_10075f30(); };
namespace block_1007d300 {
struct CUnknown1007d300Scene : CUnknown1007ce20
{
	char sub_1007ed10();
	int sub_1007d2b0(float t, float starttime, float endtime);
	int sub_1007d300(void *pv, float frame_start_time, float frame_end_time, bool playing_forward, int &disposition);
};
#pragma auto_inline(off)
int CUnknown1007d300Scene::sub_1007d2b0(float a, float b, float c)
{
    if (a > c) {
        return 2;
    }
    if (a < b) {
        return 1;
    }
    return 0;
}


int CUnknown1007d300Scene::sub_1007d300(void *pv, float frame_start_time, float frame_end_time, bool playing_forward, int &disposition)
{
	CUnknown1007d300Event *e = (CUnknown1007d300Event *)pv;
	disposition = 0;
	int iret = 0;

	bool hasend = e->sub_10075f30();
	float starttime, endtime;

	starttime = e->sub_10075e70();
	endtime = hasend ? e->sub_10075f10() : e->sub_10075e70();

	if ((e->sub_10075b70() == 0xe || e->sub_10075b70() == 0xd) && (starttime >= m_f80 || endtime >= m_f80))
		return iret;

	if ( !playing_forward )
	{
		// Swap intervals
		float temp = frame_start_time;
		frame_start_time = frame_end_time;
		frame_end_time = temp;
	}

	bool suppressed = false;

	// Special processing
	switch ( e->sub_10075b70() )
	{
	default:
		break;
	case 5:
		{
			if ( playing_forward )
			{
				starttime -= m_f98;
				if ( sub_1007d230( starttime, starttime + m_f98 ) )
				{
					suppressed = true;
				}
			}
			else
			{
				endtime += m_f98;
				if ( sub_1007d230( endtime - m_f98, endtime ) )
				{
					suppressed = true;
				}
			}
		}
		break;
	case 0xb:
		{
			if ( sub_1007ed10() )
			{
				suppressed = true;
			}
		}
		break;
	}

	if ( suppressed )
	{
		if ( e->sub_10077750() )
		{
			disposition = 4;
		}
		return iret;
	}

	int where_is_event;

	if ( e->sub_10077750() )
	{
		where_is_event = sub_1007d2b0( frame_start_time, starttime, endtime );
		if ( 0 == where_is_event )
		{
			disposition = 3;
			iret = 1;
		}
		else
		{
			disposition = 4;
		}
	}
	else
	{
		where_is_event = sub_1007d2b0( frame_start_time, starttime, endtime );

		if ( 0 == where_is_event )
		{
			if ( e->sub_10076b10() )
			{
				disposition = 2;
			}
			else
			{
				disposition = 1;
			}
			iret = 1;
		}
		else if ( !hasend )
		{
			where_is_event = sub_1007d2b0( starttime, frame_start_time, frame_end_time );
			if ( 0 == where_is_event )
			{
				disposition = 1;
				iret = 1;
			}
		}
	}

	return iret;
}
}
// TARGET: block_1007d300::CUnknown1007d300Scene::sub_1007d300
// END FUNCTION

// FUNCTION: 0x1007d5a0 size=0x1cc
#include "CUnknown10075aa0.h"
#include <string.h>

struct S10073220
{
	int sub_10073220(int a);
};

struct EntryView
{
	int m_pad0;
	CUnknown10075aa0 *m_pEvent;
};

// TARGET: sub_1007d5a0
bool sub_1007d5a0(EntryView *a, EntryView *b)
{
	CUnknown10075aa0 *e1 = a->m_pEvent;
	CUnknown10075aa0 *e2 = b->m_pEvent;
	if (e1->sub_10075e70() < e2->sub_10075e70())
		return true;
	if (e1->sub_10075e70() > e2->sub_10075e70())
		return false;
	if (e1->sub_10075f30() && e2->sub_10075f30())
	{
		if (e1->sub_10075f10() > e2->sub_10075f10())
			return true;
		if (e1->sub_10075f10() < e2->sub_10075f10())
			return false;
	}
	S10073220 *t1 = (S10073220 *)e1->sub_10076690();
	S10073220 *t2 = (S10073220 *)e2->sub_10076690();
	if (t1 && t2 && t1 == t2)
	{
		int s1 = e1->sub_100766d0();
		int s2 = e2->sub_100766d0();
		if (s1 && s2 && s1 == s2)
		{
			int i1 = t1->sub_10073220(s1);
			int i2 = t2->sub_10073220(s2);
			return i1 < i2;
		}
		return strcmp(e1->sub_10075c00(), e2->sub_10075c00()) == -1;
	}
	else
	{
		return strcmp(e1->sub_10075c00(), e2->sub_10075c00()) == -1;
	}
}
// END FUNCTION

// FUNCTION: 0x1007d7f0 size=0x618
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "utlsortvector.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CUtlVector4.h"
#include "UtlVec8.h"
#include "CUtlMemory24.h"

class CChoreoEventV;
struct CRBEntry24;

struct CRBEntry24
{
	int pt;
	CChoreoEventV *e;
};

template <>
inline void CUtlRBTree<CRBEntry24, int>::FindInsertionPosition(CRBEntry24 const &insert, int &parent, bool &leftchild)
{
	// find where the node belongs
	int current = m_Root;
	parent = InvalidIndex();
	leftchild = false;
	while (current != InvalidIndex()) {
		parent = current;
		if (m_LessFunc(insert, m_Elements.m_pMemory[current].m_Data)) {
			leftchild = true;
			current = LeftChild(current);
		} else {
			leftchild = false;
			current = RightChild(current);
		}
	}
}

void sub_1007f3d0(CRBEntry24 *dst, const CRBEntry24 *src);
void sub_1007f510(CChoreoEventV **dst, CChoreoEventV *const *src);
bool sub_1007d5a0(const CRBEntry24 &a, const CRBEntry24 &b);

template <>
inline void CopyConstruct(CRBEntry24 *pMemory, CRBEntry24 const &src)
{
	sub_1007f3d0(pMemory, &src);
}

template <>
inline CUtlRBTree<CRBEntry24, int>::~CUtlRBTree()
{
}

class CChoreoEventV
{
public:
	char sub_10077750();	// IsProcessing
	float sub_10075e70();	// GetStartTime
	void sub_10077770(void *cb, void *scene, float t);	// StartProcessing
	void sub_100777b0(void *cb, void *scene, float t);	// ContinueProcessing
	void sub_100777e0(void *cb, void *scene, float t);	// StopProcessing
};

struct CEventVec
{
	CChoreoEventV **m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	int m_Size;
	CChoreoEventV **m_pElements;

	int AddToTail(CChoreoEventV *const &src)
	{
		int elem = m_Size;
		((CUtlVector4 *)this)->sub_1007f400(1);
		((UtlVec8 *)this)->sub_1007f4c0(elem, 1);
		sub_1007f510(&m_pMemory[elem], &src);
		return elem;
	}
};

struct StopsView : CUtlRBTree<CRBEntry24, int>
{
	CRBEntry24 *P(int i) { CRBEntry24 *r = &Element(i); return r; }
	const Links_t &sub_1007fc70(int i) const;
	int sub_1007ef00(int parent, bool leftchild);
	__forceinline void FindPos(CRBEntry24 const &insert, int &parent, bool &leftchild)
	{
		int current = m_Root;
		parent = -1;
		leftchild = false;
		while (current != -1)
		{
			parent = current;
			if (m_LessFunc(insert, Element(current)))
			{
				leftchild = true;
				current = sub_1007fc70(current).m_Left;
			}
			else
			{
				leftchild = false;
				current = sub_1007fc70(current).m_Right;
			}
		}
	}
	__forceinline int InsertS(CRBEntry24 const &insert)
	{
		int parent;
		bool leftchild;
		FindPos(insert, parent, leftchild);
		int newNode = sub_1007ef00(parent, leftchild);
		CopyConstruct(&Element(newNode), insert);
		return newNode;
	}
};

class CChoreoSceneV
{
public:
	CUtlVector<CChoreoEventV *> m_Events;	// 0x00
	char m_pad14[0x50 - 0x14];
	CEventVec m_ActiveResumeConditions;	// 0x50
	char m_pad64[0x78 - 0x64];
	float m_flPauseTime;	// 0x78
	float m_flCurrentTime;	// 0x7c
	char m_pad80[0x94 - 0x80];
	int m_nActiveEvents;	// 0x94
	int m_n98;
	float m_flLastActiveTime;	// 0x9c
	int m_nA0;
	void *m_pIChoreoEventCallback;	// 0xa4

	int sub_1007d300(CChoreoEventV *e, float frame_start_time, float frame_end_time, bool playing_forward, int &disposition);
	void sub_1007d7f0(float curtime);
	void sub_100039f9(float curtime);
};

// TARGET: CChoreoSceneV::sub_1007d7f0
void CChoreoSceneV::sub_1007d7f0(float curtime)
{
	CChoreoEventV *e;

	float dt = curtime - m_flCurrentTime;

	bool playing_forward = (dt >= 0.0f) ? true : false;

	m_nActiveEvents = 0;

	CUtlRBTree<CRBEntry24, int> pending(0, 0, sub_1007d5a0);

	int i;
	for (i = 0; i < m_Events.Size(); i++)
	{
		e = m_Events[i];
		if (!e)
			continue;

		int disposition;
		m_nActiveEvents += sub_1007d300(e, m_flCurrentTime, curtime, playing_forward, disposition);

		if (disposition != 0)
		{
			CRBEntry24 entry;

			entry.pt = disposition;
			entry.e = e;

			pending.Insert(entry);
		}
	}

	i = pending.FirstInorder();
	while (i != pending.InvalidIndex())
	{
		CRBEntry24 *entry = &pending[i];

		switch (entry->pt)
		{
		default:
		case 0:
			break;
		case 1:
		case 2:
			entry->e->sub_10077770(m_pIChoreoEventCallback, this, m_flCurrentTime);
			if (entry->pt == 2)
			{
				m_ActiveResumeConditions.AddToTail(entry->e);
			}
			break;
		case 3:
			entry->e->sub_100777b0(m_pIChoreoEventCallback, this, m_flCurrentTime);
			break;
		case 4:
			entry->e->sub_100777e0(m_pIChoreoEventCallback, this, m_flCurrentTime);
			break;
		}

		if (m_flPauseTime >= 0.0f)
		{
			if (playing_forward)
			{
				CUtlRBTree<CRBEntry24, int> stops(0, 0, sub_1007d5a0);
				for (int j = 0; j < m_Events.Size(); j++)
				{
					if (m_Events[j] != entry->e && m_Events[j]->sub_10077750() && m_Events[j]->sub_10075e70() >= m_flPauseTime)
					{
					CRBEntry24 stop;
					stop.e = m_Events[j];
					stop.pt = 4;
					((StopsView *)&stops)->InsertS(stop);
					}
				}
				for (j = stops.FirstInorder(); j != stops.InvalidIndex(); j = stops.NextInorder(j))
				{
					CRBEntry24 *s = ((StopsView *)&stops)->P(j);
					s->e->sub_100777e0(m_pIChoreoEventCallback, this, entry->e->sub_10075e70());
				}
			}
			curtime = curtime - entry->e->sub_10075e70() + m_flPauseTime;
			float t = m_flPauseTime;
			m_flPauseTime = -1.0f;
			m_flCurrentTime = m_flLastActiveTime = t;
			if (playing_forward)
				sub_100039f9(curtime);
			return;
		}

		i = pending.NextInorder(i);
	}

	m_flCurrentTime = curtime;

	// Still processing?
	if (m_nActiveEvents)
	{
		m_flLastActiveTime = m_flCurrentTime;
	}
}
// END FUNCTION

// FUNCTION: 0x1007dfa0 size=0x4
struct CUnknown1007dfa0 { float sub_1007dfa0(); };
float CUnknown1007dfa0::sub_1007dfa0()
{
    return *(float *)((char *)this + 0x7c);
}
// END FUNCTION

// FUNCTION: 0x1007dfc0 size=0xa
struct CUnknown1007dfc0 { char p[0x78]; int a; void sub_1007dfc0(int v); };
// TARGET: CUnknown1007dfc0::sub_1007dfc0
void CUnknown1007dfc0::sub_1007dfc0(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x1007dfe0 size=0xd
#include "CUnknown1007dfe0.h"
void CUnknown1007dfe0::sub_1007dfe0(int value)
{
	m_unkA0 = value;
}
// END FUNCTION

// FUNCTION: 0x1007e000 size=0x3b
#include "S1007e050.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

void S1007e050::sub_1007e000(int elem)
{
	int idx = sub_1007e050(elem);
	if (idx != -1) {
		int num = m_size - idx - 1;
		if (num > 0)
			memmove(&m_pElements[idx], &m_pElements[idx + 1], num * sizeof(int));
		m_size--;
	}
}
// END FUNCTION

// FUNCTION: 0x1007e050 size=0x24
struct S1007e050 {
	char m_pad[0x14];
	int *m_pMemory; int m_allocationCount; int m_growSize; int m_size;
	// TARGET: S1007e050::sub_1007e050
	int sub_1007e050(int value);
};

int S1007e050::sub_1007e050(int value)
{
	for (int i = 0; i < m_size; i++) {
		if (value == m_pMemory[i])
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1007e090 size=0x135
#include "utlrbtree.h"
#include "utlvector.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct S1007f580 {
	int *m_pMemory;
	int m_alloc;
	int m_grow;
	void sub_1007f580(int num);
};

struct V5 : S1007f580 {
	int m_size;
	int *m_pElements;
	void Remove(int elem)
	{
		int n = m_size - elem - 1;
		if (n > 0)
			memmove(&m_pMemory[elem], &m_pMemory[elem + 1], n * 4);
		--m_size;
	}
	void InsertBefore(int elem, int src)
	{
		if (m_size + 1 > m_alloc)
			sub_1007f580(m_size + 1 - m_alloc);
		m_size += 1;
		m_pElements = m_pMemory;
		int n = m_size - elem - 1;
		if (n > 0)
			memmove(&m_pMemory[elem + 1], &m_pMemory[elem], n * 4);
		int *p = &m_pMemory[elem];
		if (p)
			*p = src;
	}
};

struct CUnk1007e090 {
	char pad[0x14];
	V5 v;
	void sub_1007e090(int i, int j);
};

void CUnk1007e090::sub_1007e090(int i, int j)
{
	int *pa = &v.m_pMemory[i];
	int *pb = &v.m_pMemory[j];
	int a = *pa;
	int b = *pb;
	if (a && b) {
		v.Remove(i);
		v.InsertBefore(i, b);
		v.Remove(j);
		v.InsertBefore(j, a);
	}
}
// END FUNCTION

// FUNCTION: 0x1007e220 size=0x4c
#include "CChoreoScene1007e220.h"

void CChoreoScene1007e220::sub_1007e220(CChoreoSceneActor1007e970 *pActor)
{
	for (int i = 0; i < pActor->sub_10072eb0(); i++) {
		CChoreoSceneChannel1007e970 *pChannel = pActor->sub_10072ed0(i);
		pActor->sub_10073020(pChannel);
		sub_1007e290(pChannel);
	}
	sub_1007e320(pActor);
}
// END FUNCTION

// FUNCTION: 0x1007e290 size=0x4c
#include "CChoreoScene1007e220.h"

void CChoreoScene1007e220::sub_1007e290(CChoreoSceneChannel1007e970 *pChannel)
{
	for (int i = 0; i < pChannel->sub_10073540(); i++) {
		CChoreoSceneEvent1007e970 *pEvent = pChannel->sub_10073560(i);
		pChannel->sub_100736b0(pEvent);
		sub_1007e300(pEvent);
	}
	sub_1007e410(pChannel);
}
// END FUNCTION

// FUNCTION: 0x1007e300 size=0x5
#include "CUnknown10075aa0.h"
struct CUnknown1007ce20Unit { void sub_1007e500(class CUnknown10075aa0 *); };
struct CWrap1007e300 { void sub_1007e300(class CUnknown10075aa0 *); };
// TARGET: sub_1007e300
// the game's 0x1007e300: a tail call (jmp) of CUnknown1007ce20Unit::sub_1007e500
void CWrap1007e300::sub_1007e300(class CUnknown10075aa0 *a0)
{
	((CUnknown1007ce20Unit *)this)->CUnknown1007ce20Unit::sub_1007e500(a0);
}
// END FUNCTION

// FUNCTION: 0x1007e320 size=0xbe
#include "utlrbtree.h"
#include "CUnknown1007e320.h"
#include "utlvector.h"

struct Elem1007e320 {
    char pad0[0x164];
    CUtlVector<int> m_V;
};

struct List1007e320 {
    char pad0[0x14];
    CUtlVector<Elem1007e320 *> m_list;

    void sub_1007e320(Elem1007e320 *pElem);
};

void List1007e320::sub_1007e320(Elem1007e320 *pElem)
{
    for (int i = m_list.Count() - 1; i >= 0; i--) {
        if (m_list[i] == pElem)
            m_list.Remove(i);
    }
    if (pElem)
        delete pElem;
}
// END FUNCTION

// FUNCTION: 0x1007e410 size=0xbe
#include "utlrbtree.h"
#include "CUnknown1007e320.h"
#include "utlvector.h"

struct Elem1007e410 {
    char pad0[0x84];
    CUtlVector<int> m_V;
};

struct List1007e410 {
    char pad0[0x28];
    CUtlVector<Elem1007e410 *> m_list;

    void sub_1007e410(Elem1007e410 *pElem);
};

void List1007e410::sub_1007e410(Elem1007e410 *pElem)
{
    for (int i = m_list.Count() - 1; i >= 0; i--) {
        if (m_list[i] == pElem)
            m_list.Remove(i);
    }
    if (pElem)
        delete pElem;
}
// END FUNCTION

// FUNCTION: 0x1007e500 size=0x57
#include "utlrbtree.h"
#include "CUnknown1007ce20.h"
#include "utlvector.h"
void operator delete(void *);
typedef CUtlVector<CUnknown10075aa0 *> EventVec;
struct CUnknown1007ce20Unit : CUnknown1007ce20 { void sub_1007e500(CUnknown10075aa0 *pEvent); };
void CUnknown1007ce20Unit::sub_1007e500(CUnknown10075aa0 *pEvent)
{
	EventVec *v = (EventVec *)this;
	for (int i = v->Count() - 1; i >= 0; i--) {
		if ((*v)[i] == pEvent)
			v->Remove(i);
	}
	if (pEvent) {
		pEvent->sub_10075350();
		delete pEvent;
	}
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

// FUNCTION: 0x1007e5c0 size=0x1b
struct CUnknown1007e5c0 {
	char pad0000[0x84];
	int m_84;
	int m_88;
	void sub_1007e5c0(int *pOut84, int *pOut88);
};

// TARGET: CUnknown1007e5c0::sub_1007e5c0
void CUnknown1007e5c0::sub_1007e5c0(int *pOut84, int *pOut88)
{
	*pOut84 = m_84;
	*pOut88 = m_88;
}
// END FUNCTION

// FUNCTION: 0x1007e5f0 size=0x1af
#include "CUnknown1007ec20.h"
#include "CChoreoScene1007e970.h"
#include "CUnknown10075aa0.h"

struct SDumpOutput;
void sub_10079320(SDumpOutput *pOut, int nIndent, const char *pszFormat, ...);

struct CChoreoTagView
{
	float sub_10073940();	// the tag's time (stub 0x1000e953)
};

struct CChoreoEventView : CUnknown10075aa0
{
	char sub_10076ef0();	// stub 0x100078f6
	const char *sub_10076fa0();	// the wave file (stub 0x1000e7a5)
	const char *sub_10076fc0();	// the tag name (stub 0x1000d463)
	const char *sub_10075c00();	// the event name (stub 0x1000b0e1)
	void sub_10076630(float flOffset);	// stub 0x1000ee21
};

struct CChoreoSceneView : CChoreoScene1007e970
{
	int sub_1007a250();	// the number of events (stub 0x1000f2ae)
	CChoreoEventView *sub_1007a270(int index);	// the event with that index (stub 0x10013c96)
};

void CUnknown1007ec20::sub_1007e5f0()
{
	CChoreoSceneView *pScene = (CChoreoSceneView *)this;
	for (int i = 0; i < pScene->m_nActors; i++)
	{
		CChoreoSceneActor1007e970 *pActor = pScene->m_ppActors[i];
		if (!pActor)
			continue;
		for (int j = 0; j < pActor->sub_10072eb0(); j++)
		{
			CChoreoSceneChannel1007e970 *pChannel = pActor->sub_10072ed0(j);
			if (!pChannel)
				continue;
			for (int k = 0; k < pChannel->sub_10073540(); k++)
			{
				CChoreoEventView *pEvent = (CChoreoEventView *)pChannel->sub_10073560(k);
				if (pEvent && pEvent->sub_10076ef0())
				{
					CChoreoTagView *pTag = (CChoreoTagView *)pScene->sub_1007e970(pEvent->sub_10076fc0(), (int)pEvent->sub_10076fa0());
					if (pTag)
					{
						float flOffset = pTag->sub_10073940() - pEvent->sub_10075e70();
						pEvent->sub_10076630(flOffset);
					}
					else
					{
						sub_10079320((SDumpOutput *)this, 0, "Event %s was missing tag %s for wav %s\n", pEvent->sub_10075c00(), pEvent->sub_10076fc0(), pEvent->sub_10076fa0());
						pEvent->sub_10076f10(0, "", "");
					}
				}
			}
		}
	}
	*(float *)((char *)this + 0x80) = 0.0f;
	for (int n = 0; n < pScene->sub_1007a250(); n++)
	{
		CChoreoEventView *pEvent = pScene->sub_1007a270(n);
		if (pEvent && pEvent->sub_10075b70() == 5 && pEvent->sub_10075f10() > *(float *)((char *)this + 0x80))
			*(float *)((char *)this + 0x80) = pEvent->sub_10075f10();
	}
}
// END FUNCTION

// FUNCTION: 0x1007e810 size=0x103
extern "C" int _strcmpi(const char *a, const char *b);
struct SEvent1007e810
{
	char sub_10076ef0();
	const char *sub_10076fc0();
	const char *sub_10076fa0();
};
struct SChannel1007e810
{
	int sub_10073540();
	SEvent1007e810 *sub_10073560(int i);
};
struct SActor1007e810
{
	int sub_10072eb0();
	SChannel1007e810 *sub_10072ed0(int i);
};
struct SScene1007e810
{
	char m_pad[0x14];
	SActor1007e810 **m_actors;
	char m_pad2[8];
	int m_nActors;
	SEvent1007e810 *sub_1007e810(const char *a, const char *b);
};

SEvent1007e810 *SScene1007e810::sub_1007e810(const char *a, const char *b)
{
	for (int i = 0; i < m_nActors; i++)
	{
		SActor1007e810 *pActor = m_actors[i];
		if (pActor)
		{
			for (int j = 0; j < pActor->sub_10072eb0(); j++)
			{
				SChannel1007e810 *pChannel = pActor->sub_10072ed0(j);
				if (pChannel)
				{
					for (int k = 0; k < pChannel->sub_10073540(); k++)
					{
						SEvent1007e810 *pEvent = pChannel->sub_10073560(k);
						if (pEvent && pEvent->sub_10076ef0())
						{
							if (!_strcmpi(a, pEvent->sub_10076fc0()) && !_strcmpi(b, pEvent->sub_10076fa0()))
								return pEvent;
						}
					}
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1007e970 size=0xe3
#include "CChoreoScene1007e970.h"
#include <string.h>

int CChoreoScene1007e970::sub_1007e970(const char *pszText, int a)
{
	for (int i = 0; i < m_nActors; i++)
	{
		CChoreoSceneActor1007e970 *pActor = m_ppActors[i];
		if (!pActor)
			continue;
		for (int j = 0; j < pActor->sub_10072eb0(); j++)
		{
			CChoreoSceneChannel1007e970 *pChannel = pActor->sub_10072ed0(j);
			if (!pChannel)
				continue;
			for (int k = 0; k < pChannel->sub_10073540(); k++)
			{
				CChoreoSceneEvent1007e970 *pEvent = pChannel->sub_10073560(k);
				if (pEvent && pEvent->sub_100029c8() == 5 && strstr(pEvent->sub_10075c50(), pszText))
				{
					int nResult = pEvent->sub_10076e70(a);
					if (nResult)
						return nResult;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1007eaa0 size=0x123
#include "CChoreoScene1007eaa0.h"
#include "CAnchorList.h"

struct S_Event {
    int sub_10076690();
    float sub_10075e70();
};
struct S_List {
    S_Event **m_pMemory;
    int m_nAlloc;
    int m_nGrow;
    int m_nCount;
};
struct S_Buf {
    char *m_pBuffer;
    int m_nSize;
    int m_nGrow;
    int m_nGet;
    int m_nPut;
    char pad[4];
    void sub_1006bd20(int a, int b, int c);
    ~S_Buf()
    {
        if (m_nGrow != -1) {
            if (m_pBuffer)
                g_109f3624(m_pBuffer);
        }
    }
};
struct S_FS {
    virtual void *Open(const char *pszName, const char *pszMode, const char *pszPathId);
    virtual void Close(void *h);
    virtual void v2();
    virtual void Write(const void *p, int nSize, void *h);
};
struct S_Scene : CChoreoScene1007eaa0 {
    void sub_1007c600(S_Buf *pBuf, int a, S_Event *pEvent, float flStart);
};

extern S_FS *g_1070b238;
void sub_1007bf70(S_Buf *pBuf, int a, const char *pszFormat, ...);

void CChoreoScene1007eaa0::sub_1007eaa0(const char *pszFile, void *pEvents)
{
    S_List *pList = (S_List *)pEvents;
    if (pList->m_nCount > 0) {
        S_Buf buf;
        buf.sub_1006bd20(0, 0, 1);
        sub_1007bf70(&buf, 0, "// Choreo version 1:  <%i> Exported Events\n", pList->m_nCount);
        float flMin = 0;
        for (int i = 0; i < pList->m_nCount; i++) {
            S_Event *pEvent = pList->m_pMemory[i];
            if (pEvent->sub_10076690()) {
                if (i == 0 || pEvent->sub_10075e70() < flMin)
                    flMin = pEvent->sub_10075e70();
            }
        }
        for (int j = 0; j < pList->m_nCount; j++) {
            S_Event *pEvent = pList->m_pMemory[j];
            if (pEvent->sub_10076690())
                ((S_Scene *)this)->sub_1007c600(&buf, 0, pEvent, flMin);
        }
        void *h = g_1070b238->Open(pszFile, "wt", 0);
        if (h) {
            g_1070b238->Write(buf.m_pBuffer, buf.m_nPut, h);
            g_1070b238->Close(h);
        }
    }
}
// END FUNCTION
