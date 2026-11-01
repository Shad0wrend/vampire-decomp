// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10189b00 size=0x6
#include "CPlayerResource.h"
namespace lifted {
extern char g_10728480;
}
int CPlayerResource::vfunc80()
{
    return (int)&lifted::g_10728480;
}
// END FUNCTION

// FUNCTION: 0x10189b20 size=0x3
#include "CPlayerResource.h"
int CPlayerResource::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10189fd0 size=0x6
#include "CPlayerResource.h"
namespace lifted {
extern char g_105896c0;
}
CPlayerResource::Datamap82 CPlayerResource::vfunc82()
{
    return (CPlayerResource::Datamap82)&lifted::g_105896c0;
}
// END FUNCTION

// FUNCTION: 0x1018a0d0 size=0xdc
#include "CBaseEntity.h"
#include "CPlayerResource.h"

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
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 1.0;
	m_flNextUpdate = gpGlobals->curtime + 1.0;
}
// END FUNCTION

// FUNCTION: 0x1018a1f0 size=0x5
#include "CPlayerResource.h"
bool CPlayerResource::vfunc86(int a0, int a1, int a2, int a3, int a4)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1018a210 size=0x22
// TARGET: sub_1018a210
void __fastcall sub_1018a210(void *pSelf)
{
    ((void (__fastcall *)(void *))(*(void ***)pSelf)[0x3c8 / 4])(pSelf);
    *(float *)((char *)pSelf + 0x17c) = (float)(gpGlobals->curtime + 0.1);
}
// END FUNCTION

// FUNCTION: 0x1018a250 size=0x129
#include "CPlayerResource.h"


struct CPlayerDataView {
	char m_pad0000[0x19f6];
	unsigned char m_b19f6;
	char m_pad19f7;
	float m_f19f8;
	char m_pad19fc[4];
	int m_i1a00;
	int m_i1a04;
	int m_i1a08;
	int m_i1a0c;
	int m_i1a10;
	char m_pad1a14[0x22bc - 0x1a14];
	int m_i22bc;
	int m_i22c0;
	char m_pad22c4[0x22dc - 0x22c4];
	unsigned char m_b22dc;
};

CPlayerDataView *sub_101cd9e0(int index);
void sub_101cda90(int index, int *pPing, int *pLoss);

// TARGET: CPlayerResource::vfunc242
void CPlayerResource::vfunc242()
{
	for (int i = 1; i <= gpGlobals->maxClients; i++) {
		m_tables[10][i] = 0;
		CPlayerDataView *pPlayer = sub_101cd9e0(i);
		if (pPlayer) {
			m_tables[2][i] = pPlayer->m_i22bc;
			m_tables[9][i] = pPlayer->m_i22c0;
			m_tables[10][i] = pPlayer->m_b22dc;
			m_tables[3][i] = (int)pPlayer->m_f19f8;
			m_tables[4][i] = pPlayer->m_i1a00;
			m_tables[5][i] = pPlayer->m_i1a04;
			m_tables[6][i] = pPlayer->m_i1a08;
			m_tables[7][i] = pPlayer->m_i1a0c;
			m_tables[8][i] = pPlayer->m_i1a10;
			m_tables[11][i] = pPlayer->m_b19f6;
			if (m_flNextUpdate < gpGlobals->curtime) {
				int *pPing = &m_tables[0][i];
				sub_101cda90(i, pPing, &m_tables[1][i]);
				int ping = *pPing;
				if (ping >= 1023)
					ping = 1023;
				*pPing = ping;
			}
		}
	}
	if (m_flNextUpdate < gpGlobals->curtime)
		m_flNextUpdate = gpGlobals->curtime + 2.0;
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
