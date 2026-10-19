// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101286f0 size=0x9c
struct SkillVar { virtual void v0(); virtual bool v1(); char pad[0x28]; int m_value; };
struct SkillEntry { int pad; SkillVar *pVar; };
struct CvarSys { virtual void v0(); virtual void v1(); virtual SkillEntry *v2(const char *name); };
struct EngineCmd { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9();
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8();
	virtual void ServerCommand(const char *cmd); virtual void ServerExecute(); };
extern CvarSys *g_1070b234;
extern EngineCmd *g_1070b22c;
extern int g_1070ba3c;
extern "C" __declspec(dllimport) int Q_snprintf(char *, int, const char *, ...);

// TARGET: CGameRules::vfunc15
void CGameRules::vfunc15()
{
    char cmd[256];
    SkillEntry *e = g_1070b234->v2("skill");
    int skill;
    if (e) {
        if (e->pVar->v1())
            skill = 0;
        else
            skill = e->pVar->m_value;
    } else
        skill = 1;
    g_1070ba3c = skill;
    if (skill < 1)
        skill = 1;
    else if (skill > 3)
        skill = 3;
    else
        goto L;
    g_1070ba3c = skill;
L:
    Q_snprintf(cmd, 256, "exec skill%d.cfg\n", skill);
    g_1070b22c->ServerCommand(cmd);
    g_1070b22c->ServerExecute();
}
// END FUNCTION

// FUNCTION: 0x101295a0 size=0x8
#include "CGameRules.h"

const char *CGameRules::vfunc67(int)
{
	return "";
}
// END FUNCTION

// FUNCTION: 0x10129600 size=0x8
extern char g_106b8540[];

// TARGET: CGameRules::vfunc70
const char *CGameRules::vfunc70(int index)
{
	return g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x101296a0 size=0x1e
#include "CGameRules.h"

// TARGET: CGameRules::vfunc0
CGameRules *CGameRules::vfunc0(unsigned int flags)
{
	sub_1000d189();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION
