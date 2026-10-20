// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018a0d0 size=0xdc
#include "CBaseEntity.h"
#include "CPlayerResource.h"

struct S_1070b228 { char pad[0xc]; float curtime; };
extern S_1070b228 *g_1070b228;
void sub_1010f4e0();
extern "C" void *memset(void *, int, unsigned int);
#pragma intrinsic(memset)

void CPlayerResource::vfunc103()
{
	memset(m_tables[0], 0, sizeof(m_tables[0]));
	memset(m_tables[1], 0, sizeof(m_tables[1]));
	memset(m_tables[2], 0, sizeof(m_tables[2]));
	memset(m_tables[3], 0, sizeof(m_tables[3]));
	memset(m_tables[4], 0, sizeof(m_tables[4]));
	memset(m_tables[5], 0, sizeof(m_tables[5]));
	memset(m_tables[6], 0, sizeof(m_tables[6]));
	memset(m_tables[7], 0, sizeof(m_tables[7]));
	memset(m_tables[8], 0, sizeof(m_tables[8]));
	memset(m_tables[9], 0, sizeof(m_tables[9]));
	memset(m_tables[10], 0, sizeof(m_tables[10]));
	memset(m_tables[11], 0, sizeof(m_tables[11]));
	((CBaseEntity *)this)->sub_100ac4e0((int)sub_1010f4e0, 0, 0);
	*(float *)((char *)this + 0x17c) = g_1070b228->curtime + 1.0;
	m_flNextUpdate = g_1070b228->curtime + 1.0;
}
// END FUNCTION

// FUNCTION: 0x1018a3d0 size=0x1e
#include "CPlayerResource.h"

void sub_100aa7b0(void *p);

// TARGET: CPlayerResource::vfunc5
CPlayerResource *CPlayerResource::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
