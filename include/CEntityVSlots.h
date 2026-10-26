// CEntityVSlots: the CBaseEntity virtual table viewed as a plain list of slots 0..605, used to call slots 9, 10, 42, 62, 64, 86, 93, 94, 105, 107, 116, 118, 122, 142, 143, 158, 161, 162, 167, 173,
// 192, 193, 194, 196, 198, 199, 202, 203, 204, 209, 210, 212, 213, 214, 216, 217 / 218, 219, 220 / 221 (the absolute origin / angles getters), 232, 243, 244, 251, 259, 260, 261, 262, 266, 267, 268, 270, 274, 285, 306, 308, 310, 316, 332, 337, 346, 360, 368, 369, 371, 372, 373, 376, 381, 383, 385, 404, 426, 427, 448, 452, 457, 464, 532, 584, 598, 601 and 605 of an entity class that does not model its vtable.
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
	virtual void slot10(int a);	// takes one argument (SetModelIndex-like: the index the engine gave the model name)
	EVS(11) EVS(12) EVS(13) EVS(14) EVS(15) EVS(16) EVS(17) EVS(18) EVS(19)
	EVS10(2) EVS10(3)
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
	EVS(110) EVS(111) EVS(112) EVS(113) EVS(114) EVS(115)
	virtual char slot116();	// "IsMarkedForDeletion"-like: a boolean answer in al (CBaseEntity::vfunc116 is declared int there)
	EVS(117)
	virtual void slot118(const char *pszInput, CEntityVSlots *pActivator, CEntityVSlots *pCaller, CVariantCopy value, int outputID);	// "AcceptInput"
	EVS(119)
	EVS(120) EVS(121)
	virtual void slot122(const char *pszClassname);	// "SetClassname"
	EVS(123) EVS(124) EVS(125) EVS(126) EVS(127) EVS(128) EVS(129)
	EVS10(13)
	EVS(140) EVS(141)
	virtual int slot142(const void *pInfo);	// "OnTakeDamage": takes the damage info record, answers an int
	virtual int slot143(float flHealth, int bitsDamageType);	// "TakeHealth"
	EVS(144) EVS(145) EVS(146) EVS(147) EVS(148) EVS(149)
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
	EVS(195)
	virtual Vector *slot196(Vector *pOut);	// "EarPosition": forwards to slot 193, fills pOut and returns it
	EVS(197)
	virtual Vector *slot198();	// a vector getter (the NPC's velocity / ground vector), the pointer to three floats
	virtual void slot199(Vector *pA, Vector *pB);	// fills two vectors (a zero first one marks a free entity for the Hengeyokai's fish search)
	EVS(200) EVS(201)
	virtual void slot202(CEntityVSlots *pOwner);	// "SetOwnerEntity"
	virtual double slot203();	// "GetAttackDamageScale" (the value stays on the FPU stack, the caller multiplies it with a float)
	virtual double slot204();	// "GetReceivedDamageScale"
	EVS(205) EVS(206) EVS(207) EVS(208)
	virtual CEntityVSlots *slot209();	// "GetGroundEntity"
	virtual void slot210(Vector *pOut);	// "GetGroundVelocityToApply": fills pOut
	EVS(211)
	virtual void slot212(int set);
	virtual void slot213(const float *pSize);	// "SetSize"
	virtual Vector *slot214();	// "GetSize": the entity's size (+0x38c)
	EVS(215)
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
	EVS(252) EVS(253) EVS(254) EVS(255) EVS(256) EVS(257) EVS(258)
	virtual void slot259(void *pEvent);	// "HandleAnimEvent"
	virtual void slot260(int index, float value);	// "SetPoseParameter" by index
	virtual float slot261(const char *pszName, float flValue);	// "SetPoseParameter" by name (the animating entity's slot; the float result is left on the FPU stack)
	virtual char slot262(int attachment, void *pMatrix);	// animating: "GetAttachment" into a 3x4 matrix, a boolean answer in al
	EVS(263) EVS(264) EVS(265)
	virtual void slot266(int a);	// takes one argument (the player's activity-table call passes 0)
	virtual char slot267();	// weapon: a boolean answer in al
	virtual int slot268(void *pPlayer);	// vampire skill entity: the value the keyring hud message sends for the player
	EVS(269)
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
	virtual void slot310(int a);	// NPC: takes one argument (the navigator hands it a task / state id, 0x33 / 0x34)
	EVS(311) EVS(312) EVS(313) EVS(314) EVS(315)
	virtual void slot316(CEntityVSlots *pAttacker, unsigned char a, unsigned char b);	// character: told about an incoming melee attack (attacker, dodge flag, block flag)
	EVS(317) EVS(318) EVS(319)
	EVS10(32)
	EVS(330) EVS(331)
	virtual float slot332();	// weapon: a time span (the delay of the next shot), returned on the FPU stack
	EVS(333) EVS(334) EVS(335) EVS(336)
	virtual int slot337();	// the hull bits the entity uses ("GetUsedHullBits"-like)
	EVS(338) EVS(339)
	EVS(340) EVS(341) EVS(342) EVS(343) EVS(344) EVS(345)
	virtual unsigned char slot346();	// weapon: a flag byte (bit 3 = may be held twice)
	EVS(347) EVS(348) EVS(349)
	EVS10(35)
	virtual unsigned int slot360();	// weapon: its flag word (bits 0x18000 mark the special kinds)
	EVS(361) EVS(362) EVS(363) EVS(364) EVS(365) EVS(366) EVS(367)
	virtual Vector *slot368(Vector *pOut);	// character: fills pOut with a vector (the player's drop-position half extent, scaled by 0.5 for the astrolite) and returns it
	virtual Vector *slot369(Vector *pOut);	// character: fills pOut with a direction (the weapon drop direction) and returns it
	EVS(370)
	virtual char slot371();	// item: a boolean answer in al (the item is stackable)
	virtual void slot372(Vector *pOut);	// character: fills pOut with a direction (the aim direction)
	virtual void slot373(Vector *pOut);	// character: fills pOut with a direction (the view direction)
	EVS(374) EVS(375)
	virtual int slot376(int act);	// character: the next activity of the fallback chain / the weapon's translation of act
	EVS(377) EVS(378) EVS(379)
	EVS(380)
	virtual int slot381(int a);	// character: "Weapon_TranslateActivity"
	EVS(382)
	virtual void slot383(int a, int b);	// character: takes two arguments (the spawned zombie is handed its fists's value and 0)
	EVS(384)
	virtual void slot385(CEntityVSlots *pWeapon, int a, int b);	// character: drops / removes a weapon ("Weapon_Drop"-like)
	EVS(386) EVS(387) EVS(388) EVS(389)
	EVS10(39)
	EVS(400) EVS(401) EVS(402) EVS(403)
	virtual int slot404(void *pEntity);	// NPC: takes an entity, answers an int (1 = acceptable)
	EVS(405) EVS(406) EVS(407) EVS(408) EVS(409)
	EVS10(41)
	EVS(420) EVS(421) EVS(422) EVS(423) EVS(424) EVS(425)
	virtual char slot426();	// player: a boolean answer in al (picks the walking / running activity variant)
	virtual char slot427();	// player: a boolean answer in al (the same for the second activity group)
	EVS(428) EVS(429)
	EVS10(43)
	EVS(440) EVS(441) EVS(442) EVS(443) EVS(444) EVS(445) EVS(446) EVS(447)
	virtual void slot448(int a);	// NPC: sets the ideal state (the boss's "FailSchedule"-like slot, called with 4)
	EVS(449)
	EVS(450) EVS(451)
	virtual char slot452();	// NPC: a boolean answer in al (false rejects the spawn: the schedules had an error)
	EVS(453) EVS(454) EVS(455) EVS(456)
	virtual void slot457(const char *pszName, int a);	// switch to / equip the named weapon
	EVS(458) EVS(459)
	EVS(460) EVS(461) EVS(462) EVS(463)
	virtual int slot464();	// NPC: a kind / class id (2 and 11 are the ones that react to the witness clear-out)
	EVS(465) EVS(466) EVS(467) EVS(468) EVS(469)
	EVS10(47) EVS10(48) EVS10(49)
	EVS10(50) EVS10(51) EVS10(52)
	EVS(530) EVS(531)
	virtual void slot532(int a);	// NPC: takes one argument (CAI_BaseNPCTroika::vfunc532, the door nudge passes 2)
	EVS(533) EVS(534) EVS(535) EVS(536) EVS(537) EVS(538) EVS(539)
	EVS10(54) EVS10(55) EVS10(56) EVS10(57)
	EVS(580) EVS(581) EVS(582) EVS(583)
	virtual char slot584(CEntityVSlots *pNpc, const char *pszSequence, char bLoop);	// scripted sequence: starts the sequence on the NPC (CCineNPC::vfunc584)
	EVS(585) EVS(586) EVS(587) EVS(588) EVS(589)
	EVS(590) EVS(591) EVS(592) EVS(593) EVS(594) EVS(595) EVS(596) EVS(597)
	virtual void slot598(CEntityVSlots *pEntity);	// NPC: told about an entity (the witness clear-out hands it the entity that went away)
	EVS(599)
	EVS(600)
	virtual void slot601(int a);	// NPC: takes one argument
	EVS(602) EVS(603) EVS(604)
	virtual int slot605(int a);	// NPC: schedule selection helper, takes the task argument and returns a schedule id
};
