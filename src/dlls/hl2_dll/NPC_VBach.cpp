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
