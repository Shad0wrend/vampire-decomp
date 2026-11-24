// CMessageChars: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IMessageChars.h"

class CMessageChars : public IMessageChars
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CMessageChars adds to its base's vtable: 0-8, vfuncK at slot K
    virtual int vfunc0(int);
    virtual void vfunc1();
    virtual void vfunc2();
    virtual int vfunc3(int a1, int a2, int a3, int a4, int a5, int a6, int a7, const char *fmt, int messageID, ...);
    virtual void vfunc4();
    virtual int vfunc5(float time, int a1, int a2, int a3, int a4, int a5, int a6, int a7, const char *fmt, int messageID, ...);
    virtual int vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
};
