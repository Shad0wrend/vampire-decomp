// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10429f20 size=0xb
void CBaseGrenade::vfunc144(int unused)
{
	vfunc407();
}
// END FUNCTION

// FUNCTION: 0x1042b080 size=0x6c
#include "CBaseGrenade.h"

struct ISoundSink {
	virtual void PrecacheSound(const char *s, int n);
};
extern ISoundSink *g_1070b248;

struct CBaseCombatCharacterThunk {
	void sub_10011324();
};

// TARGET: CBaseGrenade::vfunc104
void CBaseGrenade::vfunc104()
{
	((CBaseCombatCharacterThunk *)this)->sub_10011324();
	g_1070b248->PrecacheSound("weapons/debris1.wav", 0);
	g_1070b248->PrecacheSound("weapons/debris2.wav", 0);
	g_1070b248->PrecacheSound("weapons/debris3.wav", 0);
	g_1070b248->PrecacheSound("weapons/grenade_hit1.wav", 0);
	g_1070b248->PrecacheSound("weapons/grenade_hit2.wav", 0);
	g_1070b248->PrecacheSound("weapons/grenade_hit3.wav", 0);
}
// END FUNCTION

// FUNCTION: 0x1042b240 size=0xd
struct GrenadeField19c0 { char pad[0x19c0]; int m; };
void CBaseGrenade::vfunc191(int value)
{
	((GrenadeField19c0 *)this)->m = value;
}
// END FUNCTION

// FUNCTION: 0x1042b260 size=0xd
struct GrenadeField19b8 { char pad[0x19b8]; int m; };
void CBaseGrenade::vfunc412(int value)
{
	((GrenadeField19b8 *)this)->m = value;
}
// END FUNCTION
