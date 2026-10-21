// class CAI_BaseNPC (RTTI .?AVCAI_BaseNPC@@), primary vtable 0x104995c4.
// Only the slots the decompiled members need are given their real names; the
// others are placeholders that keep the slot indices of the primary vtable.
// The vtable has at least 569 slots; add the ones past 568 as they turn up.
#pragma once

#include "Vector.h"

class CBaseEntity;
class CAI_Motor;
class CRestore;
class CUnknown102dfc10;

#define CAI_NPC_V(n) virtual void vfunc##n();
#define CAI_NPC_V10(p) CAI_NPC_V(p##0) CAI_NPC_V(p##1) CAI_NPC_V(p##2) CAI_NPC_V(p##3) CAI_NPC_V(p##4) CAI_NPC_V(p##5) CAI_NPC_V(p##6) CAI_NPC_V(p##7) CAI_NPC_V(p##8) CAI_NPC_V(p##9)

class CAI_BaseNPC
{
public:
	// slots 0..9
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual CAI_BaseNPC *vfunc5(unsigned int flags); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	// slots 10..289
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11)
	CAI_NPC_V(120) CAI_NPC_V(121) CAI_NPC_V(122) CAI_NPC_V(123) CAI_NPC_V(124) CAI_NPC_V(125) CAI_NPC_V(126)
	virtual int vfunc127(CRestore *pRestore);	// "CAI_BaseNPC::Restore": reads the data description block at +0x19b4, CBaseCombatCharacter::vfunc127, fixes up the arrays at +0x5b8c (4) and +0x5db4 (3), the object at +0x5d44 (when set) and the member at +0x5cf4; returns the base result
	CAI_NPC_V(128) CAI_NPC_V(129)
	CAI_NPC_V10(13)
	CAI_NPC_V(140) CAI_NPC_V(141) CAI_NPC_V(142) CAI_NPC_V(143)
	virtual void vfunc144(int a);
	CAI_NPC_V(145) CAI_NPC_V(146) CAI_NPC_V(147) CAI_NPC_V(148) CAI_NPC_V(149)
	CAI_NPC_V10(15)
	CAI_NPC_V(160) CAI_NPC_V(161) CAI_NPC_V(162) CAI_NPC_V(163) CAI_NPC_V(164) CAI_NPC_V(165) CAI_NPC_V(166)
	virtual int vfunc167();	// the NPC's squad/classification id (compared between a squad member and its leader)
	virtual CBaseEntity *vfunc168();	// the entity the NPC is after (its enemy); 0 when none
	CAI_NPC_V(169)
	CAI_NPC_V10(17) CAI_NPC_V10(18)
	CAI_NPC_V(190) CAI_NPC_V(191)
	virtual Vector vfunc192();	// returns a vector by value (hidden result pointer)
	CAI_NPC_V(193) CAI_NPC_V(194) CAI_NPC_V(195) CAI_NPC_V(196) CAI_NPC_V(197) CAI_NPC_V(198) CAI_NPC_V(199)
	CAI_NPC_V(200) CAI_NPC_V(201) CAI_NPC_V(202) CAI_NPC_V(203) CAI_NPC_V(204) CAI_NPC_V(205) CAI_NPC_V(206) CAI_NPC_V(207)
	virtual void vfunc208(int a);	// takes one argument (0 from AI_BaseNPC_Schedule's failure path)
	CAI_NPC_V(209)
	CAI_NPC_V(210) CAI_NPC_V(211) CAI_NPC_V(212) CAI_NPC_V(213) CAI_NPC_V(214) CAI_NPC_V(215) CAI_NPC_V(216)
	virtual float *vfunc217();	// "CBaseEntity::GetAbsOrigin"
	CAI_NPC_V(218) CAI_NPC_V(219)
	CAI_NPC_V(220)
	virtual float *vfunc221();	// "CBaseEntity::GetAngles": the pointer to the three angle floats at +0x428
	CAI_NPC_V(222) CAI_NPC_V(223) CAI_NPC_V(224) CAI_NPC_V(225) CAI_NPC_V(226) CAI_NPC_V(227) CAI_NPC_V(228) CAI_NPC_V(229)
	CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28)
	// slots 290..409
	CAI_NPC_V(290) CAI_NPC_V(291) CAI_NPC_V(292)
	virtual int vfunc293();
	CAI_NPC_V(294) CAI_NPC_V(295) CAI_NPC_V(296) CAI_NPC_V(297) CAI_NPC_V(298) CAI_NPC_V(299)
	CAI_NPC_V(300) CAI_NPC_V(301) CAI_NPC_V(302) CAI_NPC_V(303) CAI_NPC_V(304) CAI_NPC_V(305) CAI_NPC_V(306) CAI_NPC_V(307)
	virtual bool vfunc308();	// asked by the Troika schedule selection (true when the NPC can take the offered action)
	CAI_NPC_V(309)
	CAI_NPC_V(310)
	virtual void vfunc311(int a, int b, int c);	// when c >= 0: stores the activity-like triple a (+0xfec/+0xff0, slot 465(a) first when it changes), b (+0x5cd0/+0x5cd4/+0xff4) and c (+0x5ccc, sub_10260a50(c)), then clears +0x6f8 and +0x170
	CAI_NPC_V(312) CAI_NPC_V(313) CAI_NPC_V(314) CAI_NPC_V(315) CAI_NPC_V(316) CAI_NPC_V(317) CAI_NPC_V(318) CAI_NPC_V(319)
	CAI_NPC_V10(32) CAI_NPC_V10(33) CAI_NPC_V10(34)
	CAI_NPC_V(350) CAI_NPC_V(351) CAI_NPC_V(352) CAI_NPC_V(353) CAI_NPC_V(354) CAI_NPC_V(355) CAI_NPC_V(356) CAI_NPC_V(357) CAI_NPC_V(358)
	virtual int vfunc359(CBaseEntity *pEnt);	// "GetCombatState"-like (see the Troika override)
	CAI_NPC_V10(36)
	CAI_NPC_V(370) CAI_NPC_V(371) CAI_NPC_V(372) CAI_NPC_V(373) CAI_NPC_V(374)
	virtual int vfunc375(int act);	// TranslateActivity step 1: the activity the NPC wants for act
	virtual int vfunc376(int act);	// the next activity of the fallback chain
	CAI_NPC_V(377) CAI_NPC_V(378) CAI_NPC_V(379)
	CAI_NPC_V(380)
	virtual int vfunc381(int act);	// resolves an activity to the sequence/activity the model really has
	CAI_NPC_V(382) CAI_NPC_V(383) CAI_NPC_V(384) CAI_NPC_V(385) CAI_NPC_V(386) CAI_NPC_V(387) CAI_NPC_V(388) CAI_NPC_V(389)
	CAI_NPC_V10(39)
	CAI_NPC_V(400) CAI_NPC_V(401) CAI_NPC_V(402) CAI_NPC_V(403)
	virtual int vfunc404(CBaseEntity *pEnt);	// classification of pEnt (vfunc468 treats 1 and 2 as true)
	CAI_NPC_V(405) CAI_NPC_V(406) CAI_NPC_V(407) CAI_NPC_V(408) CAI_NPC_V(409)
	// slots 410..482
	CAI_NPC_V(410) CAI_NPC_V(411) CAI_NPC_V(412) CAI_NPC_V(413) CAI_NPC_V(414) CAI_NPC_V(415)
	virtual void vfunc416(char value);
	CAI_NPC_V(417)
	virtual float vfunc418(float a);	// float lookup keyed by magic values (-1000005..-1000008 in the Troika override), else the base value
	CAI_NPC_V(419) CAI_NPC_V(420) CAI_NPC_V(421) CAI_NPC_V(422)
	virtual unsigned int vfunc423();
	CAI_NPC_V(424) CAI_NPC_V(425) CAI_NPC_V(426)
	virtual CAI_Motor *vfunc427();	// creates the NPC's motor (operator new, then CAI_Motor::sub_102e0900(this))
	CAI_NPC_V(428) CAI_NPC_V(429)
	CAI_NPC_V(430) CAI_NPC_V(431) CAI_NPC_V(432) CAI_NPC_V(433) CAI_NPC_V(434)
	virtual void vfunc435(void *pSchedule);	// called with the new schedule by sub_10280e50
	CAI_NPC_V(436)
	virtual int vfunc437();	// "SelectFailSchedule"-like (AI_BaseNPC_Schedule.cpp): returns a schedule id picked from the failure conditions
	virtual int vfunc438();	// "SelectSchedule": returns the schedule id
	CAI_NPC_V(439)
	CAI_NPC_V(440) CAI_NPC_V(441) CAI_NPC_V(442) CAI_NPC_V(443) CAI_NPC_V(444) CAI_NPC_V(445)
	virtual void vfunc446(int condition);	// "SetCondition" with translation: ids below 1000000000 (and -1) go through the condition table of slot 580 first; a missing schedule warns "ERROR: %s missing schedule" and sets condition 1
	virtual int vfunc447(int a);	// classification of a (the dword at +0x1c of the object at +0x5c38); 0x12f is the special case of vfunc509
	virtual void vfunc448(int a);	// "CAI_BaseNPC::TaskFail": remembers the failure code (+0x5c50), name text (+0x5f30) and failing task (+0x5c38 -> +0x5f38) unless the AI system is paused, clears +0x1a40, then sub_10269a20(0x5c)
	virtual int vfunc449(int a);	// returns a task/schedule id for the argument (used by PrintTask)
	CAI_NPC_V(450)
	virtual const char *vfunc451();	// the NPC's name text (used in warnings)
	CAI_NPC_V(452) CAI_NPC_V(453) CAI_NPC_V(454) CAI_NPC_V(455) CAI_NPC_V(456) CAI_NPC_V(457) CAI_NPC_V(458) CAI_NPC_V(459)
	virtual int vfunc460();	// SelectIdealState helper: the NPC's current state, 0 when unset
	virtual int vfunc461();	// SelectIdealState
	CAI_NPC_V(462)
	virtual void vfunc463(int a, int type);	// "CAI_BaseNPC::SetIdealActivityForType": stores a value picked by `type` (0..14) at +0x5b64
	virtual int vfunc464();	// GetState: the NPC state (7 is dead; used by CAI_GoalEntity::PruneActors)
	virtual void vfunc465(int a);	// called by vfunc311 when the value at +0xfec changes
	CAI_NPC_V(466) CAI_NPC_V(467)
	virtual bool vfunc468(CBaseEntity *pEnt);	// Troika override: false when pEnt is the NPC's own target or is ignored, true when it has the field at +0xa8 or vfunc404 gives 1 or 2
	CAI_NPC_V(469)
	CAI_NPC_V10(47)
	CAI_NPC_V(480) virtual void vfunc481(int a); virtual int vfunc482(int a);	// slot 482: asked of another NPC with the value slot 585 returns, nonzero accepts
	virtual void vfunc483(int unused);
	// slots 484..567
	CAI_NPC_V(484) CAI_NPC_V(485) CAI_NPC_V(486) CAI_NPC_V(487) CAI_NPC_V(488) CAI_NPC_V(489)
	CAI_NPC_V10(49)
	CAI_NPC_V(500) CAI_NPC_V(501) CAI_NPC_V(502) CAI_NPC_V(503) CAI_NPC_V(504) CAI_NPC_V(505) CAI_NPC_V(506) CAI_NPC_V(507) CAI_NPC_V(508)
	virtual bool vfunc509();	// true when the NPC may start the idle/engine request (state 1 or 3, flag bits clear, no live dialog partner, not busy)
	virtual bool vfunc510();
	CAI_NPC_V(511) CAI_NPC_V(512)
	virtual unsigned int vfunc513();	// the NPC's class flags (bit 26 marks the NPCs that must be in a squad)
	CAI_NPC_V(514) CAI_NPC_V(515)
	virtual float vfunc516();
	CAI_NPC_V(517) CAI_NPC_V(518)
	virtual void vfunc519(int a, float b, float c, float d);	// when the debug convar is set, forwards to slot 14 of the object at +0x5d44
	virtual float vfunc520(int a);	// forwards a to slot 15 of the object pointed to at +0x5d44 and returns its float result
	CAI_NPC_V(521) CAI_NPC_V(522) CAI_NPC_V(523) CAI_NPC_V(524) CAI_NPC_V(525) CAI_NPC_V(526) CAI_NPC_V(527) CAI_NPC_V(528) CAI_NPC_V(529)
	CAI_NPC_V10(53)
	CAI_NPC_V(540)
	virtual CUnknown102dfc10 *vfunc541(const void *pKey);	// the queue / memory object the NPC keeps for pKey (a "file(line) :" text or an enemy)
	virtual void vfunc542();
	CAI_NPC_V(543) CAI_NPC_V(544)
	virtual bool vfunc545();	// finds the squad (+0x5da4) from the name at +0x5da8 when the class flags ask for one; true when it has one
	CAI_NPC_V(546) CAI_NPC_V(547) CAI_NPC_V(548) CAI_NPC_V(549)
	CAI_NPC_V(550) CAI_NPC_V(551)
	virtual unsigned int vfunc552();
	CAI_NPC_V(553) CAI_NPC_V(554) CAI_NPC_V(555) CAI_NPC_V(556) CAI_NPC_V(557) CAI_NPC_V(558) CAI_NPC_V(559)
	virtual void vfunc560();	// slot 560: sets the conditions 0x4f..0x52, 0x2e, 0x2f and 0x62..0x66 (sub_10269b50 each)
	CAI_NPC_V(561) CAI_NPC_V(562) CAI_NPC_V(563) CAI_NPC_V(564) CAI_NPC_V(565) CAI_NPC_V(566)
	virtual int vfunc567(int unused);
	virtual float vfunc568(int a);

	int vfunc440(int schedule);	// slot 440 "TranslateSchedule" base implementation (declared as a plain member like the subclasses' overrides): schedule 0x2e (a failed scripted sequence) becomes 0x2f..0x33 by the move type at +0x5f60 of the scripted sequence entity (handle at +0x5d74), after a DevWarning when that entity is gone; unchanged otherwise
	void sub_1027d170();	// stub 0x100119b9: run by vfunc440 when the scripted sequence entity is gone, before schedule 1 is asked for
	void sub_10270aa0(CBaseEntity *pEnt);	// stores pEnt's entity handle at +0x5d90 (-1 for null)
	void sub_10269a20(int a);	// stub 0x100041b0, run by TaskFail with 0x5c
	void sub_10269b50(int condition);	// "CAI_BaseNPC::SetCondition"-like (called through the stub at 0x10015839)
	bool sub_10269aa0(int condition);	// "CAI_BaseNPC::HasCondition" (stub 0x10014df8): translates ids below 1000000000 first, then tests the condition bit in the array at +0x5c5c
	void sub_10269bd0(int *pConditions, int nConditions);	// "CAI_BaseNPC::ClearConditions": clears the condition bits (array at +0x5c5c) of each id, translating ids below 1000000000 first through slot 580
	void sub_1026e340(int newState);	// "CAI_BaseNPC::SetState": stores the state at +0x5cc0/+0x5cc4 (curtime at +0x5cc8 on a change), strips the weapon of an NPC in state 1 that slot 167 flags, then calls slot 463(old, new)
	void sub_10279a50(int a);	// called through the stub at 0x1000b974 by SetState with 0
	void sub_10260a50(int c);	// called through the stub at 0x1000d0b2 by vfunc311 with its third argument
	void sub_10273e80(char flag);	// sets the state at +0x5c44 to 4 unless flag is clear and a check (0x5c) passes (called with 0 by animation event handlers)
	void sub_10274080(CBaseEntity *pEnt);	// enemy memory update: finds pEnt's record in the 20-byte record vector at +0x5d48 (handle, time, position) and refreshes its time, or appends a new record; then stores pEnt's absolute origin in it
	int sub_10274aa0(void *pOther);	// slot 569: picks an activity-like index (1, 6, 7 or 8) from SelectWeightedSequence results and pOther's state at +0x5dc
	int sub_1026f4d0();	// clears the path/schedule fields, then (for NPCs flagged 0x20000) selects the fail schedule by the state of vfunc460
	void sub_1028ae60();	// releases the occupied slot (bit +0x5dac in the bitmask of the owner at +0x5da4) and resets the slot index to -1
	bool sub_1028ad20(int slotIDStart, int slotIDEnd);	// "CAI_BaseNPC::OccupyStrategySlotRange": true when the NPC has no owner (squad) or another class than the leader; else keeps/gets a free slot of the range in the owner's bitmask (at +0x6c), false when none is free
	int sub_10271ff0(int act, int *pOut);	// "CAI_BaseNPC::TranslateActivity": walks the activity fallback chain (slots 375/376/381, at most 5 steps) and returns the first activity the model has a sequence for
	bool sub_102d1350(CBaseEntity *pEnt);	// stores pEnt's handle at +0x5e0 unless a different live entity is already stored (then false)
	void sub_10280e50(void *pSchedule);	// "CAI_BaseNPC::SetSchedule": calls slot 435(pSchedule), resets the schedule bookkeeping at +0x5bb8/+0x5c38.., stamps curtime, may start the idle state; prints "Schedule: %s" when flag 0x8000000 is set at +0x224
	void sub_10182c40(const char *text, const char *sound);	// copies text into a global buffer (+0x1ca4 = the buffer, or null when empty), stamps curtime - 0.5 at +0x1ca8, then moves that time forward by the sound's duration (when the dialog partner at +0xfe8 has the object at +0x98) or by 0.6, and sets bit 0 of +0x1cac
	void sub_1026e4f0();	// "CAI_BaseNPC::PerformSensing": scope trace (entity name), when the count at +0x5bb4 is not positive calls sub_10310710 on the object at +0x5cdc, then slot 459
	bool sub_1027d0a0();	// SelectIdealState helper: with the take-damage mode (+0x200) at 1 stamps the source file/line (+0x1b3c / +0x1b40) and sets the state (+0x5cc4) to 7 and returns false; else cancels the scripted sequence entity of the handle at +0x5d74 (CCineNPC::sub_101a8c30) and returns true
	int sub_10265970();	// picks a hurt/idle activity (0x49 default, 0x66 / 0x68..0x6c by the value at +0x1594) that the model has a sequence for (CBaseAnimating::SelectWeightedSequence), else 0x49; first computes AngleVectors of GetAngles() (unused)
	int sub_1008dc40(int a, int b);	// CBaseAnimating::SelectWeightedSequence, called directly
	void sub_1000c9cd();	// as in CPhysForce (transplant)
	void sub_10156580(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	void sub_10175360(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	void sub_10209ac0(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	void sub_10252470(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	void sub_10279b70(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	void sub_10279cc0(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	void sub_10357110(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	void sub_103f6ab0(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	void sub_1042b9c0(CBaseEntity *pEnt);	// provisional, like sub_10270aa0 (transplant)
	CBaseEntity *sub_102729d0();	// the entity the NPC is focusing on, chosen by the kind (object at +0x5d34, 2: handle at +0x5ce0, 1: handle at +0x5ce4, 7: the handle slot 586 of the object at +0x98 gives); null for other kinds or a stale handle
	int sub_10278090(char bFlag, int n);	// slot 482 "CAI_BaseNPC::vfunc482" override as seen at 0x10278090 (ret 8: two arguments): 1, or 2 when the scripted sequence entity of the handle at +0x5d74 is live and accepts (CCineNPC::sub_101a8ac0); 0 when slot 158 is false or, with bFlag clear and the state at +0x5cc0 not 0 / 1 (and +0x5cc4 not 1, and for state 3 n < 1), the NPC may not take part
	int sub_10289fe0();	// the activity for the action animation named by the scripted entity (handle at +0x5d74, name at +0x5f50): 9 by default, the model's activity of that name, or 9 / 0x18 depending on whether the model has a sequence of that name
	void sub_10272940(const char *label);	// "CAI_BaseNPC::ResetSequence"-like: LookupSequence(label); a found sequence is set (sub_10260a50), the ground-speed-like float at +0x6f8 cleared unless the sequence is unchanged and the byte at +0x65d is set, then the object at +0x5d44 updated (sub_102e1cf0); else DevWarning "%s has no sequence named:%f" and the sequence at +0x6f0 cleared
	int sub_10348890(CRestore *pRestore);	// CBaseCombatCharacter::vfunc127 (stub 0x10010d48), called directly
	bool sub_1026fb40();	// throttled check: when the class flags (slot 513) have bit 21 and the time at +0x5da0 has passed, pushes it ahead and, unless sub_10007e19() holds, asks sub_10005dd5 about a (300, 300, 100) box
	int sub_10007e19();	// CBaseCombatCharacter member (the stub at 0x10007e19 for 0x1032e7b0), called directly
	int sub_10005dd5(float *pBox);	// CBaseCombatCharacter member (the stub at 0x10005dd5 for 0x10333ad0), called directly with a three-float box
};
