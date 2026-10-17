// CNPC_VTzimisce (RTTI .?AVCNPC_VTzimisce@@): bases are not modelled yet, so the primary vtable slots up to
// the ones we need are placeholders that keep the slot numbers right.
#pragma once

#define VT_SLOTS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define VT_SLOTS100(p) VT_SLOTS10(p##0) VT_SLOTS10(p##1) VT_SLOTS10(p##2) VT_SLOTS10(p##3) VT_SLOTS10(p##4) \
	VT_SLOTS10(p##5) VT_SLOTS10(p##6) VT_SLOTS10(p##7) VT_SLOTS10(p##8) VT_SLOTS10(p##9)

// The object returned by CNPC_VTzimisce slot 167; its slot 220 gives the position-like pointer.
class CNPC_VTzimisceHelper
{
public:
	VT_SLOTS100(h0)
	VT_SLOTS100(h1)
	VT_SLOTS10(h20)
	VT_SLOTS10(h21)
	virtual void *vfunc220();
};

class CNPC_VTzimisce
{
public:
	VT_SLOTS100(s0)
	VT_SLOTS10(s10)
	VT_SLOTS10(s11)
	VT_SLOTS10(s12)
	VT_SLOTS10(s13)
	VT_SLOTS10(s14)
	VT_SLOTS10(s15)
	virtual void s160(); virtual void s161(); virtual void s162(); virtual void s163();
	virtual void s164(); virtual void s165(); virtual void s166();
	virtual CNPC_VTzimisceHelper *vfunc167();

	char m_pad0004[0x666c];
	unsigned int m_hTarget;
	char m_posBuf[0x18];
	int m_state;

	void *sub_103bf580(void *pDefault);
};
