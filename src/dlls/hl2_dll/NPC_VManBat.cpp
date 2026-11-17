// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1038b1a0 size=0x16e
// TARGET: ?sub_1038b1a0@CNPC_VManBat@@QAEXM@Z
#include "CNPC_VManBat.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "globalvars.h"

struct CGameChecker
{
	virtual void vfunc0();
	virtual char vfunc1();
	char m_pad[0x28];
	int m_2c;
};

struct CConVarStub
{
	void sub_10246160(int a);
};

struct CMotorStub
{
	void sub_102e1c10(float flYaw, float flArg);
};

extern CGameChecker *g_1093b85c;
extern CConVarStub g_1093b858;

float sub_101d2c70(const Vector *pVec);
float sub_101d2ce0(const Vector *pVec);

void CNPC_VManBat::sub_1038b1a0(float flScale)
{
	if (!g_1093b85c->vfunc1() && g_1093b85c->m_2c) {
		*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VManBat.cpp";
		*(int *)((char *)this + 0x1b34) = 0x1ad;
		sub_102ae750(0x15b, 0);
		g_1093b858.sub_10246160(0);
		return;
	}

	if (flScale > 1.0)
		flScale = 1.0f;

	Vector vecDir;
	Vector vecAngles;
	vecDir = sub_1038b370(flScale);
	((CBaseEntity *)this)->sub_100b2770(vecDir);

	if (m_nState != 0x30 && m_nState != 0xb0 && m_nState != 0x4b && m_nState != 0x1171) {
		CMotorStub *pMotor = *(CMotorStub **)((char *)this + 0x5d44);
		pMotor->sub_102e1c10(sub_101d2c70(&vecDir), -1.0f);

		vecAngles = *((CEntityVSlots *)this)->slot221();
		vecAngles.x = sub_101d2ce0(&vecDir);
		((CEntityVSlots *)this)->slot64((const float *)&vecAngles);

		if (m_f6678 <= gpGlobals->curtime)
			sub_1038e720(vecDir);
	}
}
// END FUNCTION

// FUNCTION: 0x1038c390 size=0xae0
#include "CAI_Motor.h"
#include "CNPC_VManBat.h"
#include "CNPC_VHuman.h"
#include "CEHandleGet.h"

extern "C" double cos(double);
extern "C" double sin(double);

struct CSecureCoderBasic0
{
	char a, b;
	int v;
	int sub_103908c0(int x);
};

#define SEC(x) { CSecureCoderBasic0 t; int v = t.sub_103908c0(x); char a = ((CSecureCoderBasic0 &)t).a; m_n6670 = v; char b = ((CSecureCoderBasic0 &)t).b; m_bSecure666c = a; m_bSecure666d = b; }
#define SEC(x) { CSecureCoderBasic0 t; int v = t.sub_103908c0(x); char a = ((CSecureCoderBasic0 &)t).a; m_n6670 = v; char b = ((CSecureCoderBasic0 &)t).b; m_bSecure666d = b; m_bSecure666c = a; }
#define SEC(x) { CSecureCoderBasic0 t; int v = t.sub_103908c0(x); char b = ((CSecureCoderBasic0 &)t).b; char a = ((CSecureCoderBasic0 &)t).a; m_n6670 = v; m_bSecure666d = b; m_bSecure666c = a; }
struct SecV
{
	char a, b;
	unsigned int v;
	unsigned int sub_103908c0(unsigned int x);
	void Copy(const SecV *p) { v = p->v; b = ((volatile SecV *)p)->b; a = ((SecV *)p)->a; }
};
#define SEC(x) { SecV t; t.v = t.sub_103908c0(x); ((SecV *)&m_bSecure666c)->Copy(&t); }
#define SEC2(x) { SecV t; unsigned int r = t.sub_103908c0(x); t.v = r; ((SecV *)&m_bSecure666c)->Copy(&t); }
#define SCRAMBLE0(x) ((((((x) & 0x710935) ^ 0x34871d) + 0x4094ab) & 0x18ef6ca) ^ (x) ^ 0x412a96ec)
#define SECURE_SETI(x) { SecV t; unsigned int v = x; t.v = SCRAMBLE0(v); ((SecV *)&m_bSecure666c)->Copy(&t); }

struct CEntityFinder
{
	CBaseEntity *sub_100f7b20(const char *pszName, const Vector *pPos, float flRadius, CBaseEntity *pA, CBaseEntity *pB);
};
extern CEntityFinder g_106eb5d8;

CBaseEntity *sub_102d1af0(void *pThis, int a, int b, float c, int d, int e);
void sub_101cf5c0(void *pObj, const Vector *pVec, int a);
int sub_1042fb50(int x);
int sub_10390900(int x);
float sub_101d2c70(const Vector *pDir);

extern const char *g_10640ce0[];
extern const char *g_10640cf0[];
extern const char *g_10640cfc[];
extern int g_104bbaa4[];

struct CManBatV : CNPC_VManBat
{
	void sub_1038c390(int *pEvent);
	void sub_10390040();
};

// TARGET: CManBatV::sub_1038c390
void CManBatV::sub_1038c390(int *pEvent)
{
	switch (pEvent[0])
	{
	case 330:
		sub_102e0b40((float *)*(void **)((char *)this + 0x5d44));
		((CAI_BaseNPC *)this)->sub_10272650(0x28);
		if (m_pFlyNode)
			sub_1038c250(m_pFlyNode);
		return;
	case 331:
	{
		sub_1038e640();
		Vector vecDir = sub_1038b370(0.0f);
		sub_1038e720(vecDir);
		return;
	}
	case 332:
	{
		sub_1038f660();
		sub_1038c170(2);
		SEC(sub_10390900(5));
		((CAI_BaseNPC *)this)->sub_10272650(0x2f);
		Vector vec = *((CEntityVSlots *)this)->slot198();
		sub_102c4cc0(&vec, ((CEntityVSlots *)this)->slot217(), ((CEntityVSlots *)m_pFlyNode)->slot217());
		((CBaseEntity *)this)->sub_100b2770(vec);
		return;
	}
	case 335:
		if (m_pFlyNode == 0)
		{
			SEC(sub_10390900(0));
			m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
			if (m_pFlyNode == 0)
			{
				m_n6674 = 1;
				m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
			}
		}
		if (m_pFlyNode != 0)
		{
			m_n6674++;
			m_bReachedMoveGoal = false;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
		}
		else
		{
			((CEntityVSlots *)this)->slot448(4);
		}
		break;
	case 334:
		SEC(sub_10390900(1));
		m_pFlyNode = sub_102d1af0(this, 20000, 2, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			m_bReachedMoveGoal = false;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		((CEntityVSlots *)this)->slot448(4);
		return;
	case 337:
		SEC(sub_10390900(2));
		m_n6674 = enginerandom->vfunc2(1, 3);
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			m_bReachedMoveGoal = false;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		((CEntityVSlots *)this)->slot448(4);
		return;
	case 338:
		SEC(sub_10390900(3));
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			m_bReachedMoveGoal = false;
			Vector vecDir = sub_1038b370(0.0f);
			sub_1038e720(vecDir);
			return;
		}
		((CEntityVSlots *)this)->slot448(4);
		return;
	case 341:
		SEC(sub_10390900(4));
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			m_bReachedMoveGoal = false;
			((CAI_BaseNPC *)this)->sub_10272650(0x116f);
			return;
		}
		((CEntityVSlots *)this)->slot448(4);
		return;
	case 333:
	{
		sub_102e0b40((float *)*(void **)((char *)this + 0x5d44));
		int nAngle = enginerandom->vfunc2(-180, 180);
		nAngle = (int)(nAngle * 182.04445f);
		nAngle &= 0xffff;
		float flAngle = nAngle * 0.005493164f;
		float flExtra = enginerandom->vfunc1(0.1f, 0.5f);
		float rad = flAngle * 0.017453292f;
		Vector vec(cos(rad), sin(rad), flExtra);
		vec *= 500.0f;
		((CBaseEntity *)this)->sub_100b2770(vec);
		sub_1038e720(vec);
		return;
	}
	case 336:
	{
		((CAI_BaseNPC *)this)->sub_10272650(0x30);
		Vector vec(0.0f, 0.0f, 0.0f);
		((CBaseEntity *)this)->sub_100b2770(vec);
		return;
	}
	case 340:
	{
		int n;
		do
		{
			n = enginerandom->vfunc2(1, 3);
		} while (n == m_n6674);
		m_n6674 = n;
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode != 0)
		{
			sub_101cf5c0(this, ((CEntityVSlots *)m_pFlyNode)->slot217(), 0);
			m_pFlyNode = 0;
			((CAI_BaseNPC *)this)->sub_10273e80(0);
		}
		else
		{
			((CEntityVSlots *)this)->slot448(4);
		}
		break;
	}
	case 339:
	{
		int n = enginerandom->vfunc2(1, 4);
		const char *pszName = g_10640cfc[n];
		int nArg = g_104bbaa4[n];
		n--;
		if (sub_1038f2c0(g_10640ce0[n], (int)g_10640cf0[n], nArg, pszName))
		{
			((CAI_BaseNPC *)this)->sub_10273e80(0);
			return;
		}
		((CEntityVSlots *)this)->slot448(1);
		return;
	}
	case 342:
	{
		CBaseEntity *pTarget = (CBaseEntity *)EHandle_Get(m_h628c);
		Vector diff;
		diff = *((CEntityVSlots *)pTarget)->slot217() - *((CEntityVSlots *)this)->slot217();
		QAngle angles = *(QAngle *)((CEntityVSlots *)this)->slot221();
		angles.y = sub_101d2c70(&diff);
		angles.x = 0.0f;
		((CEntityVSlots *)this)->slot64((const float *)&angles);
		((CAI_BaseNPC *)this)->sub_10272650(0xb0);
		return;
	}
	case 343:
		SECURE_SETI(sub_10390900(6));
		m_pFlyNode = 0;
		m_bReachedMoveGoal = false;
		return;
	case 344:
		((CAI_BaseNPC *)this)->sub_10272650(0x1170);
		sub_1038e9c0((CBaseEntity *)EHandle_Get(m_h628c));
		return;
	case 345:
	case 354:
		SECURE_SETI(sub_10390900(7));
		m_hFlyByTarget.m_Index = m_h628c;
		m_pFlyNode = 0;
		m_bReachedMoveGoal = false;
		return;
	case 347:
		((CAI_BaseNPC *)this)->sub_10272650(0x1054);
		return;
	case 348:
		SECURE_SETI(sub_10390900(8));
		m_n6674 = 1;
		m_pFlyNode = sub_102d1af0(this, 20000, 0, 5000.0f, 0, 0);
		if (m_pFlyNode)
		{
			m_bReachedMoveGoal = false;
			Vector vecDir = sub_1038b370(0.0f);
			sub_1038e720(vecDir);
		}
		else
			((CEntityVSlots *)this)->slot448(4);
	case 349:
	{
		const Vector &o = *((CEntityVSlots *)this)->slot217();
		Vector origin;
		origin.x = o.x;
		origin.y = o.y;
		origin.z = o.z + 10.0f;
		((CEntityVSlots *)this)->slot216(&origin);
		sub_1038e640();
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	}
	case 350:
		sub_1038fc80();
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	case 351:
		sub_1038fd40();
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	case 352:
	{
		m_hFlyByTarget = g_106eb5d8.sub_100f7b20("Cop", ((CEntityVSlots *)this)->slot220(), 0.0f, 0, 0);
		if (EHandle_Get(m_hFlyByTarget.m_Index) == 0)
		{
			((CEntityVSlots *)this)->slot448(1);
			return;
		}
		SEC(sub_1042fb50(7));
		m_pFlyNode = 0;
		m_bReachedMoveGoal = false;
		return;
	}
	case 346:
	case 353:
		((CAI_BaseNPC *)this)->sub_10272650(0x4b);
		return;
	case 355:
		SECURE_SETI(sub_1042fb50(9));
		m_pFlyNode = 0;
		m_bReachedMoveGoal = false;
		m_flCoastTimer = gpGlobals->curtime + 1.0;
		return;
	case 356:
		sub_10390040();
		((CAI_BaseNPC *)this)->sub_10273e80(0);
		return;
	default:
		((CNPC_VHuman *)this)->vfunc442(pEvent);
		return;
	}
}
// END FUNCTION

// FUNCTION: 0x1038d130 size=0xbca
#define vfunc580() vfunc580(); void vfunc444(int *pTask)
#include "CNPC_VManBat.h"
#undef vfunc580
#include "CBaseEntity.h"
#include "CBaseAnimating.h"
#include "CBaseTrigger.h"
#include "CAI_BaseNPC.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"
#include "CPASAttenuationFilter.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"
#include "CUnknown1020e060.h"
#include "inputdata_t.h"
#include "ehandle.h"
#include "globalvars.h"
#include "Vector.h"

extern "C" int __cdecl sprintf(char *, const char *, ...);
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl _strnicmp(const char *, const char *, unsigned int);
extern "C" unsigned int __cdecl strlen(const char *);
#pragma intrinsic(strlen)
extern char g_106b8540[];

int sub_10390920(unsigned int x);
void sub_101cf5c0(CBaseEntity *pThis, const Vector *pVec, int a);
CBaseEntity *sub_102d1af0(CBaseEntity *pThis, int a, unsigned int b, float c, Vector *d, float *e);
CBaseEntity *__fastcall sub_1032e7b0(CBaseEntity *p);
struct CBaseNPCV { void sub_10288780(int *pTask); };

#define MB_V(n) virtual void v##n();
#define MB_V10(p) MB_V(p##0) MB_V(p##1) MB_V(p##2) MB_V(p##3) MB_V(p##4) MB_V(p##5) MB_V(p##6) MB_V(p##7) MB_V(p##8) MB_V(p##9)
#define MB_V100(p) MB_V10(p##0) MB_V10(p##1) MB_V10(p##2) MB_V10(p##3) MB_V10(p##4) MB_V10(p##5) MB_V10(p##6) MB_V10(p##7) MB_V10(p##8) MB_V10(p##9)

struct CManBatView
{
	MB_V10(0) MB_V10(1) MB_V10(2) MB_V10(3) MB_V10(4) MB_V10(5) MB_V10(6) MB_V10(7) MB_V10(8) MB_V10(9)
	MB_V10(10) MB_V10(11) MB_V10(12) MB_V10(13) MB_V10(14) MB_V10(15) MB_V10(16) MB_V10(17) MB_V10(18) MB_V10(19)
	MB_V10(20)
	MB_V(210) MB_V(211) MB_V(212) MB_V(213) MB_V(214) MB_V(215) MB_V(216) MB_V(217) MB_V(218) MB_V(219) MB_V(220) MB_V(221)
	virtual Vector GetSoundEmissionOrigin();	// slot 222
	char m_pad04[0x2e0 - 0x4];
	int m_pEdict2e0;
};

struct CSlot596V
{
	MB_V100(0) MB_V100(1) MB_V100(2) MB_V100(3) MB_V100(4)
	MB_V10(50) MB_V10(51) MB_V10(52) MB_V10(53) MB_V10(54) MB_V10(55) MB_V10(56) MB_V10(57) MB_V10(58)
	MB_V(590) MB_V(591) MB_V(592) MB_V(593) MB_V(594) MB_V(595)
	virtual void slot596(CBaseEntity *pEnt);
};

struct CBatFields
{
	char m_pad0[0x1b44];
	const char *m_pszFile1b44;
	int m_nLine1b48;
	char m_pad1b4c[0x5d44 - 0x1b4c];
	CAI_Motor *m_pMotor5d44;
	char m_pad5d48[0x5d9c - 0x5d48];
	float m_flTime5d9c;
};

struct CEntListV
{
	CBaseEntity *sub_100f7b20(const char *pszName, const Vector *pPos, float flRadius, CBaseEntity *a, CBaseEntity *b);
};
extern CEntListV g_106eb5d8;
extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;

struct CCollView
{
	virtual void v0();
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

static inline CCollView *CollOf(void *p) { return (CCollView *)((char *)p + 0x270); }

static inline int SecDecode0(unsigned int v)
{
	return sub_10390920((((v & 0x710935) ^ 0x148739) + 0x4094ab & 0x18ef6ca) ^ v ^ 0x412a96ec);
}

static inline bool SecEq0(unsigned int v, unsigned int k)
{
	int b = sub_10390920(k);
	return SecDecode0(v) == b;
}

static inline void MotorGoal(CAI_Motor *pMotor, const Vector &v, float f)
{
	pMotor->sub_102e20b0((float *)&v.x, f);
}

static inline bool Bit12(const unsigned int &f)
{
	return ((f >> 12) & 1) != 0;
}

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

inline bool NamesMatch(const char *pszName, const char *const &nameToMatch)
{
	int len = strlen(pszName);
	int r;
	if (len == 0)
		r = (int)nameToMatch;
	else if (pszName[len - 1] != '*')
		r = _strcmpi(STRINGR(nameToMatch), pszName);
	else
		r = _strnicmp(STRINGR(nameToMatch), pszName, len - 1);
	return r == 0;
}

struct NamedEnt
{
	char m_pad0000[0x26c];
	const char *m_iName;
};

inline bool NameMatches(CBaseEntity *pEntity, const char *pszName)
{
	NamedEnt *pEnt = (NamedEnt *)pEntity;
	if (pEnt->m_iName && pEnt->m_iName == pszName)
		return true;
	return NamesMatch(pszName, pEnt->m_iName);
}

#define ME ((CEntityVSlots *)this)
#define NPC ((CAI_BaseNPC *)this)
#define FB ((CEntityVSlots *)m_hFlyByTarget.Get())

void CNPC_VManBat::vfunc444(int *pTask)
{
	CBatFields *f = (CBatFields *)this;
	switch (*pTask)
	{
	case 0x14a:
		if (m_pFlyNode)
		{
			Vector *pOrg = ME->slot217();
			Vector *pNodeOrg = ((CEntityVSlots *)m_pFlyNode)->slot217();
			MotorGoal(f->m_pMotor5d44, *pNodeOrg + *pOrg, -2.0f);
		}
		if (ME->slot251())
		{
			NPC->sub_10273e80(0);
			sub_1038e640();
		}
		break;
	case 0x14b:
		if (m_bReachedMoveGoal)
		{
			if (SecEq0(m_n6670, 0xfa0b0695))
				sub_101cf5c0((CBaseEntity *)this, ((CEntityVSlots *)m_pFlyNode)->slot217(), 0);
			m_pFlyNode = 0;
			NPC->sub_10273e80(0);
		}
		break;
	case 0x152:
	case 0x155:
		if (m_bReachedMoveGoal)
		{
			Vector vecZero(0, 0, 0);
			((CBaseEntity *)this)->sub_100b2770(vecZero);
			m_pFlyNode = 0;
			NPC->sub_10273e80(0);
		}
		break;
	case 0x14d:
		if (Bit12(((CBaseEntity *)this)->m_flags268))
			((CBaseEntity *)this)->sub_100b1d10();
		MotorGoal(f->m_pMotor5d44, *ME->slot217() + ((CBaseEntity *)this)->m_vecVelocity3bc, -2.0f);
		return;
	case 0x14c:
		if (((CBaseEntity *)this)->sub_100b3700() & 1)
		{
			Vector vecZero(0, 0, 0);
			((CBaseEntity *)this)->sub_100b2770(vecZero);
			sub_1038c170(0);
			m_pFlyNode = 0;
			NPC->sub_10273e80(0);
			NPC->sub_10272650(0x1171);
			CManBatView *p = (CManBatView *)this;
			CPASAttenuationFilter filter(p);
			filter.MakeReliable();
			int edict = p->m_pEdict2e0;
			g_1070b248->vfunc3(&filter, engine->vfunc35(edict), 4, "character/male/sheriff_manbat/fall.wav", 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
		}
		break;
	case 0x150:
		if (ME->slot251())
		{
			sub_1038c170(0);
			NPC->sub_10273e80(0);
			NPC->sub_10272650(1);
		}
		break;
	case 0x156:
		if (ME->slot251())
		{
			sub_1038f790();
			NPC->sub_10273e80(0);
			sub_1038e640();
		}
		break;
	case 0x159:
	case 0x160:
		if (m_hFlyByTarget.Get() && FB->slot158())
		{
			if (*(int *)((char *)m_hFlyByTarget.Get() + 0xa8))
				sub_1038fe30();
			if (m_bReachedMoveGoal)
			{
				Vector vecTarget = *FB->slot217();
				Vector *pOrg = ME->slot217();
				Vector vecDir;
				vecDir = *pOrg - vecTarget;
				vecDir.z = 0;
				VectorNormalize(vecDir);
				vecTarget.x += vecDir.x * 10.0f;
				vecTarget.y += vecDir.y * 10.0f;
				CCollView *pColl = CollOf(m_hFlyByTarget.Get());
				vecTarget.z = (pColl->OBBMaxs() - CollOf(m_hFlyByTarget.Get())->OBBMins()).z + vecTarget.z + 1.0;
				ME->slot216(&vecTarget);
				NPC->sub_10272650(0x4b);
				((CSlot596V *)this)->slot596((CBaseEntity *)m_hFlyByTarget.Get());
				NPC->sub_10273e80(0);
			}
		}
		else
			ME->slot448(1);
		break;
	case 0x162:
		if (m_hFlyByTarget.Get() && FB->slot158())
		{
			sub_1038fe30();
			if (m_bReachedMoveGoal)
				NPC->sub_10273e80(0);
		}
		else
			ME->slot448(1);
		break;
	case 0x157:
		if (m_bReachedMoveGoal)
			NPC->sub_10273e80(0);
		break;
	case 0x15a:
		if (ME->slot251())
		{
			CEntityVSlots *pWeapon = (CEntityVSlots *)sub_1032e7b0((CBaseEntity *)this);
			if (pWeapon && (pWeapon->slot360() & 0x18000))
			{
				f->m_flTime5d9c = gpGlobals->curtime;
				pWeapon->slot326();
				NPC->sub_10273e80(0);
			}
			else
			{
				f->m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VManBat.cpp";
				f->m_nLine1b48 = 0x4e1;
				ME->slot448(0x1f);
			}
		}
		break;
	case 0x158:
		if (ME->slot251())
		{
			NPC->sub_10273e80(0);
			sub_1038e640();
		}
		break;
	case 0x15b:
		if (ME->slot251())
		{
			CBaseEntity *pSpot = g_106eb5d8.sub_100f7b20("Spotlight *", ME->slot220(), 0, 0, 0);
			if (pSpot)
			{
				int n;
				if (NameMatches(pSpot, "Spotlight 1"))
					n = 1;
				else if (NameMatches(pSpot, "Spotlight 2"))
					n = 2;
				else
					goto done;
				{
					inputdata_t data;
					data.value.iValue = 0;
					data.value.eVal = 0xffffffff;
					data.value.fieldType = 0;
					((CBaseAnimating *)pSpot)->sub_1008d5f0(0);
					((CBaseAnimating *)pSpot)->sub_1008d6d0(2);
					((CUnknown1020e060 *)pSpot)->sub_1020e060((int)&data);
					char szName[80];
					sprintf(szName, "Spotlightbeam %d", n);
					CBaseEntity *pBeam = g_106eb5d8.sub_100f7b20(szName, ((CEntityVSlots *)pSpot)->slot220(), 0, 0, 0);
					if (pBeam)
						((CBaseTrigger *)pBeam)->sub_101c4dd0();
				}
			}
		done:
			NPC->sub_10273e80(0);
		}
		break;
	case 0x15c:
		if (m_bReachedMoveGoal)
		{
			if (++m_n6674 > m_n6698)
			{
				NPC->sub_10273e80(0);
				return;
			}
			m_pFlyNode = sub_102d1af0((CBaseEntity *)this, 0x4e20, 0, 5000.0f, 0, 0);
			if (m_pFlyNode)
			{
				m_bReachedMoveGoal = 0;
				Vector vecDir = sub_1038b370(0);
				sub_1038e720(vecDir);
			}
			else
				ME->slot448(4);
		}
		break;
	case 0x161:
		if (m_hFlyByTarget.Get() && FB->slot158())
		{
			if (ME->slot251())
			{
				int tmp;
				if (sub_1038f2c0(STRINGR(*FB->slot9(&tmp)), (int)"Bip01 R Neck", 0x41a00000, 0))
				{
					FB->slot119();
					m_n6674 = g_1070b244->vfunc2(1, 3);
					NPC->sub_10273e80(0);
				}
				else
					ME->slot448(1);
				sub_1038e640();
			}
		}
		else
		{
			ME->slot448(1);
			sub_1038e640();
		}
		break;
	case 0x163:
		if (gpGlobals->curtime >= m_flCoastTimer)
			NPC->sub_10273e80(0);
		break;
	default:
		((CBaseNPCV *)this)->sub_10288780(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1038f790 size=0x22a
#include "CHL2_Player.h"
#include "CAI_Pathfinder.h"
#include "CAI_BaseNPCTroika.h"
#include "ehandle.h"
#include "ConVar.h"
#include "MvsnSec0.h"
#include "engineiface.h"
#include "globalvars.h"
#include "Vector.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CNPC_VManBat.h"
#include "CEHandleGet.h"
#include "CEntRemoveView.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CUnknown100290c0.h"
#include "CRagdollPropSpecial.h"
#define V(n) virtual void v##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
struct PhysView {
    V10(0) V10(1) V10(2) V(30) V(31) V(32) V(33) V(34) V(35) V(36) V(37) V(38)
    virtual void s39(const Vector *a, const Vector *b);
};
struct RagView {
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
    V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17) V10(18) V10(19)
    V10(20) V10(21) V10(22) V10(23) V10(24) V10(25)
    V(260) V(261) V(262) V(263) V(264) V(265)
    virtual void s266(const Vector *a, const Vector *b);
};
extern "C" void *__cdecl __RTDynamicCast(void *, long, void *, void *, int);
extern char g_10538764[];
extern char g_1057fff0[];

int sub_10390920(unsigned int x);
int sub_102d1af0(void *pThis, int a, int b, float c, int d, int e);
void sub_101cf5c0(void *pThis, const Vector *pVec, int a);

extern ConVar g_1093b7c8;

namespace block_1038f790 {
struct ManBatPad1 { int x; };
struct ManBatPad2 { int x; };

struct CCollView
{
	virtual void v0();
	virtual const Vector &OBBMins();
	virtual const Vector &OBBMaxs();
};

static inline CCollView *CollOf(void *p) { return (CCollView *)((char *)p + 0x270); }
static inline const Vector &MaxsOf(void *p) { return CollOf(p)->OBBMaxs(); }
static inline const Vector &MinsOf(void *p) { return CollOf(p)->OBBMins(); }

static inline int SecDecode0(unsigned int v)
{
	return sub_10390920((((v & 0x710935) ^ 0x148739) + 0x4094ab & 0x18ef6ca) ^ v ^ 0x412a96ec);
}

static inline bool SecEq0(unsigned int v, unsigned int k)
{
	int b = sub_10390920(k);
	return SecDecode0(v) == b;
}

static inline const Vector &ManBatAbsVelocity(CBaseEntity *p)
{
	if ((unsigned char)(p->m_flags268 >> 12) & 1)
		p->sub_100b1d10();
	return p->m_vecVelocity3bc;
}

struct ManBatPathOuter : CAI_PathfinderOuter
{
	CAI_Pathfinder *GetPathfinder() { return m_pPathfinder; }
};

struct ManBatNav : CAI_Pathfinder
{
	void SetupFit()
	{
		m_unk08 = ((CNPC_VManBat *)m_pOuter)->m_n156c;
		m_unk0c = gpGlobals->framecount;
	}
};

// 0x1038b370, the unit's first function that declines the header inline LookupEntity (all six lookups),
// so the COMDAT is compiled before the target
struct ManBatDive : CNPC_VManBat
{
	CBaseEntity *GetFlyNode() { return m_pFlyNode; }
	Vector sub_1038b370(float flScale);
};

Vector ManBatDive::sub_1038b370(float flScale)
{
	static Vector s_vecLast(0.0f, 0.0f, 0.0f);
	static float s_flTime;
	Vector vecVelocity;
	float flSpeed;
	Vector vecOut;

	if (GetFlyNode() == 0 && !SecEq0(m_n6670, 0xfa0b069a) && !SecEq0(m_n6670, 0xfa0b069b))
	{
		vecVelocity = ManBatAbsVelocity((CBaseEntity *)this);
		vecVelocity.z = 10.0f;
		flSpeed = sub_10146150(&vecVelocity);
		Vector vecDir = vecVelocity;
		VectorNormalize(vecDir);
		if (sub_1038bec0(vecDir, flSpeed, vecOut))
			vecVelocity = vecOut * flSpeed;
		return vecVelocity;
	}

	if (m_nState == 0x30 || 0xb0 == m_nState || m_nState == 0x4b || m_nState == 0x1171)
	{
		vecVelocity.Init(0.0f, 0.0f, 0.0);
		return vecVelocity;
	}

	Vector vecOrigin = *((CEntityVSlots *)this)->slot220();
	if (vecOrigin == s_vecLast)
	{
		if (gpGlobals->curtime - s_flTime > 0.5)
		{
			int nOldMode = SecDecode0(m_n6670);
			int nOldN = m_n6674;
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(2);
			m_n6674 = enginerandom->vfunc2(1, 3);
			CBaseEntity *pNode = (CBaseEntity *)sub_102d1af0(this, 20000, 0, 15000.0f, 0, 0);
			((MvsnSec::CSecureInt0 *)&m_pSecure6668)->Set(nOldMode);
			m_n6674 = nOldN;
			if (pNode)
			{
				Vector vecPos = *((CEntityVSlots *)this)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				vecPos = *((CEntityVSlots *)pNode)->slot217();
				((CAI_BaseNPCTroika *)this)->sub_102c41b0((int)"sheriff_teleport_emitter", &vecPos, 0, 0);
				sub_101cf5c0(this, &vecPos, 0);
			}
			else
			{
				vecVelocity.Init(0.0f, 0.0f, 0.0f);
				return vecVelocity;
			}
		}
	}
	else
	{
		s_vecLast = vecOrigin;
		s_flTime = gpGlobals->curtime;
	}

	Vector vecTarget;
	if (SecEq0(m_n6670, 0xfa0b069a))
	{
		CBaseEntity *pTarget = (CBaseEntity *)((EHANDLE &)m_h628c).Get();
		const Vector &v = *((CEntityVSlots *)pTarget)->slot220();
		vecTarget.x = v.x;
		vecTarget.y = v.y;
		vecTarget.z = v.z + 150.0;
	}
	else if (SecEq0(m_n6670, 0xfa0b069b))
	{
		if (!m_hFlyByTarget.Get() || !((CEntityVSlots *)m_hFlyByTarget.Get())->slot158())
			return ManBatAbsVelocity((CBaseEntity *)this);
		vecTarget = *((CEntityVSlots *)m_hFlyByTarget.Get())->slot220();
		vecTarget.z = MaxsOf(m_hFlyByTarget.Get()).z - MinsOf(m_hFlyByTarget.Get()).z + vecTarget.z + 1.0;
		((ManBatNav *)((ManBatPathOuter *)this)->GetPathfinder())->SetupFit();
		if (!((ManBatPathOuter *)this)->GetPathfinder()->sub_102f1a20(&vecTarget.x, 0x2400b))
		{
			((CEntityVSlots *)this)->slot448(0x1a);
			return ManBatAbsVelocity((CBaseEntity *)this);
		}
	}
	else
	{
		vecTarget = *((CEntityVSlots *)GetFlyNode())->slot220();
	}

	vecVelocity = vecTarget - vecOrigin;
	float flLen = vecVelocity.Length();
	flSpeed = 700.0f;
	if (!(vecVelocity.z < -30.0f))
		flSpeed = 500.0f;
	VectorNormalize(vecVelocity);
	if (sub_1038bec0(vecVelocity, flSpeed, vecOut))
	{
		vecVelocity = vecOut * flSpeed;
	}
	else
	{
		vecVelocity *= flSpeed;
		Vector vecCur = *((CEntityVSlots *)this)->slot198();
		Vector vecDiff = vecVelocity - vecCur;
		flSpeed = g_1093b7c8.GetFloat() * flScale;
		vecDiff.x = vecDiff.x > flSpeed ? flSpeed : vecDiff.x;
		float flNeg = -flSpeed;
		vecDiff.x = vecDiff.x < flNeg ? flNeg : vecDiff.x;
		if (vecDiff.y > flSpeed) vecDiff.y = flSpeed;
		if (vecDiff.y < flNeg) vecDiff.y = flNeg;
		if (vecDiff.z > flSpeed) vecDiff.z = flSpeed;
		if (vecDiff.z < -(flSpeed * 3.0)) vecDiff.z = -(flSpeed * 3.0);
		vecVelocity = vecCur + vecDiff;
	}

	if (flScale > 0.0)
	{
		double t = vecVelocity.Length() * 0.2;
		if (flLen < t)
			m_bReachedMoveGoal = true;
	}
	return vecVelocity;
}
}

struct CManBatPhysEnt : CBaseEntity
{
    PhysView *VPhysicsGetObject() { return *(PhysView **)((char *)this + 0x36c); }
};

void CNPC_VManBat::sub_1038f790()
{
    if ((EHANDLE &)m_h6690)
        sub_101cd970((CEntRemoveView *)((EHANDLE &)m_h6690).Get());
    (EHANDLE &)m_h6690 = (CBaseEntity *)0;
    CEntityVSlots *target = (CEntityVSlots *)((EHANDLE &)m_h628c).Get();
    if (target && ((EHANDLE &)m_h668c).Get()) {
        Vector zero(0, 0, 0);
        Vector vec;
        const Vector *p = target->slot217();
        vec.x = p->x;
        vec.y = p->y;
        vec.z = p->z + 48.0f;
        sub_102c4cc0(&zero, ((CEntityVSlots *)((EHANDLE &)m_h668c).Get())->slot217(), &vec);
        CRagdollPropSpecial *r = (CRagdollPropSpecial *)__RTDynamicCast(((EHANDLE &)m_h668c).Get(), 0, g_10538764, g_1057fff0, 0);
        if (r) {
            Vector z2(0, 0, 0);
            ((RagView *)r)->s266(&zero, &z2);
            r->sub_101578d0(m_b6694);
        } else {
            PhysView *phys = ((CManBatPhysEnt *)((EHANDLE &)m_h668c).Get())->VPhysicsGetObject();
            if (phys) {
                Vector z2(0, 0, 0);
                phys->s39(&zero, &z2);
            }
        }
    }
    sub_102c4380((CBaseEntity *)((EHANDLE &)m_h668c).Get());
    sub_102c43b0(2.0f);
    (EHANDLE &)m_h668c = (CBaseEntity *)0;
    sub_1038f600(0);
}
// END FUNCTION

// FUNCTION: 0x1038fa50 size=0x23
#include "CAI_BaseNPCTroika.h"

extern char g_10642bcc[];

struct CUnknown1038fa50 {
	char m_pad0000[0x1b30];
	char *m_pszSourceFile;
	int m_nSourceLine;
	void sub_1038fa50(int unused);
};

// TARGET: CUnknown1038fa50::sub_1038fa50
void CUnknown1038fa50::sub_1038fa50(int unused)
{
	m_pszSourceFile = g_10642bcc;
	m_nSourceLine = 0x7d8;
	((CAI_BaseNPCTroika *)this)->sub_102ae750(0x15b, 0);
}
// END FUNCTION

// FUNCTION: 0x1038fa90 size=0x49
#include "CNPC_VManBat.h"
#include "inputdata_t.h"
void CNPC_VManBat::sub_1038fa90(inputdata_t *pInput)
{
	m_n6698 = pInput->value.fieldType == 4 ? pInput->value.iValue : 0;
	*(const char **)((char *)this + 0x1b30) = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VManBat.cpp";
	*(int *)((char *)this + 0x1b34) = 0x7e4;
	sub_1038c170(1);
	sub_102ae750(0x160, 0);
}
// END FUNCTION
