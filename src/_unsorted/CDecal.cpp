// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023adb0 size=0x65
#include "CDecal.h"
#include "CBaseEntity.h"
extern "C" int _strcmpi(const char *, const char *);
extern void (__cdecl *g_109f362c)(const char *, ...);
#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
struct EngineL {
    SL10(e0) SL5(e1) virtual void e15(); 
    virtual int v16(const char *name, int a);
};
extern EngineL *g_1070b22c;

bool CDecal::sub_1023adb0(const char *szKeyName, const char *szValue)
{
    if (_strcmpi(szKeyName, "texture") == 0) {
        int idx = g_1070b22c->v16(szValue, 1);
        *(int *)((char *)this + 0x450) = idx;
        if (idx >= 0)
            return true;
        g_109f362c("Can't find decal %s\n", szValue);
        return true;
    }
    return ((CBaseEntity *)this)->sub_1009e430(szKeyName, szValue);
}
// END FUNCTION

// FUNCTION: 0x1023efc0 size=0x1e
#include "CDecal.h"

void sub_100aa7b0(void *p);

// TARGET: CDecal::vfunc5
CDecal *CDecal::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
