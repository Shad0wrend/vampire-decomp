// S101a5760: placeholder class (name unknown) with three embedded CVDmg_t records at +0x23a78, stride 0xec84.
#pragma once
#include "CVDmg_t.h"

struct E101a5760 { CVDmg_t d; char pad[0xec84 - sizeof(CVDmg_t)]; };
struct S101a5760 {
	char m_pad0000[0x23a78];
	E101a5760 m_e[3];
	S101a5760();
};
