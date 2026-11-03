// class CRagdollPropAttached : CRagdollProp (the attached-constraint ragdoll); only what matched code needs.
#pragma once

#include "CRagdollProp.h"
#include "Vector.h"

class CRagdollPropAttached : public CRagdollProp
{
public:
    CRagdollProp *vfunc5(unsigned int flags);	// scalar deleting destructor: releases the physics object at +0x1060
    char m_pad_attached[0x103c - sizeof(CRagdollProp)];
    int m_boneIndexAttached;	// 0x103c: set from argument 9 of sub_10156e10
    int m_ragdollAttachedObjectIndex;	// 0x1040: the ragdoll body that is attached (the model's table entry for the bone argument, 0 when it is not > 0)
    Vector m_attachmentPointBoneSpace;	// 0x1044: copy of the attach point (argument 10)
    Vector m_attachmentPointRagdollSpace;	// 0x1050: the attach point transformed into the attached body's space (sub_10138720)
    bool m_bShouldDetach;	// 0x105c
    char m_pad105d[0x1060 - 0x105d];
    void *m_pPhysObj1060;	// 0x1060: the constraint made by the physics environment (g_10723940 slot 12)
    void sub_10156d90();	// releases the physics object at +0x1060 (called when the attachment ends)
    // 0x10156e10 (ret 0x30, twelve stack arguments; called with ecx = the new prop_ragdoll_attached by 0x10157260, whose own
    // arguments it forwards; "InitRagdollAttached"): arg1 = the attached physics object (slots 26 / 38 used, handed to sub_10158b40),
    // args 5..7 + the origin 0x1070d1b0 go to sub_101554a0 (the ragdoll initialiser), arg 8 = the other entity (slots 219 and 202,
    // the owner), arg 9 = bone index (> 0: GetModelPtr(-1) bone table entry (+0xf4, 0xa0 stride, +0x94) gives the object index),
    // arg 10 = the attach point (Vector *), arg 12 = the value handed to the body's slot 27.
    void sub_10156e10(void *pAttached, int a2, int a3, int a4, int a5, int a6, int a7, CBaseEntity *pOther,
        int nBone, const Vector *pAttachPoint, int a11, int a12);
public:
    virtual int vfunc81();
    virtual int vfunc80();
    virtual datamap_t * vfunc82();
};
