// C_VGuiScreen: skeleton from the game's RTTI (2026-11-24)
// declared: its base, slot 16
#pragma once
#include "C_BaseEntity.h"

struct CVGuiMemA { int m_unk0; void sub_100cd1e0(); ~CVGuiMemA() { sub_100cd1e0(); } };
struct CVGuiMemB { int m_unk0; void sub_10110440(); ~CVGuiMemB() { sub_10110440(); } };
class C_VGuiScreen : public C_BaseEntity
{
public:
	char m_pad0014[0x450 - 0x14];
	CVGuiMemA m_a;
	CVGuiMemA m_b;
	char m_pad0458[0x498 - 0x458];
	CVGuiMemB m_c;
	virtual int vfunc16();
};
