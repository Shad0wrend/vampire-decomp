// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103ba780 size=0x26
bool __stdcall sub_103ba780(char *pObj)
{
	if (pObj != 0)
	{
		int nState = *(int *)(pObj + 0x5dc);
		if (nState >= 0x36b0 && nState <= 0x36b1)
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x103bc4e0 size=0x290
#include "CBaseEntity.h"
#include "CNPC_VTzimisce.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "VectorHelpers.h"
#include "CUnknown102e0150.h"
#include <math.h>

int CNPC_VTzimisce::sub_103bc4e0()
{
	float fDistTargetSq;
	CEntityVSlots *pThis = (CEntityVSlots *)this;
	CBaseEntity *pEnemy = (CBaseEntity *)pThis->slot167();
	char bVisible = pEnemy ? pThis->slot530( (CEntityVSlots *)pEnemy ) : 1;
	bool bSeeEnemy = sub_10269aa0( 9 );

	if ( !bVisible )
	{
		if ( !bSeeEnemy )
			goto fail;
		if ( m_n66b8 )
			goto fail;
		if ( !m_bJustFoundBody )
		{
			if ( enginerandom->vfunc2( 0, 99 ) >= 0x55 )
				goto fail;
		}
		else
		{
			if ( enginerandom->vfunc2( 0, 99 ) >= 0x37 )
				goto fail;
		}
	}

	if ( !sub_103be180() )
		goto fail;

	{
		CEntityVSlots *pTarget = (CEntityVSlots *)EHandle_Get( m_hTarget );
		Vector vecTarget = *pTarget->slot220() - *pThis->slot220();
		fDistTargetSq = vecTarget.LengthSqr();

		if ( !bVisible && pEnemy )
		{
			Vector vecLast;
			pThis->slot541()->sub_102dfed0( &vecLast, pEnemy );
			Vector vecEnemy = vecLast - *pThis->slot220();
			float fDistEnemySq = vecEnemy.LengthSqr();

			if ( fDistTargetSq < fDistEnemySq )
			{
				float yawEnemy = sub_101d2c70( &vecEnemy );
				float yawTarget = sub_101d2c70( &vecTarget );
				if ( fabs( sub_1013d580( yawTarget, yawEnemy ) ) > 120.0 )
				{
					if ( fDistEnemySq * 0.2f > fDistTargetSq )
						goto reject;
				}
				goto accept;
			}

reject:
			m_hTarget = 0xffffffff;
			sub_102c43b0( 0 );
			return 0;
		}
	}

accept:
	sub_103be050( 1 );
	m_bJustFoundBody = true;
	*(const char **)( (char *)this + 0x1b30 ) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
	if ( fDistTargetSq >= 90000.0f )
	{
		*(int *)( (char *)this + 0x1b34 ) = 0xb16;
		return 0x18f;
	}
	*(int *)( (char *)this + 0x1b34 ) = 0xb1a;
	return 0x190;

fail:
	m_n66b8 = 2;
	m_bJustFoundBody = false;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x103bc820 size=0x18b
#include "CNPC_VTzimisce.h"
#include "CUnknown1070b244.h"

struct TzimisceView103bc820 {
	char pad0[0x1b30];
	const char *m_pszFile;
	int m_nLine;
	char pad1[0x66b8 - 0x1b38];
	int m_n66b8;
};
extern CUnknown1070b244 *g_1070b244;

int CNPC_VTzimisce::sub_103bc820()
{
	TzimisceView103bc820 *v = (TzimisceView103bc820 *)this;
	v->m_n66b8 = 0;
	if (sub_10269aa0(0x51)) {
		v->m_nLine = 0xb2c;
		v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
		return 0x177;
	}
	if (sub_10269d30(0x1a)) {
		v->m_nLine = 0xb32;
		v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
		return 0x178;
	}
	if (vfunc167()) {
		const float *pEnemyPos = (const float *)vfunc167()->vfunc220();
		const float *pPos = (const float *)((CNPC_VTzimisceHelper *)this)->vfunc220();
		float dx = pPos[0] - pEnemyPos[0];
		float dy = pPos[1] - pEnemyPos[1];
		float dz = pPos[2] - pEnemyPos[2];
		float flDistSqr = dx * dx + dy * dy + dz * dz;
		if (flDistSqr > 160000.0f) {
			int r = g_1070b244->vfunc2(0, 99);
			v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
			if (r < 0x46) {
				v->m_nLine = 0xb40;
				return 0x178;
			}
			v->m_nLine = 0xb44;
			return 0x179;
		}
		if (flDistSqr > 40000.0f) {
			int r = g_1070b244->vfunc2(0, 99);
			v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
			if (r < 0x28) {
				v->m_nLine = 0xb4e;
				return 0x178;
			}
			v->m_nLine = 0xb52;
			return 0x179;
		}
		v->m_nLine = 0xb58;
		v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
		return 0x179;
	}
	v->m_nLine = 0xb5c;
	v->m_pszFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
	return 0x178;
}
// END FUNCTION

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

// FUNCTION: 0x103bcaf0 size=0x4c
#include "CNPC_VTzimisce.h"
#include "CNPC_VBach.h"

struct CTzimisceTask { char pad[0x1c]; int m_nNode; };
struct CRangeNode_102ea280 { int sub_102ea280(int a); };
extern const char g_1065c7e0[];

int CNPC_VTzimisce::sub_103bcaf0(int a)
{
	if (sub_10269aa0(0x5d)) {
		*(const char **)((char *)this + 0x1b30) = g_1065c7e0;
		*(int *)((char *)this + 0x1b34) = 0xb85;
		return 0x170;
	}
	int node = m_pTask5c38->m_nNode;
	CRangeNode_102ea280 *pRange = (CRangeNode_102ea280 *)((CNPC_VBach *)this)->vfunc580();
	return pRange->sub_102ea280(node);
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

// FUNCTION: 0x103bd270 size=0xd2
#include "CNPC_VTzimisce.h"
#include "CCineNPC.h"
#include "CEHandleGet.h"
#include "CEntityVSlots.h"

struct CNPCStateView {
	char m_pad0000[0x5cc0];
	int m_nState;	// 0x5cc0
	int m_nIdealState;	// 0x5cc4
	char m_pad5cc8[0x5d74 - 0x5cc8];
	unsigned int m_h5d74;	// 0x5d74
};

int CNPC_VTzimisce::vfunc482(char bDisregardState, int interruptLevel)
{
	CNPCStateView *pView = (CNPCStateView *)this;
	int result = 1;
	if (EHandle_Get(pView->m_h5d74)) {
		CCineNPC *pCine = (CCineNPC *)EHandle_Get(pView->m_h5d74);
		if (!pCine->sub_101a8ac0())
			return 0;
		result = 2;
	}
	if (!((CEntityVSlots *)this)->slot158())
		return 0;
	if (!bDisregardState && pView->m_nState != 0 && pView->m_nState != 1 && pView->m_nIdealState != 1 && (pView->m_nState != 3 || interruptLevel < 1))
		return (pView->m_nState == 4) ? result : 0;
	return result;
}
// END FUNCTION

// FUNCTION: 0x103bd390 size=0x253
#include "CNPC_VTzimisce.h"

#define SET_SOURCE(line) \
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp"; \
	*(int *)((char *)this + 0x1b34) = (line)

int CNPC_VTzimisce::vfunc440(int a)
{
	switch (a) {
	case 1:
		SET_SOURCE(0xd00);
		return 0x157;
	case 6:
		SET_SOURCE(0xd01);
		return 0x158;
	case 0x15:
		SET_SOURCE(0xd02);
		return 0x16c;
	case 0xf:
		SET_SOURCE(0xd03);
		return 0x166;
	case 0x10:
		SET_SOURCE(0xd04);
		return 0x16a;
	case 0x28:
		SET_SOURCE(0xd06);
		return 0x16e;
	case 0x25:
		SET_SOURCE(0xd07);
		return 0x16d;
	case 0x21:
		SET_SOURCE(0xd08);
		return 0x184;
	case 0x22:
		SET_SOURCE(0xd09);
		return 0x185;
	case 0x2f:
		SET_SOURCE(0xd0a);
		return 0x188;
	case 0x30:
		SET_SOURCE(0xd0b);
		return 0x189;
	case 0x31:
		SET_SOURCE(0xd0c);
		return 0x18a;
	case 0x32:
		SET_SOURCE(0xd0d);
		return 0x18b;
	case 0x33:
		SET_SOURCE(0xd0e);
		return 0x18c;
	case 5:
		SET_SOURCE(0xd0f);
		return 0x19b;
	}
	return sub_102b12f0(a);
}
// END FUNCTION
