// CHL2_Player: the HL2 player entity (derived from CBasePlayer at +0x0).
// Slots 0..439 are placeholders that keep the slot indices; the named ones
// from 440 on are the ones decompiled code uses.
#pragma once

#define CHL2_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CHL2_V100(p) CHL2_V10(p##0) CHL2_V10(p##1) CHL2_V10(p##2) CHL2_V10(p##3) CHL2_V10(p##4) CHL2_V10(p##5) CHL2_V10(p##6) CHL2_V10(p##7) CHL2_V10(p##8) CHL2_V10(p##9)

class CHL2_Player
{
public:
	CHL2_V100(pa) CHL2_V100(pb) CHL2_V100(pc) CHL2_V100(pd)	// slots 0..399
	CHL2_V10(pe0) CHL2_V10(pe1) CHL2_V10(pe2) CHL2_V10(pe3)	// slots 400..439
	virtual void vfunc440(); virtual void vfunc441(); virtual void vfunc442(); virtual void vfunc443(); virtual void vfunc444();
	virtual int vfunc445(); virtual void vfunc446(); virtual void vfunc447(); virtual void vfunc448(); virtual void vfunc449();
	virtual void vfunc450(); virtual void vfunc451(); virtual void vfunc452(); virtual void vfunc453(); virtual void vfunc454();
	virtual void vfunc455(); virtual void vfunc456(); virtual void vfunc457(); virtual void vfunc458(); virtual void vfunc459();
	virtual void vfunc460(); virtual void vfunc461(); virtual void vfunc462(); virtual void vfunc463(); virtual void vfunc464();
	virtual void vfunc465(); virtual void vfunc466(); virtual void vfunc467(); virtual void vfunc468(); virtual void vfunc469();
	virtual void vfunc470(); virtual void vfunc471();
	virtual void vfunc472();
	virtual bool vfunc473(float value);
	virtual void vfunc474(float value);
	virtual void vfunc475(int value);
	virtual void vfunc476(); virtual void vfunc477(); virtual void vfunc478();
	virtual bool vfunc479();
	virtual float vfunc480();
	virtual float vfunc481();

	char m_pad0004[0x2528];	// 0x0004 .. 0x252B
	int m_n252c;
	float m_f2530;
};
