// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 20 blocks
#include "vampire.h"

// FUNCTION: 0x1018a550 size=0x6
#include "CSkyCamera.h"
#include "datamap.h"
namespace lifted {
extern char g_10589ad0;
}
datamap_t *CSkyCamera::vfunc82()
{
    return (datamap_t *)&lifted::g_10589ad0;
}
// END FUNCTION

// FUNCTION: 0x1018a570 size=0x5
int sub_1018a5b0(void);
int g_10728680 = ((int (*)(int))sub_1018a5b0)(0);
// END FUNCTION

// FUNCTION: 0x1018a5b0 size=0x1a
namespace lifted {
extern int g_10589ad0;
extern int g_10589ad4;
extern char g_10589b14;
}
int sub_1018a5b0()
{
    lifted::g_10589ad4 = 9;
    lifted::g_10589ad0 = (int)&lifted::g_10589b14;
    return (int)&lifted::g_10589ad0;
}
// END FUNCTION

// FUNCTION: 0x1018a5e0 size=0x8
#include "CSkyCamera.h"
// TARGET: CSkyCamera::vfunc103
void CSkyCamera::vfunc103()
{
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1018a600 size=0x4a
#include "CSkyCamera.h"
extern CSkyCamera *g_1072a498;

void CSkyCamera::vfunc104()
{
	m_vecOrigin454 = *vfunc220();
	m_nArea460 = engine->vfunc111(&m_vecOrigin454.x);
	m_pNext484 = g_1072a498;
	g_1072a498 = this;
}
// END FUNCTION

// FUNCTION: 0x1018a670 size=0xa
#include "SendTable.h"
SendTable g_1072a47c;
// END FUNCTION

// FUNCTION: 0x1018a6f0 size=0x5
int sub_1018a730(void);
int g_1072a478 = ((int (*)(int))sub_1018a730)(0);
// END FUNCTION

// FUNCTION: 0x1018a730 size=0xbdd
#include "SendProp.h"

class SendTable
{
public:
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);	// SendTable::Construct (stub 0x1000e8fe)
};

SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int extra, void *proxy);
SendProp sub_10246700(const char *name, int offset, int size, int bits, int flags, float low, float high, void *proxy);
SendProp sub_10246510(const char *name, int offset, int size, int bits, int flags, float low, float high, void *proxy);
SendProp sub_10246dc0(const char *name, int offset, int pTable, void *proxy);
SendProp sub_10246ef0(int nElements, int nStride, const char *name, int proxy);
SendProp sub_101ab310(const char *name, int offset, int size);
void sub_10009539();
void sub_10006aeb();
void sub_10003012();
extern SendTable g_1072a47c;
extern const char *g_10589ca0;
extern int g_1072ad00;

// TARGET: sub_1018a730
int sub_1018a730()
{
	static SendProp g_SendProps[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("m_Predicted", 0, (int)&g_1072ad00, (void *)sub_10009539),
		sub_10246af0("m_iHideHUD", 0x34, 4, 9, 0, 0, 0),
		sub_10246af0("m_iFOV", 0x38, 4, 9, 0, 0, 0),
		sub_10246af0("m_iViewmodelFOV", 0x3c, 4, 8, 0, 0, 0),
		sub_10246af0("m_bDrawCrosshair", 0x4c, 1, 1, 1, 0, 0),
		sub_10246af0("m_targetEntityIndex", 0x50, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_idxInteractiveUseEntity", 0x5c, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_tgtDisciplineEntIdx", 0x54, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_tgtStealthInfo", 0x58, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_targetEntityHighlight", 0x60, 4, 4, 1, 0, 0),
		sub_10246af0("m_targetEntityIcon", 0x64, 4, 7, 1, 0, 0),
		sub_10246af0("m_targetIFF", 0x68, 4, 2, 1, 0, 0),
		sub_10246af0("m_nMeleeOpponentIndex", 0x6c, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_nFeedingPartnerEntIndex", 0x70, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_nFrenzyHunger", 0x74, 1, 1, 1, 0, 0),
		sub_10246af0("m_iBarterTgtEntIdx", 0x78, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_iControllerNPCEntIdx", 0x7c, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_iCameraOverrideIdx", 0x84, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_idxInsightTarget", 0x88, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_nInsightIntensity", 0x8c, 4, 8, 1, 0, 0),
		sub_10246af0("m_idxNosferatuRadarNPC", 0x90, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_idxDialogNPC", 0x94, 4, 0xb, 1, 0, 0),
		sub_10246af0("m_bitsCharState", 0x98, 4, -1, 1, 0, 0),
		sub_10246af0("m_bWolf", 0x9c, 1, 1, 1, 0, 0),
		sub_10246af0("m_bDucked", 0x9d, 1, 1, 1, 0, 0),
		sub_10246af0("m_bDucking", 0x9e, 1, 1, 1, 0, 0),
		sub_10246510("m_flDucktime", 0xa0, 4, 0xc, 8, 0.0f, 2048.0f, (void *)sub_10006aeb),
		sub_10246af0("m_nStepside", 0xa4, 4, 1, 1, 0, 0),
		sub_10246510("m_flFallVelocity", 0xa8, 4, 0x11, 0, -4096.0f, 4096.0f, (void *)sub_10006aeb),
		sub_10246af0("m_nOldButtons", 0xac, 4, 0x20, 1, 0, 0),
		sub_10246700("m_vecClientBaseVelocity", 0xb0, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246700("m_vecPunchangle", 0xbc, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246700("m_vecPunchangleVel", 0xc8, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246af0("m_bDrawViewmodel", 0xd4, 1, 1, 1, 0, 0),
		sub_10246af0("m_bWearingSuit", 0xe0, 1, 1, 1, 0, 0),
		sub_10246510("m_flStepSize", 0xe4, 4, 0x10, 0x10, 0.0f, 128.0f, (void *)sub_10006aeb),
		sub_10246af0("m_bAllowAutoMovement", 0xe8, 1, 1, 1, 0, 0),
		sub_10246af0("m_nightvision_level", 0xd8, 4, 3, 1, 0, 0),
		sub_10246af0("m_daylight_level", 0xdc, 4, 3, 1, 0, 0),
		sub_10246700("m_vecCameraViewOverride", 0xec, 0xc, -1, 4, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246700("m_vecCameraTargetOverride", 0xf8, 0xc, -1, 4, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246510("m_flCameraFOVOverride", 0x104, 4, 10, 0, 0.0f, 180.0f, (void *)sub_10006aeb),
		sub_10246510("m_flCameraRollOverride", 0x108, 4, 0xc, 0, -180.0f, 180.0f, (void *)sub_10006aeb),
		sub_101ab310("m_flCameraOverrideTimestamp", 0x10c, 4),
		sub_101ab310("m_flCameraOverrideFadeStartTime", 0x110, 4),
		sub_10246510("m_flCameraOverrideFadeDuration", 0x114, 4, 10, 8, -10.0f, 10.0f, (void *)sub_10006aeb),
		sub_10246700("m_vecCrossfadeFromLandmark", 0x118, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246700("m_vecCrossfadeToLandmark", 0x124, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246510("m_flCrossfadeYawDifference", 0x130, 4, 0xc, 0, -360.0f, 360.0f, (void *)sub_10006aeb),
		sub_101ab310("m_flCrossfadeStartTime", 0x134, 4),
		sub_10246510("m_flCrossfadeDuration", 0x138, 4, 7, 8, 0.0f, 10.0f, (void *)sub_10006aeb),
		sub_101ab310("m_flResetCameraDampeningTime", 0x13c, 4),
		sub_10246af0("m_sndRoomDSP", 0x140, 4, 8, 0, 0, 0),
		sub_10246af0("m_sndPlayerDSP", 0x144, 4, 8, 0, 0, 0),
		sub_10246af0("m_skybox3d.scale", 0x148, 4, 0xc, 0, 0, 0),
		sub_10246700("m_skybox3d.origin", 0x14c, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246af0("m_skybox3d.area", 0x158, 4, 8, 1, 0, 0),
		sub_10246af0("m_skybox3d.fog.enable", 0x15c, 1, 1, 1, 0, 0),
		sub_10246af0("m_skybox3d.fog.blend", 0x15d, 1, 1, 1, 0, 0),
		sub_10246700("m_skybox3d.fog.dirPrimary", 0x160, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246af0("m_skybox3d.fog.colorPrimary.r", 0x16c, 1, 8, 1, 0, 0),
		sub_10246af0("m_skybox3d.fog.colorPrimary.g", 0x16d, 1, 8, 1, 0, 0),
		sub_10246af0("m_skybox3d.fog.colorPrimary.b", 0x16e, 1, 8, 1, 0, 0),
		sub_10246af0("m_skybox3d.fog.colorSecondary.r", 0x170, 1, 8, 1, 0, 0),
		sub_10246af0("m_skybox3d.fog.colorSecondary.g", 0x171, 1, 8, 1, 0, 0),
		sub_10246af0("m_skybox3d.fog.colorSecondary.b", 0x172, 1, 8, 1, 0, 0),
		sub_10246510("m_skybox3d.fog.start", 0x174, 4, 0, 4, 0.0f, -121121.121212f, (void *)sub_10006aeb),
		sub_10246510("m_skybox3d.fog.end", 0x178, 4, 0, 4, 0.0f, -121121.121212f, (void *)sub_10006aeb),
		sub_10246af0("m_fog.enable", 0x17c, 1, 1, 1, 0, 0),
		sub_10246af0("m_fog.blend", 0x17d, 1, 1, 1, 0, 0),
		sub_10246700("m_fog.dirPrimary", 0x180, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246af0("m_fog.colorPrimary.r", 0x18c, 1, 8, 1, 0, 0),
		sub_10246af0("m_fog.colorPrimary.g", 0x18d, 1, 8, 1, 0, 0),
		sub_10246af0("m_fog.colorPrimary.b", 0x18e, 1, 8, 1, 0, 0),
		sub_10246af0("m_fog.colorSecondary.r", 0x190, 1, 8, 1, 0, 0),
		sub_10246af0("m_fog.colorSecondary.g", 0x191, 1, 8, 1, 0, 0),
		sub_10246af0("m_fog.colorSecondary.b", 0x192, 1, 8, 1, 0, 0),
		sub_10246510("m_fog.start", 0x194, 4, 0, 4, 0.0f, -121121.121212f, (void *)sub_10006aeb),
		sub_10246510("m_fog.end", 0x198, 4, 0, 4, 0.0f, -121121.121212f, (void *)sub_10006aeb),
		sub_10246700("m_audio.localSound[0]", 0x19c, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246700("m_audio.localSound[1]", 0x1a8, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246700("m_audio.localSound[2]", 0x1b4, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246700("m_audio.localSound[3]", 0x1c0, 0xc, -1, 2, 0.0f, -121121.121212f, (void *)sub_10003012),
		sub_10246af0("m_audio.soundscapeIndex", 0x1cc, 4, 0x10, 1, 0, 0),
		sub_10246af0("m_audio.localBits", 0x1d0, 4, 4, 1, 0, 0),
		sub_10246af0("m_audio.entityIndex", 0x1d4, 4, 0x10, 1, 0, 0),
		sub_10246af0("m_iHotkeyTypes[0]", 0x1d8, 4, 4, 1, 0, 0),
		sub_10246ef0(10, 4, "m_iHotkeyTypes", 0),
		sub_10246af0("m_iHotkeyData[0]", 0x200, 4, 0x20, 1, 0, 0),
		sub_10246ef0(10, 4, "m_iHotkeyData", 0),
	};
	g_1072a47c.sub_10247240(g_SendProps + 1, 0x5a, g_10589ca0);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1018b640 size=0x5
int sub_1018b680(void);
int g_10728694 = ((int (*)(int))sub_1018b680)(0);
// END FUNCTION

// FUNCTION: 0x1018b680 size=0x1a
namespace lifted {
extern int g_10589ca4;
extern int g_10589ca8;
extern char g_10589d1c;
}
int sub_1018b680()
{
    lifted::g_10589ca8 = 0x26;
    lifted::g_10589ca4 = (int)&lifted::g_10589d1c;
    return (int)&lifted::g_10589ca4;
}
// END FUNCTION

// FUNCTION: 0x1018b6b0 size=0x5
int sub_1018b6f0(void);
int g_10728688 = ((int (*)(int))sub_1018b6f0)(0);
// END FUNCTION

// FUNCTION: 0x1018b6f0 size=0x1a
namespace lifted {
extern int g_10589cbc;
extern int g_10589cc0;
extern char g_1058a3d4;
}
int sub_1018b6f0()
{
    lifted::g_10589cc0 = 4;
    lifted::g_10589cbc = (int)&lifted::g_1058a3d4;
    return (int)&lifted::g_10589cbc;
}
// END FUNCTION

// FUNCTION: 0x1018b720 size=0x5
int sub_1018b760(void);
int g_10728684 = ((int (*)(int))sub_1018b760)(0);
// END FUNCTION

// FUNCTION: 0x1018b760 size=0x1a
namespace lifted {
extern int g_10589cd4;
extern int g_10589cd8;
extern char g_1058a4b4;
}
int sub_1018b760()
{
    lifted::g_10589cd8 = 7;
    lifted::g_10589cd4 = (int)&lifted::g_1058a4b4;
    return (int)&lifted::g_10589cd4;
}
// END FUNCTION

// FUNCTION: 0x1018b790 size=0x3f
#include "vampire.h"

struct CUnknownBase1018b790
{
    void sub_10009ade();
};

struct CUnknown1018b790 : CUnknownBase1018b790
{
    CUnknown1018b790 *sub_1018b790();
    char m_pad00[0x6c];
    int m_n6c;
    char m_pad70[0x13c - 0x70];
    int m_n13c;
    char m_pad140[0x1cc - 0x140];
    int m_n1cc;
    int m_n1d0;
    int m_n1d4;
    int m_a1d8[10];
    int m_a200[10];
};

// TARGET: CUnknown1018b790::sub_1018b790
CUnknown1018b790 *CUnknown1018b790::sub_1018b790()
{
    ((CUnknownBase1018b790 *)this)->sub_10009ade();
    m_n1cc = 0;
    m_n1d0 = 0;
    m_n1d4 = 0;
    m_n6c = 0;
    for (int i = 0; i < 10; i++)
    {
        m_a1d8[i] = 0;
        m_a200[i] = 0;
    }
    m_n13c = 0;
    return this;
}
// END FUNCTION

// FUNCTION: 0x1018b7e0 size=0x4e6
#include "CVTraitEffect_t.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CPlayerLocalPredictedData.h"
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
#include "ScopeTrace.h"
#include "Vector.h"
struct SWorldInfo { char m_b00; char m_b01; char m_pad02[2]; int m_n04; int m_n08; int m_n0c; int m_n10; int m_n14; int m_n18; int m_n1c; };
void sub_1023cde0(SWorldInfo *pInfo);
extern int *g_1072a498;
struct CUnknownCopy1018be10 { CUnknownCopy1018be10 *sub_1018be10(const CUnknownCopy1018be10 *p); };

struct SW_ {
	CBP_V100(wa) CBP_V100(wb) CBP_V100(wc) CBP_V10(wd0) CBP_V10(wd1) CBP_V10(wd2) CBP_V10(wd3) CBP_V10(wd4) CBP_V10(wd5)
	virtual unsigned int vfunc360();
};
struct SEnt_ { char m_pad[0x2e0]; int m_n2e0; int edict() { return m_n2e0; } };
struct SBlk30 { int a[0x30]; };
struct SBlk15 { int a[0x15]; };
struct SPlV {
	CBP_V100(pa) CBP_V100(pb) CBP_V10(pc0) CBP_V10(pc1) CBP_V10(pc2) CBP_V10(pc3) CBP_V10(pc4) CBP_V10(pc5) CBP_V10(pc6)
	CBP_V1(pd0) CBP_V1(pd1) CBP_V1(pd2) CBP_V1(pd3) CBP_V1(pd4) CBP_V1(pd5) CBP_V1(pd6)
	virtual void vfunc277(int a);
	virtual int vfunc278();
	char m_pad4[0x170];
	int m_n174;
	char m_pad178[0x19c - 0x178];
	unsigned int m_f19c;
	char m_pad1a0[0x6f0 - 0x1a0];
	int m_n6f0;
	int m_n6f4;
	int m_n6f8;
	char m_pad6fc[0x734 - 0x6fc];
	SBlk30 m_b734;
	SBlk15 m_b7f4;
};
SW_ *__fastcall sub_1032e7b0(CBasePlayer *p);
char __fastcall sub_1033b7c0(CBasePlayer *p);
SPlV *__fastcall sub_101618a0(CBasePlayer *p);
struct SLook { int sub_100290c0(unsigned int *ph); };

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

// TARGET: sub_1018b7e0
void sub_1018b7e0(CBasePlayer *pPlayer)
{
	CPlayerLocalPredictedData *pLocal = &pPlayer->m_Local1E40;
	if (!pLocal)
		return;
	Vector *pOrigin = (Vector *)pPlayer->vfunc220();
	Vector vecEye;
	const Vector &o = *pOrigin;
	vecEye.x = o[0] + pPlayer->m_vecViewOffset[0];
	vecEye.y = o[1] + pPlayer->m_vecViewOffset[1];
	vecEye.z = o[2] + pPlayer->m_vecViewOffset[2];
	pLocal->m_i04 = 0;
	SW_ *pWep = sub_1032e7b0(pPlayer);
	if (!pWep || !(pWep->vfunc360() & 0x18000))
		pLocal->m_i04 = pPlayer->m_sTargetmodel.pszValue ? engine->vfunc13(STRINGR(pPlayer->m_sTargetmodel.pszValue), 0) : pPlayer->m_nDefaultTargetModel;
	pLocal->m_i08 = pPlayer->m_nDefaultSpreadLModel;
	pLocal->m_i0c = pPlayer->m_nDefaultSpreadRModel;
	pLocal->m_i10 = pPlayer->m_n2068;
	pPlayer->m_nEdict1EB0 = 0;
	pPlayer->m_b1EB4 = pPlayer->m_flag1474;
	bool bGrapple = (((SLook *)g_10566458)->sub_100290c0((unsigned int *)&pPlayer->m_hTarget1538) && pPlayer->m_nTarget153c != -1 && pPlayer->m_nTargetMode1540 == 0)
		|| (EHandle_Get(*(unsigned int *)&pPlayer->m_hTarget1538) && pPlayer->m_nTarget153c != -1 && pPlayer->m_nTargetMode1540 == 2);
	if (!bGrapple)
	{
		if (sub_1033b7c0(pPlayer) && pPlayer->m_b14aa && ((EHANDLE &)pPlayer->m_h14ac.m_Index).Get())
			pPlayer->m_nEdict1EB0 = engine->vfunc35(((SEnt_ *)((EHANDLE &)pPlayer->m_h14ac.m_Index).Get())->edict());
	}
	else
	{
		int n = pPlayer->m_nTarget153c;
		if ((EHandle_Get(*(unsigned int *)&pPlayer->m_hTarget1538) && n == 0 && EHandle_Get(*(unsigned int *)&pPlayer->m_h149c))
			|| (EHandle_Get(*(unsigned int *)&pPlayer->m_hTarget1538) && n == 1 && EHandle_Get(*(unsigned int *)&pPlayer->m_hTarget1538)
				&& EHandle_Get(*(unsigned int *)((char *)EHandle_Get(*(unsigned int *)&pPlayer->m_hTarget1538) + 0x149c))))
			pPlayer->m_nEdict1EB0 = engine->vfunc35(((SEnt_ *)EHandle_Get(*(unsigned int *)&pPlayer->m_hTarget1538))->edict());
	}
	pPlayer->m_nEdict1EAC = 0;
	if (EHandle_Get(pPlayer->m_hMeleeOpponent))
		pPlayer->m_nEdict1EAC = engine->vfunc35(((SEnt_ *)EHandle_Get(pPlayer->m_hMeleeOpponent))->edict());
	if (pPlayer->m_nUseEdict1EC4 && !engine->vfunc38(pPlayer->m_nUseEdict1EC4))
		pPlayer->m_nUseEdict1EC4 = 0;
	int area = engine->vfunc111(&vecEye.x);
	engine->vfunc112(area, pLocal->m_aData);
	int *pSky = g_1072a498;
	if (pSky) {
		pPlayer->m_aSkyCam1F88[0] = pSky[0x450 / 4];
		pPlayer->m_aSkyCam1F88[1] = pSky[0x454 / 4];
		pPlayer->m_aSkyCam1F88[2] = pSky[0x458 / 4];
		pPlayer->m_aSkyCam1F88[3] = pSky[0x45c / 4];
		pPlayer->m_aSkyCam1F88[4] = pSky[0x460 / 4];
		((CUnknownCopy1018be10 *)pPlayer->m_SkyCamCopy1F9C)->sub_1018be10((const CUnknownCopy1018be10 *)(pSky + 0x464 / 4));
	} else {
		pPlayer->m_aSkyCam1F88[4] = 0xff;
	}
	sub_1023cde0((SWorldInfo *)pPlayer->m_WorldInfo1FBC);
	SPlV *pT = sub_101618a0(pPlayer);
	SPlV *pMe = (SPlV *)pPlayer;
	if (pT && !pPlayer->m_b1EDC) {
		pMe->m_n6f0 = pT->m_n6f0;
		pMe->m_n174 = pT->m_n174;
		pMe->m_n6f8 = pT->m_n6f8;
		pMe->m_n6f4 = pT->m_n6f4;
		pMe->m_b734 = pT->m_b734;
		pMe->m_b7f4 = pT->m_b7f4;
		int mask = 0xb10;
		pMe->m_f19c = (pMe->m_f19c & ~mask) | (pT->m_f19c & mask);
		pMe->vfunc277(pT->vfunc278());
	}
}
// END FUNCTION

// FUNCTION: 0x1018be10 size=0x3d
struct CUnknownCopy1018be10
{
	char m_b00;
	char m_b01;
	int m_n04;
	int m_n08;
	int m_n0c;
	int m_n10;
	int m_n14;
	int m_n18;
	int m_n1c;

	CUnknownCopy1018be10 *sub_1018be10(const CUnknownCopy1018be10 *pSrc);
};

// TARGET: CUnknownCopy1018be10::sub_1018be10
CUnknownCopy1018be10 *CUnknownCopy1018be10::sub_1018be10(const CUnknownCopy1018be10 *pSrc)
{
	m_b00 = pSrc->m_b00;
	m_b01 = pSrc->m_b01;
	m_n04 = pSrc->m_n04;
	m_n08 = pSrc->m_n08;
	m_n0c = pSrc->m_n0c;
	m_n10 = pSrc->m_n10;
	m_n14 = pSrc->m_n14;
	m_n18 = pSrc->m_n18;
	m_n1c = pSrc->m_n1c;
	return this;
}
// END FUNCTION

// FUNCTION: 0x1018be60 size=0x34
void *sub_101cd9e0(int index);
void sub_1018b7e0(void *pEnt);

// TARGET: sub_1018be60
void sub_1018be60()
{
    int i = 1;
    if (gpGlobals->maxClients >= 1) {
        do {
            void *pEnt = sub_101cd9e0(i);
            if (pEnt != 0)
                sub_1018b7e0(pEnt);
            i++;
        } while (i <= gpGlobals->maxClients);
    }
}
// END FUNCTION

// FUNCTION: 0x1018beb0 size=0x2e
// TARGET: sub_1018beb0
int sub_1018beb0(int a, int b, unsigned int *pBits, int nBit) {
    unsigned int n = nBit - 1;
    *pBits = 0;
    pBits[n >> 5] |= 1 << (n & 31);
    return b;
}
// END FUNCTION

// FUNCTION: 0x1018bef0 size=0x1e
#include "CSkyCamera.h"

void sub_100aa7b0(void *p);

// TARGET: CSkyCamera::vfunc5
CSkyCamera *CSkyCamera::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
