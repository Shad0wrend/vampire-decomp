// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
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

// FUNCTION: 0x100b7fa0 size=0x23
#include "QAngle.h"
#include "Vector.h"
#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
#define P100(x) P10(x##0) P10(x##1) P10(x##2) P10(x##3) P10(x##4) P10(x##5) P10(x##6) P10(x##7) P10(x##8) P10(x##9)

struct CAngleSlotView {
	P100(a0)
	P10(b0) P10(b1) P10(b2) P10(b3) P10(b4) P10(b5) P10(b6) P10(b7) P10(b8)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
	virtual QAngle *vfunc194();
};

void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);

struct CUnit100b7fa0
{
	void sub_100b7fa0(Vector *pForward, Vector *pRight, Vector *pUp);
};
void CUnit100b7fa0::sub_100b7fa0(Vector *pForward, Vector *pRight, Vector *pUp)
{
	sub_10139610(*((CAngleSlotView *)this)->vfunc194(), pForward, pRight, pUp);
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
	if (EHandle_Get(m_hTarget1538.m_Index) && m_nTarget153c != -1)
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
		if ((CBaseEntity *)pWeapon == m_hActiveIArmor.Get())
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
			m_hLastIArmor = m_hActiveIArmor;
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
datamap_t  *CBasePlayer::vfunc82()
{
	return (datamap_t  *)(g_10580edc);
}
// END FUNCTION

// FUNCTION: 0x1015aed0 size=0x5
int * sub_1015af10(void);
int * g_10725b24 = ((int * (*)(int))sub_1015af10)(0);
// END FUNCTION

// FUNCTION: 0x1015af10 size=0x1f68
#include "ASSIGNED_QUEST.h"
#include "CGlobalEmailRec.h"
#include "EXPERIENCE_ENTRY.h"
#include "MAP_ACCESS.h"
#include "utlmemory.h"
#include "utlvector.h"
#include "datamap.h"
#include "CUtlVectorDataOps.h"
inline ISaveRestoreOps *Ops_109f0a70()
{
	static CUtlVectorDataOps<CUtlVector<ASSIGNED_QUEST,CUtlMemory<ASSIGNED_QUEST> >,9> ops;
	return (ISaveRestoreOps *)&ops;
}
inline ISaveRestoreOps *Ops_109f0a78()
{
	static CUtlVectorDataOps<CUtlVector<EXPERIENCE_ENTRY,CUtlMemory<EXPERIENCE_ENTRY> >,9> ops;
	return (ISaveRestoreOps *)&ops;
}
inline ISaveRestoreOps *Ops_109f0a80()
{
	static CUtlVectorDataOps<CUtlVector<MAP_ACCESS,CUtlMemory<MAP_ACCESS> >,9> ops;
	return (ISaveRestoreOps *)&ops;
}
inline ISaveRestoreOps *Ops_109f0a88()
{
	static CUtlVectorDataOps<CUtlVector<GLOBAL_EMAIL,CUtlMemory<GLOBAL_EMAIL> >,9> ops;
	return (ISaveRestoreOps *)&ops;
}
int *sub_1015af10()
{
    extern int g_10580aec;
    extern int g_10589ca4;
    extern int g_1067fa80;
    extern int g_109f0380;
    extern int g_10580edc[2];
    void sub_10001c12();
    void sub_100061bd();
    void sub_100063bb();
    void sub_10006807();
    void sub_10007748();
    void sub_10007fb3();
    void sub_10008760();
    void sub_1000ff6a();
    void sub_100118a6();
    void sub_100138ef();
    void sub_10015ae1();
    static typedescription_t dataDesc[] = {
        { 0 },
        { 0xf, "m_flLastCombatAnimTime", {0x19b0, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bIsImmobilized", {0x19f7, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bDrawViewmodel", {0x1a80, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flClientVActiveDisciplineDurations", {0x1adc, 0}, 17, 2, 0, 0, 0 },
        { 0xf, "m_flClientBeginVActiveDisciplineTimers", {0x1b20, 0}, 17, 2, 0, 0, 0 },
        { 0xf, "m_flActiveObfuscateUpdateTimer", {0x1b64, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bObfWasMoving", {0x19f4, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bAllowResyncHandsOffset", {0x1b6d, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iLastDiscipline", {0x1b70, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bLastDiscScrolled", {0x1b74, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iLastDiscTgtMode", {0x1b78, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flRunForwardSpeeds", {0x1b84, 0}, 8, 2, 0, 0, 0 },
        { 1, "m_flRunSideSpeeds", {0x1ba4, 0}, 8, 2, 0, 0, 0 },
        { 1, "m_flWalkForwardSpeeds", {0x1bc4, 0}, 8, 2, 0, 0, 0 },
        { 1, "m_flWalkSideSpeeds", {0x1be4, 0}, 8, 2, 0, 0, 0 },
        { 1, "m_flSneakForwardSpeeds", {0x1c04, 0}, 8, 2, 0, 0, 0 },
        { 1, "m_flSneakSideSpeeds", {0x1c24, 0}, 8, 2, 0, 0, 0 },
        { 4, "m_nDefaultTargetModel", {0x1c44, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nDefaultSpreadLModel", {0x1c48, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nDefaultSpreadRModel", {0x1c4c, 0}, 1, 2, 0, 0, 0 },
        { 0x10, "m_sTargetmodel", {0x1c50, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hMeleeOpponent", {0x1c58, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastOpponent", {0x1c60, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_pViewWeapon", {0x1c64, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flStealthVisionScalar", {0x1c70, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flStealthVisionCone", {0x1c74, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flStealthHearingDist", {0x1c78, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nNextLightPositionTest", {0x1c7c, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flLightOnFeet", {0x1c80, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flLightOnCenter", {0x1c84, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flLightOnHead", {0x1c88, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flLightOnMe", {0x1c8c, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flCameraOverrideFadeMarkTime", {0x19b8, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flCameraOverrideFadeDuration", {0x19bc, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hCameraViewEntity", {0x19c0, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flCameraViewSetTime", {0x19c4, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flCameraViewCrossfadeDuration", {0x19c8, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hCameraTargetEntity", {0x19cc, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flCameraTargetSetTime", {0x19d0, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flCameraTargetCrossfadeDuration", {0x19d4, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bPlayerAnimCyclePlaying", {0x1cb0, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bPlayerAnimIdleFinished", {0x1cb1, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_aLastplayerAnim", {0x1cb4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_LevelSupernaturalAct", {0x1ccc, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_LevelCriminalAct", {0x1cd0, 0}, 1, 2, 0, (ISaveRestoreOps *)&g_109f0380, 0 },
        { 4, "m_LevelInvestigateAct", {0x1cdc, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flCriminalActTimer", {0x1ce0, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flSupernaturalActTimer", {0x1ce4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iCriminalActCount", {0x1ce8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iSupernaturalActCount", {0x1cec, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hClosestNPC", {0x1cc0, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_flClosestNPCDist", {0x1cc4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iClosestNPCSense", {0x1cc8, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flSpawnResponseCopsTimer", {0x1cf8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iSpawnResponseCopsLevel", {0x1cfc, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hSpawnResponseCopsNPC", {0x1d00, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_vecSpawnResponseCopsLocation", {0x1d04, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iCopsInPursuitCount", {0x1d10, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iHuntersInPursuitCount", {0x1d14, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flHeightenedAlertExpireTimer", {0x1d1c, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bInHeightenedAlert", {0x1d18, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flSetOnHeadTimer", {0x1d20, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iVFlags", {0x1d60, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_QuestList", {0x1d68, 0}, 1, 2, 0, Ops_109f0a70(), 0 },
        { 0xa, "m_ExpList", {0x1d7c, 0}, 1, 2, 0, Ops_109f0a78(), 0 },
        { 0xa, "m_MapAccessList", {0x1e10, 0}, 1, 2, 0, Ops_109f0a80(), 0 },
        { 4, "m_lBirthday", {0x1e24, 0}, 1, 2, 0, 0, 0 },
        { 0xa, "m_GlobalEmailFlags", {0x1e28, 0}, 1, 2, 0, Ops_109f0a88(), 0 },
        { 0xc, "m_hPlaceholderNPC", {0x1da4, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_fPreventKnockbackTime", {0x1da8, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hControllerNPC", {0x1db0, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flMasqueradeTimerNext", {0x1dbc, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iCurrQuestLogArea", {0x1dac, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bDebugSaved", {0x1dc0, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bCopWaitDelayed", {0x1dc8, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iCopWaitCount", {0x1dcc, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flLastTimeWasAttacked", {0x1dd0, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flLastTimeAttackTriggered", {0x1dd4, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flLastTimeHitVictim", {0x1dd8, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_fCurrentRangedAccuracy", {0x1ddc, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_fClientCurrentRangedAccuracy", {0x1de0, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastRangedWeapon", {0x1df0, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_fLastAccuracyYaw", {0x1de4, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_fLastAccuracyPitch", {0x1de8, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_fNoAttackTimer", {0x1dec, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bKnockbackHolstered", {0x1df4, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iForceCameraType", {0x1df8, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hLastLadderItem", {0x1dfc, 0}, 1, 2, 0, 0, 0 },
        { 9, "m_Local", {0x1e40, 0}, 1, 2, 0, 0, 0, (datamap_t *)&g_10589ca4 },
        { 9, "pl", {0x2068, 0}, 1, 2, 0, 0, 0, (datamap_t *)&g_10580aec },
        { 4, "m_nButtons", {0x2088, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_afButtonPressed", {0x208c, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_afButtonReleased", {0x2090, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_afButtonLast", {0x2094, 0}, 1, 2, 0, 0, 0 },
        { 7, "m_szAnimExtension", {0x20a9, 0}, 32, 2, 0, 0, 0 },
        { 0xe, "m_vecAdditionalPVSOrigin", {0x20d0, 0}, 1, 2, 0, 0, 0 },
        { 0xe, "m_vecCameraPVSOrigin", {0x20dc, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_iRespawnFrames", {0x20ec, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_afPhysicsFlags", {0x20f0, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_bInVehicle", {0x20f4, 0}, 1, 2, 0, 0, 0 },
        { 0xe, "m_oldOrigin", {0x2110, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_vecSmoothedVelocity", {0x211c, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iTargetVolume", {0x2130, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_rgItems", {0x2134, 0}, 5, 2, 0, 0, 0 },
        { 0xf, "m_flTimeStepSound", {0x214c, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flSwimTime", {0x2150, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flDuckTime", {0x2154, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flWallJumpTime", {0x2158, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flSuitUpdate", {0x215c, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_rgSuitPlayList", {0x2160, 0}, 4, 2, 0, 0, 0 },
        { 4, "m_iSuitPlayNext", {0x2170, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_rgiSuitNoRepeat", {0x2174, 0}, 32, 2, 0, 0, 0 },
        { 0xf, "m_rgflSuitNoRepeatTime", {0x21f4, 0}, 32, 2, 0, 0, 0 },
        { 4, "m_lastDamageAmount", {0x2274, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_tbdPrev", {0x2278, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_idrowndmg", {0x2284, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_idrownrestored", {0x2288, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nPoisonDmg", {0x228c, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nPoisonRestored", {0x2290, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_bitsHUDDamage", {0x2294, 0}, 1, 2, 0, 0, 0 },
        { 5, "m_fInitHUD", {0x2298, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iFrags", {0x22bc, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iDeaths", {0x22c0, 0}, 1, 2, 0, 0, 0 },
        { 2, "m_sPlayerName", {0x1c54, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hTargetEnt", {0x22e0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_ArmorValue", {0x22e4, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_DmgOrigin", {0x22e8, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_DmgTake", {0x22f4, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_DmgSave", {0x22f8, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_AirFinished", {0x22fc, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_PainFinished", {0x2300, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iPlayerLocked", {0x2304, 0}, 1, 2, 0, 0, 0 },
        { 0xc, "m_hViewModel", {0x2308, 0}, 2, 2, 0, 0, 0 },
        { 1, "m_flMaxspeed", {0x2310, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flWaterJumpTime", {0x2314, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nImpulse", {0x2324, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flStepSoundTime", {0x2328, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flSwimSoundTime", {0x232c, 0}, 1, 2, 0, 0, 0 },
        { 3, "m_vecLadderNormal", {0x2330, 0}, 1, 2, 0, 0, 0 },
        { 1, "m_nLightLevel", {0x233c, 0}, 1, 2, 0, 0, 0 },
        { 0xf, "m_flFlashTime", {0x2340, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_nDrownDmgRate", {0x2344, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iBarterTgtEntIdx", {0x23d0, 0}, 1, 2, 0, 0, 0 },
        { 4, "m_iDSPFlags", {0x2454, 0}, 1, 2, 0, 0, 0 },
        { 7, "m_szWolfBackupName", {0x23d4, 0}, 128, 2, 0, 0, 0 },
        { 9, "m_pKeyRingBackup", {0x245c, 0}, 1, 0x42, 0, 0, 0, (datamap_t *)&g_1067fa80 },
        { 0, "CBasePlayerPlayerDeathThink", {0, 0}, 1, 0x20, 0, 0, (void *)sub_100061bd },
        { 2, "InputGiveItem", {0, 0}, 1, 8, "GiveItem", 0, (void *)sub_10008760 },
        { 2, "InputWhisper", {0, 0}, 1, 8, "Whisper", 0, (void *)sub_100118a6 },
        { 4, "InputSetInvestigateLevel", {0, 0}, 1, 8, "SetInvestigateLevel", 0, (void *)sub_10007748 },
        { 4, "InputSetSupernaturalLevel", {0, 0}, 1, 8, "SetSupernaturalLevel", 0, (void *)sub_10007fb3 },
        { 4, "InputSetCriminalLevel", {0, 0}, 1, 8, "SetCriminalLevel", 0, (void *)sub_100063bb },
        { 2, "InputAwardExperience", {0, 0}, 1, 8, "AwardExperience", 0, (void *)sub_10006807 },
        { 2, "InputPlayHUDParticle", {0, 0}, 1, 8, "PlayHUDParticle", 0, (void *)sub_1000ff6a },
        { 1, "InputStopHUDParticle", {0, 0}, 1, 8, "StopHUDParticle", 0, (void *)sub_10015ae1 },
        { 0, "InputHolster", {0, 0}, 1, 8, "Holster", 0, (void *)sub_100138ef },
        { 0, "InputRemoveCamera", {0, 0}, 1, 8, "RemoveCamera", 0, (void *)sub_10001c12 },
    };
    g_10580edc[1] = 157;
    g_10580edc[0] = (int)&dataDesc[1];
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

// FUNCTION: 0x1015d680 size=0x37
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"

// TARGET: CBasePlayer::sub_1015d680
CBaseEntity *CBasePlayer::sub_1015d680(int index)
{
    return (CBaseEntity *)EHandle_Get(((unsigned int *)((char *)this + 0x2308))[index]);
}
// END FUNCTION

// FUNCTION: 0x1015d6d0 size=0x82
#include "CBasePlayer.h"

#define VM10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

// The view model entity as this function sees it: slots 1, 62 and 93 are typed.
struct CViewModelUnit
{
	virtual void a0();
	virtual unsigned int *vfunc1();
	virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	VM10(b) VM10(c) VM10(d) VM10(e) VM10(f)
	virtual void g0(); virtual void g1();
	virtual void vfunc62(const float *pOrigin);
	virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8(); virtual void g9();
	VM10(h) VM10(i)
	virtual void j0(); virtual void j1(); virtual void j2();
	virtual void vfunc93(int moveType, int moveCollide);
	void sub_1042b9c0(CBasePlayer *pOwner);
	void sub_1042ba00(int index);
	void sub_1009ee80(CBasePlayer *pEnt);
};

CViewModelUnit *sub_10136580(const char *classname);
void sub_101d1280(CViewModelUnit *pEnt);

// TARGET: CBasePlayer::sub_1015d6d0
void CBasePlayer::sub_1015d6d0(int index)
{
    if (sub_1015d680(index))
        return;
    CViewModelUnit *pVM = sub_10136580("viewmodel");
    if (pVM) {
        pVM->vfunc62(vfunc220());
        pVM->sub_1042b9c0(this);
        pVM->sub_1042ba00(index);
        sub_101d1280(pVM);
        pVM->vfunc93(11, 0);
        pVM->sub_1009ee80(this);
        ((unsigned int *)((char *)this + 0x2308))[index] = *pVM->vfunc1();
    }
}
// END FUNCTION

// FUNCTION: 0x1015d790 size=0x17
extern int g_107260a0;
int sub_10136580(int a);

// TARGET: sub_1015d790
int sub_1015d790(int a, int b)
{
	g_107260a0 = b;
	return sub_10136580(a);
}
// END FUNCTION

// FUNCTION: 0x1015d7c0 size=0x380
#include "vampire_all.h"
#include "CHL2_Player.h"
#include "CUtlMemory16.h"
#include "CUtlMemory64.h"
#include "CUtlMemory60.h"
#include "CUtlMemory72.h"
#include "CUtlMemory576.h"
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "globalvars.h"
#include <string.h>

// The CBasePlayer constructor (the symbol map's ??0CBasePlayer@@QAE@XZ), defined as the constructor of a
// view: it calls the base constructor itself and writes the members by offset.
struct __declspec(novtable) CHL2_PlayerBase
{
	CHL2_PlayerBase();
	virtual void pa00();
};

#define M(T, o) (*(T *)((char *)this + (o)))

extern int vt_1046fbb4[];
extern int vt_10462854[];
extern int g_107260a0;
void *__fastcall sub_100df2d0(void *p);

struct CUnknown1018b790 { void sub_1018b790(); };
struct SInit { void sub_1011cc10(); };
struct CUnknown101ab5c0 { void sub_101ab5c0(int a); };
struct CObj1a1c { void sub_1017a270(); };

typedef MvsnSec::CSecureTypeBase<MvsnSec::CPfnTraits1, int, MvsnSec::CSecureCoderPfn<MvsnSec::CPfnTraits1, int>, MvsnSec::CSecureCoderBasic<MvsnSec::CPfnTraits1, int> > CSecure1cd0;

struct CVec16a { CUtlMemory16 m; int size; char *elems; __forceinline CVec16a() { m.sub_10184ea0(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec64 { CUtlMemory64 m; int size; char *elems; __forceinline CVec64() { m.sub_10184ee0(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec60 { CUtlMemory60 m; int size; char *elems; __forceinline CVec60() { m.sub_10184f20(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec16b { CUtlMemory16 m; int size; char *elems; __forceinline CVec16b() { m.sub_10184f90(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec72 { CUtlMemory72 m; int size; char *elems; __forceinline CVec72() { m.sub_10185010(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec576 { CUtlMemory576 m; int size; char *elems; __forceinline CVec576() { m.sub_10185060(0, 0); size = 0; elems = m.m_pMemory; } };
struct CMem1a1c { char d[0x23c]; __forceinline CMem1a1c() { ((CObj1a1c *)this)->sub_1017a270(); } };
struct CMem1e40 { char d[0x20f8 - 0x1e40]; __forceinline CMem1e40() { ((CUnknown1018b790 *)this)->sub_1018b790(); } };
struct CCmd235c { int *vptr; char d[0x60 - 4]; __forceinline CCmd235c() { vptr = vt_10462854; ((SInit *)this)->sub_1011cc10(); } };
struct CZero5 { int a, b, c, d, e; __forceinline CZero5() { a = 0; b = 0; c = 0; d = 0; e = 0; } };
struct CH5 { int a[5]; __forceinline CH5() { for (int i = 0; i < 5; i++) a[i] = -1; } };
struct CH2 { int a[2]; __forceinline CH2() { for (int i = 0; i < 2; i++) a[i] = -1; } };

struct CPlayerMembers
{
	char pad0[0x19b4];
	EHANDLE h19b4; int m19b8, m19bc;
	EHANDLE h19c0; int m19c4, m19c8;
	EHANDLE h19cc; int m19d0, m19d4;
	CVec16a v19d8;
	char pad19ec[0x1a1c - 0x19ec];
	CMem1a1c o1a1c;
	EHANDLE h1c58, h1c5c, h1c60, h1c64;
	char pad1c68[0x1cb8 - 0x1c68];
	EHANDLE h1cb8, h1cbc, h1cc0;
	char pad1cc4[0x1cd0 - 0x1cc4];
	CSecure1cd0 s1cd0;
	char pad1cdc[0x1d00 - 0x1cdc];
	EHANDLE h1d00;
	char pad1d04[0x1d3c - 0x1d04];
	CH5 h1d3c;
	EHANDLE h1d50;
	char pad1d54[0x1d64 - 0x1d54];
	EHANDLE h1d64;
	CVec64 v1d68;
	CVec60 v1d7c;
	CVec16b v1d90;
	EHANDLE h1da4;
	char pad1da8[0x1db0 - 0x1da8];
	EHANDLE h1db0;
	char pad1db4[0x1df0 - 0x1db4];
	EHANDLE h1df0;
	char pad1df4[0x1dfc - 0x1df4];
	EHANDLE h1dfc;
	int m1e00;
	EHANDLE h1e04;
	int m1e08, m1e0c;
	CVec72 v1e10;
	int m1e24;
	CVec576 v1e28;
	EHANDLE h1e3c;
	CMem1e40 o1e40;
	EHANDLE h20f8;
	char pad20fc[0x22e0 - 0x20fc];
	EHANDLE h22e0;
	char pad22e4[0x2308 - 0x22e4];
	CH2 h2308;
	char pad2310[0x235c - 0x2310];
	CCmd235c c235c;
	CZero5 z23bc;
};

CHL2_PlayerBase::CHL2_PlayerBase()
{
	((CBaseCombatCharacter *)this)->sub_10326de0();
	((CPlayerMembers *)this)->CPlayerMembers::CPlayerMembers();
	M(int *, 0) = vt_1046fbb4;
	((CBaseEntity *)this)->sub_100a4930();
	M(void *, 0xa8) = this;
	M(unsigned int, 0x268) |= 0x400;
	if (g_107260a0 != 0) {
		((CUnknown101ab5c0 *)&M(char, 0x2d4))->sub_101ab5c0(g_107260a0);
		g_107260a0 = 0;
	}
	M(float, 0x2340) = -1.0f;
	M(int, 0x1c44) = 0;
	M(int, 0x1c48) = 0;
	M(int, 0x1c4c) = 0;
	memset(&M(char, 0x1a98), 0x63, 0x44);
	memset(&M(char, 0x1b20), 0, 0x44);
	memset(&M(char, 0x1adc), 0, 0x44);
	M(int, 0x1b64) = 0;
	M(EHANDLE, 0x1c64) = (CBaseEntity *)0;
	M(int, 0x210) = 0;
	((CBasePlayer *)this)->CBasePlayer::vfunc443(0);
	M(int, 0xe98) = 0;
	M(char, 0x2354) = 0;
	M(char, 0x20f4) = 0;
	M(EHANDLE, 0x20f8) = (CBaseEntity *)0;
	M(int, 0x20cc) = 0;
	M(int, 0x13cc) = -1;
	M(unsigned int, 0x4c) |= 0x800;
	M(int, 0x1db8) = 0;
	M(int, 0x1db4) = 0;
	void *pDlg = operator new(0x34b4);
	M(void *, 0x1d24) = pDlg ? sub_100df2d0(pDlg) : 0;
	M(char, 0x1480) = 1;
	M(char, 0x1481) = 1;
	M(char, 0x1b6d) = 1;
	M(int, 0x1b70) = -1;
	M(char, 0x1b74) = 0;
	M(int, 0x1b78) = 0;
	M(int, 0x19f0) = 0;
	M(char, 0x19f4) = 0;
	M(char, 0x1cb0) = 0;
	M(char, 0x1cb1) = 0;
	M(int, 0x1568) = 0;
	M(int, 0x156c) = 0;
	M(float, 0x1de0) = -1.0f;
	M(int, 0x1df8) = 0;
	M(float, 0x1dec) = gpGlobals->curtime;
	M(int, 0x1e0c) = 0;
	M(int, 0x1e08) = -1;
	M(int, 0x1e04) = -1;
	M(int, 0x2454) = 0;
	M(int, 0x1e24) = 0;
	M(int, 0x158c) = 1;
	M(int, 0x1e3c) = -1;
	M(char, 0x1a14) = 0;
	M(EHANDLE, 0x1dfc) = (CBaseEntity *)0;
	M(char, 0x1df4) = 0;
	M(int, 0x245c) = 0;
	((CBasePlayer *)this)->sub_101835e0();
}
// END FUNCTION

// FUNCTION: 0x1015dc20 size=0x5
#include "CBaseCombatCharacter.h"
bool CBaseCombatCharacter::vfunc72(int a0)
{
    return 1;
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
	int nEdict = m_pEdict2e0;
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

float *CBasePlayer::vfunc198()
{
	return (float *)((char *)this + 0x211c);
}
// END FUNCTION

// FUNCTION: 0x1015ded0 size=0x1e
#include "CBasePlayer.h"

void sub_100aa7b0(void *p);

// TARGET: CBasePlayer::vfunc5
CBaseEntity  *CBasePlayer::vfunc5(unsigned int flags)
{
	sub_100017d5();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1015df00 size=0x191
#include "CBasePlayer.h"
void __fastcall sub_100df590(void *);
void __cdecl sub_10430964(void *);
void __fastcall sub_1017a290(void *);
void __fastcall sub_10184360(void *);
void __fastcall sub_10184380(void *);
void __fastcall sub_10184f70(void *);
void __fastcall sub_10184fd0(void *);
void __fastcall sub_10185100(void *);
void __fastcall sub_10185140(void *);
void __fastcall sub_10185180(void *);
void __fastcall sub_101852b0(void *);
void __fastcall sub_101852f0(void *);
void __fastcall sub_10185450(void *);
void __fastcall sub_10185490(void *);
void __fastcall sub_101855c0(void *);
void __fastcall sub_10185600(void *);
void __fastcall sub_10185750(void *);
void __fastcall sub_10185790(void *);
void __fastcall sub_101857b0(void *);
void __fastcall sub_103274d0(void *);
extern int vt_1046fbb4;
extern int vt_10462854;
extern int vt_10470490;

void CBasePlayer::sub_1015df00()
{
	void *p = *(void **)((char *)this + 0x1d24);
	void *v;
	*(void **)this = &vt_1046fbb4;
	if (p) {
		sub_100df590(p);
		sub_10430964(p);
	}
	p = *(void **)((char *)this + 0x245c);
	*(void **)((char *)this + 0x1d24) = 0;
	if (p) {
		sub_10185790(p);
		sub_101857b0(p);
		*(void **)((char *)p + 0x10) = *(void **)p;
		sub_101857b0(p);
		sub_10430964(p);
	}
	*(void **)((char *)this + 0x245c) = 0;

	v = (char *)this + 0x23bc;
	sub_10184360(v);
	sub_10185100(v);
	*(void **)((char *)v + 0x10) = *(void **)v;
	sub_10185100(v);

	v = (char *)this + 0x1e28;
	*(void **)((char *)this + 0x235c) = &vt_10462854;
	*(void **)((char *)this + 0x1e40) = &vt_10470490;
	sub_10185600(v);
	sub_10185750(v);
	*(void **)((char *)v + 0x10) = *(void **)v;
	sub_10185750(v);

	v = (char *)this + 0x1e10;
	sub_10185490(v);
	sub_101855c0(v);
	*(void **)((char *)v + 0x10) = *(void **)v;
	if (*(int *)((char *)v + 8) != -1) {
		if (*(void **)v) {
			Plat_Free(*(void **)v);
			*(void **)v = 0;
		}
		*(int *)((char *)v + 4) = 0;
	}

	v = (char *)this + 0x1d90;
	sub_10184f70(v);
	sub_10184fd0(v);
	*(void **)((char *)v + 0x10) = *(void **)v;
	sub_10184fd0(v);

	v = (char *)this + 0x1d7c;
	sub_101852f0(v);
	sub_10185450(v);
	*(void **)((char *)v + 0x10) = *(void **)v;
	sub_10185450(v);

	v = (char *)this + 0x1d68;
	sub_10185180(v);
	sub_101852b0(v);
	*(void **)((char *)v + 0x10) = *(void **)v;
	if (*(int *)((char *)v + 8) != -1) {
		if (*(void **)v) {
			Plat_Free(*(void **)v);
			*(void **)v = 0;
		}
		*(int *)((char *)v + 4) = 0;
	}

	sub_1017a290((char *)this + 0x1a1c);

	v = (char *)this + 0x19d8;
	sub_10184380(v);
	sub_10185140(v);
	*(void **)((char *)v + 0x10) = *(void **)v;
	sub_10185140(v);

	::sub_103274d0(this);
}
// END FUNCTION

// FUNCTION: 0x1015e110 size=0x20
#include "vampire.h"
extern char g_10470490;
void sub_10430964(void *p);
struct CUnk1015e110
{
    void *sub_1015e110(unsigned char bFree);
};
// TARGET: CUnk1015e110::sub_1015e110
void *CUnk1015e110::sub_1015e110(unsigned char bFree)
{
    *(void **)this = &g_10470490;
    if (bFree & 1) {
        sub_10430964(this);
    }
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

// FUNCTION: 0x1015eec0 size=0xe
#include "CUnknown1015ef20.h"
bool CUnknown1015ef20::sub_1015eec0()
{
	return m_unk19f5 == 0;
}
// END FUNCTION

// FUNCTION: 0x1015eee0 size=0x8
void __fastcall sub_1015eee0(char *p) { p[0x19f5] = 0; }
// END FUNCTION

// FUNCTION: 0x1015ef00 size=0x8
struct CUnknown1015ef00 { char pad[0x19f5]; char m_Flag; void sub_1015ef00(); };
void CUnknown1015ef00::sub_1015ef00() { m_Flag = 1; }
// END FUNCTION

// FUNCTION: 0x1015ef20 size=0xe
#include "CUnknown1015ef20.h"
bool CUnknown1015ef20::sub_1015ef20()
{
	return m_unk19f7 == 0;
}
// END FUNCTION

// FUNCTION: 0x1015ef40 size=0x8
void __fastcall sub_1015ef40(char *p)
{
	p[0x19f7] = 1;
}
// END FUNCTION

// FUNCTION: 0x1015ef60 size=0x8
void __fastcall sub_1015ef60(char *p) { p[0x19f7] = 0; }
// END FUNCTION

// FUNCTION: 0x1015ef80 size=0x7
struct CUnknown1015ef80 { char sub_1015ef80(); };
char CUnknown1015ef80::sub_1015ef80()
{
    return *(char *)((char *)this + 0x1a14);
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

// TARGET: CBasePlayer::sub_1015efa0
void CBasePlayer::sub_1015efa0()
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

// FUNCTION: 0x1015f090 size=0x4f
#include "CBasePlayer.h"
struct CUnk101c26d0 {
    int m_n0; char pad[0x48];
    CUnk101c26d0 *sub_101c26d0(int a, int b, int c, int d, int e, int f, int g);
};
struct CUnitP : CBasePlayer {
    void sub_1015f090(char c);
};
void CUnitP::sub_1015f090(char c)
{
    if (*(int *)((char *)this + 0x210) > 0) {
        CUnk101c26d0 u;
        *((char *)this + 0x1ca0) = c;
        u.sub_101c26d0((int)this, (int)this, 0, 0, 0, 0, -1);
        *(int *)((char *)this + 0x210) = 0;
        vfunc144(&u);
    }
}
// END FUNCTION

// FUNCTION: 0x1015f100 size=0x3a
#include "inputdata_t.h"
extern char g_106b8540[];
struct S {
	void sub_100153c5(const char *s);
	void sub_1015f100(inputdata_t *data);
};
static inline const char *String(variant_t *v)
{
	if (v->fieldType == 2)
		return v->iszValue ? v->iszValue : g_106b8540;
	return v->sub_10008805();
}
void S::sub_1015f100(inputdata_t *data)
{
	sub_100153c5(String(&data->value));
}
// END FUNCTION

// FUNCTION: 0x1015f150 size=0x173
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWeaponThrown_Grenade_Frag.h"
#include "ScopeTrace.h"
#include "inputdata_t.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"

struct CHudParticleVSlots
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23)
	EVS(240) EVS(241) EVS(242)
	virtual void slot243(int a, int b, const char *c);
};

extern float g_1070d1b0[];
CBaseEntity *sub_100fbc90(const char *pName, const void *pA, const void *pB, float f);

void CBasePlayer::sub_1015f150(inputdata_t *pInput)
{
	ScopeTrace scope("CBasePlayer::InputPlayHUDParticle", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	if (sub_1015d680(0))
	{
		inputdata_t data;
		data.value.eVal = -1;
		data.value.iValue = 0;
		data.value.fieldType = 1;
		sub_1015f330(&data);
		CBaseEntity *p = sub_100fbc90(pInput->value.String(), g_1070d1b0, g_1070d9d0, -1.0f);
		if (p)
			m_hHud1E3C.m_Index = *p->vfunc1();
		else
			m_hHud1E3C.m_Index = 0xffffffff;
		if (m_hHud1E3C.Get())
			((CHudParticleVSlots *)m_hHud1E3C.Get())->slot243((int)sub_1015d680(0), 0xe, g_106b8540);
	}
}
// END FUNCTION

// FUNCTION: 0x1015f330 size=0x175
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "CBasePlayer.h"
#include "inputdata_t.h"
void sub_10015b68();
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CBasePlayer::sub_1015f330(inputdata_t *pInput)
{
	ScopeTrace trace("CBasePlayer::InputStopHUDParticle", this ? STRINGR(m_name26c) : g_105387dc);
	if (m_hHud1E3C)
	{
		((CEntityVSlots *)m_hHud1E3C.Get())->slot242();
		m_hHud1E3C->sub_100ac4e0((int)sub_10015b68, 0, 0);
		m_hHud1E3C->sub_100ac610((pInput->value.fieldType == 1 ? pInput->value.flValue : 0.0f) + gpGlobals->curtime, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x1015f510 size=0xd3
#include "inputdata_t.h"
#include "CBaseCombatCharacter.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
extern void (__cdecl *g_109f3630)(const char *fmt, ...);

#define SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SLOTS100(p) SLOTS10(p##0) SLOTS10(p##1) SLOTS10(p##2) SLOTS10(p##3) SLOTS10(p##4) \
	SLOTS10(p##5) SLOTS10(p##6) SLOTS10(p##7) SLOTS10(p##8) SLOTS10(p##9)

struct CHolsterSlots
{
	SLOTS100(a) SLOTS100(b) SLOTS100(c) SLOTS100(d)
	SLOTS10(e0) SLOTS10(e1) SLOTS10(e2) SLOTS10(e3) SLOTS10(e4)
	virtual void e50(); virtual void e51(); virtual void e52(); virtual void e53(); virtual void e54();
	virtual void e55(); virtual void e56();
	virtual void vfunc457(const char *pszName, int a);
	virtual void vfunc458();
	virtual void vfunc459(const char *pszName, int a);
};

void CBaseCombatCharacter::sub_1015f510(inputdata_t *data)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseCombatCharacter::InputHolster";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	if (!sub_10335950("item_w_unarmed"))
		((CHolsterSlots *)this)->vfunc459("item_w_unarmed", 0);
	if (sub_10335950("item_w_unarmed")) {
		((CHolsterSlots *)this)->vfunc457("item_w_unarmed", 0);
		(*g_109f3680)--;
		return;
	}
	g_109f3630("Warning: Player does not have unarmed weapon!\n");
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1015f630 size=0x1f5
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBasePlayer.h"
#include "CExperienceTable.h"
#include "CVStatList_t.h"
#include <string.h>

extern "C" __declspec(dllimport) int Q_strnicmp(const char *, const char *, int);
extern "C" __declspec(dllimport) char *Q_strncpy(char *, const char *, int);
extern CExperienceTable g_10750930;
void sub_101cebc0(void *pPlayer, int a, int b);

void CBasePlayer::sub_1015f630(const char *pszAward)
{
	if (!pszAward || !strlen(pszAward)) {
		return;
	}
	for (int i = 0; i < m_Awards1d7c.Count(); i++) {
		if (!Q_strnicmp(m_Awards1d7c[i].m_szName, pszAward, strlen(pszAward))) {
			return;
		}
	}
	int idx = g_10750930.sub_10222500(pszAward);
	if (idx == -1) {
		return;
	}
	sub_101cebc0(this, 0x17, idx);
	int exp = g_10750930.sub_10222670(idx)->m_c;
	if (exp >= 300) {
		exp += (int)(CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x1d) * 100.0f);
		if (exp < 100) {
			exp = 100;
		}
	}
	sub_1015f8b0((float)exp, 1);
	CBasePlayerAward award;
	Q_strncpy(award.m_szName, pszAward, 0x30);
	m_Awards1d7c.AddToTail(award);
}
// END FUNCTION

// FUNCTION: 0x1015f8b0 size=0xeb
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBasePlayer.h"
#include "CVStatList_t.h"

struct CMsgPlayerView;
void sub_101cebc0(CMsgPlayerView *pPlayer, int a, int b);

struct CBasePlayerUnit : CBasePlayer
{
	void sub_1015f8b0(float flAmount, char bFlag);
};

// TARGET: CBasePlayerUnit::sub_1015f8b0
void CBasePlayerUnit::sub_1015f8b0(float flAmount, char bFlag)
{
	float *pTotal = (float *)((char *)this + 0x19f8);
	float *pPartial = (float *)((char *)this + 0x19fc);
	*pTotal = flAmount + *pTotal;
	*pPartial = flAmount + *pPartial;
	if (*pPartial >= 100.0f)
	{
		int n = (int)(*pPartial * 0.01f);
		*pPartial = *pPartial - n * 100.0f;
		CVStatListSet::Of(this)->Find(0)->sub_10200fc0(0x22, n);
		if (bFlag && n > 0)
			sub_101cebc0((CMsgPlayerView *)this, 9, n);
	}
}
// END FUNCTION

// FUNCTION: 0x1015f9e0 size=0x169
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBasePlayer.h"
#include "CVStatList_t.h"

struct CCharStatRecord
{
	char m_pad0000[0x88];
	int m_nValue;	// 0x88
};

struct CCharTemplate
{
	char m_pad0000[0xd0];
	CCharStatRecord *m_pStats;	// 0xd0
};

struct CCharTemplateMgr
{
	CCharTemplate *sub_10207c40(void *pChar);	// stub 0x10001de8
};
extern CCharTemplateMgr g_1074f028;

struct CBasePlayerUnit : CBasePlayer
{
	void sub_1015f9e0();
};

// TARGET: CBasePlayerUnit::sub_1015f9e0
void CBasePlayerUnit::sub_1015f9e0()
{
	float *pTotal = (float *)((char *)this + 0x19f8);
	float *pPartial = (float *)((char *)this + 0x19fc);
	float flValue = *pTotal;
	*pPartial = flValue;
	if (flValue >= 100.0f)
	{
		int n = (int)(0.01f * flValue);
		*pPartial = flValue - n * 100.0f;
		n += g_1074f028.sub_10207c40(this)->m_pStats->m_nValue;
		CVStatListSet::Of(this)->Find(0)->sub_102008e0(0x22, n);
	}
	else
	{
		CVStatListSet::Of(this)->Find(0)->sub_102008e0(0x22, g_1074f028.sub_10207c40(this)->m_pStats->m_nValue);
	}
}
// END FUNCTION

// FUNCTION: 0x1015fbb0 size=0xe0
#include "CCharacter1015fbb0.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct S_Weapon {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
    V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
    V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5) V10(c6) V10(c7)
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8();
    virtual int s289();
    virtual int s290();
};
struct S_Char {
    V10(a0) V10(a1) V10(a2) V10(a3) V10(a4) V10(a5) V10(a6) V10(a7) V10(a8) V10(a9)
    V10(b0) V10(b1) V10(b2) V10(b3) V10(b4) V10(b5) V10(b6) V10(b7) V10(b8) V10(b9)
    V10(c0) V10(c1) V10(c2) V10(c3) V10(c4) V10(c5)
    virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4();
    virtual void d5(); virtual void d6(); virtual void d7();
    virtual void s268(int a, int b, int c, int d);
    char pad4[0x744 - 4];
    int m_n744;
    char pad748[0x1488 - 0x748];
    int m_n1488;
    char pad148c[0x14b0 - 0x148c];
    int m_n14b0;
    int m_n14b4;
    int sub_1015fd50();
    int sub_1015fdc0();
    S_Weapon *sub_1032e7b0();
    int sub_1008dc40(int a, int b);
    void sub_10099360(int a, int b);
    void sub_10099390(int a, int b);
};

void CCharacter1015fbb0::sub_1015fbb0(int nAnimation, bool bForce)
{
    S_Char *c = (S_Char *)this;
    c->m_n14b4 = -1;
    if (!bForce && c->sub_1015fd50() == nAnimation)
        return;
    int nSequence = c->sub_1008dc40(nAnimation, -1);
    if (nSequence < 0)
        return;
    if (!bForce && c->sub_1015fdc0() == nSequence)
        return;
    c->s268(0, nAnimation, nSequence, 1);
    c->m_n14b0 = nAnimation;
    c->m_n744 = c->m_n1488;
    if (c->sub_1032e7b0()) {
        S_Weapon *pWeapon = c->sub_1032e7b0();
        c->m_n14b4 = pWeapon->s289();
        if (pWeapon->s290() > 1) {
            if (c->m_n14b4 == -1 && c->m_n14b0 != -1) {
                c->sub_10099360(0, 0);
                return;
            }
            if (c->m_n14b4 != 0)
                c->sub_10099390(0, 0);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1015fcd0 size=0x5d
#include "CBasePlayer.h"
void CBasePlayer::vfunc112(int unused, int nArg)
{
	if (m_aCurWpnActivity == nArg && m_aNextWpnActivity != -1) {
		if (sub_10099400(m_aCurWpnActivity)) {
			if (!sub_10099430(0))
				sub_101644f0(-1, m_aNextWpnActivity, 1);
			else
				sub_101644f0(-1, m_aCurWpnActivity, 1);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1015fd50 size=0x1e
// TARGET: sub_1015fd50
struct CUnk1015fd50
{
    char pad[0x748];
    float m_748;
    char pad2[0x758 - 0x74c];
    int m_758;
    int sub_1015fd50();
};
int CUnk1015fd50::sub_1015fd50()
{
    if (m_748 == 0.0f)
    {
        return -1;
    }
    return m_758;
}
// END FUNCTION

// FUNCTION: 0x1015fd80 size=0x25
#include "CCharacter1015fbb0.h"

int sub_1015fdc0();

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CCharSlots
{
	V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j)
	V10(k) V10(l) V10(m) V10(n) V10(o) V10(p) V10(q) V10(r) V10(s) V10(t)
	V10(u) V10(v) V10(w) V10(x) V10(y) V10(z)
	virtual void s260(); virtual void s261(); virtual void s262(); virtual void s263();
	virtual void s264(); virtual void s265(); virtual void s266(); virtual void s267();
	virtual void vfunc268(int a, int b, int c, int d);
};

// TARGET: CCharacter1015fbb0::sub_1015fd80
void CCharacter1015fbb0::sub_1015fd80(int a)
{
	if (sub_1015fdc0() != a)
		((CCharSlots *)this)->vfunc268(0, -1, a, 1);
}
// END FUNCTION

// FUNCTION: 0x1015fdc0 size=0x1e
// TARGET: sub_1015fdc0
struct CUnk1015fdc0
{
    char pad[0x73c];
    int m_73c;
    char pad2[0x748 - 0x740];
    float m_748;
    int sub_1015fdc0();
};
int CUnk1015fdc0::sub_1015fdc0()
{
    if (m_748 == 0.0f)
    {
        return -1;
    }
    return m_73c;
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

// FUNCTION: 0x10160050 size=0x5
extern float g_1046fb0c;
float g_10725c9c = 0.285f / g_1046fb0c;
// END FUNCTION

// FUNCTION: 0x101600a0 size=0x38e
#include "CNPC_VTzimisce.h"
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
#include "QAngle.h"
#include "TestBit.h"
#include "Vector.h"
#include <math.h>

extern float sub_1013d580(float a, float b);	// the angle difference
extern CGlobalEntityList *g_10566458;
extern float g_1046fb1c;	// 0.05f
extern float g_1046fb20;	// 0.05f

struct CWeaponAttackRoll	// what CBaseCombatWeapon::sub_102517e0 returns
{
	char m_pad000[0x3cc];
	int m_n3cc;
	int m_n3d0;
	int m_n3d4;
	int m_n3d8;
	int m_n3dc;
	int m_n3e0;
	int m_n3e4;
	int m_n3e8;
	int m_n3ec;
	int m_n3f0;
	int m_n3f4;
};

struct CWeaponHandleView
{
	virtual void v0();
	virtual unsigned int *GetRefEHandle();
};

inline const Vector &PlayerAbsVelocity(CBasePlayer *p)
{
	if (TestBit(p->m_flags268, 12))
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

inline float AngleDelta(float flOld, float flNew)
{
	return sub_1013d580(flOld, flNew);
}

void CBasePlayer::sub_101600a0(float flFrame)
{
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
	if (pWeapon)
	{
		if (g_10566458->sub_100290c0((const unsigned int *)&m_hLastRangedWeapon) != (CBaseEntity *)pWeapon)
		{
			sub_10160520();
			*(unsigned int *)&m_hLastRangedWeapon = *((CWeaponHandleView *)pWeapon)->GetRefEHandle();
		}
		if (pWeapon->vfunc360() & 0x6000)
		{
			CWeaponAttackRoll *w = (CWeaponAttackRoll *)pWeapon->sub_102517e0();
			float t = sub_10346070() * 0.1f;
			float flBase = (float)w->m_n3cc;
			float flWalk = ((float)w->m_n3d8 - (float)w->m_n3dc) * t * t * t + (float)w->m_n3dc;
			float flRun = ((float)w->m_n3e0 - (float)w->m_n3e4) * t * t * t + (float)w->m_n3e4;
			float flGrow = ((float)w->m_n3e8 - (float)w->m_n3ec) * t + (float)w->m_n3ec;
			float flShrink = ((float)w->m_n3f4 - (float)w->m_n3f0) * t + (float)w->m_n3f0;
			float flSpeed = PlayerAbsVelocity(this).Length();
			flGrow = flGrow * flFrame * 3.0f;
			flShrink = flShrink * flFrame * 3.0f;
			float flTarget = flBase;
			if (m_nFlags2088 & 0x79a)
			{
				if (flSpeed >= 110.0f)
					flTarget = flRun;
				else if (flSpeed >= 60.0f)
					flTarget = flWalk;
			}
			const QAngle angles = *(const QAngle *)&m_vec206c + *(const QAngle *)&m_vec1EFC;
			float flYawDelta = AngleDelta(m_f1DE4, angles[1]) * flFrame;
			float flPitchDelta = AngleDelta(m_f1DE8, angles[0]) * flFrame;
			float flYawRate = fabs(flYawDelta) / g_1046fb1c;
			float flPitchRate = fabs(flPitchDelta) / g_1046fb20;
			float flMax = flYawRate > flPitchRate ? flYawRate : flPitchRate;
			flMax = flMax > 1.0f ? 1.0f : (flMax < 0.0f ? 0.0f : flMax);
			double flRate = flMax;
			float flTurn = (flWalk - flBase) * flRate + flBase;
			if (flTurn > flTarget)
			{
				flTarget = flTurn;
				flGrow *= flRate;
			}
			m_f1DE4 = angles.y;
			m_f1DE8 = angles.x;
			if (m_f1DDC < flTarget)
			{
				m_f1DDC += flGrow;
				if (m_f1DDC > flTarget)
					m_f1DDC = flTarget;
			}
			else if (m_f1DDC > flTarget)
			{
				m_f1DDC = m_f1DDC - flShrink;
				if (m_f1DDC < flTarget)
					m_f1DDC = flTarget;
			}
			float flNew = m_f1DDC > 99.0f ? 99.0f : (m_f1DDC < 0.0f ? 0.0f : (float)(m_f1DDC * 1.0));
			m_f1DDC = flNew;
		}
	}
	else
	{
		*(unsigned int *)&m_hLastRangedWeapon = -1;
		sub_10160520();
	}
}
// END FUNCTION

// FUNCTION: 0x10160520 size=0x30
#include "CBasePlayer.h"

extern float g_1046fb0c;

inline void SetPair10160520(float *pDst, float a, float b)
{
	pDst[0] = a;
	pDst[1] = b;
}

// TARGET: CBasePlayer::sub_10160520
void CBasePlayer::sub_10160520()
{
	*(volatile float *)&m_f1DDC = g_1046fb0c;
	float fA = *(volatile float *)&m_vec1EFC.x;
	fA += *(float *)&m_vec206c.x;
	float fB = *(float *)&m_vec1EFC.y;
	fB += *(float *)&m_vec206c.y;
	SetPair10160520(&m_f1DE4, fB, fA);
}
// END FUNCTION

// FUNCTION: 0x10160560 size=0xe0
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"

struct WeaponInfoView_t {
	char pad0[0x3cc];
	int n3cc;
	int n3d0;
	int n3d4;
	char pad3d8[0x400 - 0x3d8];
	float f400;
};

struct PlayerMeterView_t {
	char pad0[0x1ddc];
	float f1ddc;
};

extern float g_1046fb0c;

void CBasePlayer::sub_10160560()
{
	CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
	if (pWeapon && (pWeapon->vfunc360() & 0x6000)) {
		PlayerMeterView_t *pView = (PlayerMeterView_t *)this;
		float flFrac = sub_10346070() * 0.1f;
		float flA = (float)((WeaponInfoView_t *)pWeapon->sub_102517e0())->n3d0;
		float flB = (float)((WeaponInfoView_t *)pWeapon->sub_102517e0())->n3d4;
		float flT = (flA - flB) * flFrac + flB;
		float flU = flT - (float)((WeaponInfoView_t *)pWeapon->sub_102517e0())->n3cc;
		float flValue = flU * ((WeaponInfoView_t *)pWeapon->sub_102517e0())->f400 + pView->f1ddc;
		pView->f1ddc = flValue;
		if (flValue > g_1046fb0c) {
			flValue = g_1046fb0c;
			pView->f1ddc = flValue;
			return;
		}
		if (flValue < 0.0f)
			flValue = 0.0f;
		pView->f1ddc = flValue;
	}
}
// END FUNCTION

// FUNCTION: 0x10160680 size=0xd
#include "CUnknown10160680.h"
extern float g_10725c9c;
// TARGET: CUnknown10160680::sub_10160680
float CUnknown10160680::sub_10160680()
{
	return g_10725c9c * m_flUnk1ddc;
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
void CBasePlayer::vfunc181(const float *p, const float *a, const float *b)
{
	((CTPHelper *)this)->sub_100ada20((void *)p, (void *)a, (void *)b);
	if (p != 0)
		sub_1028d820((void *)p);
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

	vfunc266();

	if (EHandle_Get(m_hTarget1538.m_Index) && m_nTarget153c == 0)
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

	float flDuration = pAnim->sub_10091080(m_nSequence6f0);
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

// FUNCTION: 0x10160940 size=0xa
#include "ConVar.h"
ConVar g_107255e8("melee_flinch_time", "1.0", 0, "Duration of time for melee flinch viewkick.");
// END FUNCTION

// FUNCTION: 0x101609d0 size=0xa
#include "ConVar.h"
ConVar g_10725630("melee_flinch_big_time", "5.0", 0, "Duration of time for melee super flinch viewkick.");
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
	m_flNextAttack1564 = flTime + gpGlobals->curtime;
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
	m_flNextAttack1564 = flTime + gpGlobals->curtime;
	return true;
}
// END FUNCTION

// FUNCTION: 0x10160dc0 size=0x45
#include "CBaseAnimating.h"
struct CSeqRangeEnt { char pad[0x2f0]; float m_flStart; float m_flEnd; };
struct CAnimRangeView : CBaseAnimating {
	char m_pad[0x6f0 - sizeof(CBaseAnimating)];
	int m_nSequence;
	char m_pad2[4];
	float m_flCycle;
	char sub_10160dc0();
};
char CAnimRangeView::sub_10160dc0()
{
	CSeqRangeEnt *p = (CSeqRangeEnt *)sub_1008d990(m_nSequence);
	return p && m_flCycle >= p->m_flStart && m_flCycle <= p->m_flEnd;
}
// END FUNCTION

// FUNCTION: 0x10160e30 size=0x1e
// TARGET: sub_10160e30
struct CUnk10160e30Obj
{
    char pad[0x2f0];
    float m_2f0;
};
CUnk10160e30Obj *__stdcall sub_1008d990(int a);
struct CUnk10160e30
{
    char pad[0x6f0];
    int m_6f0;
    float sub_10160e30();
};
float CUnk10160e30::sub_10160e30()
{
    CUnk10160e30Obj *p = sub_1008d990(m_6f0);
    if (p)
    {
        return p->m_2f0;
    }
    return 3.4028235e38f;
}
// END FUNCTION

// FUNCTION: 0x10160e60 size=0x1e
// TARGET: sub_10160e60
struct CUnk10160e60Obj
{
    char pad[0x2f4];
    float m_2f0;
};
CUnk10160e60Obj *__stdcall sub_1008d990(int a);
extern float g_10470498;
struct CUnk10160e60
{
    char pad[0x6f0];
    int m_6f0;
    float sub_10160e60();
};
float CUnk10160e60::sub_10160e60()
{
    CUnk10160e60Obj *p = sub_1008d990(m_6f0);
    if (p)
    {
        return p->m_2f0;
    }
    return g_10470498;
}
// END FUNCTION

// FUNCTION: 0x10160e90 size=0x18
struct CUnk10160e90 {
    char pad[0xff0];
    int m_ff0;
    bool sub_10160e90();
};

bool CUnk10160e90::sub_10160e90()
{
    if (m_ff0 == 0x1154 || m_ff0 == 0x52)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10160ec0 size=0x79
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CBaseCombatWeapon.h"
#include "TestBit.h"

struct PlayerView : CEntityVSlots
{
    char pad0004[0x268 - 4];
    unsigned int m_flags268;
    char pad026c[0x3bc - 0x26c];
    Vector m_vecAbsVelocity;	// 0x3bc
    char pad03c8[0x2088 - 0x3c8];
    unsigned int m_nFlags2088;

    int sub_100b3700();	// CBaseEntity::GetFlags (stub 0x10008b84)
    CBaseCombatWeapon *sub_1032e7b0();	// the active weapon (stub 0x10007e19)
    void sub_100b1d10();	// CBaseEntity::CalcAbsoluteVelocity (stub 0x1000d486)
};

// TARGET: sub_10160ec0
bool __fastcall sub_10160ec0(PlayerView *pThis)
{
    if (pThis->sub_100b3700() & 1)
    {
        CBaseCombatWeapon *pWeapon = pThis->sub_1032e7b0();
        if (pWeapon && !(pWeapon->vfunc360() & 0x18000))
            return false;
        if (pThis->m_nFlags2088 & 0x8000000)
            return true;
        if (TestBit(pThis->m_flags268, 12))
            pThis->sub_100b1d10();
        pThis->m_vecAbsVelocity.Length2D();
    }
    return false;
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

// FUNCTION: 0x101611e0 size=0x5
char __stdcall sub_101611e0(int a0)
{
    return 0;
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
		if (gpGlobals->curtime < m_flNextAttack1564)
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

// FUNCTION: 0x10161380 size=0x1f
#include "vampire.h"
// TARGET: sub_10161380
char __fastcall sub_10161380(char *p)
{
    int a = *(int *)(p + 0xff0);
    if (a >= 0x75 && (a <= 0x93 || a == 0x9d0))
        return 1;
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101613b0 size=0x51
#include "CBasePlayerUnit326.h"
struct CBasePlayerUnit326View { char pad[0xff0]; int m_nState; };
char CBasePlayerUnit326::sub_101613b0()
{
    switch (((CBasePlayerUnit326View *)this)->m_nState) {
    case 0x28: case 0x29: case 0x2a: case 0x2c: case 0x2f: case 0x4c:
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10161430 size=0x14
#include "CBasePlayer.h"
// TARGET: CBasePlayer::vfunc413
bool CBasePlayer::vfunc413()
{
	if (m_IdealActivity == 0x32)
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

// FUNCTION: 0x101618a0 size=0x2d
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

CBaseEntity *CBasePlayer::sub_101618a0()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x1db0);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101618e0 size=0x135
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;
extern char g_10015b68[];	// think function stub



struct PlayerMoveHelper
{
	void sub_100b2770(const float *pVec);	// stub 0x1000489a
};

struct PlayerStateBlock48 { int d[0x30]; };
struct PlayerStateBlock21 { int d[0x15]; };

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

static inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return s->m_pEntity;
	}
	return 0;
}

void CBasePlayer::sub_101618e0(int a, int b)
{
	char bCopyState = (char)a;
	char bMove = (char)b;
	CBaseEntity *pEnt = (CBaseEntity *)LookupEntity(*(unsigned int *)((char *)this + 0x1db0));
	if (pEnt) {
		if (bCopyState) {
			char *pChar = *(char **)((char *)pEnt + 0x98);
			if (pChar) {
				*(int *)((char *)this + 0x6f0) = *(int *)(pChar + 0x6f0);
				*(int *)((char *)this + 0x174) = *(int *)(pChar + 0x174);
				*(int *)((char *)this + 0x6f8) = *(int *)(pChar + 0x6f8);
				*(int *)((char *)this + 0x6f4) = *(int *)(pChar + 0x6f4);
				*(PlayerStateBlock48 *)((char *)this + 0x734) = *(PlayerStateBlock48 *)(pChar + 0x734);
				*(PlayerStateBlock21 *)((char *)this + 0x7f4) = *(PlayerStateBlock21 *)(pChar + 0x7f4);
			}
		}
		if (bMove) {
			((CEntityVSlots *)this)->slot64((const float *)((CEntityVSlots *)pEnt)->slot219());
			if (TestBit(pEnt->m_flags268, 12))
				pEnt->sub_100b1d10();
			((PlayerMoveHelper *)this)->sub_100b2770((const float *)((char *)pEnt + 0x3bc));
			((CEntityVSlots *)this)->slot62((const float *)((CEntityVSlots *)pEnt)->slot217());
		}
		pEnt->sub_100ac4e0((int)g_10015b68, 0, 0);
		*(float *)((char *)pEnt + 0x17c) = gpGlobals->curtime + 0.01;
		*(unsigned int *)((char *)this + 0x1db0) = 0xffffffff;
	}
}
// END FUNCTION

// FUNCTION: 0x10161a70 size=0x216
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
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

__declspec(dllimport) void __cdecl Warning(const char *, ...);
int __cdecl _strcmpi(const char *, const char *);

struct CCtrlHolderView
{
	char m_pad[0x98];
	CEntityVSlots *m_pEnt98;
};
CCtrlHolderView *sub_10136580(const char *);
void sub_101d1280(CEntityVSlots *);

struct CCtrlNpcView : CEntityVSlots
{
	char m_pad0[0x19c - 4];
	unsigned int m_nEffects19c;
	char m_pad1[0x204 - 0x1a0];
	unsigned int m_flags204;
	char m_pad2[0x63b4 - 0x208];
	float m_f63b4;
	void sub_10097310(CBasePlayer *pPlayer);
};

inline const char *ClassnameOf(CBaseEntity *p)
{
	return p->m_classname11c ? p->m_classname11c : g_106b8540;
}

// TARGET: CBasePlayer::sub_10161a70
void *CBasePlayer::sub_10161a70(const char *pszClass)
{
	if (m_hControllerNPC1db0.Get()) {
		if (_strcmpi(ClassnameOf((CBaseEntity *)m_hControllerNPC1db0.Get()), pszClass)) {
			Warning("\nGetControllerNPC() asked for NPC class: %s, but already has NPC of class %s.\n Deleting old NPC, this better be OK!!\n\n", pszClass, ((CBaseEntity *)m_hControllerNPC1db0.Get())->sub_1009f200());
			sub_101618e0(0, 0);
		} else {
			return m_hControllerNPC1db0.Get();
		}
	}
	CCtrlHolderView *pHolder = sub_10136580(pszClass);
	CCtrlNpcView *pNpc = 0;
	if (pHolder)
		pNpc = (CCtrlNpcView *)pHolder->m_pEnt98;
	if (!pNpc) {
		Warning("GetControllerNPC() created NULL Entity for :%s\n", pszClass);
		m_hControllerNPC1db0.Set(0);
	} else {
		pNpc->m_flags204 |= 4;
		CEntityVSlots *pThis = (CEntityVSlots *)this;
		pNpc->slot62(&pThis->slot217()->x);
		pNpc->slot64(&pThis->slot221()->x);
		pNpc->slot202(pThis);
		pNpc->sub_10097310(this);
		pNpc->m_f63b4 = 4096.0f;
		int tmp;
		const char *pszModel = *pThis->slot9(&tmp);
		if (!pszModel)
			pszModel = g_106b8540;
		pNpc->slot105(pszModel);
		sub_101d1280(pNpc);
		pNpc->m_nEffects19c |= 0x60;
		pNpc->slot614();
		m_hControllerNPC1db0 = (CBaseEntity *)pNpc;
	}
	return m_hControllerNPC1db0.Get();
}
// END FUNCTION

// FUNCTION: 0x10161d20 size=0x14d
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

void *sub_10002e32(const char *pszName);
void sub_101d1280(CEntityVSlots *pEnt);
void sub_101cf390(CEntityVSlots *pEnt, int a, int b);
void sub_101cf600(CEntityVSlots *pEnt);

struct CPlaceholderLink {
	virtual void v0();
	virtual unsigned int *vfunc1();
};
struct CPlaceholderObj {
	char m_pad[0x98];
	CPlaceholderLink *m_pLink;
	CPlaceholderLink *GetLink() { return m_pLink; }
};
struct CPlaceholderEnt : CEntityVSlots {
	char m_pad[0x19c - sizeof(CEntityVSlots)];
	unsigned int m_nFlags;
	EVS(606) EVS(607) EVS(608) EVS(609) EVS(610) EVS(611) EVS(612) EVS(613)
	virtual void slot614();
};
struct CPlayerHandleFields {
	char m_pad[0x1da4];
	unsigned int m_h1da4;
};

CBaseEntity *CBasePlayer::sub_10161d20()
{
	CPlayerHandleFields *f = (CPlayerHandleFields *)this;
	if (!EHandle_Get(f->m_h1da4)) {
		CPlaceholderObj *pObj = (CPlaceholderObj *)sub_10002e32("npc_VPlaceholder");
		CPlaceholderLink *pLink = (pObj == 0) ? 0 : pObj->GetLink();
		if (pLink != 0) {
			unsigned int *ph = pLink->vfunc1();
			f->m_h1da4 = *ph;
		} else {
			f->m_h1da4 = 0xffffffff;
		}
	}
	CPlaceholderEnt *pEnt = (CPlaceholderEnt *)EHandle_Get(f->m_h1da4);
	if (pEnt) {
		CEntityVSlots *me = (CEntityVSlots *)this;
		int tmp;
		pEnt->slot62((const float *)me->slot217());
		pEnt->slot64((const float *)me->slot221());
		pEnt->slot202(me);
		const char *pszName = *me->slot9(&tmp);
		pEnt->slot105(pszName ? pszName : "");
		sub_101d1280(pEnt);
		int a = Sub270().vfunc1();
		int b = Sub270().vfunc2();
		sub_101cf390(pEnt, a, b);
		sub_101cf600(pEnt);
		pEnt->m_nFlags |= 0x60;
		pEnt->slot614();
	}
	return (CBaseEntity *)pEnt;
}
// END FUNCTION

// FUNCTION: 0x10161ed0 size=0x2d
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

CBaseEntity *CBasePlayer::sub_10161ed0()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x1da4);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10161f10 size=0x63
#include "CBasePlayer.h"
#include "CBaseEntity.h"
void sub_101c0b10();
// TARGET: CBasePlayer::sub_10161f10
void CBasePlayer::sub_10161f10()
{
    CBaseEntity *pEnt = m_hPlaceholder1da4.Get();
    if (pEnt) {
        pEnt->sub_100ac4e0((int)sub_101c0b10, 0, 0);
        pEnt->m_flNextThink = gpGlobals->curtime + 0.01f;
        m_hPlaceholder1da4 = EHANDLE();
    }
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
char CBasePlayer::vfunc360()
{
	if (EHandle_Get(m_hTarget1538.m_Index) && m_nTarget153c != -1)
	{
		DevWarning("CheckForPlayerFrenzy - Failed because player is grappling!\n");
		return (char)(false);
	}
	if (m_nUseEdictIndex1EB8)
		return (char)(false);
	if (!sub_10376d00(this))
	{
		DevWarning("CheckForPlayerFrenzy - Failed to prepare NPC enemy list!  No close NPCs.\n");
		return (char)(false);
	}
	vfunc457("item_w_fists", 0);
	CFrenzyShadowView *pShadow = (CFrenzyShadowView *)sub_10161a70("npc_VFrenzyShadow");
	if (!pShadow)
	{
		DevWarning("Failed to create frenzy controller in CheckForPlayerFrenzy!\n");
		return (char)(false);
	}
	if (pShadow->vfunc138() != 3)
		DevWarning("Non Troika Ent in CheckForPlayerFrenzy!\n");
	sub_10147a30(3);
	sub_1017e150(1, -1.0f, sub_101d3730("CheckForPlayerFrenzy"));
	sub_101cebc0(this, 0, 0);
	g_10750cb4.sub_10227a30(this, 0);
	return (char)(true);
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
	if (m_nTakeDamage != 0)
		m_bitsDamageType &= ~(bitsDamageType & 0x3fff);
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

// FUNCTION: 0x101622d0 size=0x4e
#include "CBaseEntity.h"
CBaseEntity *sub_101cd9e0(int index);
struct S101622d0_Target
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad04[0x2c - 4];
	int m_n2c;
};
struct S101622d0_Arg
{
	int m_n00;
	S101622d0_Target *m_pTarget;
};
struct S101622d0_Player
{
	char m_pad[0x224];
	unsigned int m_nFlags224;
};
void sub_101622d0(S101622d0_Arg *pArg)
{
	S101622d0_Player *pPlayer = (S101622d0_Player *)sub_101cd9e0(1);
	if (pPlayer) {
		if (!pArg->m_pTarget->vfunc1() && pArg->m_pTarget->m_n2c)
			pPlayer->m_nFlags224 |= 2;
		else
			pPlayer->m_nFlags224 &= ~2;
	}
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
		::sub_10139610(pV->GetAbsAngles(), &forward, &right, &up);
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
	if (m_nTakeDamage)
	{
		CTDIScale info = *(CTDIScale *)pInfoArg;

		CAI_BaseNPC *pSub = *(CAI_BaseNPC **)((char *)info.m_pInflictor + 0x94);
		if (pSub && (pSub->vfunc513() & 0x10000000))
			return;

		if (info.m_pVDmg00->sub_101fb340(ENTINDEX_141(m_pEdict2e0)))
			return;

		int idx = ENTINDEX_141(m_pEdict2e0);
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

int CBasePlayer::vfunc142(struct CTakeDamageInfo *pInfo)
{
#define pInfo ((const CTakeDamageInfo *)pInfo)
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

	if ((EHandle_Get(m_hTarget1538) && m_nTarget153c != -1 && m_nTargetMode1540 == 0) ||
		(EHandle_Get(m_hTarget1538) && m_nTarget153c != -1 && m_nTargetMode1540 == 2))
	{
		((CBaseCombatCharacter *)this)->c353();
		sub_10329560();
	}

	sub_1017c6d0();
	sub_10167fd0();

	if (m_aLastplayerAnim == 0xc && m_iBloodStolen > 0)
	{
		do
		{
			m_iBloodStolen--;
			sub_10338df0(1);
			m_aLastplayerAnim = 0;
			m_bPlayerAnimCyclePlaying = false;
		} while (m_iBloodStolen > 0);
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
#undef pInfo
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
	bool IsDirtyAbsVelocity() { return (m_flags268 >> 12) & 1; }
	const Vector &GetAbsVelocity()
	{
		if (IsDirtyAbsVelocity())
			((CBaseEntity *)(void *)this)->sub_100b1d10();
		return m_vecVelocity3bc;
	}
	void ApplyAbsVelocityImpulse(const Vector &inVecImpulse)
	{
		Vector vecResult = GetAbsVelocity() + inVecImpulse;
		((CBaseEntity *)(void *)this)->sub_100b2e30((const float *)&vecResult);
	}
};

int CBasePlayer::vfunc390(CTakeDamageInfo *pInfo)
{
	m_bitsDamageType |= GetDamageType(*pInfo);

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
	int GetEdict() { return m_pEdict2e0; }
};
void CBasePlayer::vfunc144(void  *pArg)
{
#define pArg ((const void *)pArg)
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
	CSoundEntView *pSnd = sub_101bb150(sub_101bb220(m_pEdict2e0));
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
	*(EHANDLE *)&m_hInteractiveUseTarget.m_Index = (CBaseEntity *)0;
	*(EHANDLE *)&m_h14ac.m_Index = (CBaseEntity *)0;
	*(EHANDLE *)&m_h149c.m_Index = (CBaseEntity *)0;
	m_bCantBreakGrapple = 0;
	m_bIsFrenzyGrapple = 0;
	m_flBreakGrappleTimer = 0;
	m_b14a8 = 0;
	m_b14aa = 0;
	m_bObfuscateReady14dc = 0;
	m_nShakyIndex1044 = -1;
	m_flShakyEnd1048 = 0;
	m_flShakyIntensity1050 = 0;
	m_flShakyTime104c = 0;
	m_n1E78 = 0;
	((CBP144View *)this)->sub_10003684(pArg);
#undef pArg
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

// FUNCTION: 0x10163f70 size=0x9e
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "ScopeTrace.h"
#include "ehandle.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CHudEmitterView
{
	virtual void v0();
	virtual unsigned int *vfunc1();
	virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S100(b) S10(d0) S10(d1) S10(d2) S10(d3)
	virtual void e0(); virtual void e1(); virtual void e2();
	virtual void vfunc243(CBaseEntity *pOwner, int a, const char *psz);
};

extern CGlobalEntityList *g_10566458;
extern float g_1070d1b0[3];
extern float g_1070d9d0[3];
CEntityVSlots *sub_100fbc90(const char *pszName, const float *pOrigin, const float *pAngles, float flLifetime);

inline CHudEmitterView *CreateHudFire(CBasePlayer *pPlayer)
{
	CHudEmitterView *p = (CHudEmitterView *)sub_100fbc90("DMGFX_hud_fire_emitter", g_1070d1b0, g_1070d9d0, -1.0f);
	CBaseEntity *pOwner = pPlayer->sub_1015d680(0);
	if (p && pOwner)
		p->vfunc243(pOwner, 7, g_106b8540);
	return p;
}

CBaseEntity *CBasePlayer::sub_10163f70()
{
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x1d64);
	CGlobalEntityList_Ent *pFound;
	CGlobalEntityList_Slot *pSlot;
	unsigned int nHandle = *pHandle;
	if (nHandle != -1 && (pSlot = &g_10566458->m_Slots[nHandle & 0x1fff], pSlot->m_Serial == (int)(nHandle >> 13)))
		pFound = pSlot->m_pEntity;
	else
		pFound = 0;
	CHudEmitterView *pEmitter = (CHudEmitterView *)pFound;
	if (pEmitter == 0)
		pEmitter = CreateHudFire(this);
	if (pEmitter)
		*pHandle = *pEmitter->vfunc1();
	else
		*pHandle = 0xffffffff;
	return (CBaseEntity *)pEmitter;
}
// END FUNCTION

// FUNCTION: 0x10164040 size=0x135
#include "CBasePlayer.h"

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

void CBasePlayer::sub_10164040(int type, int *pActivity, int *pOut)
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
// END FUNCTION

// FUNCTION: 0x101641d0 size=0x4a
#include "CBasePlayer.h"
// TARGET: CBasePlayer::sub_101641d0
void CBasePlayer::sub_101641d0(int type)
{
    char *p = (char *)this;
    if (p[0x1cb0] && type == 0xc) {
        int a, b;
        sub_10164040(0xc, &a, &b);
        sub_101644f0(a, b, 1);
        *(int *)(p + 0x1cb4) = 0xc;
    }
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
	CGlobalEntityList_Ent *pEnt = EHandle_Get(p->m_hTarget1538);
	if (pEnt && p->m_nTarget153c != -1)
		return pEnt;
	return 0;
}

void CBasePlayer::vfunc449(int a, int b)
{
	if (vfunc412())
	{
		if (m_b1DF4 && sub_10161380() && m_fl6f8 >= 0.65f)
		{
			CEntSlot360View *pEnt = (CEntSlot360View *)EHandle_Get(m_hEa4);
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
	else if (!(EHandle_Get(m_hTarget1538) && m_nTarget153c == 1))
	{
		char r;
		if (EHandle_Get(m_hTarget1538))
		{
			switch (m_nTargetMode1540)
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
	sub_10146e20(m_IdealActivity, a);
	sub_1017e900(m_Activity, a);
}
// END FUNCTION

// FUNCTION: 0x101644f0 size=0x21d
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "globalvars.h"
#include "Vector.h"

struct PCharView1015fbb0
{
	void sub_1015fbb0(int nActivity, int nArg);
};

struct PPlayerSlots
{
	EVS10(0) EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20) EVS10(21) EVS10(22) EVS10(23) EVS10(24) EVS10(25)
	EVS(260) EVS(261) EVS(262) EVS(263) EVS(264) EVS(265) EVS(266) EVS(267) EVS(268)
	virtual void slot269(bool b);
	EVS10(27) EVS10(28) EVS10(29) EVS10(30)
	virtual void slot310(int act);
	EVS(311) EVS(312) EVS(313) EVS(314) EVS(315) EVS(316) EVS(317) EVS(318) EVS(319)
	EVS10(32) EVS10(33) EVS10(34) EVS10(35) EVS10(36)
	EVS(370) EVS(371) EVS(372) EVS(373) EVS(374) EVS(375)
	virtual int slot376(int act);
	EVS(377) EVS(378) EVS(379) EVS(380)
	virtual int slot381(int act);
	EVS(382) EVS(383) EVS(384) EVS(385) EVS(386) EVS(387) EVS(388) EVS(389)
	EVS10(39) EVS10(40) EVS(410) EVS(411) EVS(412)
	virtual char slot413();
};

void CBasePlayer::sub_101644f0(int activity, int arg2, int arg3)
{
	PPlayerSlots *pPlayer = (PPlayerSlots *)this;
	bool bFirst = activity == 0x13 || activity == 9 || activity == 0x12 || activity == 0x17 || activity == 0x16;
	bool bSecond = activity == 0x28 || activity == 0x29 || activity == 0x2a || activity == 0x2c ||
		activity == 0x2d || activity == 0x2e || activity == 0x2f;
	bool bFrenzy = !bFirst && !pPlayer->slot413();

	if (activity != -1)
	{
		((CBaseCombatCharacter *)this)->sub_10324500(activity);
		int translated = pPlayer->slot381(activity);
		activity = pPlayer->slot376(translated);

		bool bChanged = activity != ((CBaseCombatCharacter *)this)->m_Activity || m_b65c;
		if (bSecond)
			bChanged = activity != ((CBaseCombatCharacter *)this)->m_Activity;

		if (bChanged)
		{
			pPlayer->slot310(activity);
			int seq;
			if (!(((CBaseCombatCharacter *)this)->sub_100b3700() & 0x40000000))
			{
				seq = ((CBaseAnimating *)this)->sub_1008dc40(activity, -1);
			}
			else
			{
				seq = ((CBaseAnimating *)this)->sub_1008dd30(activity, -1);
				((CBaseCombatCharacter *)this)->sub_100b3640(0x40000000);
			}

			if (((CBaseCombatCharacter *)this)->m_nSequence6f0 != seq || m_b65c)
			{
				((CBaseCombatCharacter *)this)->m_nSequence6f0 = seq;
				if (!bFirst)
					((CBaseCombatCharacter *)this)->m_fl6f8 = 0;
				((CBaseAnimating *)this)->sub_10090950();
				((CBaseCombatCharacter *)this)->m_flPlaybackRate6f4 = ((CBaseCombatCharacter *)this)->m_flFrenzyRate;
			}
		}

		if (bFirst)
		{
			float flSpeed = ((CBaseAnimating *)this)->sub_10091490(((CBaseCombatCharacter *)this)->m_nSequence6f0, 0);
			if (flSpeed > 0.0f)
				((CBaseCombatCharacter *)this)->m_flPlaybackRate6f4 = ((Vector *)((CBaseCombatCharacter *)this)->m_vel3d4)->Length2D() / flSpeed;
			else
				((CBaseCombatCharacter *)this)->m_flPlaybackRate6f4 = 1.0f;
		}
		else
		{
			((CBaseCombatCharacter *)this)->m_flPlaybackRate6f4 = bFrenzy ? ((CBaseCombatCharacter *)this)->m_flFrenzyRate : 1.0f;
		}
	}

	if (arg2 == 0)
	{
		pPlayer->slot269(false);
	}
	else if (arg2 != -1)
	{
		int translated2 = pPlayer->slot381(arg2);
		int act2 = pPlayer->slot376(translated2);
		((PCharView1015fbb0 *)this)->sub_1015fbb0(act2, arg3);
	}

	if (activity != 1 && activity != 4)
		*(float *)((char *)this + 0x1c68) = gpGlobals->curtime;
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
#define m_hUseEnt1040X (*(EHANDLE *)&m_hInteractiveUseTarget.m_Index)
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
		CBaseEntity *pWeapon = m_hEa8.Get();
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
	float speed = (*(Vector *)m_vel3d4).Length2D();
	{
		float flYaw = anglemod(vfunc219()[1]);

		if (playerAnim == 5 && sub_1032e7b0())
			slots->slot410();

		if (speed > g_104454c4)
		{
			int iMoveYaw = self->sub_10092270("move_yaw");
			float flVel = sub_101d2c70((*(Vector *)m_vel3d4));
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
		idealActivity = ((*(Vector *)m_vel3d4).z < -40.0f) ? 0x34 : 0x33;
		if ((*(Vector *)m_vel3d4).z > -40.0f && (*(Vector *)m_vel3d4).z < 40.0f)
			m_f6F4 = 0;
		else
			m_f6F4 = m_flFrenzyRate;
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
		if ((speed > 25.0f && MoveType3e0() >= 3 && fabs((*(Vector *)m_vel3d4).x) > 20.0) ||
			(speed > 75.0f && !(sub_100b3700() & 1) && fabs((*(Vector *)m_vel3d4).x) > 20.0))
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
		int n = m_IdealActivity;
		iSeq = 0;
		if (m_b65c)
		{
			if (n == 0x131)
				idealActivity = 0x132;
			else if (n == 0x132)
			{
				if (!m_b14a8)
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
				idealActivity = m_IdealActivity;
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
		Vector vec = (*(Vector *)m_vel3d4);
		vec.x = 0;
		vec.y = 0;
		sub_100b2e30(&vec);
	}

	if ((idealActivity == 5 || idealActivity == 1) && m_IdealActivity == 0x4b && !m_b65c)
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
	if (m_nTarget153c != -1)
		pTarget = (CEntityVSlots *)EHandle_Get(m_hTarget1538.m_Index);
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
	CGlobalEntityList_Ent *pTarget = (m_nTarget153c != -1) ? EHandle_Get(m_hTarget1538.m_Index) : 0;
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

// FUNCTION: 0x10165790 size=0x1e2
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "CTraceFilterSimpleTwoEnt.h"
#include "CGameTrace.h"
#include "Ray_t.h"
#include "ScopeTrace.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"
#include "QAngle.h"

struct IHullBounds
{
	virtual void v0();
	virtual const float *vfunc1();
	virtual const float *vfunc2();
};

extern CUnknown1070b254 *g_1070b254;
extern CUnknown10738964 *g_10738964;
void sub_10139550(const QAngle &angles, Vector *forward);
void sub_10146570(const float *pStart, const float *pEnd, int r, int g, int b, int c, float duration);

int CBasePlayer::sub_10165790(CBaseEntity *pEntity)
{
	CEntityVSlots *pEnt = (CEntityVSlots *)pEntity;
	Vector vecOrigin = *pEnt->slot220();
	Vector vecForward;
	sub_10139550(*(QAngle *)pEnt->slot221(), &vecForward);
	Vector vecEnd = vecOrigin - vecForward * 100.0f;
	CTraceFilterSimpleTwoEnt filter(this, pEntity, 0);
	IHullBounds *pBounds = (IHullBounds *)((char *)pEntity + 0x270);
	const float *pMins = pBounds->vfunc1();
	const float *pMaxs = pBounds->vfunc2();
	CGameTrace trace;
	{
		ScopeTrace scope("UTIL_TraceHull", g_106b8540);
		Ray_t ray;
		ray.sub_1006dec0(vecOrigin, (const float *)&vecEnd, pMins, pMaxs, 1, 0);
		g_1070b254->vfunc4(&ray, 0x202400b, (CTraceFilterNoCharacterCollide *)&filter, &trace);
		if (!g_10738964->vfunc1() && g_10738964->m_n2c)
			sub_10146570(trace.m_startpos, trace.m_endpos, 255, 255, 0, 1, -1.0f);
	}
	if (trace.m_fraction < 1.0f || trace.m_allsolid || trace.m_startsolid)
		return 1;
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
	if (m_nTarget153c != -1)
		p = (CBaseEntity *)EHandle_Get(m_hTarget1538.m_Index);
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
	sub_10165790(m_nTarget153c != -1 ? (CBaseEntity *)EHandle_Get(m_hTarget1538.m_Index) : 0);
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
	CGlobalEntityList_Ent *pTarget = (m_nTarget153c != -1) ? EHandle_Get(m_hTarget1538.m_Index) : 0;
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
        if (m_nTarget153c != -1) {
            CBaseCombatCharacter *pChar = ((CStatHolderHandle *)&m_hTarget1538.m_Index)->Get();
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
	CGlobalEntityList_Ent *pTarget = (m_nTarget153c != -1) ? EHandle_Get(m_hTarget1538.m_Index) : 0;
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

// FUNCTION: 0x10166120 size=0x2ea
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CBaseCombatCharacter.h"
#include "CEntityVSlots.h"
#include "CEntitySoundOriginView.h"
#include "CEdictView.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown101c26d0.h"

extern char g_10726004;

// TARGET: CBasePlayer::sub_10166120
void CBasePlayer::sub_10166120()
{
	if (vfunc94() == 9)
	{
		m_fl22FC = gpGlobals->curtime + 12.0f;
		return;
	}
	if (((CBaseEntity *)this)->m_iHealth < 0)
		return;

	if (MoveType3e0() != 3)
	{
		m_fl22FC = gpGlobals->curtime + 12.0f;
		m_n2344 = 2;
		if (m_n2284 > m_n2288)
		{
			m_rgbTimeBasedDamage[4] = 0;
			m_bitsDamageType = (m_bitsDamageType & ~0x4000) | 0x80000;
		}
	}
	else
	{
		if (((CBaseCombatCharacter *)this)->sub_10337f30())
			goto tail;

		m_rgbTimeBasedDamage[4] = 0;
		m_bitsDamageType &= ~0x80000;
		if (m_fl22FC < gpGlobals->curtime)
		{
			if (m_fl2300 < gpGlobals->curtime)
			{
				m_n2344++;
				if (m_n2344 > 5)
					m_n2344 = 5;

				CEdictView *pEdict1 = (CEdictView *)EngineGlobals::g_1070b22c->vfunc38(0);
				CBaseEntity *pInflictor = (pEdict1 && pEdict1->m_pUnk) ? (CBaseEntity *)pEdict1->m_pUnk->vfunc4() : 0;
				CEdictView *pEdict2 = (CEdictView *)EngineGlobals::g_1070b22c->vfunc38(0);
				CBaseEntity *pAttacker = (pEdict2 && pEdict2->m_pUnk) ? (CBaseEntity *)pEdict2->m_pUnk->vfunc4() : 0;

				CUnknown101c26d0 dmg;
				((CEntityVSlots *)this)->slot142(dmg.sub_101c26d0(pAttacker, pInflictor, (float)m_n2344, 0x4000, 0, 0, -1));

				m_fl2300 = gpGlobals->curtime + 1.0f;
				m_n2284 += m_n2344;
			}
		}
		else
		{
			m_bitsDamageType &= ~0x4000;
		}
	}

tail:
	if (MoveType3e0() < 2)
	{
		if (MoveType3e0() == 0)
		{
			if (((CBaseEntity *)this)->sub_100b3700() & 0x200)
			{
				g_10726004 = 0;
				((CBaseEntity *)this)->sub_100b3640(0x200);
			}
		}
		else
		{
			g_10726004 = 0;
		}
	}
	else
	{
		if (MoveType3e0() > 2)
		{
			if (!g_10726004)
			{
				CPASAttenuationFilter filter((CEntitySoundOriginView *)this, 0.8f);
				g_10726004 = 1;
			}
		}
		else
		{
			if (!(((CBaseEntity *)this)->sub_100b3700() & 0x200))
				((CBaseEntity *)this)->sub_100b3580(0x200);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101664d0 size=0x13
struct CVirtSlots94 {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10();
    virtual void vfunc11();
    virtual void vfunc12();
    virtual void vfunc13();
    virtual void vfunc14();
    virtual void vfunc15();
    virtual void vfunc16();
    virtual void vfunc17();
    virtual void vfunc18();
    virtual void vfunc19();
    virtual void vfunc20();
    virtual void vfunc21();
    virtual void vfunc22();
    virtual void vfunc23();
    virtual void vfunc24();
    virtual void vfunc25();
    virtual void vfunc26();
    virtual void vfunc27();
    virtual void vfunc28();
    virtual void vfunc29();
    virtual void vfunc30();
    virtual void vfunc31();
    virtual void vfunc32();
    virtual void vfunc33();
    virtual void vfunc34();
    virtual void vfunc35();
    virtual void vfunc36();
    virtual void vfunc37();
    virtual void vfunc38();
    virtual void vfunc39();
    virtual void vfunc40();
    virtual void vfunc41();
    virtual void vfunc42();
    virtual void vfunc43();
    virtual void vfunc44();
    virtual void vfunc45();
    virtual void vfunc46();
    virtual void vfunc47();
    virtual void vfunc48();
    virtual void vfunc49();
    virtual void vfunc50();
    virtual void vfunc51();
    virtual void vfunc52();
    virtual void vfunc53();
    virtual void vfunc54();
    virtual void vfunc55();
    virtual void vfunc56();
    virtual void vfunc57();
    virtual void vfunc58();
    virtual void vfunc59();
    virtual void vfunc60();
    virtual void vfunc61();
    virtual void vfunc62();
    virtual void vfunc63();
    virtual void vfunc64();
    virtual void vfunc65();
    virtual void vfunc66();
    virtual void vfunc67();
    virtual void vfunc68();
    virtual void vfunc69();
    virtual void vfunc70();
    virtual void vfunc71();
    virtual void vfunc72();
    virtual void vfunc73();
    virtual void vfunc74();
    virtual void vfunc75();
    virtual void vfunc76();
    virtual void vfunc77();
    virtual void vfunc78();
    virtual void vfunc79();
    virtual void vfunc80();
    virtual void vfunc81();
    virtual void vfunc82();
    virtual void vfunc83();
    virtual void vfunc84();
    virtual void vfunc85();
    virtual void vfunc86();
    virtual void vfunc87();
    virtual void vfunc88();
    virtual void vfunc89();
    virtual void vfunc90();
    virtual void vfunc91();
    virtual void vfunc92();
    virtual void vfunc93();
    virtual int vfunc94();
};

// TARGET: sub_101664d0
bool __fastcall sub_101664d0(CVirtSlots94 *p)
{
    return p->vfunc94() == 10;
}
// END FUNCTION

// FUNCTION: 0x10166500 size=0x2ed
#include "UTIL_Trace.h"
#include "CBasePlayer.h"
#include "globalvars.h"

void sub_10139610(const Vector *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);

static inline bool FlagBit12(unsigned int x) { return (x >> 12) & 1; }

void CBasePlayer::sub_10166500()
{
	if (sub_101664d0())
		return;

	Vector eye = vfunc192();
	eye.z += 8.0f;

	Vector dir;
	::sub_10139610(&m_vec206c, &dir, 0, 0);
	dir.z = 0;
	VectorNormalize(dir);

	Vector end = eye + dir * 24.0f;

	CGameTrace trace;
	UTIL_TraceLine_Calls(eye, end, 0x1400b, (const void *)this, 0, &trace);

	if (trace.m_fraction < 1.0f)
	{
		eye.z += ((const Vector *)Sub270().vfunc2())->z * 0.2f;
		end = eye + dir * 24.0f;
		(*(Vector *)m_vecMovedir) = *(Vector *)trace.m_planeNormal * -50.0f;

		UTIL_TraceLine_RayCall(eye, end, 0x1400b, (const void *)this, 0, &trace);

		if (trace.m_fraction == 1.0f)
		{
			sub_100b3580(4);
			if (FlagBit12(m_flags268))
				sub_100b1d10();
			Vector vel = m_vecVelocity3bc;
			vel.z = 225.0f;
			sub_100b2e30(&vel);
			m_fl2314 = gpGlobals->curtime + 2.0f;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101668b0 size=0x338
#include "CHL2_Player.h"
#include "globalvars.h"
#include "engineserver.h"
#include "engineiface.h"
#include "CEntitySoundOriginView.h"
#include "CPASAttenuationFilter.h"

struct CPlayerGameRulesView
{
	virtual void r00(); virtual void r01(); virtual void r02(); virtual void r03(); virtual void r04();
	virtual void r05(); virtual void r06(); virtual void r07(); virtual void r08(); virtual void r09();
	virtual void r10(); virtual void r11(); virtual void r12(); virtual void r13(); virtual void r14();
	virtual void r15(); virtual void r16(); virtual void r17(); virtual void r18(); virtual void r19();
	virtual void r20();
	virtual char vfunc21();
	virtual void r22(); virtual void r23(); virtual void r24(); virtual void r25(); virtual void r26();
	virtual void r27(); virtual void r28(); virtual void r29(); virtual void r30(); virtual void r31();
	virtual void r32(); virtual void r33(); virtual void r34(); virtual void r35(); virtual void r36();
	virtual char vfunc37(CHL2_Player *pPlayer);
};
struct CPlayerConVarView
{
	virtual void c0();
	virtual char vfunc1();
	char pad[0x2c - 4 - 0];
	int m_n2c;
};
extern CPlayerGameRulesView *g_1070ba0c;
extern CPlayerConVarView *g_1070a9fc;
extern Vector g_1070d1b0;
void __cdecl sub_10352ed0(CHL2_Player *pPlayer, int a);

struct CHL2_PlayerView
{
	void **vtbl;
	char pad04[0x17c - 4];
	float m_flNextThink;	// 0x17c
	char pad180[0x19c - 0x180];
	unsigned int m_nFlags;	// 0x19c
	char pad1a0[0x200 - 0x1a0];
	int m_nState;	// 0x200
	char pad204[0x2e0 - 0x204];
	int m_nEdict;	// 0x2e0
	char pad2e4[0x3d4 - 0x2e4];
	Vector m_vecVelocity;	// 0x3d4
	char pad3e0[0x65c - 0x3e0];
	char m_b65c;	// 0x65c
	char pad65d[0x6f4 - 0x65d];
	int m_n6f4;	// 0x6f4
	char pad6f8[0x2088 - 0x6f8];
	unsigned int m_n2088;	// 0x2088
	char pad208c[0x20ec - 0x208c];
	float m_f20ec;	// 0x20ec
	unsigned int m_n20f0;	// 0x20f0
	char pad20f4[0x229c - 0x20f4];
	float m_f229c;	// 0x229c

	void AddFlags(unsigned int f) { m_nFlags |= f; }
	float DeathTime() const { return m_f229c; }
};

void CHL2_Player::sub_101668b0()
{
	CHL2_PlayerView *p = (CHL2_PlayerView *)this;
	p->m_flNextThink = gpGlobals->curtime + 0.1;
	if (sub_100b3700() & 1) {
		float speed = p->m_vecVelocity.Length() - 20.0f;
		if (speed <= 0.0f) {
			sub_100b2e30(&g_1070d1b0);
		} else {
			Vector vel;
			vel = p->m_vecVelocity;
			VectorNormalize(vel);
			vel *= speed;
			sub_100b2e30(&vel);
		}
	}
	if (sub_10170fe0())
		vfunc441();
	if (vfunc8() != 0 && p->m_b65c == 0) {
		if (p->m_nState != 1)
			goto done;
		vfunc250(0);
		p->m_f20ec = p->m_f20ec + 1.0f;
		if (p->m_f20ec < 60.0f)
			return;
	}
	if (p->m_nState == 1) {
		p->m_nState = 2;
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		int edict = p->m_nEdict;
		enginesound->vfunc3(&filter, engine->vfunc35(edict), 2, "interface/final_death.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
	}
done:
	p->AddFlags(0x10);
	unsigned int n2088 = p->m_n2088 & 0xfffeffff;
	p->m_n6f4 = 0;
	if (p->m_nState == 2) {
		if (n2088 != 0)
			return;
		if (g_1070ba0c->vfunc37(this) == 0)
			return;
		p->m_f229c = gpGlobals->curtime;
		p->m_nState = 3;
		return;
	}
	if (g_1070ba0c->vfunc21()) {
		if (gpGlobals->curtime > p->DeathTime() + 6.0f && !((unsigned char)(p->m_n20f0 >> 5) & 1))
			sub_10166cc0();
	}
	if (n2088 == 0) {
		if (!g_1070ba0c->vfunc21())
			return;
		if (g_1070a9fc->vfunc1())
			return;
		if (g_1070a9fc->m_n2c <= 0)
			return;
		if (!(gpGlobals->curtime > p->DeathTime() + 5.0f))
			return;
	}
	p->m_n2088 = 0;
	p->m_f20ec = 0;
	sub_10352ed0(this, 0);
	p->m_flNextThink = -1.0f;
}
// END FUNCTION

// FUNCTION: 0x10166cc0 size=0x2bb
#include "UTIL_Trace.h"
#include "CHL2_Player.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"
#include "CGlobalEntityList.h"
#include "engineiface.h"
#include "QAngle.h"

extern Vector g_1070d1b0;
extern CGlobalEntityList g_106eb5d8;

void sub_10139970(const Vector &vec, QAngle &angles);

void CHL2_Player::sub_10166cc0()
{
    CBaseEntity *pSelf = (CBaseEntity *)this;
    Vector &vecView = pSelf->m_vecViewOffset;

    if (g_1070d1b0.x != vecView.x || g_1070d1b0.y != vecView.y || g_1070d1b0.z != vecView.z)
    {
        CBaseEntity *pEnt = g_106eb5d8.sub_100f7380(0, "info_intermission");
        if (pEnt)
        {
            int n = enginerandom->vfunc2(0, 3);
            while (n > 0)
            {
                CBaseEntity *pNext = g_106eb5d8.sub_100f7380(pEnt, "info_intermission");
                if (pNext)
                    pEnt = pNext;
                n--;
            }
            ((CBasePlayer *)this)->sub_10167030(*(Vector *)((CAI_BaseNPC *)pEnt)->vfunc220(),
                                                *(Vector *)((CAI_BaseNPC *)pEnt)->vfunc221());
            return;
        }

        CAI_BaseNPC *pView = (CAI_BaseNPC *)this;

        const Vector *pUp = (const Vector *)pView->vfunc220();
        Vector vecUp;
        vecUp.x = pUp->x;
        vecUp.y = pUp->y;
        vecUp.z = pUp->z + 128.0f;

        CGameTrace tr;
        UTIL_TraceLine_DebugCall(*(Vector *)pView->vfunc220(), vecUp, 0x1400b, this, 0, &tr);

        QAngle ang;
        sub_10139970(*(Vector *)tr.m_endpos - *(Vector *)pView->vfunc220(), ang);

        ((CBasePlayer *)this)->sub_10167030(*(Vector *)tr.m_endpos, *(Vector *)&ang);
    }
}
// END FUNCTION

// FUNCTION: 0x10167030 size=0x11e
#include "CBasePlayer.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"

extern Vector g_1070d1b0;
void sub_101cf5c0(CBasePlayer *pPlayer, Vector *pOrigin, int a);

struct CBasePlayerView
{
	char m_pad0000[0x184];
	Vector m_vec184;
	char m_pad0190[0x1fc - 0x190];
	int m_nTakeDamage;
	char m_pad0200[0x26c - 0x200];
	const char *m_pszName;
	char m_pad0270[0x206c - 0x270];
	Vector m_vecTarget;
	char m_pad2078[4];
	int m_n207c;
};

void CBasePlayer::sub_10167030(Vector vecOrigin, Vector vecTarget)
{
	CBasePlayerView *p = (CBasePlayerView *)this;
	*(unsigned int *)((char *)this + 0x20f0) |= 0x20;
	p->m_vec184 = g_1070d1b0;
	vfunc64(&vecTarget.x);
	p->m_vecTarget = vecTarget;
	p->m_n207c = 1;
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", p->m_pszName ? p->m_pszName : g_106b8540);
		CCollisionProperty *pCollision = (CCollisionProperty *)((char *)this + 0x270);
		pCollision->sub_100dc580(pCollision->m_usSolidFlags | 4);
	}
	p->m_nTakeDamage = 0;
	((CBaseEntity *)this)->vfunc93(0, 0);
	((CBaseEntity *)this)->vfunc10(0);
	sub_101cf5c0(this, &vecOrigin, 0);
}
// END FUNCTION

// FUNCTION: 0x101671a0 size=0x73
#include "CBaseCombatCharacter.h"

struct HandleEntry_t
{
	CBaseEntity *m_pEnt;
	unsigned int m_nSerial;
	int pad;
};
struct HandleTable_t
{
	int pad;
	HandleEntry_t m_Entries[1];
};
extern HandleTable_t *g_10566458;

bool CBaseCombatCharacter::sub_101671a0()
{
	if (sub_10146a80())
		return true;
	unsigned int h = *(unsigned int *)((char *)this + 0x1538);
	if (h != 0xffffffff) {
		HandleEntry_t *e = &g_10566458->m_Entries[h & 0x1fff];
		if (e->m_nSerial == (h >> 13) && e->m_pEnt != 0
			&& *(int *)((char *)this + 0x153c) != -1
			&& *(int *)((char *)this + 0x1540) == 3)
			return true;
	}
	if ((sub_100b3700() & 2) == 2) {
		bool bNull = sub_101672d0() == 0;
		return bNull;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10167240 size=0x63
#include "CBaseCombatCharacter.h"
char CBaseCombatCharacter::sub_10167240()
{
	if (sub_10146a80())
		return 1;
	if (m_hTarget1538.Get() && m_nTarget153c != -1 && m_nTargetMode1540 == 3)
		return 1;
	unsigned char b = sub_100b3700();
	return (b & 2) == 2;
}
// END FUNCTION

// FUNCTION: 0x101672d0 size=0x3a
#include "CUnknown101800e0.h"

int __stdcall sub_10003977(int a);
extern int *g_1070b228;
extern float g_104454c0;

struct CUnk101672d0
{
    bool sub_101672d0();
};

// TARGET: ?sub_101672d0@CUnk101672d0@@QAE_NXZ
bool CUnk101672d0::sub_101672d0()
{
    if (sub_10003977(1)) {
        float *pf = (float *)((char *)g_1070b228 + 0xc);
        if (((CUnknown101800e0 *)this)->sub_101800e0(1) + g_104454c0 > *pf) {
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10167320 size=0x34
#include "CBaseCombatCharacter.h"
struct Holder;
bool __fastcall sub_101681a0(Holder *p);

// TARGET: CBaseCombatCharacter::sub_10167320
bool CBaseCombatCharacter::sub_10167320()
{
	if (!sub_101681a0((Holder *)this) && sub_101671a0()) {
		char *pWeapon = (char *)sub_1032e7b0();
		if (pWeapon && pWeapon[0x872])
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x10167370 size=0x45
#include "CBaseEntity.h"
struct CTargetFinder { CBaseEntity *sub_101be1f0(void *pAsker); };
extern CTargetFinder g_1072c540;
struct CPlayerTargetView {
	char m_pad[0x1c58];
	unsigned int m_h1c58;
	char m_pad2[4];
	unsigned int m_h1c60;
	char sub_10167370();
	char sub_10328df0(CBaseEntity *pEnt, int mode);
};
char CPlayerTargetView::sub_10167370()
{
	CBaseEntity *pEnt = g_1072c540.sub_101be1f0(this);
	if (pEnt) {
		m_h1c58 = *pEnt->vfunc1();
		m_h1c60 = *pEnt->vfunc1();
		return sub_10328df0(pEnt, 3);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x101673e0 size=0xa
#include "ConVar.h"
ConVar g_10725ce8("player_use_arc", "30", 0);
// END FUNCTION

// FUNCTION: 0x10167470 size=0x30c
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CEHandleGet.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "ehandle.h"
#include "UTIL_Trace.h"
#include "CBaseCombatWeapon.h"
#include <math.h>

#include <math.h>
namespace block_10167470 {
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
struct Ray_tViewH { Vector m_Start; Vector m_Delta; Vector m_StartOffset; Vector m_Extents; bool m_IsRay; bool m_IsSwept; char m_b32; char m_b33; float m_f34; };
struct RayHull : Ray_t { void sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b); };
void RayHull::sub_1006dec0(const Vector &start, const float *pEnd, const float *pMins, const float *pMaxs, char a, char b)
{
	const Vector &end = *(const Vector *)pEnd;
	Ray_tViewH *r = (Ray_tViewH *)this;
	const Vector &mins = *(const Vector *)pMins;
	const Vector &maxs = *(const Vector *)pMaxs;
	VectorSubtract(end, start, r->m_Delta);
	r->m_IsSwept = (r->m_Delta.LengthSqr() != 0.0f);
	VectorSubtract(maxs, mins, r->m_Extents);
	r->m_Extents *= 0.5f;
	r->m_IsRay = (r->m_Extents.LengthSqr() < 1e-6);
	VectorAdd(mins, maxs, r->m_StartOffset);
	r->m_StartOffset *= 0.5f;
	VectorAdd(start, r->m_StartOffset, r->m_Start);
	r->m_StartOffset *= -1.0f;
	r->m_b32 = b;
	r->m_b33 = 0;
	r->m_f34 = 0.0f;
	if (a && !r->m_IsRay) {
		r->m_f34 = (float)sqrt((r->m_Extents.x * r->m_Extents.x) + (r->m_Extents.y * r->m_Extents.y));
		if (1e-6 < r->m_f34)
			r->m_b33 = 1;
	}
}
#pragma auto_inline(on)
}
using namespace block_10167470;
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
inline void TraceLineCallsR(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
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
inline void TraceLineRayCallR(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, void *pFilter, CGameTrace *ptr)
{
	Ray_t ray;
	((RayInit *)&ray)->sub_1004f7a0(&vecAbsStart.x, &vecAbsEnd.x);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)pFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0, 0, 1, -1.0f);
}

struct CConVarView10725cec { virtual void v0(); virtual bool vfunc1(); char pad[0x24]; float m_f28; };
extern CConVarView10725cec *g_10725cec;
extern float g_1044eb08;
void *sub_1023bd00();
void sub_10342590();
void sub_10342470();
struct CEntListView { int sub_100290c0(unsigned int *pHandle); };
struct CFinderView { CBaseEntity *sub_10341c30(void *cb, float a, float cs, char c, float d, int mask); };
#define V1(p) virtual void p();
#define V10(p) V1(p##0) V1(p##1) V1(p##2) V1(p##3) V1(p##4) V1(p##5) V1(p##6) V1(p##7) V1(p##8) V1(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CUseObj { V100(a) V100(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V1(l0) V1(l1) V1(l2) V1(l3) V1(l4) virtual char vfunc295(void *p); };
struct CEntView { char pad[0x98]; CUseObj *m_p98; int pad2; int m_a0; };

#define M_PI_F ((float)(3.14159265358979323846))
#define DEG2RAD(x) ((float)(x) * (float)(M_PI_F / 180.f))
// TARGET: CBasePlayer::sub_10167470
CBaseEntity *CBasePlayer::sub_10167470(char bFlag)
{
	CEntListView *pList = (CEntListView *)EHandleDetail::g_10566458;
	if (pList->sub_100290c0((unsigned int *)&m_hDialogPartnerFE8))
		return 0;
	if (m_nTarget153c != -1 && pList->sub_100290c0((unsigned int *)&m_hTarget1538))
		return 0;
	if (sub_101618a0())
		return 0;
	if (sub_1023bd00() && *(int *)((char *)sub_1023bd00() + 0x4ac))
		return 0;
	float flAngle;
	if (g_10725cec->vfunc1())
		flAngle = g_104454c4;
	else
		flAngle = g_10725cec->m_f28;
	CBaseEntity *pFound;
	float flCos = cos(DEG2RAD(flAngle * 0.5));
	if (bFlag)
		pFound = ((CFinderView *)this)->sub_10341c30((void *)sub_10342590, 80.0f, flCos, 0, 0, 0x600408b);
	else
		pFound = ((CFinderView *)this)->sub_10341c30((void *)sub_10342470, 80.0f, flCos, 0, 0, 0x600408b);
	if (pFound)
		return pFound;
	Vector vecBody = vfunc369();
	Vector vecEye = vfunc193();
	Vector vecEnd = vecEye + vecBody * 80.0f * 2.0f;
	CGameTrace tr;
	TraceLineCallsR(vecEye, vecEnd, 0x600408b, this, 0, &tr);
	CEntView *pEnt = (CEntView *)tr.m_pEnt;
	if (pEnt && !((CBaseEntity *)pEnt)->sub_100a52a0()) {
		if (pEnt->m_p98 && pEnt->m_p98->vfunc295(this))
			return (CBaseEntity *)pEnt;
		if (pEnt->m_a0 && vfunc382((CBaseCombatWeapon *)pEnt->m_a0))
			return (CBaseEntity *)pEnt;
	}
	TraceLineRayCallR(vecEye, vecEnd, 0x2004089, this, 0, &tr);
	pEnt = (CEntView *)tr.m_pEnt;
	if (pEnt && !((CBaseEntity *)pEnt)->sub_100a52a0() && pEnt->m_p98 && pEnt->m_p98->vfunc295(this))
		return (CBaseEntity *)pEnt;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10167850 size=0x403
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEHandleGet.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
#include "CVariantCopy.h"
#include "ScopeTrace.h"
extern CGlobalEntityList *g_10566458;
CBaseEntity *sub_104115b0(CBasePlayer *pPlayer, CBaseEntity *pNull);

struct CNpcSlot614View
{
	CBP_V100(a) CBP_V100(b) CBP_V100(c) CBP_V100(d) CBP_V100(e) CBP_V100(f)
	CBP_V10(g)
	CBP_V1(h0) CBP_V1(h1) CBP_V1(h2) CBP_V1(h3)
	virtual void vfunc614();
};

static inline CGlobalEntityList_Ent *ListGet(CGlobalEntityList *pList, const unsigned int &rh)
{
	if (rh == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &pList->m_Slots[rh & 0x1fff];
	if (pSlot->m_Serial == (int)(rh >> 13))
		return pSlot->m_pEntity;
	return 0;
}

// TARGET: CBasePlayer::vfunc460
void CBasePlayer::vfunc460()
{
	ScopeTrace trace("CBasePlayer::PlayerUse", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CGlobalEntityList *pList = g_10566458;
	if (pList->sub_100290c0((unsigned int *)&m_hInteractiveUseTarget)) {
		if (!((CBaseEntity *)pList->sub_100290c0((unsigned int *)&m_hInteractiveUseTarget))->vfunc32((int)this)) {
			sub_10167fd0();
			return;
		}
		pList = g_10566458;
	}
	if (!((m_nFlags2088 | m_n208C | m_afButtonReleased) & 0x20)) {
		if (ListGet(pList, m_hInteractiveUseTarget.m_Index))
			sub_10167e00();
		return;
	}
	if (ListGet(pList, m_hProteanTransformOther.m_Index))
		return;
	if (sub_10167370())
		return;
	CBaseEntity *pUseEntity = (CBaseEntity *)EHandle_Get(m_hInteractiveUseTarget.m_Index);
	if (!pUseEntity)
		pUseEntity = sub_104115b0(this, 0);
	if (!pUseEntity)
		pUseEntity = sub_10167470(0);
	if (!pUseEntity)
		pUseEntity = (CBaseEntity *)EHandle_Get(m_h1CB8);
	if (!pUseEntity)
		pUseEntity = (CBaseEntity *)EHandle_Get(m_h1CBC);
	if (!pUseEntity)
		return;
	pUseEntity = (CBaseEntity *)pUseEntity->vfunc38((int)this);
	if (pUseEntity) {
		CAI_BaseNPCTroika *pNpc = pUseEntity->m_pNPC98;
		int caps = pUseEntity->vfunc117();
		if (pNpc) {
			if (pNpc->vfunc295((CBaseCombatCharacter *)this)) {
				((CNpcSlot614View *)pNpc)->vfunc614();
				pNpc->m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\player.cpp";
				pNpc->m_nLine1b34 = 0x1508;
				pNpc->sub_102ae750(0x6a, 0);
				vfunc414(pUseEntity);
			}
			return;
		}
		if (pUseEntity->vfunc32((int)this)) {
			if (m_b208C & 0x20) {
				if (!EHandle_Get(m_hInteractiveUseTarget.m_Index)) {
					sub_10167d70(pUseEntity);
					return;
				}
				if (pUseEntity->vfunc44((int)this))
					sub_10167fd0();
			} else {
				if (EHandle_Get(m_hInteractiveUseTarget.m_Index))
					sub_10167e00();
			}
			return;
		}
		if (caps & 0x38) {
			CVariantCopy v;
			if (((m_nFlags2088 & 0x20) && (caps & 0x10)) || ((m_b208C & 0x20) && (caps & 0x28))) {
				if (caps & 0x10)
					m_afPhysicsFlags |= 0x10;
				v.SetBool(true);
				pUseEntity->vfunc118("Use", (CBaseEntity *)this, (CBaseEntity *)this, v, 0);
			} else if ((m_afButtonReleased & 0x20) && (pUseEntity->vfunc117() & 0x20)) {
				v.SetBool(false);
				pUseEntity->vfunc118("Use", (CBaseEntity *)this, (CBaseEntity *)this, v, 0);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10167d70 size=0x63
#include "CBaseEntity.h"
#include "CBasePlayer.h"

inline void SetH(unsigned int &h, CBaseEntity *p)
{
	if (p)
		h = *p->vfunc1();
	else
		h = 0xffffffff;
}

void CBasePlayer::sub_10167d70(CBaseEntity *pEnt)
{
	if (pEnt->vfunc32((int)this)) {
		SetH(*(unsigned int *)&m_hInteractiveUseTarget, pEnt);
		SetH(*(unsigned int *)((char *)pEnt + 0x8c), (CBaseEntity *)this);
		pEnt->vfunc39((CBaseEntity *)this);
	}
}
// END FUNCTION

// FUNCTION: 0x10167e00 size=0x167
#include "CNPC_VTzimisce.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CCollisionProperty.h"
#include <math.h>
#include <string.h>

#define PV_SLOTS \
	CBP_V100(a) CBP_V10(b0) CBP_V10(b1) CBP_V10(b2) CBP_V10(b3) CBP_V10(b4) CBP_V10(b5) CBP_V10(b6) CBP_V10(b7) CBP_V10(b8) \
	CBP_V1(c0) CBP_V1(c1) CBP_V1(c2)

struct CPlayerEyeView	// the player's virtual table up to slot 193
{
	PV_SLOTS
	virtual Vector vfunc193();
};

struct CUseEntView	// the used entity's virtual table up to slot 43
{
	CBP_V10(a0) CBP_V10(a1) CBP_V10(a2) CBP_V1(a30) CBP_V1(a31) CBP_V1(a32) CBP_V1(a33) CBP_V1(a34) CBP_V1(a35)
	virtual const char *vfunc36();
	virtual float vfunc37();
	CBP_V1(a38) CBP_V1(a39)
	virtual void vfunc40(CBasePlayer *pPlayer);
	virtual void vfunc41(CBasePlayer *pPlayer);
	CBP_V1(a42)
	virtual void vfunc43(CBasePlayer *pPlayer);
};

void sub_1013c8c0(const Vector &mins, const Vector &maxs, const Vector &point, Vector &out);

static inline int StrCmp(const char *a, const char *b)
{
	return _stricmp(a, b);
}

inline float ManhattanXY(const Vector &a, const Vector &b)
{
	float dx = a.x - b.x;
	float dy = a.y - b.y;
	return fabs(dx) + fabs(dy);
}

// TARGET: CBasePlayer::sub_10167e00
void CBasePlayer::sub_10167e00()
{
	CUseEntView *pUse = (CUseEntView *)EHandle_Get(*(unsigned int *)((char *)this + 0x1040));
	if (pUse) {
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pUse + 0x270);
		Vector vecClosest, vecMins, vecMaxs;
		pCol->sub_100dcd90(&pCol->m_vecMins.x, &pCol->m_vecMaxs.x, &vecMins.x, &vecMaxs.x);
		sub_1013c8c0(vecMins, vecMaxs, ((CPlayerEyeView *)this)->vfunc193(), vecClosest);
		CBaseEntity *pWeapon;
		if (ManhattanXY(((CPlayerEyeView *)this)->vfunc193(), vecClosest) < pUse->vfunc37()) {
			const char *pszName;
			if ((pszName = pUse->vfunc36()) != 0) {
				pWeapon = (CBaseEntity *)sub_1032e7b0();
				if (pWeapon && !StrCmp(pWeapon->sub_1009f200(), pUse->vfunc36())) {
					pUse->vfunc41(this);
				} else if (sub_10335950(pUse->vfunc36())) {
					vfunc457(pUse->vfunc36(), 0);
					pUse->vfunc40(this);
				}
			} else {
				pUse->vfunc41(this);
			}
		} else {
			pUse->vfunc43(this);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10167fd0 size=0x16a
#include "CNPC_VTzimisce.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CEHandleGet.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
#define PV_V(n) virtual void v##n();
#define PV_V10(p) PV_V(p##0) PV_V(p##1) PV_V(p##2) PV_V(p##3) PV_V(p##4) PV_V(p##5) PV_V(p##6) PV_V(p##7) PV_V(p##8) PV_V(p##9)
struct CUseEntX {
    PV_V10(0) PV_V10(1) PV_V10(2)
    PV_V(30) PV_V(31) PV_V(32) PV_V(33) PV_V(34) PV_V(35)
    virtual const char *vfunc36();
    PV_V(37) PV_V(38) PV_V(39) PV_V(40) PV_V(41)
    virtual void vfunc42(CBasePlayer *pPlayer);
    char m_pad0004[0x8c - 4];
    int m_n008c;
};
struct CPlayerUnit : CBasePlayer {
    CUseEntX *GetUse()
    {
        unsigned int h = *(unsigned int *)((char *)this + 0x1040);
        return (CUseEntX *)EHandle_Get(h);
    }
    void sub_10167fd0();
};

// TARGET: CPlayerUnit::sub_10167fd0
void CPlayerUnit::sub_10167fd0()
{
    CBaseCombatWeapon *pWeapon;
    if (EHandle_Get(*(unsigned int *)((char *)this + 0x1040))) {
        GetUse()->vfunc42(this);
        GetUse()->m_n008c = -1;
        pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
        if (pWeapon)
            pWeapon->vfunc307(0xb6);
        if (GetUse()->vfunc36() && pWeapon) {
            const char *s2 = GetUse()->vfunc36();
            const char *s1 = ((CBaseEntity *)pWeapon)->sub_1009f200();
            if (!_strcmpi(s1, s2))
                vfunc456();
        }
        *(unsigned int *)((char *)this + 0x1040) = 0xffffffff;
    }
}
// END FUNCTION

// FUNCTION: 0x101681a0 size=0x125
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

// The player fields this function reads (CBasePlayer.h still has them as padding).
struct Holder
{
    char m_pad0000[0xfe8];
    unsigned int m_hEnt0FE8;
    char m_pad0FEC[0x1040 - 0xfec];
    unsigned int m_hEnt1040;
    char m_pad1044[0x19c0 - 0x1044];
    unsigned int m_hEnt19C0;
    char m_pad19C4[0x19cc - 0x19c4];
    unsigned int m_hEnt19CC;
    char m_pad19D0[0x1eb8 - 0x19d0];
    int m_nUseEdictIndex;
};

struct PlayerState	// the object of the free function at 0x1000aa0b
{
    char m_pad0000[0x49c];
    int m_n049C;
    char m_pad04A0[0x4ac - 0x4a0];
    int m_n04AC;
};

bool __fastcall sub_10175180(Holder *p);
PlayerState *sub_1000aa0b();

bool __fastcall sub_101681a0(Holder *p)
{
    CGlobalEntityList_Slot *pSlot;
    unsigned int h;
    if (sub_10175180(p))
        return false;
    if (((CBasePlayer *)p)->sub_101618a0())
        return true;
    h = p->m_hEnt0FE8;
    if (h != 0xffffffff) {
        pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13) && pSlot->m_pEntity != 0)
            return true;
    }
    h = p->m_hEnt1040;
    if (h != 0xffffffff) {
        pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13) && pSlot->m_pEntity != 0)
            return true;
    }
    if (p->m_nUseEdictIndex)
        return true;
    h = p->m_hEnt19C0;
    if (h != 0xffffffff) {
        pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13) && pSlot->m_pEntity != 0)
            return true;
    }
    h = p->m_hEnt19CC;
    if (h != 0xffffffff) {
        pSlot = &g_10566458->m_Slots[h & 0x1fff];
        if (pSlot->m_Serial == (h >> 13) && pSlot->m_pEntity != 0)
            return true;
    }
    if (((CBasePlayer *)p)->sub_1000306c())
        return true;
    PlayerState *pState = sub_1000aa0b();
    if (pState && (pState->m_n049C == 2 || pState->m_n04AC != 0))
        return true;
    return false;
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
	if (EHandle_Get(*(unsigned int *)&m_hTarget1538) && m_nTarget153c != -1)
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
				m_b14a8 = 1;
				*(char *)&m_bCantBreakGrapple = bFlag;
				m_flBreakGrappleTimer = 0;
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
	if (EHandle_Get(m_hTarget1538.m_Index) && m_nTarget153c != -1)
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
			m_b14a8 = 1;
			m_bCantBreakGrapple = 1;
			m_flBreakGrappleTimer = g_10739d08.sub_101e8bb0() + gpGlobals->curtime;
			m_flGrappleDamageTimer = ((CUnknown101e8b50 *)&g_10739d08)->sub_101e8b50() + gpGlobals->curtime;
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

// FUNCTION: 0x10168e60 size=0x72
#define V10(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4(); virtual void a##5(); virtual void a##6(); virtual void a##7(); virtual void a##8(); virtual void a##9();
struct EntX {
    V10(a) V10(b) V10(c) V10(d) V10(e) V10(f) V10(g) V10(h) V10(i) V10(j) V10(k) V10(l) V10(m)
    virtual void n0(); virtual void n1(); virtual void n2(); virtual void n3(); virtual void n4(); virtual void n5(); virtual void n6(); virtual void n7();
    virtual int v138();
};
struct TraceEnt { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern TraceEnt *g_109f3620;
extern char g_10586828[];
extern char g_106b8540[];
bool sub_10168e60(void *unused, EntX *ent)
{
    g_109f3620[*g_109f3680].a = g_10586828;
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    if (ent->v138() == 13) {
        --*g_109f3680;
        return true;
    }
    --*g_109f3680;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10168f00 size=0xa
#include "ConVar.h"
ConVar g_10725a00("debug_ratfeed_drawcone", "0", 0);
// END FUNCTION

// FUNCTION: 0x10168f90 size=0xa
#include "ConVar.h"
ConVar g_10725040("rat_feed_arc", "90", 0);
// END FUNCTION

// FUNCTION: 0x10169020 size=0xa
#include "ConVar.h"
ConVar g_10725ae0("rat_feed_radius", "120", 0);
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
	CBaseCombatCharacter *target = (m_nTarget153c != -1) ? (CBaseCombatCharacter *)((EHANDLE &)m_hTarget1538.m_Index).Get() : 0;
	const EHandleEntInfo *volatile pInfo;
	if (m_hTarget1538.m_Index != 0xffffffff)
		pInfo = &EHandleDetail::g_10566458->m_EntPtrArray[m_hTarget1538.m_Index & 0x1fff];
	sub_10329a70();
	sub_101815b0(1);
	m_b1B6C = 0;
	sub_1017cef0(0);
	if (target) {
		((CEntityVSlots *)this)->slot306((int)target, 0);
		if (m_iBloodStolen > 0) {
			if (sub_10339cd0() && !target->sub_10339b50()) {
				if (g_10738d10.sub_101d5f10(target)->m_8c[6] && enginerandom->vfunc2(0, 100) < 0x32) {
					sub_101cebc0(this, 0x4a, 0);
					if (m_iBloodStolen > 0)
						vfunc449(0xc, 1);
				}
			} else if (target->sub_10339c10()) {
				sub_101cebc0(this, 0x11, 0);
				if (m_iBloodStolen > 0)
					vfunc449(0xc, 1);
			} else if (((CBP380View *)this)->sub_1033c9c0() & 0x10000) {
				if (((CEntityVSlots *)target)->slot138() == 0xd)
					sub_101cebc0(this, 0x35, 0);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10169840 size=0xa
#include "ConVar.h"
ConVar g_10725848("scarednpc_time", "180.0", 0);
// END FUNCTION

// FUNCTION: 0x101698d0 size=0xa
#include "ConVar.h"
ConVar g_10725160("scarednpc_count", "3", 0);
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
inline CBaseEntity *CBPView_10169960::GrappleTarget() { return m_nTarget153c != -1 ? HGET(&m_hTarget1538.m_Index) : 0; }
static inline bool Expired10169960(const CScareRec &r) { return g_10725848.GetFloat() + r.m_flTime < gpGlobals->curtime; }
void CBPView_10169960::sub_10169960()
{
	EngineGlobals::CGlobalVars *pGlobals = gpGlobals;
	if (m_bCantBreakGrapple || pGlobals->curtime - F1498() < 1.0) {
		if (HGET(&m_hTarget1538.m_Index) && m_nTarget153c != -1 && m_nTargetMode1540 == 8) {
			if (m_n208C & 0x400f9b) {
				m_flBreakGrappleTimer -= G39D08->sub_101e8bd0();
				pGlobals = gpGlobals;
			}
			if (pGlobals->curtime >= m_flBreakGrappleTimer) {
				m_b14a8 = 0;
				m_bCantBreakGrapple = 0;
				m_flBreakGrappleTimer = 0;
				sub_10175400(0);
				c353();
			} else if (pGlobals->curtime >= m_flGrappleDamageTimer) {
				m_flGrappleDamageTimer += (G39D08->sub_101e8b70());
				CBaseEntity *pB = GrappleTarget();
				CBaseEntity *pA = GrappleTarget();
				CUnknown101c26d0 info;
				info.sub_101c26d0(pA, pB, (float)G39D08->sub_101e8b90(), 0x10000000, 0, 0, -1);
				((CBaseEntity *)this)->sub_100a1250(&info);
			}
		}
	} else if (m_b14a8 && (m_n208C & 0x400f9b)) {
		m_b14a8 = 0;
		c353();
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

// FUNCTION: 0x1016a030 size=0x4ca
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "UTIL_Trace.h"
#include "QAngle.h"
#include <math.h>

void sub_10139550(const QAngle &angles, Vector *pForward);
void sub_10139500(const Vector *pStart, float flScale, const Vector *pDir, Vector *pOut);

struct RayBoxView
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_flRadius;

	__forceinline void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs)
	{
		VectorSubtract(end, start, m_Delta);
		m_IsSwept = (m_Delta.z * m_Delta.z + (m_Delta.x * m_Delta.x + m_Delta.y * m_Delta.y)) != 0.0f;
		VectorSubtract(maxs, mins, m_Extents);
		m_Extents *= 0.5f;
		m_IsRay = (m_Extents.x * m_Extents.x + (m_Extents.y * m_Extents.y + m_Extents.z * m_Extents.z) < 1e-6);
		m_b32 = 0;
		m_b33 = 0;
		m_flRadius = 0;
		m_StartOffset.x = mins[0] + maxs.x; m_StartOffset.y = mins.y + maxs.y; m_StartOffset.z = mins.z + maxs.z;
		m_StartOffset *= 0.5f;
		VectorAdd(start, m_StartOffset, m_Start);
		m_StartOffset *= -1.0f;
		if (!m_IsRay)
		{
			float fl = (float)sqrt(m_Extents.x * m_Extents.x + m_Extents.y * m_Extents.y);
			m_flRadius = fl;
			if (m_flRadius > 1e-6)
				m_b33 = 1;
		}
	}
};

__forceinline void TraceHullInlineRay(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr)
{
	RayBoxView ray;
	ray.Init(vecAbsStart, vecAbsEnd, hullMin, hullMax);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4((Ray_t *)&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

CBaseEntity *CBasePlayer::sub_1016a030(unsigned int mask, int unused)
{
	Vector dir;
	sub_10139550(*(QAngle *)vfunc221(), &dir);
	dir.z = 0;
	VectorNormalize(dir);
	Vector start = *(Vector *)vfunc220();
	start.z += 18.0f;
	Vector delta;
	float s = vfunc466(); delta.x = dir.x * s; delta.y = dir.y * s; delta.z = dir.z * s;
	Vector end;
	VectorAdd(start, delta, end);
	CGameTrace tr;
	{
		int group = m_field368;
		const Vector *mins = (const Vector *)Sub270().vfunc1();
		const Vector *maxs = (const Vector *)Sub270().vfunc2();
		UTIL_TraceHull_DebugCall(start, end, *mins, *maxs, mask, this, group, &tr, 1, 0);
	}
	if (tr.m_fraction != 1.0f)
	{
		Vector &normal = *(Vector *)tr.m_planeNormal;
		if (!(normal.Dot(dir) > -0.5f))
		{
			sub_10139500((Vector *)vfunc220(), tr.m_fraction, &delta, &start);
			sub_10139500(&start, (normal.Dot(start) - tr.m_planeDist) * -2.0f, &normal, &start);
			end = start;
			end.z += vfunc465();
			{
				int group = m_field368;
				const Vector *mins = (const Vector *)Sub270().vfunc1();
				const Vector *maxs = (const Vector *)Sub270().vfunc2();
				TraceHullInlineRay(start, end, *mins, *maxs, mask, this, group, &tr);
			}
			{
				float flMax = vfunc465() * tr.m_fractionleftsolid;
				if (tr.m_fractionleftsolid != 1.0f && !(vfunc464() > flMax))
				{
					CBaseEntity *pEnt = tr.m_pEnt;
					return vfunc166(pEnt) ? 0 : pEnt;
				}
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1016a640 size=0x1
// TARGET: sub_1016a640
void __fastcall sub_1016a640(void *pThis)
{
}
// END FUNCTION

// FUNCTION: 0x1016a660 size=0x191
#include "CEntityVSlots.h"
#include "TempVector.h"

struct CEntitySizeView : CEntityVSlots {
	char m_pad0004[0x274 - 4];
	Vector m_vecA274;	// 0x274
	Vector m_vecB280;	// 0x280
};

bool sub_1016a660(CEntitySizeView *pEntity, float flMaxWeight, float flMaxExtent)
{
	if (!pEntity)
		return false;
	if (pEntity->slot94() != 7)
		return false;
	CEntityVSlots *pList[32];
	int nCount = pEntity->slot233(pList, 32);
	if (!nCount)
		return false;
	float flTotal = 0;
	for (int i = 0; i < nCount; i++) {
		flTotal = pList[i]->slot12() + flTotal;
		pList[i]->slot52();
	}
	if (flMaxWeight > 0 && flTotal > flMaxWeight)
		return false;
	if (flMaxExtent > 0) {
		Vector &v = AllocTempVector();
		VectorSubtract(pEntity->m_vecB280, pEntity->m_vecA274, v);
		if (v.x > flMaxExtent || v.y > flMaxExtent || v.z > flMaxExtent)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x1016a870 size=0xf1
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "TestBit.h"


void CBasePlayer::vfunc434()
{
    if (!(sub_100b3700() & 4) && MoveType3e0() < 2 && (m_b208C & 2)) {
        if (sub_100b3700() & 1) {
            if (vfunc209()) {
                vfunc449(2, 0);
                m_f148C = gpGlobals->curtime;
                CBaseEntity *pEnt = vfunc209();
                if (pEnt) {
                    if (pEnt->sub_100b3700() & 0x1000) {
                        if (TestBit(m_flags268, 12))
                            sub_100b1d10();
                        Vector vecVelocity = m_vecVelocity3bc + m_vecBaseVelocity;
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
	if ((m_nFlags2088 & 4) && m_Activity != 0x2c)
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
	int edict = m_pEdict2e0;
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
		m_nSimulationTick = -1;
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

// FUNCTION: 0x1016af30 size=0x32
// TARGET: sub_1016af30
struct CSumElem_1016af30 {
    char pad[0xc];
    int value;
    char pad2[0x60 - 0x10];
};

float __cdecl sub_1016af30(int n, CSumElem_1016af30 *p)
{
    int sum = 0;
    while (n > 0) {
        sum += p->value;
        p++;
        n--;
    }
    return sum * 0.001f;
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

// FUNCTION: 0x1016b090 size=0x37
// TARGET: CBasePlayer::sub_1016b090
#include "CBasePlayer.h"

void CBasePlayer::sub_1016b090(unsigned int buttons)
{
    char *p = (char *)this;
    *(unsigned int *)(p + 0x2094) = *(unsigned int *)(p + 0x2088);
    *(unsigned int *)(p + 0x2088) = buttons;
    unsigned int changed = *(unsigned int *)(p + 0x2094) ^ buttons;
    *(unsigned int *)(p + 0x208c) = changed & buttons;
    *(unsigned int *)(p + 0x2090) = ~buttons & changed;
}
// END FUNCTION

// FUNCTION: 0x1016b0e0 size=0x37
// TARGET: CBasePlayer::sub_1016b0e0
#include "CBasePlayer.h"

void CBasePlayer::sub_1016b0e0(unsigned int buttons)
{
    char *p = (char *)this;
    *(unsigned int *)(p + 0x20a4) = *(unsigned int *)(p + 0x2098);
    *(unsigned int *)(p + 0x2098) = buttons;
    unsigned int changed = *(unsigned int *)(p + 0x20a4) ^ buttons;
    *(unsigned int *)(p + 0x209c) = changed & buttons;
    *(unsigned int *)(p + 0x20a0) = ~buttons & changed;
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

// FUNCTION: 0x1016b270 size=0x170
#include "CBasePlayer.h"
extern "C" int abs(int);
#pragma intrinsic(abs)
#define TBD_MIN(a, b) (((a) < (b)) ? (a) : (b))

void CBasePlayer::sub_1016b270()
{
	int i;
	unsigned char bDuration = 0;

	if (!(m_bitsDamageType & 0xffffc000))
		return;

	if (abs((int)(gpGlobals->curtime - m_tbdPrev)) < 2.0)
		return;

	m_tbdPrev = gpGlobals->curtime;

	for (i = 0; i < 8; i++)
	{
		if (m_bitsDamageType & (0x8000 << i))
		{
			switch (i)
			{
			case 0:
				bDuration = 2;
				break;
			case 1:
				bDuration = 2;
				break;
			case 4:
				if (m_n2284 > m_n2288)
				{
					int idif = TBD_MIN(m_n2284 - m_n2288, 10);
					vfunc143((float)idif, 0);
					m_n2288 += idif;
				}
				bDuration = 4;
				break;
			case 2:
				if (m_nPoisonDmg > m_nPoisonRestored)
				{
					int nDif = TBD_MIN(m_nPoisonDmg - m_nPoisonRestored, 10);
					vfunc143((float)nDif, 0);
					m_nPoisonRestored += nDif;
				}
				bDuration = 9;
				break;
			case 3:
				bDuration = 2;
				break;
			case 5:
				bDuration = 2;
				break;
			case 6:
				bDuration = 2;
				break;
			case 7:
				bDuration = 2;
				break;
			default:
				bDuration = 0;
			}

			if (m_rgbTimeBasedDamage[i])
			{
				if (!m_rgbTimeBasedDamage[i] || --m_rgbTimeBasedDamage[i] == 0)
				{
					m_rgbTimeBasedDamage[i] = 0;
					m_bitsDamageType &= ~(0x8000 << i);
				}
			}
			else
				m_rgbTimeBasedDamage[i] = bDuration;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1016b440 size=0xb
struct IUnk1070ba0c {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21();
};
extern IUnk1070ba0c *g_1070ba0c;

void sub_1016b440()
{
	g_1070ba0c->v21();
}
// END FUNCTION

// FUNCTION: 0x1016b460 size=0xe
#include "CUnknown1016b460.h"
struct CUnk1070ba0c
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21();
};
extern CUnk1070ba0c *g_1070ba0c;
// TARGET: CUnknown1016b460::sub_1016b460
void CUnknown1016b460::sub_1016b460(int a, int b, int c)
{
	g_1070ba0c->v21();
}
// END FUNCTION

// FUNCTION: 0x1016b480 size=0x231
#include "vampire_all.h"
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CSoundEnt.h"
#include "CEntityVSlots.h"
#include "Vector.h"
#include "Tier1.h"

extern int g_1072bc20, g_1072bc24, g_1072bc28, g_1072bc2c, g_1072bc30, g_1072bc34;
extern unsigned char g_1072bca8, g_1072bca9, g_1072bcaa, g_1072bcab, g_1072bcac, g_1072bcad;
extern float g_1072bd1c;
extern CSoundEnt *g_1072c464;
extern float g_107260a8;

int sub_101bb220(int edict);

struct CSoundV
{
	unsigned int m_hOwner;
	int m_iType;
	int m_iVolume;
	float m_flExpireTime;
	int m_n10;
	unsigned char m_bType14;
	char m_pad15[0x20 - 0x15];
	Vector m_vecOrigin;
	int Volume() { return m_iVolume; }
	void sub_101b9a50(int a);
};

static inline bool TestBit(unsigned int value, int bit)
{
	return ((value >> bit) & 1) != 0;
}

struct CBasePlayerV : public CBasePlayer
{
	void sub_1016b480();
	int edict() { return m_pEdict2e0; }
	int GetFlags() { return ((CBaseEntity *)(void *)this)->sub_100b3700(); }
	
	const Vector &GetAbsVelocity()
	{
		if (TestBit(m_flags268, 12))
			sub_100b1d10();
		return m_vecVelocity3bc;
	}
};

// TARGET: CBasePlayerV::sub_1016b480
void CBasePlayerV::sub_1016b480()
{
	int iBodyVolume;
	int iVolume;
	CSoundV *pSound;

	pSound = (CSoundV *)CSoundEnt::sub_101bb150(sub_101bb220(edict()));
	if (!pSound)
	{
		g_109f3628("Client lost reserved sound!\n");
		return;
	}

	if (GetFlags() & 0x8000)
	{
		pSound->m_iVolume = 0;
		return;
	}

	iBodyVolume = 0;
	if (m_nFlags2088 & 2)
	{
		iBodyVolume = g_1072bc2c;
		pSound->m_bType14 = g_1072bcab;
	}
	else if (GetFlags() & 1)
	{
		if (m_nSpeedScaleState1DB4 == 8)
		{
			iBodyVolume = g_1072bc30;
			pSound->m_bType14 = g_1072bcac;
		}
		else if (m_nSpeedScaleState1DB4 == 0xa || m_nSpeedScaleState1DB4 == 0xb)
		{
			iBodyVolume = g_1072bc34;
			pSound->m_bType14 = g_1072bcad;
		}
		else
		{
			float speed = GetAbsVelocity().Length();
			if (speed > 0.0f)
			{
				if (GetFlags() & 2)
				{
					iBodyVolume = g_1072bc20;
					pSound->m_bType14 = g_1072bca8;
				}
				else if (g_1072bd1c >= speed)
				{
					iBodyVolume = g_1072bc24;
					pSound->m_bType14 = g_1072bca9;
				}
				else
				{
					iBodyVolume = g_1072bc28;
					pSound->m_bType14 = g_1072bcaa;
				}
			}
		}
	}

	m_iTargetVolume = iBodyVolume;

	iVolume = pSound->Volume();

	if (m_iTargetVolume > iVolume)
	{
		iVolume = m_iTargetVolume;
	}
	else if (iVolume > m_iTargetVolume)
	{
		iVolume -= 250 * gpGlobals->frametime;

		if (iVolume < m_iTargetVolume)
		{
			iVolume = m_iTargetVolume;
		}
	}

	if (m_bSilent22a0)
	{
		iVolume = 0;
	}

	pSound->m_hOwner = *((CEntityVSlots *)(void *)this)->slot1();
	pSound->m_vecOrigin = *((CEntityVSlots *)(void *)this)->slot220();
	pSound->m_iType = 4;
	pSound->m_iVolume = iVolume;
	pSound->m_flExpireTime = gpGlobals->curtime;

	if ((*(unsigned char *)((char *)g_1072c464 + 0x460) & 3)
		&& gpGlobals->curtime >= g_107260a8)
	{
		g_107260a8 = gpGlobals->curtime + 0.5f;
		pSound->sub_101b9a50(100);
	}

	int &smoothed = *(int *)((char *)this + 0x1c9c);
	smoothed = (iVolume + smoothed * 3) >> 2;
}
// END FUNCTION

// FUNCTION: 0x1016b750 size=0x1bd
#include "UTIL_Trace.h"
#include <math.h>

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)

struct UnstickView
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5)
	PV(60) PV(61)
	virtual void v62(const Vector &org);
	PV(63) PV(64) PV(65) PV(66) PV(67) PV(68) PV(69)
	PV10(7) PV10(8) PV10(9) PV10(10) PV10(11) PV10(12) PV10(13) PV10(14) PV10(15) PV10(16) PV10(17) PV10(18) PV10(19)
	PV10(20) PV10(21)
	virtual const Vector &v220();
};

inline float HullSqrt(float f)
{
	return (float)sqrt(f);
}

struct CHullRay
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_f34;

	__forceinline void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, bool a = true, char b = 0)
	{
		VectorSubtract(end, start, m_Delta);
		m_IsSwept = (m_Delta.LengthSqr() != 0.0f);
		VectorSubtract(maxs, mins, m_Extents);
		m_Extents *= 0.5f;
		m_IsRay = ((m_Extents.x * m_Extents.x + (m_Extents.y * m_Extents.y + m_Extents.z * m_Extents.z)) < 1e-6);
		VectorAdd(mins, maxs, m_StartOffset);
		m_StartOffset *= 0.5f;
		VectorAdd(start, m_StartOffset, m_Start);
		m_StartOffset *= -1.0f;
		m_b32 = b;
		m_b33 = 0;
		m_f34 = 0.0f;
		if (a && !m_IsRay) {
			float fl = HullSqrt(m_Extents.x * m_Extents.x + m_Extents.y * m_Extents.y);
			m_f34 = fl;
			if (m_f34 > 1e-6)
				m_b33 = 1;
		}
	}
};

inline void UTIL_TraceHullR(const Vector &vecAbsStart, const Vector &vecAbsEnd, const Vector &hullMin,
	const Vector &hullMax, unsigned int mask, const void *ignore, int collisionGroup, CGameTrace *ptr)
{
	CHullRay ray;
	ray.Init(vecAbsStart, vecAbsEnd, hullMin, hullMax);
	CTraceFilterSimple traceFilter((void *)ignore, collisionGroup);
	g_1070b254->vfunc4((Ray_t *)&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10146570((const Vector *)&ptr->m_startpos, (const Vector *)&ptr->m_endpos, 0xff, 0xff, 0, 1, -1.0f);
}

void sub_1016b750(UnstickView *pPlayer)
{
	for (int i = 0; i < 18; i++)
	{
		CGameTrace tr;
		UTIL_TraceHullR(pPlayer->v220(), pPlayer->v220(), Vector(-16, -16, 0), Vector(16, 16, 36), 0x201400b, pPlayer, 0, &tr);
		if (!tr.m_startsolid)
			break;
		Vector org = pPlayer->v220();
		org.z += 1.0f;
		pPlayer->v62(org);
	}
}
// END FUNCTION

// FUNCTION: 0x1016b980 size=0x39
struct CBasePlayer1016b980
{
	char m_pad0000[0x36c];
	int m_pObj;
	char sub_1016b980(void *pObj);
};

struct CPhysObj12
{
	virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
	virtual void s4(); virtual void s5(); virtual void s6(); virtual void s7();
	virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual float slot12();
};

// TARGET: CBasePlayer1016b980::sub_1016b980
char CBasePlayer1016b980::sub_1016b980(void *pObj)
{
	if (pObj)
	{
		CPhysObj12 *pOther = (CPhysObj12 *)pObj;
		CPhysObj12 *pSelf = (CPhysObj12 *)m_pObj;
		float a = pOther->slot12();
		float b = pSelf->slot12();
		return a > (b + b);
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1016b9d0 size=0x3e
// TARGET: sub_1016b9d0
int *__fastcall sub_1016b9d0(int *self)
{
    int *pFirst = ((int *(__fastcall *)(void *))((*(int **)self)[0x344 / 4]))(self);
    if (pFirst != 0) {
        int nClass = ((int (__fastcall *)(void *))((*(int **)pFirst)[0x178 / 4]))(pFirst);
        if (nClass == 7) {
            int *pSecond = (int *)pFirst[0x36c / 4];
            if (pSecond != 0) {
                char bOk = ((char (__fastcall *)(void *))((*(int **)pSecond)[0xd0 / 4]))(pSecond);
                if (bOk != 0) {
                    return pSecond;
                }
            }
        }
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1016ba20 size=0x28
struct CUnknown1016ba20 {
	char m_pad0000[0x2348];
	int m_n2348;
	int m_n234c;
	int m_n2350;
	char m_b2354;
	void sub_1016ba20(const int *pSrc);
};

// TARGET: CUnknown1016ba20::sub_1016ba20
void CUnknown1016ba20::sub_1016ba20(const int *pSrc)
{
	m_b2354 = 1;
	m_n2348 = pSrc[0];
	m_n234c = pSrc[1];
	m_n2350 = pSrc[2];
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

// FUNCTION: 0x1016bb50 size=0x18f
#include "CBasePlayer.h"
#include "CEHandleGet.h"

extern float g_104454c4;

struct CBasePlayerUnit : CBasePlayer
{
	int sub_1016bb50();
	char sub_101664d0();
	char sub_1033b7c0();
	char sub_10160ec0();
	int sub_100b3700();
};

#define FLD(type, off) (*(type *)((char *)this + (off)))

int CBasePlayerUnit::sub_1016bb50()
{
	if (FLD(char, 0x1cb0) && FLD(int, 0x1cb4) != 0xc)
		FLD(char, 0x1cb0) = 0;
	if (sub_101664d0())
		return 0xb;
	if (FLD(int, 0x1db4) > 0 && FLD(int, 0x3e0) == 0)
		return 2;
	if (FLD(char, 0x1cb0))
		return FLD(int, 0x1cb4);
	if ((FLD(char, 0x14aa) && FLD(char, 0x14a8)) || sub_1033b7c0())
		return 7;
	if (EHandle_Get(FLD(unsigned int, 0x1040)))
		return 10;
	if (FLD(int, 0x3e0) > 1)
	{
		if (FLD(int, 0x3e0) >= 3 || !(sub_100b3700() & 1))
			return 9;
	}
	if (sub_10160ec0())
		return 0xd;
	if (FLD(float, 0x3d4) == g_104454c4 && FLD(float, 0x3d8) == g_104454c4)
		return 0;
	if (FLD(float, 0x3d4) != g_104454c4 || FLD(float, 0x3d8) != g_104454c4)
	{
		if (sub_100b3700() & 1)
			return 1;
	}
	if (EHandle_Get(FLD(unsigned int, 0x1538)) && FLD(int, 0x153c) == 0)
		return 8;
	return -1;
}
// END FUNCTION

// FUNCTION: 0x1016bd50 size=0x89
#include "CBasePlayer.h"
#include "CBaseAnimating.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);


extern char *(__cdecl *g_109f386c)(const char *pStr, const char *pSub);

void CBasePlayer::sub_1016bd50()
{
	sub_101618e0(1, 1);
	*(int *)((char *)this + 0x1ebc) = -1;
	*(int *)((char *)this + 0x168) = 0;
	*(int *)((char *)this + 0x16c) = 0;
	*(char *)((char *)this + 0x1edc) = 0;
	*(float *)((char *)this + 0x1c68) = gpGlobals->curtime;
	char *pszModelName = (char *)this + 0x23d4;
	char *pFound = g_109f386c(pszModelName, (char *)((CBaseAnimating *)this)->sub_100952d0(-1) + 0xc);
	if (pFound) {
		if (_strcmpi((char *)((CBaseAnimating *)this)->sub_100952d0(-1) + 0xc, pFound) == 0)
			return;
	}
	typedef void (CBasePlayer::*Fn)(char *);
	union { void *p; Fn f; } u;
	u.p = (*(void ***)this)[105];
	(this->*u.f)(pszModelName);
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
	int m_field146c;
	char m_pad1470[0x4];
	char m_flag1474;
	char m_pad1475[0x1];
	char m_bIsFrenzyGrapple;
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
			if (pOther->vfunc138() == 3 && V->m_field146c > 0 && V->m_flag1474 && V->vfunc424(1))
			{
				V->m_bIsFrenzyGrapple = 1;
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

// FUNCTION: 0x1016c9d0 size=0x29e
#include "CBaseEntity.h"
#include "CBasePlayer.h"

struct CPhysObjSlots
{
	virtual void v0();
	virtual bool vfunc1();
};

struct CPartOwnerSlots
{
	virtual void v0();
	virtual void vfunc1(Vector *pVec, const Vector *pVec2, int a, char flag, void *pPhys);
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5(void *pPart);
	virtual void v6();
	virtual void vfunc7(float flArg);
};

struct CPlayerViewEffects
{
	char pad0[0x7c];
	float m_fl7c;
	Vector m_vec80;
};

extern CPlayerViewEffects *g_10628368;

void CBasePlayer::sub_1016c9d0()
{
	if (m_pPartOwner == 0)
		return;

	Vector vecOrigin = *(Vector *)vfunc220();

	float frametime = gpGlobals->frametime;
	if (frametime <= 0.0f || frametime > 0.1f)
		frametime = 0.1f;

	CBaseEntity *pGround = vfunc209();
	void *pPhys = 0;
	if (pGround && pGround->vfunc94() == 7)
	{
		pPhys = (void *)pGround->m_obj36c;
		if (pPhys)
		{
			if (!((CPhysObjSlots *)pPhys)->vfunc1())
				goto LAB_1016cb69;
			pPhys = 0;
		}
	}

	if (*(char *)((char *)this + 0x2128) && g_10628368->m_fl7c <= 0.0f)
	{
		vecOrigin = m_oldOrigin + g_10628368->m_vec80 * frametime;
		Vector vecHalf = vecOrigin * 0.5f;
		vecOrigin = *(Vector *)vfunc220() * 0.5f + vecHalf;
	}

LAB_1016cb69:
	int mode = 0;
	if (vfunc94() == 9)
		mode = 2;
	else if (sub_100b3700() & 2)
		mode = 1;
	if (mode != m_nPartMode)
		sub_1017bf10(mode);

	if (!*(char *)((char *)this + 0x2128) && pPhys == 0)
		g_10628368->m_vec80 = Vector(m_flMaxspeed, m_flMaxspeed, m_flMaxspeed);

	char flag = sub_100b3700() & 1;
	if (g_10628368->m_fl7c > 0.1)
		((CPartOwnerSlots *)m_pPartOwner)->vfunc7(g_10628368->m_fl7c);
	g_10628368->m_fl7c = 0.0f;

	((CPartOwnerSlots *)m_pPartOwner)->vfunc1(&vecOrigin, &g_10628368->m_vec80, 0, flag, pPhys);

	m_oldOrigin = *(Vector *)vfunc220();
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

// FUNCTION: 0x1016cf30 size=0x19f
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CBasePlayer.h"
#include "CUnknown10182dd0.h"
#include "CVStatList_t.h"
#include "CVStatInfoList_t.h"
#include <string.h>

extern int g_10583630[10];
extern int g_107260b0[10];
extern CVStatInfoList_t g_1074e098;
void __cdecl sub_1023f040(unsigned int *p);
void __cdecl sub_1023f060(unsigned int *p);
void __cdecl sub_1023f0c0(unsigned int *pCrc, const void *pData, unsigned int len);

static inline bool HasBit(unsigned int flags, int bit) { return ((flags >> bit) & 1) != 0; }

// TARGET: CBasePlayer::sub_1016cf30
void CBasePlayer::sub_1016cf30()
{
	for (int i = 0; i < 10; i++) {
		m_aSlotType2018[i] = g_10583630[i];
		m_aSlotValue2040[i] = g_107260b0[i];
	}
	unsigned int crc;
	sub_1023f040(&crc);
	sub_1023f0c0(&crc, "item_w_fists", strlen("item_w_fists"));
	sub_1023f060(&crc);
	m_aSlotValue2040[0] = crc;
	sub_1023f040(&crc);
	sub_1023f0c0(&crc, "item_w_thirtyeight", strlen("item_w_thirtyeight"));
	sub_1023f060(&crc);
	m_aSlotValue2040[1] = crc;
	int n = 0;
	int *p = &m_aSlotValue2040[2];
	for (; n < 3; n++) {
		int idx = ((CUnknown10182dd0 *)this)->sub_10182dd0(n, 0);
		if (idx != -1) {
			int a, b;
			if (HasBit(g_1074e098.sub_10200370(idx)->m_flags, 1)) {
				a = -1;
				b = -1;
			} else {
				a = 0;
				b = CVStatListSet::Of(this)->Find(2)->sub_10010609(idx) > 1;
			}
			*p++ = ((a + 1) << 16) | idx;
			*p++ = ((b + 1) << 16) | idx;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1016d140 size=0xa
#include "ConVar.h"
ConVar g_10725bc8("default_clan", "player_brujah", 128);
// END FUNCTION

// FUNCTION: 0x1016d1d0 size=0xa
#include "ConVar.h"
ConVar g_10725d98("default_gender", "1", 128);
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
void CBasePlayer::vfunc130(int nFlag)
{
#define bFlag ((char)nFlag)
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
	sub_10299d50(nFlag);
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
#undef bFlag
}
// END FUNCTION

// FUNCTION: 0x1016e0c0 size=0x355
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CCollisionProperty.h"
#include "CUnknown100a8220.h"
#include "CUnknown101cccf0.h"

extern float g_1070d1b0[];
void sub_101cf600(CBaseEntity *pEnt);

struct CUnknown10273070 { void sub_10273070(int a); };
struct CSphere1016e0c0 : CUnknown101cccf0 { void NextEntity() { m_nIndex++; } };

struct CColl1016e0c0 : CCollisionProperty
{
	int GetSolidFlags() const { return m_usSolidFlags; }
	void SetSolidFlags(int flags) { sub_100dc580(flags); }
	void AddSolidFlags(int flags) { SetSolidFlags(GetSolidFlags() | flags); }
	void SetSolid(int solid) { sub_100dc480(solid); }
};

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

__forceinline void TracePush(const char *func, const char *name, const char *line)
{
	g_109f3620[*g_109f3680].name = func;
	g_109f3620[*g_109f3680].file = name;
	g_109f3620[*g_109f3680].line = line;
	(*g_109f3680)++;
}
__forceinline void TracePop() { (*g_109f3680)--; }

struct CEntSolid1016e0c0 : CBaseEntity
{
	void SetSolidFlagsI(int flags)
	{
		TracePush("CBaseEntity::SetSolidFlags", GetDebugName(), g_106b8540);
		CollisionProp()->SetSolidFlags(flags);
		TracePop();
	}
	void AddSolidFlagsI(int flags)
	{
		TracePush("CBaseEntity::AddSolidFlags", GetDebugName(), g_106b8540);
		CollisionProp()->AddSolidFlags(flags);
		TracePop();
	}
	CColl1016e0c0 *CollisionProp() { return (CColl1016e0c0 *)((char *)this + 0x270); }
	const char *GetDebugName() { return STRINGR(m_name26c); }
	void SetSolidFlags(int flags)
	{
		ScopeTrace t("CBaseEntity::SetSolidFlags", GetDebugName(), g_106b8540);
		CollisionProp()->SetSolidFlags(flags);
	}
	void AddSolidFlags(int flags)
	{
		ScopeTrace t("CBaseEntity::AddSolidFlags", GetDebugName(), g_106b8540);
		CollisionProp()->AddSolidFlags(flags);
	}
	void SetSolid(int solid)
	{
		ScopeTrace t("CBaseEntity::SetSolid", GetDebugName(), g_106b8540);
		CollisionProp()->SetSolid(solid);
	}
};

// TARGET: sub_1016e0c0
void sub_1016e0c0()
{
	CSphere1016e0c0 sphere;
	CBaseEntity *pEnt;
	for (sphere.sub_101cccf0((int)g_1070d1b0, 0x45800000, 0, 0); (pEnt = sphere.sub_101ccd40()) != 0; sphere.NextEntity()) {
		if (!pEnt->m_pEdict2e0 || ((CUnknown100a8220 *)pEnt)->sub_100a8220())
			continue;
		CEntSolid1016e0c0 *pA = *(CEntSolid1016e0c0 **)((char *)pEnt + 0xa8);
		CEntSolid1016e0c0 *pB = *(CEntSolid1016e0c0 **)((char *)pEnt + 0x98);
		if (pA) {
			pA->SetSolidFlagsI(0);
			pA->AddSolidFlagsI(1);
			pA->AddSolidFlags(0x10);
			pA->SetSolid(2);
			pA->sub_100aaa40(3);
			pA->vfunc93(3, 0);
			if (pA->sub_100b3700() & 2) {
				Vector maxs(16.0f, 16.0f, 36.0f);
				Vector mins(-16.0f, -16.0f, 0.0f);
				pA->sub_100adf10(&mins.x, &maxs.x);
			} else {
				Vector maxs(16.0f, 16.0f, 72.0f);
				Vector mins(-16.0f, -16.0f, 0.0f);
				pA->sub_100adf10(&mins.x, &maxs.x);
			}
			sub_101cf600(pA);
		}
		if (!pB)
			continue;
		if (0) pB->SetSolidFlags(0);	// WORKAROUND (inline budget, lever 51): three dead wrapper sites spend the budget so pB's ScopeTrace ctors stay calls
		if (0) pB->SetSolidFlags(0);
		if (0) pB->SetSolidFlags(0);
		pB->SetSolidFlags(0);
		pB->AddSolidFlags(1);
		pB->AddSolidFlags(0x10);
		pB->sub_1016e500(2);
		pB->sub_100aaa40(7);
		pB->vfunc93(4, 0);
		((CUnknown10273070 *)pB)->sub_10273070(0);
		sub_101cf600(pB);
	}
}
// END FUNCTION

// FUNCTION: 0x1016e500 size=0x84
#include "CCollisionProperty.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

void CBaseEntity::sub_1016e500(int solid)
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseEntity::SetSolid";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(solid);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x1016e5c0 size=0xa
#include "ConCommand.h"
void sub_1016e0c0(void);
ConCommand g_10725a44("reset_character_collide", sub_1016e0c0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x1016e650 size=0x16d
extern int g_10726030;
extern int g_10726048;
extern int g_1072604c;
extern int g_10726014;
extern int g_10726018;
extern int g_1072601c;
extern int g_10726034;
extern int g_10726038;
extern int g_1072603c;
extern int g_10726040;
extern int g_10726050;
extern int g_1072600c;
extern int g_10726010;
extern int g_1072609c;

// TARGET: sub_1016e650
void sub_1016e650()
{
    g_10726030 = engine->vfunc82("HudText", -1);
    g_10726048 = engine->vfunc82("SayText", -1);
    g_1072604c = engine->vfunc82("TextMsg", -1);
    g_10726014 = engine->vfunc82("ResetHUD", 1);
    g_10726018 = engine->vfunc82("InitHUD", 0);
    g_1072601c = engine->vfunc82("GameTitle", 1);
    g_10726034 = engine->vfunc82("DeathMsg", -1);
    g_10726038 = engine->vfunc82("GameMode", 1);
    g_1072603c = engine->vfunc82("MOTD", -1);
    g_10726040 = engine->vfunc82("ItemPickup", -1);
    g_10726050 = engine->vfunc82("ShowMenu", -1);
    g_1072600c = engine->vfunc82("ScreenShake", -1);
    g_10726010 = engine->vfunc82("ScreenFade", 10);
    g_1072609c = engine->vfunc82("TeamChange", 1);
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
	m_flNextAttack1564 = (m_flNextAttack1564) - gpGlobals->curtime;
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

// FUNCTION: 0x1016ebb0 size=0x1
void sub_1016ebb0()
{
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
int CBasePlayer::vfunc127(int pRestore)
{
#define pRestore ((CRestore *)pRestore)
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
#undef pRestore
}
// END FUNCTION

// FUNCTION: 0x1016eec0 size=0x1ba
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "CBasePlayer.h"
#include "ScopeTrace.h"

extern "C" unsigned int strlen(const char *);
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(strlen, memset, memcpy)

extern int (__cdecl *g_109f3854)(const char *, const char *, int);
extern char *(__cdecl *g_109f3890)(char *, const char *, int);

#define EMAIL_MAX(a, b) ((a) > (b) ? (a) : (b))
#define PLAYER_NAME(p) (*(const char **)((char *)(p) + 0x26c))

static inline void CopyDwords(int *pDest, const int *pSrc, int nDwords)
{
	memcpy(pDest, pSrc, nDwords * 4);
}

void CBasePlayer::sub_1016eec0(const char *pszName, int *pOut, int nDwords)
{
	ScopeTrace trace("CBasePlayer::RetrieveGlobalEmailFlags", this ? (PLAYER_NAME(this) ? PLAYER_NAME(this) : g_106b8540) : g_105387dc);
	int len = strlen(pszName);
	int i = 0;
	for (; i < m_GlobalEmail.Count(); i++) {
		if (g_109f3854(pszName, m_GlobalEmail[i].m_szName, EMAIL_MAX(len, (int)strlen(m_GlobalEmail[i].m_szName))) == 0)
			break;
	}
	if (i == m_GlobalEmail.Count()) {
		GLOBAL_EMAIL rec;
		memset(&rec, 0, sizeof(rec));
		g_109f3890(rec.m_szName, pszName, 0x40);
		i = m_GlobalEmail.AddToTail(rec);
	}
	CopyDwords(pOut, m_GlobalEmail[i].m_Data, nDwords);
}
// END FUNCTION

// FUNCTION: 0x1016f0f0 size=0x145
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "CBasePlayer.h"
#include "ScopeTrace.h"

extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen, memcpy)

extern int (__cdecl *g_109f3854)(const char *, const char *, int);
extern void (__cdecl *g_109f364c)(const char *, ...);

#define EMAIL_MAX(a, b) ((a) > (b) ? (a) : (b))
#define PLAYER_NAME(p) (*(const char **)((char *)(p) + 0x26c))

static inline void CopyDwords(int *pDest, const int *pSrc, int nDwords)
{
	memcpy(pDest, pSrc, nDwords * 4);
}

void CBasePlayer::sub_1016f0f0(const char *name, const void *data, int unused)
{
	ScopeTrace trace("CBasePlayer::StoreGlobalEmailFlags", this ? (PLAYER_NAME(this) ? PLAYER_NAME(this) : g_106b8540) : g_105387dc);
	int len = strlen(name);
	for (int i = 0; i < m_GlobalEmail.Count(); i++) {
		if (g_109f3854(name, m_GlobalEmail[i].m_szName, EMAIL_MAX(len, (int)strlen(m_GlobalEmail[i].m_szName))) == 0) {
			CopyDwords(m_GlobalEmail[i].m_Data, (const int *)data, 0x80);
			return;
		}
	}
	g_109f364c("Could not save email for terminal: %s\n", name);
}
// END FUNCTION

// FUNCTION: 0x1016f2a0 size=0x64b
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
#include "CUnknown101fa0e0.h"
#include "QuestJournal.h"
#include "FileSystemViews.h"
#include "globalvars.h"
#include "engineserver.h"
#include <string.h>
#include <time.h>

extern int (__cdecl *g_109f388c)(char *, int, const char *, ...);
extern char *(__cdecl *g_109f3850)(char *, const char *, int);
extern void (__cdecl *g_109f364c)(const char *, ...);
extern QuestJournal g_1074f8f8;
int sub_101d1070(char *pszBuf, int nSize);
char *sub_101d3730(const char *fmt, ...);
void sub_100d4160(int hFile, CVStatList_t *pList, int a, int b);
void sub_1019b800(int hFile);

inline const char *STRINGR(const char *const &s) { return s ? s : (const char *)g_106b8540; }

#define LOGLINE(s) \
	{ \
		char *p = (s); \
		g_1070b238->vfunc3(p, strlen(p), hFile); \
	}

// TARGET: CBasePlayer::sub_1016f2a0
void CBasePlayer::sub_1016f2a0(const char *pszFile)
{
	int nId;
	int nTime;
	char szTime[0x80];
	char szPath[0x104];
	const char *pszName = STRINGR(m_pszName2078);
	nId = sub_101d1070(szTime, 0x80);
	nTime = (int)engine->vfunc119(0);
	if (pszFile && (int)strlen(pszFile) > 0)
		g_109f388c(szPath, 0x104, "logs/%s", pszFile);
	else
		g_109f388c(szPath, 0x104, "logs/%s_%d", pszName, nId);
	g_109f3850(szPath, ".txt", 0x104);
	int hFile = g_1070b238->vfunc0(szPath, "w+", 0);
	if (!hFile) {
		g_109f364c("Could not log character to: %s\n", szPath);
		return;
	}
	const char *pszMap = gpGlobals->mapname;
	if (!pszMap)
		pszMap = g_106b8540;
	LOGLINE(sub_101d3730("%s %d %d %d\n\n", pszMap, m_lBirthday, nTime, nId));
	LOGLINE(sub_101d3730("Log Generated on: %s", szTime));
	LOGLINE(sub_101d3730("Player Name: %s\n", pszName));
	LOGLINE(sub_101d3730("Map: %s (version: %d)\n", STRINGR(gpGlobals->mapname), gpGlobals->mapversion));
	LOGLINE(sub_101d3730("Player Created: %d\n", ctime((time_t *)&m_lBirthday)));
	LOGLINE(sub_101d3730("Current Build: %d \n", engine->vfunc6()));
	LOGLINE(sub_101d3730("\n\n\n\nDumping all stats...................\n\n"));
	sub_100d4160(hFile, CVStatListSet::Of(this)->Find(0), 0xfffe7961, 0);
	sub_100d4160(hFile, CVStatListSet::Of(this)->Find(1), 0xfffe7961, 0);
	sub_100d4160(hFile, CVStatListSet::Of(this)->Find(2), 0, 0);
	sub_100d4160(hFile, CVStatListSet::Of(this)->Find(3), 1, 0);
	((CUnknown101fa0e0 *)((char *)this + 0x13dc))->sub_101fa180((void *)hFile);
	LOGLINE(sub_101d3730("\n\n\n\nDumping inventory...................\n\n"));
	sub_10336390(hFile);
	LOGLINE(sub_101d3730("\n\n\n\nDumping global flags...................\n\n"));
	sub_1019b800(hFile);
	LOGLINE(sub_101d3730("\n\n\n\nDumping quest log...................\n\n"));
	g_1074f8f8.sub_10221f20((void *)hFile);
	LOGLINE(sub_101d3730("\n\n\n\nDumping experience entries...................\n\n"));
	nTime = 0;
	for (; nTime < m_Awards1d7c.Count(); nTime++)
		LOGLINE(sub_101d3730("%-36s: %d\n", m_Awards1d7c[nTime].m_szName, m_Awards1d7c[nTime].m_n30));
	LOGLINE(sub_101d3730("\n\n\n\nMap visit order...................\n\n"));
	for (nTime = 0; nTime < m_MapVisits1e10.Count(); nTime++)
		LOGLINE(sub_101d3730("%s - %s\n", m_MapVisits1e10[nTime].m_szMap, ctime((time_t *)&m_MapVisits1e10[nTime].m_nTime44)));
	g_1070b238->vfunc1(hFile);
}
// END FUNCTION

// FUNCTION: 0x1016fa90 size=0x35b
// VC6 orders two frame slots of this function by the unit's count of names (no CUnknown101d7520.h here; the weapon
// base change of 2026-11-19 flipped them with it). WORKAROUND dial: the typedefs after the includes (of 0..130,
// 0..9, 60..73 and 124..130 match under the headers with CBaseEntity's slots 134..240 of 2026-11-20; the
// others swap the two slots).
#include "CBasePlayer.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "vampire.h"
#include <string.h>
typedef int pcd_dial0;
typedef int pcd_dial1;
typedef int pcd_dial2;
typedef int pcd_dial3;
typedef int pcd_dial4;
typedef int pcd_dial5;
typedef int pcd_dial6;
typedef int pcd_dial7;
typedef int pcd_dial8;
typedef int pcd_dial9;
typedef int pcd_dial10;
typedef int pcd_dial11;
typedef int pcd_dial12;
typedef int pcd_dial13;
typedef int pcd_dial14;
typedef int pcd_dial15;
typedef int pcd_dial16;
typedef int pcd_dial17;
typedef int pcd_dial18;
typedef int pcd_dial19;
typedef int pcd_dial20;
typedef int pcd_dial21;
typedef int pcd_dial22;
typedef int pcd_dial23;
typedef int pcd_dial24;
typedef int pcd_dial25;
typedef int pcd_dial26;
typedef int pcd_dial27;
typedef int pcd_dial28;
typedef int pcd_dial29;
typedef int pcd_dial30;
typedef int pcd_dial31;
typedef int pcd_dial32;
typedef int pcd_dial33;
typedef int pcd_dial34;
typedef int pcd_dial35;
typedef int pcd_dial36;
typedef int pcd_dial37;
typedef int pcd_dial38;
typedef int pcd_dial39;
typedef int pcd_dial40;
typedef int pcd_dial41;
typedef int pcd_dial42;
typedef int pcd_dial43;
typedef int pcd_dial44;
typedef int pcd_dial45;
typedef int pcd_dial46;
typedef int pcd_dial47;
typedef int pcd_dial48;
typedef int pcd_dial49;
typedef int pcd_dial50;
typedef int pcd_dial51;
typedef int pcd_dial52;
typedef int pcd_dial53;
typedef int pcd_dial54;
typedef int pcd_dial55;
typedef int pcd_dial56;
typedef int pcd_dial57;
typedef int pcd_dial58;
typedef int pcd_dial59;
typedef int pcd_dial60;
typedef int pcd_dial61;
typedef int pcd_dial62;
typedef int pcd_dial63;
typedef int pcd_dial64;
typedef int pcd_dial65;

class ICommandLine
{
public:
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual int ParmValue(const char *psz, int nDefault);
};
extern ICommandLine *(*g_109f3874)();
__declspec(dllimport) int Q_strnicmp(const char *s1, const char *s2, int n);
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);

struct IFileSystemTrackView
{
	virtual void *vfunc0(const char *pName, const char *pMode, int a);
	virtual void vfunc1(void *h);
	virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual void vfunc14(const char *pName, int a);
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void vfunc20(char *pBuf, int nMax, void *h);
	virtual void v21();
	virtual const char *vfunc22(const char *pPattern, int *pHandle);
	virtual const char *vfunc23(int hFind);
	virtual void v24();
	virtual void vfunc25(int hFind);
};
extern IFileSystemTrackView *g_1070b238;
extern "C" int sscanf(const char *, const char *, ...);
const char *sub_101d3730(const char *fmt, ...);
int sub_101d1070(int a, int b);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
#define TS_MAX(a, b) (((a) > (b)) ? (a) : (b))

inline void TS_CheckVisited(CUtlVector<CBasePlayerMapVisit> &visits, const char *szMap, bool &bDelete)
{
	for (int i = 0; i < visits.Count(); i++) {
		if (!Q_strnicmp(szMap, visits[i].m_szMap, TS_MAX((int)strlen(szMap), (int)strlen(visits[i].m_szMap)))) {
			bDelete = false;
			return;
		}
	}
}

// TARGET: CBasePlayer::sub_1016fa90
void CBasePlayer::sub_1016fa90()
{
	static int s_nTrackStats = g_109f3874()->ParmValue("trackstats", 0);
	if (!s_nTrackStats)
		return;

	int nMapLen = strlen(STRINGR(gpGlobals->mapname));
	bool bNew = true;
	for (int i = 0; i < m_MapVisits1e10.Count(); i++) {
		if (!Q_strnicmp(STRINGR(gpGlobals->mapname), m_MapVisits1e10[i].m_szMap, nMapLen)) {
			bNew = false;
			break;
		}
	}

	CBasePlayerMapVisit rec;
	memset(&rec, 0, sizeof(rec));
	rec.m_nTime44 = sub_101d1070(0, 0);
	*(int *)(rec.m_szMap + 0x40) = (int)engine->vfunc119(0);
	Q_strncpy(rec.m_szMap, STRINGR(gpGlobals->mapname), 0x40);

	int hFind;
	const char *pszFile = g_1070b238->vfunc22(sub_101d3730("logs/%s_*_trackstats.txt", STRINGR(m_pszName2078)), &hFind);
	while (pszFile) {
		bool bDelete = true;
		const char *pszPath = sub_101d3730("logs/%s", pszFile);
		void *hFile = g_1070b238->vfunc0(pszPath, "r", 0);
		if (hFile) {
			char szLine[0x40];
			char szMap[0x40];
			int nBirthday, n2, n3;
			g_1070b238->vfunc20(szLine, 0x40, hFile);
			sscanf(szLine, "%s %d %d %d\n\n", szMap, &nBirthday, &n2, &n3);
			if (nBirthday == m_lBirthday)
				TS_CheckVisited(m_MapVisits1e10, szMap, bDelete);
		}
		g_1070b238->vfunc1(hFile);
		if (bDelete)
			g_1070b238->vfunc14(pszPath, 0);
		pszFile = g_1070b238->vfunc23(hFind);
	}
	g_1070b238->vfunc25(hFind);

	m_MapVisits1e10.AddToTail(rec);

	if (bNew)
		sub_1016f2a0(sub_101d3730("%s_%d_%s_trackstats", STRINGR(m_pszName2078), rec.m_nTime44, rec.m_szMap));
}
// END FUNCTION

// FUNCTION: 0x1016fed0 size=0x15b
#include "CBasePlayer.h"
#include "ConVar.h"
#include "CChangeLevel.h"
#include "CGlobalEntityList.h"
#include "CDialog.h"

__declspec(dllimport) void DevWarning(const char *pszFormat, ...);
extern "C" void *__cdecl __RTDynamicCast(void *pObj, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_10538764[];
extern char g_1055ef50[];
extern CGlobalEntityList g_106eb5d8;
extern char g_106ea788;
ConVar *sub_10245660(const char *pszName);
CBaseEntity *sub_101c7690(const char *pszLandmark, CChangeLevel *pChangeLevel);
char sub_100df7b0();

struct CPlayerObj
{
	char m_pad0000[0x128];
	int m_n0128;
};

struct CEntityView
{
	char m_pad0000[0x98];
	CPlayerObj *m_p0098;
};

struct CEntityFlagsView
{
	char m_pad0000[0x224];
	unsigned int m_nFlags0224;
};

// TARGET: CBasePlayer::sub_1016fed0
void CBasePlayer::sub_1016fed0()
{
	m_n1E0C = 0;
	m_n1E08 = -1;
	m_hEnt1E04 = -1;
	sub_10178140();
	static ConVar *s_pDeveloper = sub_10245660("developer");
	if (s_pDeveloper && s_pDeveloper->GetInt())
	{
		if (!sub_10170340())
			DevWarning("Player invalid in CBasePlayer::OnPlacedInMap\n");
		for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt))
		{
			CChangeLevel *pChange = (CChangeLevel *)__RTDynamicCast(pEnt, 0, g_10538764, g_1055ef50, 0);
			if (pChange && !sub_101c7690(pChange->m_szLandmarkName, pChange))
			{
				pChange->vfunc67();
				((CEntityFlagsView *)pChange)->m_nFlags0224 |= 2;
			}
		}
	}
	if (sub_100df7b0())
	{
		g_106ea788 = 1;
		for (CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0); pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt))
		{
			CPlayerObj *pObj = ((CEntityView *)pEnt)->m_p0098;
			if (pObj && pObj->m_n0128)
				((CDialog *)sub_10178120())->sub_100dfb80((CBaseEntity *)this, (CBaseEntity *)pObj);
		}
		g_106ea788 = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x10170090 size=0x219
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"
#include "CSingleUserRecipientFilter.h"
extern int g_10726088;
extern "C" __declspec(dllimport) void Error(const char *, ...);
void sub_101cd940(CBaseEntity *);

void CBasePlayer::sub_10170090()
{
	if (m_nTarget153c != -1 && EHandle_Get(m_hTarget1538.m_Index))
		sub_10329560();
	if (EHandle_Get(m_hDialogPartnerFE8)) {
		Error("Can't change levels while in dialog!\n");
		vfunc415();
	}
	if (EHandle_Get(m_hInteractiveUseTarget.m_Index))
		sub_10167fd0();
	if (sub_10175180())
		sub_1033f6d0();
	sub_101618e0(0, 0);
	sub_10161f10();
	EHANDLE *pEmitters = (EHANDLE *)((char *)this + 0xff8);
	for (int i = 18; i; i--, pEmitters++)
		sub_101cd940(pEmitters->Get());
	sub_101cd940(((EHANDLE *)((char *)this + 0x1d64))->Get());
	sub_1017cef0(0);
	CSingleUserRecipientFilter filter(this);
	filter.MakeReliable();
	engine->vfunc65(&filter, g_10726088);
	engine->vfunc67(0);
	engine->vfunc72(0);
	engine->vfunc71(0);
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x10170340 size=0x33b
#include "CBasePlayer.h"
#include "Tier1.h"
#include "CEHandleGet.h"

__declspec(dllimport) void DevWarning(const char *pMsg, ...);

struct CSub270Bounds
{
	virtual void v0();
	virtual const Vector &vfunc1();
	virtual const Vector &vfunc2();
};

// TARGET: CBasePlayer::sub_10170340
char CBasePlayer::sub_10170340()
{
	if (!vfunc158())
		return 1;
	bool ok = true;
	if ((vfunc211() & 0x51) != 0x51) {
		DevWarning("Invalid Player: bad solid flags: %d\n", vfunc211());
		ok = false;
	}
	if (vfunc211() & 0x2a) {
		DevWarning("Invalid player: bad solid flags\n");
		ok = false;
	}
	if (vfunc92() != 2) {
		DevWarning("Invalid Player: bad solid type: %d\n", vfunc92());
		ok = false;
	}
	if (m_field368 != 3) {
		DevWarning("Invalid Player: bad collision group: %d\n", m_field368);
		ok = false;
	}
	if (vfunc94() != 3 && vfunc94() != 10 && (vfunc94() != 9 || !((unsigned char)(m_flags268 >> 2) & 1)) && (vfunc94() != 0 || m_nTarget153c == -1 || !EHandle_Get(m_hTarget1538.m_Index))) {
		DevWarning("Invalid Player: bad move type: %d\n", vfunc94());
		ok = false;
	}
	CSub270Bounds *pCol = (CSub270Bounds *)&Sub270();
	Vector v = pCol->vfunc1();
	if (v != Vector(-16, -16, 0) && v != Vector(-16, -16, 0)) {
		DevWarning("Invalid Player: bad min bounds: %.1f %.1f %.1f\n", v.x, v.y, v.z);
		ok = false;
	}
	v = pCol->vfunc2();
	if (v != Vector(16, 16, 72) && v != Vector(16, 16, 36)) {
		DevWarning("Invalid Player: bad max bounds: %.1f %.1f %.1f\n", v.x, v.y, v.z);
		ok = false;
	}
	const char *items[] = { "item_w_unarmed", "item_g_wallet", "item_g_keyring", "item_a_lt_cloth", 0 };
	const char **pp = items;
	const char *name = items[0];
	do {
		if (!sub_10335950(name)) {
			DevWarning("Invald Player: missing item: %s\n", name);
			ok = false;
		}
		name = *++pp;
	} while (name);
	const char *fists[] = { "item_w_fists", "item_w_claws_protean4", "item_w_claws_protean5", 0 };
	bool bNone = true;
	const char **pf = fists;
	name = fists[0];
	do {
		if (!sub_10335950(name))
			bNone = false;
		name = *++pf;
	} while (name);
	if (bNone) {
		DevWarning("Invald Player: missing ANY fist/etc. item:\n");
		ok = false;
	}
	return ok;
}
// END FUNCTION

// FUNCTION: 0x10170750 size=0x44
#include "CBasePlayer.h"
extern int sub_1023bd00();
struct S1023bd00 { char pad[0x49c]; int m49c; };
void CBasePlayer::sub_10170750()
{
	S1023bd00 *p = (S1023bd00 *)sub_1023bd00();
	if (p) {
		if (p->m49c == 2) {
			sub_101816c0("item_w_unarmed");
			sub_10147a60();
			return;
		}
		if (p->m49c == 1) {
			sub_10147a30(3);
			sub_10147a30(0xb);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101707c0 size=0x261
#include "CBasePlayer.h"
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CBaseLandmark.h"
#include "CGlobalEntityList.h"
#include "globalvars.h"

extern CGlobalEntityList g_106eb5d8;
CBaseEntity *sub_101c7690(const char *pszName, int a);
void __fastcall sub_1017faa0(CBasePlayer *pPlayer);
__declspec(dllimport) void Warning(const char *fmt, ...);

// TARGET: CBasePlayer::sub_101707c0
void CBasePlayer::sub_101707c0(int unused, int bTouch, const char *pszLandmark)
{
	bool bGo = bTouch != 0;
	m_n19F0 = 10;
	CBaseLandmark *pLandmark = (CBaseLandmark *)sub_101c7690(pszLandmark, 0);
	if (pLandmark) {
		if (*(unsigned char *)&pLandmark->m_flags204 & 1) {
			vfunc216(*(const Vector *)pLandmark->vfunc217());
			vfunc218(pLandmark->vfunc219());
			float *pAngles = pLandmark->vfunc219();
			m_vec206c.x = pAngles[0];
			m_vec206c.y = pAngles[1];
			m_vec206c.z = pAngles[2];
			sub_100b3b00();
		} else if ((unsigned char)(pLandmark->m_flags204 >> 1) & 1) {
			vfunc216(*(const Vector *)pLandmark->vfunc217());
			sub_100b3b00();
		}
		pLandmark->m_Output4f8.sub_100cd660(this, pLandmark, 0);
		if (!bGo)
			goto done;
		sub_1017f170(pLandmark);
	} else {
		if (pszLandmark)
			Warning("%s: BAD PLAYER LANDMARK!!", pszLandmark);
		if (!bGo)
			goto done;
		CBaseEntity *pBest = 0;
		float flBest = 3.4028235e+38f;
		Vector vecOrigin = *(Vector *)vfunc220();
		CBaseEntity *pEnt = g_106eb5d8.sub_100f7380(0, "info_landmark");
		while (pEnt) {
			float flDist = (*(Vector *)((CBasePlayer *)pEnt)->vfunc220() - vecOrigin).LengthSqr();
			if (flDist < flBest) {
				pBest = pEnt;
				flBest = flDist;
			}
			pEnt = g_106eb5d8.sub_100f7380(pEnt, "info_landmark");
		}
		if (pBest)
			sub_1017f170(pBest);
	}
	sub_10170750();
	sub_1017e150(0, -1.0f, "Clear - OnRestoreComplete");
	sub_1017df50(0, -1.0f, "Clear - OnRestoreComplete");
	sub_1017e6f0(0);
done:
	if (vfunc94() == 10)
		vfunc93(3, 0);
	Vec1d90().Purge();
	int *p = (int *)((char *)this + 0x1e90);
	p[0] = 0;
	p[1] = 0;
	p[2] = 0;
	sub_1016fed0();
	sub_10170b00();
	sub_1017faa0(this);
	sub_1016fa90();
}
// END FUNCTION

// FUNCTION: 0x10170ad0 size=0x1a
struct CUnk10170ad0
{
	char m_pad0000[0x1c54];
	char *m_p1c54;

	void sub_10170b00();
	void sub_10170ad0(char *p);
};

// TARGET: sub_10170ad0
void CUnk10170ad0::sub_10170ad0(char *p)
{
	m_p1c54 = *p ? p : 0;
	sub_10170b00();
}
// END FUNCTION

// FUNCTION: 0x10170b00 size=0x3d
#include <string.h>

extern int (*g_109f388c)(char *pszDest, int nSize, const char *pszFormat, ...);
extern char g_106b8540[];

struct CUnknown10170b00
{
	void sub_10170b00();
	char m_pad0000[0x1c54];
	const char *m_pszName;
};

// TARGET: CUnknown10170b00::sub_10170b00
void CUnknown10170b00::sub_10170b00()
{
	char buf[39];
	memset(buf, 0, sizeof(buf));
	const char *pszName = m_pszName;
	if (!pszName)
		pszName = g_106b8540;
	g_109f388c(buf, 0x20, "name \"%s\"", pszName);
}
// END FUNCTION

// FUNCTION: 0x10170b50 size=0xe5
#include "CBaseCombatWeapon.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

#define m_hLastWeapon (*(CHandle<CBaseCombatWeapon> *)&m_hEa4.m_Index)

void CBasePlayer::vfunc456()
{
	if (!m_hLastWeapon.Get())
		return;
	if (sub_1032e7b0() && !((CBaseCombatWeapon *)sub_1032e7b0())->vfunc313())
		return;
	vfunc457(STRINGR_F(((CBaseEntity *)m_hLastWeapon.Get())->m_classname11c), m_hLastWeapon->vfunc296());
}
// END FUNCTION

// FUNCTION: 0x10170c80 size=0x1a
extern void *g_109f3890;

struct CUnk10170c80
{
	char m_pad0000[0x22cc];
	char m_sz22cc[16];

	void sub_10170c80(const char *psz);
};

// TARGET: sub_10170c80
void CUnk10170c80::sub_10170c80(const char *psz)
{
	((void (*)(char *, const char *, int))g_109f3890)(m_sz22cc, psz, 0x10);
}
// END FUNCTION

// FUNCTION: 0x10170cb0 size=0x27
// TARGET: CUnknown10170cb0::sub_10170cb0
#include "CUnknown10170cb0.h"

void CUnknown10170cb0::sub_10170cb0(int flDelta, int nLimit)
{
	m_unk22e4 += flDelta;
	if (nLimit > 0 && m_unk22e4 > nLimit)
		m_unk22e4 = nLimit;
}
// END FUNCTION

// FUNCTION: 0x10170cf0 size=0x34
// TARGET: CBasePlayer::sub_10170cf0
#include "CBasePlayer.h"

void CBasePlayer::sub_10170cf0(unsigned int flags, char bSet)
{
	unsigned int *pFlags = (unsigned int *)((char *)this + 0x20f0);
	if (bSet) {
		*pFlags |= flags;
	} else {
		*pFlags &= ~flags;
	}
}
// END FUNCTION

// FUNCTION: 0x10170d40 size=0xf
#include "globalvars.h"

// TARGET: sub_10170d40
void __fastcall sub_10170d40(int *pThis)
{
	*(unsigned int *)((char *)pThis + 0x22c8) = *(unsigned int *)&gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10170d60 size=0xd1
#include "CBasePlayer.h"
#include "CUnknown101c26d0.h"
#include <stdlib.h>


void CBasePlayer::sub_10170d60()
{
    if (!(m_f2148 > gpGlobals->curtime)) {
        m_f2148 = gpGlobals->curtime + 5.0f;
        *(int *)((char *)this + 0x210) = 0;
        CUnknown101c26d0 info;
        info.sub_101c26d0(this, this, 10.0f, 0x1000, 0, 0, -1);
        Vector v;
        v.x = rand() * 9.155553e-5f + 2.0f;
        v.y = rand() * 9.155553e-5f + 2.0f;
        v.z = rand() * 9.155553e-5f + 2.0f;
        info.m_vecForce = v;
        vfunc144(&info);
    }
}
// END FUNCTION

// FUNCTION: 0x10170e80 size=0x1a
extern void *g_109f3890;

struct CUnk10170e80
{
	char m_pad0000[0x20a9];
	char m_sz20a9[32];

	void sub_10170e80(const char *psz);
};

// TARGET: sub_10170e80
void CUnk10170e80::sub_10170e80(const char *psz)
{
	((void (*)(char *, const char *, int))g_109f3890)(m_sz20a9, psz, 0x20);
}
// END FUNCTION

// FUNCTION: 0x10170eb0 size=0xec
#include "CUnknown10170eb0.h"

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct FirstEntitySlots
{
	SL100(a) SL100(b) SL100(c) SL10(d0)
	virtual void e0(); virtual void e1(); virtual void e2();
	virtual bool Check();	// slot 313
};

struct SelfSlots
{
	SL100(a) SL100(b) SL100(c) SL100(d) SL10(e0) SL10(e1) SL10(e2) SL10(e3) SL10(e4)
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6();
	virtual void Notify(const char *pName, int a);	// slot 457
};

struct SecondEntity
{
	char m_pad0000[0x11c];
	const char *m_classname;	// 0x11c

	const char *GetClassname() const { return m_classname ? m_classname : ""; }
};

struct EntHandleFirst
{
	unsigned int m_Index;
	FirstEntitySlots *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (FirstEntitySlots *)e->ent : 0;
	}
};

struct EntHandleSecond
{
	unsigned int m_Index;
	SecondEntity *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
		return e->serial == (m_Index >> 13) ? (SecondEntity *)e->ent : 0;
	}
};

void CUnknown10170eb0::sub_10170eb0()
{
	if (((EntHandleSecond *)&m_hSecond)->Get() != 0) {
		if (((EntHandleFirst *)&m_hFirst)->Get() != 0) {
			if (!((EntHandleFirst *)&m_hFirst)->Get()->Check())
				return;
		}
		((SelfSlots *)this)->Notify(((EntHandleSecond *)&m_hSecond)->Get()->GetClassname(), 0);
	}
}
// END FUNCTION

// FUNCTION: 0x10170fe0 size=0x2d
#include "CBaseCombatCharacter.h"
// TARGET: CBaseCombatCharacter::sub_10170fe0
bool CBaseCombatCharacter::sub_10170fe0()
{
    for (int i = 0; i < 0xe0; i++) {
        if (sub_1032e8b0(i)) {
            sub_1032e8b0(i);
            return true;
        }
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10171020 size=0xa
#include "ConVar.h"
ConVar g_10725de0("sv_suppress_viewpunch", "0", 8192);
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
	Vector v = (*(Vector *)m_vel3d4) + *pOffset;
	((CBaseEntity *)this)->sub_100b2e30(&v.x);
}
// END FUNCTION

// FUNCTION: 0x101711e0 size=0xbc
#include "CBasePlayer.h"

extern Vector g_1070d9d0;

static inline float LenSqr(const Vector &v)
{
	return v.x * v.x + v.y * v.y + v.z * v.z;
}

void CBasePlayer::sub_101711e0(float flThreshold)
{
	if (flThreshold == 0.0f || !(LenSqr(m_vec1F08) + LenSqr(m_vec1EFC) > flThreshold * flThreshold)) {
		m_vec1EFC = g_1070d9d0;
		m_vec1F08 = g_1070d9d0;
	}
}
// END FUNCTION

// FUNCTION: 0x101712d0 size=0xbb
#include "CBaseEntity.h"
#include "CBasePlayer.h"

extern float g_1070d1b0[3];

// TARGET: CBasePlayer::sub_101712d0
void CBasePlayer::sub_101712d0(CBasePlayerVehicle *pVehicle, int role)
{
	if (pVehicle->vfunc2(role) != 0)
		return;
	CBaseEntity *pVehicleEnt = pVehicle->vfunc1();
	m_pVehicle = pVehicle;
	if (pVehicleEnt)
		m_hVehicle = *pVehicleEnt->vfunc1();
	else
		m_hVehicle = 0xffffffff;
	m_b20F4 = 1;
	m_flags1E74 |= 1;
	if (!pVehicle->vfunc5(role))
		vfunc66();
	((CBaseEntity *)this)->sub_100b2e30(g_1070d1b0);
	((CBaseEntity *)this)->vfunc93(9, 0);
	((CBaseEntity *)this)->sub_100aaa40(8);
	((CBaseEntity *)this)->sub_100b3b00();
	pVehicle->vfunc4(role, this);
	sk0f();
}
// END FUNCTION

// FUNCTION: 0x101713c0 size=0xab
#include "CBaseEntity.h"
#include "CBasePlayer.h"

#define PS_V1(p) virtual void p();
#define PS_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define PS_V100(p) PS_V10(p##0) PS_V10(p##1) PS_V10(p##2) PS_V10(p##3) PS_V10(p##4) PS_V10(p##5) PS_V10(p##6) PS_V10(p##7) PS_V10(p##8) PS_V10(p##9)

struct CPlayerSlots
{
	PS_V10(a0) PS_V10(a1) PS_V10(a2) PS_V10(a3) PS_V10(a4) PS_V10(a5) PS_V1(b0) PS_V1(b1) PS_V1(b2) PS_V1(b3) PS_V1(b4) PS_V1(b5) PS_V1(b6)
	virtual void vfunc67();
	PS_V10(c0) PS_V10(c1) PS_V1(d0) PS_V1(d1) PS_V1(d2) PS_V1(d3) PS_V1(d4)
	virtual void vfunc93(int moveType, int moveCollide);
	PS_V100(e0) PS_V100(e1) PS_V100(e2) PS_V10(f0) PS_V10(f1) PS_V10(f2) PS_V10(f3) PS_V10(f4) PS_V10(f5) PS_V1(g0)
	virtual void vfunc455(float *pPos);
};

struct CPlayerVehicle
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual int GetDriverSlot(CBasePlayer *pPlayer);	// slot 3
	virtual void v4Release(int slot, int flag);	// slot 4
	virtual void v5();
	virtual void GetExitPosition(int slot, float *pPos);	// slot 6
};

struct SVehicleLink
{
	char m_bInVehicle;	// 0x20f4
	char m_pad[3];
	int m_hSeat;	// 0x20f8
	CPlayerVehicle *m_pVehicle;	// 0x20fc
};

void sub_100043cc(CBasePlayer *pPlayer, float *pPos, int flag);

void CBasePlayer::sub_101713c0()
{
	SVehicleLink *link = (SVehicleLink *)((char *)this + 0x20f4);
	if (link->m_pVehicle) {
		int slot = link->m_pVehicle->GetDriverSlot(this);
		float pos[3];
		link->m_pVehicle->GetExitPosition(slot, pos);
		((CPlayerSlots *)this)->vfunc455(pos);
		*(unsigned int *)((char *)this + 0x1e74) &= ~1;
		((CPlayerSlots *)this)->vfunc67();
		((CPlayerSlots *)this)->vfunc93(3, 0);
		((CBaseEntity *)this)->sub_100aaa40(3);
		sub_100043cc(this, pos, 0);
		*(volatile int *)&link->m_hSeat = -1;
		link->m_bInVehicle = 0;
		(*(CPlayerVehicle *volatile *)&link->m_pVehicle)->v4Release(slot, 0);
		link->m_pVehicle = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x101714a0 size=0x197
#include "CSprayCan.h"
#include "CBasePlayer.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"

void CSprayCan::sub_101714a0(CBasePlayer *pOwner)
{
	Vector vecOrigin = pOwner->vfunc192() + Vector(0, 0, 32);
	vfunc62(&vecOrigin.x);
	vfunc64(&pOwner->m_vec206c.x);
	vfunc202((CBaseEntity *)pOwner);
	m_flSprayCount450 = 0;
	m_flNextThink = gpGlobals->curtime + 0.1;
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	int edict = m_pEdict2e0;
	enginesound->vfunc3(&filter, engine->vfunc35(edict), 2, "player/sprayer.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x101716b0 size=0x274
#include "CSprayCan.h"
#include "CPointEntity.h"
#include "UTIL_Trace.h"
#include "CUnknown101771f0.h"
#include "engineserver.h"
#include "QAngle.h"

inline CUnknown101771f0 *ToPlayerX(CBaseEntity *p)
{
	if (!p)
		return 0;
	return (CUnknown101771f0 *)p->m_pA8;
}

struct EntIdxV : CBaseEntity { int edict() { return m_pEdict2e0; } int entindex() { return engine->vfunc35(edict()); } };
void CSprayCan::vfunc134()
{
	CPointEntity *pBase = (CPointEntity *)this;
	CUnknown101771f0 *pPlayer = ToPlayerX(pBase->vfunc97());
	int count = pPlayer ? pPlayer->sub_101771f0() : -1;

	int index = ((EntIdxV *)pBase->vfunc97())->entindex();

	Vector fwd;
	sub_10139610(*(QAngle *)pBase->vfunc221(), &fwd, 0, 0);

	CGameTrace trace;
	UTIL_TraceLine(*(const Vector *)pBase->vfunc220(), fwd * 128.0f + *(const Vector *)pBase->vfunc220(), 0x400b, pPlayer, 0, &trace);

	if (count != -1)
	{
		sub_101d0160(&trace, index, (int)m_flSprayCount450, 1);
		count--;
		float flCount = (float)count;
		if (m_flSprayCount450++ >= flCount)
			sub_101cd940((char *)this);
	}
	else
	{
		sub_101cd940((char *)this);
	}
	pBase->m_flNextThink = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x101719d0 size=0x94
#include "CBaseEntity.h"
#include "CBloodSplat.h"
#define V4(x) virtual void x##a(); virtual void x##b(); virtual void x##c(); virtual void x##d();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)
#define V64(x) V16(x##a) V16(x##b) V16(x##c) V16(x##d)

struct Vec3 {
	float x, y, z;
};

struct EntV {
	V16(a) V16(b) V16(c) V4(d) V4(e) V4(f)
	virtual void s60();
	virtual void s61();
	virtual void v62(const Vec3 *pos);
	virtual void s63();
	virtual void v64(const float *angles);
	V64(g) V16(h) V16(i) V16(j) V4(k) V4(l) V4(m)
	virtual void s189();
	virtual void s190();
	virtual void s191();
	virtual float *v192(float *out);
	V4(n) V4(o)
	virtual void s201();
	virtual void v202(EntV *ent);
	V16(p)
	virtual void s219();
	virtual void s220();
	virtual float *v221();
};


void CBloodSplat::sub_101719d0(CBaseEntity *pPlayer)
{
	EntV *player = (EntV *)pPlayer;
	EntV *self = (EntV *)this;
	float tmp[3];
	Vec3 *p = (Vec3 *)player->v192(tmp);
	Vec3 pos;
	pos.x = p->x;
	pos.y = p->y;
	pos.z = p->z + 32.0f;
	Vec3 copy = pos;
	self->v62(&copy);
	self->v64(player->v221());
	self->v202(player);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1;
}
// END FUNCTION

// FUNCTION: 0x10171aa0 size=0x1e5
#include "CBaseEntity.h"
#include "CBloodSplat.h"
struct Vec
{
	float x, y, z;
	Vec() {}
	Vec(float a, float b, float c) { x = a; y = b; z = c; }
	Vec operator*(float f) const { return Vec(x * f, y * f, z * f); }
	Vec operator+(const Vec &v) const { return Vec(x + v.x, y + v.y, z + v.z); }
	float LengthSqr() const { return x * x + y * y + z * z; }
};

struct RayT
{
	Vec m_Start;
	Vec m_Delta;
	Vec m_StartOffset;
	Vec m_Extents;
	bool m_IsRay;
	unsigned char m_IsSwept;
	bool m_b52;
	bool m_b53;
	int m_d54;
};

struct TraceT
{
	Vec startpos;
	Vec endpos;
	char pad[0x3c];
};

struct TraceFilterSimple
{
	char buf[12];
	void sub_1000bd7f(int passent, int group);
};

struct IEngineTraceX
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void TraceRay(const RayT &ray, unsigned int mask, TraceFilterSimple *filter, TraceT *tr);
};

struct ConVarX
{
	virtual void v0();
	virtual bool v1();
	char pad[0x28];
	int m_nValue;
};

#define V10(n) virtual void v##n##0(); virtual void v##n##1(); virtual void v##n##2(); virtual void v##n##3(); virtual void v##n##4(); \
	virtual void v##n##5(); virtual void v##n##6(); virtual void v##n##7(); virtual void v##n##8(); virtual void v##n##9();

struct EntVT
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8)
	virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94();
	virtual void v95(); virtual void v96();
	virtual char *GetOwner();
	virtual void v98(); virtual void v99();
	V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17) V10(18) V10(19) V10(20) V10(21)
	virtual const Vec &GetAbsOrigin();
	virtual const Vec &GetAbsAngles();
};

extern int g_1070ba34;
extern IEngineTraceX *g_1070b254;
extern ConVarX *g_10738964;
extern float g_104454c4;
void sub_10002310(const Vec &angles, Vec *forward, Vec *right, Vec *up);
void sub_10015df2(const Vec &start, const Vec &end, int r, int g, int b, bool noDepth, float duration);
void sub_100050c4(TraceT *tr, int color, int unk);
void sub_10014614(CBaseEntity *ent);

static inline void UTIL_TraceLine(const Vec &start, const Vec &end, unsigned int mask, int ignore, int group, TraceT *ptr)
{
	RayT ray;
	ray.m_Delta.x = end.x - start.x;
	ray.m_Delta.y = end.y - start.y;
	ray.m_Delta.z = end.z - start.z;
	int swept = (ray.m_Delta.LengthSqr() != g_104454c4) ? 1 : 0;
	ray.m_IsSwept = swept;
	ray.m_Extents.x = ray.m_Extents.y = ray.m_Extents.z = 0.0f;
	ray.m_IsRay = true;
	ray.m_StartOffset.x = ray.m_StartOffset.y = ray.m_StartOffset.z = 0.0f;
	ray.m_Start = start;
	ray.m_b52 = false;
	ray.m_d54 = 0;
	ray.m_b53 = false;
	TraceFilterSimple filter;
	filter.sub_1000bd7f(ignore, group);
	g_1070b254->TraceRay(ray, mask, &filter, ptr);
	if (!g_10738964->v1() && g_10738964->m_nValue)
		sub_10015df2(ptr->startpos, ptr->endpos, 255, 0, 0, true, -1.0f);
}

void CBloodSplat::vfunc134()
{
	EntVT *self = (EntVT *)this;
	TraceT tr;
	if (g_1070ba34 != 1)
	{
		char *owner = self->GetOwner();
		int pass;
		if (!owner)
			pass = 0;
		else
			pass = *(int *)(owner + 0xa8);
		Vec forward;
		sub_10002310(self->GetAbsAngles(), &forward, 0, 0);
		UTIL_TraceLine(self->GetAbsOrigin(), self->GetAbsOrigin() + forward * 128, 0x400b, pass, 0, &tr);
		sub_100050c4(&tr, 0xf7, 0);
	}
	sub_10014614(this);
}
// END FUNCTION

// FUNCTION: 0x10171d10 size=0x62
#include "CVariantCopy.h"
#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CHandlerView { V100(a) V100(b) V100(c) V100(d) V10(e0) V10(e1) V10(e2) V10(e3) V10(e4) V(e50) V(e51) V(e52) V(e53) V(e54) V(e55) V(e56) V(e57) V(e58) virtual void Slot459(const char *psz, int n); };
struct CInputData { char pad[8]; CVariantCopy value; };
struct CVariantView : CVariantCopy
{
	const char *String() const { return (m_fieldType == 2) ? (iszVal ? iszVal : "") : sub_100d0a00(); }
};
void __fastcall sub_10171d10(CHandlerView *self, int edx, CInputData *pData)
{
	CVariantView *v = (CVariantView *)&pData->value;
	if (!v->String())
		return;
	self->Slot459(v->String(), 0);
}
// END FUNCTION

// FUNCTION: 0x10171da0 size=0x116
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBasePlayer.h"
#include "inputdata_t.h"
#include "CDialog.h"
#include "CEHandleGet.h"
#include "CUnknown101d5bd0.h"
#include "ScopeTrace.h"

struct CWhisperObj
{
	void sub_101f6530(CBasePlayer *pPlayer, const char *pszText);	// stub 0x10002842
};

extern CUnknown101d5bd0 g_10738d10;
extern CWhisperObj g_1073dbfc;

static inline const char *VString(variant_t &v)
{
	if (v.fieldType == 2)
		return v.iszValue ? v.iszValue : g_106b8540;
	return v.sub_10008805();
}

// TARGET: CBasePlayer::sub_10171da0
void CBasePlayer::sub_10171da0(inputdata_t *pInput)
{
	int nTemplate = sub_10337860();
	if (nTemplate != g_10738d10.sub_101d5bd0("Player_Malkavian"))
		return;
	if (!VString(pInput->value))
		return;
	if (!EHandle_Get(*(unsigned int *)((char *)this + 0xfe8)))
		g_1073dbfc.sub_101f6530(this, VString(pInput->value));
	else
		((CDialog *)sub_10178120())->sub_100e09a0(VString(pInput->value));
}
// END FUNCTION

// FUNCTION: 0x10171f10 size=0x27
// TARGET: CUnknown10171f10::sub_10171f10
#include "CUnknown10171f10.h"
#include "CUnknown1017d630.h"
#include "CBasePlayer.h"

void CUnknown10171f10::sub_10171f10(int unk4)
{
	if (((CUnknown1017d630 *)this)->sub_1017d630())
	{
		sub_1017d6d0(1.0f);
		return;
	}
	((CBasePlayer *)this)->sub_1017cef0(0);
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

// FUNCTION: 0x10172170 size=0x204
#include "UTIL_Trace.h"
#include "QAngle.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"

void __cdecl sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
int __cdecl _strcmpi(const char *s1, const char *s2);
extern char g_106b8540[];

// TARGET: sub_10172170
CBaseEntity *sub_10172170(CBaseEntity *pEntity, const char *pszClassname)
{
	Vector vecForward;
	sub_10139610((QAngle *)((char *)pEntity + 0x206c), &vecForward, 0, 0);
	CGameTrace trace;
	UTIL_TraceLine(*((CEntityVSlots *)pEntity)->slot193((Vector *)&(const Vector &)Vector()), *((CEntityVSlots *)pEntity)->slot193((Vector *)&(const Vector &)Vector()) + vecForward * 16384.0f, 0x200400b, pEntity, 0, &trace);
	if (trace.m_fraction != 1.0 && trace.m_pEnt)
	{
		CBaseEntity *pEnt = trace.m_pEnt;
		const char *pszName = pEnt->m_classname11c ? pEnt->m_classname11c : g_106b8540;
		if (_strcmpi(pszName, pszClassname) == 0)
			return pEnt;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10172410 size=0x1dc
#include "CBaseEntity.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "CBasePlayer.h"
#include "QAngle.h"
#include "Ray_t.h"
#include "CGameTrace.h"
#include "CTraceFilterSimple.h"
#include "CUnknown1070b254.h"
#include "CUnknown10738964.h"

void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
void sub_10015df2(const Vector &start, const Vector &end, int r, int g, int b, bool test, float duration);
extern CUnknown1070b254 *g_1070b254;
extern CUnknown10738964 *g_10738964;

inline void UTIL_TraceLine(const Vector &vecAbsStart, const Vector &vecAbsEnd, unsigned int mask, CBasePlayer *pIgnore, int collisionGroup, CGameTrace *ptr)
{
	Ray_t ray;
	ray.Init(vecAbsStart, vecAbsEnd);
	CTraceFilterSimple traceFilter(pIgnore, collisionGroup);
	g_1070b254->vfunc4(&ray, mask, (CTraceFilterNoCharacterCollide *)&traceFilter, ptr);
	if (!g_10738964->vfunc1() && g_10738964->m_n2c)
		sub_10015df2(*(Vector *)ptr->m_startpos, *(Vector *)ptr->m_endpos, 255, 0, 0, true, -1.0f);
}

// TARGET: sub_10172410
CBaseEntity *sub_10172410(CBasePlayer *pPlayer)
{
	if (pPlayer) {
		Vector forward;
		sub_10139610(*(QAngle *)&pPlayer->m_vec206c, &forward, 0, 0);
		Vector vecAim = forward * 16384.0f;
		CGameTrace tr;
		UTIL_TraceLine(pPlayer->vfunc193(), pPlayer->vfunc193() + vecAim, 0x200400b, pPlayer, 0, &tr);
		if (tr.m_fraction != 1.0 && tr.m_pEnt)
			return tr.m_pEnt;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10172670 size=0x74
#include "CEntityVSlots.h"

int sub_10172170(CEntityVSlots *pEnt, int a);
void sub_10139610(void *pFrom, Vector *pOut, int a, int b);

struct CUnknown106eb5d8
{
	void sub_100f8030(const Vector *pOrigin, const Vector *pOther, float flScale, int a);
};
extern CUnknown106eb5d8 g_106eb5d8;

// TARGET: sub_10172670
void sub_10172670(CEntityVSlots *pEnt, int a)
{
	if (!sub_10172170(pEnt, a))
	{
		Vector vecOther;
		sub_10139610((char *)pEnt + 0x206c, &vecOther, 0, 0);
		Vector vecOrigin = Vector(pEnt->slot192());
		g_106eb5d8.sub_100f8030(&vecOrigin, &vecOther, 0.95f, a);
	}
}
// END FUNCTION

// FUNCTION: 0x10172710 size=0x6c
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList g_106eb5d8;
void __cdecl sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);
int __cdecl sub_10172410(CBasePlayer *pPlayer);

void __cdecl sub_10172710(CBasePlayer *pPlayer)
{
	if (!sub_10172410(pPlayer)) {
		Vector forward;
		sub_10139610(&pPlayer->m_vec206c, &forward, 0, 0);
		Vector origin;
		origin = pPlayer->vfunc192();
		g_106eb5d8.sub_100f81f0(&origin, &forward, 0.95f);
	}
}
// END FUNCTION

// FUNCTION: 0x101727a0 size=0x64
#include "Vector.h"
#include "QAngle.h"
#define PV_V(n) virtual void v##n();
#define PV_V10(p) PV_V(p##0) PV_V(p##1) PV_V(p##2) PV_V(p##3) PV_V(p##4) PV_V(p##5) PV_V(p##6) PV_V(p##7) PV_V(p##8) PV_V(p##9)
struct CPlayerVecSlotsX {
    PV_V10(0) PV_V10(1) PV_V10(2) PV_V10(3) PV_V10(4) PV_V10(5) PV_V10(6) PV_V10(7) PV_V10(8) PV_V10(9)
    PV_V10(10) PV_V10(11) PV_V10(12) PV_V10(13) PV_V10(14) PV_V10(15) PV_V10(16) PV_V10(17) PV_V10(18)
    PV_V(190) PV_V(191) PV_V(192)
    virtual Vector vfunc193();
    char m_pad0004[0x206c - 4];
    QAngle m_angles206c;
};
void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_102f6d80(const Vector *pCenter, const Vector *pForward, float flScale, int arg);

// TARGET: sub_101727a0
void sub_101727a0(CPlayerVecSlotsX *pPlayer, int arg)
{
    Vector forward;
    Vector center;
    sub_10139610(&pPlayer->m_angles206c, &forward, 0, 0);
    center = pPlayer->vfunc193();
    sub_102f6d80(&center, &forward, 0.9f, arg);
}
// END FUNCTION

// FUNCTION: 0x10172830 size=0x5f
#include "Vector.h"
#define V4(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3();
#define V16(a) V4(a##a) V4(a##b) V4(a##c) V4(a##d)
#define V64(a) V16(a##a) V16(a##b) V16(a##c) V16(a##d)
struct CEntView {
 V64(p) V64(q) V64(r) virtual void f192();
 virtual Vector vfunc193();
 char pad[0x206c - 4];
 int m206c;
};
void sub_10139610(int *, Vector *, int, int);
int sub_102f72c0(Vector *, Vector *, float);
int sub_10172830(CEntView *p)
{
    Vector a;
    sub_10139610(&p->m206c, &a, 0, 0);
    Vector b;
    b = p->vfunc193();
    return sub_102f72c0(&b, &a, 0.9f);
}
// END FUNCTION

// FUNCTION: 0x101728b0 size=0x26
#include "CBasePlayer.h"

// TARGET: CBasePlayer::sub_101728b0
void CBasePlayer::sub_101728b0()
{
	m_n20E8 = -1;
	m_b229A = 0;
	m_n1A84 = 0;
	m_n1A94 = 0;
	vfunc444();
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
		::sub_10139610(*(QAngle *)&m_vec206c, &forward, 0, 0);
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

// FUNCTION: 0x10172e40 size=0x6
#include "CSprayCan.h"
int CSprayCan::vfunc117()
{
    return -2147483648;
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
		::sub_10139610(*(QAngle *)&m_vec206c, &forward, 0, 0);
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
		::sub_10139610(*(QAngle *)&m_vec206c, &forward, 0, 0);
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

// FUNCTION: 0x10173f90 size=0x37f
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CBaseMoneyObject.h"
#include "CGameRules.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CUnknown10203240.h"
#include "ScopeTrace.h"

#define PS(n) virtual void p##n();
#define PS10(a) PS(a##0) PS(a##1) PS(a##2) PS(a##3) PS(a##4) PS(a##5) PS(a##6) PS(a##7) PS(a##8) PS(a##9)
#define PS100(a) PS10(a##0) PS10(a##1) PS10(a##2) PS10(a##3) PS10(a##4) PS10(a##5) PS10(a##6) PS10(a##7) PS10(a##8) PS10(a##9)
struct CPlayerSlots
{
	PS10(0) PS10(1) PS10(2) PS10(3) PS10(4) PS10(5) PS10(6) PS10(7) PS10(8) PS10(9)
	PS100(1) PS100(2)
	PS(300) PS(301)
	virtual char s302(CBaseCombatWeapon *pWeapon, int b);
	virtual char s303(CBaseCombatWeapon *pWeapon);
};
struct CPlayerSlots2
{
	PS10(0) PS10(1) PS10(2) PS10(3) PS10(4) PS10(5) PS10(6) PS10(7) PS10(8) PS10(9)
	PS100(1) PS100(2)
	PS10(30) PS10(31) PS10(32) PS10(33) PS10(34) PS10(35) PS10(36) PS10(37)
	PS(380) PS(381)
	virtual char s382(CBaseCombatWeapon *pWeapon);
	PS(383)
	virtual void s384(CBaseCombatWeapon *pWeapon);
};
struct CPickupCharView
{
	CBaseCombatWeapon *sub_1032d890(const char *pszName, int a);
	void sub_1032d380(CBaseCombatWeapon *pWeapon, int b);
};

struct CNameObj { virtual void v0(); virtual void v1(); virtual void v2(); virtual CNameObj *v3(); virtual void v4(); virtual const char *v5(); };
struct CHolderView { char pad[0x40]; CNameObj *m_pName; };
struct CFlagsUnit
{
	char pad[0x44];
	unsigned short m_usSolidFlags;	// +0x2b4 of the weapon
	void sub_100dc580(unsigned int flags);
	void AddSolidFlags(int flags) { sub_100dc580(m_usSolidFlags | flags); }
};
struct CWeaponSolidView
{
	char pad[0x26c];
	const char *m_pszName;
	CFlagsUnit m_Collision;
	void AddSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_pszName ? m_pszName : g_106b8540);
		m_Collision.AddSolidFlags(flags);
	}
};
extern int g_107255e4;
extern CGameRules *g_1070ba0c;
extern CUnknown10203240 g_1074e968;
extern char g_1055f710[];
extern char g_1058789c[];
void sub_1012c900(CBaseCombatWeapon *p);
void sub_101cd940(CBaseCombatWeapon *p);
void sub_101cecf0(CBasePlayer *p, int n, char *buf);
__declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);

// TARGET: CBasePlayer::sub_10173f90
char CBasePlayer::sub_10173f90(CBaseCombatWeapon *pWeapon, int a, int b, int c)
{
	if (pWeapon->sub_102521f0() == 0 && ((CPlayerSlots2 *)this)->s382(pWeapon) && g_1070ba0c->vfunc47((CBaseEntity *)this, (CBaseEntity *)pWeapon)) {
		CBaseMoneyObject *pMoney = (CBaseMoneyObject *)__RTDynamicCast(pWeapon, 0, g_1055f710, g_1058789c, 0);
		if (pMoney) {
			sub_10340e50(pMoney->sub_103f5800());
			sub_101cd940((CBaseCombatWeapon *)pMoney);
			return 0;
		}
		CHolderView *pHolder = (CHolderView *)pWeapon->m_pEdict2e0;
		const char *pszName;
		if (!pHolder->m_pName)
			pszName = g_106b8540;
		else
			pszName = pHolder->m_pName->v3()->v5();
		CBaseCombatWeapon *pExisting = ((CPickupCharView *)this)->sub_1032d890(pszName, pWeapon->vfunc296());
		if (pExisting && ((CPlayerSlots *)this)->s303(pWeapon)) {
			if (pWeapon->vfunc371()) {
				int n = *(int *)((char *)pExisting + 0x8d0);
				if (n >= *(int *)((char *)pExisting->sub_102517b0() + 0x4fea8))
					return 0;
				*(int *)((char *)pExisting + 0x8d0) = n + 1;
				sub_1012c900(pWeapon);
				sub_101cd940(pWeapon);
				return 0;
			}
			((CPlayerSlots2 *)this)->s384(pWeapon);
			for (int i = 0; i < 2; i++) {
				if (pWeapon->vfunc277(i) && pWeapon->vfunc280(i))
					return 0;
			}
			sub_1012c900(pWeapon);
			sub_101cd940(pWeapon);
			return 0;
		}
		if (!sub_10334c20(pWeapon))
			return 0;
		if (!((CPlayerSlots *)this)->s302(pWeapon, b))
			return 0;
		pWeapon->sub_102500d0();
		((CWeaponSolidView *)pWeapon)->AddSolidFlags(4);
		pWeapon->vfunc66();
		((CPickupCharView *)this)->sub_1032d380(pWeapon, a);
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		if (!(char)a || (char)c) {
			pWeapon->vfunc333(0x16, 1, 0, 0, 0, 0);
			char buf[0x3f];
			Q_snprintf(buf, 0x3f, g_1074e968.sub_10203240("UIHudFeedbackStrs")->sub_10202a10(3), (char *)pWeapon->sub_102517b0() + 0x88);
			sub_101cecf0(this, 0x1d, buf);
		}
		return 1;
	}
	if (g_107255e4)
		sub_101cd940(pWeapon);
	return 0;
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
    if (EHandle_Get(m_hEa4.m_Index) == (void *)pWeapon)
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

// FUNCTION: 0x10174550 size=0x12
struct CFlagSet10174550 {
    char pad0[0x1f14];
    bool field1f14;
    void sub_10174550(bool v);
};
void CFlagSet10174550::sub_10174550(bool v)
{
    field1f14 = v != 0;
}
// END FUNCTION

// FUNCTION: 0x10174580 size=0x536
#include "CNPC_VTzimisce.h"
#include "CBasePlayer.h"
struct EV {
	CBP_V10(a0) CBP_V10(a1) CBP_V10(a2) CBP_V1(a30) CBP_V1(a31)
	virtual char vfunc32(CBasePlayer *p);
	CBP_V1(a33)
	virtual int vfunc34(CBasePlayer *p);
	virtual int vfunc35(CBasePlayer *p);
	CBP_V1(a36) CBP_V1(a37)
	virtual EV *vfunc38(CBasePlayer *p);
	CBP_V10(b0) CBP_V10(b1) CBP_V10(b2) CBP_V10(b3) CBP_V10(b4) CBP_V10(b5) CBP_V10(b6) CBP_V10(b7) CBP_V10(b8) CBP_V10(b9) CBP_V10(b10)
	CBP_V1(b110) CBP_V1(b111) CBP_V1(b112) CBP_V1(b113) CBP_V1(b114) CBP_V1(b115) CBP_V1(b116) CBP_V1(b117) CBP_V1(b118)
	virtual char vfunc158();
	CBP_V100(c0) CBP_V1(c100) CBP_V1(c101) CBP_V1(c102) CBP_V1(c103) CBP_V1(c104) CBP_V1(c105) CBP_V1(c106) CBP_V1(c107)
	virtual void vfunc267();
	CBP_V10(d0) CBP_V1(d10) CBP_V1(d11) CBP_V1(d12) CBP_V1(d13) CBP_V1(d14) CBP_V1(d15) CBP_V1(d16)
	virtual EV *vfunc285();
	CBP_V100(e0) CBP_V10(e1) CBP_V1(e20) CBP_V1(e21) CBP_V1(e22) CBP_V1(e23) CBP_V1(e24) CBP_V1(e25) CBP_V1(e26) CBP_V1(e27)
	virtual int vfunc404(CBasePlayer *p);
	int m_n4;
	char pad8[0x98 - 8];
	EV *p98;
	EV *p9c;
	char pad_a0[0x19c - 0xa0];
	unsigned int f19c;
	char pad_1a0[0x2e0 - 0x1a0];
	int edict;
	char pad_2e4[0x1480 - 0x2e4];
	char b1480;
	char pad_1481[0x647c - 0x1481];
	EHANDLE h647c;
};
struct EVHolder { EV *sub_101be1f0(CBasePlayer *p); };
extern char g_1072c540[];
EV *sub_104115b0(CBasePlayer *p, int a);
#define HH(off) (*(EHANDLE *)((char *)this + (off)))

void CBasePlayer::sub_10174580()
{
	if (m_iHealth <= 0) {
		m_n1EA8 = 0;
		m_n1E90 = 0;
		m_n1EA0 = 0;
		m_n1EA4 = 0;
		m_n1ECC = 0;
		return;
	}
	if (HH(0xfe8).Get()) {
		int ed = ((EV *)HH(0xfe8).Get())->edict;
		m_n1ED4 = engine->vfunc35(ed);
	} else
		m_n1ED4 = 0;
	if (!HH(0x1040).Get())
		m_n1E9C = 0;
	else {
		int ed = ((EV *)HH(0x1040).Get())->edict;
		m_n1E9C = engine->vfunc35(ed);
	}
	m_n1EA8 = 0;
	if (!((m_nTarget153c != -1 && HH(0x1538).Get()) || HH(0xfe8).Get() || HH(0x1040).Get()
		|| sub_1000306c() || sub_1017d630() || sub_101618a0())) {
		m_b1E8C = 1;
		m_n1E90 = 0;
		EV *weapon = (EV *)sub_1032e7b0();
		EV *ent = (EV *)HH(0x1040).Get();
		int mode = 0;
		char b = 0;
		if ((char)(int)weapon == -1) { m_n1E94 = sub_10182780(); } else { m_n1E94 = sub_10182780(); }
		m_n1E98 = sub_10182810();
		if (!ent) {
			ent = ((EVHolder *)g_1072c540)->sub_101be1f0(this);
			if (ent) {
				mode = 0x13;
			} else {
				ent = sub_104115b0(this, 1);
				if (ent) {
					if (ent->vfunc32(this)) {
						EV *w2 = (*(EV *volatile *)&weapon);
						if (w2)
							w2->vfunc267();
						mode = 9;
					}
				} else {
					ent = (EV *)sub_10167470(1);
					b = 1;
					if (!ent) {
						if (HH(0x1cb8).Get())
							ent = (EV *)HH(0x1cb8).Get();
						if (!ent) {
							if (HH(0x1cbc).Get())
								ent = (EV *)HH(0x1cbc).Get();
							if (!ent) {
								if (!weapon)
									goto clear;
								ent = weapon->vfunc285();
								b = 0;
								if (!ent)
									goto clear;
							}
						}
					}
				}
			}
		}
		{
			ent = ent->vfunc38(this);
			if (ent) {
				int ed = ent->edict;
				m_n1E90 = engine->vfunc35(ed);
				m_n1EA0 = ent->vfunc34(this);
				if (mode)
					m_n1EA4 = mode;
				else if (b)
					m_n1EA4 = ent->vfunc35(this);
				else
					m_n1EA4 = 0;
				if (m_n1EA4 == 0xe || m_n1EA4 == 0xf)
					m_b1E8C = 0;
				EV *z = ent->p9c;
				if (!z || (z->f19c & 0x40) || !z->vfunc158() || !z->b1480)
					return;
				m_n1EA8 = 3;
				EV *w = ent->p98;
				if (!w)
					return;
				if (w->h647c.Get()) {
					m_n1EA8 = 1;
					return;
				}
				switch (w->vfunc404(this)) {
				case 1:
					m_n1EA8 = 2;
					break;
				case 3:
					m_n1EA8 = 1;
					break;
				}
				return;
			}
		}
	clear:
		m_n1E90 = 0;
		m_n1EA0 = 0;
		m_n1EA4 = 0;
		m_n1EA8 = 0;
		m_n1ECC = 0;
		return;
	}
	m_b1E8C = 0;
	m_n1E94 = 0;
	m_n1E90 = 0;
	m_n1EA0 = 0;
	m_n1EA4 = 0;
	m_n1ECC = 0;
}
// END FUNCTION

// FUNCTION: 0x10174c10 size=0x94
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "Vector.h"

struct CDebugX { char m_pad[0x460]; int m_flag; };
extern CDebugX *g_1072c464;
void sub_101cee20(float size, Vector origin, Vector angles, int flags);

typedef float *(__fastcall *PFN_GetVec)(void *);

void CBaseCombatCharacter::sub_10174c10()
{
    if (g_1072c464->m_flag)
        sub_101cee20(5.0f, *(Vector *)((PFN_GetVec)(*(void ***)this)[217])(this), *(Vector *)((PFN_GetVec)(*(void ***)this)[219])(this), 0);
    CBaseCombatWeapon *pWeapon = (CBaseCombatWeapon *)sub_1032e7b0();
    if (gpGlobals->curtime > *(float *)((char *)this + 0x1564) && pWeapon)
        pWeapon->vfunc318();
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
	unsigned int h = m_hTarget1538.m_Index;
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13) && s->m_pEntity != 0 && m_nTarget153c != -1)
			return;
	}
	if (m_pVehicle) {
		m_pVehicle->vfunc10(this);
		return;
	}
	if (!(gpGlobals->curtime < m_flNextAttack1564) && !vfunc412()) {
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

// FUNCTION: 0x10174df0 size=0x20
#include "CBaseEntity.h"
#include "CBaseCombatWeapon.h"

CBaseEntity *__fastcall sub_1032e7b0(void *self);

// TARGET: sub_10174df0
void __fastcall sub_10174df0(void *self)
{
	if (sub_1032e7b0(self))
		((CBaseCombatWeapon *)sub_1032e7b0(self))->vfunc324();
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

// FUNCTION: 0x10174f80 size=0x18e
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
#define PV_V(n) virtual void v##n();
#define PV_V10(p) PV_V(p##0) PV_V(p##1) PV_V(p##2) PV_V(p##3) PV_V(p##4) PV_V(p##5) PV_V(p##6) PV_V(p##7) PV_V(p##8) PV_V(p##9)
struct CPlayerSlotsX {
    PV_V10(0) PV_V10(1) PV_V10(2) PV_V10(3) PV_V10(4) PV_V10(5) PV_V10(6) PV_V10(7) PV_V10(8) PV_V10(9)
    PV_V10(10) PV_V10(11) PV_V10(12) PV_V10(13) PV_V10(14)
    PV_V(150) PV_V(151) PV_V(152) PV_V(153) PV_V(154) PV_V(155) PV_V(156) PV_V(157)
    virtual bool vfunc158();
};
struct CGlobalObjX {
    char m_pad[0x4ac];
    int m_n4ac;
};
CGlobalObjX *sub_1023bd00();
static inline bool HandleValid(unsigned int h)
{
    if (h != 0xffffffff) {
        CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
        if (s->m_Serial == (int)(h >> 13) && s->m_pEntity)
            return true;
    }
    return false;
}
struct CPlayerUnit : CBasePlayer {
    char sub_10175180();
    int sub_10174f80();
};

// TARGET: CPlayerUnit::sub_10174f80
int CPlayerUnit::sub_10174f80()
{
    if (HandleValid(*(unsigned int *)((char *)this + 0xfe8)))
        return 2;
    if (*(int *)((char *)this + 0x153c) != -1 && HandleValid(*(unsigned int *)((char *)this + 0x1538)))
        return 3;
    if (HandleValid(*(unsigned int *)((char *)this + 0x1040)))
        return 4;
    if (sub_10175180())
        return 7;
    if (HandleValid(*(unsigned int *)((char *)this + 0x19c0)))
        return 6;
    if (HandleValid(*(unsigned int *)((char *)this + 0x19cc)))
        return 6;
    if (sub_1000306c())
        return 6;
    if (sub_101618a0())
        return 6;
    if (m_nUseEdictIndex1EB8)
        return 1;
    if (sub_1023bd00() && sub_1023bd00()->m_n4ac)
        return 1;
    return ((CPlayerSlotsX *)this)->vfunc158() ? 0 : 5;
}
// END FUNCTION

// FUNCTION: 0x10175180 size=0x74
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define HUN(p) TEN(p##0) TEN(p##1) TEN(p##2) TEN(p##3) TEN(p##4) TEN(p##5) TEN(p##6) TEN(p##7) TEN(p##8) TEN(p##9)
struct E0 { HUN(a) };
struct Ent : E0 { TEN(b0) TEN(b1) TEN(b2) virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual int Slot138(); };
struct EntInfo { void *ent; unsigned int serial; int pad; };
struct EntList {
    int vptr;
    EntInfo arr[1];
};
extern EntList *g_10566458;
struct EHandle {
    unsigned int m_Index;
    Ent *Get() const
    {
        if (m_Index == 0xffffffff)
            return 0;
        const EntInfo *p = &g_10566458->arr[m_Index & 0x1fff];
        if (p->serial == (m_Index >> 13))
            return (Ent *)p->ent;
        return 0;
    }
};
struct Holder {
    char pad[0x1db0];
    EHandle m_hEnt;
};

bool __fastcall sub_10175180(Holder *self)
{
    if (self->m_hEnt.Get() != 0 && self->m_hEnt.Get()->Slot138() == 3)
        return true;
    return false;
}
// END FUNCTION

// FUNCTION: 0x10175220 size=0x49
#include "CBasePlayer.h"

int CBasePlayer::sub_10175220()
{
	if (sub_10175180())
		return 0x8c;
	if (m_b2454 & 1)
		return 0x10;
	if (sub_10146a80())
		return 0x28;
	return (MoveType3e0() < 3) ? 0 : 0xf;
}
// END FUNCTION

// FUNCTION: 0x10175290 size=0x9c
#include "CBasePlayer.h"

struct EntBase {
	char m_pad0000[0x45c];
	int m_n45c;
};
struct EntInfo {
	EntBase *m_pEntity;
	int m_serial;
	int m_unused;
};
extern char *g_10566458;

static inline EntBase *GetEnt(unsigned int h)
{
	if (h != 0xffffffff) {
		EntInfo *e = &((EntInfo *)(g_10566458 + 4))[h & 0x1fff];
		if (e->m_serial == (int)(h >> 13))
			return e->m_pEntity;
	}
	return 0;
}

int CBasePlayer::sub_10175290()
{
	int now = engine->vfunc120();
	if (m_n1E0C + 5 < now)
		m_n1E08 = -1;
	if (m_n1E08 > 0)
		return m_n1E08;
	volatile unsigned int *ph = &m_hEnt1E04;
	EntBase *e = GetEnt(*ph);
	if (!e)
		return 0;
	e = GetEnt(*ph);
	return !e ? 0 : e->m_n45c;
}
// END FUNCTION

// FUNCTION: 0x10175360 size=0x2a
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

void CAI_BaseNPC::sub_10175360(CBaseEntity *pEnt)
{
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x1e04);
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x101753a0 size=0x25
#include "CTriggerEnvAudio.h"


// TARGET: CTriggerEnvAudio::sub_101753a0
void CTriggerEnvAudio::sub_101753a0(int value)
{
    *(int *)((char *)this + 0x1e08) = value;
    *(int *)((char *)this + 0x1e0c) = engine->vfunc120();
}
// END FUNCTION

// FUNCTION: 0x101753e0 size=0x7
struct CUnknown101753e0 { int sub_101753e0(); };
int CUnknown101753e0::sub_101753e0()
{
    return *(int *)((char *)this + 0x1e08);
}
// END FUNCTION

// FUNCTION: 0x10175400 size=0x169
#include "CBasePlayer.h"
#include "CSingleUserRecipientFilter.h"

extern int g_1072607c;
struct CFadeTimer { float sub_101e8bb0(); };
extern CFadeTimer g_10739d08;

// TARGET: CBasePlayer::sub_10175400
void CBasePlayer::sub_10175400(char bFade)
{
	CSingleUserRecipientFilter filter(this);
	filter.sub_1019cf50();
	int nAmount = 0;
	unsigned char nFlags;
	if (bFade) {
		double flPercent = (*(float *)((char *)this + 0x1478) - gpGlobals->curtime) / g_10739d08.sub_101e8bb0() * 100.0;
		if (flPercent > 100.0)
			flPercent = 100.0;
		else if (flPercent < 1.0)
			flPercent = 1.0;
		nAmount = (int)flPercent;
		nFlags = 0x81;
	} else {
		nFlags = 0x82;
	}
	engine->vfunc65(&filter, g_1072607c);
	engine->vfunc67(nFlags);
	engine->vfunc67(nAmount);
	engine->vfunc67(0);
	engine->vfunc67(0);
	engine->vfunc66();
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
	if (HGet(m_hTarget1538.m_Index) && m_nTarget153c != -1 && m_nTargetMode1540 == 8)
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
	if (!(HGet(m_hTarget1538.m_Index) && m_nTarget153c != -1 && m_nTargetMode1540 == 8)) {
		CBasePlayer *pTarget = ((const HView6 *)&m_h149c.m_Index)->Get();
		if (!pTarget && HGet(m_hTarget1538.m_Index) && m_nTarget153c == 0)
			pTarget = HGet2(m_hTarget1538.m_Index);
		if (HGet(m_h149c.m_Index) || (pTarget && m_b14a8)) {
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
	if (m_field146c != M(int, 0x1b68)) {
		if (g_10726068) {
			engine->vfunc65(&user, g_10726068);
			engine->vfunc67(m_field146c);
			engine->vfunc66();
		}
		M(int, 0x1b68) = m_field146c;
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

// FUNCTION: 0x101764a0 size=0x1a
struct CUnk101764a0
{
	void sub_100b3580(int flags);
	void sub_100b3640(int flags);
	void sub_101764a0(char b);
};

// TARGET: sub_101764a0
void CUnk101764a0::sub_101764a0(char b)
{
	if (b == 0) {
		sub_100b3580(0x20);
	} else {
		sub_100b3640(0x20);
	}
}
// END FUNCTION

// FUNCTION: 0x101764d0 size=0x39
struct CUnknown10725e74
{
	virtual void vfunc0();
	virtual bool vfunc1();
	char pad[0x2c - 4];
	int m_n2c;
};
struct SGlobals14 { char pad[0x14]; int m_n14; };
extern CUnknown10725e74 *g_10725e74;
extern int g_1070ba3c;
extern SGlobals14 *g_1070b228;

inline int Helper()
{
	if (g_10725e74->vfunc1())
		return 0;
	return g_10725e74->m_n2c;
}

char sub_101764d0()
{
	if (!Helper())
		return 0;
	if (g_1070ba3c == 3)
		return 0;
	return g_1070b228->m_n14 <= 1;
}
// END FUNCTION

// FUNCTION: 0x10176520 size=0x334
#include "vampire.h"
#include "CBasePlayer.h"
#include "Vector.h"
#include "QAngle.h"

#define RV1(p) virtual void p();
#define RV10(p) RV1(p##0) RV1(p##1) RV1(p##2) RV1(p##3) RV1(p##4) RV1(p##5) RV1(p##6) RV1(p##7) RV1(p##8) RV1(p##9)
struct CRulesView10176520
{
	RV10(a) RV10(b) RV10(c) RV10(d)
	virtual char vfunc40();
};

#define RV100(p) RV10(p##0) RV10(p##1) RV10(p##2) RV10(p##3) RV10(p##4) RV10(p##5) RV10(p##6) RV10(p##7) RV10(p##8) RV10(p##9)
struct CBasePlayerV389	// slot 389 called with the hidden return pointer spelled out
{
	RV100(p0) RV100(p1) RV100(p2) RV10(p30) RV10(p31) RV10(p32) RV10(p33) RV10(p34) RV10(p35) RV10(p36) RV10(p37)
	RV1(p380) RV1(p381) RV1(p382) RV1(p383) RV1(p384) RV1(p385) RV1(p386) RV1(p387) RV1(p388)
	virtual void vfunc389(Vector *pOut, const Vector *pOrigin);
};

void sub_10139610(const QAngle &angles, Vector *forward, Vector *right, Vector *up);
char sub_101764d0();
extern CRulesView10176520 *g_1070ba0c;
extern int g_1070ba3c;

inline const QAngle &EyeAnglesOf(CBasePlayer *p) { return *(QAngle *)&p->m_vec206c; }
inline const QAngle &PunchOf(CBasePlayer *p) { return *(QAngle *)&p->m_vec1EFC; }
inline void AngleVectors1(const QAngle &angles, Vector *forward) { sub_10139610(angles, forward, 0, 0); }

Vector CBasePlayer::sub_10176520(float flDelta)
{
	if (!sub_101764d0())
	{
		Vector forward;
		AngleVectors1(EyeAnglesOf(this) + PunchOf(this), &forward);
		return forward;
	}
	Vector eye;
	((CBasePlayerV389 *)this)->vfunc389(&eye, (Vector *)vfunc220());
	Vector *pRecoil = (Vector *)&m_f22A8;
	m_f22A8 = 0;
	m_f22AC = 0;
	m_f22B0 = 0;
	Vector punch = sub_10176930(eye, 16384.0f, flDelta);
	if (!g_1070ba0c->vfunc40())
		m_b20A8 = 0;
	if (punch.x > 180.0f)
		punch.x -= 360.0f;
	if (punch.x < -180.0f)
		punch.x += 360.0f;
	if (punch.y > 180.0f)
		punch.y -= 360.0f;
	if (punch.y < -180.0f)
		punch.y += 360.0f;
	if (punch.x > 25.0f)
		punch.x = 25.0f;
	else if (punch.x < -25.0f)
		punch.x = -25.0f;
	if (punch.y > 12.0f)
		punch.y = 12.0f;
	else if (punch.y < -12.0f)
		punch.y = -12.0f;
	if (1 == g_1070ba3c)
		*pRecoil = 0.9f * punch;
	else
		*pRecoil = *pRecoil * 0.3f + 0.7f * punch;
	Vector forward;
	AngleVectors1(*(QAngle *)pRecoil + (EyeAnglesOf(this) + PunchOf(this)), &forward);
	return forward;
}
// END FUNCTION

// FUNCTION: 0x10176930 size=0x647
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "globalvars.h"
#include "engineserver.h"
#include "UTIL_Trace.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "CUnknown1003ff80.h"
#include <math.h>

struct CAimRules { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual void v21(); virtual char vfunc22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31(); virtual char vfunc32(void *pPlayer, void *pEdict); };
extern CAimRules *g_1070ba0c;
struct CAimEntObj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *vfunc4(); };
struct CAimEdict { char m_pad[0x40]; CAimEntObj *m_pUnk40; char m_pad2[8]; char m_bFree4c; char m_pad3[0x78 - 0x4d]; };
struct CAimEnt : CEntityVSlots { char m_pad[0x1fc - 4]; int m_n1fc; char m_pad2[0x2e0 - 0x200]; void *m_pEdict2e0; char m_pad3[0x3e0 - 0x2e4]; int m_n3e0; };
struct CAimEntA8 { char m_pad[0xa8]; int m_na8; };
struct ST3 { void sub_10037300(const char *a, const char *b, const char *c); ~ST3() { (*g_109f3680)--; } };
struct CRayCtor1004f860 { void sub_1004f860(); };
struct CAimPod3 { int a, b, c; };
extern float g_1070d9d0[3];
void sub_10139610(const Vector &ang, Vector *f, Vector *r, Vector *u);
void sub_10139970(const Vector *in, Vector *out);

inline CAimEnt *AimInstance(CAimEdict *pent)
{
	ST3 st;
	st.sub_10037300("CBaseEntity::Instance", g_106b8540, g_106b8540);
	return pent->m_pUnk40 ? (CAimEnt *)pent->m_pUnk40->vfunc4() : 0;
}

Vector CBasePlayer::sub_10176930(Vector &vecSrc, float flDist, float flDelta)
{
	CAimEdict *pEdict = (CAimEdict *)engine->vfunc38(1);
	CGameTrace tr;
	((CUnknown1003ff80 *)&tr)->sub_1003ff80();
	if (!sub_101764d0()) {
		m_b20A8 = 0;
		return *(Vector *)g_1070d9d0;
	}
	Vector forward, right, up;
	::sub_10139610(m_vec206c + m_vec1EFC + *(Vector *)&m_f22A8, &forward, &right, &up);
	Vector bestdir = forward;
	float bestdot = flDelta;
	CAimEnt *bestent = 0;
	m_b20A8 = 0;
	{
		Vector vecEnd = vecSrc + forward * flDist;
		Ray_t ray;
		((CRayCtor1004f860 *)&ray)->sub_1004f860();
		ray.sub_1004f7a0(&vecSrc.x, &vecEnd.x);
		CTraceFilterSimple traceFilter(this, 0);
		g_1070b254->vfunc4(&ray, 0x46004003, (CTraceFilterNoCharacterCollide *)&traceFilter, &tr);
		if (g_10738960.sub_1005f190())
			sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0, 0, 1, -1.0f);
	}
	CAimEnt *pHit = (CAimEnt *)tr.m_pEnt;
	if (pHit && pHit->m_n1fc && (MoveType3e0() == 3 || pHit->m_n3e0 != 3) && (MoveType3e0() != 3 || pHit->m_n3e0 != 0)) {
		if (((CBaseEntity *)pHit)->sub_100b3700() & 0x10000)
			m_b20A8 = 1;
		return Vector(0, 0, 0);
	}
	for (int i = 1; i < gpGlobals->m_nEdicts; i++, pEdict++) {
		if (pEdict->m_bFree4c)
			continue;
		if (pEdict == (CAimEdict *)((CAimEnt *)this)->m_pEdict2e0)
			continue;
		if (!g_1070ba0c->vfunc32(this, pEdict))
			continue;
		CAimEnt *pEnt = AimInstance(pEdict);
		if (!pEnt)
			continue;
		if (!(((CBaseEntity *)pEnt)->sub_100b3700() & 0x10000))
			continue;
		if (!pEnt->slot158())
			continue;
		if (!((MoveType3e0() == 3 || pEnt->m_n3e0 != 3) && (MoveType3e0() != 3 || pEnt->m_n3e0 != 0)))
			continue;
		if (((CEntityVSlots *)this)->slot404(pEnt) != 1 && !((CAimEntA8 *)pEnt)->m_na8 && !g_1070ba0c->vfunc22())
			continue;
		Vector tmp;
		Vector center;
		const CAimPod3 *pc = (CAimPod3 *)pEnt->slot197((int)&tmp, (int)&vecSrc, 1, 0);
		int a = pc->a; int b = pc->b; int c = pc->c;
		CAimPod3 *pd = (CAimPod3 *)&center; pd->c = c; pd->b = b; pd->a = a;
		Vector dir;
		dir = center - vecSrc;
		VectorNormalize(dir);
		float dot = DotProduct(forward, dir);
		if (dot < 0.0f)
			continue;
		float size = (float)(fabs(DotProduct(up, dir)) * 0.5 + fabs(DotProduct(right, dir)));
		size *= ((center - vecSrc).Length() / flDist * 0.2 + 1.0);
		if (size > bestdot)
			continue;
		UTIL_TraceLine_Calls(vecSrc, center, 0x46004003, this, 0, &tr);
		if (tr.m_fraction == 1.0 || ((CAimEnt *)tr.m_pEnt)->m_pEdict2e0 == pEdict) {
			bestdot = size;
			bestent = pEnt;
			bestdir = dir;
		}
	}
	if (bestent) {
		Vector angles;
		sub_10139970(&bestdir, &angles);
		angles -= m_vec206c - m_vec1EFC;
		if (((CBaseEntity *)bestent)->sub_100b3700() & 0x10000)
			m_b20A8 = 1;
		return angles;
	}
	return Vector(0, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x10177120 size=0x67
#include "CBasePlayer.h"

#define V4(n) virtual void n##a(); virtual void n##b(); virtual void n##c(); virtual void n##d();
#define V16(n) V4(n##a) V4(n##b) V4(n##c) V4(n##d)
struct Svc
{
	V16(p) V16(q) V16(r) V16(s) V16(t)
	V4(u) V4(v)
	virtual void vfunc88(int a, int b, int c);
};
extern Svc *g_1070b22c;

void CBasePlayer::sub_10177120()
{
	if (m_f22A8 || m_f22AC) {
		*(volatile int *)&m_f22A8 = 0;
		*(int *)&m_f22AC = 0;
		*(volatile int *)&m_f22B0 = 0;
		g_1070b22c->vfunc88(*(volatile int *)&m_pEdict2e0, 0, 0);
	}
	m_b20A8 = 0;
}
// END FUNCTION

// FUNCTION: 0x101771b0 size=0x23
// TARGET: sub_101771b0
void __fastcall sub_101771b0(void *pSelf, int unused, int value)
{
    if (value > 0 && value < 8) {
        *(int *)((char *)pSelf + 0x22c4) = value;
        return;
    }
    *(int *)((char *)pSelf + 0x22c4) = -1;
}
// END FUNCTION

// FUNCTION: 0x101771f0 size=0x7
struct CUnknown101771f0 { int sub_101771f0(); };
int CUnknown101771f0::sub_101771f0()
{
    return *(int *)((char *)this + 0x22c4);
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

char CBasePlayer::vfunc388(void  *pWeapon, int a)
{
#define pWeapon ((CBaseEntity *)pWeapon)
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
							m_flNextAttack1564 = viewWeapon->sub_10091080(seq) + gpGlobals->curtime;
						}
						else
						{
							m_flNextAttack1564 = gpGlobals->curtime + 0.1f;
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
#undef pWeapon
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
	SetH443(*(unsigned int *)&m_hEa4, pEnt);
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

void CBasePlayer::vfunc383(CBaseCombatWeapon  *pWeapon, char bNoSwitch)
{
#define pWeapon ((CBaseEntity *)pWeapon)
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
#undef pWeapon
}
// END FUNCTION

// FUNCTION: 0x10177ab0 size=0x74
#include "CBaseCombatCharacter.h"
extern "C" int _strcmpi(const char *, const char *);
extern char g_106b8540[];
struct NameObj2 {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual NameObj2 *v3(); virtual void v4(); virtual const char *v5();
};
struct WHolder { char pad[0x40]; NameObj2 *m_p; };
struct WeaponX { char pad[0x2e0]; WHolder *m_pHolder; };
struct Helper : CBaseCombatCharacter {
    void *sub_10177ab0(const char *name);
};

void *Helper::sub_10177ab0(const char *name)
{
    int i = 0;
    do {
        if (sub_1032e8b0(i)) {
            sub_1032e8b0(i);
            WHolder *h = ((WeaponX *)sub_1032e8b0(i))->m_pHolder;
            const char *s;
            if (!h->m_p)
                s = g_106b8540;
            else
                s = h->m_p->v3()->v5();
            if (!_strcmpi(name, s))
                return sub_1032e8b0(i);
        }
        i++;
    } while (i < 0xe0);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10177b50 size=0x3c
#include "CBasePlayer.h"
#include "CBaseEntity.h"

struct CBasePlayerUnit177b50 : CBasePlayer
{
    void sub_10177b50();
};

// TARGET: sub_10177b50
void CBasePlayerUnit177b50::sub_10177b50()
{
    if (*(int *)((char *)this + 0x2304) == 0)
    {
        ((CBaseEntity *)this)->sub_100b3580(0x4020);
        ((CBaseEntity *)this)->vfunc93(0, 0);
        *(int *)((char *)this + 0x2304) = 1;
        this->vfunc444();
    }
}
// END FUNCTION

// FUNCTION: 0x10177ba0 size=0x31
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
void CBasePlayer::sub_10177ba0()
{
	if (m_n2304) {
		((CBaseEntity *)this)->sub_100b3640(0x4020);
		((CEntityVSlots *)this)->slot93(3, 0);
		m_n2304 = 0;
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
	::sub_10139610(*(QAngle *)&m_vec206c, &forward, 0, 0);
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
			vecEnd[j] = (*(const Vector *)((CEntityVSlots *)pEntity)->slot220())[j] + (((*(const Vector *)pCol->vfunc1())[j] + (*(const Vector *)pCol->vfunc2())[j]) * 0.75 + m_vecViewOffset[j] * 0.0);
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

// FUNCTION: 0x101780e0 size=0x27
// TARGET: CUnknown101780e0::sub_101780e0
#include "CUnknown101780e0.h"
#include "CWeaponOwner.h"
#include "CEntityVSlots.h"

void CUnknown101780e0::sub_101780e0()
{
	for (int i = 0; i < 2; i++)
	{
		CEntityVSlots *p = (CEntityVSlots *)((CWeaponOwner *)this)->sub_1015d680(i);
		if (p)
			p->slot266(0);
	}
}
// END FUNCTION

// FUNCTION: 0x10178120 size=0x7
struct CUnknown10178120 { int sub_10178120(); };
int CUnknown10178120::sub_10178120()
{
    return *(int *)((char *)this + 0x1d24);
}
// END FUNCTION

// FUNCTION: 0x10178140 size=0x1f
#include "CBaseEntity.h"
struct CUnk10178140
{
    char pad[0x1d2c];
    int m_1d2c;
    char pad2[0x1d40 - 0x1d30];
    EHANDLE m_1d40;
    char pad3[0x1dd0 - 0x1d44];
    int m_1dd0;
    char pad4[0x1dd8 - 0x1dd4];
    int m_1dd8;
    void sub_10178140();
};
void CUnk10178140::sub_10178140()
{
    m_1d2c = 0;
    m_1d40 = (CBaseEntity *)0;
    m_1dd0 = 0;
    m_1dd8 = 0;
}
// END FUNCTION

// FUNCTION: 0x10178170 size=0xcc
#include "CBasePlayer.h"
#include "CUnknown101800e0.h"


struct PlayerView10178170 {
	char pad0[0x1cf8];
	int m_nActTimer;
	char pad1[0x1dd0 - 0x1cfc];
	float m_f1dd0;
	char pad2[4];
	float m_f1dd8;
};

bool CBasePlayer::sub_10178170()
{
	PlayerView10178170 *v = (PlayerView10178170 *)this;
	if (sub_1017f8d0())
		return true;
	float flValue = ((CUnknown101800e0 *)this)->sub_101800e0(1);
	if (flValue > 0.0f && flValue >= gpGlobals->curtime - 10.0f)
		return true;
	float flTime = gpGlobals->curtime - 10.0f;
	if (0.0f > flTime)
		flTime = 0.0f;
	if (flTime < v->m_f1dd0)
		return true;
	if (flTime < v->m_f1dd8)
		return true;
	if (sub_1017f770() > 0)
		return true;
	if (sub_1017f8b0() > 0)
		return true;
	if (v->m_nActTimer != 0x7f7fffff)
		return true;
	return (bool)sub_10175180();
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

// FUNCTION: 0x10178470 size=0x3e
#include "CBasePlayer.h"
#include "CBaseCombatWeapon.h"
#include "CItemGKeyring.h"

// TARGET: CBasePlayer::sub_10178470
int CBasePlayer::sub_10178470(CBaseEntity *pKeyring)
{
	CItemGKeyring *pRing = dynamic_cast<CItemGKeyring *>((CBaseCombatWeapon *)sub_10335950("item_g_keyring"));
	if (pRing && pKeyring)
		return pRing->sub_10407e10((const char *)pKeyring);
	return -1;
}
// END FUNCTION

// FUNCTION: 0x101784c0 size=0x67
#include "CBasePlayer.h"
#include "CItemGKeyring.h"
#include "CUnknown10408220.h"

extern "C" void *__cdecl __RTDynamicCast(void *pObj, long vfDelta, void *pSrcType, void *pTargetType, int isReference);
extern char g_1055f710[];
extern char g_105869b8[];

void CBasePlayer::sub_101784c0(CBaseEntity *pOther)
{
	CItemGKeyring *pKeyring = (CItemGKeyring *)__RTDynamicCast(sub_10335950("item_g_keyring"), 0, g_1055f710, g_105869b8, 0);
	if (pKeyring && pOther) {
		pKeyring->sub_10407e90(pOther);
		sub_101835e0();
		if (m_pInventory) {
			sub_101836d0(pKeyring);
			((CUnknown10408220 *)pKeyring)->sub_10408220((CUtlMemory192 *)m_pInventory);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10178550 size=0x2b
struct CUnknown10178550 { int sub_10178550(int, int, int); };
int CUnknown10178550::sub_10178550(int a0, int a1, int a2)
{
    *(int *)((char *)this + 0x206c) = a0;
    *(int *)((char *)this + 0x2070) = a1;
    *(int *)((char *)this + 0x2074) = a2;
    *(int *)((char *)this + 0x207c) = 1;
    return a2;
}
// END FUNCTION

// FUNCTION: 0x10178590 size=0x91
#include "CBasePlayer.h"
#include "CEntityVSlots.h"
#include "QAngle.h"
void sub_10139970(const Vector &vecForward, QAngle &angles);

struct CBasePlayerUnit178590 : CBasePlayer
{
	void sub_10178550(Vector vecAngles);
};

void CBasePlayer::sub_10178590(Vector vecPos)
{
	Vector vecEar;
	((CEntityVSlots *)this)->slot193(&vecEar);
	Vector vecDir = vecPos - vecEar;
	VectorNormalize(vecDir);
	QAngle angles;
	sub_10139970(vecDir, angles);
	((CBasePlayerUnit178590 *)this)->sub_10178550(*(Vector *)&angles);
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

// FUNCTION: 0x101787a0 size=0x1e9
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "Vector.h"
#include "globalvars.h"

extern Vector g_1070d1b0;
void sub_10139970(const Vector *pDir, Vector *pAngles);
float sub_1013d580(float a, float b);

struct S101787a0Char {
	void sub_10331da0(Vector *pOut, int a);
};
struct S101787a0Ent {
	char m_pad0000[0x98];
	S101787a0Char *m_p98;
};

char CBasePlayer::sub_101787a0(CBaseEntity *pEnt, float flRate)
{
	CBasePlayer *pAim = (CBasePlayer *)pEnt;
	Vector vecTarget;
	if (((S101787a0Ent *)pEnt)->m_p98)
		((S101787a0Ent *)pEnt)->m_p98->sub_10331da0(&vecTarget, 0);
	else
		vecTarget = pAim->vfunc193();
	if (vecTarget == g_1070d1b0)
		vecTarget = pAim->vfunc192();
	Vector vecEye = vfunc193();
	Vector vecDir = vecTarget - vecEye;
	VectorNormalize(vecDir);
	Vector vecAng;
	sub_10139970(&vecDir, &vecAng);
	float flStep = flRate * gpGlobals->frametime;
	char bDone = 1;
	{
		float cur[3];
		float *ang = &vecAng.x;
		for (int i = 0; i < 3; i++) {
			float d = sub_1013d580(ang[i], m_vec206c[i]);
			float *c = &cur[i];
			if (d < -flStep) {
				*c -= flStep;
				if (cur[i] < ang[i])
					*c = ang[i];
				else
					bDone = 0;
			} else if (d > flStep) {
				*c += flStep;
				if (cur[i] > ang[i])
					*c = ang[i];
				else
					bDone = 0;
			} else {
				*c = ang[i];
			}
		}
		sub_10178550(*(Vector *)cur);
	}
	return bDone;
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
void CBasePlayer::vfunc259(void  *pEvent)
{
#define pEvent ((animevent_t *)pEvent)
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
#undef pEvent
}
// END FUNCTION

// FUNCTION: 0x10178d10 size=0x63
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CGameRules.h"
extern CGameRules *g_1070ba0c;
// TARGET: CBasePlayer::vfunc359
int CBasePlayer::vfunc359(int pEnt)
{
#define pEnt ((CBaseEntity *)pEnt)
    if (m_field146c > 0)
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
#undef pEnt
}
// END FUNCTION

// FUNCTION: 0x10178da0 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_10470e04[];	// CStripWeapons vftable
extern const char g_10587980[];

// TARGET: player_weaponstrip
DLL_EXPORT CBaseEntity *player_weaponstrip()
{
	void *mem = sub_100aa720(0x450);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_10470e04;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_10587980);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10178e10 size=0xd4
#include "CStripWeapons.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct RulesSlots
{
	SL10(a0) SL10(a1)
	virtual void b0(); virtual void b1();
	virtual bool IsDeathmatch();	// slot 22
};

struct EngineSlots
{
	SL10(a0) SL10(a1) SL10(a2)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
	virtual void b5(); virtual void b6(); virtual void b7();
	virtual void *PEntityOfEntIndex(int index);	// slot 38
};

struct UnkSlots
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual void *GetBaseEntity();	// slot 4
};

struct EdictT
{
	char m_pad0000[0x40];
	UnkSlots *m_pUnk;	// 0x40
};

struct PlayerSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6) SL10(a7) SL10(a8) SL10(a9)
	SL10(b0) SL10(b1) SL10(b2) SL10(b3) SL10(b4) SL10(b5) SL10(b6) SL10(b7) SL10(b8) SL10(b9)
	SL10(c0) SL10(c1) SL10(c2) SL10(c3) SL10(c4) SL10(c5) SL10(c6) SL10(c7) SL10(c8) SL10(c9)
	SL10(d0) SL10(d1) SL10(d2) SL10(d3) SL10(d4) SL10(d5) SL10(d6) SL10(d7) SL10(d8) SL10(d9)
	SL10(e0) SL10(e1) SL10(e2) SL10(e3)
	virtual void f0(); virtual void f1();
	virtual void RemoveAllItems(int bRemoveSuit);	// slot 442
};

struct ActivatorT
{
	char m_pad0000[0xa8];
	void *m_pPlayer;	// 0xa8
};

extern RulesSlots *g_1070ba0c;
extern EngineSlots *g_1070b22c;

static __forceinline PlayerSlots *Instance(EdictT *pEdict)
{
	g_109f3620[*g_109f3680].a = "CBaseEntity::Instance";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	PlayerSlots *pRet;
	if ((pEdict || (pEdict = (EdictT *)g_1070b22c->PEntityOfEntIndex(0)) != 0) && pEdict->m_pUnk)
		pRet = (PlayerSlots *)pEdict->m_pUnk->GetBaseEntity();
	else
		pRet = 0;
	--*g_109f3680;
	return pRet;
}

void CStripWeapons::vfunc173(void *pActivator, void *pCaller, int useType, float value)
{
	PlayerSlots *pPlayer = 0;
	if (pActivator && ((ActivatorT *)pActivator)->m_pPlayer) {
		pPlayer = (PlayerSlots *)pActivator;
	} else if (!g_1070ba0c->IsDeathmatch()) {
		pPlayer = Instance((EdictT *)g_1070b22c->PEntityOfEntIndex(1));
	}
	if (pPlayer)
		pPlayer->RemoveAllItems(0);
}
// END FUNCTION

// FUNCTION: 0x10178f30 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_10471294[];	// CRevertSaved vftable
extern const char g_105879b8[];

// TARGET: player_loadsaved
DLL_EXPORT CBaseEntity *player_loadsaved()
{
	void *mem = sub_100aa720(0x464);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_10471294;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105879b8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x10178fa0 size=0x6
#include "datamap.h"
#include "CRevertSaved.h"

extern datamap_t g_105836dc;

// TARGET: CRevertSaved::vfunc82
datamap_t *CRevertSaved::vfunc82()
{
	return &g_105836dc;
}
// END FUNCTION

// FUNCTION: 0x10178fc0 size=0x5
int sub_10179000(void);
int g_10725214 = ((int (*)(int))sub_10179000)(0);
// END FUNCTION

// FUNCTION: 0x10179000 size=0x1a
namespace lifted {
extern int g_105836dc;
extern int g_105836e0;
extern char g_10583724;
}
int sub_10179000()
{
    lifted::g_105836e0 = 7;
    lifted::g_105836dc = (int)&lifted::g_10583724;
    return (int)&lifted::g_105836dc;
}
// END FUNCTION

// FUNCTION: 0x10179030 size=0x53
#include "CRevertSaved.h"

void sub_101ce210(void *pColor, float a, float b, int flags);
void sub_10001532();

void CRevertSaved::vfunc173(CBaseEntity *a, CBaseEntity *b, int c, int d)
{
	float fadeTime = m_fade.m_flFadeTime;
	float hold = m_fade.m_flFadeHold;
	sub_101ce210(m_pad01a0, fadeTime, hold, 2);
	float t = m_flReload;
	m_flNextThink = t + gpGlobals->curtime;
	sub_100ac4e0((int)sub_10001532, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x101790b0 size=0x5e
#include "CBaseEntity.h"
#include "globalvars.h"

void sub_101ceb70(const char *p);
extern float g_104454c4;

struct SView179 {
	char pad[0x450];
	const char *m_psz450;
	float m_f454;
	float m_f458;
};
void __fastcall sub_1000e32c(SView179 *p);

void __fastcall sub_101790b0(SView179 *p)
{
	sub_101ceb70(p->m_psz450 ? p->m_psz450 : "");
	float fDelay = p->m_f458 - p->m_f454;
	if (fDelay > g_104454c4) {
		*(float *)((char *)p + 0x17c) = fDelay + gpGlobals->curtime;
		((CBaseEntity *)p)->sub_100ac4e0((int)sub_1000e32c, 0, 0);
		return;
	}
	sub_1000e32c(p);
}
// END FUNCTION

// FUNCTION: 0x10179130 size=0x20
#include "vampire.h"
// TARGET: sub_10179130
void sub_10179130()
{
    if (*((char *)gpGlobals + 0x30) == 0) {
        engine->vfunc59("reload\n");
    }
}
// END FUNCTION

// FUNCTION: 0x10179160 size=0x13
int sub_10179160(int a0, int a1, int a2)
{
    *(int *)((char *)a2) = (*(int *)((char *)a1)) & 0x1ff;
    return a1;
}
// END FUNCTION

// FUNCTION: 0x10179190 size=0x6
int sub_10179190()
{
    return 0x21;
}
// END FUNCTION

// FUNCTION: 0x101791b0 size=0xa
#include "SendTable.h"
SendTable g_10725d78;
// END FUNCTION

// FUNCTION: 0x10179230 size=0x5
int sub_10179270(void);
int g_10725d74 = ((int (*)(int))sub_10179270)(0);
// END FUNCTION

// FUNCTION: 0x10179270 size=0x96
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_10246700(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, int varProxy);	// SendPropVector
void sub_10003012();

extern SendTable g_10725d78;

// TARGET: sub_10179270
int sub_10179270()
{
	static const char *pTableName = "DT_PlayerState";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10007bfd("deadflag", 0, 4, 4, 1, 0, 0),
		sub_10246700("v_angle", 4, 12, 0, 4, 0.0f, -121121.121212f, (int)sub_10003012),
	};
	g_10725d78.sub_1000e8fe(props + 1, 2, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10179370 size=0xa
#include "SendTable.h"
SendTable g_10725088;
// END FUNCTION

// FUNCTION: 0x101793f0 size=0x5
int sub_10179430(void);
int g_10725084 = ((int (*)(int))sub_10179430)(0);
// END FUNCTION

// FUNCTION: 0x10179430 size=0x1ae
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10246af0(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_10246dc0(const char *pVarName, int offset, SendTable *pTable, void *proxy);	// SendPropDataTable
SendProp sub_10246510(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLowValue, float fHighValue, int varProxy);	// SendPropFloat
SendProp sub_101ab310(const char *pVarName, int offset, int sizeofVar);	// SendPropTime
void sub_102464d0();
void sub_10246300();
void sub_10179160();

extern SendTable g_10725088;
extern SendTable g_1072a47c;
extern SendTable *g_1058385c;

// TARGET: sub_10179430
int sub_10179430()
{
	static const char *pTableName = "DT_LocalPlayerExclusive";
	static SendProp props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("m_Local", 0x1e40, &g_1072a47c, (void *)sub_102464d0),
		sub_10246510("m_vecViewOffset[0]", 0x184, 4, 8, 0, -32.0f, 32.0f, (int)sub_10246300),
		sub_10246510("m_vecViewOffset[1]", 0x188, 4, 8, 0, -32.0f, 32.0f, (int)sub_10246300),
		sub_10246510("m_vecViewOffset[2]", 0x18c, 4, 10, 0, 0.0f, 128.0f, (int)sub_10246300),
		sub_10246510("m_flFriction", 0x3f0, 4, 8, 8, 0.0f, 4.0f, (int)sub_10246300),
		sub_10246af0("m_fFlags", 0x434, 4, 9, 1, 0, (void *)sub_10179160),
		sub_10246af0("m_fOnTarget", 0x20a8, 1, 2, 1, 0, 0),
		sub_101ab310("m_flTimeBase", 0x2358, 4),
		sub_101ab310("m_flNextThink", 0x17c, 4),
		sub_10246af0("m_lifeState", 0x200, 4, 3, 1, 0, 0),
	};
	g_10725088.sub_1000e8fe(props + 1, 10, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10179680 size=0x3b
#define CSV_ROW(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CSlot217View
{
	CSV_ROW(r0)
	CSV_ROW(r1)
	CSV_ROW(r2)
	CSV_ROW(r3)
	CSV_ROW(r4)
	CSV_ROW(r5)
	CSV_ROW(r6)
	CSV_ROW(r7)
	CSV_ROW(r8)
	CSV_ROW(r9)
	CSV_ROW(r10)
	CSV_ROW(r11)
	CSV_ROW(r12)
	CSV_ROW(r13)
	CSV_ROW(r14)
	CSV_ROW(r15)
	CSV_ROW(r16)
	CSV_ROW(r17)
	CSV_ROW(r18)
	CSV_ROW(r19)
	CSV_ROW(r20)
	virtual void r210();
	virtual void r211();
	virtual void r212();
	virtual void r213();
	virtual void r214();
	virtual void r215();
	virtual void r216();
	virtual float *s217();
};

// TARGET: sub_10179680
void sub_10179680(void *pEnt, int unused, float *out)
{
	float x = ((CSlot217View *)pEnt)->s217()[0];
	out[0] = x;
	float y = ((CSlot217View *)pEnt)->s217()[1];
	out[1] = y;
	float z = ((CSlot217View *)pEnt)->s217()[2];
	out[2] = z;
}
// END FUNCTION

// FUNCTION: 0x101796d0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_10725a70;
extern char g_10583860[];
ServerClassReg g_10725674("CBasePlayer", &g_10725a70, g_10583860);
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

// FUNCTION: 0x10179780 size=0xa
#include "SendTable.h"
SendTable g_10725a70;
// END FUNCTION

// FUNCTION: 0x10179800 size=0x5
int sub_10179840(void);
int g_10725a6c = ((int (*)(int))sub_10179840)(0);
// END FUNCTION

// FUNCTION: 0x10179840 size=0x7f2
#include "SendProp.h"

SendProp sub_10246af0(const char *pName, int a, int b, int c, int d, int e, void *pProxy);
SendProp sub_10246dc0(const char *pName, int a, int b, void *pProxy);
SendProp sub_10246ef0(int a, int b, const char *pName, void *pProxy);
SendProp sub_10246700(const char *pName, int a, int b, int c, int d, float lo, float hi, void *pProxy);
SendProp sub_101ab220(const char *pName, int a, int b);
SendProp sub_10246510(const char *pName, int a, int b, int c, int d, float lo, float hi, void *pProxy);
SendProp sub_10247030(const char *pTable, const char *pProp);
void sub_10246300();
void sub_102464d0();
void sub_10179190();
void sub_10179680();
void sub_102463c0();
void sub_1018beb0();

struct S_SendTable
{
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);
};

extern S_SendTable g_10725a70;
extern const char *g_1058386c;
extern int g_10619d54;
extern int g_10725d78;
extern int g_10725088;

int sub_10179840()
{
	static SendProp s_props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_10619d54, (void *)sub_102464d0),
		sub_10246dc0("pl", 0x2068, (int)&g_10725d78, (void *)sub_102464d0),
		sub_10246af0("m_bInVehicle", 0x20f4, 1, 1, 1, 0, 0),
		sub_101ab220("m_hVehicle", 0x20f8, 4),
		sub_10246af0("m_iAmmo[0]", 0x15a4, 4, 9, 1, 0, 0),
		sub_10246ef0(0x20, 4, "m_iAmmo", 0),
		sub_10246510("m_flWalkForwardSpeeds[0]", 0x1bc4, 4, 0xd, 8, -2048.0f, 2048.0f, (void *)sub_10246300),
		sub_10246ef0(8, 4, "m_flWalkForwardSpeeds", 0),
		sub_10246510("m_flWalkSideSpeeds[0]", 0x1be4, 4, 0xd, 8, -2048.0f, 2048.0f, (void *)sub_10246300),
		sub_10246ef0(8, 4, "m_flWalkSideSpeeds", 0),
		sub_10246510("m_flRunForwardSpeeds[0]", 0x1b84, 4, 0xd, 8, -2048.0f, 2048.0f, (void *)sub_10246300),
		sub_10246ef0(8, 4, "m_flRunForwardSpeeds", 0),
		sub_10246510("m_flRunSideSpeeds[0]", 0x1ba4, 4, 0xd, 8, -2048.0f, 2048.0f, (void *)sub_10246300),
		sub_10246ef0(8, 4, "m_flRunSideSpeeds", 0),
		sub_10246510("m_flSneakForwardSpeeds[0]", 0x1c04, 4, 0xd, 8, -2048.0f, 2048.0f, (void *)sub_10246300),
		sub_10246ef0(8, 4, "m_flSneakForwardSpeeds", 0),
		sub_10246510("m_flSneakSideSpeeds[0]", 0x1c24, 4, 0xd, 8, -2048.0f, 2048.0f, (void *)sub_10246300),
		sub_10246ef0(8, 4, "m_flSneakSideSpeeds", 0),
		sub_10246510("m_flMaxspeed", 0x2310, 4, 0xc, 8, 0.0f, 2048.0f, (void *)sub_10246300),
		sub_10246af0("m_iHealth", 0x210, 4, 0xa, 0, 0, 0),
		sub_10246af0("m_iVAttributesBase[0]", 0x10f0, 4, 4, 1, 0, 0),
		sub_10246ef0(0x23, 4, "m_iVAttributesBase", (void *)sub_10179190),
		sub_10246af0("m_iVAttributesBase[v_attribute_autolevel_template]", 0x1174, 4, 6, 0, 0, 0),
		sub_10246af0("m_iVAttributesBase[v_attribute_experience]", 0x1178, 4, 0xa, 1, 0, 0),
		sub_10246af0("m_iVAbilitiesBase[0]", 0x1210, 4, 4, 1, 0, 0),
		sub_10246ef0(0xd, 4, "m_iVAbilitiesBase", 0),
		sub_10246af0("m_iVDisciplinesBase[0]", 0x1280, 4, 4, 1, 0, 0),
		sub_10246ef0(0x11, 4, "m_iVDisciplinesBase", 0),
		sub_10246af0("m_iVActiveDisciplinesBase[0]", 0x1310, 4, 4, 1, 0, 0),
		sub_10246ef0(0x11, 4, "m_iVActiveDisciplinesBase", 0),
		sub_10246510("m_flClientBeginVActiveDisciplineTimers[0]", 0x1b20, 4, 0xd, 8, -2048.0f, 2048.0f, (void *)sub_10246300),
		sub_10246ef0(0x11, 4, "m_flClientBeginVActiveDisciplineTimers", 0),
		sub_10246510("m_flClientVActiveDisciplineDurations[0]", 0x1adc, 4, 0xd, 8, -2048.0f, 2048.0f, (void *)sub_10246300),
		sub_10246ef0(0x11, 4, "m_flClientVActiveDisciplineDurations", 0),
		sub_10246af0("m_tEffectList.m_iCount", 0x13dc, 4, 8, 0, 0, 0),
		sub_10246af0("m_tEffectList.m_teIDList[0]", 0x13e0, 4, 8, 1, 0, 0),
		sub_10246ef0(0x20, 4, "m_tEffectList.m_teIDList", 0),
		sub_10246af0("m_bIsFrenzyGrapple", 0x1476, 1, 1, 1, 0, 0),
		sub_10246af0("m_iVHistoryID", 0x13a0, 4, 9, 0, 0, 0),
		sub_10246af0("m_mpEquipData._iCurPackage", 0x1a1c, 4, 9, 0, 0, 0),
		sub_10246af0("m_iMoney", 0x13d8, 4, 0x20, 0, 0, 0),
		sub_10246af0("m_iClientFeedMaxBloodPool", 0x1a90, 4, 8, 0, 0, 0),
		sub_10246510("m_flNextFeedDuration", 0x1494, 4, 0xc, 8, 0.0f, 1.0f, (void *)sub_10246300),
		sub_10246af0("m_bIsDrinkingBlood", 0x1b6c, 1, 2, 0, 0, 0),
		sub_10246af0("m_bAllowResyncHandsOffset", 0x1b6d, 1, 2, 0, 0, 0),
		sub_10246af0("m_iLastDiscipline", 0x1b70, 4, 5, 0, 0, 0),
		sub_10246af0("m_bLastDiscScrolled", 0x1b74, 1, 2, 0, 0, 0),
		sub_10246af0("m_iLastDiscTgtMode", 0x1b78, 4, 5, 0, 0, 0),
		sub_10246af0("m_bObfWasMoving", 0x19f4, 1, 1, 1, 0, 0),
		sub_101ab220("m_hLastWeapon", 0xea4, 4),
		sub_10247030("DT_BaseEntity", "m_vecAbsOrigin"),
		sub_10246700("m_vecAbsOrigin", 0x404, 0xc, 0, 4, 0.0f, 0.0f, (void *)sub_10179680),
		sub_10246700("m_vecVelocity", 0x3d4, 0xc, 0, 4, 0.0f, -121121.121212f, (void *)sub_102463c0),
		sub_10246af0("m_iDebugFlags", 0x1c90, 4, 0x20, 1, 0, 0),
		sub_10246af0("m_iDebugStealthFeat", 0x1c94, 4, 0x20, 1, 0, 0),
		sub_10246af0("m_iDebugStealthLight", 0x1c98, 4, 0x20, 1, 0, 0),
		sub_10246af0("m_iDebugStealthSound", 0x1c9c, 4, 0x20, 1, 0, 0),
		sub_10246510("m_flStealthVisionScalar", 0x1c70, 4, 0xc, 8, 0.0f, 64.0f, (void *)sub_10246300),
		sub_10246510("m_flStealthHearingDist", 0x1c78, 4, 0xc, 8, 0.0f, 2048.0f, (void *)sub_10246300),
		sub_10246af0("m_bIsSpectator", 0x19f6, 1, 1, 1, 0, 0),
		sub_10246af0("m_bIsImmobilized", 0x19f7, 1, 1, 1, 0, 0),
		sub_10246af0("m_bfMPFlags", 0x1a18, 4, 0x20, 1, 0, 0),
		sub_10246dc0("localdata", 0, (int)&g_10725088, (void *)sub_1018beb0)
	};
	g_10725a70.sub_10247240(&s_props[1], 0x3f, g_1058386c);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1017a270 size=0xe
// TARGET: sub_1017a270
struct StatMaskView
{
    StatMaskView *sub_1017a2b0(int flags);
};

StatMaskView *__fastcall sub_1017a270(StatMaskView *p)
{
    p->sub_1017a2b0(0);
    return p;
}
// END FUNCTION

// FUNCTION: 0x1017a290 size=0x1
void sub_1017a290()
{
}
// END FUNCTION

// FUNCTION: 0x1017a2b0 size=0x208
#include "StatDefault2.h"
struct StatMaskView {
	int m_type;
	int m_idx;
	int m_a[11];
	int m_pad34;
	int m_b[11];
	void sub_1017a2b0(int type);
};
// TARGET: StatMaskView::sub_1017a2b0
void StatMaskView::sub_1017a2b0(int type)
{
	m_type = type;
	m_idx = 0;
	m_pad34 = 0;
	for (int k = 0; k < 11; k++) {
		m_a[k] = -1;
		m_b[k] = -1;
	}
	int n = 0;
	for (int i = 0; i < FindStatDefault2(m_type)->m_nFlags0c; i++) {
		if (FindStatDefault2(m_type)->m_pFlags18[i] & 1)
			m_a[n++] = i;
	}
	for (int j = 0; j < FindStatDefault2(m_type)->m_nFlags1c; j++) {
		if (FindStatDefault2(m_type)->m_pFlags28[j] & 1)
			m_idx = j;
	}
}
// END FUNCTION

// FUNCTION: 0x1017a550 size=0x3e2
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
#include "utlvector.h"
#include "CBaseEntity.h"
#include "CBaseCombatCharacter.h"
#include "CStatLoadout.h"
#include "engineserver.h"

extern void (*g_109f3630)(const char *fmt, ...);
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
struct CMPEquipView { char pad[0x2078]; const char *m_pszName2078; };

void CStatLoadout::sub_1017a550(CBaseEntity *pCharacter)
{
	const char *pszName = STRINGR(((CMPEquipView *)pCharacter)->m_pszName2078);
	int edict = pCharacter->m_pEdict2e0;
	g_109f3630("\nMP_Equip: %d: %s\n", engine->vfunc35(edict), pszName);
	CVStatListSet::Of(pCharacter)->Find(0)->sub_102012d0(0x22);
	StatDefault2 *pDef = FindStatDefault2(m_nType);
	const char *pszOld;
	if (m_nArmor != -1)
		pszOld = STRINGR(((const char **)FindStatDefault2(m_nType)->m_pNames20)[m_nArmor]);
	else
		pszOld = g_106b8540;
	pDef = FindStatDefault2(m_nType);
	g_109f3630("Armor: %s (old - %s)\n", STRINGR(((const char **)pDef->m_pNames20)[m_nArmorNew]), pszOld);
	for (int i = 0; i < FindStatDefault2(m_nType)->m_nFlags0c; i++) {
		if (m_nEquipNew[i] != -1) {
			pDef = FindStatDefault2(m_nType);
			const char *pszOldItem;
			if (m_nEquip[i] != -1)
				pszOldItem = STRINGR(((const char **)FindStatDefault2(m_nType)->m_pNames10)[m_nEquip[i]]);
			else
				pszOldItem = g_106b8540;
			pDef = FindStatDefault2(m_nType);
			g_109f3630("Item (%d): %s (old - %s)\n", i, STRINGR(((const char **)pDef->m_pNames10)[m_nEquipNew[i]]), pszOldItem);
		}
	}
	g_109f3630("\n");
}
// END FUNCTION

// FUNCTION: 0x1017aa40 size=0x71c
struct StatDefault2;
__forceinline StatDefault2 *StatDefault2_Default();
__forceinline StatDefault2 *FindStatDefault2(int type);
#include "CBaseEntity.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CStatLoadout.h"

struct StatOwner2V { StatDefault2 *sub_10183910(int type); };
struct StatOwnerV { CVStatList_t *sub_10183880(int type); };
extern StatOwner2V g_1073a338;
void sub_1021fee0(CBaseEntity *pCharacter, const char *pszName);
void sub_1021fe50(CBaseEntity *pCharacter, const char *pszName, int a);

inline const char *STRINGR(const char *const &s) { return s ? s : ""; }

void CStatLoadout::sub_1017aa40(CBaseEntity *pCharacter)
{
	sub_1017a550(pCharacter);
	if (m_nArmor) {
		int cost = FindStatDefault2(m_nType)->m_pCost24[m_nArmor];
		CVStatListSet::Of(pCharacter)->Find(0)->sub_10200fc0(0x22, cost);
		sub_1021fee0(pCharacter, STRINGR((const char *const &)FindStatDefault2(m_nType)->m_pNames20[m_nArmor]));
	}
	if (m_nArmorNew) {
		int cost = FindStatDefault2(m_nType)->m_pCost24[m_nArmorNew];
		if (cost <= CVStatListSet::Of(pCharacter)->Find(0)->sub_102012d0(0x22)) {
			CVStatListSet::Of(pCharacter)->Find(0)->sub_10201100(0x22, cost);
			sub_1021fe50(pCharacter, STRINGR((const char *const &)FindStatDefault2(m_nType)->m_pNames20[m_nArmorNew]), 0);
		}
	}
	for (int i = 0; i < FindStatDefault2(m_nType)->m_nFlags0c; i++) {
		if (m_nEquipNew[i] != -1) {
			if (m_nEquip[i] != -1) {
				int cost = FindStatDefault2(m_nType)->m_pCost14[m_nEquip[i]];
				CVStatListSet::Of(pCharacter)->Find(0)->sub_10200fc0(0x22, cost);
				sub_1021fee0(pCharacter, STRINGR((const char *const &)FindStatDefault2(m_nType)->m_pNames10[m_nEquip[i]]));
			}
		} else if (m_nEquip[i] != -1) {
			int cost = FindStatDefault2(m_nType)->m_pCost14[m_nEquip[i]];
			CVStatListSet::Of(pCharacter)->Find(0)->sub_10200fc0(0x22, cost);
			int idx = m_nEquip[i];
			sub_1021fee0(pCharacter, STRINGR((const char *const &)g_1073a338.sub_10183910(m_nType)->m_pNames10[idx]));
		}
	}
	for (int j = 0; j < g_1073a338.sub_10183910(m_nType)->m_nFlags0c; j++) {
		int nNew = m_nEquipNew[j];
		if (nNew != -1) {
			int cost = g_1073a338.sub_10183910(m_nType)->m_pCost14[nNew];
			if (cost <= ((StatOwnerV *)CVStatListSet::Of(pCharacter))->sub_10183880(0)->sub_102012d0(0x22)) {
				((StatOwnerV *)CVStatListSet::Of(pCharacter))->sub_10183880(0)->sub_10201100(0x22, cost);
				sub_1021fe50(pCharacter, STRINGR((const char *const &)g_1073a338.sub_10183910(m_nType)->m_pNames10[m_nEquipNew[j]]), 0);
			}
		}
	}
	m_nArmor = m_nArmorNew;
	for (int k = 0; k < 11; k++)
		m_nEquip[k] = m_nEquipNew[k];
}
// END FUNCTION

// FUNCTION: 0x1017b330 size=0x2cd
#include "CBaseEntity.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CStatLoadout.h"

void sub_1021fee0(CBaseEntity *pCharacter, const char *pszName);

inline const char *STRINGR(const char *const &s) { return s ? s : ""; }

void CStatLoadout::sub_1017b330(CBaseEntity *pCharacter)
{
	if (m_nArmor) {
		StatDefault2 *pDef = FindStatDefault2(m_nType);
		int cost = pDef->m_pCost24[m_nArmor];
		CVStatListSet::Of(pCharacter)->Find(0)->sub_10200fc0(0x22, cost);
		sub_1021fee0(pCharacter, STRINGR((const char *const &)FindStatDefault2(m_nType)->m_pNames20[m_nArmor]));
	}
	for (int i = 0; i < 11; i++) {
		if (m_nEquip[i] != -1) {
			StatDefault2 *pDef = FindStatDefault2(m_nType);
			int cost = pDef->m_pCost14[m_nEquip[i]];
			CVStatListSet::Of(pCharacter)->Find(0)->sub_10200fc0(0x22, cost);
			sub_1021fee0(pCharacter, STRINGR((const char *const &)FindStatDefault2(m_nType)->m_pNames10[m_nEquip[i]]));
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1017b6c0 size=0x14
struct CStatMaskUnit1017b6c0
{
	int m_n0;

	void sub_1017a2b0(int a);
	void sub_1017b6c0(int a, int b);
};

// TARGET: CStatMaskUnit1017b6c0::sub_1017b6c0
void CStatMaskUnit1017b6c0::sub_1017b6c0(int a, int b)
{
	sub_1017a2b0(0);
	m_n0 = b;
}
// END FUNCTION

// FUNCTION: 0x1017b6f0 size=0x136
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#define PV_V(n) virtual void v##n();
#define PV_V10(p) PV_V(p##0) PV_V(p##1) PV_V(p##2) PV_V(p##3) PV_V(p##4) PV_V(p##5) PV_V(p##6) PV_V(p##7) PV_V(p##8) PV_V(p##9)
#define PV_V100(p) PV_V10(p##0) PV_V10(p##1) PV_V10(p##2) PV_V10(p##3) PV_V10(p##4) PV_V10(p##5) PV_V10(p##6) PV_V10(p##7) PV_V10(p##8) PV_V10(p##9)
struct CPlayerVtX {
    PV_V100(0) PV_V100(1)
    PV_V10(20) PV_V10(21)
    virtual float *vfunc220();
    virtual float *vfunc221();
};
struct CPhysPartX {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void vfunc9(int a);
};
struct CPhysEnvX {
    PV_V10(0) PV_V10(1) PV_V10(2)
    PV_V(30) PV_V(31) PV_V(32) PV_V(33) PV_V(34) PV_V(35) PV_V(36)
    virtual CBasePlayerPartOwner *vfunc37(CBasePlayerPart *pPart);
};
extern CPhysEnvX *g_10723940;
struct objectparamsX {
    void *massCenterOverride;
    float mass;
    float inertia;
    float damping;
    float rotdamping;
    float rotInertiaLimit;
    const char *pName;
    void *pGameData;
    float volume;
    float dragCoefficient;
    float angDragCoefficient;
    bool enableCollisions;
};
extern objectparamsX g_1046ecb4;
struct CSolidX {
    char m_pad[0x610];
    objectparamsX params;
};
CPhysPartX *sub_1002e7e0(CBaseEntity *pEnt, int a, float *pOrigin, float *pAngles, const char *pszName, int bStatic, CSolidX *pSolid);
void sub_1002edd0(CBasePlayer *pPlayer);

// TARGET: CBasePlayer::sub_1017b6f0
void CBasePlayer::sub_1017b6f0(int a, const char *pszName, int b, const char *pszName2)
{
    CSolidX solid;
    solid.params = g_1046ecb4;
    solid.params.mass = 85.0f;
    solid.params.inertia = 1e24f;
    solid.params.enableCollisions = false;
    solid.params.dragCoefficient = 0;
    ((CPhysPartX *)(m_pPart2104 = (CBasePlayerPart *)sub_1002e7e0((CBaseEntity *)this, a, ((CPlayerVtX *)this)->vfunc220(), ((CPlayerVtX *)this)->vfunc221(), pszName, 0, &solid)))->vfunc9(0x10);
    ((CPhysPartX *)(m_pPart2108 = (CBasePlayerPart *)sub_1002e7e0((CBaseEntity *)this, b, ((CPlayerVtX *)this)->vfunc220(), ((CPlayerVtX *)this)->vfunc221(), pszName2, 0, &solid)))->vfunc9(0x10);
    ((CBaseEntity *)this)->sub_100a6490((int)m_pPart2104);
    sub_1002edd0(this);
    m_pPartOwner = g_10723940->vfunc37(m_pPart2104);
    if (((CBaseEntity *)this)->sub_100b3700() & 2)
        sub_1017bf10(1);
    else
        sub_1017bf10(0);
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
void CBasePlayer::vfunc229(int pOther)
{
#define pOther ((CBaseEntity *)pOther)
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
#undef pOther
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
    vfunc225();
    int w = Sub270().vfunc1();
    int h = Sub270().vfunc2();
    int stand = sub_1002dfe0(w, h);
    float maxs[3] = { 16.0f, 16.0f, 36.0f };
    float mins[3] = { -16.0f, -16.0f, 0.0f };
    int crouch = sub_1002dfe0((int)mins, (int)maxs);
    sub_1017b6f0(stand, "player_stand", crouch, "player_crouch");
}
// END FUNCTION

// FUNCTION: 0x1017bf10 size=0x10d
#include "CBaseEntity.h"
#include "CBasePlayer.h"
extern char g_1070d9d0[];

void CBasePlayer::sub_1017bf10(int mode)
{
	m_nPartMode = mode;
	switch (mode) {
	case 0:
		m_pPart2104->vfunc35(vfunc217(), g_1070d9d0, 0);
		m_pPart2108->vfunc21(0);
		m_pPart2104->vfunc21(1);
		m_pPartOwner->vfunc5(m_pPart2104);
		((CBaseEntity *)this)->sub_100a68f0((int)m_pPart2104);
		break;
	case 1:
		m_pPart2108->vfunc35(vfunc217(), g_1070d9d0, 0);
		m_pPart2104->vfunc21(0);
		m_pPart2108->vfunc21(1);
		m_pPartOwner->vfunc5(m_pPart2108);
		((CBaseEntity *)this)->sub_100a68f0((int)m_pPart2108);
		break;
	case 2:
		m_pPart2108->vfunc21(0);
		m_pPart2104->vfunc21(0);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1017c070 size=0x103
#include "CBaseEntity.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CUnknown1017c070.h"

void CUnknown1017c070::sub_1017c070(CBaseEntity *pEnt)
{
	EHANDLE h = pEnt;
	if (m_List.Find(h) == -1)
		m_List.AddToTail(h);
}
// END FUNCTION

// FUNCTION: 0x1017c1d0 size=0xf0
#include "CBasePlayer.h"
#include "CBaseEntity.h"
#include "utlvector.h"

void CBasePlayer::sub_1017c1d0(CBaseEntity *pEnt)
{
	if (pEnt) {
		EHANDLE h(pEnt);
		((CUtlVector<EHANDLE> *)&m_SimulationList)->FindAndRemove(h);
	}
}
// END FUNCTION

// FUNCTION: 0x1017c300 size=0x1f6
// The game compiled LookForGrappleVictim (0x101690b0) earlier in this unit: its declined header inline
// LookupEntity makes VC6 know the COMDAT 0x100290c0 here. A same-unit copy of block 0x101690b0, text for text.
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

// m_SimulatedByThisPlayer: a CUtlVector<EHANDLE> with the game's out-of-line Find / ShiftElementsLeft copies
struct CSimVec17c300 : CUtlVector<EHANDLE>
{
	int sub_101842a0(const EHANDLE *pHandle) const;	// Find (out-of-line copy)
	void sub_101850b0(int elem, int num);	// ShiftElementsLeft (out-of-line copy)
	int FindH(const EHANDLE &src) const
	{
		for (int i = 0; i < Count(); ++i) {
			if (Element(i) == src)
				return i;
		}
		return -1;
	}
	void RemoveH(int elem)
	{
		sub_101850b0(elem, 1);
		--m_Size;
	}
	void FindAndRemoveH(const EHANDLE &src)
	{
		int elem = FindH(src);
		if (elem != -1)
			RemoveH(elem);
	}
};
#define PV ((CSimVec17c300 *)&m_SimulationList)

// CBaseEntity::m_iEFlags (+0x268) accessors
struct CEntEFlagsView : CBaseEntity
{
	bool IsEFlagSet(int nEFlagMask) const { return (*(const int *)((const char *)this + 0x268) & nEFlagMask) != 0; }
	bool GetCheckUntouch() const { return IsEFlagSet(0x1000000); }	// EFL_CHECK_UNTOUCH
};

void CBasePlayer::sub_1017c300()
{
	ScopeTrace scope1("CBasePlayer::SimulatePlayerSimulatedEntities", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int i;
	for (i = PV->Count() - 1; i >= 0; i--) {
		CSimVec17c300 *pv = PV;
		EHANDLE h;
		h = pv->Element(i);
		CBaseEntity *e = h;
		if (!e) {
			int idx = pv->sub_101842a0(&h);
			if (idx != -1)
				pv->RemoveH(idx);
		} else {
			e->sub_10040390();
		}
	}
	ScopeTrace scope2("CBasePlayer::SimulatePlayerSimulatedEntities-untouch", m_name26c ? m_name26c : g_106b8540);
	int c = PV->Count();
	for (i = c - 1; i >= 0; i--) {
		EHANDLE h = PV->Element(i);
		CBaseEntity *e = h;
		if (!e) {
			PV->FindAndRemoveH(h);
			continue;
		}
		if (!((CEntEFlagsView *)e)->GetCheckUntouch())
			continue;
		e->sub_1003d490();
	}
	// NUMBERING DIAL (a workaround, not the game's code): VC6's C2 orders the two LookupEntity results of the
	// inline Find above by a hash of this function's temp numbers (rewriter 0x1fef0 -> 0x24175); the game's order
	// (the handle's lookup first) needs the induction temp's key at 0x17d20..0x17fe0, which these 12 dead blocks
	// give (11 or 12 work). They compile to nothing; the typedef dials do not move the key. 2026-11-18.
	{ int d0 = c * 3 + 1; }
	{ int d1 = c * 4 + 1; }
	{ int d2 = c * 5 + 1; }
	{ int d3 = c * 6 + 1; }
	{ int d4 = c * 7 + 1; }
	{ int d5 = c * 8 + 1; }
	{ int d6 = c * 9 + 1; }
	{ int d7 = c * 10 + 1; }
	{ int d8 = c * 11 + 1; }
	{ int d9 = c * 12 + 1; }
	{ int d10 = c * 13 + 1; }
	{ int d11 = c * 14 + 1; }
}
// END FUNCTION

// FUNCTION: 0x1017c580 size=0x53
#include "CBaseEntity.h"
#include "CBasePlayer.h"
struct CUnitP3 : CBasePlayer {
    void sub_1017c580();
};
void CUnitP3::sub_1017c580()
{
    for (int i = m_SimulationList.m_Size - 1; i >= 0; i--) {
        EHANDLE h = ((EHANDLE *)m_SimulationList.m_pMemory)[i];
        CBaseEntity *pEnt = h.Get();
        if (pEnt)
            pEnt->sub_100b3ee0();
    }
    m_SimulationList.m_Size = 0;
}
// END FUNCTION

// FUNCTION: 0x1017c600 size=0x77
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CUnknown1070b22c.h"
extern CUnknown1070b22c *g_1070b22c;
extern char g_10587ef4[];
extern char g_10587ee8[];
struct CBCCX {
    void sub_10323cc0(int a, int b, int c);
    void sub_10324080();
};
struct CBasePlayerUnit : CBasePlayer {
    void sub_1017c600(CBaseEntity *pEnt, char bLoot, int a, int b, int c);
};

// TARGET: CBasePlayerUnit::sub_1017c600
void CBasePlayerUnit::sub_1017c600(CBaseEntity *pEnt, char bLoot, int a, int b, int c)
{
    int edict = pEnt->m_pEdict2e0;
    m_nUseEdictIndex1EB8 = g_1070b22c->vfunc35(edict);
    m_bNotifyUse1EC0 = bLoot;
    if (!bLoot) {
        ((CBCCX *)pEnt)->sub_10323cc0(a, b, c);
        g_1070b22c->vfunc61(m_pEdict2e0, g_10587ef4);
    } else {
        ((CBCCX *)pEnt)->sub_10324080();
        g_1070b22c->vfunc61(m_pEdict2e0, g_10587ee8);
    }
}
// END FUNCTION

// FUNCTION: 0x1017c6a0 size=0x1a
struct CUnk1017c6a0
{
	char m_pad0000[0x1eb8];
	void *m_p1eb8;
	char m_pad1ebc[4];
	char m_b1ec0;

	char sub_1017c6a0();
};

// TARGET: sub_1017c6a0
char CUnk1017c6a0::sub_1017c6a0()
{
	if (m_p1eb8 != 0 && m_b1ec0 != 0) {
		return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1017c6d0 size=0x10c
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
#include "ScopeTrace.h"
#include "CVariantCopy.h"

extern char g_10543c6c[];
extern char g_10555f7c[];

struct EdictUnknown { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *vfunc4(); };
struct EdictX { char pad[0x40]; EdictUnknown *m_pUnk; };

void CBasePlayer::sub_1017c6d0()
{
    if (m_nUseEdictIndex1EB8 != 0 && m_bNotifyUse1EC0 != 0) {
        EdictX *pEdict = (EdictX *)engine->vfunc38(m_nUseEdictIndex1EB8);
        CBaseEntity *pEnt;
        {
            ScopeTrace trace(g_10543c6c, g_106b8540);
            if (pEdict == 0)
                pEdict = (EdictX *)engine->vfunc38(0);
            if (pEdict && pEdict->m_pUnk)
                pEnt = pEdict->m_pUnk->vfunc4();
            else
                pEnt = 0;
        }
        if (pEnt) {
            m_bNotifyUse1EC0 = 0;
            CVariantCopy v;
            *(char *)&v.m_value = 0;
            v.m_fieldType = 5;
            pEnt->vfunc118(g_10555f7c, (CBaseEntity *)this, (CBaseEntity *)this, v, 0);
        }
    }
    m_nUseEdictIndex1EB8 = 0;
}
// END FUNCTION

// FUNCTION: 0x1017c830 size=0x9a
#include "CBasePlayer.h"
#include "QuestJournal.h"
#include <string.h>
extern QuestJournal g_1074f8f8;

// TARGET: CBasePlayer::sub_1017c830
void CBasePlayer::sub_1017c830()
{
    g_1074f8f8.sub_10221270();
    for (int i = 0; i < *(int *)((char *)this + 0x1d74); i++) {
        char *rec = *(char **)((char *)this + 0x1d68) + i * 0x40;
        for (int j = 0; j < g_1074f8f8.m_field[8]; j++) {
            char *quest = g_1074f8f8.sub_10221b10(j);
            if (_strcmpi(*(char **)quest, rec) == 0) {
                *(int *)(rec + 0x30) = j;
                *(int *)(quest + 0x10) = *(int *)(rec + 0x34);
                *(int *)(quest + 0xc) = *(int *)(rec + 0x38);
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1017c900 size=0x1f2
#include "CBasePlayer.h"
#include "CEntityMessageFilter.h"
#include "engineserver.h"

// TARGET: CBasePlayer::sub_1017c900
void CBasePlayer::sub_1017c900(char bFlag)
{
	CEntityMessageFilter filter;
	int iEdict = m_pEdict2e0;
	int iClient = engine->vfunc35(iEdict);
	filter.sub_1019d2f0(iClient);
	filter.MakeReliable();
	engine->vfunc65(&filter, 0);
	engine->vfunc67(0x4e);
	engine->vfunc67(m_n1DAC);
	engine->vfunc66();
	engine->vfunc65(&filter, 0);
	engine->vfunc67(0x4d);
	int n = 0;
	for (int i = 0; i < m_nQuestRecords1D74; i++) {
		CBasePlayerQuestRecord *pRec = &m_pQuestRecords1D68[i];
		engine->vfunc71(pRec->m_nQuest30);
		engine->vfunc71(pRec->m_nStep38);
		engine->vfunc71(pRec->m_nOrder34);
		engine->vfunc67(pRec->m_bFlag3C);
		engine->vfunc71(bFlag != 0);
		n++;
		if (n >= 7) {
			engine->vfunc66();
			engine->vfunc65(&filter, 0);
			engine->vfunc67(0x4d);
			n = 0;
		}
	}
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x1017cb80 size=0x7b
#include "CUnknown1017cb80.h"
#include "QuestJournal.h"

extern int (*g_109f3870)(const void *, const char *, int);
extern QuestJournal g_1074f8f8;
extern "C" unsigned int __cdecl strlen(const char *);

int CUnknown1017cb80::sub_1017cb80(const char *name)
{
    int len = strlen(name);
    for (int i = 0; i < m_nRecs; i++) {
        CUnknown1017cb80_Rec *r = (CUnknown1017cb80_Rec *)((char *)m_pRecs + i * 0x40);
        if (g_109f3870(r, name, len) == 0)
            return *(int *)g_1074f8f8.sub_10221d60(r->m_quest, r->m_index);
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1017cc20 size=0x1cf
#include "CBasePlayer.h"
#include "QuestJournal.h"
#include "CUnknown10738964.h"
#include "globalvars.h"

extern QuestJournal g_1074f8f8;
extern CUnknown10738964 *g_107318bc;
extern "C" __declspec(dllimport) void *PyImport_AddModule(const char *);
extern "C" __declspec(dllimport) void *PyModule_GetDict(void *);
extern "C" __declspec(dllimport) void *PyRun_ConsoleString(const char *, int, void *, void *);
extern "C" __declspec(dllimport) void PyErr_Print();
extern "C" __declspec(dllimport) int Py_FlushLine();
extern "C" __declspec(dllimport) void PyErr_Clear();
extern "C" __declspec(dllimport) void Msg(const char *, ...);
void sub_101cebc0(void *pPlayer, int a, int b);

struct SPyType
{
	char m_pad0000[0x18];
	void (__cdecl *m_pfnDealloc)(void *);
};

struct SPyObject
{
	int m_nRefCount;
	SPyType *m_pType;
};

struct SQuestState
{
	int m_n0;
	int m_n4;
	int m_nType;
	int m_nMoney;
	const char *m_pszText;
	const char *m_pszScript;
};

void CBasePlayer::sub_1017cc20(const char *pszQuest, int nStep)
{
	int iQuest = g_1074f8f8.sub_10221a00(pszQuest);
	if (iQuest == -1)
		return;
	char *pQuest = g_1074f8f8.sub_10221b10(iQuest);
	if (*(int *)(pQuest + 0x10 + nStep * 4) == -1)
		return;
	if (*(int *)(pQuest + 0x10) < 0) {
		int nOrder = 0;
		for (int i = 0; i < g_1074f8f8.m_field[8]; i++) {
			char *pOther = g_1074f8f8.sub_10221b10(i);
			if (*(int *)(pOther + 0xc) >= nOrder)
				nOrder = *(int *)(pOther + 0xc) + 1;
		}
		*(int *)(pQuest + 0xc) = nOrder;
	}
	*(int *)(pQuest + 0x10) = nStep - 1;
	if (!sub_10182420(iQuest, nStep - 1))
		return;
	SQuestState *pState = (SQuestState *)g_1074f8f8.sub_10221e50(*(int *)(pQuest + 0x14 + *(int *)(pQuest + 0x10) * 4));
	if (pState->m_nMoney)
		sub_10340e50(pState->m_nMoney);
	if (pState->m_pszText && *pState->m_pszText)
		sub_1015f630(pState->m_pszText);
	if (pState->m_pszScript && *pState->m_pszScript) {
		const char *pszScript = pState->m_pszScript;
		void *pMain = PyImport_AddModule("__main__");
		if (!pMain)
			return;
		void *pDict = PyModule_GetDict(pMain);
		if (pszScript && !g_107318bc->vfunc1() && g_107318bc->m_n2c)
			Msg("RUNNING PYTHON AT TIME %f:\n%s\n\n", (double)gpGlobals->curtime, pszScript);
		SPyObject *pResult = (SPyObject *)PyRun_ConsoleString(pszScript, 0x100, pDict, pDict);
		if (!pResult) {
			PyErr_Print();
		} else {
			if (--pResult->m_nRefCount == 0)
				pResult->m_pType->m_pfnDealloc(pResult);
			if (Py_FlushLine())
				PyErr_Clear();
		}
	}
	sub_1017c900(1);
	sub_10182260(pszQuest, iQuest, *(int *)(pQuest + 0x10), *(int *)(pQuest + 0xc));
	if (pState->m_nType == 2)
		sub_101cebc0(this, 7, 0);
}
// END FUNCTION

// FUNCTION: 0x1017ce70 size=0x58
#include "CUnknown1017ce70.h"
#include "QuestJournal.h"

struct QuestRecordView { int m_a, m_b, m_nId; };
extern QuestJournal g_1074f8f8;

void CUnknown1017ce70::sub_1017ce70(int nId)
{
	m_nId = nId;
	for (int i = 0; i < m_nEntries; i++) {
		CUnknown1017ce70Entry *pEntry = (CUnknown1017ce70Entry *)((char *)m_pEntries + i * 0x40);
		if (((QuestRecordView *)g_1074f8f8.sub_10221b10(pEntry->m_nQuest30))->m_nId == nId)
			pEntry->m_bActive3c = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1017cef0 size=0x79
#include "CBaseEntity.h"
#include "CBasePlayer.h"

void sub_10014614(CBaseEntity *pEnt);

inline bool BitSet(unsigned int v, int n)
{
	return ((v >> n) & 1) != 0;
}

void CBasePlayer::sub_1017cef0(CBaseEntity *pEnt)
{
	CBaseEntity *pOld = sub_1000306c();
	if (pEnt) {
		int edict = pEnt->m_pEdict2e0;
		int index = engine->vfunc35(edict);
		*(int *)((char *)this + 0x1ec4) = index;
		*(unsigned int *)((char *)this + 0x19b4) = *pEnt->vfunc1();
	} else {
		*(int *)((char *)this + 0x1ec4) = 0;
		*(unsigned int *)((char *)this + 0x19b4) = 0xffffffff;
	}
	if (pOld != pEnt && pOld && BitSet(*(unsigned int *)((char *)pOld + 0x204), 2))
		sub_10014614(pOld);
}
// END FUNCTION

// FUNCTION: 0x1017cf90 size=0x6f
struct EntInfo { void *ent; unsigned int serial; int pad; };
struct EntList {
    int vptr;
    EntInfo arr[1];
};
extern EntList *g_10566458;
struct EHandle {
    unsigned int m_Index;
    void *Get() const
    {
        if (m_Index == 0xffffffff)
            return 0;
        const EntInfo *p = &g_10566458->arr[m_Index & 0x1fff];
        if (p->serial == (m_Index >> 13))
            return p->ent;
        return 0;
    }
};
struct Holder {
    char pad0[0x19b4];
    EHandle m_hEnt;
    char pad1[0x1ec4 - 0x19b8];
    int m_nCount;
};

void * __fastcall sub_1017cf90(Holder *self)
{
    void *r = 0;
    if (self->m_nCount > 0 && self->m_hEnt.Get() != 0)
        r = self->m_hEnt.Get();
    return r;
}
// END FUNCTION

// FUNCTION: 0x1017d020 size=0x6d
#include "CBaseEntity.h"
#include "CBasePlayer.h"
struct CUseTargetView {
    char sub_1000d15c(const char *pszName, int a, int b);
};
CBaseEntity *sub_100138c7(const char *pszName, int a, int b, int c, int d);

struct CPlayerDialogUnit : CBasePlayer {
    void sub_1017d020(const char *pszName);
};

void CPlayerDialogUnit::sub_1017d020(const char *pszName)
{
    CUseTargetView *pUse = (CUseTargetView *)sub_1000306c();
    if (pUse) {
        if (!pUse->sub_1000d15c(pszName, 1, 0))
            pUse->sub_1000d15c("DialogDefault", 1, 0);
    } else {
        CBaseEntity *pEnt = sub_100138c7(pszName, 0, 0, 0, 0);
        if (!pEnt)
            pEnt = sub_100138c7("DialogDefault", 0, 0, 0, 0);
        sub_1017cef0(pEnt);
    }
}
// END FUNCTION

// FUNCTION: 0x1017d0b0 size=0x170
#define EV(n) virtual void e##n();
#define EV10(p) EV(p##0) EV(p##1) EV(p##2) EV(p##3) EV(p##4) EV(p##5) EV(p##6) EV(p##7) EV(p##8) EV(p##9)
struct CEngineTimeView
{
	EV10(0) EV10(1) EV10(2) EV10(3) EV10(4) EV10(5) EV10(6) EV10(7) EV10(8) EV10(9)
	EV10(10) EV10(11)
	virtual float e119(int a);
};
extern CEngineTimeView *g_1070b22c;

struct SBlendView
{
	char m_pad0000[0x19b8];
	float m_flStart;	// 0x19b8
	float m_flRate;	// 0x19bc

	void sub_1017d0b0(float flRate);
	float sub_1017d900();	// stub 0x1000c07c
};

void SBlendView::sub_1017d0b0(float flRate)
{
	if (!(flRate > 0.0f))
		flRate = 0;
	float flNow = g_1070b22c->e119(0);
	if (m_flStart > 0.0f) {
		float flFrac = sub_1017d900();
		if (m_flRate < 0.0f) {
			m_flStart = flNow - flFrac * flRate;
			m_flRate = flRate;
			return;
		}
		if (m_flRate > 0.0f) {
			if (flFrac < 1.0f && flNow + flRate > m_flRate + m_flStart) {
				m_flStart = flNow - flFrac * flRate;
				m_flRate = flRate;
				return;
			}
		} else {
			if (m_flRate == 0.0f && flNow - 0.01f <= m_flStart && flRate > 0.0f) {
				m_flStart = flNow;
				m_flRate = flRate;
				return;
			}
		}
	} else {
		m_flStart = flNow;
		m_flRate = flRate;
	}
}
// END FUNCTION

// FUNCTION: 0x1017d280 size=0x177
#include "vampire_all.h"
void CBasePlayer::sub_1017d280(CBaseEntity *pEnt, float flBlend)
{
	sub_1017cef0(0);
	if (0.0f > flBlend)
		flBlend = 0.0f;
	if (pEnt == 0) {
		sub_1017d6d0(flBlend);
		return;
	}
	float flNow = engine->vfunc119(0);
	if (flNow > m_flFadeTime19C4 && m_hFadeEnt19C0.Get() != 0) {
		CBasePlayerFadeRec rec;
		rec.m_bType = 0;
		rec.m_hEnt = m_hFadeEnt19C0;
		rec.m_flTime = m_flFadeTime19C4;
		rec.m_flValue = m_flFadeValue19C8;
		FadeStack().InsertBefore(0, rec);
	}
	float flMin = pEnt->vfunc52();
	if (flMin > flBlend)
		flBlend = flMin;
	sub_1017d0b0(flBlend);
	m_hFadeEnt19C0 = pEnt;
	m_flFadeTime19C4 = flNow;
	m_flFadeValue19C8 = flBlend;
	pEnt->vfunc47();
}
// END FUNCTION

// FUNCTION: 0x1017d460 size=0x170
#include "vampire_all.h"
void CBasePlayer::sub_1017d460(CBaseEntity *pEnt, float flBlend)
{
	if (0.0f > flBlend)
		flBlend = 0.0f;
	if (pEnt == 0) {
		sub_1017d6d0(flBlend);
		return;
	}
	float flNow = engine->vfunc119(0);
	if (flNow > m_flFadeTime19D0 && m_hFadeEnt19CC.Get() != 0) {
		CBasePlayerFadeRec rec;
		rec.m_bType = 0;
		rec.m_hEnt = m_hFadeEnt19CC;
		rec.m_flTime = m_flFadeTime19D0;
		rec.m_flValue = m_flFadeValue19D4;
		FadeStack().InsertBefore(0, rec);
	}
	float flMin = pEnt->vfunc52();
	if (flMin > flBlend)
		flBlend = flMin;
	sub_1017d0b0(flBlend);
	m_hFadeEnt19CC = pEnt;
	m_flFadeTime19D0 = flNow;
	m_flFadeValue19D4 = flBlend;
	pEnt->vfunc46();
}
// END FUNCTION

// FUNCTION: 0x1017d630 size=0x38
// TARGET: CUnknown1017d630::sub_1017d630
#include "CEHandleGet.h"

struct CUnknown1017d630
{
	char m_pad0000[0x19c0];
	unsigned int m_h19c0;
	float sub_1000c07c();
	CGlobalEntityList_Ent *sub_1017d630();
};

CGlobalEntityList_Ent *CUnknown1017d630::sub_1017d630()
{
	sub_1000c07c();
	return EHandle_Get(m_h19c0);
}
// END FUNCTION

// FUNCTION: 0x1017d680 size=0x38
// TARGET: CUnknown1017d680::sub_1017d680
#include "CEHandleGet.h"

struct CUnknown1017d680
{
	char m_pad0000[0x19cc];
	unsigned int m_h19cc;
	float sub_1000c07c();
	CGlobalEntityList_Ent *sub_1017d680();
};

CGlobalEntityList_Ent *CUnknown1017d680::sub_1017d680()
{
	sub_1000c07c();
	return EHandle_Get(m_h19cc);
}
// END FUNCTION

// FUNCTION: 0x1017d6d0 size=0x1bd
#include "CBaseEntity.h"
#include "CBasePlayer.h"
void CBasePlayer::sub_1017d6d0(float flParam)
{
	float flProgress = sub_1017d900();
	if (flProgress > 0.0f) {
		float v;
		if (m_hFadeEnt19C0.Get() != 0)
			v = m_hFadeEnt19C0.Get()->vfunc53();
		else
			v = 0.0f;
		if (v > flParam)
			flParam = v;
		if (m_hFadeEnt19CC.Get() != 0)
			v = m_hFadeEnt19CC.Get()->vfunc53();
		else
			v = 0.0f;
		if (v > flParam)
			flParam = v;
		if (flParam > 0.0f) {
			float flNow = engine->vfunc119(0);
			if (m_flFadeDuration19BC < 0.0f) {
				if (flParam + flNow < m_flFadeStart19B8 - m_flFadeDuration19BC) {
					m_flFadeDuration19BC = -flParam;
					m_flFadeStart19B8 = flNow - (1.0f - flProgress) * flParam;
				}
			} else {
				m_flFadeDuration19BC = -flParam;
				m_flFadeStart19B8 = flNow - (1.0f - flProgress) * flParam;
			}
		} else {
			m_flFadeStart19B8 = 0.0f;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1017d900 size=0x1a0
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CUnknown1070b22c.h"
#include "ehandle.h"

extern CUnknown1070b22c *g_1070b22c;
extern float g_104454c4;

float CBasePlayer::sub_1017d900()
{
	if (m_flFadeStart19B8 > g_104454c4 && (m_hFadeEnt19C0.Get() || m_hFadeEnt19CC.Get()))
	{
		float flNow = g_1070b22c->vfunc119(0);
		if (m_flFadeDuration19BC == g_104454c4)
			return 1.0f;
		if (m_flFadeDuration19BC > g_104454c4)
		{
			float flFrac = (flNow - m_flFadeStart19B8) / m_flFadeDuration19BC;
			if (flFrac > 1.0f)
				return 1.0f;
			if (flFrac >= g_104454c4)
				return flFrac;
			return g_104454c4;
		}
		if (m_flFadeDuration19BC < g_104454c4)
		{
			float flFrac = 1.0f - -((flNow - m_flFadeStart19B8) / m_flFadeDuration19BC);
			if (flFrac > 1.0f)
				return 1.0f;
			if (flFrac >= g_104454c4)
				return flFrac;
		}
	}
	float flResult = g_104454c4;
	m_flFadeStart19B8 = 0;
	m_flFadeDuration19BC = 0;
	m_hFadeEnt19C0 = (CBaseEntity *)0;
	m_hFadeEnt19CC = (CBaseEntity *)0;
	m_nFade19E4 = 0;
	return flResult;
}
// END FUNCTION

// FUNCTION: 0x1017db10 size=0xa
#include "ConVar.h"
ConVar g_10724ff8("pl_supernatural_level", "-1", 0, "Sets the player's supernatural level for testing.", true, -1.0f, true, 5.0f);
// END FUNCTION

// FUNCTION: 0x1017dbb0 size=0xa
#include "ConVar.h"
ConVar g_10725948("pl_criminal_level", "-1", 0, "Sets the player's criminal level for testing.", true, -1.0f, true, 5.0f);
// END FUNCTION

// FUNCTION: 0x1017dc50 size=0xa
#include "ConVar.h"
ConVar g_107250d0("pl_investigate_level", "-1", 0, "Sets the player's investigate level for testing.", true, -1.0f, true, 5.0f);
// END FUNCTION

// FUNCTION: 0x1017dcf0 size=0xa
#include "ConVar.h"
ConVar g_10725eb8("pl_min_act_timer", "5", 0, "Controls the minimum amount of time a player is flagged for commiting a criminal or supernatural act.");
// END FUNCTION

// FUNCTION: 0x1017dd80 size=0x3e
struct CGlobal1017dd80
{
	virtual void v0();
	virtual bool v1();
	char m_pad0004[0x2c - 4];
	int m_n2c;
};

extern CGlobal1017dd80 *g_10724ffc;

inline int Get10724ffc() { return g_10724ffc->v1() ? 0 : g_10724ffc->m_n2c; }

struct CUnk1017dd80
{
	char m_pad0000[0x1ccc];
	int m_n1ccc;
	int sub_1017dd80();
};

int CUnk1017dd80::sub_1017dd80()
{
	if (Get10724ffc() >= 0)
		return Get10724ffc();
	return m_n1ccc;
}
// END FUNCTION

// FUNCTION: 0x1017ddd0 size=0x64
#include "CBasePlayer.h"
struct CConVarLike {
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad04[0x28];
	int m_n2c;
};
extern CConVarLike *g_1072594c;
unsigned int sub_1042fd40(unsigned int);

int CBasePlayer::sub_1017ddd0()
{
	if ((g_1072594c->vfunc1() ? 0 : g_1072594c->m_n2c) >= 0)
		return g_1072594c->vfunc1() ? 0 : g_1072594c->m_n2c;
	unsigned int t = (((m_nCriminalLevelEnc & 0x8a66e35) ^ 0x793f90) + 0x8b10412) & 0x175991ca;
	t ^= m_nCriminalLevelEnc;
	return sub_1042fd40(t ^ 0x783682a9);
}
// END FUNCTION

// FUNCTION: 0x1017de60 size=0x3e
#include "CUnknown107250d4.h"

extern CUnknown107250d4 *g_107250d4;

inline int Val107250d4()
{
	return g_107250d4->vfunc1() ? 0 : g_107250d4->m_n2c;
}

struct CUnknownOwner1017de60
{
	int sub_1017de60();
	char m_pad0000[0x1cdc];
	int m_n1cdc;
};

// TARGET: CUnknownOwner1017de60::sub_1017de60
int CUnknownOwner1017de60::sub_1017de60()
{
	if (Val107250d4() >= 0)
		return Val107250d4();
	return m_n1cdc;
}
// END FUNCTION

// FUNCTION: 0x1017deb0 size=0x73
struct CGameTimeScale {
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad[0x28 - 4];
	float m_flValue;
};
extern CGameTimeScale *g_10725ebc;

inline float GetValue()
{
	return g_10725ebc->vfunc1() ? 0.0f : g_10725ebc->m_flValue;
}

float __stdcall sub_1017deb0(int a, float b)
{
	if (b > 0.0f)
		return b;
	float fMin = GetValue();
	float fa = (float)a;
	return fMin > fa ? GetValue() : fa;
}
// END FUNCTION

// FUNCTION: 0x1017df50 size=0x18f
#include "CBasePlayer.h"
#include "ConVar.h"

__declspec(dllimport) void DevMsg(const char *fmt, ...);
extern ConVar g_10724ff8;
extern ConVar *g_107258dc;
extern char g_106b8540[];

struct CBasePlayerUnit : CBasePlayer
{
	float sub_1017deb0(int a, float b);
	void sub_1017df50(int level, float time, const char *pszReason);
};

#define FLD(type, off) (*(type *)((char *)this + (off)))

// TARGET: CBasePlayer::sub_1017df50
void CBasePlayer::sub_1017df50(int level, float time, const char *pszReason)
{
	CBasePlayerUnit *self = (CBasePlayerUnit *)this;
	if (!pszReason)
		pszReason = g_106b8540;
	g_10724ff8.sub_10246160(-1);
	if (level == 0)
	{
		if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
			DevMsg("CSActs:    %6.1f - Supernatural level %d -> 0 (act - %s)\n", gpGlobals->curtime, FLD(int, 0x1ccc), pszReason);
		FLD(int, 0x1ccc) = 0;
		FLD(float, 0x1ce4) = -1.0f;
		return;
	}
	float t;
	if (level > FLD(int, 0x1ccc))
	{
		t = self->sub_1017deb0(FLD(int, 0x1ccc), time);
		if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
			DevMsg("CSActs:    %6.1f - Supernatural level %d -> %d (%f sec) (act - %s)\n", gpGlobals->curtime, FLD(int, 0x1ccc), level, t, pszReason);
		FLD(int, 0x1ccc) = level;
		FLD(float, 0x1ce4) = t + gpGlobals->curtime;
	}
	else
	{
		t = self->sub_1017deb0(FLD(int, 0x1ccc), time);
		if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
			DevMsg("CSActs:    %6.1f - Supernatural level %d -> %d (refresh %f sec) (act - %s)\n", gpGlobals->curtime, FLD(int, 0x1ccc), level, t, pszReason);
		FLD(float, 0x1ce4) = t + gpGlobals->curtime;
	}
	FLD(int, 0x1cec)++;
}
// END FUNCTION

// FUNCTION: 0x1017e150 size=0x33b
#include "CBasePlayer.h"
#include "globalvars.h"
#include "Tier1.h"

struct CConVarLike {
	virtual void vfunc0();
	virtual bool vfunc1();
	char m_pad04[0x28];
	int m_n2c;
};
struct CConVarSetter { void sub_10246160(int); };
extern CConVarLike *g_107258dc;
extern CConVarSetter g_10725948;
extern char g_106b8540[];
extern char g_1058824c[];
extern char g_10588200[];
extern char g_105881a8[];
int sub_10184280(unsigned int);
int sub_1042fd40(unsigned int);
unsigned int sub_10184260(int);

inline int DecodeCrime1(unsigned int v) { return sub_10184280((((v & 0x8a66e35) ^ 0x793f90) + 0x8b10412 & 0x175991ca) ^ v ^ 0x783682a9); }
inline int DecodeCrime2(unsigned int v) { return sub_1042fd40(v ^ ((((v & 0x8a66e35) ^ 0x793f90) + 0x8b10412 & 0x175991ca) ^ 0x783682a9)); }

// MvsnSec CSecureInt1 as the game lays it out: vptr + {b0, b1, value}
struct SecRec1 {
	char m_b0;
	char m_b1;
	unsigned int m_Value;
	unsigned int sub_10184220(unsigned int);
	void sub_101841f0(const SecRec1 *src);	// out-of-line copy (value, b1, b0)
	__forceinline void Copy(const SecRec1 &o) { m_Value = o.m_Value; m_b1 = o.m_b1; m_b0 = o.m_b0; }
};
extern void *g_10470484[];	// MvsnSec::CSecureInt1 vftable
struct SecRecZ : SecRec1 {
	__forceinline SecRecZ() { m_Value = 0; }
};
struct SecInt1 {
	void **m_vptr;
	SecRecZ m_rec;
	__forceinline void Set(int v) { SecRec1 loc; loc.m_Value = loc.sub_10184220(sub_10184260(v)); m_rec.sub_101841f0(&loc); }
	__forceinline SecInt1() {}
	__forceinline SecInt1(int v) { m_vptr = g_10470484; Set(v); }
	__forceinline SecInt1 &operator=(const SecInt1 &o) { m_rec.Copy(o.m_rec); return *this; }
};
struct SecInt1x : SecInt1 {	// the raise path: the scramble inline
	__forceinline SecInt1x(int v) { m_vptr = g_10470484; SecRec1 loc; unsigned int x = sub_10184260(v); loc.m_Value = 0x783682a9 ^ ((((0x8a66e35 & x) ^ 0x85f3db1) + 0x8b10412 & 0x175991ca) ^ x); m_rec.sub_101841f0(&loc); }
};
struct CBasePlayerCrime : CBasePlayer {
	float sub_1017deb0(int level, float time);
};
#define m_CriminalLevel (*(SecInt1 *)m_pad1cd0)
#define HASH2(x) ((x) ^ (((((x) & 0x8a66e35) ^ 0x793f90) + 0x8b10412 & 0x175991ca) ^ 0x783682a9))

void CBasePlayer::sub_1017e150(int level, float time, const char *pszReason)
{
	CBasePlayerCrime *p = (CBasePlayerCrime *)this;
	if (!pszReason)
		pszReason = g_106b8540;
	g_10725948.sub_10246160(-1);
	if (level == 0)
	{
		if (!g_107258dc->vfunc1() && g_107258dc->m_n2c)
			g_109f3630(g_1058824c, (double)gpGlobals->curtime, DecodeCrime1(m_nCriminalLevelEnc), pszReason);
		m_CriminalLevel = SecInt1(0);
		m_f1CE0 = -1.0f;
	}
	else
	{
		float f;
		if (level > DecodeCrime1(m_nCriminalLevelEnc))
		{
			f = p->sub_1017deb0(DecodeCrime1(m_nCriminalLevelEnc), time);
			if (!g_107258dc->vfunc1() && g_107258dc->m_n2c)
				g_109f3630(g_10588200, (double)gpGlobals->curtime, DecodeCrime1(m_nCriminalLevelEnc), level, (double)f, pszReason);
			m_CriminalLevel = SecInt1x((int)level);
		}
		else
		{
			int h = HASH2(m_nCriminalLevelEnc);
			int n = sub_1042fd40(h);
			f = p->sub_1017deb0(n, time);
			if (!g_107258dc->vfunc1() && g_107258dc->m_n2c)
			{
				int h2 = HASH2(m_nCriminalLevelEnc);
				int nCur = sub_1042fd40(h2);
				g_109f3630(g_105881a8, (double)gpGlobals->curtime, nCur, level, (double)f, pszReason);
			}
		}
		m_f1CE0 = f + gpGlobals->curtime;
		m_iCriminalActCount = m_iCriminalActCount + 1;
	}
}
// END FUNCTION

// FUNCTION: 0x1017e560 size=0x68
#include "CBasePlayer.h"
#include "inputdata_t.h"

// the input's integer value (0 unless the variant holds an integer)
__forceinline int VariantAsInt(variant_t *pValue)
{
    if (pValue->fieldType == 4)
        return pValue->iValue;
    return 0;
}

#define CLAMP(x, lo, hi) ((x) > (hi) ? (hi) : ((x) < (lo) ? (lo) : (x)))

// TARGET: CBasePlayer::sub_1017e560
void CBasePlayer::sub_1017e560(inputdata_t *pData)
{
    sub_1017e150(CLAMP(VariantAsInt(&pData->value), 0, 5), -1.0f, "Input");
}
// END FUNCTION

// FUNCTION: 0x1017e5f0 size=0x68
#include "CBasePlayer.h"
#include "inputdata_t.h"

// the input's integer value (0 unless the variant holds an integer)
__forceinline int VariantAsInt(variant_t *pValue)
{
    if (pValue->fieldType == 4)
        return pValue->iValue;
    return 0;
}

#define CLAMP(x, lo, hi) ((x) > (hi) ? (hi) : ((x) < (lo) ? (lo) : (x)))

// TARGET: CBasePlayer::sub_1017e5f0
void CBasePlayer::sub_1017e5f0(inputdata_t *pData)
{
    sub_1017df50(CLAMP(VariantAsInt(&pData->value), 0, 5), -1.0f, "Input");
}
// END FUNCTION

// FUNCTION: 0x1017e680 size=0x4a
#include "inputdata_t.h"

struct CInputOwner
{
	void sub_1017e680(inputdata_t *pInput);
	void sub_1017e6f0(int n);
};

// TARGET: CInputOwner::sub_1017e680
void CInputOwner::sub_1017e680(inputdata_t *pInput)
{
	sub_1017e6f0(pInput->value.IntOrZero() > 5 ? 5 : (pInput->value.IntOrZero() < 0 ? 0 : pInput->value.IntOrZero()));
}
// END FUNCTION

// FUNCTION: 0x1017e6f0 size=0x1d
#include "ConVar.h"

extern ConVar g_107250d0;

struct CUnknown1017e6f0 {
	char m_pad0000[0x1cdc];
	int m_n1cdc;
	void sub_1017e6f0(int a);
};

// TARGET: CUnknown1017e6f0::sub_1017e6f0
void CUnknown1017e6f0::sub_1017e6f0(int a)
{
	g_107250d0.sub_10246160(-1);
	m_n1cdc = a;
}
// END FUNCTION

// FUNCTION: 0x1017e720 size=0x7
struct CUnknown1017e720 { int sub_1017e720(); };
int CUnknown1017e720::sub_1017e720()
{
    return *(int *)((char *)this + 0x1ce8);
}
// END FUNCTION

// FUNCTION: 0x1017e740 size=0x7
struct CUnknown1017e740 { int sub_1017e740(); };
int CUnknown1017e740::sub_1017e740()
{
    return *(int *)((char *)this + 0x1cec);
}
// END FUNCTION

// FUNCTION: 0x1017e760 size=0xa1
#include "CBasePlayer.h"
#include "Vector.h"
struct PlayerView1017e760 {
	char pad[0x3c8];
	Vector m_vec3c8;
	Vector m_vec3d4;
};
const char *sub_101d3730(const char *fmt, int n);

void CBasePlayer::sub_1017e760(int level)
{
	PlayerView1017e760 *p = (PlayerView1017e760 *)this;
	if (level > 1 && (p->m_vec3d4.LengthSqr() > 12.0f || p->m_vec3c8.LengthSqr() > 0.0f))
		sub_1017df50(level - 1, 0.5f, sub_101d3730("Celerity %d", level));
}
// END FUNCTION

// FUNCTION: 0x1017e840 size=0x8c
void __stdcall sub_10004237(int a, float b, const char *name);

void __stdcall sub_1017e840(int level)
{
	switch (level) {
	case 1:
		sub_10004237(1, -1.0f, "Protean 1");
		break;
	case 2:
		sub_10004237(2, -1.0f, "Protean 2");
		break;
	case 3:
		sub_10004237(2, -1.0f, "Protean 3");
		break;
	case 4:
		sub_10004237(4, -1.0f, "Protean 4");
		break;
	case 5:
		sub_10004237(5, -1.0f, "Protean 5");
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1017e900 size=0x53
#include "CBasePlayer.h"
#include "globalvars.h"
void CBasePlayer::sub_1017e900(int a, int b)
{
    if (a == 300) {
        sub_1017e150(1, -1.0f, "LockPick");
        return;
    }
    if (m_n1CE0 != 0xbf800000 && m_f1CE0 < gpGlobals->curtime)
        sub_1017e150(0, -1.0f, "Clear");
}
// END FUNCTION

// FUNCTION: 0x1017e980 size=0x33
extern char g_105882e0[];

struct CPlayerClearView {
    char pad0[0x1ce4];
    float m_flTime1ce4;
    void sub_1017df50(int a, float b, const char *c);
};

// TARGET: sub_1017e980
void __fastcall sub_1017e980(CPlayerClearView *p)
{
    if (*(int *)&p->m_flTime1ce4 != (int)0xbf800000) {
        if (p->m_flTime1ce4 < gpGlobals->curtime)
            p->sub_1017df50(0, -1.0f, g_105882e0);
    }
}
// END FUNCTION

// FUNCTION: 0x1017e9d0 size=0xa
#include "ConVar.h"
ConVar g_10725c58("debug_cop_grace_time", "30", 0, "Set the time after a player's initial criminal act where additional acts are ignore");
// END FUNCTION

// FUNCTION: 0x1017ea60 size=0xa
#include "ConVar.h"
ConVar g_107257b8("debug_response_timer_min", "5.0", 0, "Sets the minimum amount of time we will wait after an offense to send WC outputs and spawn cops.");
// END FUNCTION

// FUNCTION: 0x1017eaf0 size=0xa
#include "ConVar.h"
ConVar g_10725890("debug_response_timer_max", "7.5", 0, "Sets the maximum amount of time we will wait after an offense to send WC outputs and spawn cops.");
// END FUNCTION

// FUNCTION: 0x1017eb80 size=0xa
#include "ConVar.h"
ConVar g_10725f70("debug_heightened_alert_expire_time", "40.0", 0, "Determines how long NPC's stay in heightened alert mode.");
// END FUNCTION

// FUNCTION: 0x1017ec10 size=0x12
int __stdcall sub_1017ec10(int a)
{
    a = a - 1;
    if (a < 1) {
        a = 1;
    }
    return a;
}
// END FUNCTION

// FUNCTION: 0x1017ec40 size=0x89
#include "CBasePlayer.h"

extern char g_106c8a41;
struct EntInfo { void *ent; int serial; int pad; };
extern char *g_10566458;

void CBasePlayer::sub_1017ec40()
{
	float *pNext = (float *)((char *)this + 0x1cf8);
	if (gpGlobals->curtime >= *pNext) {
		if (g_106c8a41) {
			*pNext = *pNext + 5.0f;
			return;
		}
		*pNext = 3.4028235e38f;
		unsigned int h = *(unsigned int *)((char *)this + 0x1d00);
		if (h != 0xffffffff) {
			EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
			if (e->serial == (int)(h >> 13) && e->ent)
				sub_1017ee80(*(int *)((char *)this + 0x1cfc), *(int *)((char *)e->ent + 0x98), (char *)this + 0x1d04);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1017ed00 size=0x12a
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "ConVar.h"

extern ConVar g_10725890;
extern ConVar g_107257b8;

// TARGET: CBasePlayer::sub_1017ed00
void CBasePlayer::sub_1017ed00(int level, CBaseEntity *pNPC, const Vector &vecLocation)
{
	if (sub_1017f8b0() > 0)
		return;
	if (*(int *)&m_flSpawnResponseCopsTimer == 0x7f7fffff)
	{
		m_iSpawnResponseCopsLevel = level;
		m_hSpawnResponseCopsNPC = pNPC;
		m_vecSpawnResponseCopsLocation = vecLocation;
		m_flSpawnResponseCopsTimer = enginerandom->vfunc1((float)(g_107257b8.GetFloat() * 1.0), (float)(g_10725890.GetFloat() * 1.0f)) + gpGlobals->curtime;
	}
	else if (level > m_iSpawnResponseCopsLevel)
	{
		m_iSpawnResponseCopsLevel = level;
		m_hSpawnResponseCopsNPC = pNPC;
		m_vecSpawnResponseCopsLocation = vecLocation;
	}
}
// END FUNCTION

// FUNCTION: 0x1017ee80 size=0x246
#include "CBasePlayer.h"
#include "CWorldEvents.h"
#include "COutputEvent.h"
#include "ConVar.h"
#include "CUnknown10310c10.h"
#include "globalvars.h"
#include "Tier1.h"

struct CCopSpawnState	// the object sub_1023bd00 returns
{
	char m_pad000[0x49c];
	int m_n49c;
	char m_b4a0;
	char m_pad4a1[3];
	float m_fl4a4;
	float GetWaitDelay() const { return m_fl4a4; }
};

extern CCopSpawnState *sub_1023bd00();
extern CWorldEvents *sub_1023dcd0();
extern void sub_10370560(void *p);
extern CUnknown10310c10 g_10936c00;
extern ConVar g_10725c58;
extern ConVar g_107258d8;

namespace block_1017ee80 {
struct CBasePlayerUnit : CBasePlayer
{
	int sub_1017ec10(int level);
};
int CBasePlayerUnit::sub_1017ec10(int level)
{
	int n = level - 1;
	if (n < 1)
		n = 1;
	return n;
}
}
using namespace block_1017ee80;

void CBasePlayer::sub_1017ee80(int a, int b, void *pData)
{
	CCopSpawnState *pState = sub_1023bd00();
	if (!pState || !pState->m_n49c)
		return;

	int nSpawn = 0;
	int nTotal = 0;
	if (gpGlobals->curtime > m_flCopTimer1cf0)
	{
		nTotal = ((CBasePlayerUnit *)this)->sub_1017ec10(a);
		nSpawn = nTotal;
		m_flCopTimer1cf0 = gpGlobals->curtime + g_10725c58.GetFloat();
		m_iCopLevel1cf4 = a;
	}
	else if (a > m_iCopLevel1cf4)
	{
		nTotal = ((CBasePlayerUnit *)this)->sub_1017ec10(a);
		nSpawn = nTotal - ((CBasePlayerUnit *)this)->sub_1017ec10(m_iCopLevel1cf4);
		m_flCopTimer1cf0 = gpGlobals->curtime + g_10725c58.GetFloat();
		m_iCopLevel1cf4 = a;
	}

	if (pState->m_b4a0)
	{
		if (m_flCopWaitTimer1dc4 == 0.0f)
		{
			m_flCopWaitTimer1dc4 = pState->GetWaitDelay() + gpGlobals->curtime;
			m_bCopWaitDelayed = true;
			CWorldEvents *pWorld = sub_1023dcd0();
			if (pWorld)
			{
				if (pState->GetWaitDelay() != 0.0f)
					pWorld->m_Output468.sub_100cd660(pState, pState, 0.0f);
				pWorld->m_Output450.sub_100cd660(pState, pState, pState->GetWaitDelay());
			}
		}
		if (nTotal <= m_iCopWaitCount)
			nTotal = m_iCopWaitCount;
		m_iCopWaitCount = nTotal;
		if (g_107258d8.GetBool())
			g_109f3630("CSActs:    %6.1f - Cops - Wait Area - %d cops waiting in %f sec\n",
				gpGlobals->curtime, m_iCopWaitCount, m_flCopWaitTimer1dc4 - gpGlobals->curtime);
	}
	else
	{
		if (g_107258d8.GetBool())
			g_109f3630("CSActs:    %6.1f - Cops - No Wait   - %d cops spawning to reach %d total (%f sec grace)\n",
				gpGlobals->curtime, nSpawn, nTotal, m_flCopTimer1cf0 - gpGlobals->curtime);
		for (int i = nSpawn; i > 0; i--)
		{
			sub_10370560(this);
			g_10936c00.sub_10310c10(this, (int)pData);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1017f170 size=0xec
#include "CBasePlayer.h"
#include "COutputEvent.h"

struct CUnk107258dc
{
	virtual void v0();
	virtual char vfunc1();
	char pad[0x2c - 4];
	int m_n2c;
};
extern CUnk107258dc *g_107258dc;

__declspec(dllimport) void DevMsg(const char *pMsg, ...);

struct CCopSpawnerView
{
	char pad[0x450];
	COutputEvent m_Out450;
	COutputEvent m_Out468;
	COutputEvent m_Out480;
	char pad498[0x4c8 - 0x498];
	COutputEvent m_Out4c8;
	COutputEvent m_Out4e0;
};

struct CBasePlayerView : public CBasePlayer
{
	int sub_1017f770();	// stub 0x10007ee6
	char sub_1017f8d0();	// stub 0x1000ae3e
};

// TARGET: CBasePlayer::sub_1017f170
void CBasePlayer::sub_1017f170(void *pSpawnerVoid)
{
	CCopSpawnerView *pSpawner = (CCopSpawnerView *)pSpawnerVoid;
	if (pSpawner) {
		if (!g_107258dc->vfunc1() && g_107258dc->m_n2c != 0)
			DevMsg("CSActs:    %6.1f - Immediate spwan of %d cops\n", (double)gpGlobals->curtime, *(int *)((char *)this + 0x1dcc));
		switch (*(int *)((char *)this + 0x1dcc)) {
		case 0:
			pSpawner->m_Out450.sub_100cd660(pSpawner, pSpawner, 0);
			break;
		case 1:
		case 2:
			pSpawner->m_Out468.sub_100cd660(pSpawner, pSpawner, 0);
			break;
		case 3:
		case 4:
			pSpawner->m_Out480.sub_100cd660(pSpawner, pSpawner, 0);
			break;
		default:
			pSpawner->m_Out450.sub_100cd660(pSpawner, pSpawner, 0);
			break;
		}
		if (((CBasePlayerView *)this)->sub_1017f770()) {
			pSpawner->m_Out4c8.sub_100cd660(pSpawner, pSpawner, 0);
			*(int *)((char *)this + 0x1d10) = 0;
		}
		if (((CBasePlayerView *)this)->sub_1017f8d0())
			pSpawner->m_Out4e0.sub_100cd660(pSpawner, pSpawner, 0);
		*(int *)((char *)this + 0x1d14) = 0;
		*(int *)((char *)this + 0x1dc4) = 0;
		*((char *)this + 0x1dc8) = 0;
		*(int *)((char *)this + 0x1dcc) = 0;
	}
}
// END FUNCTION

// FUNCTION: 0x1017f2a0 size=0xa9
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "Vector.h"
struct CMsgPlayerView;
void sub_101cebc0(CMsgPlayerView *pPlayer, int a, int b);
__declspec(dllimport) void DevMsg(const char *pMsg, ...);


struct CCSActsFlag {	// a console variable: slot 1 tells whether it is unset
	virtual void v0();
	virtual char IsDefault();
	char m_pad[0x28];
	int m_nValue2c;
};
extern CCSActsFlag *g_107258dc;

struct CLocalPlayerView {
	char m_pad0000[0x49c];
	int m_n49c;
};
CLocalPlayerView *sub_1023bd00();	// the local player object (returns the global at 0x107532e8)

struct CWitnessView {
	char m_pad0000[0x63a4];
	float m_flTime63a4;
};

// TARGET: CBasePlayer::sub_1017f2a0
void CBasePlayer::sub_1017f2a0(int priority, CBaseEntity *pEntity, const Vector *pPos)
{
	if (!g_107258dc->IsDefault() && g_107258dc->m_nValue2c) {
		const char *pszName;
		if (pEntity) {
			((CWitnessView *)pEntity)->m_flTime63a4 = gpGlobals->curtime + 20.0f;
			pszName = pEntity->sub_100ab4f0();
		} else {
			pszName = "**UNKNOWN**";
		}
		DevMsg("CSActs:    %6.1f - Criminal act witnessed by %s at %f\n", (double)gpGlobals->curtime, pszName, (double)gpGlobals->curtime);
	}
	CLocalPlayerView *pLocal = sub_1023bd00();
	if (pLocal && pLocal->m_n49c) {
		sub_101cebc0((CMsgPlayerView *)this, 5, 0);
		sub_1017ed00(priority, pEntity, pPos);
	}
}
// END FUNCTION

// FUNCTION: 0x1017f380 size=0xa
#include "ConVar.h"
ConVar g_10723980("debug_masquerade_timer", "300", 0, "Determines how long of a grace period the player has after violating the masquerade, so that you don't wipe yourself after a single spree.");
// END FUNCTION

// FUNCTION: 0x1017f410 size=0xa
#include "ConVar.h"
ConVar g_10725800("debug_supernatural_cop_spawn", "0", 0, "Enable this if you want supernatural acts to spawn cops.");
// END FUNCTION

// FUNCTION: 0x1017f4a0 size=0x10b
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "ConVar.h"

struct CLocalPlayerView
{
	char m_pad[0x49c];
	int m_n49c;
};

extern ConVar *g_107258dc;
extern ConVar *g_10725804;
extern ConVar *g_10723984;
CLocalPlayerView *sub_1023bd00();
void sub_1022dea0(CBasePlayer *pPlayer, int a);
__declspec(dllimport) void DevMsg(const char *fmt, ...);

void CBasePlayer::sub_1017f4a0(int priority, CBaseEntity *pEntity, const Vector *pPos)
{
	if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
	{
		const char *pszName;
		if (pEntity)
		{
			*(float *)((char *)pEntity + 0x63a8) = gpGlobals->curtime + 20.0f;
			pszName = pEntity->sub_100ab4f0();
		}
		else
			pszName = "**UNKNOWN**";
		DevMsg("CSActs:    %6.1f - Supernatural act witnessed by %s at %f\n", (double)gpGlobals->curtime, pszName, (double)gpGlobals->curtime);
	}
	CLocalPlayerView *pLocal = sub_1023bd00();
	if (pLocal && pLocal->m_n49c)
	{
		if (gpGlobals->curtime >= *(float *)((char *)this + 0x1dbc))
		{
			::sub_1022dea0(this, 1);
			*(float *)((char *)this + 0x1dbc) = (g_10723984->vfunc1() ? 0.0f : g_10723984->m_fValue) + gpGlobals->curtime;
		}
		if (!g_10725804->vfunc1() && g_10725804->m_nValue)
			sub_1017ed00(priority, pEntity, pPos);
	}
}
// END FUNCTION

// FUNCTION: 0x1017f600 size=0x31
struct CUnk_1017f600
{
    char pad_0000[0x1d18];
    char m_b1d18;
    bool sub_1000ae3e();
    int sub_10007ee6();
    void sub_1001314c();
    void sub_1017f600();
};

// TARGET: CUnk_1017f600::sub_1017f600
void CUnk_1017f600::sub_1017f600()
{
    if (m_b1d18 != 0) {
        if (!sub_1000ae3e()) {
            m_b1d18 = 0;
            if (sub_10007ee6() == 0) {
                sub_1001314c();
            }
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1017f650 size=0x6b
#include "CNPC_VCop.h"
#include "ConVar.h"
extern ConVar *g_107258dc;
__declspec(dllimport) void DevMsg(const char *fmt, ...);
void sub_10008cdd(void *pNpc);

struct CNPC_VCopUnit : CNPC_VCop {
    void sub_1017f980();
    void sub_1017f650();
};

void CNPC_VCopUnit::sub_1017f650()
{
    int *pPursuit = (int *)((char *)this + 0x1d10);
    if (*pPursuit == 0) {
        sub_10008cdd(this);
        sub_1017f980();
    }
    ++*pPursuit;
    if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
        DevMsg("CSActs:    %6.1f - OnCopPursuitStart - %d in pursuit\n", gpGlobals->curtime, *pPursuit);
}
// END FUNCTION

// FUNCTION: 0x1017f6e0 size=0x63
#include "CBasePlayer.h"
#include "ConVar.h"
#include "globalvars.h"

struct CNPC_VCopUnit { void sub_1017f9c0(); };
extern ConVar *g_107258dc;
void sub_10370630(CBasePlayer *p);
__declspec(dllimport) void DevMsg(const char *fmt, ...);

void CBasePlayer::sub_1017f6e0()
{
	if (--*(int *)((char *)this + 0x1d10) == 0) {
		sub_10370630(this);
		((CNPC_VCopUnit *)this)->sub_1017f9c0();
	}
	if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
		DevMsg("CSActs:    %6.1f - OnCopPursuitStart - %d in pursuit\n", gpGlobals->curtime, *(int *)((char *)this + 0x1d10));
}
// END FUNCTION

// FUNCTION: 0x1017f770 size=0x7
struct CUnknown1017f770 { int sub_1017f770(); };
int CUnknown1017f770::sub_1017f770()
{
    return *(int *)((char *)this + 0x1d10);
}
// END FUNCTION

// FUNCTION: 0x1017f790 size=0x7
struct CUnknown1017f790 { float sub_1017f790(); };
float CUnknown1017f790::sub_1017f790()
{
    return *(float *)((char *)this + 0x1cf8);
}
// END FUNCTION

// FUNCTION: 0x1017f7b0 size=0x60
#include "CHunterChar.h"
#include "ConVar.h"
#include "globalvars.h"

extern ConVar *g_107258dc;
extern void (*g_109f3630)(const char *pMsg, ...);

// TARGET: CHunterChar::sub_1017f7b0
void CHunterChar::sub_1017f7b0()
{
	if (m_nHolds1d14 == 0)
		sub_1017fa40();
	m_nHolds1d14++;
	if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
		g_109f3630("CSActs:    %6.1f - OnHunterPursuitStart - %d in pursuit\n", gpGlobals->curtime, m_nHolds1d14);
}
// END FUNCTION

// FUNCTION: 0x1017f830 size=0x58
#include "CHunterChar.h"
#include "ConVar.h"
#include "globalvars.h"

extern ConVar *g_107258dc;
extern void (*g_109f3630)(const char *fmt, ...);

void CHunterChar::sub_1017f830()
{
	if (--m_nHolds1d14 == 0)
		sub_1017fa70();
	if (!g_107258dc->vfunc1() && g_107258dc->m_nValue)
		g_109f3630("CSActs:    %6.1f - OnHunterPursuitStart - %d in pursuit\n", (double)gpGlobals->curtime, m_nHolds1d14);
}
// END FUNCTION

// FUNCTION: 0x1017f8b0 size=0x7
struct CUnknown1017f8b0 { int sub_1017f8b0(); };
int CUnknown1017f8b0::sub_1017f8b0()
{
    return *(int *)((char *)this + 0x1d14);
}
// END FUNCTION

// FUNCTION: 0x1017f8d0 size=0x1e
// TARGET: sub_1017f8d0
struct CUnk1017f8d0
{
    char pad[0x1d1c];
    float m_1d1c;
    bool sub_1017f8d0();
};
bool CUnk1017f8d0::sub_1017f8d0()
{
    return gpGlobals->curtime < m_1d1c;
}
// END FUNCTION

// FUNCTION: 0x1017f900 size=0x30
struct CMsgPlayerView;
struct COutputEvent_Unit { void sub_100cd660(void *a, void *b, float c); };
struct CVCopLogic { char m_pad[0x4b0]; COutputEvent_Unit m_Out; };
void sub_101cebc0(CMsgPlayerView *p, int a, int b);
void sub_10370650(int p);
CVCopLogic *sub_1023dcd0();
void __fastcall sub_1017f900(void *pThis)
{
	sub_101cebc0((CMsgPlayerView *)pThis, 0x3b, 0);
	sub_10370650((int)pThis);
	CVCopLogic *p = sub_1023dcd0();
	if (p)
		p->m_Out.sub_100cd660(pThis, pThis, 0);
}
// END FUNCTION

// FUNCTION: 0x1017f940 size=0x30
struct CMsgPlayerView;
struct COutputEvent_Unit { void sub_100cd660(void *a, void *b, float c); };
struct CVCopLogic { char m_pad[0x4c8]; COutputEvent_Unit m_Out; };
void sub_101cebc0(CMsgPlayerView *p, int a, int b);
void sub_10370680(int p);
CVCopLogic *sub_1023dcd0();
void __fastcall sub_1017f940(void *pThis)
{
	sub_101cebc0((CMsgPlayerView *)pThis, 0x3c, 0);
	sub_10370680((int)pThis);
	CVCopLogic *p = sub_1023dcd0();
	if (p)
		p->m_Out.sub_100cd660(pThis, pThis, 0);
}
// END FUNCTION

// FUNCTION: 0x1017f980 size=0x27
#include "CBaseEntity.h"
// TARGET: CUnknown1017f980::sub_1017f980
#include "CUnknown1017f980.h"
#include "CDoorEventList.h"

void CUnknown1017f980::sub_1017f980()
{
	char *p = sub_10005e7a();
	if (p)
		((CDoorEventList *)(p + 0x480))->sub_100cd660((CBaseEntity *)this, (CBaseEntity *)this, 0);
	m_unk1d1c = 0;
}
// END FUNCTION

// FUNCTION: 0x1017f9c0 size=0x59
#include "COutputEvent.h"
#include "globalvars.h"
int sub_1023dcd0();
struct CCopTimerView {
	virtual bool vfunc0();
	virtual bool vfunc1();
	char m_pad04[0x28 - 4];
	float m_f28;
};
extern CCopTimerView *g_10725f74;
struct CNPC_VCopUnit {
	char m_pad0000[0x1d18];
	char m_b1d18;
	float m_f1d1c;
	void sub_1017f900();
	void sub_1017f9c0();
};
void CNPC_VCopUnit::sub_1017f9c0()
{
	char *pObj = (char *)sub_1023dcd0();
	if (pObj)
		((COutputEvent *)(pObj + 0x498))->sub_100cd660(this, this, 0);
	float flDelay = g_10725f74->vfunc1() ? 0.0f : g_10725f74->m_f28;
	float flTime = flDelay + gpGlobals->curtime;
	m_b1d18 = 1;
	m_f1d1c = flTime;
	sub_1017f900();
}
// END FUNCTION

// FUNCTION: 0x1017fa40 size=0x1d
#include "COutputEvent.h"

char *sub_1023dcd0();

struct CUnknown1017fa40 {
	void sub_1017fa40();
};

// TARGET: CUnknown1017fa40::sub_1017fa40
void CUnknown1017fa40::sub_1017fa40()
{
	char *p = sub_1023dcd0();
	if (p)
		((COutputEvent *)(p + 0x4e0))->sub_100cd660(this, this, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x1017fa70 size=0x1d
#include "COutputEvent.h"

char *sub_1023dcd0();

struct CUnknown1017fa70 {
	void sub_1017fa70();
};

// TARGET: CUnknown1017fa70::sub_1017fa70
void CUnknown1017fa70::sub_1017fa70()
{
	char *p = sub_1023dcd0();
	if (p)
		((COutputEvent *)(p + 0x4f8))->sub_100cd660(this, this, 0.0f);
}
// END FUNCTION

// FUNCTION: 0x1017faa0 size=0x65
struct CMsgPlayerView;
struct CPlayerLookup { char pad[0x49c]; int m_nState; };
extern int sub_10007ee6();
extern char sub_1000ae3e();
extern CPlayerLookup *sub_1000aa0b();
extern void sub_101cebc0(CMsgPlayerView *pPlayer, int id, int arg);

void __fastcall sub_1017faa0(CMsgPlayerView *pPlayer)
{
    if (sub_10007ee6() || sub_1000ae3e()) {
        sub_101cebc0(pPlayer, 0x31, 0);
        return;
    }
    CPlayerLookup *p = sub_1000aa0b();
    if (p == 0)
        return;
    if (p->m_nState == 0)
        sub_101cebc0(pPlayer, 0x32, 0);
    else if (p->m_nState == 1)
        sub_101cebc0(pPlayer, 0x33, 0);
    else
        sub_101cebc0(pPlayer, 0x34, 0);
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

// FUNCTION: 0x1017fd60 size=0x17e
#include "utlrbtree.h"
#include "utlvector.h"
#include "CUnknown1017fd60.h"
#include "CBaseEntity.h"

extern void (*g_109f3628)(const char *, ...);	// Msg

template <class E>
inline int ENTINDEX_1017fd60(E pEdict)
{
	return engine->vfunc35(pEdict);
}

void CUnknown1017fd60::sub_1017fd60(int value, CBaseEntity *pNpc)
{
	for (int i = 0; i < m_list.Count(); i++)
	{
		if (m_list[i].m_index == ENTINDEX_1017fd60(pNpc->m_pEdict2e0))
		{
			if (m_list[i].m_value < value)
				m_list[i].m_value = value;
			m_list[i].m_time = gpGlobals->curtime;
			return;
		}
	}
	CUnknown1017fd60Rec rec;
	rec.m_handle = pNpc ? *pNpc->vfunc1() : 0xffffffff;
	rec.m_time = gpGlobals->curtime;
	rec.m_index = ENTINDEX_1017fd60(pNpc->m_pEdict2e0);
	rec.m_value = value;
	m_list.AddToTail(rec);
	g_109f3628("Scared NPC: %d (dist:%.2f)\n", ENTINDEX_1017fd60(pNpc->m_pEdict2e0), (double)*(float *)((char *)pNpc + 0x6264));
}
// END FUNCTION

// FUNCTION: 0x1017ff40 size=0x106
#include "CBaseEntity.h"
#include "CUnknown1017fd60.h"
#include "CEHandleGet.h"
#include "Vector.h"
#define S1(n) virtual void s##n();
#define S10(p) S1(p##0) S1(p##1) S1(p##2) S1(p##3) S1(p##4) S1(p##5) S1(p##6) S1(p##7) S1(p##8) S1(p##9)

struct CEntView1017ff40
{
	S1(0)
	virtual int *slot1();
	S1(2) S1(3) S1(4) S1(5) S1(6) S1(7) S1(8) S1(9)
	S10(1) S10(2) S10(3) S10(4) S10(5) S10(6) S10(7) S10(8) S10(9) S10(10) S10(11) S10(12)
	S1(130) S1(131) S1(132) S1(133) S1(134) S1(135) S1(136) S1(137)
	virtual int slot138();
	S1(139)
	S10(14) S10(15) S10(16) S10(17) S10(18) S10(19) S10(20)
	S1(210) S1(211) S1(212) S1(213) S1(214) S1(215) S1(216)
	virtual Vector *slot217();
	char m_pad[0x128 - 4];
	int m_n128;
};

void CUnknown1017fd60::sub_1017ff40(CBaseEntity *pEnt, int nKind)
{
	CEntView1017ff40 *pView = (CEntView1017ff40 *)pEnt;
	if (pView && pView->slot138() != 13)
	{
		m_flNoticeTime[nKind] = gpGlobals->curtime;
		m_hNoticed[nKind] = *pView->slot1();
		if (pView->m_n128 == 0 || nKind == 3 || nKind == 4)
		{
			Vector *pMine = ((CEntView1017ff40 *)this)->slot217();
			Vector *pTheirs = pView->slot217();
			Vector d = *pTheirs - *pMine;
			float flDist = FastSqrt(d.x * d.x + (d.y * d.y + d.z * d.z));
			if (!EHandle_Get(m_hNearest) || flDist < m_flNearestDist)
			{
				m_flNearestDist = flDist;
				m_hNearest = *pView->slot1();
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101800a0 size=0x2b
float __fastcall sub_101800a0(char *pThis)
{
    float flMax = -1.0f;
    float *pf = (float *)(pThis + 0x1d28);
    int i = 5;
    do {
        if (!((double)*pf < flMax))
            flMax = *pf;
        pf++;
        i--;
    } while (i != 0);
    return flMax;
}
// END FUNCTION

// FUNCTION: 0x101800e0 size=0xe
#include "CUnknown101800e0.h"
// TARGET: CUnknown101800e0::sub_101800e0
float CUnknown101800e0::sub_101800e0(int index)
{
	return m_values[index];
}
// END FUNCTION

// FUNCTION: 0x10180100 size=0x37
#include "CBaseEntity.h"
#include "CBasePlayer.h"
#include "CEHandleGet.h"

// TARGET: CBasePlayer::sub_10180100
CBaseEntity *CBasePlayer::sub_10180100(int index)
{
    return (CBaseEntity *)EHandle_Get(((unsigned int *)((char *)this + 0x1d3c))[index]);
}
// END FUNCTION

// FUNCTION: 0x10180150 size=0x26
#include "vampire.h"

void *sub_101193b0();

struct CUnk10180150 {
    void sub_10007072(const char *r);
};

void sub_10180150()
{
    void *p = sub_101193b0();
    if (p)
    {
        const char *r = engine->vfunc84(1);
        ((CUnk10180150 *)p)->sub_10007072(r);
    }
}
// END FUNCTION

// FUNCTION: 0x10180190 size=0xa
#include "ConCommand.h"
void sub_10180150(void);
ConCommand g_1072578c("log_character", sub_10180150, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180220 size=0x11
struct P { void sub_1015ef60(); };
P *sub_10008d8c();
void sub_10180220()
{
	P *p = sub_10008d8c();
	if (p)
		p->sub_1015ef60();
}
// END FUNCTION

// FUNCTION: 0x10180250 size=0xa
#include "ConCommand.h"
void sub_10180220(void);
ConCommand g_10725a8c("player_mobilize", sub_10180220, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x101802e0 size=0x11
struct P { void sub_1015ef40(); };
P *sub_10008d8c();
void sub_101802e0()
{
	P *p = sub_10008d8c();
	if (p)
		p->sub_1015ef40();
}
// END FUNCTION

// FUNCTION: 0x10180310 size=0xa
#include "ConCommand.h"
void sub_101802e0(void);
ConCommand g_10725f44("player_immobilize", sub_101802e0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x101803a0 size=0x2d3
#include "vampire_all.h"
CBasePlayer *sub_101193b0();
void sub_101cf5c0(CBaseEntity *pEntity, const void *pOrigin, int unused);
void sub_1028d820(const void *pPos);
extern CGlobalEntityList g_106eb5d8;
extern Vector g_1070d1b0;
extern void (*g_109f3628)(const char *pMsg, ...);
extern "C" double atof(const char *pszString);

void sub_101803a0()
{
	CBasePlayer *pPlayer = sub_101193b0();
	if (!pPlayer)
		return;

	if (engine->vfunc85() == 2)
	{
		const char *pszName = engine->vfunc84(1);
		CEntityVSlots *pEnt = (CEntityVSlots *)g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
		if (pEnt)
		{
			Vector vecAngles = *pEnt->slot219();
			pPlayer->m_vec206c = vecAngles;
			pPlayer->vfunc64((float *)&vecAngles);
			pPlayer->vfunc218((float *)&vecAngles);
			pPlayer->m_n207C = 1;
			sub_101cf5c0((CBaseEntity *)pPlayer, pEnt->slot217(), 0);
			sub_1028d820(pEnt->slot217());
		}
		else
		{
			g_109f3628("Could not find entity named %s\n", pszName);
		}
	}
	else if (engine->vfunc85() == 7)
	{
		Vector vecDest = g_1070d1b0;
		vecDest.x = atof(engine->vfunc84(1));
		vecDest.y = atof(engine->vfunc84(2));
		vecDest.z = atof(engine->vfunc84(3));
		sub_101cf5c0((CBaseEntity *)pPlayer, &vecDest, 0);
		sub_1028d820(&vecDest);
		pPlayer->m_vec206c.x = atof(engine->vfunc84(4));
		pPlayer->m_vec206c.y = atof(engine->vfunc84(5));
		atof(engine->vfunc84(6));
		pPlayer->m_vec206c.z = 0.0f;
		pPlayer->m_n207C = 1;
	}
	else if (engine->vfunc85() >= 4)
	{
		Vector vecDest = g_1070d1b0;
		vecDest.x = atof(engine->vfunc84(1));
		vecDest.y = atof(engine->vfunc84(2));
		vecDest.z = atof(engine->vfunc84(3));
		sub_101cf5c0((CBaseEntity *)pPlayer, &vecDest, 0);
		sub_1028d820(&vecDest);
	}
	else
	{
		void (*pfnMsg)(const char *pMsg, ...) = g_109f3628;
		pfnMsg("teleport_player usage:\n");
		pfnMsg("\tSupply the name of an entity to be teleported to that entity's position.\n");
		pfnMsg("\tSupply an X Y Z coordinate to be teleported to that point in space.\n");
	}
}
// END FUNCTION

// FUNCTION: 0x10180740 size=0xa
#include "ConCommand.h"
void sub_101803a0(void);
ConCommand g_10725b2c("teleport_player", sub_101803a0, "Teleports the player to a named entity, or to an X Y Z coordinate", 0, 0);
// END FUNCTION

// FUNCTION: 0x101807d0 size=0x123
#include "CEntityVSlots.h"

extern "C" double atof(const char *);
extern "C" int atoi(const char *);

#define PV(n) virtual void s##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct HurtTarget_t {
	PV100(a) PV100(b) PV100(c)
	PV10(d0) PV10(d1) PV10(d2) PV10(d3)
	PV(d40) PV(d41) PV(d42)
	virtual void vfunc343(float a, float b, int n);
};

struct HurtEntity_t : public CEntityVSlots {
	char pad[0x9c - sizeof(CEntityVSlots)];
	HurtTarget_t *pTarget;
};

struct EntQuery_t {
	int m_listIndex;
	int m_listCount;
	HurtEntity_t *m_pList[256];
	EntQuery_t *sub_1000bc30(const Vector *pCenter, float flRadius, int a, int b);
};

HurtEntity_t *sub_101193b0();
int __fastcall sub_101ccd40(int *pQuery);

void sub_101807d0()
{
	HurtEntity_t *pPlayer = sub_101193b0();
	float flA = (float)atof(engine->vfunc84(1));
	float flB = (float)atof(engine->vfunc84(2));
	int nMode = atoi(engine->vfunc84(3));
	if (pPlayer && flA > 0.0f && flB > 0.0f && nMode >= 0 && nMode < 3) {
		EntQuery_t query;
		query.sub_1000bc30(pPlayer->slot220(), 4096.0f, 0, 0);
		for (HurtEntity_t *pEnt = (HurtEntity_t *)sub_101ccd40((int *)&query); pEnt; pEnt = (HurtEntity_t *)sub_101ccd40((int *)&query)) {
			if (pEnt->pTarget && pEnt->slot158())
				pEnt->pTarget->vfunc343(flA, flB, nMode);
			query.m_listIndex++;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10180950 size=0xa
#include "ConCommand.h"
void sub_101807d0(void);
ConCommand g_107250a4("shaky_hands", sub_101807d0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x101809e0 size=0x5a
#include <stdlib.h>

void *sub_101193b0();
void sub_101cebc0(void *p, int a, int b);

void sub_101809e0()
{
	void *pPlayer = sub_101193b0();
	char a = atoi(engine->vfunc84(1));
	int b = atoi(engine->vfunc84(2));
	if (pPlayer)
		sub_101cebc0(pPlayer, (unsigned char)a, b);
}
// END FUNCTION

// FUNCTION: 0x10180a60 size=0xa
#include "ConCommand.h"
void sub_101809e0(void);
ConCommand g_1072591c("infobar_message", sub_101809e0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180af0 size=0x139
#include "CBaseEntity.h"
#include <string.h>
#include "CGlobalEntityList.h"
#include "ConVar.h"

extern CGlobalEntityList g_106eb5d8;
void sub_101cd940(CBaseEntity *pEnt);
ConVar *sub_10245660(const char *pszName);

// TARGET: sub_10180af0
void sub_10180af0()
{
    CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0);
    while (pEnt) {
        const char *pszClass = pEnt->m_classname11c ? pEnt->m_classname11c : "";
        if (!_stricmp(pszClass, "env_sprite")
            || !_stricmp(pEnt->m_classname11c ? pEnt->m_classname11c : "", "env_particle")
            || !_stricmp(pEnt->m_classname11c ? pEnt->m_classname11c : "", "func_dustmotes")
            || !_stricmp(pEnt->m_classname11c ? pEnt->m_classname11c : "", "func_particle")
            || !_stricmp(pEnt->m_classname11c ? pEnt->m_classname11c : "", "keyframe_rope")
            || !_stricmp(pEnt->m_classname11c ? pEnt->m_classname11c : "", "move_rope"))
            sub_101cd940(pEnt);
        pEnt = g_106eb5d8.sub_100f7060(pEnt);
    }
    ConVar *pVar = sub_10245660("r_cloth");
    if (pVar)
        pVar->vfunc4(0);
    pVar = sub_10245660("r_shadows");
    if (pVar)
        pVar->vfunc4(0);
}
// END FUNCTION

// FUNCTION: 0x10180c80 size=0xa
#include "ConCommand.h"
void sub_10180af0(void);
ConCommand g_10725ab4("remove_extraneous_entities", sub_10180af0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180d10 size=0x9a
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include <string.h>
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
__declspec(dllimport) void DevWarning(const char *pMsg, ...);
void sub_101cd940(CBaseEntity *pEnt);

void sub_10180d10()
{
    CBaseEntity *pEnt = g_106eb5d8.sub_100f7060(0);
    const char *pszClass = engine->vfunc84(1);
    int nRemoved = 0;
    if (pszClass && strlen(pszClass) != 0) {
        for (; pEnt; pEnt = g_106eb5d8.sub_100f7060(pEnt)) {
            const char *pszName = pEnt->m_classname11c;
            if (!pszName)
                pszName = g_106b8540;
            if (_strcmpi(pszName, pszClass) == 0) {
                nRemoved++;
                sub_101cd940(pEnt);
            }
        }
        DevMsg("Removed %d entities\n", nRemoved);
        return;
    }
    DevWarning("please supply an entity class (i.e. 'env_sprite' )\n");
}
// END FUNCTION

// FUNCTION: 0x10180de0 size=0xa
#include "ConCommand.h"
void sub_10180d10(void);
ConCommand g_10725b9c("remove_entities_by_class", sub_10180d10, "deletes all entities of the give classname (i.e. 'env_sprite' )", 0, 0);
// END FUNCTION

// FUNCTION: 0x10180e70 size=0xf8
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
extern void (*g_109f3630)(const char *, ...);
extern void (*g_109f364c)(const char *, ...);
extern char g_10588b48[];
extern char g_10588bd4[];
extern "C" unsigned int __cdecl strlen(const char *);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
void sub_101cd940(CBaseEntity *pEnt);
struct SNamedEnt
{
	char m_pad[0x26c];
	const char *volatile m_pszName;
	const char *GetName()
	{
		const char *n = m_pszName;
		return n ? n : g_106b8540;
	}
	bool NameMatches(const char *pszNameOrWildcard)
	{
		if (GetName() == pszNameOrWildcard)
			return true;
		unsigned int len = strlen(pszNameOrWildcard);
		if (len == 0)
			return m_pszName == 0;
		if (pszNameOrWildcard[len - 1] != '*')
			return _strcmpi(GetName(), pszNameOrWildcard) == 0;
		return _strnicmp(GetName(), pszNameOrWildcard, len - 1) == 0;
	}
};
void sub_10180e70()
{
	SNamedEnt *pEnt = (SNamedEnt *)g_106eb5d8.sub_100f7060(0);
	const char *pszName = engine->vfunc84(1);
	int nRemoved = 0;
	if (pszName && strlen(pszName)) {
		while (pEnt) {
			if (pEnt->NameMatches(pszName)) {
				nRemoved++;
				sub_101cd940((CBaseEntity *)pEnt);
			}
			pEnt = (SNamedEnt *)g_106eb5d8.sub_100f7060((CBaseEntity *)pEnt);
		}
		g_109f3630(g_10588b48, nRemoved);
	} else {
		g_109f364c(g_10588bd4);
	}
}
// END FUNCTION

// FUNCTION: 0x10180fb0 size=0xa
#include "ConCommand.h"
void sub_10180e70(void);
ConCommand g_10724ec8("remove_entities_by_name", sub_10180e70, "Deletes all entities that match the give name, can use wildcards, (i.e. 'rope_*')", 0, 0);
// END FUNCTION

// FUNCTION: 0x10181040 size=0xa
namespace lifted {
extern char g_106e7050;
struct C1000fd3a { int sub_1000fd3a(); };
}
int sub_10181040()
{
    return ((lifted::C1000fd3a *)((int)&lifted::g_106e7050))->sub_1000fd3a();
}
// END FUNCTION

// FUNCTION: 0x10181060 size=0xa
#include "ConCommand.h"
void sub_10181040(void);
ConCommand g_107259d8("remove_discipline_effects", sub_10181040, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x101810f0 size=0x185
#include "StudioHdr.h"

struct FileSystemLite
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20();
	virtual void FPrintf(void *file, const char *pszFormat, ...);
};
extern FileSystemLite *g_1070b238;
extern "C" __declspec(dllimport) void Msg(const char *pMsg, ...);
__declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
int __cdecl sub_1025d760(const char *pszActivityName);
void __cdecl sub_1000cd33(void *file, StudioHdr *hdr, int *counter);

// TARGET: sub_101810f0
void __cdecl sub_101810f0(void *file, StudioHdr *hdr, int *counter)
{
	if (!hdr)
		return;
	Msg("Dumping activity activities for %s:\n", hdr->m_name);
	g_1070b238->FPrintf(file, "Dumping activity activities for %s:\n", hdr->m_name);
	for (int i = 0; i < hdr->m_nLocalSeq; i++) {
		char buf[256];
		int idx = i;
		if (idx < 0)
			idx = 0;
		int *seq = (int *)hdr->LocalSeq(idx);
		if (seq[3] == -1) {
			Q_snprintf(buf, 0x100, "%-4d: (NONE)\t%-56s [%s]\n", *counter, "ACT_INVALID", (char *)seq + seq[0]);
		} else {
			int id = sub_1025d760((char *)seq + seq[1]);
			if (seq[3] == id)
				Q_snprintf(buf, 0x100, "%-4d: (%-4d)\t%-56s [%s] \n", *counter, seq[3], (char *)seq + seq[1], (char *)seq + seq[0]);
			else
				Q_snprintf(buf, 0x100, "%-4d: (ERROR) %s has id %d but should be %d\n", *counter, (char *)seq + seq[1], seq[3], id);
		}
		if ((char)(int)(counter) == -1) { g_1070b238->FPrintf(file, buf); } else { g_1070b238->FPrintf(file, buf); }
		(*counter)++;
	}
	for (int j = 0; j < hdr->m_nIncludeModels; j++) {
		StudioIncludeModel *pInc = (StudioIncludeModel *)(hdr->m_nIncludeIndex + (char *)hdr) + j;
		if (pInc->m_pVirtual) {
			StudioHdr *sub = pInc->m_pVirtual->vfunc1(hdr, j);
			if (sub)
				sub_1000cd33(file, sub, counter);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101812f0 size=0x18d
#include "CBasePlayer.h"
#include "CBaseAnimating.h"

class CBasePlayer;
struct S_FS {
    virtual void *Open(const char *pName, const char *pMode, const char *pPathId);
    virtual void Close(void *h);
    virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6();
    virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual int FPrintf(void *h, const char *pFormat, ...);
};
struct S_Player { CBaseAnimating *sub_1015d680(int i); };

extern S_FS *g_1070b238;
extern int g_1090fbe4;
extern char g_10538764[];
extern char g_1053dd10[];
extern "C" __declspec(dllimport) void Msg(const char *pMsg, ...);
extern "C" __declspec(dllimport) int Q_snprintf(char *pDest, int maxLen, const char *pFormat, ...);
extern "C" void *__cdecl __RTDynamicCast(void *pIn, long vfDelta, void *pSrc, void *pTarget, int isRef);
CBasePlayer *sub_101193b0();
CBaseEntity *sub_10172710(CBasePlayer *pPlayer);
const char *sub_1025d730(int activity);
void sub_101810f0(void *h, void *pModel, int *pCount);

void sub_101812f0()
{
    CBasePlayer *pPlayer = sub_101193b0();
    if (g_1070b238 && pPlayer) {
        void *h = g_1070b238->Open("..\\act_list.txt", "wt", 0);
        int n; n = g_1090fbe4;
        Msg("Dumping activity list (%d items)...\n", n);
        g_1070b238->FPrintf(h, "Dumping activity list (%d items)...\n", n);
        { int i; i = 0; while ((int)i < (int)n) { char buf[256];
            Q_snprintf(buf, 256, "%-4d: %s\n", i, sub_1025d730(i));
            g_1070b238->FPrintf(h, buf); i++; } }
        g_1070b238->FPrintf(h, "\n\n***********************************************************************\n\n");
        CBaseAnimating *pAnim = (CBaseAnimating *)__RTDynamicCast(sub_10172710(pPlayer), 0, g_10538764, g_1053dd10, 0);
        if (!pAnim || !pAnim->sub_100952d0(-1))
            pAnim = (CBaseAnimating *)pPlayer;
        n = 0;
        sub_101810f0(h, pAnim->sub_100952d0(-1), &n);
        g_1070b238->FPrintf(h, "\n\n***********************************************************************\n\n");
        g_1070b238->FPrintf(h, "Dumping view models", n);
        Msg("Dumping view models", n);
        { int j; j = 0; while (2 > j) { n = 0;
            sub_101810f0(h, ((S_Player *)pPlayer)->sub_1015d680(j)->sub_100952d0(-1), &n); ++j; } }
        g_1070b238->Close(h);
    }
}
// END FUNCTION

// FUNCTION: 0x101814f0 size=0xa
#include "ConCommand.h"
void sub_101812f0(void);
ConCommand g_107251ec("dump_activity_lists", sub_101812f0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10181580 size=0x15
#include "CAI_BaseNPCTroika.h"

void CAI_BaseNPCTroika::sub_10181580(unsigned int flags)
{
	*(unsigned int *)(m_pad0004 + 0x1d60 - 4) |= flags;
}
// END FUNCTION

// FUNCTION: 0x101815b0 size=0x17
#include "CAI_BaseNPCTroika.h"
void CAI_BaseNPCTroika::sub_101815b0(unsigned int flags)
{
	*(unsigned int *)((char *)this + 0x1d60) &= ~flags;
}
// END FUNCTION

// FUNCTION: 0x101815e0 size=0x7
struct CUnknown101815e0 { int sub_101815e0(); };
int CUnknown101815e0::sub_101815e0()
{
    return *(int *)((char *)this + 0x1d60);
}
// END FUNCTION

// FUNCTION: 0x10181600 size=0xb
void __fastcall sub_10181600(char *self)
{
	*(int *)(self + 0x1d60) = 0;
}
// END FUNCTION

// FUNCTION: 0x10181620 size=0x15
struct CUnknown10181620 { int sub_10181620(int); };
int CUnknown10181620::sub_10181620(int a0)
{
    *(int *)((char *)this + 0x1d60) = (*(int *)((char *)this + 0x1d60)) ^ a0;
    return a0;
}
// END FUNCTION

// FUNCTION: 0x10181650 size=0x18
struct CUnk10181650 {
    char pad[0x1d60];
    unsigned int m_1d60;
    bool sub_10181650(unsigned int flags);
};

bool CUnk10181650::sub_10181650(unsigned int flags)
{
    return (m_1d60 & flags) == flags;
}
// END FUNCTION

// FUNCTION: 0x10181680 size=0x29
#include "CBasePlayer.h"

// TARGET: CBasePlayer::sub_10181680
void CBasePlayer::sub_10181680(int a, int b)
{
	m_b65c = 1;
	sub_100b3580(0x40000000);
	vfunc449(0, b);
}
// END FUNCTION

// FUNCTION: 0x101816c0 size=0x8f
#include "CBasePlayer.h"

#define OV(n) virtual void v##n();
#define OV10(p) OV(p##0) OV(p##1) OV(p##2) OV(p##3) OV(p##4) OV(p##5) OV(p##6) OV(p##7) OV(p##8) OV(p##9)

struct CHeldWeaponSlots {
	OV(0) OV(1) OV(2) OV(3) OV(4) OV(5) OV(6) OV(7) OV(8) OV(9)
	OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10) OV10(11) OV10(12) OV10(13) OV10(14) OV10(15) OV10(16) OV10(17) OV10(18) OV10(19)
	OV10(20) OV10(21) OV10(22) OV10(23) OV10(24) OV10(25) OV10(26) OV10(27) OV10(28) OV10(29)
	OV10(30)
	virtual void v310(int a);
	OV(311) OV(312) OV(313) OV(314) OV(315) OV(316) OV(317) OV(318) OV(319) OV(320)
	virtual void v321();
	OV(322) OV(323) OV(324) OV(325) OV(326) OV(327) OV(328) OV(329)
	OV10(33) OV(340) OV(341)
	virtual char *v342(int a);
};

struct CHeldEntitySlots {
	OV(0) OV(1) OV(2) OV(3) OV(4) OV(5) OV(6) OV(7) OV(8) OV(9)
	OV10(1) OV10(2) OV10(3) OV10(4) OV10(5) OV10(6) OV10(7) OV10(8) OV10(9)
	OV10(10) OV10(11) OV10(12) OV10(13) OV10(14) OV10(15) OV10(16) OV10(17) OV10(18) OV10(19)
	OV10(20) OV10(21) OV10(22) OV10(23) OV10(24) OV10(25)
	OV(260) OV(261) OV(262) OV(263) OV(264) OV(265)
	virtual void v266(int a);
};

void CBasePlayer::sub_101816c0(const char *pszName)
{
	vfunc457(pszName, 0);
	m_flNextAttack1564 = 0;
	CHeldWeaponSlots *pWeapon = (CHeldWeaponSlots *)sub_1032e7b0();
	if (pWeapon) {
		pWeapon->v310(0);
		*(int *)((char *)pWeapon + 0x854) = -1;
		CHeldEntitySlots *pEnt = (CHeldEntitySlots *)sub_1015d680(*(unsigned int *)((char *)pWeapon + 0x890));
		if (pEnt) {
			char *pszText = pWeapon->v342(0);
			if (pszText && !*pszText)
				pEnt->v266(0);
		}
		((CHeldWeaponSlots *)sub_1032e7b0())->v321();
	}
}
// END FUNCTION

// FUNCTION: 0x10181780 size=0x371
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"

inline bool Player1538Valid(CBasePlayer *p) { return EHandle_Get(*(unsigned int *)&p->m_hTarget1538) && p->m_nTarget153c != -1; }

// TARGET: CBasePlayer::sub_10181780
void CBasePlayer::sub_10181780()
{
	if (!Player1538Valid(this))
		m_nFlags1ED8 &= ~2;
	else
	{
		unsigned int f = m_nFlags1ED8;
		m_nFlags1ED8 = f | 2;
		unsigned int g = f | 2;
		if (!EHandle_Get(*(unsigned int *)&m_hTarget1538) || m_nTargetMode1540 != 2)
			m_nFlags1ED8 = g & ~0x20;
		else
			m_nFlags1ED8 = g | 0x20;
		if (EHandle_Get(*(unsigned int *)&m_hTarget1538) && m_nTargetMode1540 == 8)
			m_nFlags1ED8 |= 0x100;
		else
			m_nFlags1ED8 &= ~0x100;
	}
	if (((CBaseCombatCharacter *)this)->sub_10146a80())
		m_nFlags1ED8 |= 1;
	else
		m_nFlags1ED8 &= ~1;
	if (m_b14aa) m_nFlags1ED8 |= 4; else m_nFlags1ED8 &= ~4;
	if (EHandle_Get(*(unsigned int *)&m_hInteractiveUseTarget) && EHandle_Get(*(unsigned int *)&m_hInteractiveUseTarget) == EHandle_Get(m_h1CB8))
		m_nFlags1ED8 |= 0x200;
	else
		m_nFlags1ED8 &= ~0x200;
	if (EHandle_Get(*(unsigned int *)&m_hInteractiveUseTarget) && EHandle_Get(*(unsigned int *)&m_hInteractiveUseTarget) == EHandle_Get(m_h1CBC))
		m_nFlags1ED8 |= 0x200;
	else
		m_nFlags1ED8 &= ~0x200;
	if (((CBaseCombatCharacter *)this)->sub_1033b7c0())
		m_nFlags1ED8 |= 0x10;
	else
		m_nFlags1ED8 &= ~0x10;
	if ((*(char (__fastcall **)(void *))(*(int *)this + 0x674))(this))
		m_nFlags1ED8 |= 0x80;
	else
		m_nFlags1ED8 &= ~0x80;
	if ((*(char (__fastcall **)(void *))(*(int *)this + 0x670))(this))
		m_nFlags1ED8 |= 8;
	else
		m_nFlags1ED8 &= ~8;
	char bA = ((CBaseCombatCharacter *)this)->sub_10167240();
	char bB = ((CBaseCombatCharacter *)this)->sub_10146a80();
	if (!bA && !bB)
		m_nFlags1ED8 &= ~0x40;
	else if (EHandle_Get(m_h1D40) || EHandle_Get(m_h1D44))
		m_nFlags1ED8 |= 0x40;
	else
		m_nFlags1ED8 &= ~0x40;
}
// END FUNCTION

// FUNCTION: 0x10181be0 size=0x457
#include "CBasePlayer.h"
#include "CUnknown101cccf0.h"
#include "CWorld.h"
#include "CStatDefault3List.h"
#include "CAI_BaseNPCTroika.h"
#include "CAI_BaseNPC.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "CEHandleGet.h"

extern CStatDefault3List g_10738d10;
int sub_1023bd00();
float sub_10182160(Vector *pVec);

// TARGET: CBasePlayer::sub_10181be0
void CBasePlayer::sub_10181be0()
{
	if (gpGlobals->curtime < m_f1D58)
		return;
	m_f1D58 = gpGlobals->curtime + 0.333f;
	static int s_nosferatuClan = g_10738d10.sub_101d5bd0("Player_Nosferatu");
	CWorld *pWorld = (CWorld *)sub_1023bd00();

	if (m_b1D5C)
	{
		m_n1ED0 = 0;
		m_b1D5C = false;
		float flBest = 3.402823466e+38f;
		Vector vecEye = vfunc193();
		CUnknown101cccf0 q;
		CBaseEntity *pEnt;
		for (q.sub_101cccf0((int)&vecEye, 0x44000000, 0x2000, 0);
		     (pEnt = q.sub_101ccd40()) != 0;
		     ++q.m_nIndex)
		{
			if (pEnt->sub_100a52a0() || !pEnt)
				continue;
			CAI_BaseNPCTroika *pNPC = pEnt->m_pNPC98;
			if (!pNPC)
				continue;
			Vector vecDelta;
			VectorSubtract(vecEye, pNPC->vfunc193(), vecDelta);
			float flDist = sub_10182160(&vecDelta);
			if (flDist < flBest)
			{
				if (pNPC->vfunc587((int)this))
				{
					int edict = ((CBaseEntity *)pNPC)->m_pEdict2e0;
					m_n1ED0 = engine->vfunc35(edict);
					flBest = flDist;
				}
			}
		}
		return;
	}

	unsigned int *p = (unsigned int *)((char *)this + 0x1d3c);
	for (int n = 5; n != 0; --n, ++p)
	{
		if (!EHandle_Get(*p))
			continue;
		if (!((CAI_BaseNPC *)EHandle_Get(*p))->vfunc158()
		    || ((CBaseCombatCharacter *)EHandle_Get(*p))->sub_10341aa0()
		    || (((CBaseCombatCharacter *)EHandle_Get(*p))->m_bfAINPCFlags & 0x20000)
		    || (!((CAI_BaseNPC *)EHandle_Get(*p))->sub_10269aa0(0x5a)
		        && !(((CAI_BaseNPC *)EHandle_Get(*p))->vfunc363((CBaseEntity *)this)
		             && ((CAI_BaseNPC *)EHandle_Get(*p))->vfunc201((CBaseEntity *)this, 0x2804091, 0, 0))))
			*p = 0xffffffff;
	}

	if (EHandle_Get(m_h1D50)
	    && !((CAI_BaseNPC *)EHandle_Get(m_h1D50))->sub_10269aa0(0x5a)
	    && !(((CAI_BaseNPC *)EHandle_Get(m_h1D50))->vfunc363((CBaseEntity *)this)
	         && ((CAI_BaseNPC *)EHandle_Get(m_h1D50))->vfunc201((CBaseEntity *)this, 0x2804091, 0, 0)))
		m_h1D50 = 0xffffffff;

	if (((CBaseCombatCharacter *)this)->sub_10337860() == s_nosferatuClan
	    && pWorld->m_n49c == 1 && !pWorld->m_bNosferatuTolerant)
	{
		m_b1D5C = true;
		return;
	}
	m_n1ED0 = 0;
}
// END FUNCTION

// FUNCTION: 0x10182160 size=0x59
#include <math.h>
float sub_10182160(const float *v)
{
	float x = fabs(v[0]);
	float y = fabs(v[1]);
	float z = fabs(v[2]);
	float r;
	if (x > y) {
		if (x > z)
			return x + (z + y) * 0.25f;
	} else {
		if (y > z) {
			r = y + (x + z) * 0.25f;
			return r;
		}
	}
	r = z + (x + y) * 0.25f;
	return r;
}
// END FUNCTION

// FUNCTION: 0x101821e0 size=0x1b
#include "CBasePlayer.h"

int CBasePlayer::vfunc298(int a)
{
	return (a == 4 || a == 5) ? 0x18 : 7;
}
// END FUNCTION

// FUNCTION: 0x10182210 size=0x3b
#include "CBasePlayer.h"

struct CBasePlayerUnit10182210 : CBasePlayer
{
    int sub_10182210(int key);
};

// TARGET: sub_10182210
int CBasePlayerUnit10182210::sub_10182210(int key)
{
    int i = 0;
    int count = *(int *)((char *)this + 0x1d74);
    if (count > 0)
    {
        char *pRecords = *(char **)((char *)this + 0x1d68);
        int *pKey = (int *)(pRecords + 0x30);
        do
        {
            if (*pKey == key)
            {
                return *(int *)(pRecords + (i << 6) + 0x34);
            }
            i++;
            pKey += 16;
        } while (i < count);
    }
    return -1;
}
// END FUNCTION

// FUNCTION: 0x10182260 size=0x154
#include "CBasePlayer.h"
#include "CUtlVector64.h"
#include "QuestJournal.h"

__declspec(dllimport) int Q_strnicmp(const char *a, const char *b, int n);
__declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int n);

struct CQuestRecord
{
	char m_szName[0x30];
	int m_a;
	int m_b;
	int m_c;
	char m_bFlag;
};

struct CQuestVec : CUtlVector64
{
	void sub_10185260(int elem, int num);	// ShiftElementsRight (stub 0x100046ec)
};

struct CQuestPlayerView
{
	char m_pad0000[0x1d68];
	CQuestRecord *m_pRecords;	// 0x1d68
	int m_nAlloc;	// 0x1d6c
	int m_nGrow;	// 0x1d70
	int m_nRecords;	// 0x1d74
	CQuestRecord *m_pElems;	// 0x1d78
	char m_pad1d7c[0x1dac - 0x1d7c];
	int m_n1dac;	// 0x1dac

	CQuestRecord &Rec(int i) { return m_pRecords[i]; }
	CQuestVec *Vec() { return (CQuestVec *)&m_pRecords; }
	void sub_10182260(const char *name, int a, int b, int c);
};

void sub_101cebc0(CBasePlayer *pPlayer, int a, int b);	// stub 0x100138c2
extern QuestJournal g_1074f8f8;
struct QuestJournalV { void *sub_10221b10(int a); };

inline int FindQuestRecord(CQuestPlayerView *p, const char *name)
{
    for (int i = 0; i < p->m_nRecords; i++) {
        if (Q_strnicmp(p->Rec(i).m_szName, name, 0x30) == 0)
            return i;
    }
    return -1;
}

// TARGET: sub_10182260
void CQuestPlayerView::sub_10182260(const char *name, int a, int b, int c)
{
    CQuestPlayerView *p = this;
    CBasePlayer *self = (CBasePlayer *)this;
    unsigned int idx = FindQuestRecord(p, name);
    if (idx == -1) {
        CQuestRecord rec;
        Q_strncpy(rec.m_szName, name, 0x30);
        rec.m_a = a;
        rec.m_b = b;
        rec.m_c = c;
        rec.m_bFlag = 1;
        int elem = p->m_nRecords;
        CQuestVec *v = p->Vec();
        v->sub_101851a0(1);
        v->sub_10185260(elem, 1);
        CQuestRecord *q = &p->Rec(elem);
        if (q)
            *q = rec;
        sub_101cebc0(self, 8, 0);
        p->m_n1dac = *(int *)((char *)g_1074f8f8.sub_10221b10(a) + 8);
        return;
    }
    if (p->m_pRecords[idx].m_a != a || p->m_pRecords[idx].m_b != b || p->m_pRecords[idx].m_c != c) {
        p->m_pRecords[idx].m_a = a;
        p->m_pRecords[idx].m_b = b;
        p->m_pRecords[idx].m_c = c;
        p->m_pRecords[idx].m_bFlag = 1;
        sub_101cebc0(self, 8, 0);
        void *pq;
        if (idx == -1) pq = g_1074f8f8.sub_10221b10(a); else pq = g_1074f8f8.sub_10221b10(a);
        p->m_n1dac = *(int *)((char *)pq + 8);
    }
}
// END FUNCTION

// FUNCTION: 0x10182420 size=0x78
#include "utlrbtree.h"
#include "CUnknown10182420.h"
#include "QuestJournal.h"
extern QuestJournal g_1074f8f8;
extern void (*g_109f366c)(const char *, ...);

char CUnknown10182420::sub_10182420(int quest, int value)
{
	for (int i = 0; i < m_Entries.Count(); i++)
	{
		if (m_Entries[i].m_key == quest)
		{
			if (m_Entries[i].m_value != value)
			{
				int *pState = (int *)g_1074f8f8.sub_10221d60(quest, m_Entries[i].m_value);
				if (pState[2] != 4)
					return 1;
				char **ppName = (char **)g_1074f8f8.sub_10221b10(quest);
				g_109f366c("Attempting to set botched quest %s to state: %d", *ppName, value);
			}
			return 0;
		}
	}
	return 1;
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
	if (a == 4 && (pEnt = LookupG(*(unsigned int *)&m_hInteractiveUseTarget)) && pEnt->vfunc33() == 300)
		return true;
	if (LookupG(*(unsigned int *)&m_hDialogPartnerFE8))
		return false;
	if (((block_10182550::CBasePlayer101618a0 *)this)->sub_101618a0() && !LookupG(*(unsigned int *)&m_hProteanTransformOther))
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

// FUNCTION: 0x10182780 size=0x63
#include "CBasePlayer.h"
#include "engineserver.h"

struct Holder;
bool __fastcall sub_101681a0(Holder *p);

struct S10182780Target {
	char m_pad0000[0x98];
	struct { char m_pad[0x63d8]; char m_b63d8; } *m_p98;
	char m_pad009c[0x2e0 - 0x9c];
	int m_pEdict2e0;
};
struct S10739a4c {
	S10182780Target *sub_101e2910(CBasePlayer *pPlayer, int a, int b);
};
extern S10739a4c g_10739a4c;

int CBasePlayer::sub_10182780()
{
	if (!sub_10175180() && !sub_101681a0((Holder *)this)) {
		S10182780Target *pTarget = g_10739a4c.sub_101e2910(this, m_nRangeStart1B70, m_nRangeEnd1B78);
		if (pTarget && (!pTarget->m_p98 || !pTarget->m_p98->m_b63d8))
			return engine->vfunc35(pTarget->m_pEdict2e0);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10182810 size=0x80
#include "CUnknown10182810.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct SVF158 {
    V100(a)
    V10(d0) V10(d1) V10(d2) V10(d3) V10(d4)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4();
    virtual void e5(); virtual void e6(); virtual void e7();
    virtual bool v158();
};

struct SEntB { char pad[0x9c]; SVF158 *m_p9c; };
struct SHandleEntry { SEntB *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

static inline SEntB *GetEnt(unsigned h)
{
    SEntB *ent;
    if (h == 0xffffffff)
        ent = 0;
    else {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        ent = (he->serial == (h >> 13)) ? he->p : 0;
    }
    return ent;
}

int CUnknown10182810::sub_10182810()
{
    if (GetEnt(m_hTarget) != 0) {
        SEntB *e = GetEnt(*(volatile unsigned *)&m_hTarget);
        if (e->m_p9c != 0 && e->m_p9c->v158())
            return m_result1cc8;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101828b0 size=0x178
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

#define TV(n) virtual void v##n();
#define TV10(p) TV(p##0) TV(p##1) TV(p##2) TV(p##3) TV(p##4) TV(p##5) TV(p##6) TV(p##7) TV(p##8) TV(p##9)

struct STarget
{
	TV(0)
	virtual unsigned int *vfunc1();
	TV(2) TV(3) TV(4) TV(5) TV(6) TV(7) TV(8) TV(9)
	TV10(1) TV10(2) TV10(3) TV10(4) TV10(5) TV10(6) TV10(7) TV10(8) TV10(9) TV10(10) TV10(11) TV10(12) TV10(13) TV10(14)
	TV(150) TV(151) TV(152) TV(153) TV(154) TV(155) TV(156) TV(157)
	virtual bool vfunc158();
	TV(159)
	TV10(16) TV10(17) TV10(18) TV10(19) TV10(20) TV10(21) TV10(22) TV10(23) TV10(24) TV10(25) TV10(26) TV10(27) TV10(28)
	TV(290) TV(291) TV(292)
	virtual int vfunc293();
	TV(294) TV(295) TV(296) TV(297) TV(298) TV(299)
	TV10(30) TV10(31) TV10(32) TV10(33) TV10(34) TV10(35) TV10(36) TV10(37) TV10(38) TV10(39)
	TV(400) TV(401) TV(402) TV(403)
	virtual int vfunc404(CAI_BaseNPC *pNPC);

	int sub_100952d0(int a);	// stub 0x10013d8b
	char sub_100b5190();	// stub 0x10014da8

	char m_pad0004[0x19c - 4];
	unsigned char m_flags19c;
};

struct SBest
{
	char m_pad0000[0x1cc0];
	unsigned int m_hBest;	// 0x1cc0
	float m_flScore;	// 0x1cc4
	int m_nStamp;	// 0x1cc8

	void Reset()
	{
		m_hBest = 0xffffffff;
		m_flScore = 99999.9f;
		m_nStamp = 0;
	}
};

void CAI_BaseNPC::sub_101828b0(CBaseEntity *pEnt, float flScore)
{
	SBest *p = (SBest *)this;
	STarget *pTarget = (STarget *)pEnt;
	STarget *pCur;
	unsigned int h = p->m_hBest;
	if (h == 0xffffffff)
		pCur = 0;
	else {
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
		if (pSlot->m_Serial == (int)(h >> 13))
			pCur = (STarget *)pSlot->m_pEntity;
		else
			pCur = 0;
	}
	if (!pCur)
		p->Reset();
	if (pCur != pTarget) {
		if (pCur && !pCur->vfunc158())
			p->Reset();
		if (flScore < p->m_flScore) {
			if (pTarget->vfunc158() && !(pTarget->m_flags19c & 0x40) && pTarget->sub_100952d0(-1)
				&& pTarget->vfunc404(this) == 1 && pTarget->vfunc293() != (int)this && !pTarget->sub_100b5190()) {
				p->m_hBest = *pTarget->vfunc1();
				p->m_flScore = flScore;
				p->m_nStamp = sub_10182a90();
			}
		}
	} else {
		if (pTarget->vfunc158()) {
			p->m_flScore = flScore;
			p->m_nStamp = sub_10182a90();
		} else
			p->Reset();
	}
}
// END FUNCTION

// FUNCTION: 0x10182a90 size=0x143
#include "CAI_BaseNPC.h"
#include "CUnknown10739d08.h"
#include "CEHandleGet.h"

extern CUnknown10739d08 g_10739d08;

struct ScoreEnt
{
	float sub_1029c970();
	float sub_1029c9f0(float flValue, CAI_BaseNPC *pNPC);
	float sub_1029ca30(float flValue);
};

struct ScoreEntView
{
	char m_pad0000[0x628c];
	unsigned int m_hOther;
};

struct ScoreNPCView : public CAI_BaseNPC
{
	char m_pad0004[0x1cc0 - 4];
	unsigned int m_hBest;
	float m_flBestScore;
	int m_nStamp;
};

// TARGET: CAI_BaseNPC::sub_10182a90
int CAI_BaseNPC::sub_10182a90()
{
	ScoreNPCView *pThis = (ScoreNPCView *)this;
	int nScale = g_10739d08.sub_101e9000();
	ScoreEnt *pEnt = (ScoreEnt *)EHandle_Get(pThis->m_hBest);
	if (pEnt)
	{
		float flFirst = pEnt->sub_1029c970();
		float flSecond;
		float flThird;
		if (EHandle_Get(((ScoreEntView *)pEnt)->m_hOther))
		{
			flSecond = pEnt->sub_1029c9f0(flFirst, this);
			flThird = pEnt->sub_1029ca30(flSecond);
		}
		else
		{
			flThird = pEnt->sub_1029ca30(flFirst);
			flSecond = flThird;
		}
		if (flThird > pThis->m_flBestScore)
			return 0x264;
		if (pThis->m_flBestScore > flFirst)
			return 0;
		int bFlag = nScale * flSecond * 0.01f > pThis->m_flBestScore;
		return (int)(100.0f - (pThis->m_flBestScore - flThird) * 100.0f / (flFirst - flThird)) | (bFlag << 8);
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10182c40 size=0xe6
#include "CAI_BaseNPC.h"
extern char *g_10566458;
extern char g_10724ef0[];
extern const double g_10449270;
struct EntInfo { char *ent; int serial; int pad; };
#define P10(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3(); virtual void x##4(); virtual void x##5(); virtual void x##6(); virtual void x##7(); virtual void x##8(); virtual void x##9();
struct SSoundSys {
    P10(a)
    virtual void b0(); virtual void b1();
    virtual float GetDuration(const char *name);
};
extern SSoundSys *g_1070b248;

void CAI_BaseNPC::sub_10182c40(const char *text, const char *sound)
{
    const char *s = text;
    char *d = g_10724ef0;
    while (*d++ = *s++)
        ;
    *(char **)((char *)this + 0x1ca4) = g_10724ef0[0] ? g_10724ef0 : 0;
    float *pTime = (float *)((char *)this + 0x1ca8);
    *pTime = gpGlobals->curtime - g_10449270;
    float r;
    unsigned int h = *(unsigned int *)((char *)this + 0xfe8);
    if (h != 0xffffffff) {
        EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
        if (e->serial == (h >> 13) && e->ent && sound && *sound) {
            unsigned int h2 = *(volatile unsigned int *)((char *)this + 0xfe8);
            char *pEnt;
            if (h2 != 0xffffffff) {
                EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
                if (e2->serial == (h2 >> 13))
                    pEnt = e2->ent;
                else
                    pEnt = 0;
            } else
                pEnt = 0;
            if (*(int *)(pEnt + 0x98)) {
                r = g_1070b248->GetDuration(sound) + *pTime;
                goto done;
            }
        }
    }
    r = *pTime + 0.6;
done:
    unsigned int f = *(unsigned int *)((char *)this + 0x1cac);
    *pTime = r;
    f |= 1;
    *(unsigned int *)((char *)this + 0x1cac) = f;
}
// END FUNCTION

// FUNCTION: 0x10182d70 size=0x11
void sub_10004007(void *self, int a);

void __fastcall sub_10182d70(void *self, int unusedEdx, int a)
{
	sub_10004007(self, a);
}
// END FUNCTION

// FUNCTION: 0x10182da0 size=0x16
namespace lifted {
int sub_10001654(int, int, int);
}
struct CUnknown10182da0 { int sub_10182da0(int, int); };
int CUnknown10182da0::sub_10182da0(int a0, int a1)
{
    return lifted::sub_10001654((int)this, a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10182dd0 size=0x16
namespace lifted {
int sub_100021fd(int, int, int);
}
struct CUnknown10182dd0 { int sub_10182dd0(int, int); };
int CUnknown10182dd0::sub_10182dd0(int a0, int a1)
{
    return lifted::sub_100021fd((int)this, a0, a1);
}
// END FUNCTION

// FUNCTION: 0x10182e00 size=0x90
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
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "StatDefault3.h"
#include "CUnknown10206c70.h"

#define U1(n) virtual void u##n();
#define U10(n) U1(n##0) U1(n##1) U1(n##2) U1(n##3) U1(n##4) U1(n##5) U1(n##6) U1(n##7) U1(n##8) U1(n##9)

struct CViewModelSlots : CBaseEntity	// slots 241..265 are placeholders, then the model setter
{
	U1(241) U1(242) U1(243) U1(244) U1(245) U1(246) U1(247) U1(248) U1(249)
	U10(25)
	U1(260) U1(261) U1(262) U1(263) U1(264) U1(265)
	virtual void vfunc266(const char *pszModel);	// slot 266 (+0x428)
};

extern CUnknown10206c70 g_1074f028;

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

void CBasePlayer::sub_10182e00(CBaseCombatWeapon *pWeapon)
{
	CViewModelSlots *pViewModel = (CViewModelSlots *)sub_1015d680(1);
	if (pViewModel) {
		if (pWeapon && (!pWeapon->sub_10256220() || pWeapon->sub_10256250())) {
			pViewModel->vfunc266(0);
			return;
		}
		const char *pszHands;
		const char *pszModel = STRINGR(*g_1074f028.sub_10207c40((CBaseCombatCharacter *)this)->sub_101d4ef0(&pszHands, ((CBaseCombatCharacter *)this)->sub_10336920()));
		engine->vfunc13(pszModel, 0);
		pViewModel->vfunc266(pszModel);
	}
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
void CBasePlayer::vfunc24(int pOther)
{
#define pOther ((CBaseEntity *)pOther)
	if (pOther) {
		m_hEnt1C60 = (CBaseEntity *)pOther->m_p9c;
		m_f1DD8 = gpGlobals->curtime;
	}
#undef pOther
}
// END FUNCTION

// FUNCTION: 0x10183040 size=0x34
#include "CBasePlayer.h"
#include "CBaseEntity.h"

// TARGET: CBasePlayer::vfunc25
void CBasePlayer::vfunc25(int pOther)
{
#define pOther ((CBaseEntity *)pOther)
	if (pOther)
	{
		m_hEnt1C60 = (CBaseEntity *)pOther->m_p9c;
	}
#undef pOther
}
// END FUNCTION

// FUNCTION: 0x10183090 size=0x34
#include "CBasePlayer.h"
#include "CBaseEntity.h"
void CBasePlayer::vfunc26(int pOther)
{
#define pOther ((CBaseEntity *)pOther)
	if (pOther) {
		m_hEnt1C60 = (CBaseEntity *)pOther->m_p9c;
	}
#undef pOther
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

// FUNCTION: 0x10183100 size=0xd
#include "CUnknown10183100.h"

void CUnknown10183100::sub_10183100(int value)
{
	m_unk1df8 = value;
}
// END FUNCTION

// FUNCTION: 0x10183120 size=0x134
#include "utlrbtree.h"
#include "utlsortvector.h"
// TARGET: CBasePlayer::sub_10183120
#include "CBasePlayer.h"
#include "CVStatList_t.h"
#include "CUnk10230f00.h"
#include "engineserver.h"

struct CEventOwner10183120
{
	bool sub_100ce450(CBasePlayer *pOwner, const CUnk10230f00 *pKey);
	bool sub_100ce600(int *pOut);
	bool sub_100ce630(float flDelay);
};

extern CEventOwner10183120 g_106e7050;

void CBasePlayer::sub_10183120(int nOldIndex, int nNewIndex, float flOldScale, float flNewScale)
{
	if (nOldIndex == nNewIndex)
		return;

	int i = 0;
	float *pDuration = m_flClientVActiveDisciplineDurations;
	for (; i < 0x11; i++, pDuration++)
	{
		CVStatList_t *pList = CVStatListSet::Of(this)->Find(3);
		if (pList->sub_102012d0(i))
		{
			CUnk10230f00 key;
			key.sub_10230f00(3, i);

			if (g_106e7050.sub_100ce450(this, &key))
			{
				float flRecordTime;
				if (g_106e7050.sub_100ce600((int *)&flRecordTime))
				{
					float flDiff = flRecordTime - EngineGlobals::g_1070b22c->vfunc119(0);
					volatile float flNewDuration = *pDuration - flDiff;
					float flDelta = flDiff * flOldScale;
					flDelta = flDelta / flNewScale;
					if (g_106e7050.sub_100ce630(flDelta))
						*pDuration = flNewDuration + flDelta;
				}
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101832b0 size=0x60
#include "CBaseEntity.h"
#include "CBasePlayer.h"
struct CUnitP4 : CBasePlayer {
    bool sub_101832b0();
};
bool CUnitP4::sub_101832b0()
{
    if (!m_hEnt1DFC.Get()) {
        CBaseEntity *pWeapon = (CBaseEntity *)sub_1032e7b0();
        if (pWeapon) {
            m_hEnt1DFC = pWeapon;
            return true;
        }
        m_hEnt1DFC = (CBaseEntity *)0;
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10183330 size=0xbe
#include "CBaseEntity.h"
#include "CBasePlayer.h"
extern char g_106b8540[];

// TARGET: CBasePlayer::sub_10183330
void CBasePlayer::sub_10183330()
{
	if (m_hEnt1DFC.Get() != 0)
	{
		CBaseEntity *pEnt = m_hEnt1DFC.Get();
		CBaseEntity *pEnt2 = m_hEnt1DFC.Get();
		const char *pszName = pEnt2->m_classname11c ? pEnt2->m_classname11c : g_106b8540;
		vfunc457(pszName, (*(int (__fastcall **)(CBaseEntity *))(*(int *)pEnt + 0x4a0)) (pEnt));
	}
	m_hEnt1DFC.m_Index = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x10183420 size=0xa
#include "ConCommand.h"
void sub_10183470(void);
ConCommand g_107255b4("credits", sub_10183470, 0, 0, 0);
// END FUNCTION

// FUNCTION: 0x10183470 size=0xe1
#include "CSingleUserRecipientFilter.h"

extern int g_10726098;
void *sub_101cda50();

void sub_10183470()
{
	if (engine->vfunc85() == 2)
	{
		void *pPlayer = sub_101cda50();
		if (pPlayer)
		{
			CSingleUserRecipientFilter filter(pPlayer);
			filter.sub_1019cf50();
			engine->vfunc65(&filter, g_10726098);
			engine->vfunc78(engine->vfunc84(1));
			engine->vfunc66();
		}
	}
}
// END FUNCTION

// FUNCTION: 0x101835e0 size=0xb5
#include "CBasePlayer.h"
struct TraceEntry { const char *a, *b, *c; };
extern int *g_109f3680;
extern TraceEntry *g_109f3620;
extern char g_106b8540[];
extern char g_105387dc[];
struct ScopeTrace {
    ScopeTrace(const char *a, const char *b, const char *c) {
        g_109f3620[*g_109f3680].a = a;
        g_109f3620[*g_109f3680].b = b;
        g_109f3620[*g_109f3680].c = c;
        ++*g_109f3680;
    }
    ~ScopeTrace() { --*g_109f3680; }
};
struct Inventory {
    int a, b, c, d, e;
    Inventory() : a(0), b(0), c(0), d(0), e(0) {}
};

void CBasePlayer::sub_101835e0()
{
    const char *ent;
    if (this != 0) {
        ent = *(const char **)((char *)this + 0x26c);
        if (ent == 0) ent = g_106b8540;
    } else {
        ent = g_105387dc;
    }
    ScopeTrace trace("CBasePlayer::Inventory_CreateKeyRingBackup", ent, g_106b8540);
    Inventory **pInv = (Inventory **)((char *)this + 0x245c);
    if (*pInv == 0)
        *pInv = new Inventory;
}
// END FUNCTION

// FUNCTION: 0x101836d0 size=0x149
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
#include "CBaseCombatWeapon.h"
#include "ScopeTrace.h"
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_1055f710[];
extern char g_10588eac[];
void sub_10014614(void *);
struct KeyPrivB { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual const char *v5(); };
struct KeyPrivA { virtual void v0(); virtual void v1(); virtual void v2(); virtual KeyPrivB *v3(); };
struct KeyEdict { char pad[0x40]; KeyPrivA *pPriv; };
struct KeyItem { char pad[0x2e0]; KeyEdict *pEdict; };
struct CKeyringUnit { void sub_10407c40(const char *a, const char *b); };

void CBasePlayer::sub_101836d0(void *pKeyring)
{
    CBaseEntity *pThis = (CBaseEntity *)this;
    ScopeTrace t("CBasePlayer::Inventory_AddLooseKeysToKeyRing", pThis ? (pThis->m_name26c ? pThis->m_name26c : g_106b8540) : g_105387dc);
    if (!pKeyring)
        return;
    bool bAny = false;
    for (int i = 0; i < 0xe0; i++) {
        void *pWeapon = sub_1032e8b0(i);
        if (pWeapon) {
            KeyItem *pKey = (KeyItem *)__RTDynamicCast(pWeapon, 0, g_1055f710, g_10588eac, 0);
            if (pKey) {
                const char *pszName;
                KeyEdict *pEd = pKey->pEdict;
                if (!pEd->pPriv)
                    pszName = g_106b8540;
                else
                    pszName = pEd->pPriv->v3()->v5();
                ((CKeyringUnit *)pKeyring)->sub_10407c40(pszName, (const char *)((CBaseCombatWeapon *)pKey)->sub_102517b0() + 0x88);
                bAny = true;
            }
        }
    }
    if (bAny) {
        do {
            bAny = false;
            for (int i = 0; i < 0xe0; i++) {
                void *pWeapon = sub_1032e8b0(i);
                if (pWeapon) {
                    void *pKey = __RTDynamicCast(pWeapon, 0, g_1055f710, g_10588eac, 0);
                    if (pKey) {
                        sub_10014614(pKey);
                        bAny = true;
                    }
                }
            }
        } while (bAny);
    }
}
// END FUNCTION

// FUNCTION: 0x10183880 size=0x67
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CVStatList_t.h"
struct StatInfoRef { char pad[0x10]; int id; };
struct StatOwner {
    char pad[0x14];
    int m_count;
    StatInfoRef **m_items;
    CVStatList_t *sub_10183880(int id);
};
CVStatList_t *StatOwner::sub_10183880(int id)
{
    return ((CVStatListSet *)this)->Find(id);	// the set: count at +0x14, lists at +0x18
}
// END FUNCTION

// FUNCTION: 0x10183910 size=0x66
#include "StatDefault2.h"
struct StatItem2 { int id; };
struct StatOwner2 {
    char pad[0x14];
    int m_count;
    StatItem2 **m_items;
    StatDefault2 *sub_10183910(int id);
};
StatDefault2 *StatOwner2::sub_10183910(int id)
{
    for (int i = 0; i < m_count; i++) {
        if (m_items[i]->id == id)
            return (StatDefault2 *)m_items[i];
    }
    return StatDefault2_Default();	// the shared default record: one static in the game
}
// END FUNCTION

// FUNCTION: 0x101839a0 size=0x660
#include "MvsnSec.h"
#include "MvsnSec1.h"
unsigned int sub_10184260(unsigned int x);
unsigned int sub_10184280(unsigned int x);

struct CSecVal1
{
	char m_b0;
	char m_b1;
	int m_Value;

	int sub_10184220(unsigned int x);
	__forceinline CSecVal1() {}
	__forceinline CSecVal1(int v) { m_Value = sub_10184220(sub_10184260(v)); }
	__forceinline int Get() const { unsigned int v = m_Value; return sub_10184280((((v & 0x8a66e35) ^ 0x793f90) + 0x8b10412 & 0x175991ca) ^ v ^ 0x783682a9); }
	__forceinline void Copy(const CSecVal1 &o) { m_Value = o.m_Value; m_b1 = o.m_b1; m_b0 = o.m_b0; }	// the inline form of 0x101841f0
};

struct CUnknown101841c0 { void sub_101841c0(const CSecVal1 *p); };

namespace MvsnSec {

CSecureResult *CSecureInt1::vfunc0(CSecureResult *pOut, int *pOp, CSecureInt1 *pA, CSecureInt1 *pB)
{
	CSecVal1 res(0);
	CSecVal1 *a = (CSecVal1 *)pA;
	CSecVal1 *b = (CSecVal1 *)pB;
	switch (*pOp) {
	case 0x707dca01: res.Copy(CSecVal1(a->Get() + b->Get())); break;
	case 0x707dca02: res.Copy(CSecVal1(a->Get() - b->Get())); break;
	case 0x707dca03: res.Copy(CSecVal1(a->Get() * b->Get())); break;
	case 0x707dca04: res.Copy(CSecVal1(a->Get() / b->Get())); break;
	case 0x707dca05: res.Copy(CSecVal1(a->Get() % b->Get())); break;
	case 0x707dca06: res.Copy(CSecVal1(a->Get() << b->Get())); break;
	case 0x707dca07: res.Copy(CSecVal1(a->Get() >> b->Get())); break;
	case 0x707dca08: res.Copy(CSecVal1((unsigned int)a->Get() & (unsigned int)b->Get())); break;
	case 0x707dca09: res.Copy(CSecVal1((unsigned int)a->Get() | (unsigned int)b->Get())); break;
	case 0x707dca0a: res.Copy(CSecVal1((unsigned int)a->Get() ^ (unsigned int)b->Get())); break;
	default:
		((CUnknown101841f0 *)&res)->sub_101841f0((CSecureCodedLocal *)&CSecVal1(b->Get()));
		break;
	}
	((CUnknown101841c0 *)pOut)->sub_101841c0(&res);
	return pOut;
}

}
// END FUNCTION

// FUNCTION: 0x101841c0 size=0x19
struct CUnknown101841c0 { void * sub_101841c0(int); };
void * CUnknown101841c0::sub_101841c0(int a0)
{
    *(char *)this = *(char *)((char *)a0);
    *(char *)((char *)this + 1) = *(char *)((char *)a0 + 1);
    *(int *)((char *)this + 4) = *(int *)((char *)a0 + 4);
    return this;
}
// END FUNCTION

// FUNCTION: 0x101841f0 size=0x19
struct CUnknown101841f0 { void * sub_101841f0(int); };
void * CUnknown101841f0::sub_101841f0(int a0)
{
    *(int *)((char *)this + 4) = *(int *)((char *)a0 + 4);
    *(char *)((char *)this + 1) = *(char *)((char *)a0 + 1);
    *(char *)this = *(char *)((char *)a0);
    return this;
}
// END FUNCTION

// FUNCTION: 0x10184220 size=0x24
unsigned int __stdcall sub_10184220(unsigned int x)
{
	return (((x & 0x8a66e35) ^ 0x85f3db1) + 0x8b10412 & 0x175991ca) ^ x ^ 0x783682a9;
}
// END FUNCTION

// FUNCTION: 0x10184260 size=0x5
#include "MvsnSec1.h"
unsigned int __cdecl sub_1042fc90(unsigned int);
// TARGET: sub_10184260
// the game's 0x10184260: a tail call (jmp) of sub_1042fc90
unsigned int __cdecl sub_10184260(unsigned int a0)
{
	return sub_1042fc90(a0);
}
// END FUNCTION

// FUNCTION: 0x10184280 size=0x5
unsigned int __cdecl sub_1042fd40(unsigned int);
// TARGET: sub_10184280
// the game's 0x10184280: a tail call (jmp) of sub_1042fd40
unsigned int __cdecl sub_10184280(unsigned int a0)
{
	return sub_1042fd40(a0);
}
// END FUNCTION

// FUNCTION: 0x101842a0 size=0x88
#include "CUtlVector4.h"
#include "CEHandleGet.h"

int CUtlVector4::sub_101842a0(const unsigned int *pHandle)
{
	for (int i = 0; i < m_size; i++) {
		CGlobalEntityList_Ent *pSearch = EHandle_Get(*pHandle);
		CGlobalEntityList_Ent *pElem = EHandle_Get(((unsigned int *)m_pMemory)[i]);
		if (pElem == pSearch)
			return i;
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x10184360 size=0x8
void __fastcall sub_10184360(int *p)
{
	p[3] = 0;
}
// END FUNCTION

// FUNCTION: 0x10184380 size=0x8
void __fastcall sub_10184380(int *p) { p[3] = 0; }
// END FUNCTION

// FUNCTION: 0x10184420 size=0x1e
#include "CSprayCan.h"

void sub_100aa7b0(void *p);

// TARGET: CSprayCan::vfunc5
CBaseEntity *CSprayCan::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10184450 size=0x1e
#include "CBloodSplat.h"

void sub_100aa7b0(void *p);

// TARGET: CBloodSplat::vfunc5
CBaseEntity *CBloodSplat::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10184480 size=0x1e
#include "CStripWeapons.h"

void sub_100aa7b0(void *p);

// TARGET: CStripWeapons::vfunc5
CStripWeapons *CStripWeapons::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101844b0 size=0x1e
#include "CRevertSaved.h"

void sub_100aa7b0(void *p);

// TARGET: CRevertSaved::vfunc5
CBaseEntity *CRevertSaved::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
