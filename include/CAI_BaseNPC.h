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
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	// slots 10..289
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13)
	CAI_NPC_V(140) CAI_NPC_V(141) CAI_NPC_V(142) CAI_NPC_V(143)
	virtual void vfunc144(int a);
	CAI_NPC_V(145) CAI_NPC_V(146) CAI_NPC_V(147) CAI_NPC_V(148) CAI_NPC_V(149)
	CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
	CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26) CAI_NPC_V10(27) CAI_NPC_V10(28)
	// slots 290..409
	CAI_NPC_V(290) CAI_NPC_V(291) CAI_NPC_V(292)
	virtual int vfunc293();
	CAI_NPC_V(294) CAI_NPC_V(295) CAI_NPC_V(296) CAI_NPC_V(297) CAI_NPC_V(298) CAI_NPC_V(299)
	CAI_NPC_V10(30) CAI_NPC_V10(31) CAI_NPC_V10(32) CAI_NPC_V10(33) CAI_NPC_V10(34) CAI_NPC_V10(35) CAI_NPC_V10(36) CAI_NPC_V10(37) CAI_NPC_V10(38) CAI_NPC_V10(39)
	CAI_NPC_V10(40)
	// slots 410..482
	CAI_NPC_V(410) CAI_NPC_V(411) CAI_NPC_V(412) CAI_NPC_V(413) CAI_NPC_V(414) CAI_NPC_V(415)
	virtual void vfunc416(char value);
	CAI_NPC_V(417) CAI_NPC_V(418) CAI_NPC_V(419) CAI_NPC_V(420) CAI_NPC_V(421) CAI_NPC_V(422)
	virtual unsigned int vfunc423();
	CAI_NPC_V(424) CAI_NPC_V(425) CAI_NPC_V(426)
	virtual CAI_Motor *vfunc427();	// creates the NPC's motor (operator new, then CAI_Motor::sub_102e0900(this))
	CAI_NPC_V(428) CAI_NPC_V(429)
	CAI_NPC_V10(43) CAI_NPC_V10(44) CAI_NPC_V10(45) CAI_NPC_V10(46) CAI_NPC_V10(47)
	CAI_NPC_V(480) CAI_NPC_V(481) CAI_NPC_V(482)
	virtual void vfunc483(int unused);
	// slots 484..567
	CAI_NPC_V(484) CAI_NPC_V(485) CAI_NPC_V(486) CAI_NPC_V(487) CAI_NPC_V(488) CAI_NPC_V(489)
	CAI_NPC_V10(49) CAI_NPC_V10(50)
	virtual bool vfunc510();
	CAI_NPC_V(511) CAI_NPC_V(512) CAI_NPC_V(513) CAI_NPC_V(514) CAI_NPC_V(515) CAI_NPC_V(516) CAI_NPC_V(517) CAI_NPC_V(518) CAI_NPC_V(519)
	virtual float vfunc520(int a);	// forwards a to slot 15 of the object pointed to at +0x5d44 and returns its float result
	CAI_NPC_V(521) CAI_NPC_V(522) CAI_NPC_V(523) CAI_NPC_V(524) CAI_NPC_V(525) CAI_NPC_V(526) CAI_NPC_V(527) CAI_NPC_V(528) CAI_NPC_V(529)
	CAI_NPC_V10(53) CAI_NPC_V10(54)
	CAI_NPC_V(550) CAI_NPC_V(551)
	virtual unsigned int vfunc552();
	CAI_NPC_V(553) CAI_NPC_V(554) CAI_NPC_V(555) CAI_NPC_V(556) CAI_NPC_V(557) CAI_NPC_V(558) CAI_NPC_V(559)
	CAI_NPC_V(560) CAI_NPC_V(561) CAI_NPC_V(562) CAI_NPC_V(563) CAI_NPC_V(564) CAI_NPC_V(565) CAI_NPC_V(566)
	virtual int vfunc567(int unused);
	virtual float vfunc568(int a);

	void sub_10270aa0(CBaseEntity *pEnt);	// stores pEnt's entity handle at +0x5d90 (-1 for null)
};
