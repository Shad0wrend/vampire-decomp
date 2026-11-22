// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 94 blocks
#include "vampire.h"

// FUNCTION: 0x100803c0 size=0x6
#include "CSceneEntity.h"
#include "datamap.h"
extern datamap_t g_10548180;

datamap_t *CSceneEntity::vfunc82()
{
	return &g_10548180;
}
// END FUNCTION

// FUNCTION: 0x100803e0 size=0x5
int * sub_10080420(void);
int * g_106c8a3c = ((int * (*)(int))sub_10080420)(0);
// END FUNCTION

// FUNCTION: 0x10080420 size=0x269
class ISaveRestoreOps;
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
extern int g_10548180[2];
void sub_10006460();
void sub_10011bc1();
void sub_1000ce19();
void sub_100034db();

int *sub_10080420()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_iszSceneFile", {0x450, 0}, 1, 6, "SceneFile" },
        { 2, "m_iszTarget1", {0x458, 0}, 1, 6, "target1" },
        { 2, "m_iszTarget2", {0x45c, 0}, 1, 6, "target2" },
        { 2, "m_iszTarget3", {0x460, 0}, 1, 6, "target3" },
        { 2, "m_iszTarget4", {0x464, 0}, 1, 6, "target4" },
        { 2, "m_iszOverrideSpeechTarget", {0x468, 0}, 1, 6, "override_speech_target" },
        { 16, "m_iszBaseAnimSet", {0x480, 0}, 1, 6, "BaseAnim" },
        { 16, "m_iszAnimSetForMalePlayer", {0x484, 0}, 1, 6, "MaleAnim" },
        { 16, "m_iszAnimSetForFemalePlayer", {0x488, 0}, 1, 6, "FemaleAnim" },
        { 4, "m_ActorPosStart", {0x574, 0}, 1, 6, "position_start" },
        { 4, "m_ActorPosEnd", {0x578, 0}, 1, 6, "position_end" },
        { 5, "m_bHideEnts", {0x57e, 0}, 1, 6, "hide_ents" },
        { 5, "m_bForceLOD", {0x57d, 0}, 1, 6, "force_lod_2" },
        { 5, "m_bFullSound", {0x57f, 0}, 1, 6, "full_sound" },
        { 5, "m_bIsPlayingBack", {0x498, 0}, 1, 2 },
        { 5, "m_bPaused", {0x499, 0}, 1, 2 },
        { 1, "m_flCurrentTime", {0x4a0, 0}, 1, 2 },
        { 1, "m_flFrameTime", {0x49c, 0}, 1, 2 },
        { 5, "m_bAutomated", {0x4ac, 0}, 1, 2 },
        { 4, "m_nAutomatedAction", {0x4b0, 0}, 1, 2 },
        { 1, "m_flAutomationDelay", {0x4b4, 0}, 1, 2 },
        { 1, "m_flAutomationTime", {0x4b8, 0}, 1, 2 },
        { 15, "m_flLastUpdateTime", {0x4a4, 0}, 1, 2 },
        { 0, "InputStartPlayback", {0, 0}, 1, 8, "Start", 0, (void *)sub_10006460 },
        { 0, "InputPausePlayback", {0, 0}, 1, 8, "Pause", 0, (void *)sub_10011bc1 },
        { 0, "InputResumePlayback", {0, 0}, 1, 8, "Resume", 0, (void *)sub_1000ce19 },
        { 0, "InputCancelPlayback", {0, 0}, 1, 8, "Cancel", 0, (void *)sub_100034db },
        { 10, "m_OnStart", {0x4cc, 0}, 1, 0x16, "OnStart", g_1055dc70 },
        { 10, "m_OnCompletion", {0x4e4, 0}, 1, 0x16, "OnCompletion", g_1055dc70 },
        { 10, "m_OnCanceled", {0x4fc, 0}, 1, 0x16, "OnCanceled", g_1055dc70 },
        { 10, "m_OnTrigger1", {0x514, 0}, 1, 0x16, "OnTrigger1", g_1055dc70 },
        { 10, "m_OnTrigger2", {0x52c, 0}, 1, 0x16, "OnTrigger2", g_1055dc70 },
        { 10, "m_OnTrigger3", {0x544, 0}, 1, 0x16, "OnTrigger3", g_1055dc70 },
        { 10, "m_OnTrigger4", {0x55c, 0}, 1, 0x16, "OnTrigger4", g_1055dc70 },
    };
    g_10548180[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_10548180[0] = (int)&dataDesc[1];
    return g_10548180;
}
// END FUNCTION

// FUNCTION: 0x10080730 size=0x10
namespace lifted {
extern char g_1044f044;
}
struct CUnknown10080730 { void * sub_10080730(); };
void * CUnknown10080730::sub_10080730()
{
    *(int *)this = (int)&lifted::g_1044f044;
    *(int *)((char *)this + 4) = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x10080750 size=0xa
#include "CUnknown10080750.h"
void CUnknown10080750::sub_10080750(int value)
{
	m_unk4 = value;
}
// END FUNCTION

// FUNCTION: 0x10080770 size=0x1a
#include "CChoreoEventCallback.h"

void CChoreoEventCallback::vfunc0(float a, int b, int c)
{
	if (m_pScene)
		m_pScene->vfunc248(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x100807a0 size=0x1a
#include "CChoreoEventCallback.h"

void CChoreoEventCallback::vfunc1(float a, int b, int c)
{
	if (m_pScene)
		m_pScene->vfunc249(a, b, (CSceneEvent *)c);
}
// END FUNCTION

// FUNCTION: 0x100807d0 size=0x1a
#include "CChoreoEventCallback.h"

void CChoreoEventCallback::vfunc2(float a, int b, int c)
{
	if (m_pScene)
		m_pScene->vfunc250(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10080800 size=0x1c
#include "CChoreoEventCallback.h"

// TARGET: CChoreoEventCallback::vfunc3
char CChoreoEventCallback::vfunc3(float a, int b, CSceneEvent *pEvent)
{
	if (m_pScene == 0)
		return 1;
	return m_pScene->vfunc251(a, b, pEvent);
}
// END FUNCTION

// FUNCTION: 0x10080830 size=0x132
#include "CLogicalEntity.h"
#include "CSceneEntity.h"
#include "CUnknown10080750.h"
#include "CBaseVampireSkillEntity.h"

extern char vt_1044f05c[];

class SCvarSystem
{
public:
	virtual void v0();
	virtual void v1();
	virtual void *vfunc2(const char *pszName);
};
extern SCvarSystem *g_1070b234;

struct SSceneView
{
	char pad0[0x450];
	int n450;
	int n454;
	char pad1[0x46c - 0x458];
	CBaseHandle h[5];
	int n480, n484, n488;
	char pad2[0x498 - 0x48c];
	char b498, b499;
	char pad3[0x4a0 - 0x49a];
	int n4a0;
	float f4a4;
	char pad4[0x4ac - 0x4a8];
	char b4ac;
	char pad5[3];
	int n4b0, n4b4, n4b8, n4bc;
	CUnknown10080750 sub4c0;
	CVampireSkillItem items[7];
	int n574, n578;
	char pad8[1];
	char b57d, b57e, b57f;
};

CSceneEntity *CSceneEntity::sub_10080830()
{
	SSceneView *v = (SSceneView *)this;
	((CLogicalEntity *)this)->CLogicalEntity::CLogicalEntity();
	v->h[0].CBaseHandle::CBaseHandle();
	v->h[1].CBaseHandle::CBaseHandle();
	v->h[2].CBaseHandle::CBaseHandle();
	v->h[3].CBaseHandle::CBaseHandle();
	v->h[4].CBaseHandle::CBaseHandle();
	v->sub4c0.sub_10080730();
	v->items[0].sub_100cd2a0();
	v->items[1].sub_100cd2a0();
	v->items[2].sub_100cd2a0();
	v->items[3].sub_100cd2a0();
	v->items[4].sub_100cd2a0();
	v->items[5].sub_100cd2a0();
	v->items[6].sub_100cd2a0();
	*(void **)this = vt_1044f05c;
	v->b498 = 0;
	v->b499 = 0;
	v->n450 = 0;
	v->n480 = 0;
	v->n484 = 0;
	v->n488 = 0;
	v->n4a0 = 0;
	v->f4a4 = gpGlobals->curtime;
	v->b4ac = 0;
	v->n4b0 = 0;
	v->n4b4 = 0;
	v->n4b8 = 0;
	v->n4bc = 0;
	v->sub4c0.sub_10080750((int)this);
	v->sub4c0.m_unk8 = (int)g_1070b234->vfunc2("snd_mixahead");
	v->n574 = 0;
	v->n578 = 0;
	v->b57e = 0;
	v->b57d = 0;
	v->b57f = 0;
	v->n454 = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100809c0 size=0x1e
#include "CSceneEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CSceneEntity::vfunc5
CSceneEntity *CSceneEntity::vfunc5(unsigned int flags)
{
	sub_1000b1ef();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100809f0 size=0x6d
#include "CSceneEntity.h"
#include "COutputEvent.h"

extern void *vt_1044f05c[];

struct CSceneEntityView
{
	char m_pad0000[0x498];
	char m_bPlaying;
	char m_pad0499[0x4cc - 0x499];
	COutputEvent m_Output[7];
};

// TARGET: CSceneEntity::sub_100809f0
void CSceneEntity::sub_100809f0()
{
	CSceneEntityView *v = (CSceneEntityView *)this;
	*(void ***)this = vt_1044f05c;
	if (v->m_bPlaying)
		sub_10082b80();
	v->m_Output[6].sub_100cd2d0();
	v->m_Output[5].sub_100cd2d0();
	v->m_Output[4].sub_100cd2d0();
	v->m_Output[3].sub_100cd2d0();
	v->m_Output[2].sub_100cd2d0();
	v->m_Output[1].sub_100cd2d0();
	v->m_Output[0].sub_100cd2d0();
	sub_1000cb8a();
}
// END FUNCTION

// FUNCTION: 0x10080a80 size=0x24
#include "CSceneEntity.h"
#include "CBaseEntity.h"

// TARGET: CSceneEntity::vfunc180
void CSceneEntity::vfunc180()
{
	if (m_bPlaying498)
		vfunc245();
	sub_10083a60();
	((CBaseEntity *)this)->CBaseEntity::vfunc180();
}
// END FUNCTION

// FUNCTION: 0x10080ac0 size=0x2f
#include "CSceneEntity.h"
// TARGET: CSceneEntity::sub_10080ac0
#include "ConVar.h"

float CSceneEntity::sub_10080ac0() {
    ConVar *pVar = *(ConVar **)((char *)this + 0x4c8);
    if (pVar != 0) {
        if (pVar->m_pParent->vfunc1()) {
            return 0.0f;
        }
        return pVar->m_pParent->m_fValue;
    }
    return 0.1f;
}
// END FUNCTION

// FUNCTION: 0x10080b00 size=0x143
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CSceneEntity.h"
#include "ScopeTrace.h"
#include <string.h>

extern "C" char *__cdecl _strlwr(char *);
extern "C" __declspec(dllimport) char *__cdecl Q_strncpy(char *pDest, const char *pSrc, int maxLen);

class ICommandLine
{
public:
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual int FindParm(const char *psz, const char *pszDefault);	// slot 3
};
extern "C" __declspec(dllimport) ICommandLine *CommandLine();

struct CFileSystemX
{
	virtual void *Open(const char *pszName, const char *pszMode, const char *pszPathID);	// slot 0
	virtual void Close(void *hFile);	// slot 1
	virtual void v2();
	virtual int Write(const void *pData, int nBytes, void *hFile);	// slot 3
};
extern CFileSystemX *g_1070b238;


extern void (__cdecl *g_109f364c)(const char *, ...);	// DevWarning
extern void (__cdecl *g_109f3878)(char *pPath, const char *pExt, int nMax);	// Q_SetExtension
const char *sub_101d3730(const char *fmt, ...);

// TARGET: CSceneEntity::sub_10080b00
void CSceneEntity::sub_10080b00(CSceneEvent *pEvent)
{
	static int s_bLogging = CommandLine()->FindParm("-log_speech_files", 0);
	if (!s_bLogging || !pEvent)
		return;
	if (pEvent->sub_100029c8() != 5)
		return;
	void *hFile = g_1070b238->Open("logs/logged_lcs_files.txt", "a+", 0);
	if (!hFile) {
		g_109f364c("CSceneEntity::LogPrecache(%s) could not open: logs/logged_lcs_files.txt\n", sub_100ab4f0());
		return;
	}
	char szFile[0x104];
	Q_strncpy(szFile, pEvent->sub_10075c50(), 0x104);
	g_109f3878(szFile, ".lip", 0x104);
	_strlwr(szFile);
	const char *pszLine = sub_101d3730("%s\t%s\t%s\n", gpGlobals->mapname ? gpGlobals->mapname : g_106b8540, sub_100ab4f0(), szFile);
	g_1070b238->Write(pszLine, strlen(pszLine), hFile);
	g_1070b238->Close(hFile);
}
// END FUNCTION

// FUNCTION: 0x10080cb0 size=0x154
#include "CSceneEntity.h"
#include "engineiface.h"

__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
extern void (*g_109f3878)(char *path, const char *extension, int pathStringLength);

struct SceneObjView;
struct SceneEventView : CSceneEvent {
	void sub_100766f0(SceneObjView *pScene);
};
struct SceneObjView {
	int sub_1007a250();
	SceneEventView *sub_1007a270(int index);
	char sub_1007ed10();
	void sub_1007ecf0(int a);
};
struct SceneStub : CSceneEntity {
	void sub_1001163f(int a);
};

void CSceneEntity::sub_10080cb0(int a)
{
	SceneObjView *pScene = (SceneObjView *)a;
	char buf[0x104];
	for (int i = 0; i < pScene->sub_1007a250(); i++) {
		SceneEventView *pEvent = pScene->sub_1007a270(i);
		if (!pEvent)
			continue;
		sub_10080b00(pEvent);
		switch (pEvent->sub_100029c8()) {
		case 5:
			Q_snprintf(buf, 0x104, "*%s", pEvent->sub_10075c50());
			enginesound->vfunc0(buf, 0);
			g_109f3878(buf, ".mp3", 0x104);
			enginesound->vfunc0(buf, 0);
			break;
		case 0xb:
			if (!pScene->sub_1007ed10() && !pEvent->sub_10076710()) {
				SceneObjView *pSub = (SceneObjView *)sub_100839c0(pEvent->sub_10075c50());
				pSub->sub_1007ecf0(1);
				pEvent->sub_100766f0(pSub);
				((SceneStub *)this)->sub_1001163f((int)pSub);
			}
			break;
		case 0x13:
			Q_strncpy(buf, pEvent->sub_10075c50(), 0x104);
			if (buf[0])
				enginesound->vfunc0(buf, 0);
			break;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10080e70 size=0xb9
#include "CSceneEntity.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct CEngineView
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
	virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void a10(); virtual void a11(); virtual void a12();
	virtual int v13(const char *pszName, int bPreload);
};
extern CEngineView *g_1070b22c;

struct SceneView
{
	char pad0[0x450];
	const char *m_pszScene;
	char pad1[0x480 - 0x454];
	const char *m_isz480;
	const char *m_isz484;
	const char *m_isz488;
	int m_n48c;
	int m_n490;
	int m_n494;
	char pad2[0x4bc - 0x498];
	int m_n4bc;
};

void CSceneEntity::vfunc104()
{
	SceneView *v = (SceneView *)this;
	sub_10083a30(STRINGR_F(v->m_pszScene));
	if (v->m_n4bc) {
		v->m_n48c = v->m_isz480 ? g_1070b22c->v13(STRINGR_F(v->m_isz480), 0) : 0;
		v->m_n490 = v->m_isz484 ? g_1070b22c->v13(STRINGR_F(v->m_isz484), 0) : 0;
		v->m_n494 = v->m_isz488 ? g_1070b22c->v13(STRINGR_F(v->m_isz488), 0) : 0;
		sub_10080cb0(v->m_n4bc);
	}
}
// END FUNCTION

// FUNCTION: 0x10080f60 size=0x8
#include "CSceneEntity.h"
// TARGET: CSceneEntity::vfunc103
void CSceneEntity::vfunc103()
{
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x10080f80 size=0x76
#include "CBaseEntity.h"
#include "CSceneEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

struct CSceneEntityUnit : CSceneEntity {
    void sub_10001226();
    void sub_10080f80();
};

void CSceneEntity::vfunc113()
{
    CSceneEntityUnit *u = (CSceneEntityUnit *)this;
    u->sub_10001226();
    unsigned int h = *(unsigned int *)((char *)this + 0x47c);
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (int)(h >> 13) && pSlot->m_pEntity)
            return;
    }
    const char *pszName = *(const char **)((char *)this + 0x468);
    if (!pszName)
        pszName = g_106b8540;
    CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
    if (pTarget)
        *(unsigned int *)((char *)this + 0x47c) = *pTarget->vfunc1();
    else
        *(unsigned int *)((char *)this + 0x47c) = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x10081020 size=0x118
#include "CSceneEntity.h"


struct SceneAutoView_t {
	char pad[0x4ac];
	char bTimed;
	char pad4ad[3];
	int nType;
	float flTime;
	float flElapsed;
	CSceneEntityScene *pScene;
};

void sub_10081190(const char *pszFormat, ...);

void CSceneEntity::vfunc241()
{
	SceneAutoView_t *pView = (SceneAutoView_t *)this;
	if (!pView->pScene)
		return;
	if (pView->pScene->sub_1007d190()) {
		switch (pView->nType) {
		case 1:
			vfunc245();
			break;
		case 2:
			vfunc244();
			break;
		default:
			vfunc244();
			break;
		}
	} else {
		if (!pView->bTimed)
			return;
		pView->flElapsed = (gpGlobals->curtime - sub_100ac720(0)) + pView->flElapsed;
		if (pView->flTime > 0.0f && pView->flElapsed < pView->flTime)
			return;
		switch (pView->nType) {
		case 1:
			sub_10081190("Automatically canceling playback\n");
			vfunc245();
			break;
		case 2:
			sub_10081190("Automatically resuming playback\n");
			vfunc244();
			break;
		default:
			sub_10081190("Unknown action %i, automatically resuming playback\n", pView->nType);
			vfunc244();
			break;
		}
	}
	pView->bTimed = 0;
	pView->nType = 0;
	pView->flElapsed = 0;
	pView->flTime = 0;
}
// END FUNCTION

// FUNCTION: 0x10081190 size=0x5b
#include <stdarg.h>
#include "ConVar.h"
extern ConVar *g_106c85d4;
__declspec(dllimport) void __cdecl Msg(const char *, ...);
extern "C" __declspec(dllimport) int __cdecl Q_vsnprintf(char *, int, const char *, va_list);
void sub_10081190(const char *pszFormat, ...)
{
	char szBuf[0x2000];
	va_list marker;
	if (!g_106c85d4->vfunc1() && g_106c85d4->m_nValue) {
		va_start(marker, pszFormat);
		Q_vsnprintf(szBuf, sizeof(szBuf), pszFormat, marker);
		va_end(marker);
		Msg(szBuf);
	}
}
// END FUNCTION

// FUNCTION: 0x10081210 size=0x113
#include "CSceneEntity.h"
#include "IVEngineServerFull.h"

extern IVEngineServerFull *g_1070b22c;
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double __cdecl atof(const char *);

void CSceneEntity::vfunc266(int unused, const char *pszArgs)
{
    char token[1024];
    const char *pData;
    vfunc243();
    m_bAutomateTimed = 0;
    m_nAutomateType = 0;
    m_flAutomateTime = 0;
    m_nAutomateField = 0;
    pData = g_1070b22c->ParseFile(pszArgs, token);
    if (_strcmpi(token, "automate") == 0) {
        pData = g_1070b22c->ParseFile(pData, token);
        if (_strcmpi(token, "Cancel") == 0)
            m_nAutomateType = 1;
        else if (_strcmpi(token, "Resume") == 0)
            m_nAutomateType = 2;
        if (m_nAutomateType != 0) {
            g_1070b22c->ParseFile(pData, token);
            m_flAutomateTime = (float)atof(token);
            if (m_flAutomateTime > 0.0f) {
                m_bAutomateTimed = 1;
                m_nAutomateField = 0;
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x10081380 size=0x9a
#include <stdlib.h>
#include "CSceneEntity.h"
#include "CUnknown10078540.h"

struct CSceneEventSpeed	// the choreography event: text parameter, ramp state, elapsed time
{
	const char *sub_10075c50();
	int sub_10078610();
	int sub_100785d0();
	float sub_10075e70();
	void sub_1007dfc0(int value);
};

void CSceneEntity::vfunc265(void *pTarget, void *pEvent)
{
	CSceneEventSpeed *pSpeed = (CSceneEventSpeed *)pEvent;
	float flSpeed = (float)atof(pSpeed->sub_10075c50());
	if (pSpeed->sub_10078610() != -1)
	{
		int n = pSpeed->sub_100785d0();
		if (n <= 0)
			return;
		((CUnknown10078540 *)pSpeed)->sub_100785f0(n - 1);
	}
	((CSceneEventSpeed *)pTarget)->sub_1007dfc0(*(int *)&flSpeed);
	m_f49c = (m_f49c - (pSpeed->sub_10075e70() - m_f4a0) < 0.0f) ? 0.0f : m_f49c - (pSpeed->sub_10075e70() - m_f4a0);
	m_f4a0 = flSpeed;
}
// END FUNCTION

// FUNCTION: 0x10081450 size=0x19
#include "CSceneEntity.h"
#include "CBaseFlex.h"

void CSceneEntity::vfunc252(int b, CBaseFlex *pActor, CSceneEvent *pEvent)
{
	pActor->vfunc286(b, pEvent);
}
// END FUNCTION

// FUNCTION: 0x10081480 size=0x14
struct CVirtObj10081480
{
	void v0(int a);
};

// TARGET: sub_10081480
void __stdcall sub_10081480(int a1, CVirtObj10081480 *pObj, int a3)
{
	void **vt = *(void ***)pObj;
	union {
		void *p;
		void (CVirtObj10081480::*pm)(int);
	} u;
	u.p = vt[287];
	(pObj->*u.pm)(a3);
}
// END FUNCTION

// FUNCTION: 0x100814b0 size=0x1f
#include "CSceneEntity.h"

// TARGET: CSceneEntity::vfunc254
void CSceneEntity::vfunc254(int unused, CSceneActorSlots *pActor, void *pEvent)
{
	pActor->vfunc286(m_pScene4bc, pEvent);
}
// END FUNCTION

// FUNCTION: 0x100814e0 size=0x14
#include "CSceneEntity.h"

// TARGET: CSceneEntity::vfunc255
void CSceneEntity::vfunc255(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent)
{
	void **vt = *(void ***)pActor;
	union {
		void *p;
		void (CSceneEventActorEnt::*pm)(CSceneEvent *);
	} u;
	u.p = vt[287];
	(pActor->*u.pm)(pEvent);
}
// END FUNCTION

// FUNCTION: 0x10081510 size=0x62
#include "CSceneEntity.h"
#include "CBaseAnimating.h"
#include "CBaseAnimatingOverlay.h"
__declspec(dllimport) void __cdecl Warning(const char *, ...);
// TARGET: CSceneEntity::vfunc256
void CSceneEntity::vfunc256(int b, CSceneEventActorEnt *pActor, CSceneEvent *pEvent)
{
	CBaseAnimatingOverlay *pNPC = (CBaseAnimatingOverlay *)pActor->m_pNPC94;
	int iSequence = ((CBaseAnimating *)pActor)->sub_1008f7b0(pEvent->sub_10075c50());
	if (pNPC && iSequence != -1) {
		pNPC->sub_10099140(iSequence, pEvent->sub_10076b30(), 1);
		return;
	}
	Warning("Could not find gesture sequence %s\n", pEvent->sub_10075c50());
}
// END FUNCTION

// FUNCTION: 0x100815a0 size=0x14
struct CVirtObj100815a0
{
	void v0(int a);
};

void __stdcall sub_100815a0(int a1, CVirtObj100815a0 *pObj, int a3)
{
	void **vt = *(void ***)pObj;
	union {
		void *p;
		void (CVirtObj100815a0::*pm)(int);
	} u;
	u.p = vt[287];
	(pObj->*u.pm)(a3);
}
// END FUNCTION

// FUNCTION: 0x100815d0 size=0x34
#include "CSceneEntity.h"
#include "CAI_BaseNPC.h"

// TARGET: CSceneEntity::vfunc258
void CSceneEntity::vfunc258(int a1, int a2, int a3, int a4, int a5)
{
	if (a2 && a3)
	{
		CAI_BaseNPC *pNPC = *(CAI_BaseNPC **)(a2 + 0x94);
		if (pNPC)
			pNPC->vfunc536(a3, a4, 0x3e4ccccd, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10081620 size=0xad
#include "CBaseEntity.h"
#include "CSceneEntity.h"
#include "CGlobalEntityList.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CSceneActorX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8)
	PV(90) PV(91) PV(92)
	virtual void vfunc93(int moveType, int moveCollide);
	char m_pad0004[0x5cf0 - 4];
	float m_flTime5cf0;
	char m_pad5cf4[0x5db8 - 0x5cf4];
	float m_vCentroid[3];
	float m_vOrigin[3];

	void sub_10280de0(int a);
};

struct CSceneTargetX
{
	PV100(0)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18)
	PV(190) PV(191)
	virtual float *vfunc192(float *pOut);
	PV(193) PV(194) PV(195) PV(196) PV(197) PV(198) PV(199)
	PV10(20)
	PV(210) PV(211) PV(212) PV(213) PV(214) PV(215) PV(216) PV(217) PV(218)
	virtual float *vfunc219();
};

struct CSceneEventX
{
	char m_pad0000[0x94];
	CSceneActorX *m_pActor;
};


extern CGlobalEntityList g_106eb5d8;

// TARGET: CSceneEntity::vfunc259
void CSceneEntity::vfunc259(int unused, void *pEvent, const char *pszTarget)
{
	CSceneActorX *pActor = ((CSceneEventX *)pEvent)->m_pActor;
	if (pActor) {
		CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, pszTarget, 0, 0);
		if (pTarget) {
			pActor->vfunc93(4, 0);
			float vTemp[3];
			const float *pCentroid = ((CSceneTargetX *)pTarget)->vfunc192(vTemp);
			pActor->m_vCentroid[0] = pCentroid[0];
			pActor->m_vCentroid[1] = pCentroid[1];
			pActor->m_vCentroid[2] = pCentroid[2];
			const float *pOrigin = ((CSceneTargetX *)pTarget)->vfunc219();
			pActor->m_vOrigin[0] = pOrigin[0];
			pActor->m_vOrigin[1] = pOrigin[1];
			pActor->m_vOrigin[2] = pOrigin[2];
			pActor->sub_10280de0(0x39);
			pActor->m_flTime5cf0 = gpGlobals->curtime;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10081700 size=0x13f
#include "CBasePlayer.h"
#include "CSceneEntity.h"
#include "CAI_BaseNPCTroika.h"
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
extern "C" __declspec(dllimport) void __cdecl Q_SetExtension(char *, const char *, int);
struct FileSysX { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
  virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual char v9(const char *p, int a); };
extern FileSysX *g_1070b238;
extern CGlobalEntityList *g_10566458;
struct SceneEventX { char pad[0x98]; CAI_BaseNPCTroika *pActor; };
struct NpcX : CAI_BaseNPCTroika { void sub_102c0520(const char *, int, char); };

void CSceneEntity::vfunc260(int unused, void *pEvent, const char *pszTarget, int a4, int a5)
{
    if (!pEvent)
        return;
    NpcX *pActor = (NpcX *)((SceneEventX *)pEvent)->pActor;
    if (!pActor)
        return;
    char szName[260];
    Q_snprintf(szName, 260, "sound/%s", pszTarget);
    Q_SetExtension(szName, ".mp3", 260);
    if (!g_1070b238->v9(szName, 0)) {
        Q_snprintf(szName, 260, "*%s", pszTarget);
    } else {
        Q_snprintf(szName, 260, "*%s", pszTarget);
        Q_SetExtension(szName, ".mp3", 260);
    }
    CBasePlayer *pThis = (CBasePlayer *)this;
    if (pThis->sub_10081890())
        ((CBaseEntity *)pActor)->sub_100a8d30(pThis->sub_10081890());
    if (*((char *)pActor + 0x64c0)) {
        unsigned int h = *(unsigned int *)((char *)pActor + 0x6554);
        CGlobalEntityList_Ent *pEnt;
        if (h != 0xffffffff) {
            CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
            if (s->m_Serial == (int)(h >> 13))
                pEnt = s->m_pEntity;
            else
                pEnt = 0;
        } else
            pEnt = 0;
        if ((void *)pEnt != (void *)this)
            pActor->sub_102c0bb0();
    }
    pActor->sub_102c0520(szName, a5, *((char *)this + 0x57f));
}
// END FUNCTION

// FUNCTION: 0x10081890 size=0x2d
#include "CBaseEntity.h"
#include "CBasePlayer.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

CBaseEntity *CBasePlayer::sub_10081890()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x47c);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100818d0 size=0x1f
#include "CBaseEntity.h"
#include "CSceneEntity.h"
#include "CAI_BaseNPC.h"

void CSceneEntity::vfunc261(int unused, CSceneEventActorEnt *pActor, CBaseEntity *pEnt, int d, int e)
{
	if (pActor->m_pNPC94 && pEnt)
		((CAI_BaseNPC *)pActor->m_pNPC94)->sub_10279cc0(pEnt);
}
// END FUNCTION

// FUNCTION: 0x10081900 size=0x3d
#include "CSceneEntity.h"
#include "CBaseFlex.h"
// TARGET: CSceneEntity::vfunc262
void CSceneEntity::vfunc262(int b, CBaseFlex *pActor, void *pEvent)
{
	sub_100843d0(m_pScene4bc);
	pActor->vfunc286(b, pEvent);
	if (m_n578 == 3)
		pActor->sub_10090b20();
}
// END FUNCTION

// FUNCTION: 0x10081950 size=0x14
struct CVirtObj10081950
{
	void v0(int a);
};

// TARGET: sub_10081950
void __stdcall sub_10081950(int a1, CVirtObj10081950 *pObj, int a3)
{
	void **vt = *(void ***)pObj;
	union {
		void *p;
		void (CVirtObj10081950::*pm)(int);
	} u;
	u.p = vt[287];
	(pObj->*u.pm)(a3);
}
// END FUNCTION

// FUNCTION: 0x10081980 size=0x16
float __fastcall sub_1007bef0(void *pThis);

// TARGET: sub_10081980
float __fastcall sub_10081980(char *pThis)
{
	void *p = *(void **)(pThis + 0x4bc);
	if (p)
		return sub_1007bef0(p);
	return 0.0f;
}
// END FUNCTION

// FUNCTION: 0x100819b0 size=0x145
#include "CSceneEntity.h"
#include "CEHandleGet.h"
struct CSceneObj
{
	void *sub_1007a2c0(int index);
	void sub_1007e5a0(float flValue);
	void sub_1007d7f0(int nValue);
	char sub_1007d1e0();
};
struct CSceneAIView { char m_pad0000[0xfe8]; unsigned int m_hDialog; };
struct CSceneActorEntView { char m_pad0000[0x98]; CSceneAIView *m_pAI98; };
// TARGET: CSceneEntity::vfunc134
void CSceneEntity::vfunc134()
{
	if (!m_pScene4bc)
		return;
	if (!m_bPlaying498)
		return;
	m_b57c = 1;
	CSceneEventActor *pActor = (CSceneEventActor *)((CSceneObj *)m_pScene4bc)->sub_1007a2c0(0);
	CSceneActorEntView *pEnt;
	if (pActor && (pEnt = (CSceneActorEntView *)vfunc267(pActor->sub_10008a99())) != 0 && pEnt->m_pAI98 && EHandle_Get(pEnt->m_pAI98->m_hDialog))
		m_flNextThink = gpGlobals->curtime;
	else
		m_flNextThink = gpGlobals->curtime;
	if (m_bPlaying499) {
		vfunc241();
		m_b57c = 0;
		return;
	}
	m_f4a0 = gpGlobals->curtime - m_f4a8;
	((CSceneObj *)m_pScene4bc)->sub_1007e5a0(sub_10080ac0());
	((CSceneObj *)m_pScene4bc)->sub_1007d7f0(*(int *)&m_f4a0);
	if (m_pScene4bc) {
		if (!m_bPlaying499 && ((CSceneObj *)m_pScene4bc)->sub_1007d1e0()) {
			vfunc247();
			m_b57c = 0;
			return;
		}
		if (m_n574 == 1)
			sub_100846c0(m_pScene4bc);
	}
	m_b57c = 0;
}
// END FUNCTION

// FUNCTION: 0x10081b60 size=0x20c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CSceneEntity.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CUnknown1007ce20.h"
#include "CUnknown1007a2c0.h"
#include "ScopeTrace.h"

struct CUnknown10072d90
{
	int m_n0;
	int m_n4;
	int m_n8;
	int m_nc;
	int m_n10;
	char *sub_10072d90();
};
void sub_100828d0();

struct CSceneSolidView : CBaseEntity
{
	void SetSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::SetSolidFlags", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc580(flags);
	}
	void SetSolid(int solid)
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(solid);
	}
};

void CSceneEntity::vfunc247()
{
	if (!m_bPlaying498)
		return;
	sub_10082db0();
	((CUnknown1007ce20 *)m_pScene4bc)->sub_1007cfc0(1, 0, 0);
	m_bPlaying498 = 0;
	m_bPlaying499 = 0;
	m_f4a0 = 0;
	sub_100821f0(m_n578);
	sub_100845a0(m_pScene4bc);
	if (m_n574 == 1) {
		for (int i = 0; i < ((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2a0(); i++) {
			CUnknown10072d90 *pElem = (CUnknown10072d90 *)((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2c0(i);
			if (pElem) {
				CSceneSolidView *pEnt = (CSceneSolidView *)vfunc268(pElem->sub_10072d90(), 0);
				if (pEnt) {
					pEnt->vfunc93(pElem->m_n4, pElem->m_n8);
					pEnt->SetSolidFlags(pElem->m_n10);
					pEnt->SetSolid(pElem->m_nc);
				}
			}
		}
	}
	m_list4e4.sub_100cd660(this, this, 0);
	sub_10084170(m_pScene4bc);
	sub_100847e0(m_pScene4bc);
	if (m_b57e)
		sub_100828d0();
}
// END FUNCTION

// FUNCTION: 0x10081e00 size=0x3f
extern char g_106e7e91;
void sub_101d2850(const char *pszName, int nSize);
void sub_10002ca7(const char *pszStart, const char *pszEnd);

// TARGET: sub_10081e00
void __fastcall sub_10081e00(char *self, void *unused, int arg)
{
    if (g_106e7e91 == 0) {
        int *vtbl = *(int **)self;
        ((void (__fastcall *)(void *))vtbl[0x3c8 / 4])(self);
        return;
    }
    g_106e7e91 = 0;
    sub_101d2850("__main__.G.Story_State=-3", 0x100);
    sub_10002ca7("sp_tutorial_1", "tutorial");
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
#include "CUnknown10081e70.h"
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

// FUNCTION: 0x10081ed0 size=0x276
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CSceneEntity.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "CEntityVSlots.h"

struct CUnknown1007a2a0 { int sub_1007a2a0(); };
struct CUnknown1007a2c0 { CSceneActorRecord *sub_1007a2c0(int i); };
struct CUnknown1029f2e0 { char sub_1029f2e0(); void sub_1029f300(int a); };
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_10538764[];
extern char g_1053dd10[];

void CSceneEntity::sub_10081ed0()
{
	for (int i = 0; i < ((CUnknown1007a2a0 *)m_pScene4bc)->sub_1007a2a0(); i++) {
		CSceneActorRecord *pRec = ((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2c0(i);
		if (!pRec)
			continue;
		CBaseEntity *pEntity = vfunc268(pRec->sub_10072d90(), 0);
		if (!pEntity)
			continue;
		CBaseAnimating *pAnim = (CBaseAnimating *)__RTDynamicCast(pEntity, 0, g_10538764, g_1053dd10, 0);
		if (!pAnim)
			continue;
		CEntityVSlots *pe = (CEntityVSlots *)pEntity;
		CUnknown1029f2e0 *pNpc = *(CUnknown1029f2e0 **)((char *)pEntity + 0x98);
		pRec->sub_10072e60(*pe->slot217(), *pe->slot219());
		if (pNpc)
			pRec->m_bFlag00 = pNpc->sub_1029f2e0();
		pRec->m_n04 = pe->slot94();
		pRec->m_n08 = pe->slot95();
		pRec->m_n10 = pe->slot211();
		pRec->m_n0c = pe->slot92();
		if (m_n574 == 1) {
			CEntityVSlots *ps = (CEntityVSlots *)this;
			pe->slot216(ps->slot217());
			pe->slot218(ps->slot219());
			if (pNpc)
				pNpc->sub_1029f300(1);
			pAnim->sub_10090bc0(0x10);
			pe->slot93(0, 0);
			{
				const char *name = *(const char **)((char *)pEntity + 0x26c);
				ScopeTrace scope("CBaseEntity::SetSolid", name ? name : g_106b8540);
				((CCollisionProperty *)((char *)pEntity + 0x270))->sub_100dc480(0);
			}
			{
				const char *name = *(const char **)((char *)pEntity + 0x26c);
				ScopeTrace scope("CBaseEntity::AddSolidFlags", name ? name : g_106b8540);
				CCollisionProperty *pCol = (CCollisionProperty *)((char *)pEntity + 0x270);
				pCol->sub_100dc580(*(unsigned short *)((char *)pCol + 0x44) | 4);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100821f0 size=0x169
#include "CSceneEntity.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "CUnknown1007a2c0.h"

extern "C" void *__cdecl __RTDynamicCast(void *inptr, long VfDelta, void *SrcType, void *TargetType, int isReference);
extern char g_10538764[];	// type descriptor of CBaseEntity
extern char g_1053dd10[];	// type descriptor of CBaseAnimating

struct CSceneElementX
{
	char *sub_10072d90();	// the element's name (this + 0x14), stub 0x10008a99
};

void CSceneEntity::sub_100821f0(int mode)
{
	if (mode) {
		for (int i = 0; i < ((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2a0(); i++) {
			CSceneElementX *pElement = (CSceneElementX *)((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2c0(i);
			if (pElement) {
				CBaseEntity *pEnt = vfunc268(pElement->sub_10072d90(), 0);
				if (pEnt) {
					CBaseAnimating *pAnim = (CBaseAnimating *)__RTDynamicCast(pEnt, 0, g_10538764, g_1053dd10, 0);
					if (pAnim) {
						if (mode == 1) {
							((CEntityVSlots *)pEnt)->slot216(((CEntityVSlots *)this)->slot217());
							((CEntityVSlots *)pEnt)->slot218(((CEntityVSlots *)this)->slot219());
							*(unsigned int *)((char *)pEnt + 0x19c) |= 0x10;
							pAnim->sub_10090bc0(0x10);
						} else if (mode == 2) {
							Vector vOrigin = *(Vector *)((char *)pElement + 0x17c);
							((CEntityVSlots *)pEnt)->slot216(&vOrigin);
							Vector vAngles = *(Vector *)((char *)pElement + 0x188);
							((CEntityVSlots *)pEnt)->slot218(&vAngles);
							*(unsigned int *)((char *)pEnt + 0x19c) |= 0x10;
							pAnim->sub_10090bc0(0x10);
						} else if (mode == 3) {
							pAnim->sub_1008eec0("bip01", 1, 1);
						}
					}
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100823c0 size=0x35
#include "CSceneEntity.h"
#include "CBaseEntity.h"
#include "CUnknown1007a2c0.h"
CBaseEntity *CSceneEntity::sub_100823c0(int iActor)
{
	CSceneEventActor *pActor = (CSceneEventActor *)((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2c0(iActor);
	if (!pActor)
		return 0;
	return vfunc268(pActor->sub_10008a99(), 0);
}
// END FUNCTION

// FUNCTION: 0x10082410 size=0xa
#define PCD_INITIALIZERS
#include "utlvector.h"
#include "PcdGuarded.h"
template <> CUtlVector<int> PcdGuarded<0x106c8a28, CUtlVector<int> >::s_object(0, 0);
// END FUNCTION

// FUNCTION: 0x10082520 size=0x135
#include "CBaseEntity.h"
#include "CEHandleGet.h"

struct CSceneActors82520
{
	int sub_1007a2a0();	// stub 0x1000bbfe
};

struct CSceneView82520
{
	char m_pad0000[0x498];
	char m_bPlaying;	// 0x498
	char m_pad0499[0x4bc - 0x499];
	CSceneActors82520 *m_pActors;	// 0x4bc
	CBaseEntity *sub_100823c0(int index);	// stub 0x10010294
};

#define NV(n) virtual void n();
#define NV10(p) NV(p##0) NV(p##1) NV(p##2) NV(p##3) NV(p##4) NV(p##5) NV(p##6) NV(p##7) NV(p##8) NV(p##9)
#define NV100(p) NV10(p##0) NV10(p##1) NV10(p##2) NV10(p##3) NV10(p##4) NV10(p##5) NV10(p##6) NV10(p##7) NV10(p##8) NV10(p##9)

struct CNpcView82520
{
	NV100(a) NV10(b0) NV10(b1) NV10(b2) NV10(b3) NV10(b4) NV10(b5)
	NV(c60) NV(c61) NV(c62) NV(c63) NV(c64) NV(c65) NV(c66)
	virtual int slot167();
	NV100(d) NV100(e) NV10(f0) NV10(f1) NV10(f2) NV(g0) NV(g1) NV(g2) NV(g3) NV(g4) NV(g5)
	virtual int slot404(int player);
	NV10(h0) NV10(h1) NV10(h2) NV10(h3) NV10(h4) NV(i0) NV(i1) NV(i2) NV(i3) NV(i4) NV(i5) NV(i6) NV(i7) NV(i8)
	virtual int slot464();
	char m_pad[0xfe8 - 4 * 465];
};

struct CEntView82520
{
	char m_pad0000[0x98];
	CNpcView82520 *m_pNpc;	// 0x98
};

int sub_101cd9e0(int index);
int __fastcall sub_100b39c0(char *pEnt);

// TARGET: sub_10082520
char sub_10082520(CBaseEntity *pEnt, CSceneView82520 *pScene)
{
	if (pEnt && !pEnt->sub_100a52a0() && !(sub_100b39c0((char *)pEnt) & 0x20)) {
		if (pScene && pScene->m_pActors && pScene->m_bPlaying) {
			for (int i = 0; i < pScene->m_pActors->sub_1007a2a0(); i++) {
				if (pScene->sub_100823c0(i) == pEnt)
					return 0;
			}
		}
		int player = sub_101cd9e0(1);
		CNpcView82520 *pNpc = ((CEntView82520 *)pEnt)->m_pNpc;
		if (pNpc && !EHandle_Get(*(unsigned int *)((char *)pNpc + 0xfe8)) && pNpc->slot464() != 4) {
			if (pNpc->slot167() == player) {
				if (pNpc->slot464() == 2 || pNpc->slot464() == 3 || pNpc->slot464() == 0xb || pNpc->slot464() == 0xe)
					return 1;
			}
			int r = pNpc->slot404(player);
			if (r == 1)
				return r;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100826b0 size=0x1ae
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
#include "CSceneEntity.h"
#include "utlvector.h"
struct CSceneView82520;
extern CGlobalEntityList g_106eb5d8;
extern CUtlVector<EHANDLE> g_106c8a28;
extern char g_106c8a41;
char sub_10082520(CBaseEntity *, CSceneView82520 *);

// TARGET: sub_100826b0
void sub_100826b0(CSceneEntity *pScene)
{
	g_106c8a41 = 1;
	for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt)) {
		if (sub_10082520(pEnt, (CSceneView82520 *)pScene)) {
			EHANDLE h(pEnt);
			if (g_106c8a28.Find(h) == -1)
				g_106c8a28.AddToTail(h);
		}
	}
	for (int i = 0; i < g_106c8a28.Count(); ) {
		if (!g_106c8a28[i].Get()) {
			g_106c8a28.Remove(i);
		} else {
			g_106c8a28[i]->vfunc77();
			i++;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100828d0 size=0xcc
#define D10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct EntSlots78 {
	D10(a0) D10(a1) D10(a2) D10(a3) D10(a4) D10(a5) D10(a6)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void b5(); virtual void b6(); virtual void b7();
	virtual void f78();
};
struct EntEntry { EntSlots78 *pEnt; int serial; int pad; };
struct EntTable { int hdr; EntEntry entries[1]; };
extern EntTable *g_10566458;
extern "C" __declspec(dllimport) void Plat_Free(void *p);

struct EHandleRef
{
    unsigned int m_h;
    bool IsValid() const
    {
        if (m_h == 0xffffffff)
            return false;
        EntEntry *e = &g_10566458->entries[m_h & 0x1fff];
        return e->serial == (int)(m_h >> 13) && e->pEnt != 0;
    }
    EntSlots78 *Get() const
    {
        if (m_h == 0xffffffff)
            return 0;
        EntEntry *e = &g_10566458->entries[m_h & 0x1fff];
        return e->serial == (int)(m_h >> 13) ? e->pEnt : 0;
    }
};

extern EHandleRef *g_106c8a28;
extern int g_106c8a2c;
extern int g_106c8a30;
extern int g_106c8a34;
extern EHandleRef *g_106c8a38;
extern char g_106c8a41;

void sub_100828d0()
{
    int i = 0;
    g_106c8a41 = 0;
    for (i = 0; i < g_106c8a34; i++) {
        if (g_106c8a28[i].IsValid())
            g_106c8a28[i].Get()->f78();
    }
    g_106c8a34 = 0;
    if (g_106c8a30 != -1) {
        if (g_106c8a28) {
            Plat_Free(g_106c8a28);
            g_106c8a28 = 0;
        }
        g_106c8a2c = 0;
    }
    g_106c8a38 = g_106c8a28;
}
// END FUNCTION

// FUNCTION: 0x100829e0 size=0xbb
#include "CSceneEntity.h"
#include "CUnknown1007ce20.h"

void sub_100826b0(CSceneEntity *pEnt);

// TARGET: CSceneEntity::vfunc242
void CSceneEntity::vfunc242()
{
	if (m_pScene4bc && !m_bPlaying498)
	{
		m_bPlaying498 = 1;
		m_bPlaying499 = 0;
		m_f4a0 = 0;
		m_f4a4 = gpGlobals->curtime;
		m_f4a8 = gpGlobals->curtime;
		((CUnknown1007ce20 *)m_pScene4bc)->sub_1007cfc0(1, 0, 0);
		sub_10084170(m_pScene4bc);
		sub_100843d0(m_pScene4bc);
		sub_10081ed0();
		sub_10082c90();
		m_flNextThink = gpGlobals->curtime;
		if (m_b57e)
			sub_100826b0(this);
		m_list4cc.sub_100cd660(this, this, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10082ad0 size=0x1c
#include "CSceneEntity.h"

// TARGET: CSceneEntity::vfunc243
void CSceneEntity::vfunc243()
{
	if (m_bPlaying498 && !m_bPlaying499)
		m_bPlaying499 = 1;
}
// END FUNCTION

// FUNCTION: 0x10082b00 size=0x56
#include "CSceneEntity.h"
#include "globalvars.h"
void __fastcall sub_1007e580(int *p);
void CSceneEntity::vfunc244()
{
	if (m_bPlaying498 && m_bPlaying499) {
		sub_1007e580((int *)m_pScene4bc);
		sub_100843d0(m_pScene4bc);
		m_bPlaying499 = 0;
		m_f4a4 = gpGlobals->curtime;
		m_flNextThink = gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x10082b80 size=0x7f
#include "CSceneEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
void __stdcall sub_100845a0(void *pScene);
void sub_100828d0();

struct CHandleLookup
{
	static CGlobalEntityList_Ent *Get(unsigned int h)
	{
		if (h != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
			if (s->m_Serial == (int)(h >> 13))
				return s->m_pEntity;
		}
		return 0;
	}
};

void CSceneEntity::vfunc245()
{
	if (m_pScene4bc)
		sub_100845a0(m_pScene4bc);
	if (m_bPlaying498) {
		sub_10082d20();
		if (m_b57e)
			sub_100828d0();
		m_list4fc.sub_100cd660(CHandleLookup::Get(m_hPlayer10c), this, 0);
		m_bPlaying498 = 0;
		m_bPlaying499 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10082c20 size=0x42
#include "CSceneEntity.h"
extern char g_106b8540[];
extern void (*g_109f3628)(const char *, ...);
void CSceneEntity::vfunc246()
{
	vfunc245();
	g_109f3628("Reloading %s from disk\n", m_pszSceneFile450 ? m_pszSceneFile450 : g_106b8540);
	sub_10083a30(m_pszSceneFile450 ? m_pszSceneFile450 : g_106b8540);
}
// END FUNCTION

// FUNCTION: 0x10082c90 size=0x61
#include "CSceneEntity.h"
#include "CBaseEntity.h"
#include "CUnknown1007a2c0.h"
void CSceneEntity::sub_10082c90()
{
	if (m_pScene4bc) {
		for (int i = 0; i < ((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2a0(); i++) {
			CSceneEventActor *pActor = (CSceneEventActor *)((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2c0(i);
			if (pActor) {
				CBaseEntity *pEnt = vfunc268(pActor->sub_10008a99(), 0);
				if (pEnt)
					pEnt->vfunc59((int)this);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10082d20 size=0x61
#include "CSceneEntity.h"
#include "CBaseEntity.h"
#include "CUnknown1007a2c0.h"
void CSceneEntity::sub_10082d20()
{
	if (m_pScene4bc) {
		for (int i = 0; i < ((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2a0(); i++) {
			CSceneEventActor *pActor = (CSceneEventActor *)((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2c0(i);
			if (pActor) {
				CBaseEntity *pEnt = vfunc268(pActor->sub_10008a99(), 0);
				if (pEnt)
					pEnt->vfunc60((int)this);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10082db0 size=0x61
#include "CSceneEntity.h"
#include "CBaseEntity.h"
#include "CUnknown1007a2c0.h"
void CSceneEntity::sub_10082db0()
{
	if (m_pScene4bc) {
		for (int i = 0; i < ((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2a0(); i++) {
			CSceneEventActor *pActor = (CSceneEventActor *)((CUnknown1007a2c0 *)m_pScene4bc)->sub_1007a2c0(i);
			if (pActor) {
				CBaseEntity *pEnt = vfunc268(pActor->sub_10008a99(), 0);
				if (pEnt)
					pEnt->vfunc61((int)this);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10082e40 size=0xe
#include "CUnknown10082e40.h"
bool CUnknown10082e40::sub_10082e40()
{
	return m_unk4bc != 0;
}
// END FUNCTION

// FUNCTION: 0x10082e60 size=0x5c
#include "CSceneEntity.h"
#include "CUnknown1007ce20.h"
#include "CUnknown1007ecf0.h"
#include "CUnknown100766f0.h"
class CUnknown1007ed10
{
public:
	char sub_1007ed10();
};
void CSceneEntity::vfunc264(CUnknown1007ed10 *pEvent1, int unused, CSceneEvent *pEvent)
{
	if (!pEvent1->sub_1007ed10()) {
		CUnknown1007ce20 *pScene = pEvent->sub_10076710();
		if (!pScene) {
			pScene = (CUnknown1007ce20 *)sub_100839c0(pEvent->sub_10075c50());
			((CUnknown1007ecf0 *)pScene)->sub_1007ecf0(1);
			((CUnknown100766f0 *)pEvent)->sub_100766f0((int)pScene);
			if (!pScene)
				return;
		}
		pScene->sub_1007cfc0(1, 0, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10082ee0 size=0x67c
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CBaseFlex.h"
#include "CBasePlayer.h"
#include "CSceneEntity.h"
#include "CUnknown10075aa0.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"

struct CActorView
{
	const char *sub_10072d90();
};

// the scene entity's dispatch slots with the float arguments the game pushes
struct CSceneEntityDispatchView
{
	SCENE_V10(0) SCENE_V10(1) SCENE_V10(2) SCENE_V10(3) SCENE_V10(4) SCENE_V10(5) SCENE_V10(6) SCENE_V10(7) SCENE_V10(8) SCENE_V10(9)
	SCENE_V10(10) SCENE_V10(11) SCENE_V10(12) SCENE_V10(13) SCENE_V10(14) SCENE_V10(15) SCENE_V10(16) SCENE_V10(17) SCENE_V10(18) SCENE_V10(19)
	SCENE_V10(20) SCENE_V10(21) SCENE_V10(22) SCENE_V10(23) SCENE_V10(24)
	SCENE_V(250) SCENE_V(251) SCENE_V(252) SCENE_V(253) SCENE_V(254) SCENE_V(255) SCENE_V(256) SCENE_V(257)
	virtual void DispatchProcessLookAt(int scene, int pActor, CBaseEntity *pActor2, float flIntensity, const char *pszParams2);
	SCENE_V(259) SCENE_V(260)
	virtual void DispatchStartFace(int scene, int pActor, CBaseEntity *pActor2, float flIntensity, const char *pszParams2);
};

typedef void (CBaseCombatCharacter::*SetAsCameraTargetFn)(int bEnable, float flTime);

void sub_10081190(const char *fmt, ...);
CBasePlayer *sub_101cd9e0(int i);
__declspec(dllimport) void Warning(const char *fmt, ...);
__declspec(dllimport) void Msg(const char *fmt, ...);
extern "C" int __cdecl atoi(const char *psz);

// TARGET: CSceneEntity::vfunc248
void CSceneEntity::vfunc248(float currenttime, int scene, int c)
{
	CUnknown10075aa0 *event = (CUnknown10075aa0 *)c;
	CBaseFlex *pActor = 0;

	CActorView *actor = (CActorView *)event->sub_10076690();
	if (actor)
	{
		pActor = (CBaseFlex *)vfunc267(actor->sub_10072d90());
		if (!pActor)
		{
			Warning("CSceneEntity unable find actor \"%s\"\n", actor->sub_10072d90());
			return;
		}
	}

	event->sub_10074f70(pActor);
	sub_10081190("%8.4f:  start %s\n", currenttime, event->sub_10075d00());

	switch (event->sub_10075b70())
	{
	case 0xb:
		if (pActor)
			vfunc264((CUnknown1007ed10 *)scene, (int)pActor, (CSceneEvent *)event);
		break;
	case 2:
	case 10:
		if (pActor)
			vfunc254(scene, (CSceneActorSlots *)pActor, (CSceneEvent *)event);
		break;
	case 3:
		if (pActor)
		{
			CBaseEntity *pActor2 = vfunc268(event->sub_10075c50(), (int)pActor);
			if (pActor2)
				((CSceneEntityDispatchView *)this)->DispatchProcessLookAt(scene, (int)pActor, pActor2, event->sub_10076280(currenttime), event->sub_10075ca0());
		}
		break;
	case 5:
		{
			int iSoundlevel = 0x50;
			if (event->sub_10075ca0())
			{
				iSoundlevel = atoi(event->sub_10075ca0());
				if (iSoundlevel == 0)
					iSoundlevel = 0x50;
				else if (iSoundlevel < 0x4b)
					iSoundlevel = 0x4b;
			}
			float duration = event->sub_10075f10() - event->sub_10075e70();
			vfunc260(scene, (void *)pActor, event->sub_10075c50(), iSoundlevel, *(int *)&duration);
		}
		break;
	case 4:
		vfunc259(scene, (void *)pActor, event->sub_10075c50());
		break;
	case 8:
		if (pActor)
		{
			CBaseEntity *pActor2 = vfunc268(event->sub_10075c50(), (int)pActor);
			if (pActor2)
				((CSceneEntityDispatchView *)this)->DispatchStartFace(scene, (int)pActor, pActor2, event->sub_10076280(currenttime), event->sub_10075ca0());
		}
		break;
	case 6:
		vfunc256(scene, (CSceneEventActorEnt *)pActor, (CSceneEvent *)event);
		break;
	case 9:
		switch (atoi(event->sub_10075c50()))
		{
		case 1:
			((CSceneOutputList *)((char *)this + 0x514))->sub_100cd660(pActor, this, 0);
			break;
		case 2:
			((CSceneOutputList *)((char *)this + 0x52c))->sub_100cd660(pActor, this, 0);
			break;
		case 3:
			((CSceneOutputList *)((char *)this + 0x544))->sub_100cd660(pActor, this, 0);
			break;
		case 4:
			((CSceneOutputList *)((char *)this + 0x55c))->sub_100cd660(pActor, this, 0);
			break;
		}
		break;
	case 7:
		vfunc262(scene, pActor, (void *)event);
		break;
	case 1:
		vfunc266(scene, event->sub_10075c50());
		break;
	case 0xc:
		vfunc265((void *)scene, (void *)event);
		break;
	case 0xd:
	case 0xe:
	case 0xf:
		if ((unsigned char)(*(unsigned int *)((char *)pActor + 0x4c) >> 6) & 1)
		{
			CSceneActorSlots *pObj = *(CSceneActorSlots **)((char *)pActor + 0x98);
			pObj->vfunc286(m_pScene4bc, event);
		}
		break;
	case 0x10:
		{
			CBaseEntity *pA;
			if (*event->sub_10075c50())
				pA = vfunc268(event->sub_10075c50(), (int)pActor);
			else
				pA = 0;
			CBaseEntity *pB;
			if (*event->sub_10075ca0())
			{
				pB = vfunc268(event->sub_10075ca0(), (int)pActor);
				if (pB)
				{
					CBaseCombatCharacter *pNPC = *(CBaseCombatCharacter **)((char *)pB + 0x9c);
					if (pNPC)
					{
						(pNPC->*(SetAsCameraTargetFn)&CBaseCombatCharacter::sub_103322e0)(event->sub_10075cc0(), event->sub_10076b30());
						pB = 0;
					}
				}
			}
			else
				pB = 0;
			for (int i = 1; i <= gpGlobals->maxClients; i++)
			{
				CBasePlayer *pl = sub_101cd9e0(i);
				if (pl)
				{
					if (pA)
						pl->sub_1017d280(pA, event->sub_10076b30());
					if (pB)
						pl->sub_1017d460(pB, event->sub_10076b30());
				}
			}
		}
		break;
	case 0x12:
		{
			for (int i = 1; i <= gpGlobals->maxClients; i++)
			{
				CBasePlayer *pl = sub_101cd9e0(i);
				if (pl)
					pl->sub_1017d6d0(event->sub_10076b30());
			}
		}
		break;
	case 0x13:
		{
			const char *pszSample = event->sub_10075c50();
			int iSoundlevel = 0x50;
			if (event->sub_10075ca0())
			{
				iSoundlevel = atoi(event->sub_10075ca0());
				if (iSoundlevel == 0)
					iSoundlevel = 0x50;
				else if (iSoundlevel < 0x4b)
					iSoundlevel = 0x4b;
			}
			event->sub_10075f10();
			event->sub_10075e70();
			if (pActor && pszSample && *pszSample)
			{
				CPASAttenuationFilter filter((CEntitySoundOriginView *)pActor, 0.8f);
				int edict = *(int *)((char *)pActor + 0x2e0);
				enginesound->vfunc2(&filter, engine->vfunc35(edict), 4, pszSample,
					1.0f, iSoundlevel, 0, 100, 0, 0, 1, 0);
			}
		}
		break;
	default:
		Msg("Unhandled event type: %d", event->sub_10075b70());
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10083700 size=0x120
#include "CSceneEntity.h"
#include "CUnknown1007ce20.h"

void sub_10081190(const char *pszFormat, double flTime, const char *pszName);

void CSceneEntity::vfunc249(float a, int b, CSceneEvent *pEvent)
{
	CSceneEventActorEnt *pActor = 0;
	CSceneEventActor *pEventActor = pEvent->sub_10001b5e();
	if (pEventActor)
		pActor = vfunc267(pEventActor->sub_10008a99());

	sub_10081190("%8.4f:  finish %s\n", a, pEvent->sub_10075d00());

	switch (pEvent->sub_100029c8())
	{
	case 2:
		if (pActor)
			vfunc253(b, pActor, pEvent);
		break;
	case 10:
		if (pActor)
			vfunc255(b, pActor, pEvent);
		break;
	case 6:
		if (pActor)
			vfunc257(b, pActor, pEvent);
		break;
	case 7:
		if (pActor)
			vfunc263(b, pActor, pEvent);
		break;
	case 11:
		{
			CUnknown1007ce20 *pScene = pEvent->sub_10076710();
			if (pScene)
				pScene->sub_1007cfc0(1, 0, 0);
		}
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10083870 size=0x4
#include "CSceneTokenProcessor.h"
char * CSceneTokenProcessor::vfunc0()
{
    return (char *)this + 8;
}
// END FUNCTION

// FUNCTION: 0x10083890 size=0x22
// TARGET: CSceneTokenProcessor::vfunc1
#include "CSceneTokenProcessor.h"
bool CSceneTokenProcessor::vfunc1(int a)
{
    m_4 = engine->vfunc98(m_4, &m_8);
    return true;
}
// END FUNCTION

// FUNCTION: 0x100838d0 size=0x21
struct CSceneTokenProcessorX
{
    bool sub_100838d0();
};

// TARGET: sub_100838d0
bool CSceneTokenProcessorX::sub_100838d0()
{
    char *p = *(char **)((char *)this + 4);
    if (p[0] == '\n' || p[0] == ';' || p[0] == '#') {
        return false;
    }
    if (p[0] == '/' && p[1] == '/') {
        return false;
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x10083910 size=0x3a
#include <stdarg.h>

extern int (*g_109f387c)(char *pBuffer, int nSize, const char *pszFormat, va_list args);
extern void (*g_109f362c)(const char *pszFormat, ...);

// TARGET: sub_10083910
void sub_10083910(int unused, const char *pszFormat, ...)
{
    char buf[0x800];
    va_list args;
    va_start(args, pszFormat);
    g_109f387c(buf, 0x800, pszFormat, args);
    g_109f362c("%s", buf);
    va_end(args);
}
// END FUNCTION

// FUNCTION: 0x10083960 size=0xa
struct CUnknown10083960 { int p; int a; void sub_10083960(int v); };
// TARGET: CUnknown10083960::sub_10083960
void CUnknown10083960::sub_10083960(int v) { a = v; }
// END FUNCTION

// FUNCTION: 0x10083980 size=0x5
#define PCD_INITIALIZERS
#include "CSceneTokenProcessor.h"
CSceneTokenProcessor g_106c8618;
// END FUNCTION

// FUNCTION: 0x100839c0 size=0x4a
#include "CSceneEntity.h"
struct CUnknown10083960
{
	void sub_10083960(void *pData);
};
extern CUnknown10083960 g_106c8618;
void sub_10081190();
void *sub_10079400(int a, int b, int c);
void *CSceneEntity::sub_100839c0(const char *pszScene)
{
	void *p = engine->vfunc99(pszScene, 2, 0);
	if (!p)
		return 0;
	g_106c8618.sub_10083960(p);
	return sub_10079400((int)((char *)this + 0x4c0), (int)&g_106c8618, (int)sub_10081190);
}
// END FUNCTION

// FUNCTION: 0x10083a30 size=0x1e
// TARGET: CUnk10083a30::sub_10083a30
struct CUnk10083a30
{
    char pad[0x4bc];
    int m_4bc;
    void sub_10083a60();
    int sub_100839c0(int a);
    void sub_10083a30(int a);
};
void CUnk10083a30::sub_10083a30(int a)
{
    sub_10083a60();
    m_4bc = sub_100839c0(a);
}
// END FUNCTION

// FUNCTION: 0x10083a60 size=0x49
#include "CSceneEntity.h"
struct SceneView { char m_pad[4]; void sub_100799b0(); };
// TARGET: CSceneEntity::sub_10083a60
void CSceneEntity::sub_10083a60()
{
    if (m_pScene4bc) {
        sub_10084170(m_pScene4bc);
        sub_100845a0(m_pScene4bc);
    }
    SceneView *pScene = (SceneView *)m_pScene4bc;
    if (pScene) {
        pScene->sub_100799b0();
        delete pScene;
    }
    m_pScene4bc = 0;
}
// END FUNCTION

// FUNCTION: 0x10083ad0 size=0xdf
#include "CBaseEntity.h"
#include "CSceneEntity.h"
// TARGET: CSceneEntity::vfunc250
__declspec(dllimport) void Warning(const char *fmt, ...);

#define HV(n) virtual void h##n();
#define HV10(p) HV(p##0) HV(p##1) HV(p##2) HV(p##3) HV(p##4) HV(p##5) HV(p##6) HV(p##7) HV(p##8) HV(p##9)

struct CSceneVt258View
{
	HV10(0) HV10(1) HV10(2) HV10(3) HV10(4) HV10(5) HV10(6) HV10(7) HV10(8) HV10(9)
	HV10(10) HV10(11) HV10(12) HV10(13) HV10(14) HV10(15) HV10(16) HV10(17) HV10(18) HV10(19)
	HV10(20) HV10(21) HV10(22) HV10(23) HV10(24)
	HV(250) HV(251) HV(252) HV(253) HV(254) HV(255) HV(256) HV(257)
	virtual void vfunc258(int a, int b, int c, float d, int e);
};

void CSceneEntity::vfunc250(float a, int b, int c)
{
	CSceneEvent *pEvent = (CSceneEvent *)c;
	CSceneEventActorEnt *pActorEnt = 0;
	CSceneEventActor *pActor = pEvent->sub_10001b5e();
	if (pActor) {
		pActorEnt = this->vfunc267(pActor->sub_10008a99());
		if (!pActorEnt) {
			Warning("CSceneEntity unable find actor \"%s\"\n", pActor->sub_10008a99());
			return;
		}
	}
	int type = pEvent->sub_100029c8();
	if (type != 3) {
		if (type == 0xb) {
			CSceneEntityScene *pSub = (CSceneEntityScene *)pEvent->sub_10076710();
			if (pSub && !pSub->sub_1007d1e0()) {
				pSub->sub_1007d7f0(this->m_f49c);
			}
		}
	} else {
		if (pActorEnt) {
			CBaseEntity *pEnt = this->vfunc268(pEvent->sub_10075c50(), (int)pActorEnt);
			if (pEnt) {
				((CSceneVt258View *)this)->vfunc258(b, (int)pActorEnt, (int)pEnt,
					pEvent->sub_10076280(a), pEvent->sub_10075ca0());
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10083bf0 size=0x7e
#include "CSceneEntity.h"

__declspec(dllimport) void Warning(const char *pMsg, ...);

// TARGET: CSceneEntity::vfunc251
char CSceneEntity::vfunc251(float a, int b, CSceneEvent *pEvent)
{
	CSceneEventActorEnt *pActorEnt = 0;
	CSceneEventActor *pActor = pEvent->sub_10001b5e();
	if (pActor) {
		pActorEnt = vfunc267(pActor->sub_10008a99());
		if (!pActorEnt) {
			Warning("CSceneEntity unable find actor \"%s\"\n", pActor->sub_10008a99());
			return 1;
		}
	}
	if (pEvent->sub_100029c8() == 4 && pActorEnt->m_pNPC94 && pActorEnt->m_pNPC94->m_pNav5d34->sub_10012963())
		return 0;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10083c90 size=0x30
#include "CBaseEntity.h"
#include "CSceneEntity.h"
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_10538764[];
extern char g_1054910c[];
CSceneEventActorEnt *CSceneEntity::vfunc267(const char *pszName)
{
	CBaseEntity *pEnt = vfunc268(pszName, 0);
	if (!pEnt)
		return 0;
	return (CSceneEventActorEnt *)__RTDynamicCast(pEnt, 0, g_10538764, g_1054910c, 0);
}
// END FUNCTION

// FUNCTION: 0x10083cd0 size=0x3a9
#include "CBaseCombatCharacter.h"
#include "CSceneEntity.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
#include "CAI_BaseNPC.h"
extern "C" int __cdecl _strcmpi(const char *a, const char *b);
CBasePlayer *sub_101cd9e0(int index);
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: CSceneEntity::vfunc268
CBaseEntity *CSceneEntity::vfunc268(const char *name, int a)
{
    CBaseEntity *entity = 0;
    if (!_strcmpi(name, "Player") || !_strcmpi(name, "!player")) {
        entity = (CBaseEntity *)sub_101cd9e0(1);
    } else if (!_strcmpi(name, "!playercontroller")) {
        CBasePlayer *pPlayer = sub_101cd9e0(1);
        if (pPlayer)
            entity = pPlayer->sub_101618a0();
    } else if (!_strcmpi(name, "!dialogpartner")) {
        if (m_iszDialogPartner454.pszValue) {
            entity = vfunc268(STRINGR(m_iszDialogPartner454.pszValue), a);
        } else {
            CBasePlayer *pPlayer = sub_101cd9e0(1);
            if (pPlayer)
                entity = ((CBaseCombatCharacter *)pPlayer)->m_hDialogPartnerFE8;
        }
    } else if (!_strcmpi(name, "!target1")) {
        if (m_hTarget1_46c == 0)
            m_hTarget1_46c = g_106eb5d8.sub_100f7770(0, STRINGR(m_iszTarget1.pszValue), 0, 0);
        return m_hTarget1_46c;
    } else if (!_strcmpi(name, "!target2")) {
        if (m_hTarget2_470 == 0)
            m_hTarget2_470 = g_106eb5d8.sub_100f7770(0, STRINGR(m_iszTarget2.pszValue), 0, 0);
        return m_hTarget2_470;
    } else if (!_strcmpi(name, "!target3")) {
        if (m_hTarget3_474 == 0)
            m_hTarget3_474 = g_106eb5d8.sub_100f7770(0, STRINGR(m_iszTarget3.pszValue), 0, 0);
        return m_hTarget3_474;
    } else if (!_strcmpi(name, "!target4")) {
        if (m_hTarget4_478 == 0)
            m_hTarget4_478 = g_106eb5d8.sub_100f7770(0, STRINGR(m_iszTarget4.pszValue), 0, 0);
        return m_hTarget4_478;
    } else if (a) {
        if (((CSceneEventActorEnt *)a)->m_pNPC94)
            entity = ((CAI_BaseNPC *)((CSceneEventActorEnt *)a)->m_pNPC94)->vfunc559(name);
        else
            entity = g_106eb5d8.sub_100f7770(0, name, (CBaseEntity *)a, 0);
    } else {
        entity = g_106eb5d8.sub_100f7770(0, name, 0, 0);
    }
    return entity;
}
// END FUNCTION

// FUNCTION: 0x10084170 size=0xb8
#include "CSceneEntity.h"
#include "CUnknown1007a2c0.h"

struct S1007a270
{
	int sub_1007a270(int index);
};

struct CSceneListB
{
	int sub_1007a250();	// stub 0x1000f2ae
	char sub_1007ed10();	// stub 0x1000f457
};

struct CSceneEventX
{
	int sub_100029c8();
	void *sub_10076710();	// stub 0x10015a78: the sub scene the event plays
};

struct CSceneEntityRecurse : CSceneEntity
{
	void sub_10084170(void *pScene);	// the recursion goes through the linker stub
};

#define SAV(n) virtual void a##n();
#define SAV10(p) SAV(p##0) SAV(p##1) SAV(p##2) SAV(p##3) SAV(p##4) SAV(p##5) SAV(p##6) SAV(p##7) SAV(p##8) SAV(p##9)
struct CActorEntView	// the actor entity: slot 285 takes the scene
{
	SAV10(0) SAV10(1) SAV10(2) SAV10(3) SAV10(4) SAV10(5) SAV10(6) SAV10(7) SAV10(8) SAV10(9)
	SAV10(10) SAV10(11) SAV10(12) SAV10(13) SAV10(14) SAV10(15) SAV10(16) SAV10(17) SAV10(18) SAV10(19)
	SAV10(20) SAV10(21) SAV10(22) SAV10(23) SAV10(24) SAV10(25) SAV10(26) SAV10(27)
	SAV(280) SAV(281) SAV(282) SAV(283) SAV(284)
	virtual void vfunc285(void *pScene);
};

// TARGET: CSceneEntity::sub_10084170
void CSceneEntity::sub_10084170(void *pScene)
{
	if (!pScene)
		return;
	int i;
	for (i = 0; i < ((CUnknown1007a2c0 *)pScene)->sub_1007a2a0(); i++)
	{
		void *pActor = ((CUnknown1007a2c0 *)pScene)->sub_1007a2c0(i);
		if (pActor)
		{
			CSceneEventActorEnt *pEnt = vfunc267(((CSceneEventActor *)pActor)->sub_10008a99());
			if (pEnt)
				((CActorEntView *)pEnt)->vfunc285(pScene);
		}
	}
	for (i = 0; i < ((CSceneListB *)pScene)->sub_1007a250(); i++)
	{
		CSceneEventX *pEvent = (CSceneEventX *)((S1007a270 *)pScene)->sub_1007a270(i);
		if (pEvent && pEvent->sub_100029c8() == 0xb && !((CSceneListB *)pScene)->sub_1007ed10())
		{
			void *pSub = pEvent->sub_10076710();
			if (pSub)
				((CSceneEntityRecurse *)this)->sub_10084170(pSub);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10084260 size=0x114
#include "CUnknown1007ce20.h"
#include "CSceneEntity.h"
#include "CUnknown1007a2c0.h"
#include "CBaseAnimating.h"

struct S1007a270
{
	int sub_1007a270(int index);
	int sub_1007a250();
	char sub_1007ed10();
};

struct CSceneResetNPC
{
	char m_pad0000[0x5c38];
	int m_n5c38;
	int sub_102cc1f0(int a);
	void sub_10280d30();
};

struct CSceneResetActor
{
	char m_pad0000[0x94];
	CSceneResetNPC *m_pNPC94;
};

struct CSceneEntityUnit : CSceneEntity
{
	void sub_10002cfc(void *pScene);
};

void CSceneEntity::sub_10084260(void *pScene)
{
	if (pScene)
	{
		int i = 0;
		while (i < ((CUnknown1007a2c0 *)pScene)->sub_1007a2a0())
		{
			CSceneEventActor *pRecord = (CSceneEventActor *)((CUnknown1007a2c0 *)pScene)->sub_1007a2c0(i);
			if (pRecord)
			{
				CSceneResetActor *pActor = (CSceneResetActor *)vfunc267(pRecord->sub_10008a99());
				if (pActor)
				{
					CSceneResetNPC *pNPC = pActor->m_pNPC94;
					if (pNPC)
					{
						if (pNPC->m_n5c38)
						{
							if (pNPC->m_n5c38 == pNPC->sub_102cc1f0(0x34))
								pNPC->sub_10280d30();
						}
					}
					else
					{
						CBaseAnimating *pAnim = (CBaseAnimating *)pActor;
						*(int *)((char *)pAnim + 0x6f0) = pAnim->sub_1008dc40(1, -1);
						pAnim->sub_10090950();
						*(int *)((char *)pAnim + 0x6f8) = 0;
					}
				}
			}
			i++;
		}
		for (int j = 0; j < ((S1007a270 *)pScene)->sub_1007a250(); j++)
		{
			CSceneEvent *pEvent = (CSceneEvent *)((S1007a270 *)pScene)->sub_1007a270(j);
			if (pEvent && pEvent->sub_100029c8() == 11 && !((S1007a270 *)pScene)->sub_1007ed10())
			{
				CUnknown1007ce20 *pSub = pEvent->sub_10076710();
				if (pSub)
					((CSceneEntityUnit *)this)->sub_10002cfc(pSub);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100843d0 size=0x168
#include "CSceneEntity.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "Ent.h"

#define AV(n) virtual void a##n();
#define AV10(p) AV(p##0) AV(p##1) AV(p##2) AV(p##3) AV(p##4) AV(p##5) AV(p##6) AV(p##7) AV(p##8) AV(p##9)
struct AnimSlots	// the vtable of an animating entity up to slot 245
{
	AV(0) AV(1) AV(2) AV(3) AV(4) AV(5) AV(6) AV(7) AV(8) AV(9)
	AV10(1) AV10(2) AV10(3) AV10(4) AV10(5) AV10(6) AV10(7) AV10(8) AV10(9) AV10(10) AV10(11) AV10(12) AV10(13) AV10(14) AV10(15) AV10(16) AV10(17) AV10(18) AV10(19)
	AV10(20) AV10(21) AV10(22) AV10(23) AV(240) AV(241) AV(242) AV(243) AV(244)
	virtual void slot245(CSceneEntity *pScene, const char *pszA, const char *pszB, int n1, int n2);
};

struct SceneActorView
{
	const char *sub_10072d90();
	const char *sub_10072e20();
	const char *sub_10072e40();
};
struct SceneObjView;
struct SceneEventView : CSceneEvent
{
};
struct SceneObjView
{
	int sub_1007a2a0();
	SceneActorView *sub_1007a2c0(int index);
	int sub_1007a250();
	SceneEventView *sub_1007a270(int index);
	char sub_1007ed10();
};
struct SceneStub : CSceneEntity
{
	void sub_10008a8f(SceneObjView *p);
};

Ent *sub_101cda50();
void sub_10081190(const char *fmt, ...);

void CSceneEntity::sub_100843d0(void *pSceneArg)
{
	SceneObjView *pScene = (SceneObjView *)pSceneArg;
	if (!pScene)
		return;
	int nValue = m_n490;
	Ent *pEnt = sub_101cda50();
	if (pEnt && !pEnt->sub_10336920())
		nValue = m_n494;
	int i;
	for (i = 0; i < pScene->sub_1007a2a0(); i++) {
		SceneActorView *pActor = pScene->sub_1007a2c0(i);
		if (!pActor)
			continue;
		CBaseEntity *pTarget = vfunc268(pActor->sub_10072d90(), 0);
		if (!pTarget)
			continue;
		CBaseAnimating *pAnim = dynamic_cast<CBaseAnimating *>(pTarget);
		if (!pAnim)
			continue;
		sub_10081190("Adding extra animations for: %s. (%-5s -> %-5s) \n", pAnim->sub_1000b5cd(), pActor->sub_10072e20(), pActor->sub_10072e40());
		((AnimSlots *)pAnim)->slot245(this, pActor->sub_10072e20(), pActor->sub_10072e40(), nValue, m_n48c);
	}
	for (i = 0; i < pScene->sub_1007a250(); i++) {
		SceneEventView *pEvent = pScene->sub_1007a270(i);
		if (pEvent && pEvent->sub_100029c8() == 0xb && !pScene->sub_1007ed10()) {
			void *pSub = pEvent->sub_10076710();
			if (pSub)
				((SceneStub *)this)->sub_10008a8f((SceneObjView *)pSub);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100845a0 size=0xd4
#include "CBaseEntity.h"
#include "CSceneEntity.h"
#include "CUnknown1007a2c0.h"
#include "CEntityVSlots.h"

extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10538764[];
extern char g_1053dd10[];

struct CSceneData : CUnknown1007a2c0
{
	int sub_1007a250();
	void *sub_1007a270(int index);
	char sub_1007ed10();
};

struct CSceneEventView : CSceneEvent
{
	CSceneData *sub_10076710();
};

struct CSceneEntityStub : CSceneEntity
{
	void sub_1000eb38(void *pScene);
};

// TARGET: CSceneEntity::sub_100845a0
void CSceneEntity::sub_100845a0(void *pScene)
{
	CSceneData *pData = (CSceneData *)pScene;
	if (pData)
	{
		for (int i = 0; i < pData->sub_1007a2a0(); i++)
		{
			CSceneEventActor *pActor = (CSceneEventActor *)pData->sub_1007a2c0(i);
			if (pActor)
			{
				CBaseEntity *pEnt = vfunc268(pActor->sub_10008a99(), 0);
				if (pEnt)
				{
					CEntityVSlots *pAnim = (CEntityVSlots *)__RTDynamicCast(pEnt, 0, g_10538764, g_1053dd10, 0);
					if (pAnim)
						pAnim->slot246();
				}
			}
		}
		for (int j = 0; j < pData->sub_1007a250(); j++)
		{
			CSceneEventView *pEvent = (CSceneEventView *)pData->sub_1007a270(j);
			if (pEvent && pEvent->sub_100029c8() == 0xb && !pData->sub_1007ed10())
			{
				CSceneData *pSub = pEvent->sub_10076710();
				if (pSub)
					((CSceneEntityStub *)this)->sub_1000eb38(pSub);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100846c0 size=0xd7
#include "CSceneEntity.h"
#include "CUnknown1007a2c0.h"

#define PV1(n) virtual void v##n();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)

struct CScnChar	// the actor's character object (+0x98 of its entity): slots 250 and 312
{
	PV10(0) PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20) PV10(21) PV10(22) PV10(23) PV10(24)
	virtual float vfunc250(int a);
	PV1(251) PV1(252) PV1(253) PV1(254) PV1(255) PV1(256) PV1(257) PV1(258) PV1(259)
	PV10(26) PV10(27) PV10(28) PV10(29)
	PV10(30)
	PV1(310) PV1(311)
	virtual void vfunc312(float a);
};

struct CScnActorEnt
{
	char m_pad0000[0x98];
	CScnChar *m_pChar;	// 0x98
};

struct CScnEvent : CSceneEvent
{
	void *sub_10076710();	// stub 0x10015a78: the scene the event plays
};

struct CScnRoot : CUnknown1007a2c0
{
	int sub_1007a250();	// stub 0x1000f2ae: the number of events
	CScnEvent *sub_1007a270(int index);	// stub 0x10013c96
	char sub_1007ed10();	// stub 0x1000f457
};

struct CSceneUnit : CSceneEntity
{
	void sub_100018c5(void *pScene);	// the stub of sub_100846c0 (the recursion goes through it)
};

void CSceneEntity::sub_100846c0(void *pScene)
{
	CScnRoot *pRoot = (CScnRoot *)pScene;
	if (!pRoot)
		return;
	for (int i = 0; i < pRoot->sub_1007a2a0(); i++)
	{
		CSceneEventActor *pActor = (CSceneEventActor *)pRoot->sub_1007a2c0(i);
		if (pActor)
		{
			CScnActorEnt *pEnt = (CScnActorEnt *)vfunc267(pActor->sub_10008a99());
			if (pEnt)
			{
				CScnChar *pChar = pEnt->m_pChar;
				if (pChar)
				{
					float flValue = pChar->vfunc250(0);
					pChar->vfunc312(flValue);
				}
			}
		}
	}
	for (int j = 0; j < pRoot->sub_1007a250(); j++)
	{
		CScnEvent *pEvent = pRoot->sub_1007a270(j);
		if (pEvent && pEvent->sub_100029c8() == 0xb && !pRoot->sub_1007ed10())
		{
			void *pSub = pEvent->sub_10076710();
			if (pSub)
				((CSceneUnit *)this)->sub_100018c5(pSub);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100847e0 size=0x16d
#include "CSceneEntity.h"
#define NV(n) virtual void vfunc##n();
#define NV10(p) NV(p##0) NV(p##1) NV(p##2) NV(p##3) NV(p##4) NV(p##5) NV(p##6) NV(p##7) NV(p##8) NV(p##9)
#define NV100(p) NV10(p##0) NV10(p##1) NV10(p##2) NV10(p##3) NV10(p##4) NV10(p##5) NV10(p##6) NV10(p##7) NV10(p##8) NV10(p##9)
struct SActor847e0 {
	char m_bType;
	const char *sub_10072d90();
};
struct SEvent847e0;
struct SScene847e0 {
	int sub_1007a2a0();
	SActor847e0 *sub_1007a2c0(int index);
	int sub_1007a250();
	SEvent847e0 *sub_1007a270(int index);
	char sub_1007ed10();
};
struct SEvent847e0 {
	int sub_10075b70();
	SScene847e0 *sub_10076710();
};
struct SNpc847e0 {
	NV100(0) NV100(1) NV100(2) NV100(3) NV100(4) NV100(5)
	NV10(60) NV(610) NV(611) NV(612) NV(613) NV(614)
	char m_pad0004[0x178 - 4];
	float m_f178;
	float m_f17c;
	char m_pad0180[0xfe8 - 0x180];
	EHANDLE m_hFe8;
	char m_pad0fec[0x6554 - 0xfec];
	EHANDLE m_h6554;
	void sub_1029f300(char c);
	void sub_10033f60(int a);
};
struct SActorEnt847e0 {
	char m_pad0000[0x98];
	SNpc847e0 *m_pNpc98;
};
extern struct SGlobals847e0 { char pad[0xc]; float curtime; float frametime; } *g_1070b228;
extern float g_1044f02c;

void CSceneEntity::sub_100847e0(void *pSceneArg)
{
	SScene847e0 *pScene = (SScene847e0 *)pSceneArg;
	if (pScene) {
		for (int i = 0; i < pScene->sub_1007a2a0(); i++) {
			SActor847e0 *pActor = pScene->sub_1007a2c0(i);
			if (pActor) {
				SActorEnt847e0 *pEnt = (SActorEnt847e0 *)vfunc267(pActor->sub_10072d90());
				if (pEnt) {
					SNpc847e0 *pNpc = pEnt->m_pNpc98;
					if (pNpc) {
						if (!pNpc->m_hFe8.Get() && !pNpc->m_h6554.Get()) {
							pNpc->sub_1029f300(pActor->m_bType);
							pNpc->vfunc614();
							pNpc->sub_10033f60(0);
							if (pNpc->m_f17c <= pNpc->m_f178) {
								float flFrame = g_1070b228->frametime;
								pNpc->m_f17c = flFrame * g_1044f02c + g_1070b228->curtime;
							}
						}
					}
				}
			}
		}
		for (int j = 0; j < pScene->sub_1007a250(); j++) {
			SEvent847e0 *pEvent = pScene->sub_1007a270(j);
			if (pEvent && pEvent->sub_10075b70() == 0xb && !pScene->sub_1007ed10()) {
				SScene847e0 *pSub = pEvent->sub_10076710();
				if (pSub)
					sub_1000d97c(pSub);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100849b0 size=0x53
#include "platform.h"
void *sub_100aa720(unsigned int size);

extern int vt_1044f584;
extern char g_105491f8[];

struct CInstancedSceneEntityCtorCall
{
	void sub_10080830();
};

#define V10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();

struct GP {
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5();
	virtual void name(const char *s);
};

// TARGET: instanced_scripted_scene
DLL_EXPORT GP *instanced_scripted_scene()
{
	GP *p = (GP *)sub_100aa720(0x584);
	if (p) {
		((CInstancedSceneEntityCtorCall *)p)->sub_10080830();
		*(int *)((char *)p + 0x580) = -1;
		*(int **)p = &vt_1044f584;
	} else {
		p = 0;
	}
	p->name(g_105491f8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10084a30 size=0x3
#include "CInstancedSceneEntity.h"
void CInstancedSceneEntity::vfunc270(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10084a50 size=0x3
#include "CInstancedSceneEntity.h"
void CInstancedSceneEntity::vfunc261(int a0, int a1, int a2, int a3, int a4)
{
}
// END FUNCTION

// FUNCTION: 0x10084a70 size=0x3
#include "CInstancedSceneEntity.h"
void CInstancedSceneEntity::vfunc271(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10084a90 size=0x3
#include "CInstancedSceneEntity.h"
void CInstancedSceneEntity::vfunc272(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x10084ab0 size=0x63
#include "CSceneEntity.h"
struct CRefOwnerView { virtual void v0(); virtual const CBaseHandle &GetRefEHandle() const; char pad[0x26c - 4]; string_t m_iName; string_t GetEntityName() { return m_iName; } };
extern float g_1070d1b0[3];
extern float g_1070d9d0[3];
CSceneEntity *sub_100a9ab0(const char *pszClass, const float *pOrigin, const float *pAngles, void *pOwner);
// TARGET: sub_10084ab0
CSceneEntity *sub_10084ab0(CRefOwnerView *pActor, const char *pszScene)
{
	CSceneEntity *pScene = sub_100a9ab0("instanced_scripted_scene", g_1070d1b0, g_1070d9d0, 0);
	pScene->m_pszSceneFile450 = *pszScene ? pszScene : 0;
	pScene->m_iszTarget1 = pActor->GetEntityName();
	EHANDLE &hOwner = *(EHANDLE *)&pScene->m_h580;
	hOwner = pActor->GetRefEHandle();
	pScene->vfunc103();
	pScene->vfunc242();
	return pScene;
}
// END FUNCTION

// FUNCTION: 0x10084b40 size=0xb1
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CUnknown10082e40.h"

CEntityVSlots *sub_100a9ab0(const char *pszClassname, const float *pOrigin, const float *pAngles, CEntityVSlots *pOwner);
extern char g_105491f8[];	// "instanced_scripted_scene"
extern char g_10549218[];	// "Unknown scene specified:  %s\n"
extern float g_1070d1b0[3];
extern float g_1070d9d0[3];
extern float g_104454c4;
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

struct CSceneTail : CEntityVSlots
{
	float sub_10081980();
};

float sub_10084b40(CBaseEntity *pActor, const char *pszScene, unsigned int *phScene)
{
	CSceneTail *pScene = (CSceneTail *)sub_100a9ab0(g_105491f8, g_1070d1b0, g_1070d9d0, 0);
	*(const char **)((char *)pScene + 0x450) = *pszScene ? pszScene : 0;
	if (pActor)
		*(unsigned int *)((char *)pScene + 0x580) = *pActor->vfunc1();
	else
		*(unsigned int *)((char *)pScene + 0x580) = 0xffffffff;
	pScene->slot103();
	pScene->slot242();
	if (!((CUnknown10082e40 *)pScene)->sub_10082e40()) {
		Msg(g_10549218, pszScene);
		if (phScene)
			*phScene = 0xffffffff;
		return g_104454c4;
	}
	if (phScene)
		*phScene = *((CBaseEntity *)pScene)->vfunc1();
	return pScene->sub_10081980();
}
// END FUNCTION

// FUNCTION: 0x10084c30 size=0x36
#include "CEHandleGet.h"

// TARGET: sub_10084c30
void sub_10084c30(int unused, unsigned int hEntity)
{
    CGlobalEntityList_Ent *pEnt = EHandle_Get(hEntity);
    if (pEnt) {
        ((void (__fastcall *)(void *))(*(int **)pEnt)[245])(pEnt);
    }
}
// END FUNCTION

// FUNCTION: 0x10084c80 size=0x148
#include "CInstancedSceneEntity.h"
#include "CSceneEntity.h"
#include "CEHandleGet.h"
#include "CUnknown1007e5a0.h"
#include "CUnknown1007ce20.h"

void sub_101cd940(CSceneEntity *pEnt);

inline void DoThink(CSceneEntity *pThis, float frametime)
{
	((CUnknown1007e5a0 *)pThis->m_pScene4bc)->sub_1007e5a0(pThis->sub_10080ac0());
	((CSceneEntityScene *)pThis->m_pScene4bc)->sub_1007d7f0(pThis->m_f4a0);
	frametime += pThis->m_f4a0;
	pThis->m_f4a0 = frametime;
	if (!((CSceneEntityScene *)pThis->m_pScene4bc)->sub_1007d1e0())
		return;
	((CUnknown1007ce20 *)pThis->m_pScene4bc)->sub_1007cfc0(1, 0, 0);
	pThis->m_bPlaying498 = 0;
	pThis->m_bPlaying499 = 0;
	pThis->m_f4a0 = 0;
	pThis->sub_10084170(pThis->m_pScene4bc);
	sub_101cd940(pThis);
}

// TARGET: CInstancedSceneEntity::vfunc134
void CInstancedSceneEntity::vfunc134()
{
	CSceneEntity *pThis = (CSceneEntity *)this;
	if (pThis->m_pScene4bc && pThis->m_bPlaying498 && EHandle_Get(pThis->m_h580))
	{
		pThis->m_flNextThink = gpGlobals->curtime;
		if (pThis->m_bPlaying499)
		{
			pThis->vfunc241();
			return;
		}
		float e = gpGlobals->curtime - pThis->sub_100ac720(0);
		DoThink(pThis, (0.1 < e) ? 0.1 : e);
		return;
	}
	sub_101cd940(pThis);
}
// END FUNCTION

// FUNCTION: 0x10084e30 size=0x70
#include "CInstancedSceneEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct S10084e30Ent { char pad[0x94]; int m_v94; };
int CInstancedSceneEntity::vfunc267(int a)
{
    unsigned int h = *(unsigned int *)((char *)this + 0x580);
    CGlobalEntityList_Ent *p = 0;
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        if (s->m_Serial == (int)(h >> 13))
            p = s->m_pEntity;
    }
    if (p) {
        unsigned int h2 = *(volatile unsigned int *)((char *)this + 0x580);
        S10084e30Ent *e;
        if (h2 != 0xffffffff) {
            CGlobalEntityList_Slot *s2 = &g_10566458->m_Slots[h2 & 0x1fff];
            e = s2->m_Serial == (int)(h2 >> 13) ? (S10084e30Ent *)s2->m_pEntity : 0;
        } else
            e = 0;
        int v = e->m_v94;
        if (v)
            return v;
    }
    return sub_10083c90(a);
}
// END FUNCTION

// FUNCTION: 0x10084ec0 size=0x88
#include "CInstancedSceneEntity.h"

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SLOTS100(p) SLOTS10(p##0) SLOTS10(p##1) SLOTS10(p##2) SLOTS10(p##3) SLOTS10(p##4) \
	SLOTS10(p##5) SLOTS10(p##6) SLOTS10(p##7) SLOTS10(p##8) SLOTS10(p##9)

struct CSceneRequestObject
{
	SLOTS100(a) SLOTS100(b) SLOTS100(c) SLOTS100(d) SLOTS100(e)
	SLOTS10(f0) SLOTS10(f1) SLOTS10(f2) SLOTS10(f3) SLOTS10(f4)
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4();
	virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8();
	virtual int vfunc559(int a);
};

struct CSceneFollowEnt
{
	char pad[0x94];
	CSceneRequestObject *m_pObj94;
};

struct CInstancedView580
{
	char pad[0x580];
	CHandle<CSceneFollowEnt> m_h580;
};

int CInstancedSceneEntity::vfunc269(int a)
{
	CInstancedView580 *v = (CInstancedView580 *)this;
	if (v->m_h580.Get()) {
		CSceneFollowEnt *ent = v->m_h580.Get();
		CSceneRequestObject *obj = ent->m_pObj94;
		if (obj) {
			int r = obj->vfunc559(a);
			if (r)
				return r;
		}
	}
	return sub_10083cd0(a, 0);
}
// END FUNCTION

// FUNCTION: 0x10084f80 size=0x1e
#include "CInstancedSceneEntity.h"

void sub_100aa7b0(void *p);

// TARGET: CInstancedSceneEntity::vfunc5
CInstancedSceneEntity *CInstancedSceneEntity::vfunc5(unsigned int flags)
{
	sub_1000b1ef();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
