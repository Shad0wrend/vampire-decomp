// class CRagdollPropAttached : CRagdollProp (the attached-constraint ragdoll); only what matched code needs.
#pragma once

#include "CRagdollProp.h"

class CRagdollPropAttached : public CRagdollProp
{
public:
    CRagdollProp *vfunc5(unsigned int flags);	// scalar deleting destructor: releases the physics object at +0x1060
    char m_pad_attached[0x1060 - sizeof(CRagdollProp)];
    void *m_pPhysObj1060;
public:
    virtual int vfunc81();
    virtual int vfunc80();
    virtual datamap_t * vfunc82();
};
