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
