// CUnknown102dfd90: a list of remembered enemies ("MarkAsEluded"): a target object whose slot 57 is notified (or a
// CUnknown10316890 listener when the flag byte is set) for the list node of the given entity; real name not yet known.
#pragma once

#include "Vector.h"
#include "CUnknown10316890.h"

#define EV_SLOT(n) virtual void vfunc##n();
#define EV_SLOT10(p) EV_SLOT(p##0) EV_SLOT(p##1) EV_SLOT(p##2) EV_SLOT(p##3) EV_SLOT(p##4) EV_SLOT(p##5) EV_SLOT(p##6) EV_SLOT(p##7) EV_SLOT(p##8) EV_SLOT(p##9)

class CBaseEntity;

class CUnknown102dfd90_Target	// vtable with at least 58 slots; the slots before 57 are placeholders
{
public:
	EV_SLOT10(0) EV_SLOT10(1) EV_SLOT10(2) EV_SLOT10(3) EV_SLOT10(4)
	EV_SLOT(50) EV_SLOT(51) EV_SLOT(52) EV_SLOT(53) EV_SLOT(54) EV_SLOT(55) EV_SLOT(56)
	virtual void vfunc57(CBaseEntity *pEnt, Vector a, Vector b);
};

struct CUnknown102dfd90_Node
{
	char pad00[0x0c];
	Vector m_posA;	// 0x0c
	Vector m_posB;	// 0x18
	unsigned int m_hEnt;	// 0x24
	char pad28[0x35 - 0x28];
	char m_bMarked;	// 0x35
	char pad36[2];
	CUnknown102dfd90_Node *m_pNext;	// 0x38
};

class CUnknown102dfd90
{
public:
	CUnknown102dfd90_Target *m_pTarget;
	CUnknown10316890 *m_pListener;
	char m_bUseListener;
	CUnknown102dfd90_Node *m_pHead;

	void sub_102dfd90(CBaseEntity *pEnt);
};
