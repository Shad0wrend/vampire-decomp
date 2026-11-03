// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
