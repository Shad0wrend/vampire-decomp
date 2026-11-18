// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1035ac80 size=0x6
// TARGET: sub_1035ac80
extern unsigned char g_10629da0;
unsigned char __cdecl sub_1035ac80(void) { return g_10629da0; }
// END FUNCTION

// FUNCTION: 0x1035ace0 size=0x1d
#include "CGeneric_NPC_bathack.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093a314;
extern B g_10936c74;
int CGeneric_NPC_bathack::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093a314.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1035ad50 size=0x8
#include "CGeneric_NPC_bathack.h"
namespace lifted {
int sub_10006703();
}
int CGeneric_NPC_bathack::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
}
// END FUNCTION

// FUNCTION: 0x1035ad70 size=0x6
#include "CGeneric_NPC_bathack.h"
namespace lifted {
extern char g_1093a2c8;
}
int CGeneric_NPC_bathack::vfunc580()
{
    return (int)&lifted::g_1093a2c8;
}
// END FUNCTION

// FUNCTION: 0x1035ad90 size=0x6
#include "CGeneric_NPC_bathack.h"
namespace lifted {
extern int g_10629da8;
}
int CGeneric_NPC_bathack::vfunc451()
{
    return lifted::g_10629da8;
}
// END FUNCTION

// FUNCTION: 0x1035adb0 size=0x1e
#include "CGeneric_NPC_bathack.h"

void sub_100aa7b0(void *p);

// TARGET: CGeneric_NPC_bathack::vfunc5
CBaseEntity *CGeneric_NPC_bathack::vfunc5(unsigned int flags)
{
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1035ade0 size=0x72
#include "CGeneric_NPC_bathack.h"
struct ISoundPrecache { virtual int Precache(const char *pszSound, int bPreload); };
extern ISoundPrecache *g_1070b248;
extern const char *g_10629d80;
extern const char *g_10629d84;
extern const char *g_10629d88;
extern const char *g_10629d90[4];
extern char g_10629ea4[];
void CGeneric_NPC_bathack::vfunc104()
{
    engine->vfunc13(g_10629ea4, 0);
    g_1070b248->Precache(g_10629d80, 0);
    g_1070b248->Precache(g_10629d84, 0);
    g_1070b248->Precache(g_10629d88, 0);
    for (unsigned int i = 0; i < 4; i++)
        g_1070b248->Precache(g_10629d90[i], 0);
    sub_1027bb50();
}
// END FUNCTION

// FUNCTION: 0x1035ae80 size=0x110
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CGeneric_NPC_bathack.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct SNpc {
	S100(a) S100(b) S100(c) S100(d)
	S10(e0) S10(e1)
	virtual void vfunc420();
	void sub_10273070(int a);
	void sub_1026dc00(int a);
};
struct SCvar {
	virtual void v0();
	virtual char vfunc1();
	char m_pad[0x28 - 4];
	float m_f28;
};

extern SCvar *g_1093a284;
extern float g_104454c4;

void CGeneric_NPC_bathack::vfunc103()
{
	vfunc104();
	vfunc105("models/bats.mdl");
	*(int *)((char *)this + 0x1568) = 0;
	*(int *)((char *)this + 0x156c) = 0;
	((SNpc *)this)->sub_10273070(0);
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(2);
	}
	vfunc93(4, 0);
	*(int *)((char *)this + 0x1570) = 0xf7;
	*(int *)((char *)this + 0x19c) = 0;
	m_iHealth = (int)(g_1093a284->vfunc1() ? g_104454c4 : g_1093a284->m_f28);
	*(float *)((char *)this + 0x1574) = 0.2f;
	*(int *)((char *)this + 0x5cc0) = 0;
	((SNpc *)this)->sub_1026dc00(1);
	((SNpc *)this)->vfunc420();
}
// END FUNCTION

// FUNCTION: 0x1035afe0 size=0x1
#include "CGeneric_NPC_bathack.h"
void CGeneric_NPC_bathack::vfunc495()
{
}
// END FUNCTION

// FUNCTION: 0x1035b000 size=0x1
#include "CGeneric_NPC_bathack.h"
void CGeneric_NPC_bathack::vfunc489()
{
}
// END FUNCTION

// FUNCTION: 0x1035b020 size=0x1
#include "CGeneric_NPC_bathack.h"
void CGeneric_NPC_bathack::vfunc488()
{
}
// END FUNCTION

// FUNCTION: 0x1035b040 size=0x1
#include "CGeneric_NPC_bathack.h"
void CGeneric_NPC_bathack::vfunc491()
{
}
// END FUNCTION

// FUNCTION: 0x1035b080 size=0x2a
#include "CGeneric_NPC_bathack.h"
extern const float g_1044f00c;
extern const float g_1049949c;
extern const float g_1047a3ac;

float CGeneric_NPC_bathack::vfunc516()
{
    int state = *(int *)((char *)this + 0xfec);
    if (state != 0x13) {
        if (state > 0x3a && state <= 0x3c)
            return g_1044f00c;
        return g_1049949c;
    }
    return g_1047a3ac;
}
// END FUNCTION

// FUNCTION: 0x1035b0c0 size=0x6
#include "CGeneric_NPC_bathack.h"
int CGeneric_NPC_bathack::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x1035b100 size=0x5
#include "animevent_t.h"
#include "CGeneric_NPC_bathack.h"
#include "CAI_BaseNPC.h"

// TARGET: CGeneric_NPC_bathack::vfunc259
// the game's 0x1035b100: a tail call (jmp) of CAI_BaseNPC::vfunc259
void CGeneric_NPC_bathack::vfunc259(animevent_t *a0)
{
	((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x1035b120 size=0x5
#include "CGeneric_NPC_bathack.h"
#include "CAI_BaseNPC.h"

// TARGET: CGeneric_NPC_bathack::vfunc438
// the game's 0x1035b120: a tail call (jmp) of CAI_BaseNPC::vfunc438
int CGeneric_NPC_bathack::vfunc438()
{
	return ((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc438();
}
// END FUNCTION

// FUNCTION: 0x1035b140 size=0x5
#include "CGeneric_NPC_bathack.h"
#include "CAI_BaseNPC.h"

// TARGET: CGeneric_NPC_bathack::vfunc440
// the game's 0x1035b140: a tail call (jmp) of CAI_BaseNPC::vfunc440
int CGeneric_NPC_bathack::vfunc440(int a0)
{
	return ((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x1035b160 size=0xd
void __fastcall sub_1000a529(void *pThis, int dummy, float a);

// TARGET: sub_1035b160
void __fastcall sub_1035b160(void *pThis, int dummy, float a)
{
	sub_1000a529(pThis, dummy, a);
}
// END FUNCTION

// FUNCTION: 0x1035b1a0 size=0x1
#include "CGeneric_NPC_bathack.h"
void CGeneric_NPC_bathack::vfunc434()
{
}
// END FUNCTION

// FUNCTION: 0x1035b1e0 size=0x5
#include "CGeneric_NPC_bathack.h"
#include "CBaseCombatCharacter.h"

// TARGET: CGeneric_NPC_bathack::vfunc366
// the game's 0x1035b1e0: a tail call (jmp) of CBaseCombatCharacter::vfunc366
bool CGeneric_NPC_bathack::vfunc366(int a0, int a1, int a2)
{
	return ((CBaseCombatCharacter *)this)->CBaseCombatCharacter::vfunc366(a0, a1, a2);
}
// END FUNCTION
