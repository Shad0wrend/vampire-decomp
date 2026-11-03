// CUnknown1030f940: a sensor object of an NPC (pointer at +4): it keeps a linked list (head index at +0x1c) of the
// records of a global table that its NPC cares about, and the time of the last update (+0x84); real name not yet known.
#pragma once

#define U1030F940_S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CUnknown1030f940Npc	// the NPC: only the slots 470 and 473 are typed
{
	U1030F940_S10(a0) U1030F940_S10(a1) U1030F940_S10(a2) U1030F940_S10(a3) U1030F940_S10(a4)
	U1030F940_S10(a5) U1030F940_S10(a6) U1030F940_S10(a7) U1030F940_S10(a8) U1030F940_S10(a9)
	U1030F940_S10(b0) U1030F940_S10(b1) U1030F940_S10(b2) U1030F940_S10(b3) U1030F940_S10(b4)
	U1030F940_S10(b5) U1030F940_S10(b6) U1030F940_S10(b7) U1030F940_S10(b8) U1030F940_S10(b9)
	U1030F940_S10(c0) U1030F940_S10(c1) U1030F940_S10(c2) U1030F940_S10(c3) U1030F940_S10(c4)
	U1030F940_S10(c5) U1030F940_S10(c6) U1030F940_S10(c7) U1030F940_S10(c8) U1030F940_S10(c9)
	U1030F940_S10(d0) U1030F940_S10(d1) U1030F940_S10(d2) U1030F940_S10(d3) U1030F940_S10(d4)
	U1030F940_S10(d5) U1030F940_S10(d6) U1030F940_S10(d7) U1030F940_S10(d8) U1030F940_S10(d9)
	U1030F940_S10(e0) U1030F940_S10(e1) U1030F940_S10(e2) U1030F940_S10(e3) U1030F940_S10(e4)
	U1030F940_S10(e5) U1030F940_S10(e6)
	virtual void vfunc470();
	virtual void v471(); virtual void v472();
	virtual unsigned int vfunc473();	// the kind mask the NPC is interested in
};

struct CUnknown1030f940Rec	// a record of the global table
{
	int m_unk0;		// 0x00: the sound owner entity handle
	unsigned int m_nMask;	// 0x04
	int m_nVolume;		// 0x08
	float m_flTime;		// 0x0c
	int m_n10;		// 0x10
	unsigned char m_bOcclude;	// 0x14: run the sound occlusion check on this record (the flag read by sub_1030f7b0)
	char m_pad15[3];
	int m_iNext;	// 0x18
	int m_iPrev;	// 0x1c: the next link of the sensor's list
	float m_vecOrigin[3];	// 0x20: the sound origin (the record is 0x2c bytes)
};

class CUnknown1030f940
{
public:
	char m_pad0000[4];
	CUnknown1030f940Npc *m_pNpc;	// 0x04
	char m_pad0008[0x1c - 8];
	int m_iHead;	// 0x1c
	char m_pad0020[0x84 - 0x20];
	float m_flLastUpdate;	// 0x84

	void sub_1030f940();	// rebuilds the list: every record of the global table whose mask intersects the NPC's and that passes sub_1030f7b0, linked through the records' +0x1c; then slot 470 of the NPC and the update time
	char sub_1030f7b0(CUnknown1030f940Rec *pRec);	// the per-record test (stub 0x10013e67)
};
