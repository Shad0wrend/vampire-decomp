// CBreakableProp : CBaseProp (the game's RTTI; vtable 0x10473d2c, 267 slots). It declares the slots whose game
// word differs from CBaseProp's vtable (0x1047332c): 5, 74, 82, 103, 104, 113, 124, 142, 144, 230, and its new
// slots 265, 266. Its data starts at sizeof(CBaseProp) 0x730.
#pragma once
#include "CBaseProp.h"

struct datamap_t;

struct inputdata_t;

class CBreakableProp : public CBaseProp
{
public:
    virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (0x1018f230)
    virtual bool vfunc74(int a);	// slot 74 (0x1018fe50): the take-damage mode is 2
    virtual int vfunc142(struct CTakeDamageInfo *pInfo);	// slot 142 (0x1018f400)
    virtual void vfunc103();    // "CBreakableProp::Spawn"-like: base spawn, slot 265, take-damage mode from the health, default 0.1 at +0xdc, AddFlag(0x20000000)
    void sub_10011793();    // CBaseProp::vfunc103 (jump stub)
    CBreakableProp *sub_1018f1c0();    // constructor
    virtual void vfunc104();    // CBreakableProp::vfunc104 (stub 0x1000978c), called directly by CPropDestructable::vfunc104
    void sub_1000d99f();    // CBaseProp::vfunc104 (stub 0x1000d99f), called directly by CBreakableProp::vfunc104
    virtual void vfunc113();    // slot 113 (stub 0x10004dbd), called directly by CSecCamera::vfunc113
    virtual void vfunc144(void *pInfo);    // "BreakableProp::Break"-like: clears flag 0x2000 / 0x40000, remembers the attacker's handle (+0x768), sets a think function, no damage taking, thinks again in a millisecond
    virtual void vfunc230(int a, int b);    // slot 230: CBaseEntity::vfunc230 (stub 0x10006d61) with the same arguments, then slot 75 (0x12c) with them
    void sub_10007fe5(void *pfnThink, int a, int b);    // SetThink-like helper (stub of 0x100ac4e0)
    virtual void vfunc265();    // slot 265, new in CBreakableProp: when the health (+0x210) is 5 and both list nodes (+0x730, +0x748) are empty, sets the health to 0 and warns ("HACK DESTRUCTABLE PROP HEALTH HACK", "Setting entity %-4d's health to 0")
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
    virtual int vfunc124();    // slot 124 "DrawDebugTextOverlays": the base's line offset, plus one line "Health: %d" when the text overlay bit (bit 0 of +0x224) is set
    int sub_10096100();    // CBaseAnimating::vfunc124 (stub 0x10007d97), called directly

    char m_OnBreak730[0x18];    // 0x730: COutputEvent, fired by Break: ((COutputEvent *)m_OnBreak730)->sub_100cd660(pAttacker, this, 0)
    char m_OnHealthChanged748[0x18];    // 0x748: COutputEvent
    int m_createFrame;	// 0x0760
    const char *m_pszExplosion764;    // 0x764: name of the explosion parameters entity (null = none; g_106b8540 stands in for messages)
    EHANDLE m_hAttacker768;    // 0x768: the attacker of the break
    void sub_100b1d10();
    void sub_1018f620();    // the break think: slot 266 with the attacker (handle +0x768), then SetThink(0, 0, 0)
    int m_nBreakMode;    // 0x76c: 0, 1 or 2 (anything else warns and becomes 2)
    float m_flFadeTime770;    // 0x770
    int m_n774;    // 0x774: gib parameter handed to the gib spawner (sub_10192130 chain, arg 5)
    char m_b778;    // 0x778: gib flag byte handed to the gib spawner (arg 6)
    virtual void vfunc266(CBaseEntity *pAttacker);    // slot 266 "CBreakableProp::Break" (ret 4): remembers the attacker's handle (+0x768, -1 for null), take-damage mode +0x200 = 2 / +0x1fc = 0, fires the output at +0x730 (pAttacker, this, 0 delay: sub_100cd660), takes the physics object's (+0x36c, slot 40) velocity pair or the +0x3bc / +0x3d0 vectors (sub_100b1d10 first when bit 12 of +0x268), AddSolidFlags(4) scope trace (name +0x26c) on the collision property at +0x270, sub_101cf600(this), explosion lookup: dynamic_cast<CParamsExplosion *>(g_106eb5d8.sub_100f7770(0, m_pszExplosion764, pAttacker, 0)) (sub_10104510 / sub_10104730 on success, Warning "%s could not find explosion parameters: %s\n" on failure), then the gib spawner chain slot 219 / 217 / 8 into the cdecl sub_10192130 (arguments: velocities, +0xdc, +0x76c, +0x774, +0x778) and sub_101cd940(this). Twin: 0x10157930
public:
    virtual datamap_t *vfunc82();
};
