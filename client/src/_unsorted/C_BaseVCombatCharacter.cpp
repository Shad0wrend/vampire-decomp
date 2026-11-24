// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1008e9a0 size=0x100
#include "C_BaseVCombatCharacter.h"

class CUnknown10201ca0
{
public:
	void sub_1015e320(int a0, int a1);
};

// TARGET: ??0C_BaseVCombatCharacter@@QAE@XZ
C_BaseVCombatCharacter::C_BaseVCombatCharacter()
{
	((CUnknown10201ca0 *)&m_StatListManager)->sub_1015e320(C_BaseEntity::entindex(), (int)&m_unk10e0);

	m_pair0.pBase = m_base0;
	m_pair0.pMod = m_mod0;
	m_pair1.pBase = m_base1;
	m_pair1.pMod = m_mod1;
	m_pair2.pBase = m_base2;
	m_pair2.pMod = m_mod2;
	m_pair3.pBase = m_base3;
	m_pair3.pMod = m_mod3;

	m_StatListManager.sub_1015e490(0, (int)&m_pair0);
	m_StatListManager.sub_1015e490(1, (int)&m_pair1);
	m_StatListManager.sub_1015e490(2, (int)&m_pair2);
	m_StatListManager.sub_1015e490(3, (int)&m_pair3);
}
// END FUNCTION

// FUNCTION: 0x1008eaa0 size=0x1e
#include "C_BaseVCombatCharacter.h"

// VC6 writes C_BaseVCombatCharacter's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
C_BaseVCombatCharacter *pcd_emit_1008eaa0(const C_BaseVCombatCharacter &other) { return new C_BaseVCombatCharacter(other); }

// TARGET: ??_GC_BaseVCombatCharacter@@UAEPAXI@Z
// END FUNCTION
