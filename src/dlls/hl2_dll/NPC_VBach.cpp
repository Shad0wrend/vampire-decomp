// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10364080 size=0x18b
#include "CEntityVSlots.h"
#include "CNPC_VBach.h"

extern "C" int _strcmpi(const char *, const char *);

int CNPC_VBach::vfunc604(int arg)
{
	if (sub_10269aa0(0x7b)) {
		*(float *)&m_n6690 = gpGlobals->curtime + 15.0f;
		m_nSchedLine = 0x26e;
		m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
		return 0x15a;
	}
	CBaseEntity *pWeapon = sub_10007e19();
	if (pWeapon) {
		if (sub_10269aa0(0x7a)) {
			const char *pszClass = pWeapon->sub_1009f200();
			if (_strcmpi(pszClass, "item_w_katana") != 0) {
				m_nSchedLine = 0x279;
				m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
				return 0x158;
			}
		} else if (sub_10269aa0(0x79)) {
			const char *pszClass = pWeapon->sub_1009f200();
			if (_strcmpi(pszClass, "item_w_rem_m_700_bach") != 0) {
				m_nSchedLine = 0x280;
				m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
				return 0x159;
			}
			return ((CEntityVSlots *)this)->slot605(arg);
		}
	} else {
		if (sub_10269aa0(0x7a)) {
			m_nSchedLine = 0x28c;
			m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
			return 0x158;
		}
		if (sub_10269aa0(0x79)) {
			m_nSchedLine = 0x290;
			m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
			return 0x159;
		}
	}
	int iSchedule = sub_10385e40(arg);
	if (m_n5cc0 != 4 && m_n5cc0 != 0xc)
		m_n6444 = 0;
	if (iSchedule == 0) {
		m_nSchedLine = 0x29d;
		iSchedule = 0x159;
		m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
	}
	return iSchedule;
}
// END FUNCTION

// FUNCTION: 0x103642f0 size=0x19d
#include "CNPC_VBach.h"
#include "CEntityVSlots.h"
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern char g_10587668[];
extern char g_105c1c70[];
extern char g_1062eadc[];

int CNPC_VBach::vfunc605(int arg)
{
	if (sub_10269aa0(0x7b)) {
		*(float *)&m_n6690 = gpGlobals->curtime + 15.0f;
		m_pszSchedFile = g_1062eadc;
		m_nSchedLine = 0x2bc;
		return 0x15a;
	}
	CBaseEntity *pWeapon = sub_10007e19();
	if (pWeapon) {
		if (sub_10269aa0(0x7a)) {
			const char *pszClass = pWeapon->sub_1009f200();
			if (_strcmpi(pszClass, g_10587668)) {
				m_pszSchedFile = g_1062eadc;
				m_nSchedLine = 0x2c8;
				return 0x158;
			}
			return ((CEntityVSlots *)this)->slot604(arg);
		}
		if (sub_10269aa0(0x79)) {
			const char *pszClass = pWeapon->sub_1009f200();
			if (_strcmpi(pszClass, g_105c1c70)) {
				m_pszSchedFile = g_1062eadc;
				m_nSchedLine = 0x2d3;
				return 0x159;
			}
		}
	} else {
		if (sub_10269aa0(0x7a)) {
			m_pszSchedFile = g_1062eadc;
			m_nSchedLine = 0x2da;
			return 0x158;
		}
		if (sub_10269aa0(0x79)) {
			m_pszSchedFile = g_1062eadc;
			m_nSchedLine = 0x2de;
			return 0x159;
		}
	}
	int iSched = sub_10386560(arg);
	if (m_n5cc0 != 4 && m_n5cc0 != 0xc)
		m_n6444 = 0;
	if (!iSched && sub_10269aa0(0x46)) {
		m_pszSchedFile = g_1062eadc;
		m_nSchedLine = 0x2ed;
		return 0x15f;
	}
	return iSched;
}
// END FUNCTION

// FUNCTION: 0x103652b0 size=0x315
#include "vampire.h"
#include "CNPC_VBach.h"
#include "CUnknown102e0150.h"
#include "CAI_Motor.h"
#include "CPASAttenuationFilter.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);

// TARGET: CNPC_VBach::vfunc444
void CNPC_VBach::vfunc444(void *pTask)
{
	int type = *(int *)pTask;
	if (type < 0xb0 || (type > 0xb1 && type != 0x14a)) {
		sub_10384ab0(pTask);
		return;
	}
	if (type > 0xb1)
		return;
	CBaseEntity *pWeapon = sub_10007e19();
	if (!pWeapon)
		return;
	if (_strcmpi(pWeapon->sub_1009f200(), "item_w_rem_m_700_bach") != 0) {
		m_b66a4 = 1;
		sub_10384ab0(pTask);
		return;
	}
	Vector vec;
	Vector tmp;
	if (m_h5ba8.Get() && (m_n5cc0 == 4 || m_n5cc0 == 0xc)) {
		vec = *((CNPC_VBach *)m_h5ba8.Get())->vfunc217_slot();
	} else if (vfunc167()) {
		vec = *vfunc541()->sub_102dfed0(&tmp, vfunc167());
	} else {
		m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
		m_nLine1b48 = 0x428;
		vfunc448(6);
	}
	m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
	if (m_b66a0) {
		if (m_n6674) {
			m_fl6694 = (m_fl5db4 = gpGlobals->curtime + 1e9f);
		} else {
			m_fl6694 = (m_fl5db4 = gpGlobals->curtime + 0.15f) + 1e9f;
			m_b66a0 = 0;
			m_n6678 = 0;
		}
	}
	if (gpGlobals->curtime >= m_fl6694) {
		CPASAttenuationFilter filter(this);
		int edict = m_pEdict2e0;
		enginesound->vfunc3(&filter, engine->vfunc35(edict), 2, "Character/Boss/Bach/snipe_warn6.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		m_fl6694 = m_fl6694 + 999999.0f;
		sub_10365840();
	}
	if (gpGlobals->curtime >= m_fl5db4) {
		m_b66a4 = 1;
		sub_10273e80(0);
	}
}
// END FUNCTION

// FUNCTION: 0x10365780 size=0x5c
#include "CNPC_VBatSwarm.h"

int sub_1000633e(void *pNPC, int a, int b, float f, int c, int d);

bool CNPC_VBatSwarm::sub_10365780(int a, int b)
{
	m_pHint5ddc = (void *)sub_1000633e(this, a, b, 5000.0f, 0, 0);
	if (m_pHint5ddc)
	{
		sub_1000ac68(0);
		return true;
	}
	m_pszFailFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
	m_nFailLine = 0x48a;
	vfunc448(4);
	return false;
}
// END FUNCTION

// FUNCTION: 0x10365a90 size=0x53c
#include <math.h>
#include "CNPC_VBach.h"
#include "globalvars.h"
#include "engineserver.h"
#include "engineiface.h"
#include "CPASAttenuationFilter.h"

#define BVS(n) virtual void vs##n();
#define BVS10(p) BVS(p##0) BVS(p##1) BVS(p##2) BVS(p##3) BVS(p##4) BVS(p##5) BVS(p##6) BVS(p##7) BVS(p##8) BVS(p##9)
struct CBachCampVS
{
	BVS10() BVS10(1) BVS10(2) BVS10(3) BVS10(4) BVS10(5) BVS10(6) BVS10(7) BVS10(8) BVS10(9)
	BVS10(10) BVS10(11) BVS10(12) BVS10(13) BVS10(14) BVS10(15) BVS10(16) BVS10(17) BVS10(18) BVS10(19)
	BVS(200)
	virtual bool vfunc201(CBaseEntity *pEnt, int mask, int *pResult, int i);
};

struct CNPC_VBachCamp
{
	char m_pad0000[0x2e0];
	int m_pEdict2e0;	// 0x2e0
	char m_pad02e4[0x1b30 - 0x2e4];
	const char *m_pszSchedFile;	// 0x1b30
	int m_nSchedLine;	// 0x1b34
	char m_pad1b38[0x6664 - 0x1b38];
	float m_fl6664;
	float m_fl6668;
	float m_fl666c;
	float m_fl6670;
	int m_n6674;
	int m_n6678;
	int m_n667c;
	char m_pad6680[0x669c - 0x6680];
	int m_n669c;
	char m_b66a0;
	char m_b66a1;

	void sub_10365a90();
};

CBaseEntity *sub_101cda50();
struct CUnk102ae750Link { void sub_102ae750(int a, int b); };

inline int BachDead(int x) { return x + 1; }
inline int BachDead2(int x) { return BachDead(x) + 1; }
inline const Vector &EnemyPos(CNPC_VBach *p) { return *p->vfunc217_slot(); }

// TARGET: CNPC_VBachCamp::sub_10365a90
void CNPC_VBachCamp::sub_10365a90()
{
	CNPC_VBach *pEnemy = (CNPC_VBach *)((CNPC_VBach *)this)->vfunc167();
	int nMask = 0;
	bool bSound = true;
	bool bTrigger = false;
	if (!pEnemy) {
		pEnemy = (CNPC_VBach *)sub_101cda50();
		if (!pEnemy)
			return;
	}
	bool bHit = false;
	for (int i = 0; i < 10; i++) {
		if (((CBachCampVS *)this)->vfunc201(pEnemy, 0x2804091, &nMask, i)) {
			bHit = true;
			break;
		}
	}
	if (!bHit) {
		if (m_n6674 == 0) {
			m_n6674 = 1;
			m_fl6670 = gpGlobals->curtime;
			const Vector &p1 = EnemyPos(pEnemy);
			if ((float)fabs(p1.x - m_fl6664) * (float)fabs(EnemyPos(pEnemy).y - m_fl6668) < 20000.0f) {
				if (++m_n6678 >= 2) {
					if (!m_b66a0)
						bTrigger = true;
					m_b66a0 = 1;
				}
			} else {
				m_n6678 = 0;
			}
			const Vector &p = EnemyPos(pEnemy);
			m_fl6664 = p.x;
			m_fl6668 = p.y;
			m_fl666c = p.z;
		} else if (gpGlobals->curtime - m_fl6670 > 4.0f) {
			float dx = fabs(EnemyPos(pEnemy).x - m_fl6664);
			float dy = fabs(EnemyPos(pEnemy).y - m_fl6668);
			if (dy > dx)
				dx = dy;
			if (dx < 200.0f) {
				if (!m_b66a0)
					bTrigger = true;
				m_b66a0 = 1;
			}
			const Vector &p = EnemyPos(pEnemy);
			m_fl6664 = p.x;
			m_fl6668 = p.y;
			m_fl666c = p.z;
			m_fl6670 = gpGlobals->curtime;
		}
		if (m_n667c == 10 || m_n667c == 7) {
			m_b66a0 = 1;
			bTrigger = true;
			const Vector &p = EnemyPos(pEnemy);
			m_fl6664 = p.x;
			m_fl6668 = p.y;
			m_fl666c = p.z;
			m_fl6670 = gpGlobals->curtime;
		}
		if (m_b66a0 && m_n667c != 0 && m_b66a1) {
			switch (m_n667c) {
			case 5: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_5", 300.0f); break;
			case 6: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_6", 80.0f); break;
			case 7: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_7", -26.0f); break;
			case 10: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_10", -26.0f); break;
			case 9: ((CNPC_VBach *)this)->sub_10365860("grenade_spawn_9", 85.0f); break;
			}
		} else if (m_b66a0 && m_n667c != 0 && !m_b66a1 && m_n669c == 0) {
			if (m_n667c == 8)
				((CNPC_VBach *)this)->sub_10365860("grenade_spawn_8", 15.0f);
		} else {
			bSound = false;
		}
		if (bTrigger) {
			if (bSound) {
				CPASAttenuationFilter filter((CNPC_VBach *)this);
				int edict = m_pEdict2e0;
				enginesound->vfunc3(&filter, engine->vfunc35(edict), 2, "Character/Boss/Bach/bach_grenade.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
			} else {
				CPASAttenuationFilter filter((CNPC_VBach *)this);
				int edict = m_pEdict2e0;
				enginesound->vfunc3(&filter, engine->vfunc35(edict), 2, "Character/Boss/Bach/bach_camp_warn.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
				(void)BachDead2(0); (void)BachDead2(1);
			}
		}
	} else {
		if (m_n6674) {
			m_n6674 = 0;
			if (m_b66a0) {
				m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VBach.cpp";
				m_nSchedLine = 0x57b;
				((CUnk102ae750Link *)this)->sub_102ae750(0x15f, 0);
			}
		}
	}
}
// END FUNCTION
