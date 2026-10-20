// CEntityVSlots: the CBaseEntity virtual table viewed as a plain list of slots 0..360, used to call slots 220 / 221
// (the absolute origin / angles getters) and 360 of an entity class that does not model its vtable.
#pragma once

#include "Vector.h"

#define EVS(n) virtual void slot##n();
#define EVS10(p) EVS(p##0) EVS(p##1) EVS(p##2) EVS(p##3) EVS(p##4) EVS(p##5) EVS(p##6) EVS(p##7) EVS(p##8) EVS(p##9)

class CEntityVSlots
{
public:
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17) EVS10(18) EVS10(19)
	EVS10(20)
	EVS(210) EVS(211) EVS(212) EVS(213) EVS(214) EVS(215) EVS(216) EVS(217) EVS(218) EVS(219)
	virtual Vector *slot220();	// absolute origin
	virtual Vector *slot221();	// absolute angles
	EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35)
	virtual unsigned int slot360();	// weapon: its flag word (bits 0x18000 mark the special kinds)
};
