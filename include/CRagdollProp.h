// class CRagdollProp; modelled as a direct CBaseEntity subclass (the real bases are not declared).
// Slots 134..269 are placeholders that keep the slot number of vfunc270 right.
#pragma once

#include "CBaseEntity.h"
#include "Ray_t.h"
#include "CGameTrace.h"

struct CRagdollPropDamageInfo	// a CTakeDamageInfo (0x4c bytes), copied by value
{
    int m_data[14];
    unsigned int m_bitsDamageType;	// 0x38
    int m_tail[4];
};

struct CRagdollPropSlot	// 0x18 byte element of the body array at +0x744
{
    int m_pObject;	// the body's physics object
    char m_pad04[4];
    int m_n08;	// 0x08: -1 after a (re)initialisation
    char m_pad0c[0xc];
};

class CRagdollProp : public CBaseEntity
{
public:
    virtual bool vfunc99(int pRay, int fMask, int pTrace);	// slot 99 (ret 0xc), same signature as CBaseEntity::vfunc99 (matched 0x100aa900 pins it to three ints), real types (const Ray_t *pRay, unsigned int fMask, CGameTrace *pTrace): "ClipRayToEntity"-like: a ray with Ray_t::m_IsRay (+0x30) set goes to the base (CBaseAnimating::vfunc99, stub 0x1000dd0a, called directly as sub_100956e0); else false without GetModelPtr(-1) (sub_100952d0); otherwise for every body i < m_nBodies730 the collision global g_1072393c slot 21 (+0x54) traces the ray against body i (handle from the model-info global g_1070b250 slot 18 (+0x48) of this's slot 8) at the transform +0xa80 + 0xc*i (+0x168 further on) into a local CGameTrace; a nearer hit (fraction < pTrace->m_fraction) is copied whole into *pTrace (0x54 bytes). Returns (pTrace->m_fraction < 1.0f). Use (int)(const Ray_t *) casts, or a local CRagdollPropUnit : CRagdollProp view with the typed method
    bool sub_100956e0(int pRay, int fMask, int pTrace);	// CBaseAnimating::vfunc99 (stub 0x1000dd0a, function 0x100956e0), called directly by vfunc99 for a ray with m_IsRay set
    virtual void vfunc103();	// slot 103 "CRagdollProp::Spawn": slot 104, the model (slot 9 / 105), the bone setup (CBaseAnimating::vfunc257 with mask 0xfffc) handed to the ragdoll initialiser sub_101554a0, clears the fields at +0xd54 / +0xd60, +0xd64 = -1, a zero float at +0xdc becomes 0.1f, marks the collision property at +0x270 dirty and sets or clears flag bit 2 of +0x438 by bit 5 of +0x204
    virtual void vfunc104();	// slot 104: the model name (slot 9) or the default one when it is empty, handed to CBaseEntity::sub_100adfd0
    virtual void vfunc123();	// slot 123: on bit 2 of the text-overlay flags (+0x224) calls slot 264, then CBaseEntity::vfunc123
    void vfunc129();	// slot 129: clears the physics object at +0x36c, then the first body pointer at +0x744, then CBaseEntity::vfunc129
    virtual void vfunc130(int a);	// slot 130: CBaseAnimating::vfunc130(a), then the body array is reset (first body = the physics object at +0x36c, no link) and sub_1019bf80 runs on the count at +0x730
    void sub_1008df10(int a);	// CBaseAnimating::vfunc130 (stub 0x10009e6c), called directly
    virtual void vfunc134();
    virtual void vfunc135(); virtual void vfunc136(); virtual void vfunc137(); virtual void vfunc138(); virtual void vfunc139();
    virtual void vfunc140(); virtual void vfunc141(int a, int b, void *pInfo);	// slot 141 (TraceAttack): swaps the physics object of the body the info's short at +0x48 names (when it is inside the body count) with sub_100a68f0, then the base implementation
    virtual void vfunc142(const CRagdollPropDamageInfo *pInfo); virtual void vfunc143(); virtual void vfunc144();	// slot 142 "CRagdollProp::OnTakeDamage"-like: forwards a copy of the info with bit 23 of the damage type added to the entity of the handle at +0xd5c when it is live, else the base implementation
    virtual void vfunc145(); virtual void vfunc146(); virtual void vfunc147(); virtual void vfunc148(); virtual void vfunc149();
    virtual void vfunc150(); virtual void vfunc151(); virtual void vfunc152(); virtual void vfunc153(); virtual void vfunc154();
    virtual void vfunc155(); virtual void vfunc156(); virtual void vfunc157(); virtual char vfunc158(); virtual void vfunc159();
    virtual void vfunc160(); virtual void vfunc161(); virtual void vfunc162(); virtual void vfunc163(); virtual void vfunc164();
    virtual void vfunc165(); virtual void vfunc166(); virtual void vfunc167(); virtual void vfunc168x(); virtual void vfunc169();
    virtual void vfunc170(); virtual void vfunc171(); virtual void vfunc172(); virtual void vfunc173(); virtual void vfunc174();
    virtual void vfunc175(); virtual void vfunc176(); virtual void vfunc177(); virtual void vfunc178(); virtual void vfunc179();
    virtual void vfunc180(); virtual void vfunc181(const float *pPosition, const float *pAngles, const float *pVelocity);	// slot 181 "CRagdollProp::Teleport": moves the ragdoll bodies along with the entity: remembers the inverse of the root body's matrix, runs the base Teleport (sub_100ada20), and carries every other body to the new transform
    virtual void vfunc182(); virtual void vfunc183(); virtual void vfunc184();
    virtual void vfunc185(); virtual void vfunc186(); virtual void vfunc187(); virtual void vfunc188(); virtual void vfunc189();
    virtual void vfunc190(); virtual void vfunc191(); virtual void vfunc192(); virtual void vfunc193(); virtual void vfunc194x();
    virtual void vfunc195x(); virtual void vfunc196(); virtual void vfunc197(); virtual void vfunc198(); virtual void vfunc199();
    virtual void vfunc200(); virtual void vfunc201(); virtual void vfunc202(CBaseEntity *pOwner); virtual void vfunc203(); virtual void vfunc204();
    virtual void vfunc205(); virtual void vfunc206(); virtual void vfunc207(); virtual void vfunc208(); virtual void vfunc209();
    virtual void vfunc210(); virtual void vfunc211(); virtual void vfunc212(); virtual void vfunc213(); virtual void vfunc214();
    virtual void vfunc215(); virtual void vfunc216(float *p); virtual float *vfunc217(); virtual void vfunc218(const float *absAngles); virtual void vfunc219();
    virtual void vfunc220(); virtual void vfunc221(); virtual void vfunc222(); virtual void vfunc223(); virtual void vfunc224();
    virtual void vfunc225(); virtual void vfunc226(void *pPhysics); virtual void vfunc227(); virtual void vfunc228(); virtual void vfunc229();	// slot 226 "VPhysicsUpdate" (real arg is IPhysicsObject*, unused): refreshes every ragdoll body's transform, the entity bounds/position and the collision flags; the body is 0x10155fb0
    virtual void vfunc230(); virtual void vfunc231(); virtual void vfunc232(); virtual int vfunc233(int *pOut, int nMax); virtual void vfunc234();	// slot 233: copies the first nMax dwords of the element at +0x744 (one per 0x18 bytes, count at +0x730) into pOut and returns the count
    virtual void vfunc235(); virtual void vfunc236(); virtual void vfunc237(); virtual void vfunc238(); virtual void vfunc239();
    virtual void vfunc240(); virtual void vfunc241(); virtual void vfunc242(); virtual void vfunc243(); virtual void vfunc244();
    virtual void vfunc245(); virtual void vfunc246(); virtual void vfunc247(); virtual void vfunc248(); virtual void vfunc249();
    virtual void vfunc250(); virtual void vfunc251(); virtual void vfunc252(); virtual void vfunc253(); virtual void vfunc254();
    virtual void vfunc255(); virtual void vfunc256();
    virtual void vfunc257(void *pMatrices, int unused);	// slot 257: marks the bones the ragdoll layout (count at +0x730, bone table at +0xa08) handles and runs sub_10138600(parent matrix, matrix) for every other bone of the model (matrices are 0x30 bytes each)
    virtual void vfunc258(); virtual void vfunc259();
    virtual void vfunc260(); virtual void vfunc261(); virtual void vfunc262(); virtual void vfunc263(); virtual void vfunc264();
    virtual int vfunc265(const char *pszBone);	// slot 265: the dword at +0x744 + 0x18 * i of the first ragdoll element i (index table at +0xa08, count at +0x730) that belongs to the studio bone named pszBone or to its nearest parent bone; the first element's dword when nothing matches
    virtual void vfunc266(int a, int unused);	// slot 266: asks each body's physics object (slot 40) for two vectors and hands the second back through slot 39 with a
    virtual bool vfunc267(); virtual void vfunc268(CBaseEntity *pEnt);	// slot 268: remembers pEnt's handle at +0xd5c and takes its take-damage mode (+0x1fc); without an entity the handle is -1 and the mode 1
    virtual bool vfunc269(int, int);
    virtual void vfunc270(int a, int b);
    virtual void vfunc271(int a, int b);
    virtual bool vfunc272(int); virtual int vfunc273(); virtual bool vfunc274(int);
    virtual Vector vfunc275();	// slot 275: a random vector, every component rand() * (1200 / 32767) - 600 (hidden result pointer)
    virtual char vfunc276();
    bool vfunc32(int a);	// slot 32 override (CBaseEntity::vfunc32): false when the flags at +0x204 have bit 5, else whether this is the entity sub_104115b0(a, 0) returns
    void *sub_100952d0(int a);	// CBaseAnimating::sub_100952d0 (GetModelPtr-like), called directly
    CRagdollProp *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
    void sub_10014317();	// as in CPhysForce (transplant)
    char m_pad03e0[0x730 - 0x3e0];
    int m_nBodies730;	// 0x730: the number of ragdoll bodies
    char m_pad0734[0x738 - 0x734];
    int m_n738, m_n73c, m_n740;	// 0x738: cleared with the body array
    
    CRagdollPropSlot m_Bodies[1];	// 0x744: the bodies (0x18 bytes each)
    void sub_10155380();	// ragdoll init: stamps +0x174 with curtime, clears +0x6f4 / +0x6f8 and resets the sequence to the first one CBaseAnimating::sub_1008dc40(0x21, -1) selects (0 when none)
    void sub_101563b0(int index, int unused);	// stores the origin/angles of body `index` at +0x2a0 / +0x2fa (dwords); index 0 also calls slot 216 and PhysicsTouchTriggers
    CRagdollProp *sub_101550d0();	// as in CKeepUpright (transplant)
    void sub_100ada20(const float *pPosition, const float *pAngles, const float *pVelocity);	// CBaseEntity::Teleport (slot 181, stub 0x10012cf1), called directly
    int vfunc124();	// slot 124 "CRagdollProp::DrawDebugTextOverlays": the base's line offset, plus one line ("Mass: %.2f kg / %.2f lb (%s)") when the text overlay bit (byte at +0x224) is set and the physics object at +0x36c exists
    int sub_10096100();	// CBaseAnimating::vfunc124 (stub 0x10007d97), called directly
    void sub_10155a30();	// called directly (stub 0x1000b681), the tail of the attached ragdoll's release
    void sub_10155880();	// releases the attached ragdoll: CBaseEntity::sub_100aaa40(1), then sub_10155a30 (a jump)
    void sub_101554a0(const float *pOrigin, int a, const float *pAngles, void *pBones, void *pName, int b, int bStatic, int c);	// ragdoll initialiser (stub 0x100062a8)
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc39(CBaseEntity *);
public:
    virtual int vfunc81();
    virtual bool vfunc128();
    virtual int vfunc80();
    void vfunc41(int a);	// slot 41 (plain member): forwards a to sub_1040d950 (an empty function in this build)
    virtual int vfunc42(int);
};
