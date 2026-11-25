// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101a7660 size=0x1e
#include "CHudWeaponSelection.h"

// VC6 writes CHudWeaponSelection's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudWeaponSelection *pcd_emit_101a7660(const CHudWeaponSelection &other) { return new CHudWeaponSelection(other); }

// TARGET: ??_GCHudWeaponSelection@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101a7680 size=0x6a
#include "CHudWeaponSelection.h"
extern "C" __declspec(dllimport) void Msg(const char *, ...);
struct SchemeV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual int GetFont(const char *name);
};
struct HudObj10678dd4 { void sub_101a8c80(); };
extern HudObj10678dd4 g_10678dd4;
int sub_1018ccb0(const char *);
SchemeV *sub_1018ccd0(int);
const char *sub_1018c870(const char *);
extern int g_10678d8c;
extern int g_10678d44;
void CHudWeaponSelection::vfunc1()
{
	vfunc7();
	g_10678dd4.sub_101a8c80();
	*(float *)((char *)this + 0x18) = -1.0f;
	g_10678d8c = sub_1018ccb0("Resource/VampireScheme.res");
	if (!g_10678d8c) {
		Msg("Error loading '%s'\n", "Resource/VampireScheme.res");
		return;
	}
	SchemeV *scheme = sub_1018ccd0(g_10678d8c);
	g_10678d44 = scheme->GetFont(sub_1018c870("HudFont"));
}
// END FUNCTION

// FUNCTION: 0x101a76f0 size=0x13
#include "CHudWeaponSelection.h"
namespace lifted {
extern char g_10678dd4;
struct C101a8c90 { int sub_101a8c90(); };
}
void CHudWeaponSelection::vfunc7()
{
    int t0 = ((lifted::C101a8c90 *)((int)&lifted::g_10678dd4))->sub_101a8c90();
    *(char *)((char *)this + 0x1c) = 0;
}
// END FUNCTION

// FUNCTION: 0x101a7bc0 size=0x3e
#include "CHudWeaponSelection.h"
#include "C_BasePlayer.h"
extern C_BasePlayer *g_104a0d50;
bool sub_1018c770();
// TARGET: CHudWeaponSelection::vfunc5
void CHudWeaponSelection::vfunc5(int a)
{
    C_BasePlayer *p = g_104a0d50;
    if (p && !sub_1018c770()) {
        C_BaseCombatWeapon *w = p->vfunc167();
        this->sub_101a7fa0(a, p, w, 0, 0, 0, 0, 0);
    }
}
// END FUNCTION
