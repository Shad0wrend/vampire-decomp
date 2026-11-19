// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b7e40 size=0xbd
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
#include "Vector.h"
extern CGlobalEntityList *g_10566458;

struct CMat3x4X
{
	float m[3][4];
};

void __cdecl sub_10139b90(const Vector *pAngles, CMat3x4X *pOut);	// AngleMatrix (stub 0x10012deb)
void __cdecl sub_10138df0(const CMat3x4X *pIn1, const CMat3x4X *pIn2, CMat3x4X *pOut);	// ConcatTransforms (stub 0x1000a01a)
void __cdecl sub_10137ed0(const CMat3x4X *pMatrix, Vector *pAngles);	// MatrixAngles (stub 0x10012756)

float *CBasePlayer::vfunc194()
{
	CBaseEntity *pParent = 0;
	unsigned int h = *(unsigned int *)((char *)this + 0x25c);
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			pParent = (CBaseEntity *)s->m_pEntity;
	}
	if (!pParent)
		return &m_vec206c.x;
	CMat3x4X local;
	CMat3x4X world;
	sub_10139b90(&m_vec206c, &local);
	if ((unsigned char)(pParent->m_flags268 >> 11) & 1)
		pParent->vfunc98();
	sub_10138df0((const CMat3x4X *)((char *)pParent + 0x130), &local, &world);
	static Vector s_vecAngles;
	sub_10137ed0(&world, &s_vecAngles);
	return &s_vecAngles.x;
}
// END FUNCTION

// FUNCTION: 0x100b7f50 size=0x7
#include "CBasePlayer.h"
float *CBasePlayer::vfunc195()
{
	return (float *)&m_vec206c;
}
// END FUNCTION

// FUNCTION: 0x100b7f70 size=0x11
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "Vector.h"
// TARGET: CBasePlayer::vfunc193
Vector CBasePlayer::vfunc193()
{
	return ((CBaseEntity *)this)->CBaseEntity::vfunc193();
}
// END FUNCTION

// FUNCTION: 0x100b7fe0 size=0x1bf
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CEHandleGet.h"
#include <string.h>

extern char g_106b8540[];
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CWeaponNameView
{
	char m_pad0000[0x11c];
	const char *m_pszName11c;
};

void CBasePlayer::vfunc457(const char *pszName, int a)
{
	if (!pszName)
		return;
	if (EHandle_Get(m_h1538) && m_n153C != -1)
		return;
	for (int i = 0; i < 0xe0; i++) {
		CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e8b0(i);
		if (!pWeapon)
			continue;
		const char *pszClass = ((CWeaponNameView *)pWeapon)->m_pszName11c ? ((CWeaponNameView *)pWeapon)->m_pszName11c : g_106b8540;
		if (_strcmpi(pszClass, pszName) != 0)
			continue;
		if (pWeapon->vfunc296() != a)
			continue;
		if (!_strcmpi((char *)pWeapon->sub_102517b0() + 0x2450, "bloodpack")) {
			pWeapon->vfunc315();
			return;
		}
		if (!sub_10335a70(pWeapon))
			return;
		if (pWeapon == sub_1032e7b0())
			return;
		if ((CBaseEntity *)pWeapon == m_hEnt10DC.Get())
			return;
		if (pWeapon->sub_10256200()) {
			if (sub_1032e7b0()) {
				if (!((CBaseCombatWeapon *)sub_1032e7b0())->vfunc313())
					return;
				((CBaseCombatWeapon *)sub_1032e7b0())->vfunc316((int)pWeapon);
			}
			sub_10177120();
			if (sub_1032e7b0())
				vfunc443(((CBaseCombatWeapon *)sub_1032e7b0())->vfunc317());
		} else {
			m_hEnt10E0 = m_hEnt10DC;
		}
		vfunc388((CBaseEntity *)pWeapon, 0);
		sub_10182e00((CBaseCombatWeapon *)sub_1032e7b0());
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1015aeb0 size=0x6
#include "CBasePlayer.h"
extern int g_10580edc[];

// TARGET: CBasePlayer::vfunc82
void *CBasePlayer::vfunc82()
{
	return g_10580edc;
}
// END FUNCTION

// FUNCTION: 0x1015d660 size=0x6
extern char g_10583618[];

// TARGET: sub_1015d660
void *sub_1015d660()
{
	return g_10583618;
}
// END FUNCTION

// FUNCTION: 0x1015dc40 size=0x6
#include "CBasePlayer.h"
int CBasePlayer::vfunc409()
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1015dc60 size=0x2d
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

CBaseEntity *CBasePlayer::sub_1015dc60()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x1c60);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015dca0 size=0x3
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc328
char CBasePlayer::vfunc328() { return 1; }
// END FUNCTION

// FUNCTION: 0x1015dcc0 size=0x16
#include "CBasePlayer.h"

// TARGET: CBasePlayer::vfunc131
int CBasePlayer::vfunc131()
{
	int nEdict = m_n02E0;
	return engine->vfunc35(nEdict);
}
// END FUNCTION

// FUNCTION: 0x1015dcf0 size=0x1
// TARGET: sub_1015dcf0
void __fastcall sub_1015dcf0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1015dd10 size=0x3
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc439
char CBasePlayer::vfunc439() { return 0; }
// END FUNCTION

// FUNCTION: 0x1015dd30 size=0x3
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc162
char CBasePlayer::vfunc162() { return 1; }
// END FUNCTION

// FUNCTION: 0x1015dd50 size=0x8
#include "CBaseEntity.h"
#include "CBasePlayer.h"

char CBasePlayer::sub_1015dd50()
{
	unsigned char result = ((CBaseEntity *)this)->CBaseEntity::vfunc117();
	result &= 0xfd;
	return result;
}
// END FUNCTION

// FUNCTION: 0x1015dd70 size=0x3
// TARGET: sub_1015dd70
int sub_1015dd70() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015dd90 size=0x1
// TARGET: sub_1015dd90
void __fastcall sub_1015dd90(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1015ddb0 size=0x1
// TARGET: sub_1015ddb0
void __fastcall sub_1015ddb0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1015ddd0 size=0x1
// TARGET: sub_1015ddd0
void __fastcall sub_1015ddd0(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1015ddf0 size=0x3
// TARGET: sub_1015ddf0
void __stdcall sub_1015ddf0(int a) {
}
// END FUNCTION

// FUNCTION: 0x1015de10 size=0x3
// TARGET: sub_1015de10
char sub_1015de10() {
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1015de30 size=0x7
#include "CBasePlayer.h"
float CBasePlayer::vfunc464()
{
	return 36.0f;
}
// END FUNCTION

// FUNCTION: 0x1015de50 size=0x7
#include "CBasePlayer.h"
float CBasePlayer::vfunc465()
{
	return 60.0f;
}
// END FUNCTION

// FUNCTION: 0x1015de70 size=0x7
#include "CBasePlayer.h"
float CBasePlayer::vfunc466()
{
	return 18.0f;
}
// END FUNCTION

// FUNCTION: 0x1015de90 size=0x3
// TARGET: sub_1015de90
char sub_1015de90() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1015deb0 size=0x7
#include "CBasePlayer.h"

void *CBasePlayer::vfunc198()
{
	return (char *)this + 0x211c;
}
// END FUNCTION

// FUNCTION: 0x1015ded0 size=0x1e
#include "CBasePlayer.h"

void sub_100aa7b0(void *p);

// TARGET: CBasePlayer::vfunc5
CBasePlayer *CBasePlayer::vfunc5(unsigned int flags)
{
	sub_100017d5();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1015e140 size=0xa7f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "Vector.h"

extern int g_107260a0;

struct CPlayerDumpView
{
	char m_pad0000[0x1a80];
	char m_bDrawViewmodel1a80;
	char m_pad1a81[3];
	int m_iClientBloodpool;	// 0x1a84
	int m_iClientFaithpoints;	// 0x1a88
	int m_iClientFeedBloodPool;	// 0x1a8c
	char m_pad1a90[4];
	int m_iClientAgrDmg;	// 0x1a94
	int m_iClientVActiveDisciplines[17];	// 0x1a98
	int m_flClientVActiveDisciplineDurations[17];	// 0x1adc
	int m_flClientBeginVActiveDisciplineTimers[17];	// 0x1b20
	int m_flActiveObfuscateUpdateTimer;	// 0x1b64
	int m_iClientFrenzyCount;	// 0x1b68
	char m_pad1b6c[0x1c44 - 0x1b6c];
	int m_nDefaultTargetModel;	// 0x1c44
	char m_pad1c48[0x1c50 - 0x1c48];
	const char *m_sTargetmodel;	// 0x1c50
	char m_pad1c54[0x1c64 - 0x1c54];
	EHANDLE m_pViewWeapon;	// 0x1c64
	char m_pad1c68[4];
	int m_flNextStealthUpdate;	// 0x1c6c
	int m_flStealthVisionScalar;	// 0x1c70
	int m_flStealthVisionCone;	// 0x1c74
	int m_flStealthHearingDist;	// 0x1c78
	char m_pad1c7c[0x1c90 - 0x1c7c];
	int m_iDebugFlags;	// 0x1c90
	int m_iDebugStealthFeat;	// 0x1c94
	int m_iDebugStealthLight;	// 0x1c98
	int m_iDebugStealthSound;	// 0x1c9c
	char m_pad1ca0[0x1e74 - 0x1ca0];
	int m_iHideHUD;	// 0x1e74
	int m_iFOV;	// 0x1e78
	int m_iViewmodelFOV;	// 0x1e7c
	Vector m_vecOverViewpoint;	// 0x1e80
	char m_pad1e8c[4];
	int m_targetEntityIndex;	// 0x1e90
	char m_pad1e94[0x1edc - 0x1e94];
	char m_bWolf;	// 0x1edc
	char m_bDucked;	// 0x1edd
	char m_bDucking;	// 0x1ede
	char m_pad1edf;
	int m_flDucktime;	// 0x1ee0
	int m_nStepside;	// 0x1ee4
	int m_flFallVelocity;	// 0x1ee8
	int m_nOldButtons;	// 0x1eec
	Vector m_vecClientBaseVelocity;	// 0x1ef0
	Vector m_vecPunchangle;	// 0x1efc
	Vector m_vecPunchangleVel;	// 0x1f08
	char m_bDrawViewmodel1f14;
	char m_pad1f15[3];
	int m_nightvision_level;	// 0x1f18
	char m_pad1f1c[0x2068 - 0x1f1c];
	int m_n2068;	// 0x2068
	char m_pad206c[0x2088 - 0x206c];
	int m_nButtons;	// 0x2088
	int m_afButtonPressed;	// 0x208c
	int m_afButtonReleased;	// 0x2090
	int m_afButtonLast;	// 0x2094
	char m_pad2098[0x20a8 - 0x2098];
	char m_fOnTarget;	// 0x20a8
	char m_szAnimExtension[32];	// 0x20a9
	char m_pad20c9[0x20d0 - 0x20c9];
	Vector m_vecAdditionalPVSOrigin;	// 0x20d0
	Vector m_vecCameraPVSOrigin;	// 0x20dc
	int m_iClientHealth;	// 0x20e8
	int m_iRespawnFrames;	// 0x20ec
	unsigned int m_afPhysicsFlags;	// 0x20f0
	char m_pad20f4[0x212c - 0x20f4];
	int m_iPlayerSound;	// 0x212c
	int m_iTargetVolume;	// 0x2130
	int m_rgItems[5];	// 0x2134
	int m_fNextSuicideTime;	// 0x2148
	int m_flTimeStepSound;	// 0x214c
	int m_flSwimTime;	// 0x2150
	int m_flDuckTime;	// 0x2154
	int m_flWallJumpTime;	// 0x2158
	int m_flSuitUpdate;	// 0x215c
	int m_rgSuitPlayList[4];	// 0x2160
	int m_iSuitPlayNext;	// 0x2170
	int m_rgiSuitNoRepeat[32];	// 0x2174
	int m_rgflSuitNoRepeatTime[32];	// 0x21f4
	int m_lastDamageAmount;	// 0x2274
	int m_tbdPrev;	// 0x2278
	int m_iStepLeft;	// 0x227c
	char m_chTextureType;	// 0x2280
	char m_pad2281[3];
	int m_idrowndmg;	// 0x2284
	int m_idrownrestored;	// 0x2288
	char m_pad228c[0x2294 - 0x228c];
	int m_bitsHUDDamage;	// 0x2294
	char m_fInitHUD;	// 0x2298
	char m_fGameHUDInitialized;	// 0x2299
	char m_fWeapon;	// 0x229a
	char m_pad229b;
	int m_fDeadTime;	// 0x229c
	char m_fNoPlayerSound;	// 0x22a0
	char m_pad22a1[3];
	int m_iUpdateTime;	// 0x22a4
	Vector m_vecAutoAim;	// 0x22a8
	int m_lastx;	// 0x22b4
	int m_lasty;	// 0x22b8
	int m_iFrags;	// 0x22bc
	int m_iDeaths;	// 0x22c0
	int m_nCustomSprayFrames;	// 0x22c4
	int m_flNextDecalTime;	// 0x22c8
	char m_szTeamName[16];	// 0x22cc
	char m_bConnected;	// 0x22dc
	char m_pad22dd[3];
	EHANDLE m_hTargetEnt;	// 0x22e0
	int m_ArmorValue;	// 0x22e4
	Vector m_DmgOrigin;	// 0x22e8
	int m_DmgTake;	// 0x22f4
	int m_DmgSave;	// 0x22f8
	int m_AirFinished;	// 0x22fc
	int m_PainFinished;	// 0x2300
	int m_iPlayerLocked;	// 0x2304
	unsigned int m_hViewModel[2];	// 0x2308
	int m_flMaxspeed;	// 0x2310
	int m_flWaterJumpTime;	// 0x2314
	char m_pad2318[0x2324 - 0x2318];
	int m_nImpulse;	// 0x2324
	int m_flStepSoundTime;	// 0x2328
	int m_flSwimSoundTime;	// 0x232c
	Vector m_vecLadderNormal;	// 0x2330
	int m_nLightLevel;	// 0x233c
	int m_flFlashTime;	// 0x2340
	int m_nDrownDmgRate;	// 0x2344
	Vector m_vForcedOrigin;	// 0x2348
	char m_bForceOrigin;	// 0x2354
	char m_pad2355[3];
	int m_flTimeBase;	// 0x2358
	char m_pad235c[0x2364 - 0x235c];
	int m_lerp_msec;	// 0x2364
	char m_pad2368[4];
	int m_frametime;	// 0x236c
	Vector m_viewangles;	// 0x2370
	int m_forwardmove;	// 0x237c
	int m_sidemove;	// 0x2380
	int m_upmove;	// 0x2384
	unsigned char m_lightlevel;	// 0x2388
	char m_pad2389[3];
	int m_buttons;	// 0x238c
	char m_pad2390[4];
	unsigned char m_impulse;	// 0x2394
	char m_pad2395[3];
	int m_weaponselect;	// 0x2398
};

// TARGET: CBasePlayer::vfunc31
void CBasePlayer::vfunc31(int pDump)
{
	CBaseEntity *pBase = (CBaseEntity *)this;
	CPlayerDumpView *p = (CPlayerDumpView *)this;
	pBase->sub_1009bc30(pDump, "s_PlayerEdict", g_107260a0);
	pBase->sub_1009b640(pDump, (int)"m_szAnimExtension", (int)p->m_szAnimExtension);
	pBase->sub_1009b980(pDump, "m_iPlayerSound", p->m_iPlayerSound);
	pBase->sub_1009b980(pDump, "m_iTargetVolume", p->m_iTargetVolume);
	pBase->sub_1009b980(pDump, "m_afButtonLast", p->m_afButtonLast);
	pBase->sub_1009b980(pDump, "m_afButtonPressed", p->m_afButtonPressed);
	pBase->sub_1009b980(pDump, "m_afButtonReleased", p->m_afButtonReleased);
	pBase->sub_1009c390(pDump, "m_rgItems", p->m_rgItems, 5);
	pBase->sub_1009bb40(pDump, (int)"m_afPhysicsFlags", p->m_afPhysicsFlags);
	pBase->sub_1009ba60(pDump, "m_fNextSuicideTime", p->m_fNextSuicideTime);
	pBase->sub_1009b8a0(pDump, (int)"m_bDrawViewmodel", p->m_bDrawViewmodel1a80);
	pBase->sub_1009ba60(pDump, "m_flTimeStepSound", p->m_flTimeStepSound);
	pBase->sub_1009ba60(pDump, "m_flSwimTime", p->m_flSwimTime);
	pBase->sub_1009ba60(pDump, "m_flDuckTime", p->m_flDuckTime);
	pBase->sub_1009ba60(pDump, "m_flWallJumpTime", p->m_flWallJumpTime);
	pBase->sub_1009ba60(pDump, "m_flSuitUpdate", p->m_flSuitUpdate);
	pBase->sub_1009c390(pDump, "m_rgSuitPlayList", p->m_rgSuitPlayList, 4);
	pBase->sub_1009b980(pDump, "m_iSuitPlayNext", p->m_iSuitPlayNext);
	pBase->sub_1009c390(pDump, "m_rgiSuitNoRepeat", p->m_rgiSuitNoRepeat, 0x20);
	pBase->sub_1009c5f0(pDump, "m_rgflSuitNoRepeatTime", p->m_rgflSuitNoRepeatTime, 0x20);
	pBase->sub_1009b980(pDump, "m_lastDamageAmount", p->m_lastDamageAmount);
	pBase->sub_1009ba60(pDump, "m_tbdPrev", p->m_tbdPrev);
	pBase->sub_1009b980(pDump, "m_iStepLeft", p->m_iStepLeft);
	pBase->sub_1009b7d0(pDump, "m_chTextureType", p->m_chTextureType);
	pBase->sub_1009b980(pDump, "m_idrowndmg", p->m_idrowndmg);
	pBase->sub_1009b980(pDump, "m_idrownrestored", p->m_idrownrestored);
	pBase->sub_1009b980(pDump, "m_bitsHUDDamage", p->m_bitsHUDDamage);
	pBase->sub_1009b8a0(pDump, (int)"m_fInitHUD", p->m_fInitHUD);
	pBase->sub_1009b8a0(pDump, (int)"m_fGameHUDInitialized", p->m_fGameHUDInitialized);
	pBase->sub_1009b8a0(pDump, (int)"m_fWeapon", p->m_fWeapon);
	pBase->sub_1009ba60(pDump, "m_fDeadTime", p->m_fDeadTime);
	pBase->sub_1009b8a0(pDump, (int)"m_fNoPlayerSound", p->m_fNoPlayerSound);
	pBase->sub_1009b980(pDump, "m_iUpdateTime", p->m_iUpdateTime);
	pBase->sub_1009b980(pDump, "m_iClientHealth", p->m_iClientHealth);
	pBase->sub_1009b980(pDump, "m_iClientBloodpool", p->m_iClientBloodpool);
	pBase->sub_1009b980(pDump, "m_iClientFaithpoints", p->m_iClientFaithpoints);
	pBase->sub_1009b980(pDump, "m_iClientFeedBloodPool", p->m_iClientFeedBloodPool);
	pBase->sub_1009b980(pDump, "m_iClientAgrDmg", p->m_iClientAgrDmg);
	pBase->sub_1009c390(pDump, "m_iClientVActiveDisciplines", p->m_iClientVActiveDisciplines, 0x11);
	pBase->sub_1009c5f0(pDump, "m_flClientBeginVActiveDisciplineTimers", p->m_flClientBeginVActiveDisciplineTimers, 0x11);
	pBase->sub_1009c5f0(pDump, "m_flClientVActiveDisciplineDurations", p->m_flClientVActiveDisciplineDurations, 0x11);
	pBase->sub_1009ba60(pDump, "m_flActiveObfuscateUpdateTimer", p->m_flActiveObfuscateUpdateTimer);
	pBase->sub_1009b980(pDump, "m_iClientFrenzyCount", p->m_iClientFrenzyCount);
	pBase->sub_1009bd10(pDump, "m_vecAutoAim", p->m_vecAutoAim);
	pBase->sub_1009b8a0(pDump, (int)"m_fOnTarget", p->m_fOnTarget);
	pBase->sub_1009b980(pDump, "m_lastx", p->m_lastx);
	pBase->sub_1009b980(pDump, "m_lasty", p->m_lasty);
	pBase->sub_1009b980(pDump, "m_iFrags", p->m_iFrags);
	pBase->sub_1009b980(pDump, "m_iDeaths", p->m_iDeaths);
	pBase->sub_1009ba60(pDump, "m_iRespawnFrames", p->m_iRespawnFrames);
	pBase->sub_1009b980(pDump, "m_nCustomSprayFrames", p->m_nCustomSprayFrames);
	pBase->sub_1009ba60(pDump, "m_flNextDecalTime", p->m_flNextDecalTime);
	pBase->sub_1009b640(pDump, (int)"m_szTeamName", (int)p->m_szTeamName);
	pBase->sub_1009b8a0(pDump, (int)"m_bConnected", p->m_bConnected);
	pBase->sub_1009c000(pDump, "m_hTargetEnt", p->m_hTargetEnt);
	pBase->sub_1009be00(pDump, "m_vecAdditionalPVSOrigin", p->m_vecAdditionalPVSOrigin);
	pBase->sub_1009be00(pDump, "m_vecCameraPVSOrigin", p->m_vecCameraPVSOrigin);
	pBase->sub_1009b980(pDump, "m_ArmorValue", p->m_ArmorValue);
	pBase->sub_1009be00(pDump, "m_DmgOrigin", p->m_DmgOrigin);
	pBase->sub_1009ba60(pDump, "m_DmgTake", p->m_DmgTake);
	pBase->sub_1009ba60(pDump, "m_DmgSave", p->m_DmgSave);
	pBase->sub_1009ba60(pDump, "m_AirFinished", p->m_AirFinished);
	pBase->sub_1009ba60(pDump, "m_PainFinished", p->m_PainFinished);
	pBase->sub_1009b640(pDump, (int)"m_Local", (int)"-v-");
	pBase->sub_1009b980(pDump, "  m_iHideHUD", p->m_iHideHUD);
	pBase->sub_1009b980(pDump, "  m_iFOV", p->m_iFOV);
	pBase->sub_1009b980(pDump, "  m_iViewmodelFOV", p->m_iViewmodelFOV);
	pBase->sub_1009be00(pDump, "  m_vecOverViewpoint", p->m_vecOverViewpoint);
	pBase->sub_1009b980(pDump, "  m_targetEntityIndex", p->m_targetEntityIndex);
	pBase->sub_1009b8a0(pDump, (int)"  m_bWolf", p->m_bWolf);
	pBase->sub_1009b8a0(pDump, (int)"  m_bDucked", p->m_bDucked);
	pBase->sub_1009b8a0(pDump, (int)"  m_bDucking", p->m_bDucking);
	pBase->sub_1009ba60(pDump, "  m_flDucktime", p->m_flDucktime);
	pBase->sub_1009b980(pDump, "  m_nStepside", p->m_nStepside);
	pBase->sub_1009ba60(pDump, "  m_flFallVelocity", p->m_flFallVelocity);
	pBase->sub_1009b980(pDump, "  m_nOldButtons", p->m_nOldButtons);
	pBase->sub_1009be00(pDump, "  m_vecClientBaseVelocity", p->m_vecClientBaseVelocity);
	pBase->sub_1009bd10(pDump, "  m_vecPunchangle", p->m_vecPunchangle);
	pBase->sub_1009bd10(pDump, "  m_vecPunchangleVel", p->m_vecPunchangleVel);
	pBase->sub_1009b8a0(pDump, (int)"  m_bDrawViewmodel", p->m_bDrawViewmodel1f14);
	pBase->sub_1009b980(pDump, "  m_nightvision_level", p->m_nightvision_level);
	pBase->sub_1009b980(pDump, "m_iPlayerLocked", p->m_iPlayerLocked);
	pBase->sub_1009c850(pDump, "m_hViewModel", p->m_hViewModel, 2);
	pBase->sub_1009bc30(pDump, "pl", (int)&p->m_n2068);
	pBase->sub_1009ba60(pDump, "m_flMaxspeed", p->m_flMaxspeed);
	pBase->sub_1009b980(pDump, "m_nDefaultTargetModel", p->m_nDefaultTargetModel);
	pBase->sub_1009b980(pDump, "m_nButtons", p->m_nButtons);
	pBase->sub_1009ba60(pDump, "m_flWaterJumpTime", p->m_flWaterJumpTime);
	pBase->sub_1009b980(pDump, "m_nImpulse", p->m_nImpulse);
	pBase->sub_1009b640(pDump, (int)"m_sTargetmodel", (int)(p->m_sTargetmodel ? p->m_sTargetmodel : g_106b8540));
	pBase->sub_1009ba60(pDump, "m_flStepSoundTime", p->m_flStepSoundTime);
	pBase->sub_1009ba60(pDump, "m_flSwimSoundTime", p->m_flSwimSoundTime);
	pBase->sub_1009be00(pDump, "m_vecLadderNormal", p->m_vecLadderNormal);
	pBase->sub_1009b980(pDump, "m_nLightLevel", p->m_nLightLevel);
	pBase->sub_1009ba60(pDump, "m_flFlashTime", p->m_flFlashTime);
	pBase->sub_1009b980(pDump, "m_nDrownDmgRate", p->m_nDrownDmgRate);
	pBase->sub_1009bc30(pDump, "m_pViewWeapon", (int)p->m_pViewWeapon.Get());
	pBase->sub_1009ba60(pDump, "m_flNextStealthUpdate", p->m_flNextStealthUpdate);
	pBase->sub_1009ba60(pDump, "m_flStealthVisionScalar", p->m_flStealthVisionScalar);
	pBase->sub_1009ba60(pDump, "m_flStealthVisionCone", p->m_flStealthVisionCone);
	pBase->sub_1009ba60(pDump, "m_flStealthHearingDist", p->m_flStealthHearingDist);
	pBase->sub_1009b980(pDump, "m_iDebugFlags", p->m_iDebugFlags);
	pBase->sub_1009b980(pDump, "m_iDebugStealthFeat", p->m_iDebugStealthFeat);
	pBase->sub_1009b980(pDump, "m_iDebugStealthLight", p->m_iDebugStealthLight);
	pBase->sub_1009b980(pDump, "m_iDebugStealthSound", p->m_iDebugStealthSound);
	pBase->sub_1009be00(pDump, "m_vForcedOrigin", p->m_vForcedOrigin);
	pBase->sub_1009b8a0(pDump, (int)"m_bForceOrigin", p->m_bForceOrigin);
	pBase->sub_1009ba60(pDump, "m_flTimeBase", p->m_flTimeBase);
	pBase->sub_1009b640(pDump, (int)"m_LastCmd", (int)"-v-");
	pBase->sub_1009ba60(pDump, "  lerp_msec", p->m_lerp_msec);
	pBase->sub_1009ba60(pDump, "  frametime", p->m_frametime);
	pBase->sub_1009bd10(pDump, "  viewangles", p->m_viewangles);
	pBase->sub_1009ba60(pDump, "  forwardmove", p->m_forwardmove);
	pBase->sub_1009ba60(pDump, "  sidemove", p->m_sidemove);
	pBase->sub_1009ba60(pDump, "  upmove", p->m_upmove);
	pBase->sub_1009b980(pDump, "  lightlevel", p->m_lightlevel);
	pBase->sub_1009b980(pDump, "  buttons", p->m_buttons);
	pBase->sub_1009b980(pDump, "  impulse", p->m_impulse);
	pBase->sub_1009b980(pDump, "  weaponselect", p->m_weaponselect);
	sub_103222c0(pDump);
}
// END FUNCTION

// FUNCTION: 0x1015ee60 size=0x7
#include "CBasePlayer.h"
char CBasePlayer::vfunc406()
{
	return *(char *)((char *)this + 0x19f6);
}
// END FUNCTION

// FUNCTION: 0x1015ee80 size=0x8
#include "CBasePlayer.h"

void CBasePlayer::vfunc407()
{
	m_b19F6 = true;
}
// END FUNCTION

// FUNCTION: 0x1015eea0 size=0x8
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc408
void CBasePlayer::vfunc408()
{
	m_b19F6 = false;
}
// END FUNCTION

// FUNCTION: 0x1015efa0 size=0xb8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CUnknown1015ef00
{
	void sub_1015ef00();
};

void __cdecl sub_101cf600(CBaseEntity *pEnt);

// TARGET: CBasePlayer::vfunc103
void CBasePlayer::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	vfunc407();
	((CUnknown1015ef00 *)this)->sub_1015ef00();
	{
		ScopeTrace trace("CBaseEntity::SetSolid", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	pEnt->vfunc93(9, 0);
	sub_101cf600(pEnt);
	pEnt->sub_100b3640(1);
	vfunc457("item_w_fists", 0);
}
// END FUNCTION

// FUNCTION: 0x1015fcd0 size=0x5d
#include "CBasePlayer.h"
void CBasePlayer::vfunc112(int unused, int nArg)
{
	if (m_n14B0 == nArg && m_n14B4 != -1) {
		if (sub_10099400(m_n14B0)) {
			if (!sub_10099430(0))
				sub_101644f0(-1, m_n14B4, 1);
			else
				sub_101644f0(-1, m_n14B0, 1);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1015fdf0 size=0xf
#include "CBasePlayer.h"

void CBasePlayer::vfunc410()
{
	*(float *)((char *)this + 0x19b0) = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x1015fe10 size=0xeb
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
#include "CEntityVSlots.h"

extern CGlobalEntityList *g_10566458;

inline CGlobalEntityList_Ent *LookupEntity(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
	if (s->m_Serial == (int)(h >> 13))
		return s->m_pEntity;
	return 0;
}

#define H1C58 (*(unsigned int *)((char *)this + 0x1c58))

void CBasePlayer::vfunc316(CGlobalEntityList_Ent *pEnt, int a, int b)
{
	if (pEnt) {
		if (LookupEntity(H1C58)) {
			if (((CEntityVSlots *)LookupEntity(H1C58))->slot158()) {
				if (LookupEntity(H1C58) != pEnt)
					return;
			}
		}
		int act = *(int *)((char *)this + 0xff0);
		if ((act == 1 || act == 5) && sub_1015fd50() == -1) {
			*(unsigned int *)((char *)this + 0x1c5c) = *pEnt->v1();
			*(unsigned int *)((char *)this + 0x1c60) = *pEnt->v1();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1015ff40 size=0xc3
#include "CBasePlayer.h"
struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct VehicleSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
	virtual bool s158();
};
struct VehicleHandle
{
	unsigned int m_Index;
	VehicleSlots *Get() const
	{
		if (m_Index != 0xffffffff) {
			HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
			if (e->serial == (m_Index >> 13))
				return (VehicleSlots *)e->ent;
		}
		return 0;
	}
};

bool CBasePlayer::sub_1015ff40()
{
	if (*((char *)this + 0x1edc))
		return true;
	if (((VehicleHandle *)((char *)this + 0x1c58))->Get() != 0) {
		if (((VehicleHandle *)((char *)this + 0x1c58))->Get()->s158())
			*(float *)((char *)this + 0x19b0) = gpGlobals->curtime;
	}
	return *(float *)((char *)this + 0x19b0) > 0.0f && *(float *)((char *)this + 0x19b0) + 5.0f > gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x101606a0 size=0x26
#include "CBasePlayer.h"

struct CTPHelper
{
	void sub_100ada20(void *p, void *a, void *b);
};

void __cdecl sub_1028d820(void *p);

// TARGET: CBasePlayer::vfunc181
void CBasePlayer::vfunc181(void *p, void *a, void *b)
{
	((CTPHelper *)this)->sub_100ada20(p, a, b);
	if (p != 0)
		sub_1028d820(p);
}
// END FUNCTION

// FUNCTION: 0x101606e0 size=0x1d6
// TARGET: CBasePlayer::vfunc320
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CBaseAnimating.h"
#include "ConVar.h"
#include "CUnknown10739d08.h"
#include "CEHandleGet.h"

extern ConVar *g_107251ac;
extern ConVar *g_1072511c;
extern CUnknown10739d08 g_10739d08;
extern void (*g_109f3630)(const char *pMsg, ...);

bool CBasePlayer::vfunc320(int a1, int activity)
{
	CBaseAnimating *pAnim = (CBaseAnimating *)(void *)this;

	if (pAnim->sub_1008dc40(vfunc376(vfunc381(activity)), -1) < 0)
		return false;

	se44();

	if (EHandle_Get(m_h1538) && m_n153C == 0)
		return false;

	sub_101644f0(activity, 0, 1);

	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
	if (pWeapon && (pWeapon->vfunc360() & 0x6000)) {
		if (sub_10335950("item_w_unarmed")) {
			if (*((char *)pWeapon + 0x898))
				pWeapon->vfunc323();
			vfunc457("item_w_unarmed", 0);
			m_b1DF4 = 1;
		} else {
			g_109f3630("Warning: Player does not have unarmed weapon!\n");
		}
	}

	float flDuration = pAnim->sub_10091080(m_n6F0);
	float flAmplitude = (g_107251ac->vfunc1() ? 0.0f : g_107251ac->m_fValue) * flDuration;

	Vector vecPunch;
	vecPunch.x = enginerandom->vfunc1(-flAmplitude, flAmplitude);
	vecPunch.y = enginerandom->vfunc1(-flAmplitude, flAmplitude);
	vecPunch.z = enginerandom->vfunc1(-flAmplitude, flAmplitude);
	vfunc169(&vecPunch);

	m_fNoAttackTimer = (g_1072511c->vfunc1() ? 0.0f : g_1072511c->m_fValue) + gpGlobals->curtime + flDuration;
	m_f1DA8 = g_10739d08.sub_101e7d70() + gpGlobals->curtime;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10160a60 size=0x104
#include "CBasePlayer.h"
#include "ConVar.h"
#include "CUnknown1070b244.h"
#include "CUnknown10739d08.h"
extern ConVar *g_107255ec;
extern ConVar *g_10725634;
extern ConVar *g_107251ac;
extern CUnknown1070b244 *g_1070b244;
extern CUnknown10739d08 g_10739d08;
char CBasePlayer::vfunc321(int unused)
{
    float flScale = g_107255ec->vfunc1() ? 0.0f : g_107255ec->m_fValue;
    if (m_f1DA8 <= gpGlobals->curtime)
    {
        flScale = g_10725634->vfunc1() ? 0.0f : g_10725634->m_fValue;
        m_f1DA8 = g_10739d08.sub_101e7d70() + gpGlobals->curtime;
    }
    float flAmount = (g_107251ac->vfunc1() ? 0.0f : g_107251ac->m_fValue) * flScale;
    Vector punch;
    punch.x = g_1070b244->vfunc1(-flAmount, flAmount);
    punch.y = g_1070b244->vfunc1(-flAmount, flAmount);
    punch.z = g_1070b244->vfunc1(-flAmount, flAmount);
    vfunc169(&punch);
    return 1;
}
// END FUNCTION

// FUNCTION: 0x10160bc0 size=0xfc
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBasePlayer.h"
#include "melee_dice_roll_result.h"
#include "CUnknown10349590.h"
#include "CUnknown103498b0.h"
#include "CVStatList_t.h"

extern float g_1046fafc;
extern float g_1046fb00;

bool CBasePlayer::vfunc318(int a, melee_dice_roll_result *pRoll, int c)
{
	if (!pRoll)
		return false;
	int nActivity = 0x52;
	float flTime = g_1046fafc;
	if (((CUnknown10349590 *)pRoll)->sub_10349590()) {
		CVStatList_t *pList = CVStatListSet::Of(this)->Find(0);
		pRoll->sub_10349710((int)this, pList->sub_10010609(2), (int *)c);
		if (((CUnknown103498b0 *)pRoll)->sub_103498b0() == 3) {
			nActivity = 0x1156;
			flTime = g_1046fb00;
		}
	}
	sub_101644f0(nActivity, -1, 1);
	*(int *)((char *)this + 0x6f4) = *(int *)((char *)this + 0x1488);
	m_f1564 = flTime + gpGlobals->curtime;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10160d00 size=0x8f
#include "melee_dice_roll_result.h"
#include "CBasePlayer.h"

struct melee_dice_roll_result_view
{
	int sub_10349830();	// stub 0x100083f0
};

extern float g_104454c4;
extern float g_1046faf4;
extern float g_1046faf8;
extern float g_1046a5e4;

struct CBasePlayerUnit : CBasePlayer
{
	bool sub_10160d00(int a, melee_dice_roll_result *pRoll, int c);
	int sub_10345f10();	// CBaseCombatCharacter stub 0x1001444d
	void sub_10324500(int a);	// stub 0x1001464b
};

#define PL_F1488(p) (*(float *)((char *)(p) + 0x1488))

bool CBasePlayerUnit::sub_10160d00(int a, melee_dice_roll_result *pRoll, int c)
{
	int nActivity = sub_10345f10();
	sub_10324500(nActivity);
	sub_101644f0(nActivity, -1, 1);
	*(int *)((char *)this + 0x6f4) = *(int *)((char *)this + 0x1488);
	float flBase = g_1046faf4;
	if (pRoll && ((melee_dice_roll_result_view *)pRoll)->sub_10349830() == 2)
		flBase = g_1046faf8;
	float flTime = (PL_F1488(this) > g_1046a5e4) ? (double)flBase / PL_F1488(this) : g_104454c4;
	m_f1564 = flTime + gpGlobals->curtime;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10160f60 size=0x1d
#include "CBasePlayer.h"

char CBasePlayer::vfunc327()
{
	if (*(float *)((char *)this + 0x1dec) > gpGlobals->curtime)
		return 0;
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10160f90 size=0x1cd
#include "CBasePlayer.h"
#include "CBaseAnimating.h"
#include "CBaseCombatWeapon.h"
#include "CUnknown10204e90.h"

struct SeqInfo331
{
	char m_pad[0x2d4];
	unsigned int m_nMask;
};

struct SeqIndex331
{
	int m_nSeq;
	bool IsValid() const
	{
		if ( m_nSeq < 0 )
			return false;
		return true;
	}
};

bool CBasePlayer::vfunc331(CBaseCombatWeapon *pWeapon, int a2, int nActivity, int *pOut)
{
	int seqs[0x800];
	int seqs2[0x800];
	int masks[0x800];

	*pOut = -1;

	if ( !((CBaseAnimating *)this)->sub_100952d0(-1) || pWeapon == 0 || !(pWeapon->vfunc360() & 0x18000) )
		return false;

	int nValue = ((CUnknown10204e90 *)((char *)pWeapon + (*pWeapon->sub_102517e0()) * 0x44 + 0x7a0))->sub_10204900(this);
	int nCount = ((CBaseAnimating *)this)->sub_1008dac0(nActivity, (char *)seqs, (char *)seqs2, nValue);

	unsigned int flags = m_nFlags2088 & 0x79a;
	int i18, i14, i10;
	i10 = i14 = i18 = -1;

	for ( int i = 0; i < nCount; i++ )
	{
		SeqInfo331 *pInfo = (SeqInfo331 *)((CBaseAnimating *)this)->sub_1008d990(seqs[i]);
		unsigned int masked = m_nFlags2088 & pInfo->m_nMask;
		masks[i] = masked;

		if ( pInfo->m_nMask == 0xffffffff )
			continue;

		if ( pInfo->m_nMask == 0 )
		{
			i10 = i;
			if ( flags == 0 )
			{
				*pOut = seqs[i];
				return true;
			}
		}
		else if ( masked != 0 )
		{
			if ( masked == flags )
			{
				*pOut = seqs[i];
				return true;
			}
			if ( masked & 0x18 )
				i18 = i;
			else if ( masked & 0x600 )
				i14 = i;
		}
	}

	if ( i18 >= 0 )
		*pOut = seqs[i18];
	else if ( i14 >= 0 )
		*pOut = seqs[i14];
	else if ( i10 >= 0 )
		*pOut = seqs[i10];

	return ((SeqIndex331 *)pOut)->IsValid();
}
// END FUNCTION

// FUNCTION: 0x10161200 size=0x12b
#include "CBasePlayer.h"
struct CSequenceDescView {
	char m_pad0000[0x2f8];
	float m_f2f8;
};

struct CBasePlayerActView {
	char m_pad0000[0x6f0];
	int m_nSequence;	// 0x6f0
	int m_n06f4;
	float m_flCycle;	// 0x6f8
	char m_pad06fc[0xff0 - 0x6fc];
	int m_nActivity;	// 0xff0
};

// TARGET: CBasePlayer::vfunc412
bool CBasePlayer::vfunc412()
{
	CBasePlayerActView *p = (CBasePlayerActView *)this;
	int act = p->m_nActivity;
	if (act == 0x1152 || act == 0x1153 || act == 0x52 || act == 0x1156) {
		if (gpGlobals->curtime < m_f1564)
			return true;
	} else if (p->m_nSequence >= 0) {
		if (p->m_flCycle >= 1.0f)
			return false;
		if (act == 0x4b) {
			CSequenceDescView *pDesc = (CSequenceDescView *)sub_1008d990(p->m_nSequence);
			if (pDesc) {
				if (p->m_flCycle < pDesc->m_f2f8)
					return true;
			}
		} else {
			if (act == 0x4c)
				return true;
			if (act == 0x4d)
				return true;
			if (act == 0x4e)
				return true;
			if (act == 0xfa4)
				return true;
		}
		if (sub_10344da0(act))
			return true;
		if (p->m_flCycle < 0.8f) {
			if (sub_10161380())
				return true;
		}
		if (act == 0x1065)
			return true;
		if (act == 0x1066)
			return true;
		return (char)(act == 0x1067);
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10161430 size=0x14
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc413
bool CBasePlayer::vfunc413()
{
	if (m_nFF0 == 0x32)
		return true;
	return vfunc412();
}
// END FUNCTION

// FUNCTION: 0x10161460 size=0x358
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CBasePlayer.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "engineserver.h"
#include "Tier1.h"
#include <stdio.h>

void sub_101434b0(int entIndex, int line, const char *text, int duration, int r, int g, int b, int a);
char *sub_1025d730(int activity);

#define PLR_INT(off) (*(int *)((char *)this + (off)))

inline int PlayerEdict(CBasePlayer *p)
{
	return *(int *)((char *)p + 0x2e0);
}

inline int PlayerEntIndex(int edict)
{
	return engine->vfunc35(edict);
}

inline int PlayerInt(CBasePlayer *p, int off)
{
	return *(int *)((char *)p + off);
}

inline float PlayerFloat(CBasePlayer *p, int off)
{
	return *(float *)((char *)p + off);
}

// TARGET: CBasePlayer::vfunc124
int CBasePlayer::vfunc124()
{
	int text_offset = sub_1033e4a0();
	char tempstr[256];

	if (PLR_INT(0xfec) != -1 && -1 != PLR_INT(0xff0) && PLR_INT(0xfec) != 0)
	{
		unsigned int iActivity = vfunc375(PLR_INT(0xfec));
		iActivity = vfunc381(iActivity);
		iActivity = vfunc376(iActivity);
		int iIdealActivity = vfunc375(PlayerInt(this, 0xff0));
		iIdealActivity = vfunc381(iIdealActivity);
		iIdealActivity = vfunc376(iIdealActivity);
		const char *pszA = sub_1025d730(PlayerInt(this, 0xfec));
		const char *pszB = sub_1025d730(PlayerInt(this, 0xff0));
		const char *pszC = sub_1025d730(PlayerInt(this, 0xff4));
		g_109f388c(tempstr, sizeof(tempstr), "Actv: %s (%s) (%s)\n", pszA, pszB, pszC);
	}
	else if (PLR_INT(0xfec) == 0)
		g_109f3890(tempstr, "Actv: RESET", sizeof(tempstr));
	else
		g_109f3890(tempstr, "Actv: INVALID", sizeof(tempstr));
	sub_101434b0(PlayerEntIndex(PlayerEdict(this)), text_offset, tempstr, 0, 255, 255, 255, 255);
	text_offset += 1;

	if (PLR_INT(0x14b0) != -1)
		sprintf(tempstr, "WpnActv: %s", sub_1025d730(PLR_INT(0x14b0)));
	else
		g_109f3890(tempstr, "WpnActv: INVALID", sizeof(tempstr));
	sub_101434b0(PlayerEntIndex(PlayerEdict(this)), text_offset, tempstr, 0, 255, 255, 255, 255);
	text_offset += 1;

	const char *pszSeq = ((CBaseAnimating *)this)->sub_1008fe80(pcd_stage(PLR_INT(0x6f0)));
	if (pszSeq)
		g_109f388c(tempstr, sizeof(tempstr), "Seq: %s (%1.3f)\n", pszSeq, PlayerFloat(this, 0x6f8));
	else
		g_109f3890(tempstr, "Seq: INVALID", sizeof(tempstr));
	sub_101434b0(PlayerEntIndex(PlayerEdict(this)), text_offset, tempstr, 0, 255, 255, 255, 255);
	text_offset = 1 + (int)text_offset;

	g_109f388c(tempstr, sizeof(tempstr), "Light: %f\n", m_f1C8C);
	sub_101434b0(PlayerEntIndex(PlayerEdict(this)), text_offset, tempstr, 0, 255, 255, 255, 255);
	text_offset = text_offset + 1;

	Vector vecOrigin = *((CEntityVSlots *)this)->slot217();
	Vector vecAngles = *(Vector *)vfunc221();
	sprintf(tempstr, "Origin %f, %f, %f   Angles %f %f %f", vecOrigin.x, vecOrigin.y, vecOrigin.z, vecAngles.x, vecAngles.y, vecAngles.z);
	sub_101434b0(PlayerEntIndex(PlayerEdict(this)), text_offset, tempstr, 0, 255, 255, 255, 255);
	text_offset = text_offset + 1;

	return text_offset;
}
// END FUNCTION

// FUNCTION: 0x10161fa0 size=0x5
#include "CBasePlayer.h"
#include "CBaseEntity.h"
// TARGET: CBasePlayer::vfunc428
// the game's 0x10161fa0: a tail call (jmp) of CBaseEntity::vfunc91
char CBasePlayer::vfunc428(void *a0, int a1)
{
	return ((CBaseEntity *)this)->CBaseEntity::vfunc91(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10161fc0 size=0x10b
#include "CBasePlayer.h"
#include "CEHandleGet.h"

extern "C++" __declspec(dllimport) void DevWarning(const char *fmt, ...);
int sub_10376d00(CBasePlayer *pPlayer);
const char *sub_101d3730(const char *psz);
void sub_101cebc0(CBasePlayer *pPlayer, int a, int b);

#define FSV(n) virtual void f##n();
#define FSV10(p) FSV(p##0) FSV(p##1) FSV(p##2) FSV(p##3) FSV(p##4) FSV(p##5) FSV(p##6) FSV(p##7) FSV(p##8) FSV(p##9)
struct CFrenzyShadowView	// the controller entity: slot 138 answers its AI type
{
	FSV10(0) FSV10(1) FSV10(2) FSV10(3) FSV10(4) FSV10(5) FSV10(6) FSV10(7) FSV10(8) FSV10(9)
	FSV10(10) FSV10(11) FSV10(12) FSV(130) FSV(131) FSV(132) FSV(133) FSV(134) FSV(135) FSV(136) FSV(137)
	virtual int vfunc138();
};

struct CFrenzyList
{
	void sub_10227a30(CBasePlayer *pPlayer, int a);
};
extern CFrenzyList g_10750cb4;

// TARGET: CBasePlayer::vfunc360
bool CBasePlayer::vfunc360()
{
	if (EHandle_Get(m_h1538) && m_n153C != -1)
	{
		DevWarning("CheckForPlayerFrenzy - Failed because player is grappling!\n");
		return false;
	}
	if (m_nUseEdictIndex1EB8)
		return false;
	if (!sub_10376d00(this))
	{
		DevWarning("CheckForPlayerFrenzy - Failed to prepare NPC enemy list!  No close NPCs.\n");
		return false;
	}
	vfunc457("item_w_fists", 0);
	CFrenzyShadowView *pShadow = (CFrenzyShadowView *)sub_10161a70("npc_VFrenzyShadow");
	if (!pShadow)
	{
		DevWarning("Failed to create frenzy controller in CheckForPlayerFrenzy!\n");
		return false;
	}
	if (pShadow->vfunc138() != 3)
		DevWarning("Non Troika Ent in CheckForPlayerFrenzy!\n");
	sub_10147a30(3);
	sub_1017e150(1, -1.0f, sub_101d3730("CheckForPlayerFrenzy"));
	sub_101cebc0(this, 0, 0);
	g_10750cb4.sub_10227a30(this, 0);
	return true;
}
// END FUNCTION

// FUNCTION: 0x10162120 size=0x60
#include "CBasePlayer.h"
struct PhysEnvView {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void vfunc20(void *p);
	virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34();
	virtual void v35(); virtual void v36(); virtual void v37();
	virtual void vfunc38(void *p);
};
extern PhysEnvView *g_10723940;
void __stdcall sub_100a6490(int);
void sub_1002ee60(void *);
// TARGET: CBasePlayer::vfunc180
void CBasePlayer::vfunc180()
{
	sub_100a6490(0);
	sub_1002ee60(this);
	if (m_pPartOwner)
		g_10723940->vfunc38(m_pPartOwner);
	if (m_pPart2104)
		g_10723940->vfunc20(m_pPart2104);
	if (m_pPart2108)
		g_10723940->vfunc20(m_pPart2108);
	sub_1000b0c8();
}
// END FUNCTION

// FUNCTION: 0x101621a0 size=0x3d
#include "CBasePlayer.h"
#include "CUnknown1070b22c.h"

extern CUnknown1070b22c *g_1070b22c;

// TARGET: CBasePlayer::vfunc430
void CBasePlayer::vfunc430(int a, int b)
{
	Vector v;
	v = vfunc193();
	g_1070b22c->vfunc101((int)&v);
}
// END FUNCTION

// FUNCTION: 0x101621f0 size=0x1
#include "CBasePlayer.h"
void CBasePlayer::vfunc448()
{
}
// END FUNCTION

// FUNCTION: 0x10162210 size=0x39
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"

// TARGET: CBasePlayer::vfunc143
int CBasePlayer::vfunc143(float flHealth, int bitsDamageType)
{
	if (m_nTakeDamage1FC != 0)
		m_flags0E98 &= ~(bitsDamageType & 0x3fff);
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc143(flHealth, bitsDamageType);
}
// END FUNCTION

// FUNCTION: 0x10162260 size=0x4d
#include "CBasePlayer.h"
struct CPlayerViewOffsetView {
	char m_pad[0x184];
	Vector m_vecViewOffset;
};
// TARGET: CBasePlayer::vfunc389
Vector CBasePlayer::vfunc389(const Vector &vecPos)
{
	return ((CPlayerViewOffsetView *)this)->m_vecViewOffset + vecPos;
}
// END FUNCTION

// FUNCTION: 0x10162340 size=0x71d
#include "CFlameCluster.h"
// TARGET: CBasePlayer::vfunc123
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "ConVar.h"
#include "DebugOverlay.h"
#include "globalvars.h"

void sub_10142af0(const Vector *pOrigin, const Vector *pMins, const Vector *pMaxs, const Vector *pDir, int r, int g, int b, int a, float flDuration);
void sub_10139610(const float *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
__declspec(dllimport) int Q_snprintf(char *pBuf, int nSize, const char *pszFormat, ...);

extern ConVar g_10725f00;

#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

// Vector::operator- with its VectorSubtract forced inline (VC6's inline budget runs out in this function)
__forceinline Vector VecSub(const Vector &a, const Vector &b)
{
	Vector res;
	res.x = a.x - b.x;
	res.y = a.y - b.y;
	res.z = a.z - b.z;
	return res;
}

struct CCopCountView
{
	int sub_1017f770();
	int sub_1017f8b0();
};

#define CVT10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CPlayerVtbl
{
public:
	CVT10(a0) CVT10(a1) CVT10(a2) CVT10(a3) CVT10(a4) CVT10(a5) CVT10(a6) CVT10(a7) CVT10(a8) CVT10(a9)
	CVT10(a10) CVT10(a11) CVT10(a12) CVT10(a13) CVT10(a14) CVT10(a15) CVT10(a16) CVT10(a17) CVT10(a18)
	virtual void a190(); virtual void a191(); virtual void a192();
	virtual Vector EyePosition();
	CVT10(b0) CVT10(b1)
	virtual void b214(); virtual void b215(); virtual void b216();
	virtual const Vector &GetAbsOrigin();
	virtual void b218();
	virtual const float *GetAbsAngles();
	CVT10(c0) CVT10(c1) CVT10(c2) CVT10(c3) CVT10(c4) CVT10(c5) CVT10(c6) CVT10(c7) CVT10(c8) CVT10(c9)
	CVT10(c10) CVT10(c11) CVT10(c12) CVT10(c13)
	virtual void c360(); virtual void c361(); virtual void c362(); virtual void c363();
	virtual void c364(); virtual void c365(); virtual void c366(); virtual void c367();
	virtual Vector BodyDirection2D();
};

void CBasePlayer::vfunc123()
{
	CPlayerVtbl *pV = (CPlayerVtbl *)this;

	if ((m_fDebugOverlays224 & 0x2000000) && m_iHealth == 1)
	{
		Vector vBodyDir = pV->BodyDirection2D();
		Vector eyePos = pV->EyePosition() + vBodyDir * 10.0f;
		Vector vUp = Vector(0, 0, 8);
		Vector vSide;
		CrossProduct(vBodyDir, vUp, vSide);
		sub_10142e90(&(eyePos + vSide + vUp), &VecSub(VecSub(eyePos, vSide), vUp), 255, 0, 0, 0, 0);
		sub_10142e90(&VecSub(eyePos + vSide, vUp), &(VecSub(eyePos, vSide) + vUp), 255, 0, 0, 0, 0);
	}

	if (g_10725f00.GetInt())
	{
		Vector forward, right, up;
		Vector mins(-5, -5, -5);
		Vector maxs(5, 5, 5);
		sub_10139610(pV->GetAbsAngles(), &forward, &right, &up);
		Vector anchor = pV->GetAbsOrigin();
		anchor += forward * 40.0f;
		anchor.z += 20.0f;
		char buf[32];

		{
			Vector textPos = anchor;
			int c = min(255, ((CCopCountView *)this)->sub_1017f770() * 100);
			sub_10142af0(&textPos, &mins, &maxs, &forward, c, 255 - c, 0, 0, 0.05f);
			Q_snprintf(buf, sizeof(buf), "%d cops", ((CCopCountView *)this)->sub_1017f770());
			sub_10143710((const float *)&(textPos - right * 2), buf, 0, 0x3d4ccccd);
		}
		{
			Vector textPos = anchor - right * 10.0f;
			int c = min(255, ((CCopCountView *)this)->sub_1017f8b0() * 140);
			sub_10142af0(&textPos, &mins, &maxs, &forward, c, 255 - c, 0, 0, 0.05f);
			Q_snprintf(buf, sizeof(buf), "%d hntr", ((CCopCountView *)this)->sub_1017f8b0());
			sub_10143710((const float *)&(textPos - right * 2), buf, 0, 0x3d4ccccd);
		}
		{
			Vector textPos = anchor + right * 10.0f;
			float t = max(0.0f, m_flHeightenedAlertExpireTimer - gpGlobals->curtime);
			int c = min(255, (int)(t * 0.75f));
			sub_10142af0(&textPos, &mins, &maxs, &forward, c, 255 - c, 0, 0, 0.05f);
			int minutes = (int)(t * (1.0f / 60.0f));
			Q_snprintf(buf, sizeof(buf), "%02d:%02d", minutes, (int)(t - minutes * 60.0f));
			sub_10143710((const float *)&(textPos - right * 2), buf, 0, 0x3d4ccccd);
		}
	}

	((CBaseEntity *)this)->CBaseEntity::vfunc123();
}
// END FUNCTION

// FUNCTION: 0x10162c30 size=0x2bc
#include "CBasePlayer.h"
#include "CVDmg_t.h"
#include "CTakeDamageInfo.h"
#include "CAI_BaseNPC.h"
#include "CGameTrace.h"
#include "engineserver.h"
#include "ConVar.h"
#include "Vector.h"

extern ConVar g_10725e28;
extern ConVar g_10725c10;
extern ConVar g_10725d30;
extern ConVar g_10725b58;
extern ConVar g_10725990;

struct CTDIScale : CTakeDamageInfo
{
	void ScaleDamage(float f) { m_flDamage *= f; }
};

inline int ENTINDEX_141(int pEdict) { return engine->vfunc35(pEdict); }

// TARGET: CBasePlayer::vfunc141
void CBasePlayer::vfunc141(CVDmg_t *pInfoArg, const Vector *pDir, CGameTrace *pTrace)
{
	if (m_nTakeDamage1FC)
	{
		CTDIScale info = *(CTDIScale *)pInfoArg;

		CAI_BaseNPC *pSub = *(CAI_BaseNPC **)((char *)info.m_pInflictor + 0x94);
		if (pSub && (pSub->vfunc513() & 0x10000000))
			return;

		if (info.m_pVDmg00->sub_101fb340(ENTINDEX_141(m_n02E0)))
			return;

		int idx = ENTINDEX_141(m_n02E0);
		float flDamage = (float)info.m_pVDmg00->sub_101fb200(idx, info.sub_101c29b0());

		m_nHitBoxSet1594 = pTrace->m_hitgroup;
		float flScale;
		switch (pTrace->m_hitgroup)
		{
		case 1:
			flDamage *= g_10725e28.GetFloat();
			flScale = g_10725e28.GetFloat();
			info.ScaleDamage(flScale);
			break;
		case 2:
			flDamage *= g_10725c10.GetFloat();
			flScale = g_10725c10.GetFloat();
			info.ScaleDamage(flScale);
			break;
		case 3:
			flDamage *= g_10725d30.GetFloat();
			flScale = g_10725d30.GetFloat();
			info.ScaleDamage(flScale);
			break;
		case 4:
		case 5:
			flDamage *= g_10725b58.GetFloat();
			flScale = g_10725b58.GetFloat();
			info.ScaleDamage(flScale);
			break;
		case 6:
		case 7:
			flDamage *= g_10725990.GetFloat();
			flScale = g_10725990.GetFloat();
			info.ScaleDamage(flScale);
			break;
		}

		CAI_BaseNPC *pView = (CAI_BaseNPC *)this;
		pView->vfunc292((CTakeDamageInfo *)&info, pDir, pTrace);
		info.sub_101c29e0(pTrace);
		sub_102699e0(*(Vector *)((char *)pTrace + 0xc), pView->vfunc145(), flDamage);
		pView->vfunc146((CVDmg_t *)info.m_pVDmg00, pDir, pTrace);
		sub_101c2d20(&info, this);
	}
}
// END FUNCTION

// FUNCTION: 0x10162fa0 size=0x55
#include "CBasePlayer.h"
void sub_102699e0(Vector vecPos, int n, float f);
void CBasePlayer::vfunc438(float flArg, int flags)
{
    if (flags & 4) {
        Vector v;
        const Vector &pos = *(const Vector *)&vfunc193();
        sub_102699e0(pos, vfunc145(), flArg);
    }
}
// END FUNCTION

// FUNCTION: 0x10163020 size=0x4ca
#include "CVDmg_t.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CGameRules.h"
#include "CTakeDamageInfo.h"
#include "CVStatList_t.h"
#include "UTIL_BloodStream.h"
#include "Vector.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
// TARGET: CBasePlayer::vfunc142

struct CPlayerUnit
{
	int sub_10174f80();
};

struct SList2
{
	void sub_10227a30(int a, int b);
};

extern SList2 g_10750cb4;

struct CBCCDamageView
{
	int sub_1032ef60(void *pInfo);
};

struct Color32
{
	unsigned char r, g, b, a;
};

void sub_101ce290(int a, int b, int c, int d, int e);

#define GETDMG(p) ((p).m_pVDmg00 ? (float)(p).m_pVDmg00->sub_101faa70() : (p).m_flDamage)

int CBasePlayer::vfunc142(const CTakeDamageInfo *pInfo)
{
	if (vfunc406())
		return 0;

	if ((pInfo->m_pAttacker && ((CBaseEntity *)pInfo->m_pAttacker)->m_p9c) ||
		(pInfo->m_pInflictor && ((CBaseEntity *)pInfo->m_pInflictor)->m_p9c))
	{
		vslot410();
	}

	CTakeDamageInfo info = *pInfo;

	if (((CBaseEntity *)this)->sub_100b3700() & 0x4000)
		return 0;

	if ((EHandle_Get(m_h1538) && m_n153C != -1 && m_n1540 == 0) ||
		(EHandle_Get(m_h1538) && m_n153C != -1 && m_n1540 == 2))
	{
		((CBaseCombatCharacter *)this)->c353();
		sub_10329560();
	}

	sub_1017c6d0();
	sub_10167fd0();

	if (m_aLastplayerAnim == 0xc && m_n14A0 > 0)
	{
		do
		{
			m_n14A0--;
			sub_10338df0(1);
			m_aLastplayerAnim = 0;
			m_bPlayerAnimCyclePlaying = false;
		} while (m_n14A0 > 0);
	}

	if (m_fDebugOverlays224 & 0x2000000)
	{
		if ((float)m_iHealth - GETDMG(info) <= 0.0f)
		{
			m_iHealth = 1;
			return 0;
		}
	}

	if ((info.m_pVDmg00 ? (info.m_pVDmg00->m_field10 | info.m_nFlags38) : info.m_nFlags38) & 0x40)
		g_1070ba0c->vfunc21();

	if (!vfunc158())
		return 0;

	if (!((CGameRules *)g_1070ba0c)->vfunc31((int)this, (int)info.m_pInflictor))
		return 0;

	m_lastDamageAmount = (int)GETDMG(info);
	info.m_flDamage = (float)(int)GETDMG(info);

	int nDamage = ((CBCCDamageView *)this)->sub_1032ef60(&info);
	if (nDamage != 0)
	{
		if (info.m_pAttacker && ((CBaseEntity *)info.m_pAttacker)->m_pEdict2e0)
		{
			Vector *pOrigin = ((CEntityVSlots *)info.m_pAttacker)->slot220();
			m_DmgOrigin = *pOrigin;
		}

		m_DmgTake += (float)(int)GETDMG(info);

		if (GETDMG(info) > 0.0f)
		{
			if (((CPlayerUnit *)this)->sub_10174f80() != 6)
			{
				if (CVStatListSet::Of(this)->Find(3)->sub_102012d0(0xd) > 0)
				{
					Color32 color;
					color.r = 0xb4;
					color.g = 0xf0;
					color.b = 0xff;
					color.a = 0x78;
					sub_101ce290((int)this, (int)&color, 0x3d4ccccd, 0x3dcccccd, 5);
				}
				else if (CVStatListSet::Of(this)->Find(3)->sub_102012d0(7) > 0)
				{
					Color32 color;
					color.r = 0xb4;
					color.g = 0xb4;
					color.b = 0xb4;
					color.a = 0x3c;
					sub_101ce290((int)this, (int)&color, 0x3e4ccccd, 0, 1);
				}
				else
				{
					Color32 color;
					color.r = 0xff;
					color.g = 0x78;
					color.b = 0x78;
					color.a = 0x78;
					sub_101ce290((int)this, (int)&color, 0x3dcccccd, 0x3e99999a, 5);
				}
			}

			if (info.m_pInflictor && (CBaseEntity *)info.m_pInflictor != (CBaseEntity *)this &&
				((CBaseEntity *)info.m_pInflictor)->m_pA8)
			{
				CBaseEntity *pInflictor = (CBaseEntity *)info.m_pInflictor;
				float flDamage = GETDMG(info);
				((CGameRules *)g_1070ba0c)->vfunc6((int)pInflictor, (int)this, *(int *)&flDamage);
			}
		}

		g_10750cb4.sub_10227a30((int)this, 4);
	}

	return nDamage;
}
// END FUNCTION

// FUNCTION: 0x10163630 size=0xd9
#include "CBasePlayer.h"
#define GV(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S1070ba0c
{
    GV(a0) GV(a1) GV(a2) GV(a3) GV(a4) GV(a5)
    virtual int vfunc60(CBasePlayer *p);
    virtual int vfunc61(CBasePlayer *p);
    virtual int vfunc62(CBasePlayer *p);
};
extern S1070ba0c *g_1070ba0c;
void CBasePlayer::vfunc441()
{
    int list[33];
    int type;
    int sub;
    type = g_1070ba0c->vfunc61(this);
    sub = g_1070ba0c->vfunc62(this);
    if (type == 9 && sub == 12) {
        vfunc442(1);
        return;
    }
    int i = 0;
    int *p = list;
    for (; i < 0xe0; i++) {
        void *w = sub_1032e8b0(i);
        if (w) {
            switch (type) {
            case 7:
                *p++ = (int)w;
                break;
            case 8:
                if (sub_1032e7b0() && w == sub_1032e7b0())
                    *p++ = (int)w;
                break;
            }
        }
    }
    if (sub != 12) {
        int j = 0;
        p = list;
        for (; j < 0x20; j++) {
            if (sub_103346c0(j) > 0 && sub == 10)
                *p++ = j;
        }
    }
    vfunc442(1);
}
// END FUNCTION

// FUNCTION: 0x10163750 size=0x97
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CPlayerWeaponView
{
	S100(a) S100(b) S100(c)
	S10(d0)
	virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23(); virtual void d24(); virtual void d25();
	virtual void vfunc316(int a);
};

extern CGlobalEntityList *g_10566458;

void CBasePlayer::vfunc442(int a)
{
	if (sub_1032e7b0()) {
		sub_10177120();
		((CPlayerWeaponView *)sub_1032e7b0())->vfunc316(0);
	}
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x10dc);
	if (*pHandle != -1) {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[*pHandle & 0x1fff];
		if (pSlot->m_Serial == (int)(*pHandle >> 13) && pSlot->m_pEntity != 0)
			*pHandle = -1;
	}
	*(unsigned int *)((char *)this + 0x10e0) = -1;
	vfunc443(0);
	sub_1032ead0();
	sub_103345d0();
	*(int *)((char *)this + 0x1c50) = 0;
	vfunc444();
}
// END FUNCTION

// FUNCTION: 0x10163820 size=0x231
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern Vector g_1070d1b0;

inline unsigned int GetDamageType(const CTakeDamageInfo &info)
{
	if (info.m_pVDmg00)
		return *(unsigned int *)((char *)info.m_pVDmg00 + 0x10) | info.m_nFlags38;
	return info.m_nFlags38;
}

inline float GetBaseDamage(const CTakeDamageInfo &info)
{
	if (info.m_pVDmg00)
		return (float)info.m_pVDmg00->sub_101faa70();
	return info.m_flDamage;
}

inline bool IsSolidFlagSet(CBaseEntity *pEnt)
{
	ScopeTrace trace("CBaseEntity::IsSolidFlagSet", pEnt->m_name26c ? pEnt->m_name26c : g_106b8540);
	return (pEnt->m_b2b4 >> 3) & 1;
}

struct CPlayerImpulse : CBasePlayer
{
	bool IsDirtyAbsVelocity() { return (m_fFlags268 >> 12) & 1; }
	const Vector &GetAbsVelocity()
	{
		if (IsDirtyAbsVelocity())
			((CBaseEntity *)(void *)this)->sub_100b1d10();
		return m_vec03BC;
	}
	void ApplyAbsVelocityImpulse(const Vector &inVecImpulse)
	{
		Vector vecResult = GetAbsVelocity() + inVecImpulse;
		((CBaseEntity *)(void *)this)->sub_100b2e30((const float *)&vecResult);
	}
};

int CBasePlayer::vfunc390(CTakeDamageInfo *pInfo)
{
	m_flags0E98 |= GetDamageType(*pInfo);

	if (!((CBaseCombatCharacter *)(void *)this)->sub_103302e0(pInfo))
		return 0;

	Vector vecDir = g_1070d1b0;
	if (pInfo->m_pAttacker) {
		vecDir = ((CEntityVSlots *)pInfo->m_pAttacker)->slot192() - Vector(0, 0, 10) - ((CEntityVSlots *)(void *)this)->slot192();
		VectorNormalize(vecDir);
	}

	if (pInfo->m_pAttacker && ((CEntityVSlots *)(void *)this)->slot94() == 3 &&
		(!pInfo->m_pInflictor || !IsSolidFlagSet((CBaseEntity *)pInfo->m_pInflictor))) {
		Vector force = vecDir * -((CBaseCombatCharacter *)(void *)this)->sub_10331770(GetBaseDamage(*pInfo));
		((CPlayerImpulse *)this)->ApplyAbsVelocityImpulse(force);
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10163af0 size=0x305
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CSingleUserRecipientFilter.h"
#include "UTIL_BloodStream.h"
#include "CUnknown1016b460.h"
extern int g_10726088;
extern int g_10726020;
struct SList2View144 { void sub_10227a30(CBasePlayer *p, int n); };
extern SList2View144 g_10750cb4;
int sub_101bb220(int);
struct CSoundEntView { void sub_101b98d0(); };
CSoundEntView *sub_101bb150(int);
struct CRulesView144 {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void vfunc5(CBaseEntity *pAttacker, CBasePlayer *pVictim);
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
	virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
	virtual void vfunc44(CBasePlayer *pVictim, const void *pInfo);
};
struct CWeaponView144 {
	CBP_V10(a) CBP_V10(b) CBP_V10(c) CBP_V10(d) CBP_V10(e) CBP_V10(f) CBP_V10(g) CBP_V10(h) CBP_V10(i) CBP_V10(j)
	CBP_V10(k) CBP_V10(l) CBP_V10(m) CBP_V10(n) CBP_V10(o) CBP_V10(p) CBP_V10(q) CBP_V10(r) CBP_V10(s) CBP_V10(t)
	CBP_V10(u) CBP_V10(w) CBP_V10(x) CBP_V10(y) CBP_V10(z) CBP_V10(za) CBP_V10(zb) CBP_V10(zc) CBP_V10(zd) CBP_V10(ze)
	CBP_V10(zg)
	CBP_V1(zf0) CBP_V1(zf1) CBP_V1(zf2) CBP_V1(zf3) CBP_V1(zf4) CBP_V1(zf5)
	virtual void vfunc316(int a);
};
struct CBP144View : CBasePlayer
{
	void sub_10003684(const void *pArg);
	int GetEdict() { return m_n02E0; }
};
void CBasePlayer::vfunc144(const void *pArg)
{
	CSingleUserRecipientFilter filter(this);
	filter.MakeReliable();
	engine->vfunc65(&filter, g_10726088);
	engine->vfunc67(1);
	engine->vfunc72(0.5f);
	engine->vfunc71(engine->vfunc35(((CBP144View *)this)->GetEdict()));
	engine->vfunc67(0);
	engine->vfunc78("vdata/Signs/death.txt");
	engine->vfunc66();
	((CRulesView144 *)g_1070ba0c)->vfunc44(this, pArg);
	CBaseEntity *pAttacker = *(CBaseEntity **)((char *)pArg + 0x2c);
	if (pAttacker && pAttacker != (CBaseEntity *)this && *(int *)((char *)pAttacker + 0xa8))
		((CRulesView144 *)g_1070ba0c)->vfunc5(pAttacker, this);
	if (m_hControllerNPC1db0.Get())
		sub_101618e0(1, 1);
	if (m_hPlaceholder1da4.Get())
		sub_10161f10();
	g_10750cb4.sub_10227a30(this, 5);
	CSoundEntView *pSnd = sub_101bb150(sub_101bb220(m_n02E0));
	if (pSnd)
		pSnd->sub_101b98d0();
	if (*(int *)((char *)this + 0x210) < -99)
		*(int *)((char *)this + 0x210) = 0;
	if (sub_1032e7b0())
		((CWeaponView144 *)sub_1032e7b0())->vfunc316(0);
	vfunc449(4, 0);
	*(int *)((char *)this + 0x200) = 1;
	m_n2068 = 1;
	((CUnknown1016b460 *)this)->sub_1016b460(0, 0, 0);
	m_n20E8 = 0;
	if (g_10726020) {
		CSingleUserRecipientFilter filter2(this);
		filter2.MakeReliable();
		engine->vfunc65(&filter2, g_10726020);
		engine->vfunc67(m_n20E8);
		engine->vfunc66();
	}
	*(EHANDLE *)&m_hUseEnt1040 = (CBaseEntity *)0;
	*(EHANDLE *)&m_n14AC = (CBaseEntity *)0;
	*(EHANDLE *)&m_h149C = (CBaseEntity *)0;
	m_b1475 = 0;
	m_b1476 = 0;
	m_f1478 = 0;
	m_b14A8 = 0;
	m_b14AA = 0;
	m_b14DC = 0;
	m_n1044 = -1;
	m_n1048 = 0;
	m_n1050 = 0;
	m_n104C = 0;
	m_n1E78 = 0;
	((CBP144View *)this)->sub_10003684(pArg);
}
// END FUNCTION

// FUNCTION: 0x10163ed0 size=0x7c
#include "CBasePlayer.h"
struct CPlayerVec { float x, y, z; };
void sub_101668b0();

void CBasePlayer::vfunc403()
{
    vfunc448();
    CPlayerVec vec = *(CPlayerVec *)vfunc221();
    vec.x = 0;
    vec.z = 0;
    vfunc64(&vec.x);
    sub_100ac4e0((void *)sub_101668b0, 0, 0);
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;
    sub_1032bdf0();
}
// END FUNCTION

// FUNCTION: 0x10164240 size=0x21c
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"

struct CEntSlot360View
{
	CBP_V100(xa0) CBP_V100(xa1) CBP_V100(xa2) CBP_V10(xb0) CBP_V10(xb1) CBP_V10(xb2) CBP_V10(xb3) CBP_V10(xb4) CBP_V10(xb5)
	virtual int vfunc360();
};

static inline CGlobalEntityList_Ent *GrappleTarget(CBasePlayer *p)
{
	CGlobalEntityList_Ent *pEnt = EHandle_Get(p->m_h1538);
	if (pEnt && p->m_n153C != -1)
		return pEnt;
	return 0;
}

void CBasePlayer::vfunc449(int a, int b)
{
	if (vfunc412())
	{
		if (m_b1DF4 && sub_10161380() && m_f6f8 >= 0.65f)
		{
			CEntSlot360View *pEnt = (CEntSlot360View *)EHandle_Get(m_hEnt0EA4);
			if (pEnt && (pEnt->vfunc360() & 0x6000))
			{
				m_b1DF4 = 0;
				vfunc456();
			}
		}
		sub_101641d0(a);
	}
	else if (!GrappleTarget(this))
	{
		vfunc417(a, b);
	}
	else if (!(EHandle_Get(m_h1538) && m_n153C == 1))
	{
		char r;
		if (EHandle_Get(m_h1538))
		{
			switch (m_n1540)
			{
			case 0:
			case 1:
				r = vslot419(a);
				break;
			case 2:
				r = vslot420(a);
				break;
			case 3:
				r = vfunc421(a);
				break;
			case 5:
				r = vfunc418(a);
				break;
			case 6:
				r = vslot422(a);
				break;
			case 8:
				r = vslot423(a);
				break;
			default:
				r = m_b65c;
				break;
			}
		}
		else
			r = m_b65c;
		if (r)
		{
			sub_10329560();
			sub_100b3580(0x40000000);
			vfunc449(a, 0);
		}
	}
	sub_10146e20(m_nFF0, a);
	sub_1017e900(m_nFEC, a);
}
// END FUNCTION

// FUNCTION: 0x101647a0 size=0x9b
#include "CBasePlayer.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern char g_105387dc[];

struct ScopeTrace {
    ScopeTrace(const char *a, const char *b) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = g_106b8540;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};

int CBasePlayer::sub_101647a0(int act)
{
    const char *name;
    if (this) {
        name = *(const char **)((char *)this + 0x26c);
        if (!name)
            name = g_106b8540;
    } else
        name = g_105387dc;
    ScopeTrace t("CBasePlayer::NPC_TranslateActivity", name);
    switch (act) {
    case 0x16:
        act = 9;
        break;
    case 0x17:
        act = 0x13;
        break;
    }
    return act;
}
// END FUNCTION

// FUNCTION: 0x10164870 size=0x888
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CNPC_VTzimisce.h"
#include "CBasePlayer.h"
#include "CDevFlagObj.h"
#include "globalvars.h"
#include <string.h>
#include <stdio.h>
#include <math.h>

// TARGET: CBasePlayer::vfunc417

extern CDevFlagObj *g_10937034;
extern const char g_106b8540[];
extern float g_104454c4;

float sub_101d2c70(const Vector &v);
float sub_1013d580(float a, float b);
float sub_1013d450(float a, float b, float c);

#define PV(n) virtual void pv##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CPlayerAnimSlots
{
	PV100(0) PV100(1) PV100(2) PV10(30) PV10(31) PV10(32) PV10(33)
	PV(340) PV(341) PV(342) PV(343) PV(344)
	virtual float SetPoseParameterByName(const char *pszName, float flValue, int a);	// 345
	virtual float SetPoseParameter(int iParam, float flValue, int a);	// 346
	PV(347) PV(348) PV(349) PV10(35)
	virtual unsigned int WeaponFlags();	// 360
	PV(361) PV(362) PV(363) PV(364) PV(365) PV(366) PV(367) PV(368) PV(369)
	PV10(37) PV10(38) PV10(39) PV10(40)
	virtual void slot410();
	virtual char slot411();
};

struct CWeaponSlots281
{
	PV100(0) PV100(1) PV10(20) PV10(21) PV10(22) PV10(23) PV10(24) PV10(25) PV10(26) PV10(27)
	PV(280)
	virtual char slot281();
};

struct CEntSlots33
{
	PV10(0) PV10(1) PV10(2) PV(30) PV(31) PV(32)
	virtual int slot33();
};

struct CBP417 : CBasePlayer
{
	char sub_1033b7c0();
	int sub_101815e0();
	void sub_103221b0(const char *msg);
	int sub_10092270(const char *name);
	float sub_10092190(int iParam);
	char sub_100b3700();
};

inline float anglemod(float a)
{
	a = (360.f / 65536) * ((int)(a * (65536.f / 360.0f)) & 65535);
	return a;
}

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

#define m_f6F4 (*(float *)((char *)this + 0x6f4))
#define m_f19EC (*(float *)((char *)this + 0x19ec))
#define m_f2458 (*(float *)((char *)this + 0x2458))
#define m_hUseEnt1040X (*(EHANDLE *)&m_hUseEnt1040)
namespace block_10164040 {
#pragma auto_inline(off)

class SDisciplineTable
{
public:
	int sub_101e12f0(const char *pszName);
};
extern SDisciplineTable g_10739a4c;

struct SPlayerPurgeView
{
	char pad0[0x65c];
	char b65c;
	char pad1[0xff0 - 0x65d];
	int nActivity;
	char pad2[0x14a0 - 0xff4];
	int nBloodPool;
	char pad3[0x1cb0 - 0x14a4];
	char b1cb0;
	char b1cb1;
	char pad4[2];
	int n1cb4;
};

struct V : CBasePlayer { void sub_10164040(int type, int *pActivity, int *pOut); };
void V::sub_10164040(int type, int *pActivity, int *pOut)
{
	SPlayerPurgeView *v = (SPlayerPurgeView *)this;
	int act;
	if (type != 0xc)
		return;
	act = v->nActivity;
	if (v->b65c) {
		if (act == 0x1065) {
			act = 0x1066;
			goto done;
		}
		if (act == 0x1066) {
			if (v->b1cb1) {
				act = 0x1067;
				goto done;
			}
			int nPool = v->nBloodPool;
			if (nPool > 0) {
				int nDrain = 2;
				if (nPool < 2)
					nDrain = 1;
				v->nBloodPool = nPool - nDrain;
				while (nDrain > 0) {
					sub_10338df0(1);
					nDrain--;
				}
			}
			if (v->nBloodPool <= 0) {
				static int s_iPurge = g_10739a4c.sub_101e12f0("Thaumaturgy_Purge");
				if (!sub_1033d2f0(s_iPurge))
					v->b1cb1 = 1;
			}
			act = 0x1066;
			goto done;
		}
		if (act == 0x1067) {
			act = 1;
			v->b1cb0 = 0;
			v->nActivity = act;
			goto done;
		}
	} else {
		if (v->n1cb4 == 0xc)
			goto setflag;
	}
	act = 0x1065;
	v->b1cb1 = 0;
	v->nActivity = act;
setflag:
	v->b1cb0 = 1;
done:
	if (pActivity)
		*pActivity = act;
	if (pOut)
		*pOut = 0;
}
#pragma auto_inline(on)
}
void CBasePlayer::vfunc417(int playerAnim, int b)
{
	CBP417 *self = (CBP417 *)this;
	CPlayerAnimSlots *slots = (CPlayerAnimSlots *)this;

	if (m_hPlaceholder1da4.Get())
	{
		sub_10329560();
		CBaseEntity *pWeapon = m_hEnt0EA8.Get();
		if (pWeapon)
		{
			vfunc388(pWeapon, 0);
		}
		else
		{
			CBaseEntity *pFists = (CBaseEntity *)sub_10335950("item_w_fists");
			if (pFists)
				vfunc388(pFists, 0);
		}
	}

	m_b1DF4 = 0;
	float speed = m_vec03D4.Length2D();
	{
		float flYaw = anglemod(vfunc219()[1]);

		if (playerAnim == 5 && sub_1032e7b0())
			slots->slot410();

		if (speed > g_104454c4)
		{
			int iMoveYaw = self->sub_10092270("move_yaw");
			float flVel = sub_101d2c70(m_vec03D4);
			float flDiff = sub_1013d580(flYaw, flVel);
			if (gpGlobals->curtime - 0.3f > *(float *)&m_f2458)
				slots->SetPoseParameter(iMoveYaw, flDiff, 0);
			else
			{
				float flCurrent = self->sub_10092190(iMoveYaw);
				float flRate = gpGlobals->frametime * 4.0f;
				flRate *= 180.0f;
				float flNew = sub_1013d450(flDiff, flCurrent, flRate);
				slots->SetPoseParameter(iMoveYaw, flNew, 0);
			}
			m_f2458 = gpGlobals->curtime;
		}

		slots->SetPoseParameterByName("aim_yaw", 0, 0);
		slots->SetPoseParameterByName("aim_pitch", m_vec206c.x < 180.0f ? m_vec206c.x : m_vec206c.x - 360.0f, 0);
	}

	int idealActivity = 1;
	int iSeq = -1;

	CBaseEntity *pActive = (CBaseEntity *)sub_1032e7b0();
	if (pActive && _strcmpi(STRINGR(*(const char **)((char *)pActive + 0x11c)), "item_w_unarmed") && slots->slot411() && !m_b1EDC)
		idealActivity = 5;

	if (speed > 5.0f)
	{
		if ((sub_100b3700() & 2) == 2)
		{
			idealActivity = 0x12;
		}
		else
		{
			float flWalk = m_flWalkForwardSpeeds[4] + 1.0f;
			if (speed > flWalk || *(float *)&m_f19EC > flWalk)
			{
				idealActivity = 0x13;
				if (sub_1032e7b0() && !slots->slot411())
					idealActivity = 0x17;
			}
			else
			{
				idealActivity = 9;
				if (sub_1032e7b0() && !slots->slot411())
					idealActivity = 0x16;
			}
		}
	}
	else
	{
		if (sub_100b3700() & 2)
			idealActivity = 0x3f;
	}

	if (playerAnim == 0xb)
	{
		idealActivity = (m_vec03D4.z < -40.0f) ? 0x34 : 0x33;
		if (m_vec03D4.z > -40.0f && m_vec03D4.z < 40.0f)
			m_f6F4 = 0;
		else
			m_f6F4 = m_flSpeedScale1488;
	}
	else if (playerAnim == 2)
	{
		switch (m_nSpeedScaleState1DB4)
		{
		case 1: idealActivity = 0x2c; break;
		case 2: idealActivity = 0x28; break;
		case 3: idealActivity = 0x29; break;
		case 4: idealActivity = 0x2a; break;
		case 5: idealActivity = 0x2d; break;
		case 6: idealActivity = 0x2e; break;
		case 7: idealActivity = 0x2f; break;
		case 8:
		case 9:
			if (idealActivity != 9 && idealActivity != 0x13 && idealActivity != 0x16 && idealActivity != 0x17)
			{
				if (sub_100b3700() & 2)
					idealActivity = 0x31;
				else
					idealActivity = 0x30;
			}
			break;
		case 10:
		case 11:
			idealActivity = 0x32;
			break;
		}
	}
	else if (playerAnim == 9)
	{
		if ((speed > 25.0f && m_n03E0 >= 3 && fabs(m_vec03D4.x) > 20.0) ||
			(speed > 75.0f && !(sub_100b3700() & 1) && fabs(m_vec03D4.x) > 20.0))
			idealActivity = 0x25;
		else
			idealActivity = 0x26;
	}
	else if (playerAnim == 5)
	{
		if (sub_1032e7b0())
		{
			if (((CPlayerAnimSlots *)sub_1032e7b0())->WeaponFlags() & 0x18000)
			{
				idealActivity = (self->sub_100b3700() & 1) ? 0x4b : 0x4c;
				iSeq = -1;
			}
			else if (((CPlayerAnimSlots *)sub_1032e7b0())->WeaponFlags() & 0x6000)
				iSeq = 0x1a;
			else if (((CWeaponSlots281 *)sub_1032e7b0())->slot281())
				iSeq = 0x1a;
		}
	}
	else if (playerAnim == 0xe)
	{
		if (sub_1032e7b0())
			iSeq = 0x56;
	}
	else if (playerAnim == 0xa)
	{
		if (m_hUseEnt1040X.Get() && ((CEntSlots33 *)m_hUseEnt1040X.Get())->slot33() != -1)
		{
			idealActivity = ((CEntSlots33 *)m_hUseEnt1040X.Get())->slot33();
			iSeq = -1;
		}
	}
	else if (playerAnim == 7)
	{
		int n = m_nFF0;
		iSeq = 0;
		if (m_b65c)
		{
			if (n == 0x131)
				idealActivity = 0x132;
			else if (n == 0x132)
			{
				if (!m_b14A8)
				{
					((CEntityVSlots *)this)->slot358();
					idealActivity = 0x133;
				}
				else
					idealActivity = 0x132;
			}
			else if (n == 0x133)
				idealActivity = 1;
			else
			{
				((CEntityVSlots *)this)->slot356();
				idealActivity = 0x131;
			}
		}
		else
		{
			if (!self->sub_1033b7c0())
			{
				((CEntityVSlots *)this)->slot356();
				idealActivity = 0x131;
			}
			else
				idealActivity = m_nFF0;
		}
	}
	else if (playerAnim == 0xc)
	{
		((block_10164040::V *)this)->sub_10164040(0xc, &idealActivity, &iSeq);
	}
	else if (playerAnim == 8)
	{
		if (!g_10937034->vfunc1() && g_10937034->m_n2c)
		{
			char szBuf[256];
			sprintf(szBuf, "%s SetNormalAnimation %s", sub_100ab4f0(), (self->sub_101815e0() & 2) ? "Grapple Release" : "Seductive Release");
			self->sub_103221b0(szBuf);
		}
		iSeq = 0;
		if (self->sub_101815e0() & 2)
			idealActivity = 0xfa3;
		else if (self->sub_101815e0() & 4)
			idealActivity = 0xfc9;
	}
	else if (playerAnim == 0xd)
	{
		idealActivity = 0x1154;
		Vector vec = m_vec03D4;
		vec.x = 0;
		vec.y = 0;
		sub_100b2e30(&vec);
	}

	if ((idealActivity == 5 || idealActivity == 1) && m_nFF0 == 0x4b && !m_b65c)
		return;

	sub_101815b0(6);
	sub_101644f0(idealActivity, iSeq, b);
	m_aLastplayerAnim = playerAnim;
}
// END FUNCTION

// FUNCTION: 0x10165330 size=0x145
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

struct SPlayerStepView
{
	char pad0[0x65c];
	bool b65c;
	char pad1[0xff0 - 0x65d];
	int nActivity;
	char pad2[0x1475 - 0xff4];
	bool b1475;
	char pad3[2];
	int n1478;
	char pad4[0x149c - 0x147c];
	unsigned int h149c;
	char pad5[0x14a8 - 0x14a0];
	bool b14a8;
	char pad6[0x1b6c - 0x14a9];
	bool b1b6c;
};

char CBasePlayer::vfunc422(int unused)
{
	SPlayerStepView *v = (SPlayerStepView *)this;
	sub_101644f0(-1, 0, 0);
	CEntityVSlots *pTarget;
	if (m_n153C != -1)
		pTarget = (CEntityVSlots *)EHandle_Get(m_h1538);
	else
		pTarget = 0;
	int act = v->nActivity;
	if (pTarget == 0 || !pTarget->slot158()) {
		v->b14a8 = false;
		v->b1475 = false;
		v->n1478 = 0;
	}
	if (v->b65c) {
		v->b1b6c = false;
		int newAct;
		switch (act) {
		case 0x1027:
			newAct = v->b14a8 ? 0x1030 : 0x1039;
			break;
		case 0x1030:
			if (!EHandle_Get(v->h149c)) {
				if (pTarget)
					v->h149c = *((CGlobalEntityList_Ent *)pTarget)->v1();
				else
					v->h149c = 0xffffffff;
			}
			if (v->b14a8) {
				if (sub_103395f0())
					return 0;
			}
			newAct = 0x1039;
			break;
		default:
			return 1;
		}
		sub_1032a100(newAct);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101654e0 size=0x93
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CActivityArg	// a one dword activity wrapper with an inline constructor
{
	int m_nActivity;
	CActivityArg(int n) { m_nActivity = n; }
};

struct CPlayerActView	// the player's slot-style SetActivity member taking the wrapper
{
	void sub_1032a100(CActivityArg act);
};

inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
	if (pSlot->m_Serial != (int)(h >> 13))
		return 0;
	return pSlot->m_pEntity;
}

char CBasePlayer::vfunc418(int unused)
{
	char *p = (char *)this;
	sub_101644f0(-1, 0, 0);
	int nActivity = *(int *)(p + 0xff0);
	if (nActivity == 0xf49)
	{
		if (!LookupEntity(*(unsigned int *)(p + 0xfe8)))
		{
			((CPlayerActView *)this)->sub_1032a100(CActivityArg(0xf52));
			return 0;
		}
	}
	if (*(char *)(p + 0x65c))
	{
		if (nActivity == 0xf40)
		{
			((CPlayerActView *)this)->sub_1032a100(CActivityArg(0xf49));
			return 0;
		}
		if (nActivity == 0xf52)
			return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101655b0 size=0x171
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

#define F14a8 (*(char *)((char *)this + 0x14a8))
#define S426 (((CEntityVSlots *)this)->slot426())
char CBasePlayer::vfunc419(int unused)
{
	sub_101644f0(-1, 0, 0);
	CGlobalEntityList_Ent *pTarget = (m_n153C != -1) ? EHandle_Get(m_h1538) : 0;
	int nActivity = *(int *)((char *)this + 0xff0);
	if (!pTarget || !((CEntityVSlots *)pTarget)->slot158()) {
		*(char *)((char *)this + 0x14a8) = 0;
		*(char *)((char *)this + 0x1475) = 0;
		*(int *)((char *)this + 0x1478) = 0;
	}
	if (*(char *)((char *)this + 0x65c)) {
		int nNew;
		*(char *)((char *)this + 0x1b6c) = 0;
		switch (nActivity) {
		case 0xf5b:
			if (F14a8) goto run;
			nNew = S426 ? 0xf9a : 0xf91;
			break;
		case 0xf64:
			if (F14a8) goto run;
			nNew = S426 ? 0xf9a : 0xf91;
			break;
		case 0xf76:
		case 0xf7f:
			if (F14a8 && sub_103395f0()) {
				nNew = 0xf7f;
				*(char *)((char *)this + 0x1b6c) = 1;
			} else {
				nNew = S426 ? 0xf9a : 0xf88;
			}
			break;
		default:
			if (1) return 1;
run:
			nNew = 0xf76;
			break;
		}
		if (nNew != nActivity)
			sub_1032a100(nNew);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10165a00 size=0x47
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
// TARGET: CBasePlayer::vfunc426
void CBasePlayer::vfunc426()
{
	CBaseEntity *p = 0;
	if (m_n153C != -1)
		p = (CBaseEntity *)EHandle_Get(m_h1538);
	else
		p = 0;
	sub_10165790(p);
}
// END FUNCTION

// FUNCTION: 0x10165a70 size=0x47
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
void CBasePlayer::vfunc427()
{
	sub_10165790(m_n153C != -1 ? (CBaseEntity *)EHandle_Get(m_h1538) : 0);
}
// END FUNCTION

// FUNCTION: 0x10165ae0 size=0x220
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

inline void *operator new(unsigned int, void *p) { return p; }
extern "C" int __cdecl atexit(void (__cdecl *)(void));
void __cdecl sub_10012a8a();
extern unsigned char g_109f0b2a;
extern CVStatList_t g_109f0b40;

inline CVStatList_t *GetActiveList(CBaseCombatCharacter *pChar)
{
	for (int i = 0; i < pChar->m_nStatLists; i++) {
		if (pChar->m_pStatLists[i]->m_field10 == 0)
			return pChar->m_pStatLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		new (&g_109f0b40) CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}

#define F14a8 (*(char *)((char *)this + 0x14a8))
char CBasePlayer::vfunc420(int unused)
{
	sub_101644f0(-1, 0, 0);
	CGlobalEntityList_Ent *pTarget = (m_n153C != -1) ? EHandle_Get(m_h1538) : 0;
	int nActivity = *(int *)((char *)this + 0xff0);
	if (!pTarget || !((CEntityVSlots *)pTarget)->slot158()) {
		*(char *)((char *)this + 0x14a8) = 0;
		*(char *)((char *)this + 0x1475) = 0;
		*(int *)((char *)this + 0x1478) = 0;
	}
	if (*(char *)((char *)this + 0x65c)) {
		int nNew;
		switch (nActivity) {
		case 0xfa5:
			if (F14a8) goto run;
			nNew = GetActiveList((CBaseCombatCharacter *)pTarget)->sub_10010609(0xc) <= 0 ? 0xfb7 : 0xfc0;
			break;
		case 0xfae:
			if (F14a8 && sub_103395f0()) goto run;
			nNew = GetActiveList((CBaseCombatCharacter *)pTarget)->sub_10010609(0xc) <= 0 ? 0xfb7 : 0xfc0;
			break;
		case 0xfb7:
		case 0xfc0:
			return 1;
		default:
			if (1) return 1;
run:
			nNew = 0xfae;
			break;
		}
		if (nNew != nActivity)
			sub_1032a100(nNew);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10165d90 size=0x13d
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CVDmg_t.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

#define CS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CS100(p) CS10(p##0) CS10(p##1) CS10(p##2) CS10(p##3) CS10(p##4) CS10(p##5) CS10(p##6) CS10(p##7) CS10(p##8) CS10(p##9)

struct CDamageInfoLocal
{
	char m_data[0x4c];
	void sub_101c26d0(CBasePlayer *pInflictor, CBasePlayer *pAttacker, float flDamage, int bitsDamageType, int forceCustom, CVDmg_t *pDmg, int a);	// stub 0x10009656
};

// The stat holder's virtual table up to slot 403: slots 144 and 403 are used.
struct CStatHolderSlots
{
	CS100(a) CS10(b0) CS10(b1) CS10(b2) CS10(b3)
	virtual void b40(); virtual void b41(); virtual void b42(); virtual void b43();
	virtual void vfunc144(CDamageInfoLocal *pInfo);
	CS100(c) CS100(d) CS10(e0) CS10(e1) CS10(e2) CS10(e3) CS10(e4)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7();
	virtual void vfunc403();
};

struct CStatHolderHandle
{
	unsigned int m_Index;
	CBaseCombatCharacter *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *e = &g_10566458->m_Slots[m_Index & 0x1fff];
		return e->m_Serial == (m_Index >> 13) ? (CBaseCombatCharacter *)e->m_pEntity : 0;
	}
};

// TARGET: CBasePlayer::vfunc421
char CBasePlayer::vfunc421(int unused)
{
    if (*(char *)((char *)this + 0x65c)) {
        if (m_n153C != -1) {
            CBaseCombatCharacter *pChar = ((CStatHolderHandle *)&m_h1538)->Get();
            if (pChar) {
                CVDmg_t dmg;
                dmg.sub_101fa960((CVDmgSource_t *)this);
                dmg.m_field04 = 1;
                dmg.m_field0c = 1;
                CDamageInfoLocal info;
                info.sub_101c26d0(this, this, 1.0f, 0, 0, &dmg, -1);
                pChar->GetActiveStatList()->sub_10200a70(0xf, 0x11);
                ((CStatHolderSlots *)pChar)->vfunc144(&info);
                ((CStatHolderSlots *)pChar)->vfunc403();
                dmg.sub_101fa680();
            }
        }
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10165f20 size=0x190
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

struct SPlayerStepView423
{
	char pad0[0x65c];
	bool b65c;
	char pad1[0xff0 - 0x65d];
	int nActivity;
	char pad2[0x1475 - 0xff4];
	bool b1475;
	char pad3[2];
	int n1478;
	char pad5[0x14a8 - 0x147c];
	bool b14a8;
	char pad6[0x1b6c - 0x14a9];
	bool b1b6c;
};

#define F14a8 (*(char *)((char *)this + 0x14a8))
#define S427 (((CEntityVSlots *)this)->slot427())
char CBasePlayer::vfunc423(int unused)
{
	sub_101644f0(-1, 0, 0);
	CGlobalEntityList_Ent *pTarget = (m_n153C != -1) ? EHandle_Get(m_h1538) : 0;
	int nActivity = *(int *)((char *)this + 0xff0);
	if (!pTarget || !((CEntityVSlots *)pTarget)->slot158()) {
		*(char *)((char *)this + 0x14a8) = 0;
		*(char *)((char *)this + 0x1475) = 0;
		*(int *)((char *)this + 0x1478) = 0;
	}
	if (*(char *)((char *)this + 0x65c)) {
		int nNew;
		*(char *)((char *)this + 0x1b6c) = 0;
		switch (nActivity) {
		case 0xfca:
			if (F14a8) goto run;
			nNew = S427 ? 0x1009 : 0x1000;
			break;
		case 0xfd3:
			if (F14a8) goto run;
			nNew = S427 ? 0x1009 : 0x1000;
			break;
		case 0xfdc:
		case 0xfe5:
			if (F14a8 && sub_103395f0()) {
				nNew = 0xfe5;
				*(char *)((char *)this + 0x1b6c) = 1;
			} else {
				nNew = S427 ? 0x1009 : 0xff7;
			}
			break;
		case 0xff7:
		case 0x1000:
		case 0x1009:
			return 1;
		default:
			if (1) return 1;
run:
			nNew = 0xfdc;
			break;
		}
		if (nNew != nActivity)
			sub_1032a100(nNew);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10168320 size=0x30d
#include "CNPC_VTzimisce.h"
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "CDevFlagObj.h"
#include "CEHandleGet.h"

extern CDevFlagObj *g_10937034;
const char *sub_101d3730(const char *fmt, const char *s);
extern "C" int sprintf(char *, const char *, ...);
extern "C" __declspec(dllimport) void Msg(const char *pMsg, ...);
void sub_101cebc0(CBasePlayer *p, int a, int b);
void sub_10342740();

struct CFoundView10341c30
{
	char m_pad0000[0x9c];
	CBaseEntity *m_p9c;
};

#define CC ((CBaseCombatCharacter *)this)
#define VS ((CEntityVSlots *)this)

char CBasePlayer::vfunc424(char bFlag)
{
	char buf[256];
	if (EHandle_Get(m_h1538) && m_n153C != -1)
		return 0;

	CBaseEntity *pVictim = LookForGrappleVictim();
	if (pVictim)
	{
		if (!g_10937034->vfunc1() && g_10937034->m_n2c)
		{
			sprintf(buf, "%s Replenish found victim %s", sub_100ab4f0(), pVictim->sub_100ab4f0());
			CC->sub_103221b0(buf);
			Msg("Attempting Feed...\n");
		}
		CEntityVSlots *pController = (CEntityVSlots *)EHandle_Get(m_hControllerNPC1db0);
		if ((pController && pController->slot138() == 3 && (char)((CEntityVSlots *)pVictim)->slot342((int)this)) || AttemptFeed(pVictim))
		{
			int nType = 0;
			if (((CEntityVSlots *)pVictim)->slot138() == 0xd)
				nType = 6;
			if (sub_10328df0(pVictim, nType))
			{
				if (sub_1032e7b0())
					((CBaseEntity *)sub_1032e7b0())->vfunc66();
				m_b14A8 = 1;
				m_b1475 = bFlag;
				m_f1478 = 0;
				return 1;
			}
			if (!g_10937034->vfunc1() && g_10937034->m_n2c)
				CC->sub_103221b0(sub_101d3730("%s StartGrappleAttack failed", sub_100ab4f0()));
		}
		else if (!g_10937034->vfunc1() && g_10937034->m_n2c)
			CC->sub_103221b0(sub_101d3730("%s AttemptFeed failed", sub_100ab4f0()));
	}

	if (!g_10937034->vfunc1() && g_10937034->m_n2c)
		CC->sub_103221b0(sub_101d3730("%s Replenish failed", sub_100ab4f0()));

	CEntityVSlots *pController = (CEntityVSlots *)EHandle_Get(m_hControllerNPC1db0);
	if (!pController || pController->slot138() != 3)
	{
		int nActivity = VS->slot376(VS->slot381(VS->slot375(0xfa4)));
		int nSequence = ((CBaseAnimating *)this)->sub_1008dc40(nActivity, -1);
		if (nSequence >= 0)
		{
			VS->slot311(0xfa4, nActivity, nSequence);
			if (pVictim)
			{
				pVictim->vfunc22((int)this);
				((CBaseEntity *)this)->vfunc25((int)pVictim);
			}
		}
	}
	if (!pVictim)
	{
		CFoundView10341c30 *pFound = (CFoundView10341c30 *)sub_10341c30((void *)sub_10342740, 110.0f, 0.7f, 1, 0.0f, 0x46004003);
		if (!pFound || !(pVictim = pFound->m_p9c))
			goto done;
	}
	sub_1017e150(2, 2.0f, sub_101d3730("Replenish %s", pVictim->sub_100ab4f0()));
done:
	sub_101cebc0(this, 0x49, 0);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10168700 size=0x19e
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"
#include "CUnknown10739d08.h"

extern "C" int __cdecl sprintf(char *, const char *, ...);
extern "C" __declspec(dllimport) void Msg(const char *pszFormat, ...);
char *sub_101d3730(const char *pszFormat, ...);

struct CDevFlagObj
{
	virtual void v0();
	virtual char vfunc1();
	char m_pad0004[0x28];
	int m_n2c;
};
extern CDevFlagObj *g_10937034;

struct CUnknown101e8bb0 { float sub_101e8bb0(); };
struct CUnknown101e8b50 { float sub_101e8b50(); };
extern CUnknown101e8bb0 g_10739d08;

char CBasePlayer::vfunc425(CBaseEntity *pTarget)
{
	char szBuf[256];
	if (EHandle_Get(m_h1538) && m_n153C != -1)
		return 0;
	if (pTarget) {
		if (!g_10937034->vfunc1() && g_10937034->m_n2c) {
			sprintf(szBuf, "%s BeFedOnByZombie found victim %s", ((CBaseCombatCharacter *)this)->sub_100ab4f0(), pTarget->sub_100ab4f0());
			((CBaseCombatCharacter *)this)->sub_103221b0(szBuf);
			Msg("Attempting Feed...\n");
		}
		if (sub_10328df0(pTarget, 8)) {
			if (sub_1032e7b0())
				((CEntityVSlots *)sub_1032e7b0())->slot66();
			m_b14A8 = 1;
			m_b1475 = 1;
			m_f1478 = g_10739d08.sub_101e8bb0() + gpGlobals->curtime;
			m_f147C = ((CUnknown101e8b50 *)&g_10739d08)->sub_101e8b50() + gpGlobals->curtime;
			goto done;
		}
		if (!g_10937034->vfunc1() && g_10937034->m_n2c)
			((CBaseCombatCharacter *)this)->sub_103221b0(sub_101d3730("%s StartGrappleAttack failed", ((CBaseCombatCharacter *)this)->sub_100ab4f0()));
	}
	if (!g_10937034->vfunc1() && g_10937034->m_n2c)
		((CBaseCombatCharacter *)this)->sub_103221b0(sub_101d3730("%s BeFedOnByZombie failed", ((CBaseCombatCharacter *)this)->sub_100ab4f0()));
	return 0;
done:
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10168910 size=0x3f2
#include "CBasePlayer.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CDevFlagObj.h"
#include "Tier1.h"
#include "CVStatList_t.h"
#include "CVFeat_t.h"
#include "CUnknown101d8a70.h"
#include "CVDmg_t.h"
#include "CBaseCombatCharacter.h"
#include <stdio.h>
extern CDevFlagObj *g_10937034;
extern CDevFlagObj *g_1074f04c;
void sub_101cebc0(CBasePlayer *, int, int);
__declspec(dllimport) void DevMsg(const char *pMsg, ...);

struct CFeedVictimView
{
	CBP_V1(a0) virtual unsigned int *vfunc1();
	CBP_V100(b0) CBP_V100(b1) CBP_V10(b2) CBP_V10(b3) CBP_V10(b4) CBP_V10(b5) CBP_V10(b6) CBP_V10(b7) CBP_V10(b8) CBP_V10(b9) CBP_V10(bb) CBP_V1(c0) CBP_V1(c1)
	virtual char vfunc294(CBasePlayer *p);
	CBP_V10(d0) CBP_V10(d1) CBP_V10(d2) CBP_V10(d3) CBP_V1(e0) CBP_V1(e1) CBP_V1(e2) CBP_V1(e3) CBP_V1(e4) CBP_V1(e5) CBP_V1(e6)
	virtual char vfunc342(CBasePlayer *p);
	int m_pad[0x3fc];
};

inline int FeedSuccesses(CUnknown101d8a70 &r)
{
	int n = r.m_n04 - r.m_n0c;
	if (n <= 0)
		return 0;
	return n;
}

inline int FeedBrawl(void *pOwner)
{
	return CVFeatSet::Find(9)->sub_101e56e0(pOwner);
}

char CBasePlayer::AttemptFeed(CBaseEntity *pTarget)
{
	char szMsg[256];
	if (!g_10937034->vfunc1() && g_10937034->m_n2c) {
		sprintf(szMsg, "%s AttemptFeed on %s", ((CBaseEntity *)this)->sub_1000b5cd(), pTarget->sub_1000b5cd());
		((CBaseCombatCharacter *)this)->sub_103221b0(szMsg);
	}
	m_hMeleeOpponent = pTarget;
	m_hEnt1C60 = pTarget;
	if (!pTarget)
		return 0;
	CFeedVictimView *pVictim = (CFeedVictimView *)pTarget;
	if (!pVictim->vfunc342(this))
		return 0;
	CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xc);
	CVStatListSet::Of(this)->Find(0)->sub_10200b10(0xc);
	int act = pVictim->m_pad[0xff0 / 4 - 1];
	if (act != 0x104e && act != 0x1068 && act != 0x1069 && act != 0x1098) {
		if (((CBaseCombatCharacter *)pTarget)->sub_10339930()) {
			int nBrawl = FeedBrawl(*(void **)((char *)this + 0x9c));
			if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
				DevMsg("Feed attempt!  Attacker's brawl is %d.  Rolling defender's hacking (hacking is used for NPC feed resistance)\n", nBrawl);
			CVDmgBlock16_t block(4, 2);
			CUnknown101d8a70 roll;
			roll.sub_101d8820((int)pVictim, 0, &block, 6);
			int tmp;
			roll.sub_101d8a70(&tmp);
			if (nBrawl <= FeedSuccesses(roll)) {
				if (!pVictim->vfunc294(this)) {
					sub_101cebc0(this, 0x49, 0);
					if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
						DevMsg("Feed failed!  With brawl = %d and hacking-successes = %d\n", nBrawl, FeedSuccesses(roll));
					return 0;
				}
				if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
					DevMsg("Target is Stealth Killable, even though we failed our brawl vs. hacking roll we succeed.");
				return 1;
			}
			if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
				DevMsg("Feed succeeded!  With brawl = %d and hacking-successes = %d\n", nBrawl, FeedSuccesses(roll));
			return 1;
		}
		if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
			DevMsg("Feed succeeded without a roll, since target is not in a state to resist feeding\n");
		return 1;
	}
	if (!g_1074f04c->vfunc1() && g_1074f04c->m_n2c)
		DevMsg("Feed attempt!  Success is automatic because defender is mesmerized, disoriented, lost or cowering\n");
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10168e10 size=0x32
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

bool CBasePlayer::sub_10168e10()
{
	unsigned int h = *(unsigned int *)((char *)this + 0xfe8);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13) && info->m_pEntity)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x101690b0 size=0x42a
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
#include "CBasePlayer.h"
#include "ScopeTrace.h"
#include "CEHandleGet.h"
#include "CUtlVector4.h"
#include "CLogicAuto.h"
#include "utlrbtree.h"
#include "CUnknown10739d08.h"
#include "CUnknown101c26d0.h"
#include "CEntityVSlots.h"
#include "ehandle.h"
#include "utlvector.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CDevFlagObj.h"
#include "CUnknown10738960.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "AITrace.h"
#include "DebugOverlay.h"
#include "UTIL_Trace.h"
#include <math.h>
#include "ConVar.h"

namespace block_101690b0 {
struct CEntView9c { char pad[0x9c]; CBaseEntity *m_p9c; };
struct CFinderView { CBaseEntity *sub_10341c30(void *cb, float a, float cs, char c, float d, int mask); };
}

extern ConVar g_10937030;
extern ConVar g_10725040;
extern ConVar g_10725ae0;
extern ConVar g_10725a00;
extern float g_1044eb08;
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);
void sub_10139b90(float *angles, float *matrix);
void sub_101381b0(const float *in, const float *matrix, float *out);
void sub_10143b70(const float *a, const float *b, const float *c, int d, int e, int f, int g, float h);
void sub_10168e60();
void sub_10144790(const Vector &a, const Vector &b, float c, float d, int e, int f, int g, int h, float i);
using namespace block_101690b0;
// TARGET: CBasePlayer::LookForGrappleVictim
CBaseEntity *CBasePlayer::LookForGrappleVictim()
{
	if (((CFoo1005f190 *)&g_10937030)->sub_1005f190())
		Msg("CBasePlayer::LookForGrappleVictim.....");
	CBaseEntity *pVictim = 0;
	CBasePlayer *pSelf = this;
	CEntView9c *pCtl = (CEntView9c *)m_hControllerNPC1db0.Get();
	if (pCtl && pCtl->m_p9c)
		pSelf = (CBasePlayer *)pCtl->m_p9c;
	Vector eye = pSelf->vfunc193();
	Vector off;
	Vector end;
	{
		off.x = 32.0f;
		off.y = 0.0f;
		off.z = -32.0f;
		float matrix[12];
		sub_10139b90(pSelf->vfunc219(), matrix);
		sub_101381b0(&off.x, matrix, &end.x);
		VectorAdd(end, eye, end);
		Vector hull[2];
		hull[1].Init(8.0f, 8.0f, 8.0f);
		hull[0].Init(-8.0f, -8.0f, -8.0f);
		CGameTrace tr;
		UTIL_TraceHull_DebugCall(eye, end, hull[0], hull[1], 0x201400b, this, 0, &tr, 1, 0);
		if (tr.m_fraction < 1.0f && tr.m_pEnt)
			pVictim = ((CEntView9c *)tr.m_pEnt)->m_p9c;
	}
	if (g_10937030.GetBool()) {
		Vector box[2];
		box[0].Init(2.0f, 2.0f, 2.0f);
		box[1].Init(-2.0f, -2.0f, -2.0f);
		sub_10143b70(&eye.x, &box[1].x, &box[0].x, 0, 0xff, 0xff, 1, 5.0f);
		box[0].Init(2.0f, 2.0f, 2.0f);
		box[1].Init(-2.0f, -2.0f, -2.0f);
		sub_10143b70(&end.x, &box[1].x, &box[0].x, 0xff, 0, 0xff, 1, 5.0f);
		if (pVictim) {
			Msg("succeeded! (%s)\n", ((CBasePlayer *)pVictim)->sub_100ab4f0());
			sub_10142e90(&eye, &end, 0, 0xff, 0, 1, 5.0f);
		} else {
			Msg("failed.  =( \n");
			sub_10142e90(&eye, &end, 0xff, 0, 0, 1, 5.0f);
		}
	}
	if (!pVictim) {
		float flFov = g_10725040.GetFloat();
		double dHalf = flFov * 0.5;
		float flCos = cos(dHalf * g_1044eb08);
		float flDist = g_10725ae0.GetFloat();
		CBaseEntity *pFound = ((CFinderView *)this)->sub_10341c30((void *)sub_10168e60, flDist, flCos, 0, 0, 0x600400b);
		if (g_10725a00.GetBool()) {
			flDist = g_10725ae0.GetFloat();
			float flHalf = g_10725040.GetFloat();
			sub_10144790(vfunc193(), vfunc369(), flHalf * 0.5f, flDist, 0, 0x80, 0x80, 0x80, 5.0f);
		}
		return pFound;
	}
	return pVictim;
}
// END FUNCTION

// FUNCTION: 0x101695f0 size=0x46
#include "CBasePlayer.h"
char CBasePlayer::vfunc379(int a, int b, int c, int d, int e, int f, int g)
{
	if (sub_10329760(a, b, c, d, e, f, g)) {
		sub_10181580(1);
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10169660 size=0x177
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CStatDefault3List.h"
#include "ehandle.h"
void sub_101cebc0(CBasePlayer *p, int a, int b);
extern CStatDefault3List g_10738d10;
struct CBP380View : CBasePlayer { int sub_1033c9c0(); };

void CBasePlayer::vfunc380()
{
	CBaseCombatCharacter *target = (m_n153C != -1) ? (CBaseCombatCharacter *)((EHANDLE &)m_h1538).Get() : 0;
	const EHandleEntInfo *volatile pInfo;
	if (m_h1538 != 0xffffffff)
		pInfo = &EHandleDetail::g_10566458->m_EntPtrArray[m_h1538 & 0x1fff];
	sub_10329a70();
	sub_101815b0(1);
	m_b1B6C = 0;
	sub_1017cef0(0);
	if (target) {
		((CEntityVSlots *)this)->slot306((int)target, 0);
		if (m_n14A0 > 0) {
			if (sub_10339cd0() && !target->sub_10339b50()) {
				if (g_10738d10.sub_101d5f10(target)->m_8c[6] && enginerandom->vfunc2(0, 100) < 0x32) {
					sub_101cebc0(this, 0x4a, 0);
					if (m_n14A0 > 0)
						vfunc449(0xc, 1);
				}
			} else if (target->sub_10339c10()) {
				sub_101cebc0(this, 0x11, 0);
				if (m_n14A0 > 0)
					vfunc449(0xc, 1);
			} else if (((CBP380View *)this)->sub_1033c9c0() & 0x10000) {
				if (((CEntityVSlots *)target)->slot138() == 0xd)
					sub_101cebc0(this, 0x35, 0);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10169960 size=0x56e
#include "CBaseEntity.h"
#include "CLogicAuto.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CUnknown10739d08.h"
#include "CUnknown101c26d0.h"
#include "CEntityVSlots.h"
#include "ehandle.h"
#include "utlvector.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CDevFlagObj.h"
#include "CUnknown10738960.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "AITrace.h"
#include "DebugOverlay.h"
#include "UTIL_Trace.h"
#include <math.h>
#include "ConVar.h"

struct CFireEmitter484 { char m_pad[0x484]; int m_n484; };
struct CUnknown100fbac0 { void sub_100fbac0(float a, float b); };
struct CScareRec { float m_flTime; EHANDLE m_hEnt; int m_n8; int m_nValue; };
extern CUnknown10739d08 g_10739d08;
extern ConVar g_10725160;
extern ConVar g_10725848;
extern float g_104454c4;
const char *sub_101d3730(const char *fmt, ...);
struct C10739d08V_10169960 : CUnknown10739d08
{
	float sub_101e8bd0();
	float sub_101e8b70();
	int sub_101e8b90();
};
#define G39D08 ((C10739d08V_10169960 *)&g_10739d08)

struct CBPView_10169960 : CBasePlayer
{
	float &F1498() { return *(float *)((char *)this + 0x1498); }
	unsigned int *HList0FF8() { return (unsigned int *)((char *)this + 0xff8); }
	EHANDLE &H1D64() { return *(EHANDLE *)((char *)this + 0x1d64); }
	void sub_1017e980();
	void sub_1017f600();
	void sub_10169960();
	CBaseEntity *GrappleTarget();
};


namespace block_10169960 {
struct CEntView9c { char pad[0x9c]; CBaseEntity *m_p9c; };
struct CFinderView { CBaseEntity *sub_10341c30(void *cb, float a, float cs, char c, float d, int mask); };
}

extern ConVar g_10937030;
extern ConVar g_10725040;
extern ConVar g_10725ae0;
extern ConVar g_10725a00;
extern float g_1044eb08;
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);
void sub_10139b90(float *angles, float *matrix);
void sub_101381b0(const float *in, const float *matrix, float *out);
void sub_10143b70(const float *a, const float *b, const float *c, int d, int e, int f, int g, float h);
void sub_10168e60();
void sub_10144790(const Vector &a, const Vector &b, float c, float d, int e, int f, int g, int h, float i);
namespace block_10169960 {
struct GVPlayer : CBasePlayer
{
	CBaseEntity *sub_101690b0();
};
CBaseEntity *GVPlayer::sub_101690b0()
{
	if (((CFoo1005f190 *)&g_10937030)->sub_1005f190())
		Msg("CBasePlayer::LookForGrappleVictim.....");
	CBaseEntity *pVictim = 0;
	CBasePlayer *pSelf = this;
	CEntView9c *pCtl = (CEntView9c *)m_hControllerNPC1db0.Get();
	if (pCtl && pCtl->m_p9c)
		pSelf = (CBasePlayer *)pCtl->m_p9c;
	Vector eye = pSelf->vfunc193();
	Vector off;
	Vector end;
	{
		off.x = 32.0f;
		off.y = 0.0f;
		off.z = -32.0f;
		float matrix[12];
		sub_10139b90(pSelf->vfunc219(), matrix);
		sub_101381b0(&off.x, matrix, &end.x);
		VectorAdd(end, eye, end);
		Vector hull[2];
		hull[1].Init(8.0f, 8.0f, 8.0f);
		hull[0].Init(-8.0f, -8.0f, -8.0f);
		CGameTrace tr;
		UTIL_TraceHull_DebugCall(eye, end, hull[0], hull[1], 0x201400b, this, 0, &tr, 1, 0);
		if (tr.m_fraction < 1.0f && tr.m_pEnt)
			pVictim = ((CEntView9c *)tr.m_pEnt)->m_p9c;
	}
	if (g_10937030.GetBool()) {
		Vector box[2];
		box[0].Init(2.0f, 2.0f, 2.0f);
		box[1].Init(-2.0f, -2.0f, -2.0f);
		sub_10143b70(&eye.x, &box[1].x, &box[0].x, 0, 0xff, 0xff, 1, 5.0f);
		box[0].Init(2.0f, 2.0f, 2.0f);
		box[1].Init(-2.0f, -2.0f, -2.0f);
		sub_10143b70(&end.x, &box[1].x, &box[0].x, 0xff, 0, 0xff, 1, 5.0f);
		if (pVictim) {
			Msg("succeeded! (%s)\n", ((CBasePlayer *)pVictim)->sub_100ab4f0());
			sub_10142e90(&eye, &end, 0, 0xff, 0, 1, 5.0f);
		} else {
			Msg("failed.  =( \n");
			sub_10142e90(&eye, &end, 0xff, 0, 0, 1, 5.0f);
		}
	}
	if (!pVictim) {
		float flFov = g_10725040.GetFloat();
		double dHalf = flFov * 0.5;
		float flCos = cos(dHalf * g_1044eb08);
		float flDist = g_10725ae0.GetFloat();
		CBaseEntity *pFound = ((CFinderView *)this)->sub_10341c30((void *)sub_10168e60, flDist, flCos, 0, 0, 0x600400b);
		if (g_10725a00.GetBool()) {
			flDist = g_10725ae0.GetFloat();
			float flHalf = g_10725040.GetFloat();
			sub_10144790(vfunc193(), vfunc369(), flHalf * 0.5f, flDist, 0, 0x80, 0x80, 0x80, 5.0f);
		}
		return pFound;
	}
	return pVictim;
}
}
#define HGET(x) ((CBaseEntity *)(void *)((const CBaseHandle *)(x))->Get())

#define SCARE (*(CUtlVector<CScareRec> *)((char *)this + 0x1d90))

static inline CBaseEntity *ToNPC10169960(CBaseEntity *p) { return !p ? 0 : (CBaseEntity *)p->m_pNPC98; }
static inline bool IsNPC10169960(CBaseEntity *p) { return p->m_pNPC98 != 0; }
inline CBaseEntity *CBPView_10169960::GrappleTarget() { return m_n153C != -1 ? HGET(&m_h1538) : 0; }
static inline bool Expired10169960(const CScareRec &r) { return g_10725848.GetFloat() + r.m_flTime < gpGlobals->curtime; }
void CBPView_10169960::sub_10169960()
{
	EngineGlobals::CGlobalVars *pGlobals = gpGlobals;
	if (m_b1475 || pGlobals->curtime - F1498() < 1.0) {
		if (HGET(&m_h1538) && m_n153C != -1 && m_n1540 == 8) {
			if (m_n208C & 0x400f9b) {
				m_f1478 -= G39D08->sub_101e8bd0();
				pGlobals = gpGlobals;
			}
			if (pGlobals->curtime >= m_f1478) {
				m_b14A8 = 0;
				m_b1475 = 0;
				m_f1478 = 0;
				sub_10175400(0);
				sf31();
			} else if (pGlobals->curtime >= m_f147C) {
				m_f147C += (G39D08->sub_101e8b70());
				CBaseEntity *pB = GrappleTarget();
				CBaseEntity *pA = GrappleTarget();
				CUnknown101c26d0 info;
				info.sub_101c26d0(pA, pB, (float)G39D08->sub_101e8b90(), 0x10000000, 0, 0, -1);
				((CBaseEntity *)this)->sub_100a1250(&info);
			}
		}
	} else if (m_b14A8 && (m_n208C & 0x400f9b)) {
		m_b14A8 = 0;
		sf31();
	}
	sub_10181780();
	sub_10181be0();
	sub_1017e980();
	sub_1017ec40();
	sub_1017f600();
	float f = 0.0f;
	for (int i = 0; i < 18; i++) {
		if (HGET(&HList0FF8()[i]) && ((CFireEmitter484 *)HGET(&HList0FF8()[i]))->m_n484)
			f += 1.0f;
	}
	if (f > g_104454c4) {
		CBaseEntity *e = sub_10163f70();
		if (e) {
			((CUnknown100fbac0 *)e)->sub_100fbac0(f * 0.055555556f > 1.0 ? 1.0 : (f * 0.055555556f < 0.5 ? 0.5 : f * 0.055555556f), 0);
		}
	} else {
		unsigned int *p = (unsigned int *)&H1D64();
		if (HGET(p) && ((CFireEmitter484 *)HGET(p))->m_n484) {
			((CUnknown100fbac0 *)HGET(p))->sub_100fbac0(0, 0.5f);
			H1D64().Get()->sub_100fbbb0(0.6f);
		}
	}
	int cnt = SCARE.Count();
	if (cnt != 0) {
		int limit = g_10725160.GetInt();
		if (cnt > limit) {
			int best = 0;
			for (int i = 0; i < cnt; i++) {
				if (SCARE[i].m_flTime > SCARE[best].m_flTime) {
					best = i;
				}
			}
			CBaseEntity *pEnt = SCARE[best].m_hEnt.Get();
			const char *name;
			if (pEnt && IsNPC10169960(pEnt)) {
				CBaseEntity *p2 = SCARE[best].m_hEnt.Get();
				name = ToNPC10169960(p2)->sub_100ab4f0();
			} else
				name = "UNKNOWN";
			sub_1017df50(SCARE[best].m_nValue, -1.0f, sub_101d3730("SupernaturalScare %s", name));
			CBaseEntity *p3 = SCARE[best].m_hEnt.Get();
			CBaseEntity *pOther = ToNPC10169960(p3);
			sub_1017f4a0(SCARE[best].m_nValue, pOther, ((CEntityVSlots *)this)->slot217());
			SCARE.Purge();
		} else {
			int i = 0;
			while (i < SCARE.Count()) {
				if (Expired10169960(SCARE[i]))
					SCARE.Remove(i);
				else
					i++;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1016a640 size=0x1
// TARGET: sub_1016a640
void __fastcall sub_1016a640(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1016a870 size=0xf1
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "TestBit.h"


void CBasePlayer::vfunc434()
{
    if (!(sub_100b3700() & 4) && m_n03E0 < 2 && (m_b208C & 2)) {
        if (sub_100b3700() & 1) {
            if (vfunc209()) {
                vfunc449(2, 0);
                m_f148C = gpGlobals->curtime;
                CBaseEntity *pEnt = vfunc209();
                if (pEnt) {
                    if (pEnt->sub_100b3700() & 0x1000) {
                        if (TestBit(m_fFlags268, 12))
                            sub_100b1d10();
                        Vector vecVelocity = m_vec03BC + m_vec03B0;
                        ((CBaseEntity *)this)->sub_100b2e30(&vecVelocity.x);
                    }
                }
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1016a9b0 size=0x1f
#include "CBasePlayer.h"

void CBasePlayer::vfunc435()
{
	if ((m_nFlags2088 & 4) && m_nFEC != 0x2c)
		vfunc449(1, 0);
}
// END FUNCTION

// FUNCTION: 0x1016a9e0 size=0x6
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc138
int CBasePlayer::vfunc138()
{
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1016aa00 size=0x31
// TARGET: sub_1016aa00
struct CPlayerAccum_1016aa00 {
    char pad[0x22bc];
    int m_n22bc;
    void sub_1016aa00(int a, char b);
};

void CPlayerAccum_1016aa00::sub_1016aa00(int a, char b)
{
    if (a < 0 && !b) {
        int v = m_n22bc;
        if (v < 0) {
            return;
        }
        if (-a > v) {
            a = -v;
        }
    }
    m_n22bc += a;
}
// END FUNCTION

// FUNCTION: 0x1016aa50 size=0x7a
#include "CBaseEntity.h"
#include "CBasePlayer.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SPlayerSlots {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13)
	SV(140) SV(141) SV(142) SV(143) SV(144) SV(145) SV(146) SV(147)
	virtual void v148(int a, int b);
};

struct SRules {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5)
	SV(60) SV(61) SV(62) SV(63)
	virtual int v64(CBasePlayer *pPlayer, SPlayerSlots *pOther);
};


extern SRules *g_1070ba0c;
SPlayerSlots *sub_1000ac8b(int index);

void CBasePlayer::vfunc149(int a, int b)
{
	int edict = m_n02E0;
	int me = engine->vfunc35(edict);
	for (int i = 1; i <= gpGlobals->maxClients; i++) {
		SPlayerSlots *pOther = sub_1000ac8b(i);
		if (pOther && i != me && g_1070ba0c->v64(this, pOther) == 1)
			pOther->v148(a, b);
	}
}
// END FUNCTION

// FUNCTION: 0x1016aaf0 size=0x357
#include "vampire_all.h"
// TARGET: CBasePlayer::vfunc461
struct CSumElem_1016af30;
class CUnk10181650
{
public:
	bool sub_10181650(unsigned int flags);
};
class CMoveHelperServer;
CMoveHelperServer *sub_1013ecd0();
float sub_1016af30(int nCount, CSumElem_1016af30 *pElems);
extern CGlobalEntityList g_106eb5d8;
struct CPlayerListNode
{
	int m_n0;
	CPlayerListNode *m_pNext;
	int m_n8;
	CBasePlayer *m_pPlayer;
};
extern CPlayerListNode *g_10939fdc;

inline int Floor2Int(float a)
{
	int CtrlwdHolder;
	int CtrlwdSetter;
	int RetVal;
	__asm {
		fld a
		fnstcw CtrlwdHolder
		movzx eax, CtrlwdHolder
		and eax, 0xFFFFF3FF
		or eax, 0x0400
		mov CtrlwdSetter, eax
		fldcw CtrlwdSetter
		fistp RetVal
		fldcw CtrlwdHolder
	}
	return RetVal;
}

void CBasePlayer::vfunc461(CUserCmd *pCmds, int numcmds, int totalcmds, int dropped_packets, char paused)
{
	int nDelta = totalcmds - numcmds;
	if (paused)
	{
		m_n22C = -1;
		for (int i = 0; i < numcmds; i++)
		{
			pCmds[i].frametime = 0;
			pCmds[i].forwardmove = 0;
			pCmds[i].sidemove = 0;
			pCmds[i].upmove = 0;
			pCmds[i].buttons = 0;
			pCmds[i].viewangles = m_vec206c;
		}
		dropped_packets = 0;
	}
	else
	{
		if (m_n207C == 0 && !((CUnk10181650 *)this)->sub_10181650(8))
			m_vec206c = pCmds[0].viewangles;
	}
	float flCurtime = gpGlobals->curtime;
	float flFrametime = gpGlobals->frametime;
	int nRun = nDelta;
	if (dropped_packets < nRun)
		nRun = dropped_packets;
	float flSum = sub_1016af30(numcmds + nRun, (CSumElem_1016af30 *)pCmds);
	float flClock = Floor2Int((gpGlobals->frametime + gpGlobals->curtime) * 1000.0f + 0.5f) * 0.001f;
	float flTotal = flSum + m_f2358;
	if (flClock + 0.1f < flTotal)
	{
		m_n2084 = 0;
		m_f2358 = flClock - flSum;
	}
	else if (flClock - 0.1f > flTotal)
	{
		m_n2084 = 0;
		m_f2358 = flClock - flSum;
	}
	else
	{
		m_n2084 = (int)((flClock - flTotal) * 1000.0f);
		m_n2084 = m_n2084 > 1000 ? 1000 : (m_n2084 < -1000 ? -1000 : m_n2084);
	}
	if (&m_Cmd235c != pCmds)
		m_Cmd235c = pCmds[0];
	float flSaved = m_f2358;
	if (m_Cmd235c.m_b44 && g_10939fdc)
	{
		for (CPlayerListNode *pNode = g_10939fdc; pNode; pNode = pNode->m_pNext)
			pNode->m_pPlayer = this;
	}
	if (dropped_packets < 0x18)
	{
		if (dropped_packets > nDelta)
		{
			int nCount = dropped_packets - nDelta;
			dropped_packets -= nCount;
			do
			{
				vfunc462(&m_Cmd235c, sub_1013ecd0());
				m_f2358 = flSaved;
			} while (--nCount);
		}
		if (dropped_packets > 0)
		{
			CUserCmd *pCmd = &pCmds[numcmds + dropped_packets - 1];
			for (int i = dropped_packets; i > 0; --i)
			{
				vfunc462(pCmd, sub_1013ecd0());
				--pCmd;
			}
		}
	}
	for (int i = numcmds - 1; i >= 0; i--)
		vfunc462(&pCmds[i], sub_1013ecd0());
	if (g_10939fdc)
	{
		for (CPlayerListNode *pNode = g_10939fdc; pNode; pNode = pNode->m_pNext)
			pNode->m_pPlayer = 0;
	}
	g_106eb5d8.sub_100f6ce0();
	gpGlobals->curtime = flCurtime;
	gpGlobals->frametime = flFrametime;
}
// END FUNCTION

// FUNCTION: 0x1016af80 size=0xcb
#include "CBasePlayer.h"

struct PlayerCmdView_t {
	char pad0[0x10];
	int n10;
	Vector vecAngles;
	int n20;
	int n24;
	int n28;
	unsigned char nByte2c;
	char pad2d[3];
	int n30;
	char pad34[4];
	char b38;
};

struct PlayerView_t {
	char pad0[0x2128];
	char b2128;
	char pad2129[0x233c - 0x2129];
	int n233c;
	char pad2340[0x2358 - 0x2340];
	float f2358;
};

void sub_10356430(CBasePlayer *pPlayer, void *pCmd, void *pHelper);

void CBasePlayer::sub_1016af80(void *pCmd, void *pHelper)
{
	PlayerView_t *pView = (PlayerView_t *)this;
	PlayerCmdView_t *cmd = (PlayerCmdView_t *)pCmd;
	pView->b2128 = 0;
	pView->n233c = cmd->nByte2c;
	if (sub_100b3700() & 0x20) {
		cmd->n10 = 0;
		cmd->n20 = 0;
		cmd->n24 = 0;
		cmd->n28 = 0;
		cmd->n30 = 0;
		cmd->b38 = 0;
		cmd->vecAngles = m_vec206c;
	}
	if (sub_10160ec0()) {
		cmd->n20 = 0;
		cmd->n24 = 0;
	}
	sub_10356430(this, pCmd, pHelper);
	float flValue = pView->f2358 * 1000.0f + 0.5f;
	int nRounded;
	int cwOld;
	int cwNew;
	__asm {
		fld flValue
		fnstcw word ptr cwOld
		movzx eax, byte ptr cwOld
		and eax, 0xfffff3ff
		or eax, 0x400
		mov cwNew, eax
		fldcw word ptr cwNew
		fistp nRounded
		fldcw word ptr cwOld
	}
	pView->f2358 = (float)nRounded * 0.001f;
}
// END FUNCTION

// FUNCTION: 0x1016b130 size=0xff
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "TestBit.h"

struct S_Plr436
{
	char pad0[0x200];
	int m_n200;
	char pad1[0x268 - 0x204];
	unsigned int m_flags268;
	char pad2[0x3c4 - 0x26c];
	float m_f3c4;
	char pad3[0x3e0 - 0x3c8];
	int m_n3e0;
	char pad4[0x1ee8 - 0x3e4];
	float m_f1ee8;
	char pad5[0x2088 - 0x1eec];
	unsigned int m_fl2088;
	unsigned int m_fl208c;
	char pad6[0x2304 - 0x2090];
	int m_n2304;
};

extern char g_1070ba2c;

void CBasePlayer::vfunc436()
{
	S_Plr436 *p = (S_Plr436 *)this;
	if (g_1070ba2c == 0 && p->m_n2304 == 0) {
		sub_10174c10();
		sub_10166120();
		sub_10176520(0.087155745f);
		vfunc444();
		sub_1016b270();
		sub_1016b440();
		if (p->m_n3e0 == 2)
			sub_10166500();
		else if (p->m_n3e0 == 0)
			((CBaseEntity *)this)->sub_100b3640(4);
		if (p->m_n200 < 1) {
			if (p->m_fl2088 & 0x40000)
				si24();
			if (p->m_fl2088 & 2)
				si25();
			if (p->m_fl208c & 4) {
				if (sub_100b3700() & 2)
					((CBaseEntity *)this)->sub_100b3640(2);
				else
					((CBaseEntity *)this)->sub_100b3580(2);
			}
			if (!(sub_100b3700() & 1)) {
				if (TestBit(p->m_flags268, 12))
					((CBaseEntity *)this)->sub_100b1d10();
				p->m_f1ee8 = -p->m_f3c4;
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1016ba60 size=0xbf
#include "CBasePlayer.h"
#include "CBaseEntity.h"

extern "C" int __cdecl sprintf(char *, const char *, ...);
extern "C" int __cdecl _strcmpi(const char *, const char *);

struct CPlayerBaseView
{
    void sub_103409a0(const char *pszName);
};

void CBasePlayer::vfunc105(const char *pszName)
{
    char *p = (char *)this;
    if ((*(int *)(p + 0x168) == 0x1e || *(char *)(p + 0x1edc) != 0)
        && _strcmpi(pszName, "models/character/monster/Animalism_Beastform/Animalism_Beastform.mdl") != 0) {
        const char *pSlash = pszName;
        while (*pSlash) {
            if (*pSlash == '/') {
                pSlash++;
                break;
            }
            pSlash++;
        }
        if (*pSlash == 0)
            return;
        sprintf(p + 0x23d4, "models/%s", pSlash);
        return;
    }
    ((CPlayerBaseView *)this)->sub_103409a0(pszName);
    float maxs[3] = { 16.0f, 16.0f, 72.0f };
    float mins[3] = { -16.0f, -16.0f, 0.0f };
    ((CBaseEntity *)this)->sub_1009edc0(mins, maxs);
}
// END FUNCTION

// FUNCTION: 0x1016be10 size=0x952
#include "CAI_BaseNPC.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CItemGKeyring.h"
#include "CKeyringUnit.h"
#include "CVStatList_t.h"
#include "CEHandleGet.h"
#include "Vector.h"
#include "QAngle.h"

struct CGlobalVars_t
{
	char m_pad0000[0xc];
	float curtime;
};
extern CGlobalVars_t *g_1070b228;
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl rand();
extern "C" int __cdecl atexit(void (__cdecl *)(void));
extern char *(__cdecl *g_109f386c)(const char *pStr, const char *pSub);
char *sub_101d3730(const char *fmt, ...);
void __cdecl sub_10012a8a();
extern CVStatList_t g_109f0b40;
struct CPTTune_1016be10 { int sub_101e8e80(); int sub_101e8ea0(); };
extern CPTTune_1016be10 g_10739d08;
extern bool g_1070ba2c;
extern Vector g_1070d1b0;
struct CPTRules_1016be10 { virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void vfunc21(); };
extern CPTRules_1016be10 *g_1070ba0c;
struct CPTDev_1016be10 { virtual void s0(); virtual void vfunc1(); };
extern CPTDev_1016be10 *g_10924a6c;
struct CPTWhisper_1016be10 { void sub_101f6530(CBasePlayer *p, const char *psz); };
extern CPTWhisper_1016be10 g_1073dbfc;
struct CPTNPC_1016be10 { void sub_10269a20(int c); };
struct CPTBlk30 { int a[0x30]; };
struct CPTBlk15 { int a[0x15]; };
struct CPTV_1016be10
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(); virtual void s16(); virtual void s17(); virtual void s18(); virtual void s19(); virtual void s20(); virtual void s21(); virtual void s22(); virtual void s23();
	virtual void s24(); virtual void s25(); virtual void s26(); virtual void s27(); virtual void s28(); virtual void s29(); virtual void s30(); virtual void s31(); virtual void s32(); virtual void s33(); virtual void s34(); virtual void s35();
	virtual void s36(); virtual void s37(); virtual void s38(); virtual void s39(); virtual void s40(); virtual void s41(); virtual void s42(); virtual void s43(); virtual void s44(); virtual void s45(); virtual void s46(); virtual void s47();
	virtual void s48(); virtual void s49(); virtual void s50(); virtual void s51(); virtual void s52(); virtual void s53(); virtual void s54(); virtual void s55(); virtual void s56(); virtual void s57(); virtual void s58(); virtual void s59();
	virtual void s60(); virtual void s61();
	virtual void vfunc62(const Vector *v);
	virtual void s63();
	virtual void vfunc64(const QAngle *a);
	virtual void s65(); virtual void s66(); virtual void s67(); virtual void s68(); virtual void s69(); virtual void s70(); virtual void s71(); virtual void s72(); virtual void s73(); virtual void s74(); virtual void s75(); virtual void s76();
	virtual void s77(); virtual void s78(); virtual void s79(); virtual void s80(); virtual void s81(); virtual void s82(); virtual void s83(); virtual void s84(); virtual void s85(); virtual void s86(); virtual void s87(); virtual void s88();
	virtual void s89(); virtual void s90(); virtual void s91(); virtual void s92(); virtual void s93(); virtual void s94(); virtual void s95(); virtual void s96(); virtual void s97(); virtual void s98(); virtual void s99(); virtual void s100();
	virtual void s101(); virtual void s102(); virtual void s103(); virtual void s104();
	virtual void vfunc105(const char *psz);
	virtual void s106(); virtual void s107(); virtual void s108(); virtual void s109(); virtual void s110(); virtual void s111(); virtual void s112(); virtual void s113(); virtual void s114(); virtual void s115(); virtual void s116(); virtual void s117();
	virtual void s118(); virtual void s119(); virtual void s120(); virtual void s121(); virtual void s122(); virtual void s123(); virtual void s124(); virtual void s125(); virtual void s126(); virtual void s127(); virtual void s128(); virtual void s129();
	virtual void s130(); virtual void s131(); virtual void s132(); virtual void s133(); virtual void s134(); virtual void s135(); virtual void s136(); virtual void s137();
	virtual int vfunc138();
	virtual void s139(); virtual void s140(); virtual void s141(); virtual void s142(); virtual void s143(); virtual void s144(); virtual void s145(); virtual void s146(); virtual void s147(); virtual void s148(); virtual void s149(); virtual void s150();
	virtual void s151(); virtual void s152(); virtual void s153(); virtual void s154(); virtual void s155(); virtual void s156(); virtual void s157();
	virtual bool vfunc158();
	virtual void s159(); virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163(); virtual void s164(); virtual void s165(); virtual void s166(); virtual void s167(); virtual void s168(); virtual void s169(); virtual void s170();
	virtual void s171(); virtual void s172(); virtual void s173(); virtual void s174(); virtual void s175(); virtual void s176(); virtual void s177(); virtual void s178(); virtual void s179(); virtual void s180(); virtual void s181(); virtual void s182();
	virtual void s183(); virtual void s184(); virtual void s185(); virtual void s186(); virtual void s187(); virtual void s188(); virtual void s189(); virtual void s190(); virtual void s191(); virtual void s192(); virtual void s193(); virtual void s194();
	virtual void s195(); virtual void s196(); virtual void s197(); virtual void s198(); virtual void s199(); virtual void s200(); virtual void s201(); virtual void s202(); virtual void s203(); virtual void s204(); virtual void s205(); virtual void s206();
	virtual void s207(); virtual void s208();
	virtual CPTV_1016be10 *vfunc209();
	virtual void s210(); virtual void s211(); virtual void s212(); virtual void s213(); virtual void s214(); virtual void s215();
	virtual void vfunc216(const Vector *v);
	virtual const Vector *vfunc217();
	virtual void vfunc218(const QAngle *a);
	virtual const QAngle *vfunc219();
	virtual void s220();
	virtual const QAngle *vfunc221();
	virtual void s222(); virtual void s223(); virtual void s224(); virtual void s225(); virtual void s226(); virtual void s227(); virtual void s228(); virtual void s229(); virtual void s230(); virtual void s231(); virtual void s232(); virtual void s233();
	virtual void s234(); virtual void s235(); virtual void s236(); virtual void s237(); virtual void s238(); virtual void s239(); virtual void s240(); virtual void s241(); virtual void s242(); virtual void s243(); virtual void s244(); virtual void s245();
	virtual void s246(); virtual void s247(); virtual void s248(); virtual void s249();
	virtual float vfunc250(int a);
	virtual void s251(); virtual void s252(); virtual void s253(); virtual void s254(); virtual void s255(); virtual void s256(); virtual void s257();
	virtual void vfunc258(float f, CBasePlayer *p);
	virtual void s259(); virtual void s260(); virtual void s261(); virtual void s262(); virtual void s263(); virtual void s264(); virtual void s265(); virtual void s266(); virtual void s267(); virtual void s268(); virtual void s269(); virtual void s270();
	virtual void s271(); virtual void s272(); virtual void s273(); virtual void s274(); virtual void s275(); virtual void s276();
	virtual void vfunc277(void *p);
	virtual void *vfunc278();
	virtual void s279(); virtual void s280(); virtual void s281(); virtual void s282(); virtual void s283(); virtual void s284(); virtual void s285(); virtual void s286(); virtual void s287(); virtual void s288(); virtual void s289(); virtual void s290();
	virtual void s291(); virtual void s292(); virtual void s293(); virtual void s294(); virtual void s295(); virtual void s296(); virtual void s297(); virtual void s298(); virtual void s299(); virtual void s300(); virtual void s301(); virtual void s302();
	virtual void s303(); virtual void s304(); virtual void s305(); virtual void s306(); virtual void s307(); virtual void s308(); virtual void s309();
	virtual void vfunc310(int a);
	virtual void vfunc311(int a, int b, int c);
	virtual void vfunc312(float f);
	virtual void s313(); virtual void s314(); virtual void s315(); virtual void s316(); virtual void s317(); virtual void s318(); virtual void s319(); virtual void s320(); virtual void s321(); virtual void s322(); virtual void s323(); virtual void s324();
	virtual void s325(); virtual void s326(); virtual void s327(); virtual void s328(); virtual void s329(); virtual void s330(); virtual void s331(); virtual void s332(); virtual void s333(); virtual void s334(); virtual void s335(); virtual void s336();
	virtual void s337(); virtual void s338(); virtual void s339(); virtual void s340(); virtual void s341(); virtual void s342(); virtual void s343(); virtual void s344(); virtual void s345(); virtual void s346(); virtual void s347(); virtual void s348();
	virtual void s349(); virtual void s350(); virtual void s351();
	virtual void vfunc352();
	virtual void s353(); virtual void s354(); virtual void s355(); virtual void s356();
	virtual void vfunc357();
	virtual void s358(); virtual void s359(); virtual void s360();
	virtual bool vfunc361();
	virtual void s362(); virtual void s363(); virtual void s364(); virtual void s365(); virtual void s366(); virtual void s367(); virtual void s368(); virtual void s369(); virtual void s370(); virtual void s371(); virtual void s372(); virtual void s373();
	virtual void s374(); virtual void s375(); virtual void s376(); virtual void s377(); virtual void s378(); virtual void s379(); virtual void s380(); virtual void s381(); virtual void s382(); virtual void s383(); virtual void s384(); virtual void s385();
	virtual void s386(); virtual void s387(); virtual void s388(); virtual void s389(); virtual void s390(); virtual void s391(); virtual void s392(); virtual void s393(); virtual void s394(); virtual void s395(); virtual void s396(); virtual void s397();
	virtual void s398(); virtual void s399(); virtual void s400(); virtual void s401(); virtual void s402(); virtual void s403(); virtual void s404(); virtual void s405();
	virtual bool vfunc406();
	virtual void s407(); virtual void s408(); virtual void s409(); virtual void s410(); virtual void s411();
	virtual bool vfunc412();
	virtual void s413(); virtual void s414(); virtual void s415(); virtual void s416(); virtual void s417(); virtual void s418(); virtual void s419(); virtual void s420(); virtual void s421(); virtual void s422(); virtual void s423();
	virtual bool vfunc424(int a);
	virtual void s425(); virtual void s426(); virtual void s427(); virtual void s428(); virtual void s429(); virtual void s430(); virtual void s431(); virtual void s432(); virtual void s433(); virtual void s434(); virtual void s435(); virtual void s436();
	virtual void s437(); virtual void s438(); virtual void s439(); virtual void s440(); virtual void s441(); virtual void s442(); virtual void s443(); virtual void s444(); virtual void s445(); virtual void s446(); virtual void s447(); virtual void s448();
	virtual void vfunc449(int a, int b);
	virtual void s450(); virtual void s451(); virtual void s452(); virtual void s453(); virtual void s454(); virtual void s455(); virtual void s456(); virtual void s457();
	virtual void vfunc458();
	char m_pad0004[0x94];
	CPTV_1016be10 *m_p98;
	CBaseAnimating *m_p9c;
	char m_pad00a0[0xc8];
	int m_n168;
	int m_n16c;
	char m_pad0170[0x4];
	int m_nSkin174;
	char m_pad0178[0xf0];
	unsigned int m_iEFlags268;
	char m_pad026c[0x150];
	Vector m_vecAbsVelocity;
	char m_pad03c8[0x328];
	int m_nSequence6f0;
	float m_fl6f4;
	float m_fl6f8;
	char m_pad06fc[0x38];
	CPTBlk30 m_blk734;
	CPTBlk15 m_blk7f4;
	char m_pad0848[0x7a8];
	int m_nActivityFF0;
	char m_pad0ff4[0x3b4];
	CVStatListSet m_StatLists;
	char m_pad13c4[0x8];
	int m_n13cc;
	char m_pad13d0[0x4];
	float m_f13d4;
	char m_pad13d8[0x94];
	int m_n146c;
	char m_pad1470[0x4];
	char m_b1474;
	char m_pad1475[0x1];
	char m_b1476;
	char m_pad1477[0x11];
	float m_f1488;
	char m_pad148c[0xd0];
	unsigned int m_h155c;
	float m_f1560;
	char m_pad1564[0x48c];
	int m_n19f0;
	char m_pad19f4[0x274];
	float m_f1c68;
	char m_pad1c6c[0x38];
	const char *m_s1ca4;
	float m_f1ca8;
	int m_n1cac;
	char m_pad1cb0[0x70];
	float m_f1d20;
	char m_pad1d24[0x8c];
	unsigned int m_h1db0;
	int m_n1db4;
	char m_pad1db8[0x104];
	int m_n1ebc;
	char m_pad1ec0[0x1c];
	char m_b1edc;
	char m_pad1edd[0xb];
	float m_f1ee8;
	char m_pad1eec[0x10];
	QAngle m_ang1efc;
	Vector m_vec1f08;
	char m_pad1f14[0x174];
	int m_n2088;
	char m_pad208c[0x90];
	Vector m_vecSmoothedVelocity;
	char m_pad2128[0x1dc];
	int m_n2304;
	char m_pad2308[0x40];
	Vector m_vecForcedOrigin;
	char m_b2354;
	char m_pad2355[0x7f];
	char m_sz23d4[0x80];
	void sub_100b1d10();
	bool sub_10336920();
	int sub_1008dc40(int a, int b);
	void sub_101618e0(int a, int b);
	void sub_1016b480();
	int sub_100b3700();
	void sub_1009edc0(const Vector &mins, const Vector &maxs);
	void sub_100b2770(const Vector *v);
	void sub_100b2e30(const Vector *v);
	int sub_1016bb50();
	void sub_101600a0(float f);
	void sub_1017df50(int a, float f, const char *psz);
	bool sub_10337f30();
	bool sub_10337e40();
	void sub_1016c9d0();
	void sub_1017c300();
	CBaseCombatWeapon *sub_10335950(const char *psz);
	void sub_1033f4c0(int n);
	bool sub_10338900();
	void sub_10338920();
	void sub_100b3b00();
	void sub_1033f6d0();
};

inline CVStatList_t *FindStat_1016be10(CVStatListSet *pSet, int type)
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

extern float g_104454c4;
extern char g_106b8540[];
inline const char *STR2_1016be10(const char **p) { return *p ? *p : g_106b8540; }
#define V ((CPTV_1016be10 *)this)
#define HULL() \
	if (V->sub_100b3700() & 2) \
		V->sub_1009edc0(Vector(-16, -16, 0), Vector(16, 16, 36)); \
	else \
		V->sub_1009edc0(Vector(-16, -16, 0), Vector(16, 16, 72));

void CBasePlayer::vfunc437()
{
	if (g_1070b228->curtime > V->m_f13d4 + 1.0f)
		V->m_f13d4 = 0;

	if ((unsigned char)((V->m_iEFlags268 >> 12) & 1))
		V->sub_100b1d10();

	V->m_vecSmoothedVelocity = V->m_vecSmoothedVelocity * 0.9f + V->m_vecAbsVelocity * 0.1f;

	if (!g_1070ba2c && !V->m_n2304 && V->vfunc158() && !V->vfunc406())
	{
		if (V->m_b1edc)
		{
			if (V->m_n168 == 0x1e && V->m_f1560 > g_104454c4 && g_1070b228->curtime - V->m_f1560 > 2.0f)
			{
				const char *pszModel = 0;
				CPTV_1016be10 *pEnt = (CPTV_1016be10 *)EHandle_Get(V->m_h155c);
				if (pEnt && pEnt->m_p9c)
					pszModel = (const char *)pEnt->m_p9c->sub_100952d0(-1) + 0xc;
				int nSkin = V->m_nSkin174;
				V->sub_101618e0(1, 1);
				V->m_n1ebc = -1;
				V->m_n168 = 0;
				V->m_n16c = 0;
				if (pszModel && !_strcmpi(pszModel, "character/monster/Animalism_Beastform/Animalism_Beastform.mdl"))
				{
					int nMale = V->sub_10336920();
					V->vfunc105("models/character/monster/Animalism_Beastform/Animalism_Beastform.mdl");
					V->vfunc310(1);
					V->vfunc311(1, 1, V->sub_1008dc40(1, -1));
					FindStat_1016be10(&V->m_StatLists, 0)->sub_102008e0(0xb, nMale);
					V->m_nSkin174 = nSkin;
					V->m_n13cc = nMale;
					float fv = V->vfunc250(0);
					V->vfunc258(fv, this);
					V->vfunc312(fv);
					V->sub_1016b480();
					return;
				}
				V->m_b1edc = 0;
				V->m_f1c68 = g_1070b228->curtime;
				char *pszName = V->m_sz23d4;
				char *pFound = g_109f386c(pszName, (char *)((CBaseAnimating *)this)->sub_100952d0(-1) + 0xc);
				if (!pFound || _strcmpi((char *)((CBaseAnimating *)this)->sub_100952d0(-1) + 0xc, pFound))
					V->vfunc105(pszName);
			}
			HULL()
		}
		else
		{
			HULL()
		}

		V->vfunc458();

		if (V->sub_100b3700() & 1)
		{
			if (V->m_f1ee8 > 64.0f)
				g_1070ba0c->vfunc21();
			V->m_f1ee8 = 0;
		}

		if (V->vfunc158())
		{
			if (V->m_nActivityFF0 == 0x4b && !V->vfunc412() && !(V->m_n2088 & 0x79a))
			{
				V->sub_100b2770(&g_1070d1b0);
				V->sub_100b2e30(&g_1070d1b0);
			}
			int nSeq = V->sub_1016bb50();
			if (nSeq != -1)
				V->vfunc449(nSeq, 0);
		}

		if (V->m_nSequence6f0 == -1)
			V->m_nSequence6f0 = 0;

		float flTime = V->vfunc250(0);
		V->sub_101600a0(flTime * V->m_f1488);
		V->vfunc258(flTime, this);
		if (V->m_n1db4 == 0xb)
			V->sub_1017df50(3, -1.0f, sub_101d3730("Jump_LandedExtremelyHard"));
		V->vfunc312(flTime);
		V->sub_1016b480();

		if (V->sub_10337f30())
			V->vfunc352();
		else if (V->sub_10337e40())
			V->vfunc357();

		if (V->m_b2354)
		{
			V->vfunc62(&V->m_vecForcedOrigin);
			V->vfunc216(&V->m_vecForcedOrigin);
			QAngle ang;
			ang.x = rand() * 0.0015259255f - 25.0f;
			ang.y = rand() * 0.0015259255f - 25.0f;
			ang.z = rand() * 0.0015259255f - 25.0f;
			V->m_ang1efc = ang;
			V->vfunc64(&V->m_ang1efc);
			V->vfunc218(V->vfunc221());
			V->m_vec1f08.Init();
		}
		V->sub_1016c9d0();
	}

	V->sub_1017c300();

	if (V->m_n19f0 != 0)
	{
		if (--V->m_n19f0 == 0)
		{
			CItemGKeyring *pKeyring = dynamic_cast<CItemGKeyring *>(V->sub_10335950("item_g_keyring"));
			if (pKeyring)
				((CKeyringUnit *)pKeyring)->sub_104081e0();
		}
	}

	if (V->vfunc361())
	{
		int nHave = FindStat_1016be10(&V->m_StatLists, 0)->sub_102012d0(0xc);
		if (nHave < g_10739d08.sub_101e8e80())
			V->sub_1033f4c0(g_10739d08.sub_101e8ea0() - nHave);
	}

	if (V->sub_10338900())
		V->sub_10338920();

	CPTV_1016be10 *pUse = (CPTV_1016be10 *)EHandle_Get(V->m_h1db0);
	if (pUse)
	{
		CPTV_1016be10 *pOther = pUse->m_p98;
		if (pOther)
		{
			if (V->m_b1edc)
			{
				pOther->vfunc64(V->vfunc219());
				if ((unsigned char)((V->m_iEFlags268 >> 12) & 1))
					V->sub_100b1d10();
				pOther->sub_100b2770(&V->m_vecAbsVelocity);
				pOther->vfunc62(V->vfunc217());
			}
			else
			{
				V->m_nSequence6f0 = pOther->m_nSequence6f0;
				V->m_nSkin174 = pOther->m_nSkin174;
				V->m_fl6f8 = pOther->m_fl6f8;
				V->m_fl6f4 = pOther->m_fl6f4;
				V->m_blk734 = pOther->m_blk734;
				V->m_blk7f4 = pOther->m_blk7f4;
				V->vfunc64(pOther->vfunc219());
				if ((unsigned char)((pOther->m_iEFlags268 >> 12) & 1))
					pOther->sub_100b1d10();
				V->sub_100b2770(&pOther->m_vecAbsVelocity);
				V->vfunc62(pOther->vfunc217());
				V->vfunc277(pOther->vfunc278());
			}
			V->sub_100b3b00();
			if (pOther->vfunc138() == 3 && V->m_n146c > 0 && V->m_b1474 && V->vfunc424(1))
			{
				V->m_b1476 = 1;
				V->sub_1033f6d0();
			}
		}
	}

	if ((V->m_n1cac & 1) && V->m_f1ca8 <= g_1070b228->curtime)
	{
		V->m_n1cac &= ~1;
		g_1073dbfc.sub_101f6530(this, STR2_1016be10(&V->m_s1ca4));
	}

	CPTV_1016be10 *pGround = V->vfunc209();
	if (pGround)
	{
		CPTNPC_1016be10 *pNPC = (CPTNPC_1016be10 *)pGround->m_p98;
		if (pNPC && g_1070b228->curtime >= V->m_f1d20)
		{
			V->m_f1d20 = g_1070b228->curtime + 2.0f;
			g_10924a6c->vfunc1();
			pNPC->sub_10269a20(0x3b);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1016cd20 size=0x151
template <class T> __forceinline T pcd_stage(T x) { return x; }
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)

__declspec(dllimport) void Warning(const char *fmt, ...);

struct RulesView
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual bool vfunc24();
};

struct UnknownView
{
	virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3();
	virtual CBaseEntity *vfunc4();
};
struct EdictView { char pad[0x40]; UnknownView *m_pUnk; UnknownView *GetUnknown() { return m_pUnk; } };

extern RulesView *g_1070ba0c;
extern CBaseEntity *g_107260ac;
extern CGlobalEntityList g_106eb5d8;

inline const char *STRINGR(const int &s) { return s ? (const char *)s : g_106b8540; }

inline CBaseEntity *GetContainingEntity(EdictView *pent)
{
	if (pent && pent->GetUnknown())
		return pent->GetUnknown()->vfunc4();
	return 0;
}

inline CBaseEntity *Instance(EdictView *pent)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
	if (!pent)
		pent = (EdictView *)engine->vfunc38(0);
	return GetContainingEntity(pent);
}

// TARGET: sub_1016cd20
CBaseEntity *sub_1016cd20()
{
	CBaseEntity *pSpot;
	if (g_1070ba0c->vfunc24()) {
		pSpot = g_106eb5d8.sub_100f7380(g_107260ac, "info_player_coop");
		if (pSpot)
			goto ReturnSpot;
		pSpot = g_106eb5d8.sub_100f7380(g_107260ac, "info_player_start");
		if (pSpot)
			goto ReturnSpot;
	}
	if (!gpGlobals->m_n2c || !strlen(STRINGR(gpGlobals->m_n2c))) {
		pSpot = g_106eb5d8.sub_100f7380(0, "info_player_start");
		if (pSpot)
			goto ReturnSpot;
	} else {
		pSpot = g_106eb5d8.sub_100f7770(0, STRINGR(pcd_stage(gpGlobals->m_n2c)), 0, 0);
		if (pSpot)
			goto ReturnSpot;
	}
ReturnSpot:
	if (!pSpot) {
		Warning("PutClientInServer: no info_player_start on level\n");
		return Instance((EdictView *)engine->vfunc38(0));
	}
	g_107260ac = pSpot;
	return pSpot;
}
// END FUNCTION

// FUNCTION: 0x1016cee0 size=0x36
#include "CBasePlayer.h"

struct CGameRulesVirt
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4(void *pPlayer);
};

extern CGameRulesVirt *g_1070ba0c;

// TARGET: CBasePlayer::vfunc431
void CBasePlayer::vfunc431()
{
	*(int *)((char *)this + 0x1a18) = 0;
	g_1070ba0c->v4(this);
	*((char *)this + 0x22dc) = 1;
	*(int *)((char *)this + 0x14d4) = 0;
	*(int *)((char *)this + 0x14d8) = 0;
}
// END FUNCTION

// FUNCTION: 0x1016d260 size=0x947
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "CVStatList_t.h"
#include "ScopeTrace.h"
#include <new.h>
#include <string.h>
struct CVarV { virtual void v0(); virtual char vfunc1(); int pad4[7]; int m20; int m24; float m28; int m2c; };
struct CRulesV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
 virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void vfunc35(void *p); virtual void v36(); virtual void v37(); virtual void v38(); virtual void vfunc39(void *p);
 virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
 virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55(); virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
 virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63(); virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67(); virtual void v68(); virtual void v69();
 virtual void vfunc70(void *p); };
struct CGV { float a; float b; float c; float curtime; };
struct CFlagsV { char pad[0x44]; unsigned short m44; void sub_100dc580(int f); void sub_100dc480(int f); };
struct CNamedListV { int sub_101d5bd0(const char *p); };
struct CUnk10206 { void sub_10206c70(int a, void *b); };
extern CVarV *g_109eee0c;
extern CVarV *g_10725d9c;
extern CVarV *g_10725bcc;
extern int g_10725be0;
extern CRulesV *g_1070ba0c;
extern CGV *g_1070b228;
extern float g_1070d1b0, g_1070d1b4, g_1070d1b8;
extern int g_1070ba28;
extern CNamedListV g_10738d10;
extern CUnk10206 g_1074f028;
extern float g_104454c4;
extern CVStatList_t g_109f0b40;
void sub_10012a8a();
int atexit(void (__cdecl *)());
int sub_10184260(int);
struct PCol { unsigned char r, g, b, a; };
void sub_101ce290(void *, PCol *, int, int, int);
#define SCR(x) ((((((x) & 0x8a66e35) ^ 0x85f3db1) + 0x8b10412) & 0x175991ca) ^ (x) ^ 0x783682a9)
struct SecLoc { char a, b; unsigned int v; };
struct SecV { char a, b; unsigned int v;
 void operator=(const SecLoc &p) { b = p.b; a = p.a; v = p.v; }
 __forceinline void Set(unsigned int x) { SecLoc loc; unsigned int r = sub_10184260(x); loc.v = SCR(r); *this = loc; }
};
void sub_101cf600(void *);
extern void (__cdecl *g_109f3628)(const char *, ...);
inline CVStatList_t *FindStat0(CVStatListSet *s)
{
 int n = s->m_nLists;
 int i = 0;
 if (n > 0) {
  CVStatList_t **p = s->m_pLists;
  CVStatList_t **q = p;
  do {
   if ((*q)->m_field10 == 0) return p[i];
   i++; q++;
  } while (i < n);
 }
 if (!(g_109f0b2a & 1)) {
  g_109f0b2a |= 1;
  new (&g_109f0b40) CVStatList_t(-1);
  atexit(sub_10012a8a);
 }
 return &g_109f0b40;
}
struct SV : CBasePlayer {
 int sub_100b3700(); void sub_100b37a0(); void sub_100b3580(int f);
 void sub_100ac4e0(int a, int b, int c); void sub_100adf10(const Vector &a, const Vector &b); void sub_100aaa40(int a);
 int sub_1008dc40(int a, int b); void sub_1016fed0(); void sub_10177b50(); void sub_101816c0(const char *p);
 void sub_103239a0(const char *p); void sub_103373e0(); int sub_10337860(); void sub_1033df80();
 void sub_1017faa0();
 void sub_1016d260(); 
};
struct XM { int x; };
typedef void (XM::*PM1)(const char *);
typedef void (XM::*PM2)(int, int);
struct Five { int a[5]; Five() { a[0] = 0; a[1] = 0; a[2] = 0; a[3] = 0; a[4] = 0; } };
struct SpawnV {
 char pad0[0x168];
 int f168;
 char pad16c[0x18];
 Vector v184;
 char pad190[0xc];
 int f19c;
 char pad1a0[0x5c];
 int f1fc;
 int f200;
 char pad204[0x4];
 int f208;
 char pad20c[0x4];
 int f210;
 char pad214[0x58];
 char* f26c;
 CFlagsV fl270;
 char pad2b6[0x13a];
 float f3f0;
 char pad3f4[0x2fc];
 int f6f0;
 char pad6f4[0x7a4];
 int fe98;
 char pade9c[0x1a4];
 EHANDLE f1040;
 char pad1044[0x388];
 int f13cc;
 char pad13d0[0xa5];
 char f1475;
 char pad1476[0x2];
 int f1478;
 char pad147c[0x20];
 EHANDLE f149c;
 char pad14a0[0x8];
 char f14a8;
 char pad14a9[0x1];
 char f14aa;
 char pad14ab[0x1];
 EHANDLE f14ac;
 int f14b0;
 int f14b4;
 char pad14b8[0xac];
 float f1564;
 char pad1568[0x8];
 int f1570;
 float f1574;
 Vector v1578;
 char pad1584[0x6e4];
 float f1c68;
 char pad1c6c[0x34];
 char f1ca0;
 char pad1ca1[0x3];
 int f1ca4;
 int f1ca8;
 int f1cac;
 char f1cb0;
 char f1cb1;
 char pad1cb2[0x6];
 EHANDLE f1cb8;
 EHANDLE f1cbc;
 EHANDLE f1cc0;
 int f1cc4;
 int f1cc8;
 int f1ccc;
 char pad1cd0[0x4];
 char f1cd4;
 char f1cd5;
 char pad1cd6[0x2];
 unsigned int f1cd8;
 int f1cdc;
 float f1ce0;
 float f1ce4;
 int f1ce8;
 int f1cec;
 int f1cf0;
 int f1cf4;
 int f1cf8;
 char pad1cfc[0x14];
 int f1d10;
 int f1d14;
 char f1d18;
 char pad1d19[0x3];
 int f1d1c;
 int f1d20;
 char pad1d24[0x4];
 char a1d28[20];
 char pad1d3c[0x6c];
 int f1da8;
 int f1dac;
 char pad1db0[0xc];
 float f1dbc;
 char f1dc0;
 char pad1dc1[0x3];
 int f1dc4;
 char f1dc8;
 char pad1dc9[0x3];
 int f1dcc;
 int f1dd0;
 int f1dd4;
 int f1dd8;
 char pad1ddc[0x24];
 char f1e00;
 char pad1e01[0x77];
 int f1e78;
 int f1e7c;
 char pad1e80[0xc];
 char f1e8c;
 char pad1e8d[0x5b];
 int f1ee8;
 char pad1eec[0x28];
 char f1f14;
 char pad1f15[0xf];
 float f1f24;
 char f1f28;
 char pad1f29[0x13f];
 int f2068;
 char pad206c[0x64];
 float f20d0;
 float f20d4;
 float f20d8;
 float f20dc;
 float f20e0;
 float f20e4;
 char pad20e8[0x8];
 int f20f0;
 char pad20f4[0x28];
 float f211c;
 float f2120;
 float f2124;
 char pad2128[0x4];
 int f212c;
 char pad2130[0x1c];
 int f214c;
 char pad2150[0x12c];
 int f227c;
 char pad2280[0x14];
 int f2294;
 char f2298;
 char f2299;
 char f229a;
 char pad229b[0x5];
 char f22a0;
 char pad22a1[0x13];
 int f22b4;
 int f22b8;
 char pad22bc[0xc];
 int f22c8;
 char pad22cc[0x18];
 int f22e4;
 char pad22e8[0xc];
 int f22f4;
 int f22f8;
 float f22fc;
 char pad2300[0x4];
 int f2304;
 char pad2308[0x8];
 int f2310;
 char pad2314[0x30];
 int f2344;
};
#define F ((SpawnV *)this)
#define NM (F->f26c ? F->f26c : g_106b8540)
void SV::sub_1016d260()
{
 typedef void (__fastcall *F1)(void *, int, const char *);
 typedef void (__fastcall *F0)(void *);
 F->f1e00 = 1;
 (((XM *)this)->**(PM1 *)(*(int*)this + 0x1e8))("player");
 F->f1f14 = 1;
 F->f2068 = 0;
 F->f1f24 = g_109eee0c->vfunc1() ? g_104454c4 : g_109eee0c->m28;
 F->f210 = 100;
 F->f1f28 = 1;
 F->f22e4 = 0;
 F->f1fc = 2;
 F->f208 = F->f210;
 F->f2310 = 0;
 memset(m_flRunForwardSpeeds, 0, 32);
 memset(m_flRunSideSpeeds, 0, 32);
 memset(m_flWalkForwardSpeeds, 0, 32);
 memset(m_flWalkSideSpeeds, 0, 32);
 memset(m_flSneakForwardSpeeds, 0, 32);
 memset(m_flSneakSideSpeeds, 0, 32);
 F->f1ca0 = 0;
 if (sub_100b3700() & 0x100) { sub_100b37a0(); sub_100b3580(0x180); } else { sub_100b37a0(); sub_100b3580(0x80); }
 sub_100b3580(0x10000);
 F->f3f0 = 1.0f;
 F->f22fc = g_1070b228->curtime + 12.0f;
 F->f2344 = 2;
 F->f200 = 0;
 F->f19c = F->f19c & 0x20;
 F->f22f4 = 0;
 F->f22f8 = 0;
 F->f2294 = -1;
 F->fe98 = 0;
 F->f20f0 = 0;
 F->f1e78 = 0;
 F->f1e7c = 0;
 F->f168 = 0;
 F->f22c8 = 0;
 F->f214c = 0;
 F->f227c = 0;
 F->f1574 = 0.5f;
 F->f1570 = 0xf7;
 F->f1564 = g_1070b228->curtime;
 F->f20d0 = g_1070d1b0; F->f20d4 = g_1070d1b4; F->f20d8 = g_1070d1b8;
 F->f20dc = g_1070d1b0; F->f20e0 = g_1070d1b4; F->f20e4 = g_1070d1b8;
 F->f1ee8 = 0;
 if (!F->f2299) g_1070ba0c->vfunc70(this);
 if (F->f13cc < 0) {
  F->f13cc = g_10725d9c->vfunc1() ? 0 : g_10725d9c->m2c;
 }
 FindStat0(CVStatListSet::Of(this))->sub_102008e0(0xb, F->f13cc);
 F->f13cc = FindStat0(CVStatListSet::Of(this))->sub_102012d0(0xb);
 g_1070ba0c->vfunc39(this);
 { Vector v(0, 0, 64); F->v184 = v; }
 (*(F0*)(*(int*)this + 0x1a0))(this);
 F->v1578 = Vector(0, 32, 0);
 if (F->f212c == -1) g_109f3628("Couldn't alloc player sound slot!\n");
 F->f22a0 = 0;
 sub_100ac4e0(0, 0, 0);
 F->f2298 = 1;
 F->f229a = 0;
 F->f22b8 = 0; F->f22b4 = 0;
 if (F->f2304) { F->f2304 = 0; sub_10177b50(); }
 PCol col; col.r = 0; col.g = 0; col.b = 0; col.a = 0; sub_101ce290(this, &col, 0, 0, 2);
 int idx = sub_10337860();
 if (idx <= 0) {
  const char *nm;
  if (g_10725bcc->vfunc1()) nm = g_106b8540;
  else if (g_10725be0 & 0x1000) nm = "FCVAR_NEVER_AS_STRING";
  else {
   nm = (const char *)g_10725bcc->m20;
   if (nm == 0) nm = g_106b8540;
  }
  idx = g_10738d10.sub_101d5bd0(nm);
  if (idx <= 0) idx = g_10738d10.sub_101d5bd0("Player_Malkavian");
 }
 F->f1040 = (CBaseEntity *)0; F->f14ac = (CBaseEntity *)0; F->f149c = (CBaseEntity *)0;
 F->f14a8 = 0; F->f1475 = 0; F->f1478 = 0; F->f14aa = 0;
 F->f1cb8 = (CBaseEntity *)0; F->f1cbc = (CBaseEntity *)0;
 CGV *g = *(CGV *volatile *)&g_1070b228; F->f1c68 = g->curtime; F->f1ccc = 0;
 ((SecV *)&F->f1cd4)->Set(0);
 F->f1ce0 = -1.0f; F->f1ce4 = -1.0f;
 F->f1cdc = 0; F->f1ce8 = 0; F->f1cec = 0;
 F->f1cc0 = (CBaseEntity *)0; F->f1cc4 = 0x47c34ff3; F->f1cc8 = 0;
 F->f1cf0 = 0; F->f1cf4 = 0; F->f1cf8 = 0x7f7fffff;
 F->f1d10 = 0; F->f1d14 = 0; F->f1d1c = 0; F->f1d18 = 0; F->f1d20 = 0;
 F->f14b0 = -1; F->f14b4 = -1;
 F->f1ca4 = 0; F->f1ca8 = 0; F->f1cac = 0;
 g_1074f028.sub_10206c70(idx, this);
 int ig = (*(int (__fastcall **)(void *))(*(int*)this + 0x20))(this);
 g_1070ba28 = ig;
 F->f6f0 = sub_1008dc40(1, -1);
 g_1070ba0c->vfunc35(this);
 F->f211c = g_1070d1b0; F->f2120 = g_1070d1b4; F->f2124 = g_1070d1b8;
 sub_103373e0();
 g_1070ba0c->vfunc39(this);
 ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc103();
 sub_101816c0("item_w_unarmed");
 sub_1033df80();
 F->f1dac = 0;
 F->f1dbc = g_1070b228->curtime;
 F->f1dc0 = 0; F->f1dc4 = 0; F->f1dc8 = 0; F->f1dcc = 0; F->f1dd0 = 0; F->f1dd4 = 0; F->f1dd8 = 0; F->f1da8 = 0;
 F->f1e8c = 1;
 memset(F->a1d28, 0, 20);
 CFlagsV *fl;
 { ScopeTrace s("CBaseEntity::SetSolidFlags", NM); fl = &F->fl270; fl->sub_100dc580(0); }
 { ScopeTrace s("CBaseEntity::AddSolidFlags", NM); fl->sub_100dc580(fl->m44 | 1); }
 { ScopeTrace s("CBaseEntity::AddSolidFlags", NM); fl->sub_100dc580(fl->m44 | 0x10); }
 { ScopeTrace s("CBaseEntity::AddSolidFlags", NM); fl->sub_100dc580(fl->m44 | 0x40); }
 { ScopeTrace s("CBaseEntity::SetSolid", NM); fl->sub_100dc480(2); }
 sub_100aaa40(3);
 (((XM *)this)->**(PM2 *)(*(int*)this + 0x174))(3, 0);
 if (sub_100b3700() & 2)
  sub_100adf10(Vector(-16, -16, 0), Vector(16, 16, 36));
 else
  sub_100adf10(Vector(-16, -16, 0), Vector(16, 16, 72));
 sub_101cf600(this);
 F->f1cb0 = 0; F->f1cb1 = 0;
 sub_103239a0("player");
 (*(F0*)(*(int*)this + 0x750))(this);
 F->f1e00 = 0;
 sub_1016fed0();
 sub_1017faa0();
}
// END FUNCTION

// FUNCTION: 0x1016de10 size=0x21e
#include "CBasePlayer.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatWeapon.h"
#include "CItemGKeyring.h"
#include "CVStatList_t.h"
struct SDest192;
struct SSrc192 { void sub_10408480(SDest192 *p); };
extern Vector g_1070d9d0;
extern char *g_10628368;
extern char g_1055f710[];
extern char g_105869b8[];
int sub_10299d50(int a);
void *__cdecl __RTDynamicCast(void *p, long l, void *pFrom, void *pTo, int b);
// TARGET: CBasePlayer::vfunc130
void CBasePlayer::vfunc130(char bFlag)
{
	sub_1000bfcd(bFlag);
	m_vec1EFC = g_1070d9d0;
	m_vec1F08 = g_1070d9d0;
	if (bFlag) {
		*(int *)((char *)this + 0x1dd0) = 0;
		*(int *)((char *)this + 0x1dd4) = 0;
		*(int *)((char *)this + 0x1dd8) = 0;
	}
	for (int i = 0; i < 17; i++) {
		if (0 >= CVStatListSet::Of(this)->Find(3)->sub_102012d0(i)) {
			*(int *)((char *)this + 0x1adc + i * 4) = 0;
			*(int *)((char *)this + 0x1b20 + i * 4) = 0;
		}
	}
	sub_10182e00((CBaseCombatWeapon *)sub_1032e7b0());
	if (g_10628368)
		*(int *)(g_10628368 + 0xb8) = 0;
	sub_10299d50(*(int *)&bFlag);
	m_flags1E74 &= ~1;
	int &r1 = *(int *)((char *)this + 0x1cc0);
	int &r2 = *(int *)((char *)this + 0x1a84);
	int &r3 = *(int *)((char *)this + 0x1a94);
	r3 = r2 = r1 = -1;
	*(int *)((char *)this + 0x1cc4) = 0x47c34ff3;
	*(int *)((char *)this + 0x1cc8) = 0;
	if (!bFlag) {
		sub_101835e0();
		if (m_pInventory) {
			CItemGKeyring *pKeyring = (CItemGKeyring *)__RTDynamicCast(sub_10335950("item_g_keyring"), 0, g_1055f710, g_105869b8, 0);
			if (!pKeyring) {
				CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e120("item_g_keyring");
				if (!pWeapon)
					return;
				pKeyring = (CItemGKeyring *)__RTDynamicCast(pWeapon, 0, g_1055f710, g_105869b8, 0);
				if (pKeyring) {
					sub_1032d380((CBaseEntity *)pKeyring, 1);
					((SSrc192 *)m_pInventory)->sub_10408480((SDest192 *)pKeyring);
				} else {
					pWeapon->sub_1024f7b0();
					return;
				}
			}
			sub_101836d0(pKeyring);
			pKeyring->sub_10408220(m_pInventory);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1016e820 size=0x175
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CUnknown1070b248.h"

#define PV1(n) virtual void v##n();
#define PV10(p) PV1(p##0) PV1(p##1) PV1(p##2) PV1(p##3) PV1(p##4) PV1(p##5) PV1(p##6) PV1(p##7) PV1(p##8) PV1(p##9)

struct CPlayerObj	// the object sub_1015d680 finds: only slot 266 is used
{
	PV10(0) PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20) PV10(21) PV10(22) PV10(23) PV10(24) PV10(25)
	PV1(260) PV1(261) PV1(262) PV1(263) PV1(264) PV1(265)
	virtual void vfunc266(int a);
};

struct CPlayerUnit : CBasePlayer
{
	CPlayerObj *sub_1015d680(int a);	// stub 0x10013d09
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd)
};

extern CUnknown1070b248 *g_1070b248;
extern char g_10580ae8;
__declspec(dllimport) void DevMsg(const char *pszFormat, ...);
char sub_102f9970();	// stub 0x10003b7a
int sub_102f9950();	// stub 0x1000d8b9
void sub_102f9920(int nHullBits);	// stub 0x1000f36c
const char *sub_102d6230(int nHull);	// stub 0x10011b4e

void CBasePlayer::vfunc104()
{
	*(int *)((char *)this + 0xe98) = 0;
	*(int *)((char *)this + 0x2294) = -1;
	*(int *)((char *)this + 0x1c44) = engine->vfunc13("materials/sprites/glowa.vmt", 0);
	*(int *)((char *)this + 0x1c48) = engine->vfunc13("materials/sprites/Spread_Indicator_L.vmt", 0);
	*(int *)((char *)this + 0x1c4c) = engine->vfunc13("materials/sprites/Spread_Indicator_R.vmt", 0);
	g_1070b248->vfunc0("weapons/misc/ammo_pickup.wav", 0);
	g_1070b248->vfunc0("environmental/fire/fire_hit.wav", 0);
	g_1070b248->vfunc0("interface/final_death.wav", 0);
	g_1070b248->vfunc0("weapons/ranged/pickup.wav", 0);
	*(int *)((char *)this + 0x22a4) = 5;
	if (g_10580ae8)
		*((char *)this + 0x2298) = 1;
	sub_1015d6d0(0);
	sub_1015d6d0(1);
	CPlayerObj *pObj = ((CPlayerUnit *)this)->sub_1015d680(1);
	if (pObj)
		pObj->vfunc266(0);
	if (sub_102f9970())
	{
		int nBits = ((CEntityVSlots *)this)->slot337();
		nBits &= sub_102f9950();
		if (nBits != ((CEntityVSlots *)this)->slot337())
		{
			DevMsg("\n****ERROR***\n");
			DevMsg("%s is being spawned after links have been initialized, but its hull %s\n", ((CPlayerUnit *)this)->sub_1000b5cd(), sub_102d6230(*(int *)((char *)this + 0x1568)));
			DevMsg("Has not been initialized.  Be sure that this class's GetUsedHullBits function includes that hull type.\n");
			DevMsg("If it already is, this entity is probably spawned after the node graph is created.\n");
			DevMsg("Have the class responsible for spawning it include it.\n");
			DevMsg("****ERROR***\n\n");
			return;
		}
	}
	else
		sub_102f9920(((CEntityVSlots *)this)->slot337());
}
// END FUNCTION

// FUNCTION: 0x1016ea00 size=0xd5
#include "CBasePlayer.h"
struct CPlayerView_1016ea00 { char m_pad0[0x1dc4]; float f1dc4; };
void sub_10006ee7(void *pArray, int nCount);
void sub_10015311(void *pArray, int nCount);
int sub_101d1070(int a, int b);
void sub_10299c60(int a);
int CBasePlayer::vfunc126(int a)
{
	sub_10006ee7(&m_f1CE0, 2);
	sub_10006ee7(&m_flSupernaturalActTimer, 2);
	sub_10006ee7(&m_flSpawnResponseCopsTimer, 4);
	if (gpGlobals->curtime >= ((CPlayerView_1016ea00 *)this)->f1dc4)
		m_bCopWaitDelayed = false;
	else
		m_bCopWaitDelayed = true;
	m_bDebugSaved = true;
	m_f1564 = (m_f1564) - gpGlobals->curtime;
	if (m_lBirthday == 0)
	{
		m_lBirthday = sub_101d1070(0, 0);
		sub_1016fa90();
	}
	unsigned int nResult = sub_10348980(a);
	sub_10015311(&m_f1CE0, 2);
	sub_10015311(&m_flSupernaturalActTimer, 2);
	sub_10015311(&m_flSpawnResponseCopsTimer, 4);
	sub_10299c60(a);
	return nResult;
}
// END FUNCTION

// FUNCTION: 0x1016eb20 size=0x6f
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CStatDefault3List.h"
extern CStatDefault3List g_10738d10;
struct CBaseCombatCharacterView {
    bool sub_1000e494(int a, int b);
};

bool CBasePlayer::vfunc326(int a, CBaseEntity *pOther)
{
    CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
    if (pWeapon && (pWeapon->vfunc360() & 0x6000)) {
        if (pOther) {
            int nTemplate = ((CBaseCombatCharacter *)pOther)->sub_10337860();
            if (g_10738d10.sub_101d5e80(nTemplate)->m_98[8])
                return ((CBaseCombatCharacterView *)this)->sub_1000e494(a, (int)pOther);
        }
        return false;
    }
    return ((CBaseCombatCharacterView *)this)->sub_1000e494(a, (int)pOther);
}
// END FUNCTION

// FUNCTION: 0x1016ebd0 size=0x243
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "globalvars.h"
#include "Tier1.h"

void sub_10015311(float *pField, int nMode);
void sub_101cf390(void *pThis, const float *pMins, const float *pMaxs);
void sub_1016b750(void *pPlayer);
int sub_10299ce0(void *pRestore);
extern int g_1070ba28;

#define PCV10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PCV100(p) PCV10(p##0) PCV10(p##1) PCV10(p##2) PCV10(p##3) PCV10(p##4) PCV10(p##5) PCV10(p##6) PCV10(p##7) PCV10(p##8) PCV10(p##9)

struct CPlayerView8
{
	virtual void q0(); virtual void q1(); virtual void q2(); virtual void q3();
	virtual void q4(); virtual void q5(); virtual void q6(); virtual void q7();
	virtual int vfunc8();
};

struct CPlayerView62
{
	PCV10(r0) PCV10(r1) PCV10(r2) PCV10(r3) PCV10(r4) PCV10(r5)
	virtual void r60(); virtual void r61();
	virtual void vfunc62(const float *pOrigin);
};

struct CPlayerView453
{
	PCV100(s0) PCV100(s1) PCV100(s2) PCV100(s3)
	PCV10(s4) PCV10(s5) PCV10(s6) PCV10(s7) PCV10(s8)
	virtual void s450(); virtual void s451(); virtual void s452();
	virtual CBaseEntity *vfunc453();
};

struct CEntityView220
{
	PCV100(t0) PCV100(t1)
	PCV10(t2) PCV10(t3)
	virtual float *vfunc220();
	virtual float *vfunc221();
};

struct LandmarkView
{
	char m_pad[0x12dc];
	int m_n12dc;	// 0x12dc
	char m_sz12e0[1];	// 0x12e0
};

// TARGET: CBasePlayer::vfunc127
int CBasePlayer::vfunc127(CRestore *pRestore)
{
	m_pad1E00[0] = 1;
	int r = sub_10348890(pRestore);
	sub_10015311(&m_f1CE0, 2);
	sub_10015311(&m_flSupernaturalActTimer, 2);
	sub_10015311(&m_flSpawnResponseCopsTimer, 4);
	if (r == 0)
	{
		m_pad1E00[0] = 0;
		return 0;
	}
	sub_103239a0("player");
	LandmarkView *pLandmark = (LandmarkView *)gpGlobals->m_n20;
	if (pLandmark->m_n12dc == 0)
	{
		g_109f3628("No Landmark:%s\n", (char *)pLandmark + 0x12e0);
		CBaseEntity *pSpawn = ((CPlayerView453 *)this)->vfunc453();
		CEntityView220 *pEnt = (CEntityView220 *)pSpawn;
		Vector vecOrigin = *(Vector *)pEnt->vfunc220() + Vector(0.0f, 0.0f, 1.0f);
		((CPlayerView62 *)this)->vfunc62(vecOrigin.Base());
		vfunc64(pEnt->vfunc221());
	}
	Vector vecAngles = m_vec206c;
	vecAngles.x = 0.0f;
	vecAngles.z = 0.0f;
	vfunc64(vecAngles.Base());
	m_vec206c.z = 0.0f;
	m_n207C = 1;
	*(int *)((char *)this + 0x1570) = 0xf7;
	g_1070ba28 = ((CPlayerView8 *)this)->vfunc8();
	if (((CBaseEntity *)this)->CBaseEntity::sub_100b3700() & 2)
	{
		sub_1016b750(this);
		sub_101cf390(this, Vector(-16.0f, -16.0f, 0.0f).Base(), Vector(16.0f, 16.0f, 36.0f).Base());
		m_pad1EDC[1] = 1;
	}
	else
	{
		m_pad1EDC[1] = 0;
		sub_101cf390(this, Vector(-16.0f, -16.0f, 0.0f).Base(), Vector(16.0f, 16.0f, 72.0f).Base());
	}
	vfunc468();
	sub_1017c830();
	m_bDebugSaved = 0;
	m_pad1E00[0] = 0;
	sub_10299ce0(pRestore);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10170b50 size=0xe5
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

#define m_hLastWeapon (*(CHandle<CBaseCombatWeapon> *)&m_hEnt0EA4)

void CBasePlayer::vfunc456()
{
	if (!m_hLastWeapon.Get())
		return;
	if (sub_1032e7b0() && !((CBaseCombatWeapon *)sub_1032e7b0())->vfunc313())
		return;
	vfunc457(STRINGR_F(((CBaseEntity *)m_hLastWeapon.Get())->m_classname11c), m_hLastWeapon->vfunc296());
}
// END FUNCTION

// FUNCTION: 0x101710b0 size=0x75
#include "CBasePlayer.h"

struct CUnk10725de4
{
	virtual void v0();
	virtual char vfunc1();
	char pad[0x2c - 4];
	int m_n2c;
};

extern CUnk10725de4 *g_10725de4;

// TARGET: CBasePlayer::sub_101710b0
void CBasePlayer::sub_101710b0(const Vector *pImpulse)
{
	if (g_10725de4->vfunc1() || g_10725de4->m_n2c == 0) {
		Vector *pVel = (Vector *)((char *)this + 0x1f08);
		*pVel += *pImpulse * 20.0f;
	}
}
// END FUNCTION

// FUNCTION: 0x10171150 size=0x62
#include "CBasePlayer.h"
#include "CBaseEntity.h"
void CBasePlayer::vfunc170(const Vector *pOffset)
{
	((CBaseEntity *)this)->sub_100b3640(1);
	Vector v = m_vec03D4 + *pOffset;
	((CBaseEntity *)this)->sub_100b2e30(&v.x);
}
// END FUNCTION

// FUNCTION: 0x10171f50 size=0x1a9
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "ehandle.h"

struct CGiveWeaponView
{
	CBP_V100(wa) CBP_V100(wb) CBP_V10(wc0) CBP_V10(wc1) CBP_V10(wc2) CBP_V10(wc3) CBP_V10(wc4) CBP_V10(wc5) CBP_V10(wc6) CBP_V10(wc7) CBP_V10(wc8)
	CBP_V1(wd0) CBP_V1(wd1) CBP_V1(wd2) CBP_V1(wd3) CBP_V1(wd4) CBP_V1(wd5) CBP_V1(wd6)
	virtual void vfunc297(int iSubType);
	CBP_V10(we0) CBP_V10(we1) CBP_V10(we2) CBP_V10(we3) CBP_V1(wf0) CBP_V1(wf1) CBP_V1(wf2)
	virtual void vfunc341(CBasePlayer *pPlayer);
};
struct CGiveEntView : CEntityVSlots
{
	char m_pad0004[0xa0 - 4];
	CGiveWeaponView *m_pWeapona0;
	char m_pad00a4[0x204 - 0xa4];
	unsigned int m_spawnflags204;
};
struct CBasePlayerUnit : CBasePlayer
{
	int sub_1032d890(const char *pszName, int iSubType);
	char sub_10173f90(CGiveWeaponView *pWeapon, int a, int b, int c);
};
extern "C" __declspec(dllimport) void Msg(const char *pszFormat, ...);
CBaseEntity *sub_10136580(const char *pszName);
void sub_101d1280(CBaseEntity *pEnt);
void sub_100fbd50(CGiveWeaponView *pWeapon);
void sub_101cebc0(CBasePlayer *pPlayer, int a, int b);

CBaseEntity *CBasePlayer::vfunc459(const char *pszName, int iSubType)
{
	if (((CBasePlayerUnit *)this)->sub_1032d890(pszName, iSubType))
		return 0;

	CHandle<CGiveEntView> pent = (CGiveEntView *)sub_10136580(pszName);
	if (pent == 0) {
		Msg("NULL Ent in GiveNamedItem!\n");
		return 0;
	}

	Vector vecOrigin;
	pent->slot62((const float *)((CEntityVSlots *)this)->slot193(&vecOrigin));
	pent->m_spawnflags204 |= 0x40000000;

	CGiveEntView *pSpawned = pent.Get();
	CGiveWeaponView *pWeapon = !pSpawned ? 0 : pSpawned->m_pWeapona0;
	if (iSubType && pWeapon)
		pWeapon->vfunc297(iSubType);

	sub_101d1280((CBaseEntity *)pent.Get());
	if (pent != 0 && !pent->slot116()) {
		if (((CBasePlayerUnit *)this)->sub_10173f90(pWeapon, 0, 1, 0)) {
			pWeapon->vfunc341(this);
		} else {
			sub_100fbd50(pWeapon);
			sub_101cebc0(this, 0x52, 0);
		}
	}
	return (CBaseEntity *)pent.Get();
}
// END FUNCTION

// FUNCTION: 0x101728f0 size=0x436
#include "CSingleUserRecipientFilter.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CSprayCan.h"
#include "UTIL_Trace.h"
#include "CRecipientFilter.h"
#include "globalvars.h"
#include "engineserver.h"

struct CConVarViewAe34 { virtual void v0(); virtual bool vfunc1(); char pad[0x24]; float m_f28; };
extern CConVarViewAe34 *g_1070ae34;
extern int g_10726028;
struct CBasePlayer450View : CBasePlayer { char sub_101681a0(); };

// TARGET: CBasePlayer::vfunc450
void CBasePlayer::vfunc450()
{
	CGameTrace tr;
	vfunc460();
	if ((m_nFlags2088 & 0x400000) && !((CBasePlayer450View *)this)->sub_101681a0())
		vfunc424(0);
	int iImpulse = m_n2324;
	switch (iImpulse) {
	case 99: {
		int iOn;
		if (g_10726028 == 0) {
			iOn = 1;
			g_10726028 = engine->vfunc82("Logo", iOn);
		} else
			iOn = 0;
		CSingleUserRecipientFilter user(this);
		user.MakeReliable();
		engine->vfunc65(&user, g_10726028);
		engine->vfunc67(iOn);
		engine->vfunc66();
		if (!iOn)
			g_10726028 = 0;
		break;
	}
	case 100:
		if (vfunc445())
			vfunc447();
		else
			vfunc446();
		break;
	case 0xc9: {
		if (gpGlobals->curtime < m_f22c8)
			break;
		Vector forward;
		sub_10139610(*(QAngle *)&m_vec206c, &forward, 0, 0);
		UTIL_TraceLine_DebugCall(vfunc193(), vfunc193() + forward * 128.0f, 0x400b, this, 0, &tr);
		if (tr.m_fraction != 1.0) {
			m_f22c8 = gpGlobals->curtime + (g_1070ae34->vfunc1() ? g_104454c4 : g_1070ae34->m_f28);
			CSprayCan *pCan = new CSprayCan;
			pCan->vfunc106("spraycan");
			pCan->sub_101714a0(this);
		}
		break;
	}
	case 0xcc:
		sub_101728b0();
		break;
	default:
		vfunc451(iImpulse);
		break;
	}
	m_n2324 = 0;
}
// END FUNCTION

// FUNCTION: 0x10172e60 size=0xd1b
#include "CVStatInfo_t.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CBloodSplat.h"
#include "UTIL_Trace.h"
#include "CVStatList_t.h"
#include "CVDmg_t.h"
#include "QAngle.h"
#include "string_t.h"
#include "globalvars.h"
#include "engineserver.h"

__declspec(dllimport) void Msg(const char *pMsg, ...);

extern int g_10752e9c;
extern int g_10726008;
extern int g_107255e4;
extern const char *g_10583658[];
extern void *g_10920540;
extern char g_106b8540[];

struct CVStatInfo_t;
struct CVStatInfoView { int sub_101ff190(void *pOwner); };
CVStatInfoView *__fastcall sub_10204ba0(int *pBlock);
bool __fastcall sub_10204250(int *pBlock);
int __cdecl sub_10202780(int n);
CBaseEntity *sub_10172410(CBasePlayer *pPlayer);
void __cdecl sub_1012a6e0(CBaseEntity *pEnt, int a, int b);
void __cdecl sub_101cd940(char *pEnt);
CBaseEntity *sub_100a99d0(const char *pszName, const float *pOrigin, const float *pAngles, CBaseEntity *pOwner);
CBaseEntity *sub_100a99d0(const char *pszName, const Vector &vecOrigin, const float *pAngles, CBaseEntity *pOwner);
Vector sub_101d2f40(float flYaw);
void __cdecl sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

struct SBaseEntObj { virtual const char *vfunc0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual const char *vfunc5(); };
struct SUnkView { virtual void v0(); virtual void v1(); virtual void v2(); virtual SBaseEntObj *vfunc3(); };
struct SEdictView { char pad[0x40]; SUnkView *m_pUnk; };

#define HV_V(n) virtual void v##n();
#define HV_T(p) HV_V(p##0) HV_V(p##1) HV_V(p##2) HV_V(p##3) HV_V(p##4) HV_V(p##5) HV_V(p##6) HV_V(p##7) HV_V(p##8) HV_V(p##9)
#define HV_H(p) HV_T(p##0) HV_T(p##1) HV_T(p##2) HV_T(p##3) HV_T(p##4) HV_T(p##5) HV_T(p##6) HV_T(p##7) HV_T(p##8) HV_T(p##9)

struct CNPCView451 { HV_H(a) HV_H(b) HV_H(c) HV_H(d) HV_H(e) HV_T(f0) HV_T(f1) HV_T(f2) HV_T(f3) HV_T(f4) HV_T(f5) HV_T(f6) HV_T(f7) HV_V(f80) virtual void vfunc581(); };
struct CEntView451
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual string_t vfunc9();
	char m_pad0004[0x94 - 4];
	CNPCView451 *m_pNPC94;	// 0x94
	char m_pad0098[0x120 - 0x98];
	const char *m_iGlobalname120;	// 0x120
	const char *m_iParent124;	// 0x124
	char m_pad0128[0x26c - 0x128];
	const char *m_name26c;	// 0x26c
	char m_pad0270[0x2e0 - 0x270];
	SEdictView *m_pEdict2e0;	// 0x2e0
};

struct CBasePlayer451 : CBasePlayer
{
	void sub_100b3580(unsigned int flags);
	int sub_103343f0(int count, const char *pszAmmoName);
	void sub_10340e50(int amount);
};

static inline const char *EntClassname(SEdictView *pEdict)
{
	return !pEdict->m_pUnk ? g_106b8540 : pEdict->m_pUnk->vfunc3()->vfunc5();
}

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
extern "C" int __cdecl atexit(void (__cdecl *)());

inline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
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
#define StatList(p, t) FindStatList(CVStatListSet::Of(p), t)

// TARGET: CBasePlayer::vfunc451
void CBasePlayer::vfunc451(int iImpulse)
{
	if (g_10752e9c == 0)
		return;

	CEntView451 *pEntity;
	CGameTrace tr;

	switch (iImpulse) {
	case 76:
		if (!g_10726008) {
			g_10726008 = 1;
			Msg("You must now restart to use Grunt-o-matic.\n");
		} else {
			Vector forward = sub_101d2f40(m_vec206c.y);
			sub_100a99d0("NPC_human_grunt", *(Vector *)vfunc220() + forward * 128.0f, vfunc221(), 0);
		}
		break;

	case 69: {
		for (int i = 0; g_10583658[i]; i++) {
			int raw[4];
			CVDmgBlock16_t &blk = *(CVDmgBlock16_t *)raw;
			blk.sub_10230ed0();
			blk.sub_10204570(g_10583658[i]);
			if (sub_10204250(raw))
				continue;
			int nType = sub_10202780(raw[0]);
			int nStat = raw[1];
			if (StatList(this, nType)->sub_102012d0(nStat) >= 0) {
				for (;;) {
					CVStatList_t *pList = StatList(this, nType);
					int nMax = sub_10204ba0(raw)->sub_101ff190(this);
					if (pList->sub_10200ca0(nStat) >= nMax)
						break;
					StatList(this, nType)->sub_10200d60(nStat);
				}
			}
			Msg("%s = %d\n", g_10583658[i], StatList(this, nType)->sub_102012d0(nStat));
		}
		((CBasePlayer451 *)this)->sub_100b3580(0x4000);
		Msg("godmode on\n");
	}
	case 101:
		g_107255e4 = 1;
		((CBasePlayer451 *)this)->sub_103343f0(999, "MediumRound");
		((CBasePlayer451 *)this)->sub_103343f0(999, "AnacondaRound");
		((CBasePlayer451 *)this)->sub_103343f0(999, "CrossbowBolt");
		((CBasePlayer451 *)this)->sub_103343f0(999, "DesertEagle_Round");
		((CBasePlayer451 *)this)->sub_103343f0(999, "Glock_17cRound");
		((CBasePlayer451 *)this)->sub_103343f0(999, "Ithica_M37Round");
		((CBasePlayer451 *)this)->sub_103343f0(999, "Mac_10Round");
		((CBasePlayer451 *)this)->sub_103343f0(999, "Remington_M_700Round");
		((CBasePlayer451 *)this)->sub_103343f0(999, "Steyr_AugRound");
		((CBasePlayer451 *)this)->sub_103343f0(999, "Super_ShotgunRound");
		((CBasePlayer451 *)this)->sub_103343f0(999, "UziRound");
		((CBasePlayer451 *)this)->sub_103343f0(999, "FlameThrowerRound");
		((CBasePlayer451 *)this)->sub_103343f0(999, "ThirtyeightRound");
		vfunc459("item_g_lockpick", 0);
		vfunc459("item_w_colt_anaconda", 0);
		vfunc459("item_w_deserteagle", 0);
		vfunc459("item_w_ithaca_m_37", 0);
		vfunc459("item_w_mac_10", 0);
		vfunc459("item_w_supershotgun", 0);
		vfunc459("item_w_uzi", 0);
		vfunc459("item_w_katana", 0);
		vfunc459("item_w_bush_hook", 0);
		vfunc459("item_w_tire_iron", 0);
		vfunc459("item_w_knife", 0);
		vfunc459("item_w_baseball_bat", 0);
		vfunc459("item_w_sledgehammer", 0);
		vfunc459("item_a_hvy_cloth", 0);
		vfunc459("item_a_lt_leather", 0);
		vfunc459("item_a_hvy_leather", 0);
		vfunc459("item_a_body_armor", 0);
		vfunc459("item_g_bluebloodpack", 0);
		vfunc459("item_g_bloodpack", 0);
		vfunc459("item_g_eldervitaepack", 0);
		((CBasePlayer451 *)this)->sub_103343f0(2, "BloodRound");
		((CBasePlayer451 *)this)->sub_103343f0(1, "BlueBloodRound");
		((CBasePlayer451 *)this)->sub_10340e50(1000);
		g_107255e4 = 0;
		break;

	case 102:
		sub_1012a6e0((CBaseEntity *)this, 1, 0);
		break;

	case 103:
		pEntity = (CEntView451 *)sub_10172410(this);
		if (pEntity) {
			CNPCView451 *pNPC = pEntity->m_pNPC94;
			if (pNPC)
				pNPC->vfunc581();
		}
		break;

	case 105:
		if (m_bSilent22a0) {
			Msg("Player is audible\n");
			m_bSilent22a0 = 0;
		} else {
			Msg("Player is silent\n");
			m_bSilent22a0 = 1;
		}
		break;

	case 106:
		pEntity = (CEntView451 *)sub_10172410(this);
		if (pEntity) {
			Msg("Classname: %s", EntClassname(pEntity->m_pEdict2e0));
			if (pEntity->m_name26c)
				Msg(" - Name: %s\n", pEntity->m_name26c);
			else
				Msg(" - Name: No Targetname\n");
			if (pEntity->m_iParent124)
				Msg("Parent: %s\n", STRINGR(pEntity->m_iParent124));
			Msg("Model: %s\n", STRINGR(pEntity->vfunc9().pszValue));
			if (pEntity->m_iGlobalname120)
				Msg("Globalname: %s\n", STRINGR(pEntity->m_iGlobalname120));
		}
		break;

	case 107: {
		CGameTrace tr;
		void *pWorld = engine->vfunc38(0);
		Vector start = vfunc193();
		Vector forward;
		sub_10139610(*(QAngle *)&m_vec206c, &forward, 0, 0);
		Vector end = start + forward * 1024.0f;
		UTIL_TraceLine(start, end, 0x400b, this, 0, &tr);
		const char *pTextureName = tr.m_surfaceName;
		if (pTextureName)
			Msg("Texture: %s\n", pTextureName);
		break;
	}

	case 108:
		pEntity = (CEntView451 *)sub_10172410(this);
		if (pEntity) {
			CEntView451 *pNPC = (CEntView451 *)pEntity->m_pNPC94;
			if (pNPC) {
				Msg("Debugging %s (0x%x)\n", EntClassname(pNPC->m_pEdict2e0), pNPC);
				g_10920540 = pNPC;
			}
		}
		break;

	case 195:
		sub_100a99d0("node_viewer_fly", vfunc220(), vfunc221(), 0);
		break;
	case 196:
		sub_100a99d0("node_viewer_large", vfunc220(), vfunc221(), 0);
		break;
	case 197:
		sub_100a99d0("node_viewer_human", vfunc220(), vfunc221(), 0);
		break;

	case 202: {
		Vector forward;
		sub_10139610(*(QAngle *)&m_vec206c, &forward, 0, 0);
		UTIL_TraceLine(vfunc193(), vfunc193() + forward * 128.0f, 0x400b, this, 0, &tr);
		if (tr.m_fraction != 1.0) {
			CBloodSplat *pBlood = new CBloodSplat;
			pBlood->vfunc106("bloodsplat");
			pBlood->sub_101719d0((CBaseEntity *)this);
		}
		break;
	}

	case 203:
		pEntity = (CEntView451 *)sub_10172410(this);
		if (pEntity)
			sub_101cd940((char *)pEntity);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x10173ed0 size=0x87
#include "CBasePlayer.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

bool CBasePlayer::vfunc452(const char *pszKey)
{
	if (_strcmpi(pszKey, "vehicleRole") == 0 && engine->vfunc85() == 2) {
		if (m_b20F4) {
			int role = atoi(engine->vfunc84(1));
			CBasePlayerVehicle *pVehicle = m_pVehicle;
			if (pVehicle && pVehicle->vfunc2(role) == 0) {
				sub_101713c0();
				sub_101712d0(pVehicle, role);
			}
		}
		return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x101743f0 size=0x108
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CBaseCombatWeapon.h"

// TARGET: CBasePlayer::vfunc151
void CBasePlayer::vfunc151(CBaseCombatWeapon *pWeapon)
{
    if (sub_1032e7b0() == (void *)pWeapon) {
        sub_10177120();
        pWeapon->vfunc316(0);
        *(int *)((char *)pWeapon + 0x17c) = 0;
        pWeapon->sub_100ac4e0(0, 0, 0);
        *(int *)((char *)this + 0x1c50) = 0;
    }
    if (EHandle_Get(m_hEnt0EA4) == (void *)pWeapon)
        vfunc443(0);
    unsigned int &h10dc = *(unsigned int *)((char *)this + 0x10dc);
    if (EHandle_Get(h10dc) == (void *)pWeapon)
        h10dc = 0xffffffff;
    unsigned int &h10e0 = *(unsigned int *)((char *)this + 0x10e0);
    if (EHandle_Get(h10e0) == (void *)pWeapon)
        h10e0 = 0xffffffff;
    sub_1032cbe0(pWeapon);
}
// END FUNCTION

// FUNCTION: 0x10174ce0 size=0xb3
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;


#define W10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
#define W100(x) W10(x##0) W10(x##1) W10(x##2) W10(x##3) W10(x##4) W10(x##5) W10(x##6) W10(x##7) W10(x##8) W10(x##9)
struct WeaponSlots {
	W100(a) W100(b) W100(c)
	W10(d0)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual void vfunc319();
	virtual void vfunc320();
};

void CBasePlayer::vfunc458()
{
	unsigned int h = m_h1538;
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13) && s->m_pEntity != 0 && m_n153C != -1)
			return;
	}
	if (m_pVehicle) {
		m_pVehicle->vfunc10(this);
		return;
	}
	if (!(gpGlobals->curtime < m_f1564) && !vfunc412()) {
		vfunc450();
		if (sub_1032e7b0())
			((WeaponSlots *)sub_1032e7b0())->vfunc319();
	} else {
		if (sub_1032e7b0())
			((WeaponSlots *)sub_1032e7b0())->vfunc320();
	}
}
// END FUNCTION

// FUNCTION: 0x10174dd0 size=0x5
#include "CBasePlayer.h"
#include "CBaseEntity.h"

// TARGET: CBasePlayer::vfunc114
// the game's 0x10174dd0: a tail call (jmp) of CBaseEntity::vfunc114
void CBasePlayer::vfunc114()
{
	((CBaseEntity *)this)->CBaseEntity::vfunc114();
}
// END FUNCTION

// FUNCTION: 0x10174e20 size=0x21
#include "CBasePlayer.h"

struct V3 {
	float x, y, z;
};

float *CBasePlayer::vfunc367(float *out)
{
	*(V3 *)out = *(V3 *)((char *)this + 0x206c);
	return out;
}
// END FUNCTION

// FUNCTION: 0x10174e60 size=0xdd
#include "CBasePlayer.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;

struct CBasePlayerViewOffsetView
{
	char m_pad0000[0x184];
	Vector m_vecViewOffset;	// 0x184
};

Vector CBasePlayer::vfunc197(const Vector &posSrc, char bRandom, char bAddViewOffset)
{
	CBasePlayerViewOffsetView *pView = (CBasePlayerViewOffsetView *)this;
	if (bRandom) {
		return *(Vector *)vfunc220() + pView->m_vecViewOffset * g_1070b244->vfunc1(0.5f, 1.0f);
	} else if (bAddViewOffset) {
		return *(Vector *)vfunc220() + pView->m_vecViewOffset;
	} else {
		return vfunc192();
	}
}
// END FUNCTION

// FUNCTION: 0x101755d0 size=0xbc4
#include "CNPC_VTzimisce.h"
#include "CBasePlayer.h"
#include "CSingleUserRecipientFilter.h"
#include "CVStatList_t.h"
#include "globalvars.h"
#include "engineserver.h"

#define HV_V(n) virtual void v##n();
#define HV_T(p) HV_V(p##0) HV_V(p##1) HV_V(p##2) HV_V(p##3) HV_V(p##4) HV_V(p##5) HV_V(p##6) HV_V(p##7) HV_V(p##8) HV_V(p##9)
#define HV_H(p) HV_T(p##0) HV_T(p##1) HV_T(p##2) HV_T(p##3) HV_T(p##4) HV_T(p##5) HV_T(p##6) HV_T(p##7) HV_T(p##8) HV_T(p##9)

struct ELSlot { void *m_pEnt; unsigned int m_Serial; int m_pad; };
struct ELView { int m_vptr; ELSlot m_Slots[1]; };
extern ELView *g_10566458;

struct UCDEngine { HV_V(a0) HV_V(a1) HV_V(a2) HV_V(a3) HV_V(a4) virtual void vfunc5(int n); };
struct UCDSelf { HV_H(a) HV_H(b) HV_H(c) HV_H(d) HV_T(e0) HV_T(e1) HV_T(e2) virtual void vfunc430(); virtual void vfunc431(); virtual void vfunc432(); };
struct UCDEnt { HV_H(a) HV_H(b) HV_H(c) HV_T(d0) HV_T(d1) HV_T(d2) HV_T(d3) HV_V(d40) HV_V(d41) HV_V(d42) HV_V(d43) HV_V(d44) HV_V(d45) HV_V(d46) HV_V(d47) virtual char vfunc348(); };
struct UCDWeapon { HV_H(a) HV_H(b) HV_T(c0) HV_T(c1) HV_T(c2) HV_T(c3) HV_T(c4) HV_T(c5) HV_T(c6) HV_T(c7) HV_V(c80) HV_V(c81) HV_V(c82) HV_V(c83) HV_V(c84) virtual void *vfunc285(); virtual bool vfunc286(); };
struct UCDWeapon2 { HV_H(a) HV_H(b) HV_H(c) virtual void vfunc300(); virtual void vfunc301(void *pPlayer); };
struct UCDRules { HV_T(a) HV_T(b) HV_V(c0) HV_V(c1) HV_V(c2) HV_V(c3) HV_V(c4) HV_V(c5) HV_V(c6) virtual void vfunc27(void *p); HV_T(d) HV_T(e) HV_T(f) HV_T(g) HV_V(h0) HV_V(h1) HV_V(h2) virtual void vfunc71(void *p); };
extern UCDRules *g_1070ba0c;

extern char g_10580ae8;
extern int g_1070ba24;
extern int g_10726014;
extern int g_10726018;
extern int g_1072601c;
extern int g_10726020;
extern int g_10726058;
extern int g_1072605c;
extern int g_10726060;
extern int g_10726064;
extern int g_10726068;
extern int g_1072606c;
extern int g_10726074;
extern int g_10726090;
extern int g_10726094;
extern int g_1074e5fc;
extern char g_10924fb8;
extern unsigned int g_109247e0[2];

struct CPlayerUnit : CBasePlayer { int sub_10174f80(); };
struct UCDChar { int sub_10337860(); };
struct UCDPlayer : CBasePlayer
{
	void *sub_1032e7b0();
	void *sub_1032e8b0(int i);
};

#define M(T, o) (*(T *)((char *)this + (o)))

struct HView
{
	unsigned int m_Index;
	void *Get() const
	{
		if (m_Index != 0xffffffff) {
			ELSlot *s = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (s->m_Serial == (m_Index >> 13))
				return s->m_pEnt;
		}
		return 0;
	}
};
#define HGet(h) (((const HView *)&(h))->Get())
struct HView2 : HView { CBasePlayer *Get() const { return (CBasePlayer *)HView::Get(); } };
struct ELView2 : ELView
{
	void *LookupEntity(const HView &h) const
	{
		if (h.m_Index == 0xffffffff)
			return 0;
		const ELSlot *pInfo = &m_Slots[h.m_Index & 0x1fff];
		if (pInfo->m_Serial == (h.m_Index >> 13))
			return pInfo->m_pEnt;
		else
			return 0;
	}
};
struct HView6 : HView { CBasePlayer *Get() const { return (CBasePlayer *)((ELView2 *)g_10566458)->LookupEntity(*this); } };
#define HGet2(h) (((const HView2 *)&(h))->Get())

extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
extern "C" int __cdecl atexit(void (__cdecl *)());

inline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
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
#define StatList(p, t) FindStatList(CVStatListSet::Of(p), t)

#define max(a, b) (((a) > (b)) ? (a) : (b))

// TARGET: CBasePlayer::vfunc444
void CBasePlayer::vfunc444()
{
	sub_10174580();
	int nState = ((CPlayerUnit *)this)->sub_10174f80();
	((UCDEngine *)engine)->vfunc5(nState);
	M(int, 0x1f84) = sub_10175220();
	M(int, 0x1f80) = sub_10175290();
	CSingleUserRecipientFilter user(this);
	user.MakeReliable();
	if (HGet(m_h1538) && m_n153C != -1 && m_n1540 == 8)
		sub_10175400(1);
	if (m_fInitHUD) {
		m_fInitHUD = false;
		g_10580ae8 = 0;
		engine->vfunc65(&user, g_10726014);
		engine->vfunc67(0);
		engine->vfunc66();
		if (!M(bool, 0x2299)) {
			engine->vfunc65(&user, g_10726018);
			engine->vfunc66();
			g_1070ba0c->vfunc27(this);
			((UCDSelf *)this)->vfunc432();
			M(bool, 0x2299) = true;
		}
	}
	if (g_1070ba24) {
		engine->vfunc65(&user, g_1072601c);
		engine->vfunc67(0);
		engine->vfunc66();
		g_1070ba24 = 0;
	}
	if (m_iHealth != M(int, 0x20e8)) {
		int iHealth = max(m_iHealth, 0);
		if (g_10726020) {
			engine->vfunc65(&user, g_10726020);
			engine->vfunc67(iHealth);
			engine->vfunc66();
		}
		M(int, 0x20e8) = m_iHealth;
	}
	int v = StatList(this, 0)->sub_102012d0(0x10);
	if (v != M(int, 0x1a94)) {
		if (g_1072606c) {
			engine->vfunc65(&user, g_1072606c);
			engine->vfunc67(max(v, 0));
			engine->vfunc66();
		}
		M(int, 0x1a94) = v;
	}
	v = StatList(this, 0)->sub_102012d0(0xc);
	if (v != M(int, 0x1a84)) {
		if (g_10726058) {
			engine->vfunc65(&user, g_10726058);
			engine->vfunc67(max(v, 0));
			engine->vfunc66();
		}
		M(int, 0x1a84) = v;
	}
	v = StatList(this, 0)->sub_102012d0(0xe);
	if (v != M(int, 0x1a88)) {
		if (g_1072605c) {
			engine->vfunc65(&user, g_1072605c);
			engine->vfunc67(max(v, 0));
			engine->vfunc66();
		}
		M(int, 0x1a88) = v;
	}
	if (!(HGet(m_h1538) && m_n153C != -1 && m_n1540 == 8)) {
		CBasePlayer *pTarget = ((const HView6 *)&m_h149C)->Get();
		if (!pTarget && HGet(m_h1538) && m_n153C == 0)
			pTarget = HGet2(m_h1538);
		if (HGet(m_h149C) || (pTarget && m_b14A8)) {
			v = StatList(pTarget, 0)->sub_102012d0(0xc);
			if (v != M(int, 0x1a8c)) {
				v = max(v, 0);
				if (g_10726060) {
					engine->vfunc65(&user, g_10726060);
					engine->vfunc67(v);
					engine->vfunc66();
				}
				M(int, 0x1a8c) = v;
			}
		} else {
			UCDWeapon *pWeapon = (UCDWeapon *)((UCDPlayer *)this)->sub_1032e7b0();
			if (pWeapon && pWeapon->vfunc286()) {
				void *pObj = pWeapon->vfunc285();
				if (pObj) {
					void *pOwner = *(void **)((char *)pObj + 0x9c);
					if (pOwner) {
						v = StatList(pOwner, 0)->sub_102012d0(0xc);
						if (v != M(int, 0x1a8c)) {
							if (g_10726060) {
								engine->vfunc65(&user, g_10726060);
								engine->vfunc67(max(v, 0));
								engine->vfunc66();
							}
							M(int, 0x1a8c) = v;
						}
					}
				}
			}
		}
	}
	bool bSend = false;
	const float &rLast = M(float, 0x1b80);
	if (g_10924fb8 != M(char, 0x1b7c))
		bSend = true;
	else {
		for (int i = 0; i < g_10924fb8; i++) {
			UCDEnt *pEnt = (UCDEnt *)HGet(g_109247e0[i]);
			if (pEnt) {
				if (pEnt->vfunc348() != M(char, 0x1b7d + i))
					bSend = true;
			} else {
				int j;
				for (j = i; j < g_10924fb8 - 1; j++)
					g_109247e0[j] = g_109247e0[j + 1];
				g_10924fb8--;
				g_109247e0[j] = 0xffffffff;
				i--;
			}
		}
	}
	if ((g_10924fb8 && rLast + 2.0f < gpGlobals->curtime) || bSend) {
		engine->vfunc65(&user, g_10726064);
		engine->vfunc67(g_10924fb8);
		M(char, 0x1b7c) = g_10924fb8;
		for (int i = 0; i < g_10924fb8; i++) {
			char b = 0;
			int n = 0;
			UCDEnt *pEnt = (UCDEnt *)HGet(g_109247e0[i]);
			if (pEnt) {
				b = pEnt->vfunc348();
				n = ((UCDChar *)pEnt)->sub_10337860();
			}
			engine->vfunc67(b);
			engine->vfunc71(n);
			M(char, 0x1b7d + i) = b;
		}
		M(float, 0x1b80) = gpGlobals->curtime;
		engine->vfunc66();
	}
	if (m_n146c != M(int, 0x1b68)) {
		if (g_10726068) {
			engine->vfunc65(&user, g_10726068);
			engine->vfunc67(m_n146c);
			engine->vfunc66();
		}
		M(int, 0x1b68) = m_n146c;
	}
	if (M(int, 0x13a4) & 1) {
		M(int, 0x13a4) &= ~1;
		for (int i = 0; i < g_1074e5fc; i++) {
			int n = StatList(this, 3)->sub_10200ca0(i);
			if (n == -1)
				n = 0;
			if (M(int, 0x1a98 + i * 4) != n) {
				M(int, 0x1a98 + i * 4) = n;
				if (g_10726074) {
					engine->vfunc65(&user, g_10726074);
					engine->vfunc67(i);
					engine->vfunc67(n);
					engine->vfunc66();
				}
			}
		}
	}
	if (m_fClientCurrentRangedAccuracy != m_f1DDC) {
		if (g_10726090) {
			int n = (int)m_f1DDC;
			engine->vfunc65(&user, g_10726090);
			engine->vfunc67(n);
			engine->vfunc66();
			m_fClientCurrentRangedAccuracy = m_f1DDC;
		}
	}
	if (g_10726094 && (m_iForceCameraType == 8 || m_iForceCameraType == 16)) {
		engine->vfunc65(&user, g_10726094);
		engine->vfunc67(m_iForceCameraType);
		engine->vfunc66();
	}
	m_iForceCameraType = 0;
	for (int i = 0; i < 0xe0; i++) {
		if (((UCDPlayer *)this)->sub_1032e8b0(i))
			((UCDWeapon2 *)((UCDPlayer *)this)->sub_1032e8b0(i))->vfunc301(this);
	}
	g_1070ba0c->vfunc71(this);
}
// END FUNCTION

// FUNCTION: 0x10177210 size=0x73
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
extern char g_106b8540[];
void sub_101cecf0(void *pPlayerObject, int message, void *pData);

struct CWeaponNameObject {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual const char *GetName();
};
struct CWeaponNameSource {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual CWeaponNameObject *GetObject();
};
struct CWeaponEdictView {
    char m_pad[0x40];
    CWeaponNameSource *m_pSource;
};

bool CBasePlayer::vfunc382(CBaseCombatWeapon *pWeapon)
{
    if (pWeapon->vfunc360() & 0x18000) {
        CWeaponEdictView *pEdict = *(CWeaponEdictView **)((char *)pWeapon + 0x2e0);
        const char *pszName;
        if (!pEdict->m_pSource)
            pszName = g_106b8540;
        else
            pszName = pEdict->m_pSource->GetObject()->GetName();
        if (((CBaseCombatCharacter *)this)->sub_1032d890(pszName, 0)) {
            void *pPlayerObject = *(void **)((char *)this + 0xa8);
            sub_101cecf0(pPlayerObject, 0x4e, (char *)pWeapon->sub_102517b0() + 0x88);
            return false;
        }
    }
    return true;
}
// END FUNCTION

// FUNCTION: 0x101772b0 size=0x3b4
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"
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
// TARGET: CBasePlayer::vfunc388
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CBaseAnimating.h"

char __fastcall sub_10256280(CBaseCombatWeapon *pWeapon);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

char CBasePlayer::vfunc388(CBaseEntity *pWeapon, int a)
{
	if (m_bCanSwitchWeapons)
	{
		CBaseAnimating *viewWeapon = (CBaseAnimating *)m_pViewWeapon.Get();
		if (((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc388(pWeapon, a))
		{
			CBaseCombatWeapon *w = (CBaseCombatWeapon *)pWeapon;
			if (w && !sub_10256280(w))
			{
				if (EHandleDetail::g_10566458->LookupEntity(m_pViewWeapon))
					((CBaseCombatWeapon *)EHandleDetail::g_10566458->LookupEntity(m_pViewWeapon))->vfunc359();

				m_pViewWeapon = (CBaseEntity *)sub_1032e120(STRINGR(pWeapon->m_classname11c));

				if (m_pViewWeapon)
					((CBaseCombatWeapon *)m_pViewWeapon.Get())->vfunc298((CBaseEntity *)this, 0);

				if (m_pViewWeapon)
				{
					if (w->sub_10256220())
					{
						if (viewWeapon && viewWeapon->sub_100952d0(-1))
						{
							int seq = viewWeapon->sub_1008dd30(0xb5, -1);
							if (seq == -1)
							{
								seq = viewWeapon->sub_1008dd30(0xde, -1);
								if (seq == -1)
									seq = 0;
							}
							m_f1564 = viewWeapon->sub_10091080(seq) + gpGlobals->curtime;
						}
						else
						{
							m_f1564 = gpGlobals->curtime + 0.1f;
						}
						*(short *)((char *)m_pViewWeapon.Get() + 0x8da) = *(short *)((char *)w + 0x8da);
						((CBaseCombatWeapon *)m_pViewWeapon.Get())->vfunc105(STRINGR(w->m_pszModelName754));
					}
					else
					{
						*(short *)((char *)m_pViewWeapon.Get() + 0x8da) = *(short *)((char *)w + 0x8da);
						((CBaseCombatWeapon *)m_pViewWeapon.Get())->vfunc105("models/weapons/w_null.mdl");
					}
				}
			}

			if (m_pViewWeapon)
				((CBaseEntity *)m_pViewWeapon.Get())->sub_1009d1e0();

			for (int i = 0; i < 2; i++)
			{
				CBaseEntity *e = sub_1015d680(i);
				if (e)
					e->sub_1009d1e0();
			}

			if (w && !w->sub_10256220())
				return 1;

			CBaseEntity *e2 = sub_1015d680(a);
			if (e2)
				e2->vfunc67();

			sub_10177120();
			return 1;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10177760 size=0x55
#include "CBasePlayer.h"
struct CEntView443 {
	CBP_V1(a0)
	virtual unsigned int *vfunc1();
	CBP_V100(b) CBP_V100(c) CBP_V10(d0) CBP_V10(d1) CBP_V10(d2) CBP_V10(d3) CBP_V10(d4) CBP_V10(d5)
	CBP_V1(e0) CBP_V1(e1) CBP_V1(e2) CBP_V1(e3) CBP_V1(e4) CBP_V1(e5)
	virtual char vfunc268();
};
int __fastcall sub_10010ea6(void *p);

inline void SetH443(unsigned int &h, CEntView443 *p)
{
	if (p)
		h = *p->vfunc1();
	else
		h = 0xffffffff;
}

// TARGET: CBasePlayer::vfunc443
void CBasePlayer::vfunc443(int a)
{
	CEntView443 *pEnt = (CEntView443 *)a;
	if (pEnt) {
		char *p = (char *)sub_10010ea6(pEnt);
		if ((*(unsigned int *)(p + 0x242c) & 1) == 1)
			return;
		if (pEnt->vfunc268())
			return;
	}
	SetH443(m_hEnt0EA4, pEnt);
}
// END FUNCTION

// FUNCTION: 0x101777e0 size=0xd1
#include "CBasePlayer.h"
#include <string.h>
#include "CBaseCombatCharacter.h"

extern char g_106b8540[];

struct CWeaponSlotView	// the weapon's virtual table up to slot 371
{
	CBP_V100(a) CBP_V100(b) CBP_V100(c)
	CBP_V1(d0) CBP_V1(d1) CBP_V1(d2) CBP_V1(d3) CBP_V1(d4) CBP_V1(d5) CBP_V1(d6)
	virtual void vfunc307(int a);
	CBP_V10(e0) CBP_V10(e1) CBP_V10(e2) CBP_V10(e3) CBP_V10(e4) CBP_V10(e5)
	CBP_V1(f0) CBP_V1(f1) CBP_V1(f2)
	virtual char vfunc371();
};

struct CPlayerSlot151View	// the player's virtual table up to slot 151
{
	CBP_V100(a) CBP_V10(b0) CBP_V10(b1) CBP_V10(b2) CBP_V10(b3) CBP_V10(b4)
	CBP_V1(c150)
	virtual void vfunc151(CBaseEntity *pWeapon);
};

static inline const char *GetClassname(const char *const *ppClassname)
{
	return *ppClassname ? *ppClassname : g_106b8540;
}

// TARGET: CBasePlayer::vfunc385
void CBasePlayer::vfunc385(CBaseEntity *pWeapon, int a, char bFlag)
{
	if (!_stricmp(GetClassname(&pWeapon->m_classname11c), "item_w_unarmed"))
		return;
	if (!bFlag && !*(int *)((char *)((CBasePlayer *)pWeapon)->sub_102517b0() + 0x4fe9c))
		return;
	char bActive = 0;
	if (pWeapon == (CBaseEntity *)sub_1032e7b0())
		bActive = 1;
	if (pWeapon) {
		if (bActive)
			((CWeaponSlotView *)pWeapon)->vfunc307(0xb6);
		if (((CWeaponSlotView *)pWeapon)->vfunc371() && *(int *)((char *)pWeapon + 0x8d0) > 1)
			goto skipRemove;
	}
	((CPlayerSlot151View *)this)->vfunc151(pWeapon);
skipRemove:
	sub_1032d0c0(pWeapon, a, 0);
	if (bActive && !((CBaseCombatCharacter *)this)->sub_10334860(0)) {
		CBaseEntity *pEnt = sub_1015d680(a);
		if (pEnt)
			pEnt->vfunc66();
	}
}
// END FUNCTION

// FUNCTION: 0x10177900 size=0x141
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CGameRules.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"

extern CGlobalEntityList *g_10566458;
extern CGameRules *g_1070ba0c;

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct HolderSlots
{
	V100(a) V100(b)
	V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5) V10(c6) V10(c7) V10(c8)
	virtual void c90(); virtual void c91(); virtual void c92(); virtual void c93(); virtual void c94(); virtual void c95(); virtual void c96(); virtual void c97();
	virtual void slot298(CBasePlayer *pOwner, int a);
	virtual void c99();
	V10(d0) V10(d1) V10(d2) V10(d3) V10(d4)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8();
	virtual void slot359();
};

static inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return s->m_pEntity;
	}
	return 0;
}

#define HOLDER_HANDLE (*(unsigned int *)((char *)this + 0x1c64))

void CBasePlayer::vfunc383(CBaseEntity *pWeapon, char bNoSwitch)
{
	if (!bNoSwitch) {
		if (LookupEntity(*(volatile unsigned int *)((char *)this + 0x1c64)))
			((HolderSlots *)LookupEntity(HOLDER_HANDLE))->slot359();
		void *pHolder = sub_1032e120(pWeapon->m_classname11c ? pWeapon->m_classname11c : g_106b8540);
		if (pHolder)
			HOLDER_HANDLE = *((CBaseEntity *)pHolder)->vfunc1();
		else
			HOLDER_HANDLE = 0xffffffff;
		if (LookupEntity(*(volatile unsigned int *)((char *)this + 0x1c64)))
			((HolderSlots *)LookupEntity(HOLDER_HANDLE))->slot298(this, 0);
	}
	sub_1032d380(pWeapon, bNoSwitch);
	if (!bNoSwitch) {
		if (g_1070ba0c->vfunc19((CBaseEntity *)this, pWeapon))
			vfunc388(pWeapon, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10177bf0 size=0x7
#include "CBasePlayer.h"
struct CBasePlayerView233c
{
	char m_pad[0x233c];
	int m_n233c;
};

int CBasePlayer::vfunc200()
{
	return ((CBasePlayerView233c *)this)->m_n233c;
}
// END FUNCTION

// FUNCTION: 0x10177c10 size=0x3c1
// TARGET: ?vfunc440@CBasePlayer@@UAEXHMPAVVector@@@Z
#include "UTIL_Trace.h"
#include "CBasePlayer.h"
#include "CSprayCan.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "engineserver.h"

namespace block_10177c10 {
#pragma auto_inline(off)
struct RayInit : Ray_t { void sub_1004f7a0(const float *pStart, const float *pEnd); };
void RayInit::sub_1004f7a0(const float *pStart, const float *pEnd)
{
    VectorSubtract(*(const Vector *)pEnd, *(const Vector *)pStart, *(Vector *)m_Delta);
    m_IsSwept = ((Vector *)m_Delta)->LengthSqr() != 0;
    m_StartOffset[2] = 0;
    m_StartOffset[1] = 0;
    m_StartOffset[0] = 0;
    m_IsRay = true;
    m_Extents[2] = 0;
    m_Extents[1] = 0;
    m_Extents[0] = 0;
    m_Start[0] = pStart[0];
    m_Start[1] = pStart[1];
    m_Start[2] = pStart[2];
    m_b32 = 0;
    m_n34 = 0;
    m_b33 = 0;
}
#pragma auto_inline(on)
}
using namespace block_10177c10;
inline void TraceLineCallsR(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (g_10738960.sub_1005f190())
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}
inline void TraceLineRayCallR(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, const void *ignore,
	int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

struct CPod3 { int a, b, c; };

struct CServerUnknownView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *GetBaseEntity(); };

inline CBaseEntity *UTIL_EntityByIndex440(int i)
{
	CBaseEntity *pEntity = 0;
	void *pEdict = engine->vfunc38(i);
	if (pEdict)
	{
		CServerUnknownView *pUnk = *(CServerUnknownView **)((char *)pEdict + 0x40);
		if (pUnk)
			pEntity = pUnk->GetBaseEntity();
	}
	return pEntity;
}

void CBasePlayer::vfunc440(int nUnused, float flDelta, Vector *pOut)
{
	Vector vecSrc;
	Vector forward;
	{ const CPod3 *pc = (const CPod3 *)(&(const Vector &)vfunc193()); CPod3 *pd = (CPod3 *)&vecSrc; int a = pc->a; int b = pc->b; pd->a = a; int c = pc->c; pd->b = b; pd->c = c; }
	sub_10139610(*(QAngle *)&m_vec206c, &forward, 0, 0);
	Vector dir;
	dir = forward;
	Vector vecEnd;
	{
		Vector scaled = dir.sub_100a19c0(4096.0f);
		vecEnd = vecSrc + scaled;
	}
	CGameTrace tr;
	TraceLineCallsR(vecSrc, vecEnd, 0x200400b, this, 0, &tr);
	if (tr.m_pEnt && (tr.m_pEnt->sub_100b3700() & 0x10000))
	{
		*pOut = forward;
		return;
	}
	Vector bestdir = dir;
	float bestdot = flDelta;
	for (int i = 1; i < engine->vfunc39(); i++)
	{
		CBaseEntity *pEntity = UTIL_EntityByIndex440(i);
		if (!pEntity)
			continue;
		if (!(pEntity->sub_100b3700() & 0x10000))
			continue;
		if (pEntity->sub_100b3700() & 0x40000)
			continue;
		if ((void *)pEntity == (void *)this)
			continue;
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pEntity + 0x270);
		for (int j = 0; j < 3; j++)
			vecEnd[j] = (*(const Vector *)((CEntityVSlots *)pEntity)->slot220())[j] + (((*(const Vector *)pCol->vfunc1())[j] + (*(const Vector *)pCol->vfunc2())[j]) * 0.75 + m_vecViewOffset184[j] * 0.0);
		dir = vecEnd - vecSrc;
		VectorNormalize(dir);
		float dot = DotProduct(dir, forward);
		if (dot < bestdot)
			continue;
		TraceLineRayCallR(vecSrc, vecEnd, 0x200400b, this, 0, &tr);
		if (tr.m_pEnt == pEntity)
		{
			bestdot = dot;
			bestdir = dir;
		}
	}
	*pOut = bestdir;
}
// END FUNCTION

// FUNCTION: 0x10178280 size=0x127
#include "CBasePlayer.h"
#include "CAI_BaseNPCTroika.h"
extern "C++" __declspec(dllimport) void DevWarning(const char *fmt, ...);
extern "C" void *__RTDynamicCast(void *pObj, long vfDelta, void *pSrcType, void *pTargetType, int isReference);
extern char g_10587908[];
extern char g_10587930[];
void sub_101cebc0(CBasePlayer *pPlayer, int a, int b);
CBaseEntity *sub_10070470(const char *psz, int a, int b, int c, int d);
void sub_100826b0(int a);

struct ZDialog10178280
{
	char sub_100e05f0(CBasePlayer *pPlayer, void *pOther);
};

namespace block_10178280 {
struct ZPlayerUnit : CBasePlayer
{
	void sub_1015ef40();
};
void ZPlayerUnit::sub_1015ef40()
{
	*((char *)this + 0x19f7) = 1;
}
}
using namespace block_10178280;

struct ZView10178280 : CBasePlayer
{
	void sub_10107050(int a);
	void sub_10167fd0();
	char sub_10328df0(void *pOther, int a);
	void sub_10147a60();
};

// TARGET: CBasePlayer::vfunc414
void CBasePlayer::vfunc414(CBaseEntity *pEnt)
{
	ZView10178280 *z = (ZView10178280 *)this;
	if (pEnt)
	{
		char *pObj = *(char **)((char *)pEnt + 0x98);
		if (pObj)
		{
			if (!pObj[0x6495] && sub_10178170())
			{
				sub_101cebc0(this, 0x41, 0);
				z->sub_10107050(0);
				return;
			}
			if (((ZDialog10178280 *)sub_10178120())->sub_100e05f0(this, pObj))
			{
				z->sub_10167fd0();
				z->sub_10107050((int)pObj);
				((ZPlayerUnit *)this)->sub_1015ef40();
				*((char *)this + 0x1e01) = 0;
				if (sub_1032e7b0() && *((char *)sub_1032e7b0() + 0x870))
					*((char *)this + 0x1e01) = 1;
				else
					*((char *)this + 0x1e01) = 0;
				vfunc457("item_w_unarmed", 0);
				if (__RTDynamicCast(pObj, 0, g_10587908, g_10587930, 0))
				{
					if (!z->sub_10328df0(pObj, 5))
						DevWarning("Couldn't grapple payphone!\n");
				}
				else
				{
					const char *pszName = *(const char **)(pObj + 0x64c4);
					if (!pszName)
						pszName = "";
					sub_1017cef0(sub_10070470(pszName, 0, 0, 0, 0));
				}
				z->sub_10147a60();
				sub_100826b0(0);
				return;
			}
			z->sub_10107050(0);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10178400 size=0x42
#include "CBaseEntity.h"
#include "CBasePlayer.h"
void sub_101cd940(CBaseEntity *);
void sub_100828d0();
namespace block_10178400 {
void __fastcall sub_1015ef60(char *p) { p[0x19f7] = 0; }
}
struct CUnitP2 : CBasePlayer {
    void sub_10107050(int);
    void sub_10178400();
};
void CUnitP2::sub_10178400()
{
    sub_101cd940(sub_1000306c());
    sub_1017cef0(0);
    block_10178400::sub_1015ef60((char *)this);
    if (*((char *)this + 0x1e01))
        vfunc456();
    sub_10107050(0);
    sub_100828d0();
}
// END FUNCTION

// FUNCTION: 0x10178660 size=0xf6
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"

struct EdictObj_t {
	void sub_10014eb6(Vector *pOut, int b);
};

struct EntEdictView_t {
	char pad[0x98];
	EdictObj_t *pEdict;
};

extern Vector g_1070d1b0;

void CBasePlayer::sub_10178660(CBaseEntity *pEnt, char bCenter)
{
	Vector vec;
	CEntityVSlots *pSlots = (CEntityVSlots *)pEnt;
	if (bCenter) {
		vec = pSlots->slot192();
	} else {
		EntEdictView_t *pView = (EntEdictView_t *)pEnt;
		if (pView->pEdict) {
			pView->pEdict->sub_10014eb6(&vec, 0);
		} else {
			Vector tmp;
			vec = *pSlots->slot193(&tmp);
		}
		if (vec == g_1070d1b0)
			vec = pSlots->slot192();
	}
	sub_10178590(vec);
}
// END FUNCTION

// FUNCTION: 0x10178a10 size=0x25e
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
#include "Vector.h"
#include "QAngle.h"
#include "animevent_t.h"
extern "C" int sscanf(const char *, const char *, ...);
CBaseEntity *sub_10070550(const char *, CBasePlayer *);
void sub_10139550(const QAngle &, Vector *);
// TARGET: CBasePlayer::vfunc259
void CBasePlayer::vfunc259(animevent_t *pEvent)
{
	if ( vfunc406() )
		return;
	if ( pEvent->pSource != (CBaseEntity *)this )
		return;
	switch ( pEvent->event )
	{
	case 0x802: case 0x803: case 0x804: case 0x805:
		return;
	case 0x80c:
	{
		char name[64];
		float c = 1.0f, b = 0.2f, a = 0.2f, d;
		if ( sscanf(pEvent->options, "%s %f %f %f", name, &c, &b, &a) > 1 && c > 0.0f )
		{
			if ( a + b > c )
			{
				float f = c / (a + b);
				b = b * f;
				a = f * a;
			}
			float t = c - (a + b);
			d = t > 0.0f ? t : 0.0f;
			((CBaseCombatCharacter *)this)->sub_10106580(name, 0, b, d, a, 1.0f);
		}
		return;
	}
	case 0xfd2:
	{
		const char *n = pEvent->options;
		if ( n && *n )
		{
			CBaseEntity *e = sub_10070550(n, this);
			if ( e )
			{
				*(char *)((char *)e + 0x640) = 1;
				sub_1017cef0(e);
				*(char *)((char *)e + 0x5e8) = 0;
			}
		}
		return;
	}
	case 0xfd3:
	{
		sub_1017cef0(0);
		Vector dir;
		sub_10139550(*(QAngle *)vfunc221(), &dir);
		dir.z = 0;
		VectorNormalize(dir);
		Vector off = dir * 1000.0f;
		Vector r = off + vfunc193();
		sub_10178590(r);
		return;
	}
	default:
		sub_1032e330(pEvent);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x10178d10 size=0x63
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGameRules.h"
extern CGameRules *g_1070ba0c;
// TARGET: CBasePlayer::vfunc359
int CBasePlayer::vfunc359(CBaseEntity *pEnt)
{
    if (m_n146c > 0)
        return 3;
    if (!pEnt)
        return -1;
    int n = g_1070ba0c->vfunc64((int)this, (int)pEnt);
    if (n != 1 && n != 3) {
        if (n == 4)
            return 5;
        if (n == 2 || n == 0)
            return 1;
    }
    return 2;
}
// END FUNCTION

// FUNCTION: 0x10179740 size=0x6
extern char g_10725674[];

// TARGET: sub_10179740
void *sub_10179740()
{
	return g_10725674;
}
// END FUNCTION

// FUNCTION: 0x10179760 size=0x3
// TARGET: sub_10179760
int sub_10179760() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1017b880 size=0x3
// TARGET: sub_1017b880
void __stdcall sub_1017b880(int a) {
}
// END FUNCTION

// FUNCTION: 0x1017b8a0 size=0x463
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "IPhysicsObject.h"
#include "CGameTrace.h"
#include "ConVar.h"
#include "Vector.h"

extern ConVar g_10725ca0;	// physicsshadowupdate_render
extern float (__fastcall *g_1057966c)(Vector *pVec);
void sub_10142aa0(const Vector &origin, const Vector &mins, const Vector &maxs, int r, int g, int b, int a, float duration);
void sub_101cd190(CBasePlayer *pEntity, const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, CBasePlayer *pIgnore, int nCollisionGroup, CGameTrace *ptr);

#define VPHYS_MAX_DISTANCE 2.0
#define VPHYS_MAX_VEL 10
#define VPHYS_MAX_DISTSQR (VPHYS_MAX_DISTANCE*VPHYS_MAX_DISTANCE)
#define VPHYS_MAX_VELSQR (VPHYS_MAX_VEL*VPHYS_MAX_VEL)
struct CPlayerShadowView
{
	char sub_1016b980(IPhysicsObject *pPhysics);	// IsRideablePhysics
	IPhysicsObject *sub_1016b9d0();	// GetGroundVPhysics
	int sub_100b3700();	// GetFlags
	void sub_100b1d10();	// CalcAbsoluteVelocity
	void sub_100b2aa0(const Vector &v);	// ApplyAbsVelocityImpulse
};

#define PV ((CPlayerShadowView *)this)

struct CPhysObj12R
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual float slot12();
};
#pragma auto_inline(off)
namespace block_1017b8a0 {
struct CBasePlayer1016b980
{
	char m_pad0000[0x36c];
	int m_pObj;
	char sub_1016b980(void *pObj);
};
char CBasePlayer1016b980::sub_1016b980(void *pObj)
{
	if (pObj)
	{
		CPhysObj12R *pOther = (CPhysObj12R *)pObj;
		CPhysObj12R *pSelf = (CPhysObj12R *)m_pObj;
		float a = pOther->slot12();
		float b = pSelf->slot12();
		return a > (b + b);
	}
	return false;
}
}
#pragma auto_inline(on)
#define RIDE(p) (((block_1017b8a0::CBasePlayer1016b980 *)this)->sub_1016b980(p))

struct CPlayerVelView
{
	char m_pad0[0x268];
	unsigned int m_iEFlags;
	char m_pad1[0x270 - 0x26c];
	CBasePlayerSub270 m_Collision;
	char m_pad2[0x3bc - 0x274];
	Vector m_vecAbsVelocity;
	void sub_100b1d10();
	bool IsEFlagSet(int nEFlagMask) const { return (m_iEFlags & nEFlagMask) != 0; }
	const Vector &GetAbsVelocity() { if ((bool)((m_iEFlags >> 12) & 1)) sub_100b1d10(); return m_vecAbsVelocity; }
	const Vector &WorldAlignMins() { return *(Vector *)m_Collision.vfunc1(); }
	const Vector &WorldAlignMaxs() { return *(Vector *)m_Collision.vfunc2(); }
};
#define VV ((CPlayerVelView *)this)
#define m_touchedPhysObject m_pad2128[0]
#define EV ((CEntityVSlots *)this)

// TARGET: CBasePlayer::vfunc229
void CBasePlayer::vfunc229(CBaseEntity *pOther)
{
	IPhysicsObject *pPhysics = (IPhysicsObject *)pOther;
	Vector newPosition;

	bool physicsUpdated = m_pPartOwner->vfunc6(&newPosition, 0) > 0 ? true : false;

	if (m_pPartOwner->vfunc3())
	{
		m_touchedPhysObject = true;
	}

	if (vfunc94() == 9 || vfunc94() == 0 || sub_101618a0())
	{
		m_oldOrigin = *EV->slot217();
		return;
	}

	if (!physicsUpdated)
		return;

	IPhysicsObject *pPhysGround = PV->sub_1016b9d0();

	Vector newVelocity;
	pPhysics->vfunc37(&newPosition, 0);
	pPhysics->vfunc40((float *)&newVelocity, 0);

	if (g_10725ca0.GetInt())
	{
		sub_10142aa0(*EV->slot217(), VV->WorldAlignMins(), VV->WorldAlignMaxs(), 255, 0, 0, 24, 15.0f);
		sub_10142aa0(newPosition, VV->WorldAlignMins(), VV->WorldAlignMaxs(), 0, 0, 255, 24, 15.0f);
	}

	Vector tmp = *EV->slot217() - newPosition;
	if (!m_touchedPhysObject && !(PV->sub_100b3700() & 1))
	{
		tmp.z *= 0.5f;
	}

	float dist = tmp.LengthSqr();
	float deltaV = (newVelocity - VV->GetAbsVelocity()).LengthSqr();

	float maxVelErrorSqr = VPHYS_MAX_VELSQR;
	float maxDistErrorSqr;
	maxDistErrorSqr = 4.0f;
	if (RIDE(pPhysGround)) { maxVelErrorSqr *= 0.25; maxDistErrorSqr = 1.0f; }

	if (dist >= maxDistErrorSqr || deltaV >= maxVelErrorSqr || (pPhysGround && !m_touchedPhysObject))
	{
		if (m_touchedPhysObject || pPhysGround)
		{
			if (deltaV >= maxVelErrorSqr)
			{
				Vector dir = VV->GetAbsVelocity();
				float len = g_1057966c(&dir);
				float dot = DotProduct(newVelocity, dir);
				if (dot > len)
					dot = len;
				else if (dot < -len)
					dot = -len;

				dir *= dot;
				newVelocity -= dir;

				if (!PV->sub_1016b980(pPhysGround))
					PV->sub_100b2aa0(newVelocity);
			}

			CGameTrace trace;
			sub_101cd190(this, newPosition, newPosition, 0x201400b, this, 6, &trace);
			if (!trace.m_allsolid && !trace.m_startsolid)
			{
				EV->slot216(&newPosition);
			}
		}
		else
		{
			CGameTrace trace;
			sub_101cd190(this, *EV->slot217(), *EV->slot217(), 0x201400b, this, 6, &trace);
			if (trace.m_allsolid || trace.m_startsolid)
			{
				EV->slot216(&newPosition);
			}
		}
	}
	else
	{
		if (m_touchedPhysObject)
		{
			CGameTrace trace;
			sub_101cd190(this, *EV->slot217(), *EV->slot217(), 0x201400b, this, 6, &trace);
			if (trace.m_allsolid || trace.m_startsolid)
			{
				EV->slot216(&newPosition);
			}
		}
	}
	m_oldOrigin = *EV->slot217();
}
// END FUNCTION

// FUNCTION: 0x1017be30 size=0x3
// TARGET: sub_1017be30
char sub_1017be30() {
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1017be50 size=0x8f
#include "CBasePlayer.h"
int sub_1002dfe0(int a, int b);

// TARGET: CBasePlayer::vfunc468
void CBasePlayer::vfunc468()
{
    se03();
    int w = m_sub270.vfunc1();
    int h = m_sub270.vfunc2();
    int stand = sub_1002dfe0(w, h);
    float maxs[3] = { 16.0f, 16.0f, 36.0f };
    float mins[3] = { -16.0f, -16.0f, 0.0f };
    int crouch = sub_1002dfe0((int)mins, (int)maxs);
    sub_1017b6f0(stand, "player_stand", crouch, "player_crouch");
}
// END FUNCTION

// FUNCTION: 0x1017fb30 size=0x1b3
#include "CBaseCombatWeapon.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CVStatList_t.h"
#include "CDisciplineParticle.h"
#include "CUnknown10739d08.h"

struct CDiscValues_101e9080 { void sub_101e9080(int *a, int *b, int *c, int *d); };
extern CDiscValues_101e9080 g_10739d08;
void __cdecl sub_1022d9d0(CBasePlayer *pPlayer, int n);
void __cdecl sub_101cdba0(const Vector *v, float a, float b, float c, float d, int e, bool f);
const char *__cdecl sub_101d3730(const char *fmt, const char *arg);

// TARGET: CBasePlayer::vfunc300
void CBasePlayer::vfunc300(CBaseEntity *pVictim, char bQuiet, int n)
{
	sub_1032c580(pVictim, bQuiet, n);
	if (((CBasePlayer *)pVictim)->sub_1033d580(this))
		sub_1022d9d0(this, 3);
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
	if (pWeapon && (pWeapon->vfunc360() & 0x18000)) {
		if (CVStatListSet::Of(this)->Find(3)->sub_102012d0(9) > 0) {
			float a, c, d;
			g_10739d08.sub_101e9080((int *)&a, (int *)&c, (int *)&d, &n);
			sub_101cdba0(&vfunc192(), a, c, d, (float)n, 0, false);
			CDisciplineParticle::sub_10050d90((int)pVictim, 9, 0x3f800000, 0x3f800000, 0x3f800000, (int)"D_Potence_DeathBlow_Emitter", 2, (int)"Bip01 Spine2", 0, 0);
			CDisciplineParticle::sub_10050d90((int)pVictim, 9, 0x3f800000, 0x3f800000, 0x3f800000, (int)"D_Potence_DeathBlow2_Emitter", 1, (int)g_106b8540, 0, 0);
		}
	}
	if (!bQuiet) {
		sub_1017e150(4, -1.0f, sub_101d3730("Event_TookLife %s", pVictim ? pVictim->sub_1000b5cd() : "UNKNOWN"));
	}
}
// END FUNCTION

// FUNCTION: 0x101821e0 size=0x1b
#include "CBasePlayer.h"

int CBasePlayer::vfunc298(int a)
{
	return (a == 4 || a == 5) ? 0x18 : 7;
}
// END FUNCTION

// FUNCTION: 0x101824c0 size=0xd
#include "CBasePlayer.h"
void CBasePlayer::vfunc338(int a, char b, int c)
{
	sub_1033cc30(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x101824e0 size=0xd
#include "CBaseCombatCharacter.h"
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc339
void CBasePlayer::vfunc339(int a, float b, int c)
{
	((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc339(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10182500 size=0x15
#include "CBasePlayer.h"

struct CBaseCombatCharacter_Fwd
{
	int sub_1033ccd0(int a, float b, float c);
};

int CBasePlayer::vfunc340(int a, float b, float c)
{
	return ((CBaseCombatCharacter_Fwd *)this)->sub_1033ccd0(a, b, c);
}
// END FUNCTION

// FUNCTION: 0x10182530 size=0xd
void sub_1033cef0(int a, float b);

void sub_10182530(int a, float b)
{
	sub_1033cef0(a, b);
}
// END FUNCTION

// FUNCTION: 0x10182550 size=0x1b8
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CUnknown1074e098.h"

extern CUnknown1074e098 g_1074e098;

struct CLocalPlayerView
{
	char m_pad0000[0x49c];
	int m_n49c;
};

int sub_1023bd00();
struct Holder;
bool __fastcall sub_101681a0(Holder *p);

static inline CBaseEntity *LookupIn(CGlobalEntityList *pList, unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &pList->m_Slots[h & 0x1fff];
	if ((unsigned int)pSlot->m_Serial == (h >> 13))
		return (CBaseEntity *)pSlot->m_pEntity;
	return 0;
}

static inline CBaseEntity *LookupG(const unsigned int &h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
	if ((unsigned int)pSlot->m_Serial == (h >> 13))
		return (CBaseEntity *)pSlot->m_pEntity;
	return 0;
}

#pragma auto_inline(off)
namespace block_10182550 {
struct CBasePlayer101618a0
{
	char m_pad0000[0x1db0];
	unsigned int m_h1db0;
	CBaseEntity *sub_101618a0();
};
CBaseEntity *CBasePlayer101618a0::sub_101618a0()
{
	unsigned int h = m_h1db0;
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *info = &g_10566458->m_Slots[h & 0x1fff];
		if ((unsigned int)info->m_Serial == (h >> 13))
			return (CBaseEntity *)info->m_pEntity;
	}
	return 0;
}
}
#pragma auto_inline(on)

// TARGET: CBasePlayer::vfunc334
bool CBasePlayer::vfunc334(int a, int b)
{
	CBaseEntity *pEnt;
	if (a == 4 && (pEnt = LookupG(m_hUseEnt1040)) && pEnt->vfunc33() == 300)
		return true;
	if (LookupG(m_hDialogPartnerFE8))
		return false;
	if (((block_10182550::CBasePlayer101618a0 *)this)->sub_101618a0() && !LookupG(m_h155C))
		return false;
	if (sub_1017d900() > 0.0)
		return false;
	if (LookupIn(g_10566458, *(unsigned int *)&m_hFadeEnt19C0))
		return false;
	if (EHandle_Get(*(unsigned int *)&m_hFadeEnt19CC))
		return false;
	if (sub_1000306c())
		return false;
	if (g_1074e098.sub_10200370(a)->m_b108 && sub_101681a0((Holder *)this))
		return false;
	CLocalPlayerView *pLocal = (CLocalPlayerView *)sub_1023bd00();
	if (pLocal && pLocal->m_n49c == 2)
		return false;
	return sub_10330020(a, b);
}
// END FUNCTION

// FUNCTION: 0x10182ec0 size=0x40
struct CPlayerAcc
{
	char sub_102585c0();
};

struct CUnk10725fbc
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad0004[0x2c - 4];
	int m_n2c;
};

extern CUnk10725fbc *g_10725fbc;

// TARGET: sub_10182ec0
char __stdcall sub_10182ec0(void *pPlayer, char bForce)
{
	if (bForce)
		return 1;
	if (((CPlayerAcc *)pPlayer)->sub_102585c0())
	{
		if (!g_10725fbc->vfunc1() && g_10725fbc->m_n2c != 0)
			return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10182f10 size=0x5
// TARGET: sub_10182f10
bool __stdcall sub_10182f10(int a)
{
	return true;
}
// END FUNCTION

// FUNCTION: 0x10182f30 size=0x11
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc21
void CBasePlayer::vfunc21(int a)
{
	m_f1DD0 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10182f60 size=0x11
#include "CBasePlayer.h"

// TARGET: CBasePlayer::vfunc22
void CBasePlayer::vfunc22(int a)
{
	m_f1DD0 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10182f90 size=0x11
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc23
void CBasePlayer::vfunc23(int a)
{
	m_f1DD0 = gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10182fc0 size=0x52
#include "CBasePlayer.h"
#include "CBaseEntity.h"
void CBasePlayer::vfunc24(CBaseEntity *pOther)
{
	if (pOther) {
		m_hEnt1C60 = (CBaseEntity *)pOther->m_p9c;
		m_f1DD8 = gpGlobals->curtime;
	}
}
// END FUNCTION

// FUNCTION: 0x10183040 size=0x34
#include "CBasePlayer.h"
#include "CBaseEntity.h"

// TARGET: CBasePlayer::vfunc25
void CBasePlayer::vfunc25(CBaseEntity *pOther)
{
	if (pOther)
	{
		m_hEnt1C60 = (CBaseEntity *)pOther->m_p9c;
	}
}
// END FUNCTION

// FUNCTION: 0x10183090 size=0x34
#include "CBasePlayer.h"
#include "CBaseEntity.h"
void CBasePlayer::vfunc26(CBaseEntity *pOther)
{
	if (pOther) {
		m_hEnt1C60 = (CBaseEntity *)pOther->m_p9c;
	}
}
// END FUNCTION

// FUNCTION: 0x101830e0 size=0xf
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc429
void CBasePlayer::vfunc429()
{
	*(float *)((char *)this + 0x1dd4) = gpGlobals->curtime;
}
// END FUNCTION
