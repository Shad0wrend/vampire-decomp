// CUnknown10258b00: a large state object (the item / weapon info record, one per node of the tree at 0x1089d7c8;
// sub_10259de0(id) returns it) whose reset routine (sub_10258b00) re-initialises two arrays of 0x1093c byte
// records and three arrays of 0xec84 byte records; real name not yet known. The loader sub_10259f80 (called by
// CBaseCombatWeapon::vfunc104) fills it from "vdata/items/%s.txt" through a virtual key/value node (IKVNode of
// CWeaponAmmoInfo.h: slot 6 find sub key, 7 next, 10 GetInt, 11 GetFloat, 13 GetString).
#pragma once

#include "Vector.h"

struct CUnknown10258b00_A    // 0x1093c bytes: a magazine / ammo record (CWeaponMagazineRec in CWeaponAmmoInfo.h)
{
    int m_n00;    // 0x00: -1 ("Size")
    int m_nAmmoWorth;    // 0x04: "ammo_worth"
    int m_n08;    // 0x08: "Default_Size"
    int m_n0c;    // 0x0c: "Dropped_Ammo"
    float m_f10;    // 0x10: 1.0 ("ReloadTime")
    union {
        char m_b14;    // 0x14
        char m_szType[0x80];    // 0x14: "Type"
    };
    char m_szInfoModel[0x80];    // 0x94: "ammoinfomodel"
    int m_n114;    // 0x114: -1
    union {
        char m_b118;    // 0x118
        char m_szPrintName[0x80];    // 0x118: "ammoprintname"
    };
    union {
        char m_b198;    // 0x198
        char m_szDescription[0x2000];    // 0x198: "ammodescription"
    };
    char m_SoundInfo[0xe7a4];    // 0x2198: sub_10258c30(pKV, m_SoundInfo, name)
};

struct CUnknown10258b00_C    // 0x88 bytes
{
    int m_n00;    // 0x00
    char m_b04;    // 0x04
    char m_pad05[0x84 - 0x05];
    int m_n84;    // 0x84
};

struct CUnknown10258b00_B    // 0xec84 bytes: an attack record (3 of them), filled from the "Activation" sections
{
    int m_nIndex;    // 0x00
    union {
        char m_b04;    // 0x04
        char m_szName[0x80];    // 0x04: the section's first string (default "")
    };
    char m_szType[0x80];    // 0x84: "Type"
    int m_n104;    // 0x104: -1 (the TagStrings entry named by m_szName, else 0)
    int m_n108;    // 0x108: -1 (index of the list entry named by m_szType)
    int m_n10c;    // 0x10c: -1 (index of the magazine whose type equals "Ammo_Type")
    int m_nAmmoCost;    // 0x110: "Ammo_Cost"
    int m_nAmmoFired;    // 0x114: "Ammo_Fired" (at least 1)
    char m_sz118[0x80];    // 0x118: a string key
    char m_Dmg198[0x44];    // 0x198: a CVDmg_t (CVDmg_t::Parse)
    char m_szBotchTable[0x80];    // 0x1dc: "Botch_Table"
    int m_n25c;    // 0x25c: -1 (index of the list entry named by m_szBotchTable)
    float m_flAttackRate;    // 0x260: "Attack_Rate" (1.0)
    float m_flNpcRateMin;    // 0x264: "NPC_Attack_Rate_Min" (default 2 * rate)
    float m_flNpcRateMax;    // 0x268: "NPC_Attack_Rate_Max" (default 3 * rate)
    float m_flNpcRateBaseRange;    // 0x26c: "NPC_Attack_Rate_Base_Range" (120)
    int m_nRange;    // 0x270: "Range"
    CUnknown10258b00_C m_C[2];    // 0x274: "DestFX" (filled by sub_10259120)
    float m_flKickPitchMin;    // 0x384: -0.75
    float m_flKickPitchMax;    // 0x388: -10
    float m_flKickPitchDevMin;    // 0x38c: 0.2
    float m_flKickPitchDevMax;    // 0x390: 3
    float m_flKickYawMin;    // 0x394: -0.2
    float m_flKickYawMax;    // 0x398: -1.5
    float m_flKickYawDevMin;    // 0x39c: 0.1
    float m_flKickYawDevMax;    // 0x3a0: 1
    int m_nBurstMin;    // 0x3a4
    int m_nBurstMax;    // 0x3a8
    Vector m_vSpread;    // 0x3ac: VECTOR_CONE_10DEGREES * ("SpreadAngle" * 0.1)
    float m_flImpactForceMin;    // 0x3b8
    float m_flImpactForceMax;    // 0x3bc
    int m_n3c0;    // 0x3c0: bit 0 = allow_autofire
    int m_nCriminalLevel;    // 0x3c4
    int m_nAccuracy;    // 0x3c8
    int m_nCrosshairMinSize;    // 0x3cc
    int m_nCrosshairFireSizeMin;    // 0x3d0
    int m_nCrosshairFireSize;    // 0x3d4
    int m_nCrosshairWalkSizeMin;    // 0x3d8
    int m_nCrosshairWalkSizeMax;    // 0x3dc
    int m_nCrosshairRunSizeMin;    // 0x3e0
    int m_nCrosshairRunSizeMax;    // 0x3e4
    int m_nCrosshairIncSpeedMin;    // 0x3e8
    int m_nCrosshairIncSpeedMax;    // 0x3ec
    int m_nCrosshairDecSpeedMin;    // 0x3f0
    int m_nCrosshairDecSpeedMax;    // 0x3f4
    int m_nBaseLethality;    // 0x3f8
    int m_nSkillRequirement;    // 0x3fc
    float m_flCrosshairFirePercent;    // 0x400
    float m_flMajorKnockbackDist;    // 0x404
    float m_flMinorKnockbackDist;    // 0x408
    int m_nExplodesOnHit;    // 0x40c
    char m_szExplodeParticle[0x80];    // 0x410
    char m_SoundInfo[0xe7a4];    // 0x490: sub_10258c30(pKV, m_SoundInfo, name) after DestFX
    int m_aRangeA[9];    // 0xec34: WeaponRanges table (or 0, then 30000 below)
    int m_nEc58;    // 0xec58: 0x35a4e900
    int m_aRangeB[10];    // 0xec5c: GrossPointBlank table (or 50)
};

class CUnknown10258b00
{
public:
    unsigned short m_nId;    // 0x00: the id sub_1025afe0 returns
    char m_pad0002[0x08 - 2];
    char m_szName[0x80];    // 0x08: the item name ("vdata/items/%s.txt")
    char m_szPrintName[0x80];    // 0x88: "printname" (default "!!! Missing printname on weapon")
    char m_szDescription[0x2000];    // 0x108: "description"
    char m_szActivation0[0x20];    // 0x2108
    char m_szActivation1[0x20];    // 0x2128
    char m_szJammed0[0x20];    // 0x2148
    char m_szJammed1[0x20];    // 0x2168
    char m_szViewModel[0x80];    // 0x2188
    char m_szPlayerModel[0x80];    // 0x2208
    char m_szWieldModelF[0x80];    // 0x2288
    char m_szWieldModelM[0x80];    // 0x2308
    char m_szInfoModel[0x80];    // 0x2388 ("infomodel"; the default of "ammoinfomodel")
    char m_szAnimPrefix[0x10];    // 0x2408
    char m_cImpactSndGroup;    // 0x2418 (sub_102584c0 of "impact_snd_group")
    char m_pad2419[3];
    int m_nBucket;    // 0x241c
    int m_nBucketPosition;    // 0x2420
    int m_nWeight;    // 0x2424
    int m_nItemFlags;    // 0x2428 ("item_flags", default 8)
    int m_nBitFlags;    // 0x242c: 1 BitFlag_CantBeLast, 2 BitFlag_Discipline_Tgt, 8 reload_single
    float m_flZoomSwayDeltaMagMin;    // 0x2430: 0.6
    float m_flZoomSwayDeltaMagMax;    // 0x2434: 3
    float m_flZoomSwayTimerMin;    // 0x2438: 0.5
    float m_flZoomSwayTimerMax;    // 0x243c: 2
    int m_nWeaponClass;    // 0x2440: camera_class: ranged 2, melee 0x10, thrown 4, force_1st 8, force_3rd 0x10
    int m_nIsVisibleInHud;    // 0x2444
    int m_nShowsViewModel;    // 0x2448
    int m_nHidesHandsModel;    // 0x244c
    char m_szItemType[0x80];    // 0x2450
    int m_n24d0;    // 0x24d0
    char m_szSoundGroup[0x80];    // 0x24d4
    int m_n2554;    // 0x2554
    int m_nItemWorth;    // 0x2558
    int m_nPlayerSell;    // 0x255c
    char m_szWieldEffect[0x80];    // 0x2560
    int m_n25e0;    // 0x25e0
    char m_szEquipEffect[0x80];    // 0x25e4
    int m_n2664;    // 0x2664
    CUnknown10258b00_A m_A[2];    // 0x2668
    CUnknown10258b00_B m_B[3];    // 0x238e0
    float m_flImpactForce;    // 0x4fe6c
    int m_aTail[5];    // 0x4fe70: "Scope_Ranges" values
    int m_n4fe84;    // 0x4fe84: their count
    int m_pad4fe88;
    float m_vOrigin[3];    // 0x4fe8c: origin_x / _y / _z
    int m_nThrowingWeapon;    // 0x4fe98
    int m_nIsDroppable;    // 0x4fe9c
    int m_nIsStackable;    // 0x4fea0
    int m_nPermanentInventory;    // 0x4fea4
    int m_nStackLimit;    // 0x4fea8
    int m_nRestrictFlags;    // 0x4feac
    int m_nItemClassDiscount;    // 0x4feb0
    int m_nKnowledgeMin;    // 0x4feb4
    int m_nGrade;    // 0x4feb8: "grade" 1 / 2 / "high" 3 / else 0
    int m_nUpgradeAbility;    // 0x4febc: -1 or CVStatInfoList_t::sub_101ffaa0(upgrade_ability)
    int m_nOccultMin;    // 0x4fec0
    int m_nRangedMin;    // 0x4fec4
    int m_nMeleeMin;    // 0x4fec8
    int m_nThrownMin;    // 0x4fecc
    int m_nOccultPower;    // 0x4fed0: 1 << (index of "occult_power" - 1) in OccultGroups
    int m_nCanStakeDmg;    // 0x4fed4
    int m_nFiresProjectile;    // 0x4fed8
    int m_nProjectileSticks;    // 0x4fedc
    int m_nBloodpointsRestored;    // 0x4fee0
    int m_nIsWieldable;    // 0x4fee4
    int m_nDiscardOnReload;    // 0x4fee8
    float m_flProjectileVelocity;    // 0x4feec
    char m_szProjectileModel[0x80];    // 0x4fef0
    char m_szProjectileParticles[0x80];    // 0x4ff70
    char m_szProjectileClass[0x80];    // 0x4fff0
    char m_szProjectileImpactSound[0x80];    // 0x50070
    char m_szProjectileSound[0x80];    // 0x500f0
    char m_szMuzzleFlash[0x80];    // 0x50170
    char m_szMuzzleSmoke[0x80];    // 0x501f0
    char m_szViewMuzzleFlash[0x80];    // 0x50270
    char m_szViewMuzzleSmoke[0x80];    // 0x502f0
    float m_flKnockbackChance;    // 0x50370
    char m_bUsesAccuracyCursors;    // 0x50374
    char m_pad50375[3];
    char m_SoundInfo[0xe7a4];    // 0x50378: sub_10258c30(pKV, m_SoundInfo, name)
    int m_nEquipMask;    // 0x5eb1c: sub_1025b630(name, &m_nEquipMask, "equip_mask")
    char m_szCritterClass[0x20];    // 0x5eb20: DmgSpecialInfo "CritterClass"
    int m_nDmgModifier;    // 0x5eb40
    char m_szSoundFX[0x80];    // 0x5eb44
    char m_pad5ebc4[0x5ebf0 - 0x5ebc4];
    char m_szCrosshair[10][0x80];    // 0x5ebf0: SpriteData "Acc_Crosshair%02d"
    char m_szCrosshairInteractive[0x80];    // 0x5f0f0
    char m_szCrosshairUp[0x80];    // 0x5f170
    char m_szCrosshairX[0x80];    // 0x5f1f0
    char m_szCrosshairZero[0x80];    // 0x5f270
    char m_pad5f2f0[0x5f314 - 0x5f2f0];
    char m_bShowUsageHint;    // 0x5f314
};

void sub_101a3900(CUnknown10258b00 *p);    // resets the arrays and the fields at +0x24d0.. and +0x4fe70..
