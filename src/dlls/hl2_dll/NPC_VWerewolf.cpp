// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103cee70 size=0x5f3
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct CWerewolfDevCvar_103cee70
{
	virtual void v0();
	virtual bool v1();
	char m_pad04[0x28];
	int m_n2c;
};
extern CWerewolfDevCvar_103cee70 *g_1093f9a4;

#define FILE_ "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VWerewolf.cpp"
#define RET(line, val) { m_pszFile1b30 = FILE_; m_nLine1b34 = line; return val; }

// TARGET: CNPC_VWerewolf::vfunc438
int CNPC_VWerewolf::vfunc438()
{
	ScopeTrace trace("CNPC_VWerewolf::SelectSchedule", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	m_n1b2c = 0x29;
	vfunc461_slot();
	if (!g_1093f9a4->v1() && g_1093f9a4->m_n2c)
	{
		sub_103d4690();
		RET(0x8d8, 0x157);
	}
	if (!vfunc163())
		RET(0x8dd, 0x158);
	switch (m_nState5cc0)
	{
	case 7:
		if (!vfunc158())
			RET(0x8e8, 0x162);
		if (sub_10269aa0(0x7a))
			RET(0x8ed, 0x161);
		break;
	case 0:
	case 1:
		{
			CBaseEntity *pTarget = vfunc167();
			m_pszFile1b30 = FILE_;
			if (!pTarget) { m_nLine1b34 = 0x8f8; return 0x156; }
			m_nLine1b34 = 0x8fc;
			return 0x157;
		}
	case 2:
	case 3:
	case 8:
	case 10:
	case 14:
		if (!vfunc167())
			RET(0x909, 0x156);
		if (vfunc167() && !((CEntityVSlots *)vfunc167())->slot158())
			RET(0x915, 0x157);
		if (sub_10269aa0(0x77)) { sub_103d4a60(); RET(0x91d, 0x158); }
		if (sub_10269aa0(0x7b) && (m_nFlags66e8 & 0x100) != 0x100)
			RET(0x928, 0x15e);
		if (sub_10269aa0(0x5f))
			RET(0x92f, 0xd3);
		if (m_b66a9) { m_b66a9 = 0; RET(0x935, 0x15d); }
		if (sub_10269aa0(0x78) && !sub_10269aa0(0x51) && !sub_10269aa0(0x52) && sub_10269aa0(0x59))
		{
			m_pszFile1b30 = FILE_; m_nLine1b34 = 0x93f;
			return sub_103ce9b0(m_pHint66bc);
		}
		if (sub_10269aa0(0x59))
			RET(0x947, 0x157);
		break;
	case 11:
		if (sub_10269aa0(0x7a))
			RET(0x95b, 0x161);
		if (sub_10269aa0(0x77)) { sub_103d4a60(); RET(0x961, 0x158); }
		if (sub_10269aa0(0x7b) && (m_nFlags66e8 & 0x100) != 0x100)
			RET(0x96b, 0x15e);
		if (sub_10269aa0(0x78))
		{
			if (!sub_10269aa0(0x51) && !sub_10269aa0(0x52) && sub_10269aa0(0x59))
			{
				m_pszFile1b30 = FILE_; m_nLine1b34 = 0x977;
				return sub_103ce9b0(m_pHint66bc);
			}
		}
		else
		{
			bool b = sub_103d14f0();
			m_pszFile1b30 = FILE_;
			if (b) { m_nLine1b34 = 0x97d; return sub_103ce9b0(m_pHint66bc); }
			m_nLine1b34 = 0x981;
			return 0x157;
		}
		break;
	case 9:
		if (sub_10269aa0(0x77)) { sub_103d4a60(); RET(0x98c, 0x158); }
		{
			bool b = sub_103cf770();
			m_pszFile1b30 = FILE_;
			if (b) { m_nLine1b34 = 0x991; return sub_103ce9b0(m_pHint66bc); }
			m_nLine1b34 = 0x995;
			return 0x157;
		}
	}
	return sub_102af660();
}
// END FUNCTION

// FUNCTION: 0x103d5e00 size=0x102
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VWerewolf.h"
#include "ScopeTrace.h"

struct CWerewolfSchedFields
{
	char m_pad[0x1b30];
	const char *m_pszFile;
	int m_nLine;
};

int CNPC_VWerewolf::vfunc440(int schedule)
{
	ScopeTrace t("CNPC_VWerewolf::TranslateSchedule", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CWerewolfSchedFields *f = (CWerewolfSchedFields *)this;
	switch (schedule) {
	case 0x43:
		f->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VWerewolf.cpp";
		f->m_nLine = 0x1134;
		return 0x15c;
	case 0xb7:
		f->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VWerewolf.cpp";
		f->m_nLine = 0x112f;
		return 0x157;
	case 0xf0:
		f->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VWerewolf.cpp";
		f->m_nLine = 0x112a;
		return 0xb1;
	default:
		return sub_102b12f0(schedule);
	}
}
// END FUNCTION
