// CUnknown10258670: an object with a name virtual (slot 348) that is checked against the name records of a character's
// template (real name not yet known). The records live in a global table of lists (by key), each list holding
// name records numbered from 0; a static default list / record (key -1) is the fallback.
#pragma once

#include "CUnknown10206400.h"	// the name lists are its vendor records (CUnknown10206400, entries CUnknown10206340: same constructors), g_1074f018 / g_1074f01c are declared there

struct CUnknown10258670Character	// the part of the character the key is read from
{
	char m_pad0000[0xe30];
	int m_nKey;	// 0xe30
};

#define CU258670_V(n) virtual void vfunc##n();
#define CU258670_V10(p) CU258670_V(p##0) CU258670_V(p##1) CU258670_V(p##2) CU258670_V(p##3) CU258670_V(p##4) CU258670_V(p##5) CU258670_V(p##6) CU258670_V(p##7) CU258670_V(p##8) CU258670_V(p##9)

class CUnknown10258670
{
public:
	// slots 0..347 (placeholders keep the slot numbers right)
	CU258670_V10(0) CU258670_V10(1) CU258670_V10(2) CU258670_V10(3) CU258670_V10(4) CU258670_V10(5) CU258670_V10(6) CU258670_V10(7) CU258670_V10(8) CU258670_V10(9)
	CU258670_V10(10) CU258670_V10(11) CU258670_V10(12) CU258670_V10(13) CU258670_V10(14) CU258670_V10(15) CU258670_V10(16) CU258670_V10(17) CU258670_V10(18) CU258670_V10(19)
	CU258670_V10(20) CU258670_V10(21) CU258670_V10(22) CU258670_V10(23) CU258670_V10(24) CU258670_V10(25) CU258670_V10(26) CU258670_V10(27) CU258670_V10(28) CU258670_V10(29)
	CU258670_V10(30) CU258670_V10(31) CU258670_V10(32) CU258670_V10(33)
	CU258670_V(340) CU258670_V(341) CU258670_V(342) CU258670_V(343) CU258670_V(344) CU258670_V(345) CU258670_V(346) CU258670_V(347)
	virtual const char *vfunc348();	// the name compared with the records

	bool sub_10258670(CUnknown10258670Character *pChar);	// true when one of the name records of the character's template list equals (case-insensitive) the name of slot 348
};

#undef CU258670_V10
#undef CU258670_V
