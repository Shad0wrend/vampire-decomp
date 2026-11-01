// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103e7100 size=0x6
#include "CWeaponMelee_Torch.h"
namespace lifted {
extern char g_10942594;
}
int CWeaponMelee_Torch::vfunc80()
{
    return (int)&lifted::g_10942594;
}
// END FUNCTION

// FUNCTION: 0x103e7120 size=0x3
#include "CWeaponMelee_Torch.h"
int CWeaponMelee_Torch::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e7300 size=0x6
#include "CWeaponMelee_Torch.h"
namespace lifted {
extern char g_10671608;
}
int CWeaponMelee_Torch::vfunc362()
{
    return (int)&lifted::g_10671608;
}
// END FUNCTION

// FUNCTION: 0x103e7320 size=0x6
#include "CWeaponMelee_Torch.h"
int CWeaponMelee_Torch::vfunc363()
{
    return 0xde;
}
// END FUNCTION

// FUNCTION: 0x103e7410 size=0x6
#include "CWeaponMelee_Torch.h"
namespace lifted {
extern char g_10672070;
}
CWeaponMelee_Torch::Datamap82 CWeaponMelee_Torch::vfunc82()
{
    return (CWeaponMelee_Torch::Datamap82)&lifted::g_10672070;
}
// END FUNCTION

// FUNCTION: 0x103e74d0 size=0x29
#include "CUnknown1070b248.h"
#include "CBaseCombatWeapon.h"
#include "CWeaponMelee_Torch.h"
extern CUnknown1070b248 *g_1070b248;
// TARGET: CWeaponMelee_Torch::vfunc104
void CWeaponMelee_Torch::vfunc104()
{
    ((CBaseCombatWeapon *)this)->CBaseCombatWeapon::vfunc104();
    engine->vfunc17((const char *)"TorchWeaponEmitter", 0);
    g_1070b248->vfunc0("Weapons/Melee/Torch/Fire_Loop.wav", 0);
}
// END FUNCTION

// FUNCTION: 0x103e7510 size=0x10
#include "CWeaponMelee_Torch.h"

void __fastcall sub_10008512(void *pThis);
void __fastcall sub_100a47d0(void *pThis);

// TARGET: CWeaponMelee_Torch::vfunc180
void CWeaponMelee_Torch::vfunc180()
{
	sub_10008512(this);
	sub_100a47d0(this);
}
// END FUNCTION

// FUNCTION: 0x103e75d0 size=0x46
#include "CWeaponMelee_Torch.h"

void CWeaponMelee_Torch::vfunc130(void *pArg)
{
	if (m_hEmitter910.Get())
		sub_103e7680();
	sub_10258440(pArg);
}
// END FUNCTION

// FUNCTION: 0x103e7640 size=0x24
void __fastcall sub_10008512(void *pSelf);

struct CWeaponMelee_TorchCallee {
    char sub_1001428b(int a);
};

// TARGET: sub_103e7640
char __fastcall sub_103e7640(void *pSelf, int unused, int arg)
{
    if (((CWeaponMelee_TorchCallee *)pSelf)->sub_1001428b(arg)) {
        sub_10008512(pSelf);
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103e7920 size=0x22
void __fastcall sub_10008512(void *p);

struct CWeaponMelee_TorchX
{
    void sub_1001089d(int a);
    void sub_103e7920(int a);
};

// TARGET: sub_103e7920
void CWeaponMelee_TorchX::sub_103e7920(int a)
{
    sub_1001089d(a);
    void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))(*(void ***)this)[0x10c / 4];
    pfn(this);
    sub_10008512(this);
}
// END FUNCTION

// FUNCTION: 0x103e7960 size=0x10
#include "CWeaponMelee_Torch.h"

void __fastcall sub_10008512(void *pThis);
void __fastcall sub_1009d2a0(void *pThis);

// TARGET: CWeaponMelee_Torch::vfunc66
void CWeaponMelee_Torch::vfunc66()
{
	sub_10008512(this);
	sub_1009d2a0(this);
}
// END FUNCTION

// FUNCTION: 0x103e7980 size=0x10
#include "CWeaponMelee_Torch.h"

void __fastcall sub_100113c9(void *pThis);
void __fastcall sub_1009d380(void *pThis);

// TARGET: CWeaponMelee_Torch::vfunc67
void CWeaponMelee_Torch::vfunc67()
{
	sub_100113c9(this);
	sub_1009d380(this);
}
// END FUNCTION

// FUNCTION: 0x103ecde0 size=0x1e
#include "CWeaponMelee_Torch.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponMelee_Torch::vfunc5
CWeaponMelee_Torch *CWeaponMelee_Torch::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
