#pragma once
// stand-in class for the object at 0x10115f00 (a pair of bounding vectors relative to an owner's origin)
#include "Vector.h"
struct IOwnerOrigin10115f00
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void GetOrigin(Vector *pOut);
};
class CBounds10115f00
{
public:
	void sub_10115f00(Vector *pMins, Vector *pMaxs);
	int m_unk0;
	int m_unk4;
	Vector m_vecMins;
	Vector m_vecMaxs;
	int m_unk20;
	int m_unk24;
	IOwnerOrigin10115f00 *m_pOwner;
};
