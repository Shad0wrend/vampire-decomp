// CUnknown1073a104: the per-kind object a feat of kind 9..20 takes its value from. Only 0x101e56e0 refers to any of
// these five global pointers, and it uses just slot 1 of the vtable (a flag, 0x101e58d5) and the dword at +0x2c (the
// value, positive only), so one placeholder class serves them all; the real class name is not known.
#pragma once

class CUnknown1073a104
{
public:
	virtual void vfunc0();
	virtual bool vfunc1();	// +0x4: the flag the feat value is gated on
	char m_pad0008[0x2c - 0x8];
	int m_nValue2c;	// 0x2c: the value for this kind (used when positive)
};

extern CUnknown1073a104 *g_1073a104;	// the object of feat kind 9
extern CUnknown1073a104 *g_10739bdc;	// the object of feat kind 10
extern CUnknown1073a104 *g_10739cb4;	// the object of feat kind 11
extern CUnknown1073a104 *g_10739c6c;	// the object of feat kind 12
extern CUnknown1073a104 *g_10739c24;	// the object of feat kinds 13..20
