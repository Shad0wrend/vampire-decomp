// CPhysicsPropContested: physics prop that can be contested (derived from CPhysicsProp at +0x0).
// Only the members that decompiled code needs are declared. The modelled part of CBaseEntity ends at +0x3e0.
#pragma once
#include "COutputEvent.h"

#include "CPhysicsProp.h"

class CPhysicsPropContested : public CPhysicsProp
{
public:
    CPhysicsProp *vfunc5(unsigned int flags);
    virtual bool vfunc32(int a);    // slot 32 override: the base implementation unless the byte at +0x7ac is clear (then true)
    void vfunc39(CBaseEntity *pOther);    // slot 39 (declared as a plain member: the base slot has no argument here): the base implementation while the byte at +0x7ac is set; else, for a character (move type not 7) whose stat list 0 value 1 reaches the dword at +0x78c, the base worker sub_10192b50 and the base implementation run and the time is stamped at +0x7b0; otherwise the player view message 0x2f is sent
    void vfunc41(CBaseEntity *pOther);    // slot 41 (declared as a plain member: the base slot has no argument here): the base implementation while the byte at +0x7ac is set; else, for a character whose stat list 0 value 1 is below the dword at +0x78c, the character's player object (+0xa8) is told (slot 306) and the player view message 0x2f is sent, otherwise the base worker sub_10192b50 runs
    void vfunc103();    // slot 103: CPhysicsProp::vfunc103, then the entity at +0x36c (when set) gets its slot 24 called with 0, CBaseEntity::sub_100b3840(2), and the byte at +0x7ac is cleared
    void vfunc104();    // slot 104: CBreakableProp::vfunc104 (stub 0x1000978c), then when the object at +0x7a8 (or the global 0x106b8540 when null) has its first byte set, the engine's slot 0 (0x1070b248) is called with it and 0
    void sub_10191810(CBaseEntity *pOther);    // CPhysicsProp::vfunc41 (stub 0x10015cb7), called directly
    void sub_101917f0(CBaseEntity *pOther);    // CPhysicsProp::vfunc39 (stub 0x100158b1), called directly
    void sub_10192b50(CBaseEntity *pOther);    // stub 0x1000b7bc, called directly

    char m_pad03e0[0x730 - 0x3e0];
    COutputEvent m_Output730;
    COutputEvent m_Output748;
    char m_pad0760[0x78c - 0x760];
    int m_n78c;
    COutputEvent m_Output790;
    char *m_p7a8;    // 0x7a8: an object whose first byte is a flag (the global 0x106b8540 stands in for null)
    char m_b7ac;
    char m_pad07ad[0x7b0 - 0x7ad];
    float m_flTime7b0;    // 0x7b0: stamped when the prop was used
public:
    virtual datamap_t * vfunc82();
};
