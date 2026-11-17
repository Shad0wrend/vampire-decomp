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

// FUNCTION: 0x103ba7c0 size=0x808
#include "CNPC_VTzimisce.h"
#include "CBaseEntity.h"
#include "CAI_Motor.h"
#include "CUnknown102e0a60.h"
#include "CUnknown102e0150.h"
#include "CUnknown102ee120.h"
#include "CEHandleGet.h"
#include "globalvars.h"

// TARGET: CNPC_VTzimisce::vfunc442
void CNPC_VTzimisce::vfunc442(CTzimisceTaskArg *pTask)
{
	Vector vec;
	switch (pTask->m_nId) {
	case 0xa7:
		vfunc541()->sub_102dfed0(&vec, (CBaseEntity *)vfunc167());
		sub_102e0b40((float *)m_pMotor5d44);
		m_pMotor5d44->sub_102e2020(&vec.x, 0);
		w081();
		break;
	case 0xf:
		m_state = 1;
		sub_102a1910(pTask);
		break;
	case 0x89:
		m_f5d9c = gpGlobals->curtime;
		sub_10289ee0(0x4b);
		break;
	case 0x8a:
		m_f5d9c = gpGlobals->curtime;
		sub_10289ee0(0x4b);
		break;
	case 0x8b:
		sub_10289ee0(0x50);
		break;
	case 0x8e:
		sub_10289ee0(0x52);
		break;
	case 0xbf:
		sub_102e0b40((float *)m_pMotor5d44);
		sub_103bf440();
		sub_10289ee0(0xf2);
		break;
	case 0xc0:
		sub_102e0b40((float *)m_pMotor5d44);
		sub_103bf440();
		sub_10289ee0(0xf4);
		break;
	case 0xc1:
		if (m_b6688)
			sub_10289ee0(0xf6);
		else
			sub_10289ee0(0xf8);
		break;
	case 0xc2:
		sub_103bf170();
		sub_10273e80(0);
		break;
	case 0xc3:
		m_state = 2;
		if (EHandle_Get(m_hTarget) != 0) {
			m_vec5dd0 = *(Vector *)m_posBuf;
			sub_102c3b50(EHandle_Get(m_hTarget), *(Vector *)m_posBuf, &m_vec5dd0, &m_n6320);
			m_p5d34->sub_102ee1c0(m_n6320);
			m_p5d34->sub_102f2fe0(m_n6320);
			sub_10273e80(0);
		} else {
			m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
			m_n1b48 = 0x722;
			vfunc448(1);
		}
		break;
	case 200:
		if (EHandle_Get(m_hTarget) != 0) {
			sub_102e0b40((float *)m_pMotor5d44);
			CNPC_VTzimisceHelper *pTarget = (CNPC_VTzimisceHelper *)EHandle_Get(m_hTarget);
			CAI_Motor *pMotor = m_pMotor5d44;
			pMotor->sub_102e2020((const float *)pTarget->vfunc220(), 0);
			w081();
		}
		if (sub_10278c80())
			sub_10273e80(0);
		break;
	case 0xc9:
	{
		CBaseEntity *pEnemy = (CBaseEntity *)vfunc167();
		vfunc541()->sub_102dfed0(&vec, pEnemy);
		if (sub_10269aa0(0x1b) && sub_103be8e0(pEnemy)) {
			sub_10273e80(0);
		} else {
			sub_102e0b40((float *)m_pMotor5d44);
			m_pMotor5d44->sub_102e2020(&vec.x, 0);
			w081();
			m_flTaskFailTimer = gpGlobals->curtime + 1.0f;
		}
		break;
	}
	case 0xca:
	{
		CBaseEntity *pEnemy = vfunc168();
		vfunc541()->sub_102dfed0(&vec, pEnemy);
		if (!sub_103be8e0(pEnemy)) {
			sub_102e0b40((float *)m_pMotor5d44);
			m_pMotor5d44->sub_102e2020(&vec.x, 0);
			w081();
		} else {
			sub_10273e80(0);
		}
		break;
	}
	case 0xcb:
		sub_10280a50();
		sub_102e0b40((float *)m_pMotor5d44);
		vfunc541()->sub_102dfed0(&vec, (CBaseEntity *)vfunc167());
		m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
		m_f5d9c = gpGlobals->curtime;
		sub_10289ee0(0x102);
		if (vfunc251())
			sub_10273e80(0);
		break;
	case 0xcc:
		if (vfunc167() == 0) {
			m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
			m_n1b48 = 0x78c;
			vfunc448(6);
			break;
		}
		sub_10280a50();
		vfunc541()->sub_102dfed0(&vec, (CBaseEntity *)vfunc167());
		if (sub_103bf660(vec)) {
			sub_102e0b40((float *)m_pMotor5d44);
			m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
			m_f5d9c = gpGlobals->curtime;
			sub_10289ee0(0x103);
			if (vfunc251()) {
				int act = vfunc375(0x103);
				act = vfunc381(act);
				if (m_nActivityfec == vfunc376(act))
					sub_10273e80(0);
			}
		} else {
			m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
			m_n1b48 = 0x7ab;
			vfunc448(0x1a);
		}
		break;
	case 0xcd:
		if (vfunc167() == 0) {
			m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
			m_n1b48 = 0x7b5;
			vfunc448(6);
			break;
		}
		sub_10280a50();
		vfunc541()->sub_102dfed0(&vec, (CBaseEntity *)vfunc167());
		sub_102e0b40((float *)m_pMotor5d44);
		m_pMotor5d44->sub_102e20b0(&vec.x, -2.0f);
		sub_10289ee0(0x104);
		if (vfunc251()) {
			int act = vfunc375(0x104);
			act = vfunc381(act);
			if (m_nActivityfec == vfunc376(act))
				sub_10273e80(0);
		}
		break;
	case 0xce:
		sub_10280a50();
		sub_10289ee0(0x105);
		if (vfunc251()) {
			int act = vfunc375(0x105);
			act = vfunc381(act);
			if (m_nActivityfec == vfunc376(act))
				sub_10273e80(0);
		}
		break;
	case 0xd1:
	{
		float f = vfunc418(pTask->m_flArg) + 150.0f;
		m_f6324 = f * f;
		sub_10273e80(0);
		break;
	}
	case 0xd2:
		sub_10272650((int)pTask->m_flArg);
		break;
	case 3:
		sub_10273e80(0);
		break;
	default:
		sub_102a1910(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103bb1e0 size=0x4ae
#include "CAI_Motor.h"
#include "CBaseEntity.h"
#include "CNPC_VTzimisce.h"
#include "CUnknown102e0a60.h"
#include "Vector.h"
struct CTzTaskView1 { void sub_10273e80(int a); };
#define S10(n) virtual void n##0(); virtual void n##1(); virtual void n##2(); virtual void n##3(); virtual void n##4(); virtual void n##5(); virtual void n##6(); virtual void n##7(); virtual void n##8(); virtual void n##9();
#define S100(n) S10(n##0) S10(n##1) S10(n##2) S10(n##3) S10(n##4) S10(n##5) S10(n##6) S10(n##7) S10(n##8) S10(n##9)
struct CTzSlot572
{
	S100(a) S100(b) S100(c) S100(d) S100(e) S10(f0) S10(f1) S10(f2) S10(f3) S10(f4) S10(f5) S10(f6)
	virtual void g0(); virtual void g1();
	virtual void vfunc572();
};
struct CTzV : CNPC_VTzimisce
{
	void sub_103bb1e0(CTzimisceTaskArg *pTask);
	void sub_103bf560();
	void sub_102aacf0(CTzimisceTaskArg *pTask);
};
#define TzFace(p) if (!((p)->m_flags5d8c & 0x2000)) ((CTzSlot572 *)(p))->vfunc572();
// TARGET: CTzV::sub_103bb1e0
void CTzV::sub_103bb1e0(CTzimisceTaskArg *pTask)
{
	int n;
	int m;
	Vector vec;
	CBaseEntity *pEnemy;
	switch (pTask->m_nId) {
	case 0xa7:
		vfunc541()->sub_102dfed0(&vec, (CBaseEntity *)vfunc167());
		((CAI_Motor *)m_pMotor5d44)->sub_102e20b0(&vec.x, -1.0f);
		TzFace(this);
		break;
	case 0x89:
	case 0x8a:
		sub_10280a50();
		vfunc541()->sub_102dfed0(&vec, (CBaseEntity *)vfunc167());
		((CAI_Motor *)m_pMotor5d44)->sub_102e20b0(&vec.x, -2.0f);
		if (vfunc251() || gpGlobals->curtime - m_f5d9c > pTask->m_flArg)
			sub_10273e80(0);
		break;
	case 0x8b:
	case 0x8e:
		sub_10280a50();
		if (vfunc251()) {
			((CTzTaskView1 *)this)->sub_10273e80(0);
			return;
		}
		break;
	case 0xbf:
	case 0xc0:
		sub_103bf560();
		if (vfunc251()) {
			((CUnknown102e0a60 *)m_pMotor5d44)->sub_102e0a60(0x43340000);
			sub_10273e80(0);
		}
		break;
	case 0xc1:
		if (vfunc251())
			((CTzTaskView1 *)this)->sub_10273e80(0);
		break;
	case 200:
		TzFace(this);
		((CAI_Motor *)m_pMotor5d44)->sub_102e1e20(-1);
		if (sub_10278c80())
			sub_10273e80(0);
		break;
	case 0xc9:
		pEnemy = (CBaseEntity *)vfunc167();
		vfunc541()->sub_102dfed0(&vec, pEnemy);
		TzFace(this);
		((CAI_Motor *)m_pMotor5d44)->sub_102e20b0(&vec.x, -1.0f);
		if (sub_103be8e0(pEnemy)) {
			if (sub_10269aa0(0x1b) || gpGlobals->curtime >= m_flTaskFailTimer)
				sub_10273e80(0);
		}
		break;
	case 0xca:
		pEnemy = vfunc168();
		vfunc541()->sub_102dfed0(&vec, pEnemy);
		TzFace(this);
		((CAI_Motor *)m_pMotor5d44)->sub_102e20b0(&vec.x, -1.0f);
		if (sub_103be8e0(pEnemy))
			sub_10273e80(0);
		break;
	case 0xcb:
		sub_10280a50();
		if (vfunc251())
			((CTzTaskView1 *)this)->sub_10273e80(0);
		break;
	case 0xcc:
		sub_10280a50();
		vfunc541()->sub_102dfed0(&vec, (CBaseEntity *)vfunc167());
		((CAI_Motor *)m_pMotor5d44)->sub_102e20b0(&vec.x, -2.0f);
		if (vfunc251()) {
			n = vfunc375(0x103);
			n = vfunc381(n);
			m = vfunc376(n);
			if (m_nActivityfec == m)
				sub_10273e80(0);
		}
		break;
	case 0xcd:
		sub_10280a50();
		if (vfunc251()) {
			n = vfunc375(0x104);
			n = vfunc381(n);
			m = vfunc376(n);
			if (m_nActivityfec == m)
				sub_10273e80(0);
		}
		break;
	case 0xce:
		sub_10280a50();
		if (vfunc251()) {
			n = vfunc375(0x105);
			n = vfunc381(n);
			m = vfunc376(n);
			if (m_nActivityfec == m)
				sub_10273e80(0);
		}
		break;
	case 0xd2:
		if (!sub_103bfc20(m_p5ddc, vfunc168())) {
			m_psz1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp";
			m_n1b48 = 0x911;
			vfunc448(0x1a);
		}
		sub_10280a50();
		n = vfunc375((int)pTask->m_flArg);
		n = vfunc381(n);
		m = vfunc376(n);
		if (vfunc251() && m_nActivityfec == m) {
			sub_10273e80(0);
			return;
		}
		sub_10272650((int)pTask->m_flArg);
		return;
	default:
		sub_102aacf0(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103bb7c0 size=0xa7c
#include "CBaseEntity.h"
#include "CNPC_VTzimisce.h"
#include "Vector.h"
extern CNPC_VTzimisceConVar *g_1093cce4;

#define SRET(v, line) { m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp"; m_nLine1b34 = line; return v; }

inline bool IsSched(CNPC_VTzimisce *p, int id)
{
	return p->m_pTask5c38 && (int)p->m_pTask5c38 == p->sub_102cc1f0(id);
}

int CNPC_VTzimisce::vfunc438()
{
	m_n1b2c = 0x26;
	if ((m_flags14b8 & 2) == 2) {
		m_flags14b8 &= ~2;
		SRET(0x187, 0x939)
	}
	int r = enginerandom->vfunc2(0, 99);
	if (r < 50)
		vfunc627();
	switch (m_nState5cc0) {
	case 11: {
		if (sub_103be130())
			SRET(0x198, 0xa60)
		if (sub_10269aa0(1))
			SRET(0x15d, 0xa66)
		if (sub_10269aa0(0x6a) || sub_10269aa0(0x6d) || sub_10269aa0(0x6e) || sub_10269aa0(0x70) || sub_10269aa0(0x6f)) {
			m_f623c = gpGlobals->curtime + 2.0f;
			sub_102b4090();
			SRET(0x15c, 0xa72)
		}
		int r2 = enginerandom->vfunc2(0, 99);
		if (r2 < 20)
			SRET(0x15f, 0xa81)
		if (r2 < 40)
			SRET(0x160, 0xa85)
		if (r2 < 45)
			SRET(0x161, 0xa89)
		if (~m_flags14b8 & 0x1000) {
			CBaseEntity *pEnemy = vfunc168();
			if (!pEnemy)
				SRET(0x15a, 0xa92)
			switch (sub_103bfa50(pEnemy)) {
			case 0x36b0:
				SRET(0x17c, 0xa9a)
			case 0x36b1:
				SRET(0x17e, 0xa9b)
			case 0x36ba:
				SRET(0x17f, 0xa9c)
			case 0x36bb:
				SRET(0x180, 0xa9d)
			default:
				if (!vfunc167())
					SRET(0x15a, 0xaa0)
				SRET(0x159, 0xaa1)
			}
		}
		SRET(0x15b, 0xaa7)
	}
	case 3: {
		int n = sub_102b8a60();
		if (n)
			return n;
		n = sub_102b9060();
		if (n)
			return n;
	}
	default:
		return sub_102af660();
	case 2: {
		m_b5b80 = 0;
		if (sub_10269aa0(0x58) && sub_103be130())
			SRET(0x198, 0x962)
		if (sub_10269aa0(0x77) && sub_103be130())
			SRET(0x198, 0x96a)
		if (sub_10269aa0(0x78) && sub_103be130())
			SRET(0x195, 0x972)
		if (!m_b6689 && sub_10269aa0(0x54))
			SRET(5, 0x980)
		int nSomething;
		if (sub_1032e7b0(this))
			nSomething = sub_1032e7b0(this)->vfunc360();
		else
			nSomething = 0;
		if (sub_103be090()) {
			sub_103be050(0);
			if (sub_10269d30(0x51)) {
				m_hTarget = -1;
				sub_102c43b0(0);
				return sub_103bc820();
			}
			if (sub_10269d30(0x5f) || sub_10269d30(8)) {
				m_hTarget = -1;
				sub_102c43b0(0);
				return sub_103bc820();
			}
			int n = sub_103bc4e0();
			if (n)
				return n;
			m_hTarget = -1;
			sub_102c43b0(0);
			SRET(0x170, 0x9af)
		}
		if (sub_103be130()) {
			if (sub_103be150()) {
				if (!vfunc530((CBaseEntity *)vfunc167()))
					SRET(0x193, 0x9c3)
			}
			if ((sub_10269aa0(0x48) || !sub_10269aa0(0x46)) && !sub_10269aa0(0x1b))
				SRET(0x169, 0x9cb)
			if (sub_10269aa0(0x5f) || sub_10269aa0(8))
				SRET(0x198, 0x9d0)
			if (sub_10269aa0(0x1b)) {
				if (!m_b66b4 && enginerandom->vfunc2(0, 99) < 5) {
					m_b66b4 = 1;
					if (!sub_103be8e0((CBaseEntity *)vfunc167()))
						SRET(0x194, 0x9dc)
					SRET(0x196, 0x9df)
				}
				if (!sub_103be8e0((CBaseEntity *)vfunc167()))
					SRET(0x192, 0x9e5)
				SRET(0x195, 0x9e8)
			}
			SRET(0x169, 0x9ec)
		}
		m_flags14b8 &= ~8;
		int n = sub_103bc4e0();
		if (n)
			return n;
		if (vfunc530((CBaseEntity *)vfunc167())) {
			switch (sub_103bfa50((CBaseEntity *)vfunc167())) {
			case 0x36b0:
				SRET(0x17c, 0xa03)
			case 0x36b1:
				SRET(0x17e, 0xa04)
			case 0x36ba:
				SRET(0x17f, 0xa05)
			case 0x36bb:
				SRET(0x180, 0xa06)
			default:
				SRET(0x16a, 0xa07)
			}
		}
		if (sub_10269aa0(0x48))
			SRET(0x167, 0xa0e)
		if (!vfunc530((CBaseEntity *)vfunc167())) {
			Vector vecPos;
			vfunc541()->sub_102dfed0(&vecPos, (CBaseEntity *)vfunc167());
			if (!g_1093cce4->vfunc1() && g_1093cce4->m_n2c && sub_103bf660(vecPos)) {
				m_n66b8 = 0;
				SRET(0x186, 0xa1a)
			}
			if (sub_10269aa0(9)) {
				if (sub_10269aa0(0x46))
					SRET(0x168, 0xa22)
				SRET(0x167, 0xa27)
			}
		}
		if (IsSched(this, 0x170))
			return sub_103bca20(nSomething);
		if (IsSched(this, 0x171))
			return sub_103bcaf0(nSomething);
		if (IsSched(this, 0x172) || IsSched(this, 0x174) || IsSched(this, 0x173))
			return sub_103bcb60(nSomething);
		if (IsSched(this, 0x178) || IsSched(this, 0x179) || IsSched(this, 0x17a))
			return sub_103bcc00(nSomething);
		SRET(0x170, 0xa53)
	}
	}
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

// FUNCTION: 0x103bccc0 size=0x125
#include "CNPC_VTzimisce.h"

struct CNPC_VTzimisceUnit : CNPC_VTzimisce
{
	int sub_103bccc0();
};

#define m_fl65a4 (*(float *)((char *)this + 0x65a4))
#define SOURCE_FILE "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp"

static inline bool TzTimeAfter(const float &t) { return gpGlobals->curtime > t; }

// TARGET: CNPC_VTzimisceUnit::sub_103bccc0
int CNPC_VTzimisceUnit::sub_103bccc0()
{
	if (sub_10269aa0(0x47))
	{
		m_pszFile1b30 = SOURCE_FILE;
		m_nLine1b34 = 0xc17;
		return 0x10;
	}
	if ((m_flags14b8 & 0x800) == 0x800)
	{
		m_flags14b8 &= ~0x800;
		if (enginerandom->vfunc2(0, 99) < 0x46)
		{
			m_pszFile1b30 = SOURCE_FILE;
			m_nLine1b34 = 0xc1f;
			return 0x164;
		}
		m_fl65a4 += 5.0f;
		m_pszFile1b30 = SOURCE_FILE;
		m_nLine1b34 = 0xc26;
		return 0x165;
	}
	if (!sub_10269aa0(0x48) && TzTimeAfter(m_fl65a4))
	{
		float t = enginerandom->vfunc1(3.0f, 10.0f);
		m_fl65a4 = (t + 0.0f) + gpGlobals->curtime;
		if (enginerandom->vfunc2(0, 99) < 0x3c)
		{
			m_pszFile1b30 = SOURCE_FILE;
			m_nLine1b34 = 0xc34;
			return 0x162;
		}
		m_pszFile1b30 = SOURCE_FILE;
		m_nLine1b34 = 0xc38;
		return 0x163;
	}
	return 0;
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

// FUNCTION: 0x103bd690 size=0x527
#include "CAI_BaseNPCTroika.h"
#include "CBaseEntity.h"
#include "CNPC_VTzimisce.h"
#include "CAI_BaseNPC_vfunc461.h"
#include "CAI_Motor.h"
#include "CDevFlagObj.h"
#define FILE_ "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisce.cpp"

typedef void (*FnDevWarning)(int, const char *, ...);
extern FnDevWarning g_109f3658;
extern CDevFlagObj *g_10924a6c;

int CNPC_VTzimisce::vfunc461()
{
	CAI_BaseNPCTroika *p = (CAI_BaseNPCTroika *)this;
	p->m_n1b38 = 0x26;
	switch (p->m_n5cc0) {
	case 1:
		if (p->sub_10269d30(0x54)) {
			p->m_nLine1b40 = 0xd42;
			p->m_n5cc4 = 2;
		} else if (p->sub_10269d30(0x4c)) {
			p->m_b5b80 = 0;
			sub_102e0b40((float *)p->m_pMotor5d44);
			Vector v = ((CEnemiesView *)p->vfunc541())->sub_102dfed0((CBaseEntity *)p->vfunc167());
			p->m_pMotor5d44->sub_102e2020(&v.x, 0);
			p->m_nLine1b40 = 0xd4c;
			p->m_n5cc4 = 3;
		} else if (p->sub_10269d30(0x4d)) {
			p->m_b5b80 = 0;
			sub_102e0b40((float *)p->m_pMotor5d44);
			Vector v = ((CEnemiesView *)p->vfunc541())->sub_102dfed0((CBaseEntity *)p->vfunc167());
			p->m_pMotor5d44->sub_102e2020(&v.x, 0);
			p->m_nLine1b40 = 0xd56;
			p->m_n5cc4 = 3;
		} else if (p->sub_10269d30(1)) {
			unsigned int h;
			EHANDLE *ph = (EHANDLE *)p->vfunc586((int)&h);
			CAI_BaseNPC *pEnt = (CAI_BaseNPC *)ph->Get();
			if (!pEnt)
				return p->CAI_BaseNPCTroika::vfunc461();
			sub_102e0b40((float *)p->m_pMotor5d44);
			CAI_Motor *pMotor = p->m_pMotor5d44;
			pMotor->sub_102e2020((const float *)pEnt->vfunc220(), 0);
			p->m_nLine1b40 = 0xd67;
			p->m_n5cc4 = 3;
		} else if (p->sub_10269d30(0x6a) || p->sub_10269d30(0x6d) || p->sub_10269d30(0x6e) || p->sub_10269d30(0x6f) || p->sub_10269d30(0x6b) || p->sub_10269d30(0x70)) {
			S101b9920 *pObj = (S101b9920 *)p->vfunc474();
			if (!pObj)
				return p->CAI_BaseNPCTroika::vfunc461();
			sub_102e0b40((float *)p->m_pMotor5d44);
			CAI_Motor *pMotor = p->m_pMotor5d44;
			pMotor->sub_102e2020((const float *)pObj->sub_101b99d0(), 0);
			int n = *(int *)((char *)pObj + 4);
			if (n != 1 && n != 4 && n != 8 && n != 0x10)
				return p->CAI_BaseNPCTroika::vfunc461();
			p->m_nLine1b40 = 0xd84;
			p->m_n5cc4 = 3;
		} else if (p->sub_10269d30(0x5e)) {
			p->m_nLine1b40 = 0xd8b;
			p->m_n5cc4 = 3;
		} else {
			return p->CAI_BaseNPCTroika::vfunc461();
		}
		break;
	case 3:
		if (p->sub_10269d30(0x54) || p->sub_10269d30(0x46)) {
			p->m_nLine1b40 = 0xd9a;
			p->m_n5cc4 = 2;
		} else if (p->sub_10269d30(0x6a) || p->sub_10269d30(0x6d) || p->sub_10269d30(0x6f) || p->sub_10269d30(0x70)) {
			p->m_pszFile1b3c = FILE_;
			p->m_nLine1b40 = 0xda2;
			p->m_n5cc4 = 0xb;
			S101b9920 *pObj = (S101b9920 *)p->vfunc474();
			if (pObj) {
				sub_102e0b40((float *)p->m_pMotor5d44);
				CAI_Motor *pMotor = p->m_pMotor5d44;
				pMotor->sub_102e2020((const float *)pObj->sub_101b99d0(), 0);
			}
			goto done;
		} else if (p->vfunc462()) {
			p->m_nLine1b40 = 0xdaf;
			p->m_n5cc4 = 1;
		} else {
			return p->CAI_BaseNPCTroika::vfunc461();
		}
		break;
	case 2:
		if ((p->m_flags5d8c & 2) && (p->sub_10014df8(0x46) || p->sub_10014df8(0x54))) {
			p->m_flags5d8c &= ~2;
			g_10924a6c->vfunc1();
			p->sub_10269a20(0x5d);
		}
		if (p->vfunc167() && !p->sub_10014df8(0x58)) {
			if (!p->sub_10269d30(0x47))
				return p->CAI_BaseNPCTroika::vfunc461();
			p->m_nLine1b40 = 0xddb;
			p->m_n5cc4 = 0xb;
		} else {
			if (p->sub_10014df8(0x46)) {
				p->m_pszFile1b3c = FILE_;
				p->m_nLine1b40 = 0xdcd;
				p->m_n5cc4 = 3;
			} else {
				p->m_pszFile1b3c = FILE_;
				p->m_nLine1b40 = 0xdd2;
				p->m_n5cc4 = 0xb;
			}
			g_109f3658(2, "***Combat state with no enemy!\n");
			return p->m_n5cc4;
		}
		break;
	case 0xb:
		if (p->sub_10269d30(0x54)) {
			p->m_nLine1b40 = 0xdf2;
			p->m_n5cc4 = 2;
		} else if (p->sub_10269d30(0x46)) {
			p->m_nLine1b40 = 0xdf7;
			p->m_n5cc4 = 2;
		} else if (p->vfunc462()) {
			p->m_nLine1b40 = 0xdfc;
			p->m_n5cc4 = 1;
		} else {
			return p->CAI_BaseNPCTroika::vfunc461();
		}
		break;
	default:
		return p->CAI_BaseNPCTroika::vfunc461();
	}
	p->m_pszFile1b3c = FILE_;
done:
	return p->m_n5cc4;
}
// END FUNCTION
