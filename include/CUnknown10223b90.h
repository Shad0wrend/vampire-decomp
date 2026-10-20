// CUnknown10223b90: object with an entity handle at +0x10c and three 0x18 byte sub-objects at +0x5b8 / +0x5d0 / +0x5e8
// that are each handed (entity, owner, 0); real name not yet known. Only what decompiled code needs.
#pragma once

struct CUnknown100cd660	// a 0x18 byte sub-object
{
	char m_pad[0x18];

	void sub_100cd660(void *pEntity, void *pOwner, int a);	// called through the stub at 0x10010794
};

class CUnknown10223b90
{
public:
	char m_pad0000[0x10c];
	unsigned int m_hEntity10c;	// 0x10c entity handle
	char m_pad0110[0x560 - 0x110];
	int m_nMode560;	// 0x560
	char m_pad0564[4];
	unsigned int m_hOld568;	// 0x568
	unsigned int m_hOld56c;	// 0x56c
	char m_pad0570[0x5b8 - 0x570];
	CUnknown100cd660 m_subs[3];	// 0x5b8

	void sub_10223b90();	// hands the entity of the handle at +0x10c to sub-object 0 and, by the mode at +0x560 (1 or not), to sub-object 1 or 2; then mode = 0, +0x56c = +0x568, +0x568 = -1
};
