// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10408920 size=0x79
#include "CItemKeyGeneric.h"
#include "CBaseCombatCharacter.h"
#include "CBaseCombatWeapon.h"
#include "CItemGKeyring.h"

struct CKeyListView
{
	char m_pad0000[0x18];
	void sub_100cd660(CBaseCombatCharacter *pChar, CItemKeyGeneric *pItem, int a);
};

struct CKeyCharView
{
	char m_pad0000[0xa8];
	void *m_pPlayerObj;
};

struct CKeyItemView
{
	char m_pad0000[0x8e0];
	CKeyListView m_list8e0;
	CKeyListView m_list8f8;
	char m_pad0910[4];
	char m_records[4];
};

struct CKeyringView : CItemGKeyring
{
	void sub_10407c40(const char *pszClass, const char *pszOwnerText);
};

extern "C" void *__cdecl __RTDynamicCast(void *pObject, long nVfDelta, void *pSrcType, void *pTargetType, int bReference);
extern char g_1055f710[];	// type descriptor of CBaseCombatWeapon
extern char g_105869b8[];	// type descriptor of CItemGKeyring
void __cdecl sub_101cd940(CItemKeyGeneric *pEnt);

void CItemKeyGeneric::vfunc341(CBaseCombatCharacter *pChar)
{
	CKeyItemView *v = (CKeyItemView *)this;
	if (((CKeyCharView *)pChar)->m_pPlayerObj)
		v->m_list8e0.sub_100cd660(pChar, this, 0);
	else
		v->m_list8f8.sub_100cd660(pChar, this, 0);
	CItemGKeyring *pKeyring = (CItemGKeyring *)__RTDynamicCast(pChar->sub_10335950("item_g_keyring"), 0, g_1055f710, g_105869b8, 0);
	if (pKeyring) {
		((CKeyringView *)pKeyring)->sub_10407c40(v->m_records, (char *)sub_102517b0() + 0x88);
		sub_101cd940(this);
	}
}
// END FUNCTION

// FUNCTION: 0x1040ad50 size=0x1e
#include "CItemKeyGeneric.h"

void sub_100aa7b0(void *p);

// TARGET: CItemKeyGeneric::vfunc5
CItemKeyGeneric *CItemKeyGeneric::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
