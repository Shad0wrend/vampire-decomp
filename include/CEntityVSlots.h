// CEntityVSlots: the CBaseEntity virtual table viewed as a plain list of slots 0..457, used to call slots 62, 64, 107, 118, 122, 158, 161, 167, 173,
// 202, 212, 216, 218, 220 / 221 (the absolute origin / angles getters), 243, 244, 251, 260, 274, 346, 360 and 457 of an entity class that does not model its vtable.
#pragma once

#include "Vector.h"
#include "CVariantCopy.h"

#define EVS(n) virtual void slot##n();
#define EVS10(p) EVS(p##0) EVS(p##1) EVS(p##2) EVS(p##3) EVS(p##4) EVS(p##5) EVS(p##6) EVS(p##7) EVS(p##8) EVS(p##9)

class CEntityVSlots
{
public:
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5)
	EVS(60) EVS(61)
	virtual void slot62(const float *pOrigin);	// "SetAbsOrigin"-like
	EVS(63)
	virtual void slot64(const float *pAngles);	// "SetAbsAngles"-like
	EVS(65) EVS(66) EVS(67) EVS(68) EVS(69)
	EVS10(7) EVS10(8) EVS10(9)
	EVS(100) EVS(101) EVS(102) EVS(103) EVS(104) EVS(105) EVS(106)
	virtual void slot107(const float *pData);	// takes a pointer to a small block (a "ParseMapData"-like slot)
	EVS(108) EVS(109)
	EVS(110) EVS(111) EVS(112) EVS(113) EVS(114) EVS(115) EVS(116) EVS(117)
	virtual void slot118(const char *pszInput, CEntityVSlots *pActivator, CEntityVSlots *pCaller, CVariantCopy value, int outputID);	// "AcceptInput"
	EVS(119)
	EVS(120) EVS(121)
	virtual void slot122(const char *pszClassname);	// "SetClassname"
	EVS(123) EVS(124) EVS(125) EVS(126) EVS(127) EVS(128) EVS(129)
	EVS10(13) EVS10(14)
	EVS(150) EVS(151) EVS(152) EVS(153) EVS(154) EVS(155) EVS(156) EVS(157)
	virtual char slot158();
	EVS(159) EVS(160)
	virtual char slot161(const char *pszName);	// "HasLinkedDoor"-like name test
	EVS(162) EVS(163) EVS(164) EVS(165) EVS(166)
	virtual int slot167();	// the entity's target / enemy (0 when none)
	EVS(168) EVS(169)
	EVS(170) EVS(171) EVS(172)
	virtual void slot173(CEntityVSlots *pActivator, CEntityVSlots *pCaller, int useType, int value);	// "Use"
	EVS(174) EVS(175) EVS(176) EVS(177) EVS(178) EVS(179)
	EVS10(18) EVS10(19)
	EVS(200) EVS(201)
	virtual void slot202(CEntityVSlots *pOwner);	// "SetOwnerEntity"
	EVS(203) EVS(204) EVS(205) EVS(206) EVS(207) EVS(208) EVS(209)
	EVS(210) EVS(211)
	virtual void slot212(int set);
	EVS(213) EVS(214) EVS(215)
	virtual void slot216(Vector *pOrigin);	// "SetAbsOrigin"
	EVS(217)
	virtual void slot218(Vector *pAngles);	// "SetAbsAngles"
	EVS(219)
	virtual Vector *slot220();	// absolute origin
	virtual Vector *slot221();	// absolute angles
	EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS10(23)
	EVS(240) EVS(241) EVS(242)
	virtual void slot243(int a, int b);	// door: starts the open / close movement
	virtual void slot244(int a);	// door: starts the toggle movement
	EVS(245) EVS(246) EVS(247) EVS(248) EVS(249)
	EVS(250)
	virtual char slot251();	// NPC: a boolean answer in al
	EVS(252) EVS(253) EVS(254) EVS(255) EVS(256) EVS(257) EVS(258) EVS(259)
	virtual void slot260(int index, float value);	// "SetPoseParameter" by index
	EVS(261) EVS(262) EVS(263) EVS(264) EVS(265) EVS(266) EVS(267) EVS(268) EVS(269)
	EVS(270) EVS(271) EVS(272) EVS(273)
	virtual const char *slot274();	// terminal: the name of the current screen / script
	EVS(275) EVS(276) EVS(277) EVS(278) EVS(279)
	EVS10(28) EVS10(29)
	EVS10(30) EVS10(31) EVS10(32) EVS10(33)
	EVS(340) EVS(341) EVS(342) EVS(343) EVS(344) EVS(345)
	virtual unsigned char slot346();	// weapon: a flag byte (bit 3 = may be held twice)
	EVS(347) EVS(348) EVS(349)
	EVS10(35)
	virtual unsigned int slot360();	// weapon: its flag word (bits 0x18000 mark the special kinds)
	EVS(361) EVS(362) EVS(363) EVS(364) EVS(365) EVS(366) EVS(367) EVS(368) EVS(369)
	EVS10(37) EVS10(38) EVS10(39) EVS10(40) EVS10(41) EVS10(42) EVS10(43) EVS10(44)
	EVS(450) EVS(451) EVS(452) EVS(453) EVS(454) EVS(455) EVS(456)
	virtual void slot457(const char *pszName, int a);	// switch to / equip the named weapon
};
