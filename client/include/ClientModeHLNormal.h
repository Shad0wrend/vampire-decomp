// ClientModeHLNormal: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "ClientModeShared.h"
#include "vgui2__Panel.h"

class CClientModeSub_8
{
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(bool); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void v30(); virtual void v31(); virtual void v32(); virtual void v33(int);
};

class ClientModeHLNormal : public ClientModeShared
{
public:
    int m_unk04;
    CClientModeSub_8 m_sub;
    class Viewport : public vgui2::Panel
    {
    public:
        virtual int vfunc17();
        virtual void vfunc97();
        virtual void vfunc107();
    };
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the base slots the game's vtable fills with ClientModeHLNormal's own function
    virtual void vfunc1();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual int vfunc6(float, int);
    virtual char * vfunc7();
    virtual int vfunc9(int);
    virtual void vfunc15(int);
    virtual void vfunc22(int, int);
    virtual void vfunc24(int);
    virtual void vfunc25();
    virtual bool vfunc27();
    virtual void vfunc32();
};
