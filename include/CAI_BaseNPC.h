// class CAI_BaseNPC (RTTI .?AVCAI_BaseNPC@@), primary vtable 0x104995c4.
// Only the slots the decompiled members need are given their real names; the
// others are placeholders that keep the slot indices of the primary vtable.
// The vtable has at least 569 slots; add the ones past 568 as they turn up.
#pragma once

class CBaseEntity;
class CAI_Motor;

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
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13)
	CAI_NPC_V(140) CAI_NPC_V(141) CAI_NPC_V(142) CAI_NPC_V(143)
	virtual void vfunc144(int a);
	CAI_NPC_V(145) CAI_NPC_V(146) CAI_NPC_V(147) CAI_NPC_V(148) CAI_NPC_V(149)
	CAI_NPC_V10(15)
	CAI_NPC_V(160) CAI_NPC_V(161) CAI_NPC_V(162) CAI_NPC_V(163) CAI_NPC_V(164) CAI_NPC_V(165) CAI_NPC_V(166)
	virtual int vfunc167();	// the NPC's squad/classification id (compared between a squad member and its leader)
	CAI_NPC_V(168) CAI_NPC_V(169)
	CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
	CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28)
	// slots 290..409
	CAI_NPC_V(290) CAI_NPC_V(291) CAI_NPC_V(292)
	virtual int vfunc293();
	CAI_NPC_V(294) CAI_NPC_V(295) CAI_NPC_V(296) CAI_NPC_V(297) CAI_NPC_V(298) CAI_NPC_V(299)
	CAI_NPC_V10(30)
	CAI_NPC_V(310)
	virtual void vfunc311(int a, int b, int c);	// when c >= 0: stores the activity-like triple a (+0xfec/+0xff0, slot 465(a) first when it changes), b (+0x5cd0/+0x5cd4/+0xff4) and c (+0x5ccc, sub_10260a50(c)), then clears +0x6f8 and +0x170
	CAI_NPC_V(312) CAI_NPC_V(313) CAI_NPC_V(314) CAI_NPC_V(315) CAI_NPC_V(316) CAI_NPC_V(317) CAI_NPC_V(318) CAI_NPC_V(319)
	CAI_NPC_V10(32) CAI_NPC_V10(33) CAI_NPC_V10(34) CAI_NPC_V10(35) CAI_NPC_V10(36)
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
	CAI_NPC_V(436) CAI_NPC_V(437) CAI_NPC_V(438) CAI_NPC_V(439)
	CAI_NPC_V(440) CAI_NPC_V(441) CAI_NPC_V(442) CAI_NPC_V(443) CAI_NPC_V(444) CAI_NPC_V(445) CAI_NPC_V(446)
	virtual int vfunc447(int a);	// classification of a (the dword at +0x1c of the object at +0x5c38); 0x12f is the special case of vfunc509
	CAI_NPC_V(448)
	virtual int vfunc449(int a);	// returns a task/schedule id for the argument (used by PrintTask)
	CAI_NPC_V10(45)
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
	CAI_NPC_V(480) CAI_NPC_V(481) CAI_NPC_V(482)
	virtual void vfunc483(int unused);
	// slots 484..567
	CAI_NPC_V(484) CAI_NPC_V(485) CAI_NPC_V(486) CAI_NPC_V(487) CAI_NPC_V(488) CAI_NPC_V(489)
	CAI_NPC_V10(49)
	CAI_NPC_V(500) CAI_NPC_V(501) CAI_NPC_V(502) CAI_NPC_V(503) CAI_NPC_V(504) CAI_NPC_V(505) CAI_NPC_V(506) CAI_NPC_V(507) CAI_NPC_V(508)
	virtual bool vfunc509();	// true when the NPC may start the idle/engine request (state 1 or 3, flag bits clear, no live dialog partner, not busy)
	virtual bool vfunc510();
	CAI_NPC_V(511) CAI_NPC_V(512) CAI_NPC_V(513) CAI_NPC_V(514) CAI_NPC_V(515)
	virtual float vfunc516();
	CAI_NPC_V(517) CAI_NPC_V(518)
	virtual void vfunc519(int a, float b, float c, float d);	// when the debug convar is set, forwards to slot 14 of the object at +0x5d44
	virtual float vfunc520(int a);	// forwards a to slot 15 of the object pointed to at +0x5d44 and returns its float result
	CAI_NPC_V(521) CAI_NPC_V(522) CAI_NPC_V(523) CAI_NPC_V(524) CAI_NPC_V(525) CAI_NPC_V(526) CAI_NPC_V(527) CAI_NPC_V(528) CAI_NPC_V(529)
	CAI_NPC_V10(53) CAI_NPC_V10(54)
	CAI_NPC_V(550) CAI_NPC_V(551)
	virtual unsigned int vfunc552();
	CAI_NPC_V(553) CAI_NPC_V(554) CAI_NPC_V(555) CAI_NPC_V(556) CAI_NPC_V(557) CAI_NPC_V(558) CAI_NPC_V(559)
	virtual void vfunc560();	// slot 560: sets the conditions 0x4f..0x52, 0x2e, 0x2f and 0x62..0x66 (sub_10269b50 each)
	CAI_NPC_V(561) CAI_NPC_V(562) CAI_NPC_V(563) CAI_NPC_V(564) CAI_NPC_V(565) CAI_NPC_V(566)
	virtual int vfunc567(int unused);
	virtual float vfunc568(int a);

	void sub_10270aa0(CBaseEntity *pEnt);	// stores pEnt's entity handle at +0x5d90 (-1 for null)
	void sub_10269b50(int condition);	// "CAI_BaseNPC::SetCondition"-like (called through the stub at 0x10015839)
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
};
