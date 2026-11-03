// CVStatAction_t: stat action record (no vtable known). Only the methods decompiled code needs.
#pragma once

#include "CVDmg_t.h"

class CVStatActionPart
{
public:
	char m_pad0000[0x14];

	~CVStatActionPart();	// empty out-of-line destructor (0x102056f0, reached through the stub at 0x1000c0c2)
};

class CVStatActionHead	// the first 0x18 bytes of the CVTraitDependencyValue_t-like object at +0x10 of the action (vtable, then data)
{
public:
	char m_pad0000[0x18];

	CVStatActionHead() { sub_10205c70(); }	// the constructor of the whole object (stub 0x100135d9)
	void sub_10205c70();
};

struct CVStatActionRecord4	// what CVStatAction_t::m_pData (+0x3c) points to for action type 4 (the discipline-particle action): compared by the free function 0x1022f140
{
	char m_szName[0x80];	// +0x00: the particle (emitter) name, _strcmpi'd with CDisciplineParticle's name (+0x450)
	int m_nAttachment80;	// +0x80: compared with the particle's int at +0x458
	char m_szAttach84[0x80];	// +0x84: _strcmpi'd with the particle's string at +0x45c
	char m_bViewModel104;	// +0x104: whether the particle is attached to a CBaseViewModel (handle at +0x37c)
};

// The free function 0x1022f140 (cdecl, `static void sub_1022f140(CVStatAction_t *pAction, int nEntIndex)`) acts on an action
// (flags dword at +0 with bit 0x10 = disabled, type at +4): type 1 hands the owner's +0x9c object and the data pointer (+0x3c)
// to sub_101f9a40 on the global 0x1074df78; type 4 finds the matching CDisciplineParticle of the owner character's emitter
// handle vector (+0x14c0, count +0x14cc) by m_b54 == particle+0x4a4 and the CVStatActionRecord4 fields and stops it
// (slot 242, sub_10051810, next think curtime + 10.0f, SetThink SUB_Remove); types 2 and 3 do nothing; other types Msg
// "Unable to match StatAction type!\n".
class CVStatAction_t
{
public:
	int m_pad0000;
	int m_pad0004;	// +4: the action type (1 name of a table entry, 2 lookup, 3 FUNC, 4 owns the string record at +0x3c)
	int m_nMin;	// +8
	int m_nMax;	// +0xc
	CVStatActionHead m_head;	// +0x10
	CVStatActionPart m_part;	// +0x28
	void *m_pData;	// +0x3c
	CVDmgBlock16_t m_block40;	// +0x40
	int m_a50;	// +0x50
	int m_b54;	// +0x54

	CVStatAction_t(int a, int b);	// "CVStatAction_t::CVStatAction_t" (0x101fc760, stub 0x1000e8d6), called on freshly allocated memory
	~CVStatAction_t();	// scope trace, frees the record at +0x3c for type 4, then the part at +0x28
	bool sub_101fceb0(int value);	// "CVStatAction_t::IsAffectedBy"
	bool sub_101fcf50();	// "CVStatAction_t::AlwaysTriggers"
	void sub_101fd110(int a, int b, int c, int d);	// "CVStatAction_t::Apply"
	void sub_101fd1b0(int a, int b, int c);	// "CVStatAction_t::Remove"
	const char *sub_1000285b();	// stub of 0x101fd250: returns the action's description string
	const char *sub_101fd250();	// "CVStatAction_t::ToDetailedStr": scope trace, formats "[ min - max ]: ..." by action type (+4: 1 name of a table entry, 2 a lookup on the pointer at +0x3c, 3 FUNC, 4 two strings of the record at +0x3c) into a static buffer and returns it ("<ERROR>" for other types)
	void sub_101fc9e0(void *pKeyValues);	// loads the action from one "Action" key (stub 0x100114c8)
};

extern int g_1074e7c4;	// 0x1074e7c4: the "Function" action hook (call it as void (*)(CVStatAction_t *, const char *))
