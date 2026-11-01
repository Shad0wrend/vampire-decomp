// CBreakableProp: declared by pcdecomp transplant for 0x1018f230 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

struct inputdata_t;

class CBreakableProp
{
public:
    CBreakableProp *vfunc5(unsigned int flags);
    void vfunc103();    // "CBreakableProp::Spawn"-like: base spawn, slot 265, take-damage mode from the health, default 0.1 at +0xdc, AddFlag(0x20000000)
    void sub_10011793();    // CBaseProp::vfunc103 (jump stub)
    CBreakableProp *sub_1018f1c0();    // constructor
    void vfunc104();    // CBreakableProp::vfunc104 (stub 0x1000978c), called directly by CPropDestructable::vfunc104
    void sub_1000d99f();    // CBaseProp::vfunc104 (stub 0x1000d99f), called directly by CBreakableProp::vfunc104
    void vfunc113();    // slot 113 (stub 0x10004dbd), called directly by CSecCamera::vfunc113
    void vfunc144(void *pInfo);    // "BreakableProp::Break"-like: clears flag 0x2000 / 0x40000, remembers the attacker's handle (+0x768), sets a think function, no damage taking, thinks again in a millisecond
    void vfunc230(int a, int b);    // slot 230: CBaseEntity::vfunc230 (stub 0x10006d61) with the same arguments, then slot 75 (0x12c) with them
    void sub_10007fe5(void *pfnThink, int a, int b);    // SetThink-like helper (stub of 0x100ac4e0)
    void vfunc265();    // slot 265: when the health (+0x210) is 5 and both list nodes (+0x730, +0x748) are empty, sets the health to 0 and warns ("HACK DESTRUCTABLE PROP HEALTH HACK", "Setting entity %-4d's health to 0")
    void sub_1018f750(inputdata_t *pInput);    // "CBreakableProp::InputAddHealth": the integer value of the input is added to the health, set into the OnHealthChanged output at +0x748 which is fired (activator, this); a health of 0 or less runs slot 266 with the activator
    void sub_1018f890(inputdata_t *pInput);    // "CBreakableProp::InputBreak"-like: the input's float (0 when it is not a float or negative) goes on to sub_1018f9f0 (tail jump through the stub 0x10002d1f)
    void sub_10002d1f(float flDelay);    // stub of 0x1018f9f0: full alpha, no render fx, next think curtime + flDelay, random value at +0x770, flag 0x40000, think function
    void sub_1001457e(int flags);    // stub of CBaseEntity::sub_100b3640
    void sub_100124d1(int mode);    // stub of 0x1018f690: called on a freshly created gib prop with the break mode (0 / 1 / other)
    void sub_1018f690(int mode);    // sets the break mode (+0x76c); DevWarning "Invalid collision type %d set on : %s" and 2 outside 0..2
    void sub_1018fa70();    // the fade-out think the break input installs: collision group 1 when none, render fx 2, the alpha at +0x1a3 approaches 0 by 255 / the fade time (+0x770) per second of the time since +0x178; removed once it reaches 0, else thinks again in 0.05 seconds
    void sub_100aaa40(int group);    // CBaseEntity::SetCollisionGroup (stub 0x10013c00), called directly
    const char *sub_1009f200();    // CBaseEntity::GetClassname
    const char *sub_100ab4f0();    // the entity's name for debug output (stub 0x1000b5cd)
    int vfunc124();    // slot 124 "DrawDebugTextOverlays": the base's line offset, plus one line "Health: %d" when the text overlay bit (bit 0 of +0x224) is set
    int sub_10096100();    // CBaseAnimating::vfunc124 (stub 0x10007d97), called directly

    char m_pad0000[0x16c];
    int m_nRenderFX;    // 0x16c
    char m_pad0170[0x178 - 0x170];
    float m_flFadeStart178;    // 0x178
    float m_flNextThink;    // 0x17c
    char m_pad0180[0x1a3 - 0x180];
    unsigned char m_nRenderAlpha;    // 0x1a3
    char m_pad01a4[0x1b1 - 0x1a4];
    char m_bDirty1b1;    // 0x1b1
    char m_pad01b2[0x210 - 0x1b2];
    int m_iHealth;    // 0x210
    char m_pad0214[0x224 - 0x214];
    unsigned char m_fTextOverlayFlags;    // 0x224
    char m_pad0225[0x2e0 - 0x225];
    int m_pEdict;    // 0x2e0
    char m_pad02e4[0x368 - 0x2e4];
    int m_nCollisionGroup;    // 0x368
    char m_pad036c[0x768 - 0x36c];
    EHANDLE m_hAttacker768;    // 0x768: the attacker of the break
    void sub_1018f620();    // the break think: slot 266 with the attacker (handle +0x768), then SetThink(0, 0, 0)
    int m_nBreakMode;    // 0x76c: 0, 1 or 2 (anything else warns and becomes 2)
    float m_flFadeTime770;    // 0x770
public:
    typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
    Datamap82 vfunc82();
};
