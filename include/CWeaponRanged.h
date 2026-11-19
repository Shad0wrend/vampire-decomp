// class CWeaponRanged (RTTI .?AVCWeaponRanged@@): the guns, derived from CBaseCombatWeapon (game RTTI).
#pragma once
#include "Vector.h"
#include "CBaseCombatWeapon.h"

// slot placeholders for local views of other classes (CWeaponRanged.cpp)
#define CWR_V(n) virtual void vfunc##n();
#define CWR_V10(p) CWR_V(p##0) CWR_V(p##1) CWR_V(p##2) CWR_V(p##3) CWR_V(p##4) CWR_V(p##5) CWR_V(p##6) CWR_V(p##7) CWR_V(p##8) CWR_V(p##9)

class CWeaponRanged : public CBaseCombatWeapon
{
public:
    CWeaponRanged();
    // slots 0..371 come from CBaseCombatWeapon; declared here are the ones the game's CWeaponRanged vtable fills
    // with its own function, with the chain's signature (VC6 overrides keep it exactly)
    virtual CBaseEntity *vfunc5(unsigned int flags);
    virtual int vfunc80();    // slot 80: int result (CWeaponRanged_MingXiao_Spit 0x1023...)
    virtual int vfunc81();
    virtual datamap_t *vfunc82();    // 0x102343a0 (matched as sub_102343a0)
    virtual void vfunc104();
    virtual bool vfunc282();    // 0x10234800 (matched as sub_10234800: returns false)
    virtual void vfunc291();
    virtual int vfunc293();    // slot 293 (0x10239f70): the ranged line-of-fire trace
    virtual void vfunc294();
    virtual bool vfunc315();    // slot 315: sets the owner's model name (male / female variant), then asks slots 344 / 343 / 342 for the shot parameters and starts the shot; true when it started
    virtual char vfunc316(int a);    // 0x10239d10: when the owner's character is set and the counter at +0x914 is not negative, clears its flag (sub_10174550(1)) and its +0x1e78 and resets the counter to -1, then CBaseCombatWeapon::vfunc316
    virtual void vfunc319();
    virtual void vfunc320();
    virtual void vfunc321();
    virtual bool vfunc325();
    virtual void vfunc326();
    virtual void vfunc327();
    virtual int vfunc328();    // 0x10239210: 0xe0 or 0xbc plus a 0x1f / 0xfc mask on sub_102391c0 (the caller's flag), the 0xe0 form when the state at +0x86c is 1
    virtual void vfunc329();
    virtual const Vector &vfunc331();    // slot 331: a vector inside the current roll slot record
    virtual void vfunc339();    // slot 339 (0x102397b0): recoil spread kick, a vector handed to the owner character's slot 169
    virtual unsigned int vfunc360();    // 0x102347c0 (matched as sub_102347c0: 0x2000)
    virtual CWeaponActivityRecord *vfunc362();    // 0x10234430 (matched as sub_10234430): the activity table
    virtual int vfunc363();    // 0x10234450 (matched as sub_10234450: 1)
    virtual void vfunc370(int *event, CBaseCombatWeapon *other);    // events 0xfa1 / 0xfa2 set a bodygroup from the event's string, 0xbd6..0xbe4 run sub_10238380 (when the global at 0x1088aee4 and the dword at other+0xa8 are set) or sub_10238320, the rest go to CBaseCombatWeapon::vfunc370
    char sub_10253ca0(int a);       // CBaseCombatWeapon::vfunc316, called directly (stub 0x1001428b)
    // slots 372..374: CWeaponRanged's own new virtuals, in slot order
    virtual void vfunc372();    // slot 372 (0x10238580): ranged-weapon fire step; roll slot sub_102517e0, owner sub_10252290, shot interval loop
    virtual void vfunc373();    // slot 373 (0x102387b0; this in ecx, no stack args, plain ret): the NPC / player fire step: roll slot sub_102517e0 (ammo slot 2 forced while the owner's list +0x4fe84 and +0x914 are positive), owner sub_10252240, misc flag 0x200000, slot 333(1 or 6, 1, 0,0,0,0), aim via owner slot 389 / sub_10176520 (autoaim) or the NPC's slot 574, shot-count loop on +0x730[g_1088aee4] with slot 332 interval (count +0x918), UTIL_TraceLine_DebugCall (mask 0x46004003, CTraceFilterSimple(this, 0)), DevMsg "Presence bonus", a 0x44 byte CVDmg_t-like record copied from +0x77c + roll*0x44 (rep movsd) into a bullet-info struct (0x4a dwords, CVDmg_t ctor 0x101fa5b0, CGameTrace ctor 0x1003ff80) handed to the owner's slot 185 once per shot, CSoundEnt::sub_101bac90(1, origin, ...), slot 339
    virtual void vfunc374();    // slot 374 "CWeaponRanged::ToggleZoom"-like: flips the state at +0x86c (slot 307 with 0xe7 / 0xe6, slot 333 with 8 or 3), mirrors it into +0x84c and the global at 0x1088aee4, then tells the owner (sub_101cebc0 with 0x1a and the new state)
    void sub_10013a57();    // as in CPhysForce (transplant)

    void sub_10238380();    // worker of events 0xbd6..0xbe4
    void sub_10238320();    // worker of events 0xbd6..0xbe4 (stub 0x100049ad)
    void sub_10093b10(int group, int value);    // CBaseAnimating::SetBodygroup, called directly (stub 0x10001bb8)
    void sub_1024f030(int *event, void *other); // CBaseCombatWeapon::vfunc370, called directly (stub 0x10009f02)
    void *sub_10252240();   // the dword at +0x9c of the entity the owner handle at +0x88c resolves to (0 when stale; stub 0x100011f4)
    void *sub_10252290();   // CBaseCombatWeapon::sub_10252290: resolves the owner handle at +0x88c (0 when stale; stub 0x1000411a)
    void *sub_102521f0();   // same as sub_10252240 (stub 0x10014fab)
    void *sub_102517b0();   // CBaseCombatWeapon::sub_102517b0: the weapon's owner (player) object (stub 0x10010ea6)
    int *sub_102517e0();    // CBaseCombatWeapon::sub_102517e0: the weapon's current roll slot record (stub 0x10003d91)
    void sub_10253ea0();    // CBaseCombatWeapon::vfunc319, called directly (stub 0x10009048)
    char sub_10253b70(int a);   // stub 0x1000c37e
    void sub_1023a2a0();    // finds the first empty entry of the owner's list (entries at +0x4fe70, count at +0x4fe84) and stores its index at +0x914 (0 when there is none)
    void sub_10239d80();    // "CWeaponRanged::...": steps the counter at +0x914 through the owner's list (count at +0x4fe84, entries at +0x4fe70) and, for the character object at +0xa8 of the owner entity, sets the flag byte (CFlagSet10174550) and starts slot 333 (4 when the entry is empty, else 9); stores the entry at +0x1e78 of the character (stub 0x10003814)
    void sub_10254250();    // CBaseCombatWeapon::vfunc320, called directly (stub 0x1000668b)
    void sub_10239e70();    // uses up one shot: slot 307(0xb9), sub_10239f30(the owner's character), and unless a tuning flag holds lowers the clip of the current roll slot; an empty clip tells the owner's character slot 385(this, 0, 0) and removes the weapon
    void sub_10239f30(void *pOwner);    // stub 0x1000d198, called directly with the owner's character
    bool sub_10237a50(int a, float *pAngles, float *pOrigin);   // the position and angles of the left index finger bone ("Bip01 L Finger01") of the character behind the aim entity handle at +0x37c (its object at +0x9c): the bone transform (slot 256) combined with a zero matrix, then converted; false without the entity / character / bone
    bool sub_10237570(int a, float *pAngles, float *pOrigin);   // same as sub_10237a50, the variant whose zero matrix is stored dword by dword
    void sub_10257640();    // finds the character the owner's use-entity index (+0x1eb8) names (or, without a player object, the local player's) and stores the results of sub_102573a0 / sub_10257280 for the pair at +0x864 / +0x868
    int sub_102573a0(void *pFrom, void *pTo, int a);    // stub 0x1000d440
    int sub_10257280(void *pFrom, void *pTo, int a);    // stub 0x10011e55
};
