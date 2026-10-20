// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020ab00 size=0x6d
#include "CBaseVampireSkillEntity.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseVampireSkillEntity *CBaseVampireSkillEntity::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x7f4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7dc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7c4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x794))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1020ab90 size=0x18
#include "CBaseVampireSkillEntity.h"
struct CUnknownGlobals1070b228 { int m_pad[3]; int m_unkc; };
extern CUnknownGlobals1070b228 *g_1070b228;
void CBaseVampireSkillEntity::vfunc103()
{
	sub_10012eef();
	m_unk788 = g_1070b228->m_unkc;
}
// END FUNCTION

// FUNCTION: 0x1020ac50 size=0xb
void CBaseVampireSkillEntity::vfunc272()
{
	m_unk78c = 0;
}
// END FUNCTION

// FUNCTION: 0x1020b1f0 size=0x58
#include "CBaseVampireSkillEntity.h"

extern void *g_1074f04c;
extern void (*g_109f3630)(const char *fmt, ...);
extern char g_105addcc[];

struct CUnknownHelper1020b1f0 {
    void sub_10010794(int a, void *owner, int b);
};

struct CUnknownBotch1020b1f0 {
    char m_pad0000[0x2c];
    int m_f2c;
};

struct CUnknownReport1020b1f0 {
    char *sub_1000b5cd();
};

// TARGET: CBaseVampireSkillEntity::vfunc269
void CBaseVampireSkillEntity::vfunc269(int a)
{
    m_unk78c++;
    ((CUnknownHelper1020b1f0 *)((char *)this + 0x7c4))->sub_10010794(a, this, 0);
    char ok = ((char (__fastcall *)(void *))(*(void ***)g_1074f04c)[1])(g_1074f04c);
    if (ok == 0) {
        CUnknownBotch1020b1f0 *o = (CUnknownBotch1020b1f0 *)g_1074f04c;
        if (o->m_f2c != 0) {
            char *s = ((CUnknownReport1020b1f0 *)this)->sub_1000b5cd();
            g_109f3630(g_105addcc, s);
        }
    }
}
// END FUNCTION
