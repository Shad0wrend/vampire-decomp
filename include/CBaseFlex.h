// CBaseFlex: entity with flex animation (CBaseAnimatingOverlay -> CBaseAnimating -> ... -> CBaseEntity). Bases flattened.
#pragma once
#include "CBaseEntity.h"

struct CBaseFlexItemObject	// the object an item at +0xa58 refers to
{
	int sub_100029c8();	// the object's type (the dword at +0; stub 0x100029c8 for 0x10075b70)
	bool sub_1000695b();	// whether the float at +0x188 is set, i.e. not -1.0f (stub 0x1000695b for 0x10075f30)
};

struct CBaseFlexItem	// 0x1c byte element
{
	CBaseFlexItemObject *m_pObject;
	int m_n04;
	char m_b08;
	char m_pad09[0x1c - 9];
};

class CBaseFlex : public CBaseEntity
{
public:
	void sub_100b5b00(const float *v);	// slot 277 override: stores three floats at +0x848
	void sub_100b5ce0();	// slot 276 override: toggles the int at +0x854
	void vfunc287(CBaseFlexItemObject *pObject);	// slot 287: removes the item of the vector at +0xa58 that refers to pObject (calls its sub_100029c8, clears the item and shifts the following ones down)
	void vfunc285(int nKey);	// slot 285: clears the item vector when nKey is 0, else removes every item whose second field (+4) equals nKey, like slot 287

	char m_pad03e0[0x848 - 0x3e0];
	float m_vec848[3];
	int m_toggle854;
	char m_pad858[0xa58 - 0x858];
	CBaseFlexItem *m_pItems;	// 0xa58
	int m_nItemsAlloc;
	int m_nItemsGrow;
	int m_nItems;	// 0xa64
	CBaseFlex *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100152ad();	// as in CPhysForce (transplant)
	CBaseFlex *sub_100b58d0();	// as in CKeepUpright (transplant)
};
