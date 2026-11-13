// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ac610 size=0xee
#include "CNPC_VScurrying.h"
#include "CNPC_VAnimal.h"


struct CScurryObj
{
	Vector *sub_101b99d0();	// stub 0x100019ab
};

// TARGET: CNPC_VScurrying::vfunc438
int CNPC_VScurrying::vfunc438()
{
	m_n1b2c = 0x20;
	if (gpGlobals->curtime < m_flTime668c) {
		m_nLine1b34 = 0xbe;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
		return 0x162;
	}
	if (sub_10269aa0(0x78)) {
		m_nLine1b34 = 0xc3;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
		return 0x162;
	}
	if (sub_10269aa0(0x70)) {
		m_vec6680 = *((CScurryObj *)m_Obj618c)->sub_101b99d0();
		m_flTime668c = m_flDelay669c + gpGlobals->curtime;
		m_nLine1b34 = 0xca;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
		return 0x162;
	}
	int iSched = ((CNPC_VAnimal *)this)->vfunc438();
	if (iSched == 0x6b) {
		m_nLine1b34 = 0xd1;
		iSched = 0x161;
		m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
	}
	return iSched;
}
// END FUNCTION

// FUNCTION: 0x103ac740 size=0x27b
#include "CNPC_VScurrying.h"
#include "CNPC_VAnimal.h"
#include "CAI_BaseNPC.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "globalvars.h"
#include "CAI_Navigator.h"
#include "Vector.h"

// TARGET: CNPC_VScurrying::vfunc442

extern const float g_104c4910;
extern CBaseEntity *g_1093c488;
extern const Vector g_10934060;

struct AINavGoal4
{
	AINavGoal4(int type, const Vector &dest, int activity = -1, float tolerance = g_104c4910, unsigned flags = 0, CBaseEntity *pTarget = g_1093c488);
	int type;		// 0x00
	Vector dest;	// 0x04
	int destNode;		// 0x10
	int activity;		// 0x14
	int arrivalActivity;		// 0x18
	int arrivalSequence;		// 0x1c
	float tolerance;		// 0x20
	unsigned flags;		// 0x24
	CBaseEntity *pTarget;		// 0x28
	Vector m_vec2c;		// 0x2c
	int m_i38;		// 0x38
	int m_i3c;		// 0x3c
};

inline AINavGoal4::AINavGoal4(int type, const Vector &dest, int activity, float tolerance, unsigned flags, CBaseEntity *pTarget)
 :	type(type),
	dest(dest),
	destNode(-1),
	activity(activity),
	tolerance(tolerance),
	flags(flags),
	pTarget(pTarget),
	arrivalActivity(-1),
	arrivalSequence(-1),
	m_vec2c(g_10934060),
	m_i38(0),
	m_i3c(0)
{
}

struct CNavGoalView : CAI_Navigator { bool SetGoal(const AINavGoal4 &goal, unsigned flags = 0) { return sub_102ecd20((void *)&goal, flags); } };

void CNPC_VScurrying::vfunc442(int *pTask)
{
	switch ( *pTask )
	{
	case 0xbc:
		((CEntityVSlots *)this)->slot310(3);
		return;
	case 0x14b:
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	case 0x14a:
		break;
	default:
		((CNPC_VAnimal *)this)->sub_1035f650(pTask);
		return;
	}

	if ( !EHandle_Get(m_hEnt667c) && gpGlobals->curtime > m_flTime668c )
	{
		*(const char **)((char *)this + 0x1b44) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
		*(int *)((char *)this + 0x1b48) = 0xe9;
		((CEntityVSlots *)this)->slot448(6);
		return;
	}

	float flDist = m_flFrightDistance;
	Vector vec = m_vec6680;
	if ( EHandle_Get(m_hEnt667c) )
	{
		flDist = m_flRange6690 * 2.0f;
		vec = *((CEntityVSlots *)EHandle_Get(m_hEnt667c))->slot217();
	}

	Vector vecOut;
	if ( !sub_103acba0(&vec, flDist, &vecOut) )
	{
		*(const char **)((char *)this + 0x1b44) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
		*(int *)((char *)this + 0x1b48) = 0xfa;
		((CEntityVSlots *)this)->slot448(7);
		return;
	}

	if ( ((CNavGoalView *)*(void **)((char *)this + 0x5d34))->SetGoal(AINavGoal4(4, vecOut, 0x13), 0) )
	{
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	}

	*(const char **)((char *)this + 0x1b44) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VScurrying.cpp";
	*(int *)((char *)this + 0x1b48) = 0x107;
	((CEntityVSlots *)this)->slot448(0xc);
}
// END FUNCTION
