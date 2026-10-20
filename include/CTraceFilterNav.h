// CTraceFilterNav: navigation trace filter (primary vtable 0x1049d8c0). Derives from CTraceFilterSimple (constructor 0x1000bd7f).
#pragma once

class CTraceFilterNav
{
public:
	CTraceFilterNav *sub_102e30d0(int a, int b);	// constructor body: base constructor, vtable, the two fields; returns this
	bool vfunc0(void *pHandleEntity, int contentsMask);	// slot 0 "CTraceFilterNav::ShouldHitEntity": scope trace; false when sub_102eb170(pEnt, 0) accepts it, when the related entity (+0x10) is set but sub_101d2fc0 refuses, when the entity's slot 91 (+0xc, mask) or the global at 0x1070ba0c's slot 77 refuse, or when the related entity's slot 69 accepts; else CTraceFilterSimple::ShouldHitEntity

	int m_pad0000[3];	// 0x00: vtable pointer and the base's fields
	int m_0c;	// 0x0c: second constructor argument
	int m_10;	// 0x10: first constructor argument
};
