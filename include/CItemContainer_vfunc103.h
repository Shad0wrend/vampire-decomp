// View of CItemContainer for CItemContainer::vfunc103 (0x10209350, the Spawn/precache step: slot 104, the model name
// through slot 9 and slot 105, the 12 precache strings at +0x19f8..+0x1a24, CBaseCombatCharacter::vfunc103,
// SetSolid(6) / RemoveSolidFlags(0x40) with inlined scope traces, slot 225, then the flag / health tail).
// CItemContainer.h is flat (no base), so slot calls and base members need a view derived from the real base chain.
// Usage: `CItemContainerUnit103 *p = (CItemContainerUnit103 *)this;` then p->vfunc104(), p->vfunc9(&n), p->vfunc105(name).
//
// Slot 225 (+0x384, no arguments; "VPhysicsInitSetup"-ish, see CBaseEntity::sub_100a5ad0) is not declared virtual in
// CBaseEntity.h (only the plain member vfunc226 / vfunc228 exist): call it by a local member-pointer-free cast of the
// vtable entry, or declare `virtual void vfunc225();` at the right place in CBaseEntity.h first.
// Callees: sub_1021fe50 is `void __cdecl sub_1021fe50(CItemContainerUnit103 *pThis, const char *psz, int bPreload)` (matched,
// stub 0x10011fdb; the game passes the string or the empty string 0x106b8540); CBaseCombatCharacter::vfunc103 is stub
// 0x1001374b (CAI_BaseNPC::sub_10323a90); CBaseToggle::vfunc103 = 0x101c1cb0; sub_100a5bb0 = 0x10007284 (member,
// no args); sub_101cf600 (cdecl, this); CBaseEntity::sub_100b3580(0x20000000) AddFlag; sub_100b3840(0x10) AddFlag2.
// The inlined scope traces are CBaseEntity::sub_1016e500(6) SetSolid / the RemoveSolidFlags on the collision property
// at +0x270 (CCollisionProperty::sub_100dc480, CFlagsUnit::sub_100dc580 with the flags word at +0x2b4 & 0xbf).
#pragma once
#include "CBaseCombatWeapon.h"

#include "CBaseCombatCharacter.h"
#include "COutputEvent.h"

class CItemContainerUnit103 : public CBaseCombatCharacter
{
public:
	char m_pad19a8[0x19b0 - 0x19a8];
	COutputEvent m_Output19b0;			// 0x19b0
	COutputEvent m_Output19c8;			// 0x19c8
	COutputEvent m_Output19e0;			// 0x19e0
	// 0x19f8..0x1a24: twelve string pointers (null = unused), each precached as
	// `if (m_psz19f8) sub_1021fe50(this, STRING(m_psz19f8), 0);` in order (unrolled, no loop)
	const char *m_psz19f8, *m_psz19fc, *m_psz1a00, *m_psz1a04, *m_psz1a08, *m_psz1a0c;
	const char *m_psz1a10, *m_psz1a14, *m_psz1a18, *m_psz1a1c, *m_psz1a20, *m_psz1a24;
	int m_hUser1a28;				// 0x1a28 (EHANDLE m_hUser in CItemContainer.h)
	int m_hLock1a2c;				// 0x1a2c
	const char *m_pszBreakModel1a30;		// 0x1a30
	int m_n1a34;					// 0x1a34
};
