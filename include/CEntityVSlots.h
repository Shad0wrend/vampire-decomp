// CEntityVSlots: the CBaseEntity virtual table viewed as a plain list of slots 0..457, used to call slots 9, 42, 62, 64, 86, 93, 94, 105, 107, 118, 122, 158, 161, 162, 167, 173,
// 192, 193, 194, 202, 212, 213, 216, 217 / 218, 219, 220 / 221 (the absolute origin / angles getters), 232, 243, 244, 251, 260, 262, 267, 270, 274, 285, 306, 308, 346, 360, 371, 376, 381, 385, 448 and 457 of an entity class that does not model its vtable.
#pragma once

#include "Vector.h"
#include "CVariantCopy.h"

#define EVS(n) virtual void slot##n();
#define EVS10(p) EVS(p##0) EVS(p##1) EVS(p##2) EVS(p##3) EVS(p##4) EVS(p##5) EVS(p##6) EVS(p##7) EVS(p##8) EVS(p##9)

class CEntityVSlots
{
public:
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8)
	virtual const char **slot9(int *pOut);	// the pointer to the entity's model name
	EVS10(1) EVS10(2) EVS10(3)
	EVS(40) EVS(41)
	virtual void slot42(CEntityVSlots *pEntity);	// takes an entity (CFuncMonitor::vfunc77 hands it the camera)
	EVS(43) EVS(44) EVS(45) EVS(46) EVS(47) EVS(48) EVS(49)
	EVS10(5)
	EVS(60) EVS(61)
	virtual void slot62(const float *pOrigin);	// "SetAbsOrigin"-like
	EVS(63)
	virtual void slot64(const float *pAngles);	// "SetAbsAngles"-like
	EVS(65) EVS(66) EVS(67) EVS(68) EVS(69)
	EVS10(7)
	EVS(80) EVS(81) EVS(82) EVS(83) EVS(84) EVS(85)
	virtual char slot86(int a, int b, int c, int d, int e);	// takes five arguments, a boolean answer in al (CBaseEntity::vfunc86)
	EVS(87) EVS(88) EVS(89)
	EVS(90) EVS(91) EVS(92)
	virtual void slot93(int moveType, int moveCollide);	// "SetMoveType"
	virtual int slot94();	// the move type
	EVS(95) EVS(96) EVS(97) EVS(98) EVS(99)
	EVS(100) EVS(101) EVS(102) EVS(103) EVS(104)
	virtual void slot105(const char *pszModel);	// "SetModel"
	EVS(106)
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
	virtual char slot162();	// "IsPlayer"-like: a boolean answer in al
	EVS(163) EVS(164) EVS(165) EVS(166)
	virtual int slot167();	// the entity's target / enemy (0 when none)
	EVS(168) EVS(169)
	EVS(170) EVS(171) EVS(172)
	virtual void slot173(CEntityVSlots *pActivator, CEntityVSlots *pCaller, int useType, int value);	// "Use"
	EVS(174) EVS(175) EVS(176) EVS(177) EVS(178) EVS(179)
	EVS10(18)
	EVS(190) EVS(191)
	virtual Vector slot192();	// "WorldSpaceCenter": the center of the collision bounds, returned by value (hidden result pointer)
	virtual Vector *slot193(Vector *pOut);	// a position getter that fills pOut and returns it
	virtual Vector *slot194();	// the entity's local angles
	EVS(195) EVS(196) EVS(197) EVS(198) EVS(199)
	EVS(200) EVS(201)
	virtual void slot202(CEntityVSlots *pOwner);	// "SetOwnerEntity"
	EVS(203) EVS(204) EVS(205) EVS(206) EVS(207) EVS(208) EVS(209)
	EVS(210) EVS(211)
	virtual void slot212(int set);
	virtual void slot213(const float *pSize);	// "SetSize"
	EVS(214) EVS(215)
	virtual void slot216(Vector *pOrigin);	// "SetAbsOrigin"
	virtual Vector *slot217();	// "GetAbsOrigin"
	virtual void slot218(Vector *pAngles);	// "SetAbsAngles"
	virtual Vector *slot219();	// "GetAbsAngles"
	virtual Vector *slot220();	// absolute origin
	virtual Vector *slot221();	// absolute angles
	EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227) EVS(228) EVS(229)
	EVS(230) EVS(231)
	virtual void slot232(int a);	// "UpdatePhysicsShadow"
	EVS(233) EVS(234) EVS(235) EVS(236) EVS(237) EVS(238) EVS(239)
	EVS(240) EVS(241) EVS(242)
	virtual void slot243(int a, int b);	// door: starts the open / close movement
	virtual void slot244(int a);	// door: starts the toggle movement
	EVS(245) EVS(246) EVS(247) EVS(248) EVS(249)
	EVS(250)
	virtual char slot251();	// NPC: a boolean answer in al
	EVS(252) EVS(253) EVS(254) EVS(255) EVS(256) EVS(257) EVS(258) EVS(259)
	virtual void slot260(int index, float value);	// "SetPoseParameter" by index
	EVS(261)
	virtual char slot262(int attachment, void *pMatrix);	// animating: "GetAttachment" into a 3x4 matrix, a boolean answer in al
	EVS(263) EVS(264) EVS(265) EVS(266)
	virtual char slot267();	// weapon: a boolean answer in al
	EVS(268) EVS(269)
	virtual void slot270(void *pTrace, int a);	// weapon: takes a trace result and a flag (the dog's bite shot)
	EVS(271) EVS(272) EVS(273)
	virtual const char *slot274();	// terminal: the name of the current screen / script
	EVS(275) EVS(276) EVS(277) EVS(278) EVS(279)
	EVS(280) EVS(281) EVS(282) EVS(283) EVS(284)
	virtual int slot285();	// weapon: its owner (a character pointer)
	EVS(286) EVS(287) EVS(288) EVS(289)
	EVS10(29)
	EVS(300) EVS(301) EVS(302) EVS(303) EVS(304) EVS(305)
	virtual void slot306(int a, int b);	// NPC: takes two arguments (the scripted-sequence cleanup passes its argument and 0)
	EVS(307)
	virtual char slot308();	// NPC: a boolean answer in al (CNPC_VYukie::vfunc602)
	EVS(309)
	EVS10(31) EVS10(32) EVS10(33)
	EVS(340) EVS(341) EVS(342) EVS(343) EVS(344) EVS(345)
	virtual unsigned char slot346();	// weapon: a flag byte (bit 3 = may be held twice)
	EVS(347) EVS(348) EVS(349)
	EVS10(35)
	virtual unsigned int slot360();	// weapon: its flag word (bits 0x18000 mark the special kinds)
	EVS(361) EVS(362) EVS(363) EVS(364) EVS(365) EVS(366) EVS(367) EVS(368) EVS(369)
	EVS(370)
	virtual char slot371();	// item: a boolean answer in al (the item is stackable)
	EVS(372) EVS(373) EVS(374) EVS(375)
	virtual int slot376(int act);	// character: the next activity of the fallback chain / the weapon's translation of act
	EVS(377) EVS(378) EVS(379)
	EVS(380)
	virtual int slot381(int a);	// character: "Weapon_TranslateActivity"
	EVS(382) EVS(383) EVS(384)
	virtual void slot385(CEntityVSlots *pWeapon, int a, int b);	// character: drops / removes a weapon ("Weapon_Drop"-like)
	EVS(386) EVS(387) EVS(388) EVS(389)
	EVS10(39) EVS10(40) EVS10(41) EVS10(42) EVS10(43)
	EVS(440) EVS(441) EVS(442) EVS(443) EVS(444) EVS(445) EVS(446) EVS(447)
	virtual void slot448(int a);	// NPC: sets the ideal state (the boss's "FailSchedule"-like slot, called with 4)
	EVS(449)
	EVS(450) EVS(451) EVS(452) EVS(453) EVS(454) EVS(455) EVS(456)
	virtual void slot457(const char *pszName, int a);	// switch to / equip the named weapon
};
