// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c97d0 size=0x25
#include "CTriggerSave.h"

struct CUnknown1070ba0c
{
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
    virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4();
    virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
    virtual void c0(); virtual void c1(); virtual bool vfunc22();
};

extern CUnknown1070ba0c *g_1070ba0c;
void sub_10014614(CTriggerSave *pThis);

// TARGET: CTriggerSave::vfunc103
void CTriggerSave::vfunc103()
{
    if (g_1070ba0c->vfunc22())
    {
        sub_10014614(this);
        return;
    }
    sub_1000dfd0();
}
// END FUNCTION

// FUNCTION: 0x101c9810 size=0x30
#include "CTriggerSave.h"
void sub_10014614(CTriggerSave *pThis);
struct CTriggerSaveOtherView { char pad[0xa8]; void *m_pA8; };
void CTriggerSave::vfunc175(CBaseEntity *pOther)
{
	if (((CTriggerSaveOtherView *)pOther)->m_pA8) {
		sub_10014614(this);
		engine->vfunc59("autosave\n");
	}
}
// END FUNCTION

// FUNCTION: 0x101cc070 size=0x4c
#include "CTriggerSave.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerSave::vfunc5
CBaseEntity *CTriggerSave::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION
