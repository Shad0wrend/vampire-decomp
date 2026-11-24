// CInput: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IInput.h"

class CInput : public IInput
{
public:
    void sub_10106880(int);
    void sub_10101df0();
    int m_unk04;
    int m_unk08;
    int m_unk0c;
    int m_unk10;
    int m_unk14;
    int m_unk18;
    int m_unk1c;
    int m_unk20;
    int m_unk24;
    void *m_unk28;
    int m_unk2c[(0xdc - 0x2c) / 4];
    struct CInputKey { char name[0x20]; int value; CInputKey *next; };
    CInputKey *m_pKeys;
    // vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CInput adds to its base's vtable: 0-56, vfuncK at slot K
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual char *vfunc7(int i);
    virtual void vfunc8(int);
    virtual void vfunc9();
    virtual int vfunc10(int, int, int);
    virtual int vfunc11(const char *name);
    virtual void vfunc12();
    virtual void vfunc13();
    virtual void vfunc14();
    virtual void vfunc15();
    virtual void vfunc16();
    virtual void vfunc17();
    virtual bool vfunc18();
    virtual void vfunc19();
    virtual float vfunc20();
    virtual void vfunc21(char);
    virtual void vfunc22();
    virtual void vfunc23();
    virtual bool vfunc24();
    virtual void vfunc25();
    virtual bool vfunc26();
    virtual void vfunc27();
    virtual void vfunc28();
    virtual void vfunc29();
    virtual void vfunc30();
    virtual void vfunc31();
    virtual int vfunc32(int);
    virtual void vfunc33();
    virtual int vfunc34();
    virtual int vfunc35();
    virtual void vfunc36();
    virtual void vfunc37();
    virtual void vfunc38();
    virtual void vfunc39();
    virtual void vfunc40();
    virtual void vfunc41();
    virtual int vfunc42();
    virtual void vfunc43();
    virtual int vfunc44();
    virtual int vfunc45();
    virtual int vfunc46(int, int);
    virtual int vfunc47();
    virtual bool vfunc48();
    virtual bool vfunc49(int, int);
    virtual float vfunc50();
    virtual float vfunc51();
    virtual float vfunc52();
    virtual float vfunc53();
    virtual void vfunc54();
    virtual int vfunc55(int);
    virtual int vfunc56();
};
