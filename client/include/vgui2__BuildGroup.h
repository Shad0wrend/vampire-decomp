// vgui2::BuildGroup: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "utlvector.h"

namespace vgui2
{
class Panel;

class BuildGroup
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots BuildGroup adds to its base's vtable: 0-22, vfuncK at slot K
    virtual void vfunc0(char);
    virtual bool vfunc1();
    virtual int vfunc2();
    virtual void vfunc3(const char *);
    virtual void vfunc4();
    virtual void vfunc5(void *);
    virtual void vfunc6(void *);
    virtual void vfunc7();
    virtual int vfunc8(int);
    virtual int vfunc9();
    virtual int vfunc10();
    virtual void vfunc11(Panel *);
    virtual void vfunc12();
    virtual int vfunc13(int, int);
    virtual char * vfunc14();
    virtual void vfunc15();
    virtual int vfunc16(int);
    virtual bool vfunc17();
    virtual void vfunc18();
    virtual void vfunc19();
    virtual void vfunc20(int, int);
    virtual void vfunc21();
    virtual int vfunc22(Panel *);
	Panel *sub_101c2900(const char *name);
	void *sub_101c20d0();
	void sub_101c2180();
	Panel *sub_101c26d0(int, int, int);
	void sub_101c2860(char *, Panel *);
	int m_unk4; int m_unk8; int m_unkc;
	int m_n10; int m_n14; int m_n18; int m_unk1c; int m_n20;
	int m_unk24; int m_unk28; int m_unk2c; int m_unk30; int m_unk34; int m_unk38; int m_unk3c;
	CUtlVector<Panel *> m_Panels;
	int m_unk54; int m_unk58; int m_unk5c; int m_unk60;
	CUtlVector<Panel *> m_Controls;
};
}
