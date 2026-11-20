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
    void sub_1023bd20();    // stub 0x10004ead
    void sub_1023c760(float flFade, const char *pszLandmark, const char *pszLevel);
    void sub_1023ca30();    // stub 0x10011e82    // slot 134: its own (0x1023c6f0)
    virtual void vfunc103();    // slot 103: its own (0x1023bba0)
    virtual void vfunc104();    // slot 104: its own (0x1023c020)
    virtual int vfunc126(int a);    // slot 126: its own (0x1023b5e0)
    virtual int vfunc127(int a);    // slot 127: its own (0x1023b600)
    virtual CBaseEntity *vfunc5(unsigned int flags);    // as in CPhysForce (transplant)
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
    char m_pad04aa[0x4ac - 0x4aa];
    int m_n4ac;
    float m_f4b0;
    float m_f4b4;
    char m_szLevel4b8[0x20];
    char m_szLandmark4d8[0x20];
    char m_pad04f8[0x518 - 0x4f8];
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
    virtual float vfunc135(float);
    virtual bool vfunc136();
    virtual int vfunc137();
    virtual int vfunc138();
    virtual void vfunc139(CBaseEntity *);
    virtual bool vfunc140(CBaseEntity *);
    virtual void vfunc141(class CVDmg_t *, const Vector *, struct CGameTrace *);
    virtual int vfunc142(struct CTakeDamageInfo *);
    virtual int vfunc143(float, int);
    virtual void vfunc144(void *);
    virtual int vfunc145();
    virtual void vfunc146(void *, const Vector &, void *);
    virtual bool vfunc147(CBaseEntity *);
    virtual void vfunc148();
    virtual void vfunc149(int, int);
    virtual void vfunc150();
    virtual void vfunc151(class CBaseCombatWeapon *);
    virtual float vfunc152();
    virtual int vfunc153();
    virtual int vfunc154(int, int);
    virtual void vfunc155(struct CGameTrace *, int, char, int, class CBasePlayer *, int, char);
    virtual void vfunc156(int);
    virtual bool vfunc157(int);
    virtual bool vfunc158();
    virtual void vfunc159();
    virtual bool vfunc160(const char *);
    virtual bool vfunc161(const char *);
    virtual char vfunc162();
    virtual void vfunc163();
    virtual bool vfunc164();
    virtual void vfunc165(void *);
    virtual bool vfunc166(CBaseEntity *);
    virtual CBaseEntity *vfunc167();
    virtual CBaseEntity *vfunc168();
    virtual void vfunc169(const Vector *);
    virtual void vfunc170(const Vector *);
    virtual void vfunc171();
    virtual void vfunc172();
    virtual void vfunc173(CBaseEntity *, CBaseEntity *, int, int);
    virtual void vfunc174(CBaseEntity *);
    virtual void vfunc175(CBaseEntity *);
    virtual void vfunc176(CBaseEntity *);
    virtual void vfunc177(CBaseEntity *);
    virtual void vfunc178(CBaseEntity *);
    virtual void vfunc179();
    virtual void vfunc180();
    virtual void vfunc181(const float *, const float *, const float *);
    virtual void vfunc182();
    virtual void vfunc183();
    virtual void vfunc184();
    virtual void vfunc185(struct CFireBulletsInfo *);
    virtual void vfunc186();
    virtual CBaseEntity *vfunc187();
    virtual void vfunc188();
    virtual void vfunc189();
    virtual float vfunc190();
    virtual void vfunc191(int);
    virtual Vector vfunc192();
    virtual Vector vfunc193();
    virtual float *vfunc194();
    virtual float *vfunc195();
    virtual Vector vfunc196();
    virtual Vector vfunc197(const Vector &, char, char);
    virtual float *vfunc198();
    virtual void vfunc199(float *, float *);
    virtual int vfunc200();
    virtual bool vfunc201(CBaseEntity *, int, CBaseEntity **, int);
    virtual void vfunc202(CBaseEntity *);
    virtual float vfunc203();
    virtual float vfunc204();
    virtual void vfunc205();
    virtual void vfunc206();
    virtual bool vfunc207();
    virtual void vfunc208(CBaseEntity *);
    virtual CBaseEntity *vfunc209();
    virtual void vfunc210();
    virtual unsigned int vfunc211();
    virtual void vfunc212(string_t);
    virtual void vfunc213(const float *);
    virtual float *vfunc214();
    virtual Vector *vfunc215();
    virtual void vfunc216(const Vector &);
    virtual float *vfunc217();
    virtual void vfunc218(const float *);
    virtual float *vfunc219();
    virtual float *vfunc220();
    virtual float *vfunc221();
    virtual int vfunc222(int);
    virtual bool vfunc223();
    virtual void vfunc224();
    virtual void vfunc225();
    virtual void vfunc226(int);
    virtual int vfunc227(struct CTakeDamageInfo *);
    virtual void vfunc228(int, int);
    virtual void vfunc229(int);
    virtual void vfunc230(int p0, void *p1);
    virtual void vfunc231(void *p0, float p1, int p2, int p3);
};
