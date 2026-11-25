// CUniformNoiseProxy: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
#pragma once
#include "CResultProxy.h"
#include "CClampProxy.h"

class CUniformNoiseProxy : public CResultProxy
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with CUniformNoiseProxy's own function
    virtual bool vfunc0(void*, void*);
    virtual void vfunc1(int);
    int m_unk04;
    int m_unk08;
    CClampProxy::CInput m_InputMin;   // +0xc
    CClampProxy::CInput m_InputMax;   // +0x18
};
