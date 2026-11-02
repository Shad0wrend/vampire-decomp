// CEntityVSlots: the CBaseEntity virtual table viewed as a plain list of slots 0..605, used to call slots 9, 10, 42, 62, 64, 86, 93, 94, 105, 107, 116, 118, 122, 142, 143, 158, 161, 162, 167, 173,
// 192, 193, 194, 196, 198, 199, 202, 203, 204, 209, 210, 212, 213, 214, 216, 217 / 218, 219, 220 / 221 (the absolute origin / angles getters), 232, 243, 244, 251, 259, 260, 261, 262, 266, 267, 268, 270, 274, 285, 306, 308, 310, 316, 332, 337, 346, 360, 368, 369, 371, 372, 373, 376, 381, 383, 385, 404, 426, 427, 448, 452, 457, 464, 532, 584, 598, 601 and 605 of an entity class that does not model its vtable.
#pragma once

#include "Vector.h"
#include "CVariantCopy.h"

class CUnknown102e0150;
class CUnknown10359c50;

#define EVS(n) virtual void slot##n();
#define EVS10(p) EVS(p##0) EVS(p##1) EVS(p##2) EVS(p##3) EVS(p##4) EVS(p##5) EVS(p##6) EVS(p##7) EVS(p##8) EVS(p##9)

class CEntityVSlots
{
public:
	EVS(0) virtual unsigned int *slot1(); EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) virtual int slot8();
	virtual const char **slot9(int *pOut);	// the pointer to the entity's model name
	virtual void slot10(int a);	// takes one argument (SetModelIndex-like: the index the engine gave the model name)
	EVS(11)
	virtual float slot12();	// a float getter (the mass-like weight the grab check sums up)
	EVS(13) EVS(14) EVS(15) EVS(16) EVS(17) EVS(18) EVS(19)
	EVS10(2) EVS10(3)
	EVS(40) EVS(41)
	virtual void slot42(CEntityVSlots *pEntity);	// takes an entity (CFuncMonitor::vfunc77 hands it the camera)
	EVS(43) EVS(44) EVS(45) EVS(46) EVS(47) EVS(48) EVS(49)
	EVS10(5)
	EVS(60) EVS(61)
	virtual void slot62(const float *pOrigin);	// "SetAbsOrigin"-like
	EVS(63)
	virtual void slot64(const float *pAngles);	// "SetAbsAngles"-like
	virtual void slot65(int pitch, float yaw, int roll);	// "SetLocalAngles" (the angles by value; the callers copy pitch and roll as raw dwords)
	EVS(66) EVS(67) virtual char slot68(CEntityVSlots *pOther);	// "ShouldIgnoreCollision"-like: a boolean answer in al about the other entity (CCollisionEvent::PostCollision asks both ways)
	EVS(69)
	EVS10(7)
	EVS(80) EVS(81) EVS(82) EVS(83) EVS(84) virtual int slot85();	// the entity's edict / entity index the sound calls name it by (asked of the speaking NPC)
	virtual char slot86(int a, int b, int c, int d, int e);	// takes five arguments, a boolean answer in al (CBaseEntity::vfunc86)
	EVS(87) EVS(88) EVS(89)
	EVS(90) virtual char slot91(int a, int b);	/* a boolean answer in al, takes two arguments (the trace's collision group test, passed (group, -1)) */ EVS(92)
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
	EVS(130) EVS(131) EVS(132) EVS(133) EVS(134) EVS(135) EVS(136) EVS(137)
	virtual int slot138();	// answers an int in eax that the caller tests (CAI_BaseNPCTroika::vfunc113: attach the navigation hint when non-zero)
	EVS(139)
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
	EVS(190) virtual void slot191(int a);	// CNPC_VManBat::sub_1038f2c0 hands the new prop_ragdoll_special its third argument (+0x2fc)

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
	virtual short slot211();	// answers a short in ax (CBaseEntity::vfunc77 saves it)
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
	EVS(222) EVS(223) EVS(224) EVS(225) EVS(226) EVS(227)
	virtual void slot228(int index, const void *pEvent);	// VPhysicsShadowCollision
	EVS(229)
	virtual void slot230(int index, const void *pEvent);	// VPhysicsCollision
	EVS(231)
	virtual void slot232(int a);	// "UpdatePhysicsShadow"
	virtual int slot233(CEntityVSlots **pOut, int nMax);	// fills the array with the entities it touches / carries, answers their count
	EVS(234) EVS(235) EVS(236) EVS(237) EVS(238) EVS(239)
	EVS(240) EVS(241) EVS(242)
	virtual void slot243(int a, int b);	// door: starts the open / close movement
	virtual void slot244(int a);	// door: starts the toggle movement
	EVS(245) EVS(246) EVS(247) EVS(248) EVS(249)
	EVS(250)
	virtual char slot251();	// NPC: a boolean answer in al
	EVS(252) EVS(253) EVS(254) EVS(255) virtual void slot256(int bone, float *pMatrix);	// animating: the bone's 3x4 matrix
	EVS(257) EVS(258)
	virtual void slot259(void *pEvent);	// "HandleAnimEvent"
	virtual void slot260(int index, float value);	// "SetPoseParameter" by index
	virtual float slot261(const char *pszName, float flValue);	// "SetPoseParameter" by name (the animating entity's slot; the float result is left on the FPU stack)
	virtual char slot262(int attachment, void *pMatrix);	// animating: "GetAttachment" into a 3x4 matrix, a boolean answer in al
	EVS(263) EVS(264) virtual void *slot265(int a);	// prop: the physics object for the given index / bone (0 when none); CNPC_VManBat::sub_1038f430 hands it the argument and the result to the animlink
	
	virtual void slot266(int a);	// takes one argument (the player's activity-table call passes 0)
	virtual char slot267();	// weapon: a boolean answer in al
	virtual int slot268(void *pPlayer);	// vampire skill entity: the value the keyring hud message sends for the player
	EVS(269)
	virtual void slot270(void *pTrace, int a);	// weapon: takes a trace result and a flag (the dog's bite shot)
	virtual int slot271(int a);	// animating overlay: the index of the layer playing that activity / sequence, -1 for none
	virtual const char *slot272();	// weapon: a model name (female variant)
	virtual const char *slot273();	// weapon: a model name (male variant)
	virtual const char *slot274();	// terminal: the name of the current screen / script
	EVS(275) EVS(276) EVS(277) virtual void slot278(const char *pszLine);	// terminal: shows the line (CBaseTerminal::vfunc278)
	EVS(279)
	EVS(280) EVS(281) EVS(282) EVS(283) EVS(284)
	virtual int slot285();	// weapon: its owner (a character pointer)
	EVS(286) EVS(287) EVS(288) EVS(289)
	EVS(290) EVS(291) EVS(292) EVS(293) EVS(294) EVS(295)
	virtual char slot296(int a);	// character: a boolean answer in al, takes one stat id (the discipline removal asks it before it removes one)
	EVS(297) EVS(298) EVS(299)
	EVS(300) EVS(301) EVS(302) EVS(303) EVS(304) EVS(305)
	virtual void slot306(int a, int b);	// NPC: takes two arguments (the scripted-sequence cleanup passes its argument and 0)
	virtual void slot307(int a);	// weapon: takes one argument (the flamethrower passes 0xc4)
	virtual char slot308();	// NPC: a boolean answer in al (CNPC_VYukie::vfunc602)
	virtual CEntityVSlots *slot309();	// NPC: the entity it is bound to (0 when none)
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
	EVS(340) EVS(341)
	virtual int slot342(int a, int b);	// discipline weapon: chained cost lookup, last link (a, previous result)
	virtual int slot343(int a, int b);	// discipline weapon: chained cost lookup, middle link (a, previous result)
	virtual int slot344();	// discipline weapon: chained cost lookup, first link
	EVS(345)
	virtual unsigned char slot346();	// weapon: a flag byte (bit 3 = may be held twice)
	EVS(347) virtual const char *slot348();	// weapon: its class name
	EVS(349)
	EVS10(35)
	virtual unsigned int slot360();	// weapon: its flag word (bits 0x18000 mark the special kinds)
	EVS(361) EVS(362) virtual char slot363(void *pNpc);	// player: a boolean answer in al about an NPC (the maker's spawn check passes itself)
	EVS(364) EVS(365) EVS(366) virtual QAngle slot367();	// character: "BodyAngles", returned by value
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
	EVS(386) EVS(387) virtual void slot388(int a, int b);	// character: takes two arguments (a field of the bound entity and 0) EVS(389)
	EVS(389)
	EVS10(39)
	EVS(400) EVS(401) EVS(402) EVS(403)
	virtual int slot404(void *pEntity);	// NPC: takes an entity, answers an int (1 = acceptable)
	virtual int slot405(void *pEntity);	// NPC: IRelationPriority of the entity
	EVS(406) EVS(407) EVS(408) EVS(409)
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
	virtual CEntityVSlots *slot453();	// player: the spawn spot entity it selects, 0 when there is none
	EVS(454) EVS(455) EVS(456)
	virtual void slot457(const char *pszName, int a);	// switch to / equip the named weapon
	EVS(458) EVS(459)
	EVS(460) EVS(461) EVS(462) EVS(463)
	virtual int slot464();	// NPC: a kind / class id (2 and 11 are the ones that react to the witness clear-out)
	EVS(465) EVS(466) EVS(467) EVS(468) EVS(469)
	EVS10(47) EVS(480) EVS(481) EVS(482)
	virtual char slot483(char a);	// NPC: a boolean answer in al, takes one flag (0x101aa130 passes bit 2 of its spawn flags)
	EVS(484) EVS(485) EVS(486) EVS(487) EVS(488) EVS(489) EVS10(49)
	EVS10(50) EVS(510) EVS(511) EVS(512)
	virtual int slot513();	// NPC: "CapabilitiesGet", the capability bits
	EVS(514) EVS(515) EVS(516) EVS(517) EVS(518) EVS(519)
	EVS(520) virtual char slot521(const float *pStart, const float *pEnd, const float *pApex);	// NPC: "IsJumpLegal" (a boolean answer in al)
	EVS(522) EVS(523) EVS(524) EVS(525) EVS(526) EVS(527) EVS(528) EVS(529)
	virtual char slot530(CEntityVSlots *pEnemy);	// NPC: a boolean answer in al about an entity (the Hengeyokai's fish check)
	EVS(531)
	virtual void slot532(int a);	// NPC: takes one argument (CAI_BaseNPCTroika::vfunc532, the door nudge passes 2)
	EVS(533) EVS(534) EVS(535) EVS(536) EVS(537) EVS(538) EVS(539)
	EVS(540) virtual CUnknown102e0150 *slot541();	// NPC: the object that remembers where its enemies were last seen
	EVS(542) EVS(543) EVS(544) EVS(545) EVS(546) EVS(547) EVS(548) EVS(549)
	EVS10(55) EVS(560) EVS(561) EVS(562) EVS(563) EVS(564) EVS(565)
	virtual char slot566(void *pHint);	// NPC: whether it accepts the hint (CNPC_VWerewolf::IsValidTeleportHint asks it)
	EVS(567) EVS(568) EVS(569)
	EVS10(57)
	virtual CUnknown10359c50 *slot580();	// NPC: the id space that translates a global condition / schedule id to the local one
	EVS(581) EVS(582) EVS(583)
	virtual char slot584(CEntityVSlots *pNpc, const char *pszSequence, char bLoop);	// scripted sequence: starts the sequence on the NPC (CCineNPC::vfunc584)
	EVS(585) EVS(586) EVS(587) EVS(588) EVS(589)
	EVS(590) EVS(591) EVS(592) EVS(593) EVS(594) EVS(595) EVS(596) EVS(597)
	virtual void slot598(CEntityVSlots *pEntity);	// NPC: told about an entity (the witness clear-out hands it the entity that went away)
	virtual char slot599(CEntityVSlots *pEnemy);	// NPC: may take a ranged position now (CNPC_VHuman::vfunc605 passes slot 167's entity), a boolean answer in al
	EVS(600)
	virtual void slot601(int a);	// NPC: takes one argument
	EVS(602) EVS(603)
	virtual int slot604(int a);	// NPC: schedule selection (SelectFailSchedule-like), takes the task argument and returns a schedule id
	virtual int slot605(int a);	// NPC: schedule selection helper, takes the task argument and returns a schedule id
	virtual int slot606(int a);	// NPC: schedule pick for the idle mood (CAI_BaseNPCTroika::vfunc606), takes the task argument
	EVS(607) EVS(608)
	virtual CEntityVSlots *slot609(char bForce);	// NPC: the target at +0x6444 (CAI_BaseNPCTroika::vfunc609), a pointer or 0
	EVS(610) EVS(611) EVS(612) EVS(613) EVS(614) EVS(615) EVS(616)
	virtual void slot617();	// the gargoyle's roar sound
};
