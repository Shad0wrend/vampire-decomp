// class CWeaponRanged (RTTI .?AVCWeaponRanged@@).
// Its bases (CBaseCombatWeapon and below, all at offset +0x0) are not modelled yet, so
// every slot of the primary vtable up to the ones we need is declared here as a
// placeholder to keep the slot numbers right. CWeaponRangedBase stands for the whole
// base chain: its constructor (CBaseCombatWeapon's, 0x10250ac0) is called out of line.
#pragma once

#define CWR_V(n) virtual void vfunc##n();
#define CWR_V10(p) CWR_V(p##0) CWR_V(p##1) CWR_V(p##2) CWR_V(p##3) CWR_V(p##4) CWR_V(p##5) CWR_V(p##6) CWR_V(p##7) CWR_V(p##8) CWR_V(p##9)

class CWeaponRangedBase
{
public:
    CWeaponRangedBase();
    virtual void vfunc0();
};

class CWeaponRanged : public CWeaponRangedBase
{
public:
    CWeaponRanged();
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual CWeaponRanged *vfunc5(unsigned int flags);
    CWR_V(6) CWR_V(7) CWR_V(8) CWR_V(9)
    CWR_V10(1) CWR_V10(2) CWR_V10(3) CWR_V10(4) CWR_V10(5) CWR_V10(6) CWR_V10(7)
    virtual int vfunc80();  // slot 80: int result (CWeaponRanged_MingXiao_Spit 0x1023...)
    virtual int vfunc81();
    CWR_V(82) CWR_V(83) CWR_V(84) CWR_V(85) CWR_V(86) CWR_V(87) CWR_V(88) CWR_V(89)
    CWR_V10(9)
    CWR_V(100) CWR_V(101) CWR_V(102) CWR_V(103) CWR_V(104) CWR_V(105)
    virtual void vfunc106(const char *pszClassname);    // slot 106: the factories (item_w_*) call it with their classname right after construction
    CWR_V(107) CWR_V(108) CWR_V(109)
    CWR_V10(11) CWR_V10(12) CWR_V10(13) CWR_V10(14) CWR_V10(15) CWR_V10(16) CWR_V10(17) CWR_V10(18) CWR_V10(19)
    CWR_V10(20) CWR_V10(21) CWR_V10(22) CWR_V10(23) CWR_V10(24) CWR_V10(25) CWR_V10(26) CWR_V10(27) CWR_V10(28) CWR_V10(29)
    CWR_V(300) CWR_V(301) CWR_V(302) CWR_V(303) CWR_V(304) CWR_V(305) CWR_V(306)
    virtual void vfunc307(int value);   // CBaseCombatWeapon slot 307 (called with a sound / activity id)
    CWR_V(308) CWR_V(309)
    CWR_V(310) CWR_V(311) CWR_V(312) CWR_V(313) CWR_V(314)
    virtual bool vfunc315();    // slot 315: sets the owner's model name (male / female variant), then asks slots 344 / 343 / 342 for the shot parameters and starts the shot; true when it started
    virtual void vfunc316(int a);   // 0x10239d10: when the owner's character is set and the counter at +0x914 is not negative, clears its flag (sub_10174550(1)) and its +0x1e78 and resets the counter to -1, then CBaseCombatWeapon::vfunc316
    void sub_10253ca0(int a);       // CBaseCombatWeapon::vfunc316, called directly (stub 0x1001428b)
    CWR_V(317) CWR_V(318) CWR_V(319)
    CWR_V(320) CWR_V(321) CWR_V(322) CWR_V(323) CWR_V(324) CWR_V(325) CWR_V(326) CWR_V(327)
    virtual int vfunc328();     // 0x10239210: 0xe0 or 0xbc plus a 0x1f / 0xfc mask on sub_102391c0 (the caller's flag), the 0xe0 form when the state at +0x86c is 1
    CWR_V(329) CWR_V(330)
    virtual const Vector &vfunc331();    // slot 331: a vector inside the current roll slot record
    void sub_10013a57();    // as in CPhysForce (transplant)

    // Slot 370 (animation events), declared as a plain member for now: the slots between 32x and 370 are not modelled.
    void vfunc370(int *event, void *other);     // events 0xfa1 / 0xfa2 set a bodygroup from the event's string, 0xbd6..0xbe4 run sub_10238380 (when the global at 0x1088aee4 and the dword at other+0xa8 are set) or sub_10238320, the rest go to CBaseCombatWeapon::vfunc370
    void vfunc374();    // slot 374 "CWeaponRanged::ToggleZoom"-like (declared as a plain member): flips the state at +0x86c (slot 307 with 0xe7 / 0xe6, slot 333 with 8 or 3), mirrors it into +0x84c and the global at 0x1088aee4, then tells the owner (sub_101cebc0 with 0x1a and the new state)
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
