// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103bca20 size=0x97
#include "CNPC_VTzimisce.h"

struct CScheduleStamp	// the source file / line the schedule selection records
{
	char m_pad0000[0x1b30];
	const char *m_pszFile;	// 0x1b30
	int m_nLine;	// 0x1b34
};

int CNPC_VTzimisce::sub_103bca20(int unused)
{
	CScheduleStamp *pStamp = (CScheduleStamp *)this;
	if (sub_10269d30(0xc)) {
		pStamp->m_nLine = 0xb66;
		pStamp->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
		return 0x173;
	}
	if (sub_10269d30(10) || sub_10269d30(0xd)) {
		pStamp->m_nLine = 0xb6a;
		pStamp->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
		return 0x174;
	}
	if (sub_10269aa0(0x5d))
		return sub_103bc820();
	pStamp->m_nLine = 0xb7c;
	pStamp->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
	return 0x170;
}
// END FUNCTION

// FUNCTION: 0x103bcb60 size=0x76
#include "CNPC_VTzimisce.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CTzimisceScheduleTarget {
    int sub_100102b2(int a);
};
struct CTzimisceSlot580View {
    S100(a0) S100(a1) S100(a2) S100(a3) S100(a4)
    S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7)
    virtual CTzimisceScheduleTarget *vfunc580();
};
struct CTzimisceScheduleUnit : CNPC_VTzimisce {
    bool sub_10014df8(int condition);
    int sub_103bcb60(int unused);
};

int CTzimisceScheduleUnit::sub_103bcb60(int unused)
{
    char *p = (char *)this;
    if (sub_10014df8(0x48)) {
        *(const char **)(p + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
        *(int *)(p + 0x1b34) = 0xb93;
        return 0x171;
    }
    if (sub_10014df8(0x5d)) {
        *(const char **)(p + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
        *(int *)(p + 0x1b34) = 0xb98;
        return 0x170;
    }
    int nClass = *(int *)(*(int *)(p + 0x5c38) + 0x1c);
    CTzimisceScheduleTarget *pTarget = ((CTzimisceSlot580View *)this)->vfunc580();
    return pTarget->sub_100102b2(nClass);
}
// END FUNCTION

// FUNCTION: 0x103bcc00 size=0x88
#include "CNPC_VTzimisce.h"

extern char g_1065c7e0[];

struct CNPC_VTzimisceView
{
	char m_pad0000[0x568];
	char m_bFlag568;
	char m_pad0569[0x1b30 - 0x569];
	const char *m_pszFile;
	int m_nLine;
	char m_pad1b38[0x5d8c - 0x1b38];
	unsigned int m_nFlags5d8c;
};

// TARGET: CNPC_VTzimisce::sub_103bcc00
int CNPC_VTzimisce::sub_103bcc00(int a)
{
	CNPC_VTzimisceView *v = (CNPC_VTzimisceView *)this;
	if (!v->m_bFlag568 && (sub_10269d30(10) || sub_10269d30(13)))
	{
		v->m_pszFile = g_1065c7e0;
		v->m_nLine = 0xbd6;
		return 0x174;
	}
	if (sub_10269aa0(0x5d))
	{
		v->m_pszFile = g_1065c7e0;
		v->m_nLine = 0xbde;
		v->m_nFlags5d8c &= 0xbfffffff;
		return 0x170;
	}
	return sub_103bc820();
}
// END FUNCTION
