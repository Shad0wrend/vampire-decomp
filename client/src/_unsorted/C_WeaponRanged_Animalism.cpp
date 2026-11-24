// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10006190 size=0x6
#include "C_WeaponRanged_Animalism.h"

// TARGET: C_WeaponRanged_Animalism::vfunc16
int C_WeaponRanged_Animalism::vfunc16()
{
	return (int)"C_WeaponRanged_Animalism";
}
// END FUNCTION

// FUNCTION: 0x10006ce0 size=0x18
#include "C_WeaponRanged_Animalism.h"
void sub_10064c60();
bool C_WeaponRanged_Animalism::vfunc189(int a)
{
	bool r = C_BaseCombatWeapon::vfunc189(a);
	sub_10064c60();
	return r;
}
// END FUNCTION

// FUNCTION: 0x10006d20 size=0x3c
#include "C_WeaponRanged_Animalism.h"
#include "CBaseHandle.h"
struct AnimView10006d20 {
    char m_unk[0x8fc];
    CBaseHandle m_h8fc;
    char m_unk900[0x978 - 0x900];
    int m_n978;
    int m_n97c;
};
void sub_10064dd0(CBaseHandle h, char flag);
// TARGET: C_WeaponRanged_Animalism::vfunc167
void C_WeaponRanged_Animalism::vfunc167()
{
    AnimView10006d20 *t = (AnimView10006d20 *)this;
    bool b = (t->m_n978 == 6 && t->m_n97c <= 5);
    sub_10064dd0(t->m_h8fc, b);
}
// END FUNCTION

// FUNCTION: 0x10006d70 size=0x47
#include "C_WeaponRanged_Animalism.h"
#include "CHud.h"
struct EngV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
 virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
 virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void ServerCmd(const char *, int); };
struct HudElV { char pad[0x1c]; char m1c; };
extern CHud g_104cfe38;
extern EngV *g_104a57d4;
// TARGET: ?vfunc246@C_WeaponRanged_Animalism@@UAEHHHH@Z
int C_WeaponRanged_Animalism::vfunc246(int a, int b, int c)
{
	if (a == 0 && b == 0x98967f) {
		HudElV *e = (HudElV *)g_104cfe38.sub_100f0ed0("CHudWeaponSelection");
		if (!e->m1c) {
			g_104a57d4->ServerCmd("lastinv", 1);
			return 0;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10006f90 size=0x1e
#include "C_WeaponRanged_Animalism.h"

// VC6 writes C_WeaponRanged_Animalism's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_WeaponRanged_Animalism *pcd_emit_10006f90(const C_WeaponRanged_Animalism &other) { return new C_WeaponRanged_Animalism(other); }

// TARGET: ??_GC_WeaponRanged_Animalism@@UAEPAXI@Z
// END FUNCTION
