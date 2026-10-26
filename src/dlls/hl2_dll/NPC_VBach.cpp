// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10364080 size=0x18b
#include "CEntityVSlots.h"
#include "CNPC_VBach.h"

extern "C" int _strcmpi(const char *, const char *);
struct CGlobalVarsVB
{
	char pad[0xc];
	float curtime;
};
extern CGlobalVarsVB *g_1070b228;

int CNPC_VBach::vfunc604(int arg)
{
	if (sub_10269aa0(0x7b)) {
		*(float *)&m_n6690 = g_1070b228->curtime + 15.0f;
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
