// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 2 blocks
#include "vampire.h"

// FUNCTION: 0x1009e430 size=0x5fa
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ConVar.h"
#include "ScopeTrace.h"
#include "Tier1.h"
#include "CCollisionProperty.h"
#include "CBaseEntitySlots.h"
#include "datamap.h"

extern "C" char *strchr(const char *, int);
extern "C" int _strcmpi(const char *, const char *);
extern "C" int atoi(const char *);
extern "C" double atof(const char *);

struct KVColor32
{
	unsigned char r, g, b, a;
};

struct KVColorView
{
	char pad[0x1a0];
	unsigned char r, g, b;
};

#define KVS(n) virtual void slot##n();
class KVSlots : public CBaseEntitySlots
{
public:
	KVS(194) KVS(195) KVS(196) KVS(197) KVS(198) KVS(199)
	KVS(200) KVS(201) KVS(202) KVS(203) KVS(204) KVS(205) KVS(206) KVS(207) KVS(208) KVS(209)
	KVS(210) KVS(211) KVS(212) KVS(213) KVS(214) KVS(215)
	virtual void slot216(const float *pVec);
	KVS(217)
	virtual void slot218(const float *pVec);
	KVS(219) KVS(220)
	virtual float *slot221();
};

struct KVConVar : ConVar
{
	const char *GetStr()
	{
		if (m_pParent->vfunc1())
			return "";
		if (m_nFlags & 0x1000)
			return "FCVAR_NEVER_AS_STRING";
		ConVar *var = (ConVar *)m_pParent;
		return (var->m_pszString) ? var->m_pszString : "";
	}
};

extern KVConVar g_106cf420;
extern char g_106cf040[];
extern float g_104454c4;
void sub_101d0630(KVColor32 *out, const char *s);
void sub_101d03e0(float *out, const char *s);
bool sub_101a5a80(CBaseEntity *pEnt, typedescription_t *pDesc, int num, const char *key, const char *value);

bool CBaseEntity::vfunc110(const char *szKeyName, const char *szValue)
{
	ScopeTrace scope("CBaseEntity::KeyValue", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	char *s = strchr(szKeyName, '#');
	if (s)
		*s = 0;

	if (szKeyName[0] == 'r')
	{
		if (!_strcmpi(szKeyName, "rendercolor") || !_strcmpi(szKeyName, "rendercolor32"))
		{
			KVColor32 tmp;
			sub_101d0630(&tmp, szValue);
			KVColorView *pc = (KVColorView *)this;
			pc->r = tmp.r;
			pc->g = tmp.g;
			pc->b = tmp.b;
			return true;
		}
		if (!_strcmpi(szKeyName, "renderamt"))
		{
			m_bAlpha1a3 = atoi(szValue);
			return true;
		}
	}

	if (!_strcmpi(szKeyName, "disableshadows"))
	{
		if (atoi(szValue))
			m_nEffectFlags |= 0x20;
		return true;
	}
	if (!_strcmpi(szKeyName, "mins"))
	{
		Vector mins;
		sub_101d03e0(&mins.x, szValue);
		CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
		pColl->sub_100dc770(&mins.x, pColl->vfunc2());
		return true;
	}
	if (!_strcmpi(szKeyName, "maxs"))
	{
		Vector maxs;
		sub_101d03e0(&maxs.x, szValue);
		CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
		pColl->sub_100dc770(pColl->vfunc1(), &maxs.x);
		return true;
	}
	if (!_strcmpi(szKeyName, "disablereceiveshadows"))
	{
		if (atoi(szValue))
			m_nEffectFlags |= 0x80;
		return true;
	}

	KVSlots *pSlots = (KVSlots *)this;
	if (!_strcmpi(szKeyName, "angle"))
	{
		float y = (float)atof(szValue);
		if (y >= g_104454c4)
		{
			float z = pSlots->slot221()[2];
			g_109f388c(g_106cf040, 0x40, "%f %f %f", pSlots->slot221()[0], y, z);
		}
		else if ((int)y == -1)
		{
			g_109f3890(g_106cf040, "-90 0 0", 0x40);
		}
		else
		{
			g_109f3890(g_106cf040, "90 0 0", 0x40);
		}
		szKeyName = "angles";
		szValue = g_106cf040;
	}

	if (!_strcmpi(szKeyName, "angles"))
	{
		Vector angles;
		sub_101d03e0(&angles.x, szValue);
		pSlots->slot218(&angles.x);
		return true;
	}

	if (!_strcmpi(szKeyName, "origin"))
	{
		Vector vecOrigin;
		sub_101d03e0(&vecOrigin.x, szValue);
		pSlots->slot216(&vecOrigin.x);
		return true;
	}

	datamap_t *dmap;
	if (!*g_106cf420.GetStr())
	{
		for (dmap = vfunc82(); dmap != 0; dmap = dmap->baseMap)
		{
			if (sub_101a5a80(this, dmap->dataDesc, dmap->dataNumFields, szKeyName, szValue))
				return true;
		}
	}
	else
	{
		bool printKeyHits = false;
		const char *debugName = "";
		if (*g_106cf420.GetStr() && !_strcmpi(g_106cf420.GetStr(), m_classname11c ? m_classname11c : ""))
		{
			printKeyHits = true;
			debugName = m_classname11c ? m_classname11c : "";
		}
		for (dmap = vfunc82(); dmap != 0; dmap = dmap->baseMap)
		{
			if (!printKeyHits && *g_106cf420.GetStr() && !_strcmpi(dmap->dataClassName, g_106cf420.GetStr()))
			{
				printKeyHits = true;
				debugName = dmap->dataClassName;
			}
			if (sub_101a5a80(this, dmap->dataDesc, dmap->dataNumFields, szKeyName, szValue))
			{
				if (printKeyHits)
					g_109f3628("(%s) key: %-16s value: %s\n", debugName, szKeyName, szValue);
				return true;
			}
		}
		if (printKeyHits)
		{
			const char *pszClass = m_classname11c;
			if (!pszClass)
				pszClass = "";
			g_109f3628("!! (%s) key not handled: \"%s\" \"%s\"\n", pszClass, szKeyName, szValue);
		}
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x100b4f30 size=0xcb
#include "CBaseEntity.h"
extern void (__cdecl *g_109f3628)(const char *fmt, ...);

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CPhysObjSlotsX {
	SV10(0) SV10(1) SV10(2)
	SV(30) SV(31) SV(32) SV(33) SV(34) SV(35) SV(36)
	virtual void s37(float *pPosition, float *pAngles);
};

struct CEntitySlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20)
	SV(210) SV(211) SV(212) SV(213) SV(214) SV(215)
	virtual void s216(float *pOrigin);
	virtual void s217();
	virtual void s218(float *pAngles);
};

static inline unsigned long &FloatBits(float &f)
{
	return *reinterpret_cast<unsigned long *>(&f);
}

static inline bool IsFinite(float f)
{
	return (FloatBits(f) & 0x7F800000) != 0x7F800000;
}

void CBaseEntity::vfunc226(int a)
{
	int moveType = (*(int (__fastcall **)(CBaseEntity *))(*(int *)this + 0x178))(this);
	switch (moveType) {
	case 1:
	case 8:
		sub_100a55b0((void *)a);
		break;
	case 7: {
		float angles[3];
		float origin[3];
		((CPhysObjSlotsX *)a)->s37(origin, angles);
		if (!IsFinite(angles[0]) || !IsFinite(angles[1]) || !IsFinite(angles[0]))
			g_109f3628("Infinite values from vphysics!\n");
		((CEntitySlotsX *)this)->s216(origin);
		((CEntitySlotsX *)this)->s218(angles);
		sub_100a53d0(0);
		sub_100342c0();
		break;
	}
	}
}
// END FUNCTION
