// CEntityRandomProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CResultProxy.h"
#include "CClampProxy.h"

class IMaterialVarView
{
public:
    virtual void v0();
    virtual void v1();
    virtual void SetFloatValue(float flValue);
};

class CEntityRandomProxy : public CResultProxy
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CEntityRandomProxy's own function
    virtual bool vfunc0(void*, void*);
    virtual void vfunc1(int);
    IMaterialVarView *m_pResultVar;
    int m_unk08;
    CClampProxy::CInput m_Input;
};
