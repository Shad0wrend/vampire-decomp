// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103defc0 size=0x104
#include "CAI_BaseNPCTroika.h"
#include "CEHandleGet.h"

struct ZTuning103defc0 { float sub_101e8bf0(); };
struct ZWeapon103defc0 { void sub_1024f7b0(); };
extern ZTuning103defc0 g_10739d08;

struct ZView103defc0 : CAI_BaseNPCTroika
{
	void sub_1029a0b0();
	char sub_10334c20(void *pWeapon);
	void sub_10332aa0(int a, int b, int c);
	void sub_103defc0();
};

void ZView103defc0::sub_103defc0()
{
	*((char *)this + 0x667c) = 1;
	sub_1029a0b0();
	void *pWeapon = sub_1032e120("item_w_zombie_fists");
	if (pWeapon)
	{
		if (sub_10334c20(pWeapon))
			vfunc383(pWeapon, 0);
		else
			((ZWeapon103defc0 *)pWeapon)->sub_1024f7b0();
	}
	sub_10332aa0(1, 1, 10);
	vfunc66();
	unsigned int &h = *(unsigned int *)((char *)this + 0x628c);
	sub_10279a50((int)EHandle_Get(h));
	sub_10279cc0((CBaseEntity *)EHandle_Get(h));
	*(float *)((char *)this + 0x66d8) = g_10739d08.sub_101e8bf0() + gpGlobals->curtime;
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
	*(int *)((char *)this + 0x1b34) = 0xd6;
	sub_102ae750(0x161, 0);
}
// END FUNCTION

// FUNCTION: 0x103df2e0 size=0x20c
#include "CBaseCombatCharacter.h"
#include "CNPC_VZombie.h"

struct CZombieEnemy167 {
	char m_pad[0xa8];
	CBaseCombatCharacter *m_pChar;
};

int CNPC_VZombie::vfunc438()
{
	m_nType1b2c = 0x2b;
	if (m_b667c) {
		m_nLine1b34 = 0x145;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
		return 0x161;
	}
	if ((m_nEffectFlags & 0x40) == 0x40)
		vfunc67();
	if (!vfunc158_slot())
		sub_103dfbb0(m_a6680, m_a668c);
	if (m_nMode6678 == 8 || m_nMode6678 == 7) {
		if (sub_10269aa0(0x4c) || sub_10269aa0(0x4c) || sub_10269aa0(0x4d) || sub_10269aa0(0x79)) {
			m_nMode6678 = 1;
		} else if (!sub_10269aa0(0x68)) {
			m_nLine1b34 = 0x160;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
			return 0x16b;
		}
	}
	switch (m_nState5cc0) {
	case 1:
		switch (m_nMode6678) {
		case 1:
			sub_1026e340(2);
			if (sub_10269aa0(0x46)) {
				m_nLine1b34 = 0x171;
				m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
				return 0x165;
			}
			m_nLine1b34 = 0x175;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
			return 0x169;
		case 5:
			m_nLine1b34 = 0x17b;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
			return 0x169;
		default:
			if (m_p6590) {
				m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
				m_nLine1b34 = 0x181;
				return m_p6590[1];
			}
		}
		break;
	case 2:
	case 3: {
		CZombieEnemy167 *pEnemy = vfunc167();
		if (pEnemy) {
			CBaseCombatCharacter *pChar = pEnemy->m_pChar;
			if (pChar && sub_10269aa0(0x46) && !pChar->sub_10146a80()) {
				m_nLine1b34 = 0x190;
				m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
				return 0x165;
			}
		}
		m_nLine1b34 = 0x194;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
		return 0x169;
	}
	}
	return sub_1035fb50();
}
// END FUNCTION

// FUNCTION: 0x103df5f0 size=0x1d8
#include "CNPC_VAnimal.h"
#include "CNPC_VZombie.h"

struct CVZombieView461
{
	char pad0000[0x1b38];
	int m_n1b38;
	const char *m_pszFile1b3c;
	int m_nLine1b40;
	char pad1b44[0x5b80 - 0x1b44];
	char m_b5b80;
	char pad5b81[0x5cc0 - 0x5b81];
	int m_nState5cc0;
	volatile int m_nIdeal5cc4;
};

int CNPC_VZombie::vfunc461()
{
	CVZombieView461 *p = (CVZombieView461 *)this;
	p->m_n1b38 = 0x2b;
	switch (p->m_nState5cc0) {
	case 3:
		if (sub_10269d30(0x44)) {
			p->m_nIdeal5cc4 = 8;
			int ret = p->m_nIdeal5cc4;
			p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
			p->m_nLine1b40 = 0x206;
			return ret;
		}
		if (sub_10269d30(0x54) || sub_10269d30(0x46)) {
			p->m_nIdeal5cc4 = 2;
			int ret2 = p->m_nIdeal5cc4;
			p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
			p->m_nLine1b40 = 0x20c;
			return ret2;
		}
		if (!sub_10269d30(0x6a) && !sub_10269d30(0x6d) && !sub_10269d30(0x6f) && !sub_10269d30(0x70)) {
			vfunc462();
		}
		break;
	case 1:
		if (sub_10269d30(0x44)) {
			p->m_nIdeal5cc4 = 8;
			int ret = p->m_nIdeal5cc4;
			p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
			p->m_nLine1b40 = 0x1d6;
			return ret;
		}
		if (sub_10269d30(0x54)) {
			p->m_nIdeal5cc4 = 2;
			int ret2 = p->m_nIdeal5cc4;
			p->m_pszFile1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
			p->m_nLine1b40 = 0x1de;
			return ret2;
		}
		if (sub_10269d30(0x4c) || sub_10269d30(0x4d)) {
			p->m_b5b80 = 0;
		} else if (!sub_10269d30(0x6a) && !sub_10269d30(0x6d) && !sub_10269d30(0x6e) && !sub_10269d30(0x6f) && !sub_10269d30(0x6b) && !sub_10269d30(0x70)) {
			sub_10269d30(0x5e);
		}
		break;
	}
	return sub_10003daa();
}
// END FUNCTION

// FUNCTION: 0x103e05e0 size=0xb6
#include "CNPC_VZombie.h"
#include "CPASFilter.h"

struct CZombieEngineSound
{
	virtual void v0();
	virtual void v1();
	virtual void v2(CRecipientFilter *pFilter, int a, const float *pOrigin, const float *pAngles, int nSound);
};
extern CZombieEngineSound *g_10540528;
void sub_10139970(const Vector *pDir, Vector *pAngles);

// TARGET: CNPC_VZombie::sub_103e05e0
void CNPC_VZombie::sub_103e05e0(int nSound)
{
	Vector vecOrigin, vecDir, vecAngles;
	sub_10331da0(&vecOrigin, &vecDir);
	sub_10139970(&vecDir, &vecAngles);
	CPASFilter filter(&vecOrigin.x);
	g_10540528->v2(&filter, 0, &vecOrigin.x, &vecAngles.x, nSound);
}
// END FUNCTION

// FUNCTION: 0x103e06d0 size=0x1eb
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CNPC_VZombie.h"
#include "CVStatList_t.h"
#include "CVDmg_t.h"
#include "CAI_BaseNPCTroika.h"

struct CVZombie5c38
{
	char m_pad00[0x1c];
	int m_n1c;	// 0x1c
};

struct CZombieDmgInfo
{
	CVDmg_t *m_pDmg;	// 0x0
	char m_pad04[0x30 - 4];
	float m_flDamage;	// 0x30
};

struct CZombieGlobal
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad04[0x2c - 4];
	int m_n2c;	// 0x2c
};

extern CZombieGlobal *g_1094049c;

// TARGET: CNPC_VZombie::vfunc142
int CNPC_VZombie::vfunc142(CZombieDmgInfo *pInfo)
{
	int nStatA = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
	int nStatB = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11);
	float flDamage;
	if (pInfo->m_pDmg)
		flDamage = (float)pInfo->m_pDmg->sub_101faa70();
	else
		flDamage = pInfo->m_flDamage;
	int nBase;
	if (g_1094049c->vfunc1())
		nBase = 0;
	else
		nBase = g_1094049c->m_n2c;
	if ((float)(nBase - nStatA + nStatB) < flDamage)
		m_b66e0 = 1;
	int r = sub_10004647(pInfo);
	int node = -1;
	if (m_p5c38)
		node = m_p5c38->m_n1c;
	bool bOther = true;
	if (r && node != -1) {
		CAI_CondOwner *pOwner = ((CAI_CondOwner *(__fastcall *)(CNPC_VZombie *))(*(void ***)this)[580])(this);
		if (pOwner->sub_102ea280(node) != 0x161) {
			m_nLine1b34 = 0x469;
			m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
			sub_102ae750(0x164, 0);
			bOther = false;
		}
	}
	if (bOther && !m_b6675) {
		m_nLine1b34 = 0x46e;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VZombie.cpp";
		sub_102ae750(0x162, 1);
	}
	if (m_b66e1) {
		if (r)
			sub_103e05e0((int)"zombie_headshot_dmg_emitter");
		else
			sub_103e05e0((int)"zombie_headshot_death_emitter");
	}
	return r;
}
// END FUNCTION
