// CEntityVSlots: the CBaseEntity virtual table viewed as a plain list of slots 0..457, used to call slots 158, 161, 173,
// 220 / 221 (the absolute origin / angles getters), 360 and 457 of an entity class that does not model its vtable.
#pragma once

#include "Vector.h"

#define EVS(n) virtual void slot##n();
#define EVS10(p) EVS(p##0) EVS(p##1) EVS(p##2) EVS(p##3) EVS(p##4) EVS(p##5) EVS(p##6) EVS(p##7) EVS(p##8) EVS(p##9)

class CEntityVSlots
{
public:
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14)
	EVS(150) EVS(151) EVS(152) EVS(153) EVS(154) EVS(155) EVS(156) EVS(157)
	virtual char slot158();
	EVS(159) EVS(160)
	virtual char slot161(const char *pszName);	// "HasLinkedDoor"-like name test
	EVS(162) EVS(163) EVS(164) EVS(165) EVS(166) EVS(167) EVS(168) EVS(169)
	EVS(170) EVS(171) EVS(172)
	virtual void slot173(CEntityVSlots *pActivator, CEntityVSlots *pCaller, int useType, int value);	// "Use"
	EVS(174) EVS(175) EVS(176) EVS(177) EVS(178) EVS(179)
	EVS10(18) EVS10(19)
	EVS10(20)
	EVS(210) EVS(211) EVS(212) EVS(213) EVS(214) EVS(215) EVS(216) EVS(217) EVS(218) EVS(219)
	virtual Vector *slot220();	// absolute origin
	virtual Vector *slot221();	// absolute angles
	EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS10(23) EVS10(24) EVS10(25) EVS10(26) EVS10(27) EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33) EVS10(34) EVS10(35)
	virtual unsigned int slot360();	// weapon: its flag word (bits 0x18000 mark the special kinds)
	EVS(361) EVS(362) EVS(363) EVS(364) EVS(365) EVS(366) EVS(367) EVS(368) EVS(369)
	EVS10(37) EVS10(38) EVS10(39) EVS10(40) EVS10(41) EVS10(42) EVS10(43) EVS10(44)
	EVS(450) EVS(451) EVS(452) EVS(453) EVS(454) EVS(455) EVS(456)
	virtual void slot457(const char *pszName, int a);	// switch to / equip the named weapon
};
