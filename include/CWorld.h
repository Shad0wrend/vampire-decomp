// class CWorld: the world entity (derived from CBaseEntity); only the overridden slots needed so far are declared.
#pragma once
#include "string_t.h"

#include "CBaseEntity.h"

class CWorldPlayer    // a player entity as CWorld::vfunc113 sees it
{
public:
    void sub_10170750();    // stub 0x10010a73
};

class CWorld : public CBaseEntity
{
public:
    bool vfunc73(CBaseEntity *pOther);
    CWorld();    // the constructor (0x1023b840): CBaseEntity body, vftable, engine edict 0 attached, world flags, solid BSP / move type none
    ~CWorld();    // the destructor body (0x1023ba30, called by vfunc5 0x1023ba00): vtable CWorld, cleanup calls, then the CBaseEntity destructor
    virtual void vfunc113();    // "CWorld::Activate"-like: CBaseEntity::vfunc113, caches sv_cheats in the global 0x10752e9c, clamps the value at +0x49c to 0..2 and, when that changed it, refreshes every player (sub_10170750) and flags the entity (+0x1b1); resets the globals 0x109247e0 / 0x109247e4 to -1 and 0x10924fb8 to 0
    virtual void vfunc130(int a);
    void sub_1023ca30();    // stub 0x10011e82    // slot 134: its own (0x1023c6f0)
    virtual void vfunc103();    // slot 103: its own (0x1023bba0)
    virtual void vfunc104();    // slot 104: its own (0x1023c020)
    virtual int vfunc126(int a);    // slot 126: its own (0x1023b5e0)
    virtual int vfunc127(int a);    // slot 127: its own (0x1023b600)
    CWorld *vfunc5(unsigned int flags);    // as in CPhysForce (transplant)
    void sub_1000fe98();    // as in CPhysForce (transplant)
    CWorld *sub_1023b840();    // as in CKeepUpright (transplant)
    virtual bool vfunc110(const char *key, const char *value);    // "CWorld::KeyValue": skyname / sounds / WaveHeight / newunit / world_mins / world_maxs, else CBaseEntity::KeyValue
    void vfunc241(void *pSource, int nSound, int unused1, int unused2);    // slot 241 (declared as a plain member): plays the sound of the table entry nSound (global table at 0x105c230c, 8 bytes each, skipped when negative) to every player from the position at +0xc of pSource, through the engine object at 0x10540528 (slot 41)

    char m_padWorld[0x450 - 0x3e0];
    const char *m_psz450;    // 0x0450: the chapter title string (DevMsg "Chapter title: %s", moved to the env_message entity's +0x450)
    const char *m_psz454;    // 0x0454: a string field handed to the object at 0x1070b248 (vtable slot 0)
    string_t m_iszLevelScript;	// 0x0458
    float m_flWaveHeight;    // 0x045c
    float m_vecWorldMins[3];    // 0x0460
    float m_vecWorldMaxs[3];    // 0x046c
    char m_b478;    // 0x0478: nonzero sets the v_dark convar to true
    char m_b479;    // 0x0479: nonzero copied to the global 0x1070ba24
    char m_pad047a[0x47c - 0x47a];
    char m_bColdWorld;    // 0x047c
    char m_pad047d[0x48c - 0x47d];
    unsigned int m_nFogColor1;    // 0x048c: primary fog color (RGBA; CFogController::vfunc124 prints the channels)
    unsigned int m_nFogColor2;    // 0x0490: secondary fog color
    float m_flFogStart;    // 0x0494
    float m_flFogEnd;    // 0x0498
    int m_n49c;    // 0x049c: 0..2
    bool m_bCopWaitArea;	// 0x04a0
    char m_pad04a1[0x4a4 - 0x4a1];
    float m_flCopWaitGrace;	// 0x04a4
    bool m_bNosferatuTolerant;	// 0x04a8
    bool m_bNoFrenzyArea;	// 0x04a9
    char m_pad04aa[0x518 - 0x4aa];
    int m_n518;    // 0x0518
    float m_f51c;    // 0x051c
    float m_f520;    // 0x0520
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc131();
    virtual int vfunc80();
public:
    virtual void vfunc134();
    virtual void vfunc135();
    virtual void vfunc136();
    virtual void vfunc137();
    virtual void vfunc138();
    virtual void vfunc139();
    virtual void vfunc140_slot();
    virtual void vfunc141();
    virtual void vfunc142();
    virtual void vfunc143_slot();
    virtual void vfunc144();
    virtual void vfunc145();
    virtual void vfunc146();
    virtual void vfunc147();
    virtual void vfunc148();
    virtual void vfunc149();
    virtual void vfunc150();
    virtual void vfunc151();
    virtual void vfunc152();
    virtual void vfunc153_slot();
    virtual void vfunc154();
    virtual void vfunc155();
    virtual void vfunc156();
    virtual void vfunc157();
    virtual void vfunc158_slot();
    virtual void vfunc159();
    virtual void vfunc160();
    virtual void vfunc161_slot();
    virtual void vfunc162();
    virtual void vfunc163();
    virtual void vfunc164();
    virtual void vfunc165();
    virtual void vfunc166();
    virtual void vfunc167();
    virtual void vfunc168_slot();
    virtual void vfunc169();
    virtual void vfunc170();
    virtual void vfunc171();
    virtual void vfunc172();
    virtual void vfunc173();
    virtual void vfunc174_slot();
    virtual void vfunc175_slot();
    virtual void vfunc176_slot();
    virtual void vfunc177();
    virtual void vfunc178_slot();
    virtual void vfunc179();
    virtual void vfunc180_slot();
    virtual void vfunc181();
    virtual void vfunc182();
    virtual void vfunc183();
    virtual void vfunc184();
    virtual void vfunc185();
    virtual void vfunc186();
    virtual void vfunc187();
    virtual void vfunc188();
    virtual void vfunc189();
    virtual void vfunc190();
    virtual void vfunc191();
    virtual void vfunc192();
    virtual void vfunc193();
    virtual void vfunc194_slot();
    virtual void vfunc195_slot();
    virtual void vfunc196_slot();
    virtual void vfunc197_slot();
    virtual void vfunc198();
    virtual void vfunc199();
    virtual void vfunc200();
    virtual void vfunc201();
    virtual void vfunc202_slot();
    virtual void vfunc203();
    virtual void vfunc204();
    virtual void vfunc205();
    virtual void vfunc206();
    virtual void vfunc207_slot();
    virtual void vfunc208_slot();
    virtual void vfunc209();
    virtual void vfunc210();
    virtual void vfunc211();
    virtual void vfunc212_slot(int pszModel);
    virtual void vfunc213_slot();
    virtual void vfunc214_slot();
    virtual void vfunc215();
    virtual void vfunc216();
    virtual void vfunc217_slot();
    virtual void vfunc218_slot();
    virtual void vfunc219_slot();
    virtual void vfunc220_slot();
    virtual void vfunc221_slot();
    virtual void vfunc222_slot();
    virtual void vfunc223();
    virtual void vfunc224();
    virtual void vfunc225();
    virtual void vfunc226_slot();
    virtual void vfunc227();
    virtual void vfunc228_slot();
    virtual void vfunc229();
    virtual void vfunc230(int, int);
    virtual void vfunc231(int, int, int, int);
};
