// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10171aa0 size=0x1e5
#include "CBaseEntity.h"
#include "CBloodSplat.h"
struct Vec
{
	float x, y, z;
	Vec() {}
	Vec(float a, float b, float c) { x = a; y = b; z = c; }
	Vec operator*(float f) const { return Vec(x * f, y * f, z * f); }
	Vec operator+(const Vec &v) const { return Vec(x + v.x, y + v.y, z + v.z); }
	float LengthSqr() const { return x * x + y * y + z * z; }
};

struct RayT
{
	Vec m_Start;
	Vec m_Delta;
	Vec m_StartOffset;
	Vec m_Extents;
	bool m_IsRay;
	unsigned char m_IsSwept;
	bool m_b52;
	bool m_b53;
	int m_d54;
};

struct TraceT
{
	Vec startpos;
	Vec endpos;
	char pad[0x3c];
};

struct TraceFilterSimple
{
	char buf[12];
	void sub_1000bd7f(int passent, int group);
};

struct IEngineTraceX
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void TraceRay(const RayT &ray, unsigned int mask, TraceFilterSimple *filter, TraceT *tr);
};

struct ConVarX
{
	virtual void v0();
	virtual bool v1();
	char pad[0x28];
	int m_nValue;
};

#define V10(n) virtual void v##n##0(); virtual void v##n##1(); virtual void v##n##2(); virtual void v##n##3(); virtual void v##n##4(); \
	virtual void v##n##5(); virtual void v##n##6(); virtual void v##n##7(); virtual void v##n##8(); virtual void v##n##9();

struct EntVT
{
	V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8)
	virtual void v90(); virtual void v91(); virtual void v92(); virtual void v93(); virtual void v94();
	virtual void v95(); virtual void v96();
	virtual char *GetOwner();
	virtual void v98(); virtual void v99();
	V10(10) V10(11) V10(12) V10(13) V10(14) V10(15) V10(16) V10(17) V10(18) V10(19) V10(20) V10(21)
	virtual const Vec &GetAbsOrigin();
	virtual const Vec &GetAbsAngles();
};

extern int g_1070ba34;
extern IEngineTraceX *g_1070b254;
extern ConVarX *g_10738964;
extern float g_104454c4;
void sub_10002310(const Vec &angles, Vec *forward, Vec *right, Vec *up);
void sub_10015df2(const Vec &start, const Vec &end, int r, int g, int b, bool noDepth, float duration);
void sub_100050c4(TraceT *tr, int color, int unk);
void sub_10014614(CBaseEntity *ent);

static inline void UTIL_TraceLine(const Vec &start, const Vec &end, unsigned int mask, int ignore, int group, TraceT *ptr)
{
	RayT ray;
	ray.m_Delta.x = end.x - start.x;
	ray.m_Delta.y = end.y - start.y;
	ray.m_Delta.z = end.z - start.z;
	int swept = (ray.m_Delta.LengthSqr() != g_104454c4) ? 1 : 0;
	ray.m_IsSwept = swept;
	ray.m_Extents.x = ray.m_Extents.y = ray.m_Extents.z = 0.0f;
	ray.m_IsRay = true;
	ray.m_StartOffset.x = ray.m_StartOffset.y = ray.m_StartOffset.z = 0.0f;
	ray.m_Start = start;
	ray.m_b52 = false;
	ray.m_d54 = 0;
	ray.m_b53 = false;
	TraceFilterSimple filter;
	filter.sub_1000bd7f(ignore, group);
	g_1070b254->TraceRay(ray, mask, &filter, ptr);
	if (!g_10738964->v1() && g_10738964->m_nValue)
		sub_10015df2(ptr->startpos, ptr->endpos, 255, 0, 0, true, -1.0f);
}

void CBloodSplat::vfunc134()
{
	EntVT *self = (EntVT *)this;
	TraceT tr;
	if (g_1070ba34 != 1)
	{
		char *owner = self->GetOwner();
		int pass;
		if (!owner)
			pass = 0;
		else
			pass = *(int *)(owner + 0xa8);
		Vec forward;
		sub_10002310(self->GetAbsAngles(), &forward, 0, 0);
		UTIL_TraceLine(self->GetAbsOrigin(), self->GetAbsOrigin() + forward * 128, 0x400b, pass, 0, &tr);
		sub_100050c4(&tr, 0xf7, 0);
	}
	sub_10014614(this);
}
// END FUNCTION

// FUNCTION: 0x10184450 size=0x1e
#include "CBloodSplat.h"

void sub_100aa7b0(void *p);

// TARGET: CBloodSplat::vfunc5
CBloodSplat *CBloodSplat::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
