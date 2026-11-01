// CTriggerElectricBugaloo: only what matched code needs, as plain members (no vtable pointer is declared, so offsets start at 0).
#pragma once

struct datamap_t;

class CTriggerElectricBugaloo
{
public:
    void *vfunc5(unsigned int flags);    // slot 5: scalar deleting destructor (member dtors at +0x580/+0x568/+0x4bc/+0x4a4, base dtor, delete when flags & 1)
    bool vfunc32(void *pOther);    // slot 32: same as CTriggerBombSite::vfunc32, with the player's back-pointer handle at +0x1cbc
    int vfunc35(void *pOther);    // slot 35: 0 unless the entity behind the player's back-pointer handle (+0x1cbc of pOther) is this trigger, else 0x3f (0x3e when pOther IsMale)
    void vfunc39(void *pOther);    // slot 39: CBaseEntity::vfunc39 (stub 0x10015262) on pOther's entity, then CAI_BaseNPCTroika::sub_10181580(1) on it after the entity's own sub_10011f68, then the global at 0x1070b228's word at +0xc is stored at +0x598
    void sub_100a4fe0(void *pOther);    // CBaseEntity::vfunc39 (stub 0x10015262), called directly
    void vfunc42(void *pOther);    // slot 42 (0x10231690): sub_1015ef60 on pOther, CAI_BaseNPCTroika::sub_101815b0(1) on pOther, then CBaseEntity::vfunc42(pOther) called directly on this
    void vfunc174(void *pOther);    // slot 174 (StartTouch): like CTriggerBombSite::vfunc174, handle at +0x1cbc
    void vfunc175(void *pOther);    // slot 175 (Touch): the base Touch, then when the entity behind the handle at +0x8c is pOther hands it (resolved again) to sub_10231790
    void sub_100a4af0(void *pOther);    // CBaseEntity::vfunc175 (Touch), called directly
    void sub_10231790(void *pEnt);    // called through the stub at 0x10013eda
    void vfunc176(void *pOther);    // slot 176 (EndTouch): when sub_10007d15(pOther) holds, registers pOther with the member at +0x568; then clears the player's back-pointer handle (+0x1cbc of the object at pOther+0xa8) when it points at this trigger
    bool sub_10007d15(void *pOther);    // stub of 0x101c5460, called with the touching entity
    CTriggerElectricBugaloo *sub_10231290();    // constructor body (0x10231290)

    char m_pad0000[0x8c];
    unsigned int m_hOwner008c;    // 0x008c
    char m_pad0090[0x55c - 0x90];
    bool m_bDisabled;    // 0x055c
    char m_pad055d[0x598 - 0x55d];
    float m_flTouchTime0598;    // 0x0598: the time of the last touch (vfunc39)
    char m_bGiven059c;    // 0x059c: set once the touching character was given its amount
public:
    int vfunc33();
    datamap_t * vfunc82();
    void vfunc103();	// as in CNPC_VBach (transplant)
};
