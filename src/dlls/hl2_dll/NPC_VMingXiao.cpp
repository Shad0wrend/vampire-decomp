// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10394120 size=0x84
#include "CNPC_VMingXiao.h"

// TARGET: CNPC_VMingXiao::vfunc437
int CNPC_VMingXiao::vfunc437()
{
	m_n1b2c = 0x19;
	if (m_nState5cc0 == 5) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		m_nLine1b34 = 0x4f6;
		return 0x157;
	}
	CBaseEntity *pEnt = m_h6680.Get();
	vfunc388(!pEnt ? 0 : pEnt->m_n00a0, 0);
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103945a0 size=0x96
#include "CNPC_VMingXiao.h"

typedef char (__fastcall *PFN_CHAR)(void *);
typedef int (__fastcall *PFN_INT)(void *);

int CNPC_VMingXiao::vfunc461()
{
	char *p = (char *)this;
	volatile int *state = (volatile int *)(p + 0x5cc4);
	*(int *)(p + 0x1b38) = 0x19;
	if (!((PFN_CHAR)(*(void ***)this)[158])(this) || ((PFN_INT)(*(void ***)this)[464])(this) == 7) {
		*(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		*(int *)(p + 0x1b40) = 0x5da;
		*state = 7;
	}
	int r = ((PFN_INT)(*(void ***)this)[167])(this);
	*(const char **)(p + 0x1b3c) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	int ret;
	if (r) {
		*state = 2;
		ret = *state;
		*(int *)(p + 0x1b40) = 0x5e0;
		return ret;
	}
	*state = 1;
	ret = *state;
	*(int *)(p + 0x1b40) = 0x5e4;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10395750 size=0x2c8
#include "CNPC_VMingXiao.h"
#include "CTakeDamageInfo.h"
#include "CVDmg_t.h"
#include "CUnknown10739d08.h"
struct CTDIView101c2b10 { void sub_101c2b10(int a); };
extern CUnknown10739d08 g_10739d08;
void sub_1023e4b0(CNPC_VMingXiao *pNpc, int n);
inline float Tune24() { return g_10739d08.sub_101e8da0()[9]; }
inline float Tune28() { return g_10739d08.sub_101e8da0()[10]; }

// TARGET: CNPC_VMingXiao::sub_10395750
void CNPC_VMingXiao::sub_10395750(int index, CTakeDamageInfo *pInfo, void *pWeapon)
{
	if (pWeapon && ((int (__fastcall *)(void *))(*(void ***)pWeapon)[0x5a0 / 4])(pWeapon) & 0x18000) {
		float dmg;
		if (pInfo->m_pVDmg00)
			dmg = (float)pInfo->m_pVDmg00->sub_101faa70();
		else
			dmg = pInfo->m_flDamage;
		pInfo->m_flDamage = Tune28() * dmg;
	}
	if (index > -1) {
		if (sub_10398000(index)) {
			float dmg;
			if (pInfo->m_pVDmg00)
				dmg = (float)pInfo->m_pVDmg00->sub_101faa70();
			else
				dmg = pInfo->m_flDamage;
			m_flSlotValue[index] = m_flSlotValue[index] - dmg;
			if (m_flSlotValue[index] <= 0.0f)
				sub_10397410(index);
			float *pOrigin = vfunc219_slot();
			Vector vecA = *(Vector *)pOrigin;
			Vector vecB = *(Vector *)&pInfo->m_pos1c;
			sub_102c41d0("Ming_xiao_tentacle_damage_emitter", &vecB, &vecA, 0);
			if (!m_b63d8) {
				float d;
				if (pInfo->m_pVDmg00)
					d = (float)pInfo->m_pVDmg00->sub_101faa70();
				else
					d = pInfo->m_flDamage;
				sub_1023e4b0(this, (int)d);
			}
			pInfo->m_flDamage = 0;
			((CTDIView101c2b10 *)pInfo)->sub_101c2b10(1);
		} else {
			float dmg;
			if (pInfo->m_pVDmg00)
				dmg = (float)pInfo->m_pVDmg00->sub_101faa70();
			else
				dmg = pInfo->m_flDamage;
			float n = (float)(int)dmg;
			pInfo->m_flDamage = (float)(int)(n / Tune24() > 1.0f ? n / Tune24() : 1.0f);
		}
		return;
	}
	if (index == -2 && m_n670c <= 2) {
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
		m_nLine1b34 = 0x8a5;
		sub_102ae750(0x16b, 0);
		switch (m_nMode673c) {
		case 1:
		case 2:
			sub_10398fd0();
			return;
		case 3:
		case 4:
			sub_103990a0();
			return;
		}
		return;
	}
	float dmg;
	if (pInfo->m_pVDmg00)
		dmg = (float)pInfo->m_pVDmg00->sub_101faa70();
	else
		dmg = pInfo->m_flDamage;
	float n = (float)(int)dmg;
	pInfo->m_flDamage = (float)(int)(n / Tune24() > 1.0f ? n / Tune24() : 1.0f);
}
// END FUNCTION

// FUNCTION: 0x10395c70 size=0x4f
#include "CNPC_VMingXiao.h"
#include "CAI_BaseNPCTroika.h"
void CNPC_VMingXiao::sub_10395c70()
{
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	*(int *)((char *)this + 0x1b34) = 0x916;
	if (sub_10398870())
		((CAI_BaseNPCTroika *)this)->sub_102ae750(0x16e, 1);
	else
		((CAI_BaseNPCTroika *)this)->sub_102ae750(0x16d, 1);
	*(int *)((char *)this + 0x200) = 1;
	*((char *)this + 0x6744) = 1;
	*((char *)this + 0x63d8) = 1;
}
// END FUNCTION

// FUNCTION: 0x103967d0 size=0x31a
#include "CNPC_VMingXiao.h"
#include "CBaseAnimating.h"

#define FILE_STAMP(line) (m_nLine1b34 = (line), m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp")

// TARGET: CNPC_VMingXiao::vfunc605
int CNPC_VMingXiao::vfunc605(int unused)
{
	if (m_b6078) {
		FILE_STAMP(0xb12);
		return 0xe3;
	}
	if (!m_pTarget6444) {
		m_pTarget6444 = (CBaseEntity *)vfunc609(0);
		if (!m_pTarget6444)
			goto L1;
	}
	if (!sub_10014df8(0x2f)) {
		FILE_STAMP(0xb27);
		return 0xec;
	}
L1:
	if (sub_10014df8(8) && vfunc307() && vfunc599((int)vfunc167())) {
		FILE_STAMP(0xb2c);
		return 0xe3;
	}
	int r = sub_102b8620();
	if (r) return r;
	r = sub_102b7370();
	if (r) return r;
	r = sub_102b7cf0();
	if (r) return r;
	if (!sub_10014df8(0x5f) && !sub_10014df8(8)) {
		r = vfunc606(unused);
		if (r) return r;
		if (sub_10014df8(0x2e)) { FILE_STAMP(0xb6e); return 0xbd; }
		if (sub_10014df8(0x60)) { FILE_STAMP(0xb73); return 0xb1; }
		return 0;
	}
	if (!sub_10014df8(0x2f) && !sub_10014df8(0x63)) {
		if (((CBaseAnimating *)this)->sub_1008dc40(0x10, -1) && !sub_10014df8(0x2c) && enginerandom->vfunc2(0, 0x63) < 0x4b) {
			FILE_STAMP(0xb49);
			return 0xef;
		}
		if (vfunc307() && enginerandom->vfunc2(0, 0x63) < 0x19 && vfunc599((int)vfunc167())) {
			FILE_STAMP(0xb4d);
			return 0xe8;
		}
		FILE_STAMP(0xb51);
		return 0xf0;
	}
	if (((CBaseAnimating *)this)->sub_1008dc40(0x10, -1) && !sub_10014df8(0x2c) && enginerandom->vfunc2(0, 0x63) < 0x4b) {
		FILE_STAMP(0xb58);
		return 0xb8;
	}
	if (vfunc307() && vfunc599((int)vfunc167())) {
		FILE_STAMP(0xb5c);
		return 0xe8;
	}
	FILE_STAMP(0xb60);
	return 0xb9;
}
// END FUNCTION

// FUNCTION: 0x10396bc0 size=0x181
#include "CNPC_VMingXiao.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include "engineiface.h"
#include "CUnknown10739d08.h"
#include "CUnknown103662d0.h"
#include "CUnknown10398d90.h"
#include "CUnknown102718e0.h"

extern CUnknown10739d08 g_10739d08;

int CNPC_VMingXiao::sub_10396bc0()
{
	EHANDLE *ph = &m_h6718;
	if (ph->Get())
		return 0;
	if (gpGlobals->curtime < m_flSlotTimeA[5])
		return 0;
	if (gpGlobals->curtime < m_flSlotTimeA[4])
		return 0;
	CBaseEntity *pTarget = vfunc167();
	if (pTarget)
		vfunc530(pTarget);
	sub_10014df8(9);
	int nRoll = enginerandom->vfunc2(0, 99);
	if (*(int *)((char *)g_10739d08.sub_101e8da0() + 8) > nRoll)
		m_h6718 = sub_10398b20(&m_nSide671c, (Vector *)&m_n6720, (Vector *)&m_n672c);
	if (!ph->Get())
		return 0;
	((CUnknown103662d0 *)this)->sub_103662d0(*(CUnknown102718e0 *)ph, 20.0f);
	sub_102c4380(ph->Get());
	((CUnknown10398d90 *)this)->sub_10398d90(1);
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	m_nLine1b34 = 0xbc3;
	return 0x167;
}
// END FUNCTION

// FUNCTION: 0x10396dc0 size=0x97
#include "CNPC_VMingXiao.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

static inline bool HandleValid(const unsigned int *ph)
{
	if (*ph == 0xffffffff)
		return false;
	CGlobalEntityList_Slot *s = &g_10566458->m_Slots[*ph & 0x1fff];
	return s->m_Serial == (int)(*ph >> 13) && s->m_pEntity;
}

int CNPC_VMingXiao::sub_10396dc0()
{
	if (HandleValid((unsigned int *)((char *)this + 0x6718))
		&& *(int *)((char *)this + 0x673c) >= 3 && *(int *)((char *)this + 0x673c) <= 4) {
		if (sub_10014df8(0x7b)) {
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
			*(int *)((char *)this + 0x1b34) = 0xbe1;
			return 0x15c;
		}
		if (sub_10014df8(0x7c)) {
			*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
			*(int *)((char *)this + 0x1b34) = 0xbe5;
			return 0x15d;
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10397410 size=0x408
#include "CNPC_VMingXiao.h"
#include "CNPC_VMingXiaoTentacle.h"
#include "CUnknown10310c10.h"
extern CUnknown10310c10 g_1093bb9c;
__declspec(dllimport) void DevMsg(const char *, ...);
float *sub_102d6100(int);
float *sub_102d6120(int);

// TARGET: CNPC_VMingXiao::sub_10397410
void *CNPC_VMingXiao::sub_10397410(int nSlot)
{
	m_eLastLostTentacle = nSlot;
	m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";
	m_nLine1b34 = 0xcac;
	sub_102ae750(0x16c, 0);
	switch (m_nMode673c) {
	case 1:
	case 2:
		sub_10398fd0();
		break;
	case 3:
	case 4:
		if (nSlot == m_nSide671c)
			sub_103990a0();
	}
	const char *pszAtt = sub_10398680(nSlot);
	sub_102c42a0("Ming_xiao_tentacle_burst_emitter", this, pszAtt, 0);
	Vector vecSpawn;
	sub_10398630(nSlot, &vecSpawn);
	Vector vecOrg = *(Vector *)vfunc219_slot();
	Vector vecA = *(Vector *)sub_102d6100(0x11);
	Vector vecB = *(Vector *)sub_102d6120(0x11);
	Vector pos = vecSpawn;
	float flRadius = 20.0f;
	int nTry = 0;
	int nDir = 0;
	while (!sub_102a0fb0(&pos, 0x2400b, &vecA, &vecB)) {
		switch (nDir) {
		case 0:
			pos.x = vecSpawn.x + flRadius;
			pos.y = vecSpawn.y + flRadius;
			break;
		case 1:
			pos.x = vecSpawn.x + flRadius;
			pos.y = vecSpawn.y;
			break;
		case 2:
			pos.x = vecSpawn.x + flRadius;
			pos.y = vecSpawn.y - flRadius;
			break;
		case 3:
			pos.x = vecSpawn.x;
			pos.y = vecSpawn.y - flRadius;
			break;
		case 4:
			pos.x = vecSpawn.x - flRadius;
			pos.y = vecSpawn.y - flRadius;
			break;
		case 5:
			pos.x = vecSpawn.x - flRadius;
			pos.y = vecSpawn.y;
			break;
		case 6:
			pos.x = vecSpawn.x - flRadius;
			pos.y = vecSpawn.y + flRadius;
			break;
		case 7:
			pos.x = vecSpawn.x;
			pos.y = vecSpawn.y + flRadius;
			break;
		}
		nDir++;
		if (nDir > 7) {
			flRadius += 20.0f;
			nDir = 0;
		}
		nTry++;
		if (nTry >= 0x20)
			DevMsg("ERROR:  FAILED TO FIND SPAWN LOC FOR TENTACLE.\n");
	}
	CNPC_VMingXiao *pEnt = (CNPC_VMingXiao *)g_1093bb9c.sub_10310cf0(pos);
	if (pEnt) {
		CNPC_VMingXiaoTentacle *pTent = (CNPC_VMingXiaoTentacle *)pEnt;
		pEnt->vfunc218_slot(&vecOrg);
		Vector dir = vecSpawn - *(Vector *)vfunc217_slot();
		VectorNormalize(dir);
		dir *= 100.0f;
		dir.x += enginerandom->vfunc1(-10.0f, 10.0f);
		dir.y += enginerandom->vfunc1(-10.0f, 10.0f);
		dir.z += enginerandom->vfunc1(5.0f, 20.0f);
		dir *= 0.1f;
		pEnt->sub_100b2770(dir);
		pEnt->vfunc614();
		pTent->m_nSlotIndex6660 = nSlot;
		sub_10397380(pTent);
		int &rh = *(int *)&pTent->m_hMingXiao;
		rh = *(int *)vfunc1();
		m_hSlotOld[nSlot] = *(int *)pEnt->vfunc1();
		m_n6710 |= 1 << nSlot;
		m_n670c--;
		sub_10398800();
		m_f6748 = sub_103986b0();
	}
	return pEnt;
}
// END FUNCTION

// FUNCTION: 0x1039a6e0 size=0xd
#include "CUnknown1039a6e0.h"
void CUnknown1039a6e0::sub_1039a6e0(int value)
{
	m_unk1594 = value;
}
// END FUNCTION

// FUNCTION: 0x1039a700 size=0x34
extern char g_10647090[];

struct CMingXiaoView {
    char pad0[0x1b30];
    const char *m_psz1b30;
    int m_n1b34;
    void sub_10013cf5(int a, int b, int c);
    void sub_1000198d(int a, int b);
    void sub_1039a700(int unused);
};

// TARGET: CMingXiaoView::sub_1039a700
void CMingXiaoView::sub_1039a700(int unused)
{
    sub_10013cf5(1, 1, 10);
    m_psz1b30 = g_10647090;
    m_n1b34 = 0x14b1;
    sub_1000198d(0x156, 0);
}
// END FUNCTION

// FUNCTION: 0x1039a750 size=0x23a
// TARGET: CNPC_VMingXiao::sub_1039a750

#include "CNPC_VMingXiao.h"

class CUnknown10097310
{
public:
	void sub_10097310(void *pEnt);
};

class CUnk102ae750
{
public:
	void sub_102ae750(int a, int b);
};

void sub_101cf600(void *p);
CBaseEntity *sub_10136580(const char *pszName);
void sub_101d1280(void *p);

void CNPC_VMingXiao::sub_1039a750()
{
	this->sub_10272650(1);
	m_nEffectFlags |= 0x10;
	m_n168 = 0;
	m_n16c = 0;
	*(int *)((char *)this + 0x1568) = 0xf;
	this->sub_10273070(1);
	sub_101cf600(this);

	CNPC_VMingXiao *pTwin = 0;
	CBaseEntity *pFound = sub_10136580("npc_VMingXiao");
	if (pFound)
		pTwin = (CNPC_VMingXiao *)pFound->m_pNPC98;

	pTwin->m_flags204 |= 4;
	pTwin->vfunc62(this->vfunc217_slot());
	pTwin->vfunc64(this->vfunc221_slot());
	pTwin->vfunc202_slot(this);
	((CUnknown10097310 *)pTwin)->sub_10097310(this);
	pTwin->m_f63b4 = 4096.0f;
	sub_101d1280(pTwin);
	pTwin->m_nEffectFlags |= 0x60;
	pTwin->vfunc614();
	pTwin->vfunc105("models/character/monster/MingXiao/MingXiao.mdl");
	pTwin->m_nEffectFlags &= 0xffffff9f;
	pTwin->m_bAlpha1a3 = 1;
	pTwin->m_n168 = 0x1f;
	pTwin->m_n16c = 2;
	*(int *)((char *)pTwin + 0x155c) = (int)*this->vfunc1();

	const char *pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VMingXiao.cpp";

	float flTime; flTime = gpGlobals->curtime;
	*(float *)((char *)this + 0x1560) = flTime;
	pTwin->m_nState5cc0 = 5;

	*(float *)((char *)pTwin + 0x1560) = flTime;
	*(char *)((char *)pTwin + 0x1480) = 1;
	*(const char **)((char *)pTwin + 0x1b3c) = pszFile;

	*(int *)((char *)pTwin + 0x5cc4) = 5;
	*(int *)((char *)pTwin + 0x1b40) = 0x14df;
	*(const char **)((char *)pTwin + 0x1b30) = pszFile;
	*(int *)(0x1b34 + (char *)pTwin) = 0x14e0;

	((CUnk102ae750 *)pTwin)->sub_102ae750(0x157, 0);

	*(pTwin->m_a6348 + 0) = this->m_a6348[0];
	pTwin->m_a6348[1] = this->m_a6348[1];
	*(pTwin->m_a6348 + 2) = this->m_a6348[2];
	pTwin->m_a6348[3] = this->m_a6348[3];
	pTwin->m_a6348[4] = *(4 + this->m_a6348);
	pTwin->m_a6420[0] = this->m_a6420[0];
	pTwin->m_a6420[1] = *(this->m_a6420 + 1);
	pTwin->m_a6420[2] = this->m_a6420[2];
	*(pTwin->m_a6420 + 3) = this->m_a6420[3];
	pTwin->m_a6420[4] = this->m_a6420[4];

	m_n168 = 0x1e;
	m_n16c = 2;
	*(int *)((char *)this + 0x155c) = (int)*pTwin->vfunc1();

	this->sub_102c4310("Ming_xiao_transform_emitter", this, 1, -1, 0);
	this->sub_102c4310("Ming_xiao_transform_emitter2", (CBaseEntity *)this, 0, -1, 0);
}

/* judged with these header patches (not saved):
[
 {
  "path": "CNPC_VMingXiao.h",
  "old": "virtual void vfunc202_slot();",
  "new": "virtual void vfunc202_slot(CBaseEntity *pOwner);"
 },
 {
  "path": "CNPC_VMingXiao.h",
  "old": "virtual void vfunc221_slot();",
  "new": "virtual float *vfunc221_slot();"
 },
 {
  "path": "CNPC_VMingXiao.h",
  "old": "virtual int vfunc609(char bForce);",
  "new": "virtual int vfunc609(char bForce);\n\tvirtual void vfunc610();\n\tvirtual void vfunc611();\n\tvirtual void vfunc612();\n\tvirtual void vfunc613();\n\tvirtual void vfunc614();"
 }
]
*/
// END FUNCTION
