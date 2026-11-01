// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f06e0 size=0x6
#include "CWeaponThrown_Chang_Ghost.h"
namespace lifted {
extern char g_1067d498;
}
datamap_t *CWeaponThrown_Chang_Ghost::vfunc82()
{
    return (datamap_t *)&lifted::g_1067d498;
}
// END FUNCTION

// FUNCTION: 0x103f0770 size=0x194
#include "CWeaponThrown_Chang_Ghost.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define GS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct CGhostSlots {
	GS10(a0) GS10(a1) GS10(a2) GS10(a3) GS10(a4) GS10(a5) GS10(a6) GS10(a7) GS10(a8)
	virtual void a90(); virtual void a91(); virtual void a92();
	virtual void slot93(int moveType, int moveCollide);
	virtual void a94(); virtual void a95(); virtual void a96(); virtual void a97(); virtual void a98(); virtual void a99();
	GS10(b0) GS10(b1) GS10(b2) GS10(b3) GS10(b4) GS10(b5) GS10(b6) GS10(b7) GS10(b8) GS10(b9)
	GS10(c0) GS10(c1) GS10(c2) GS10(c3)
	virtual void c40(); virtual void c41(); virtual void c42();
	virtual void slot243(CBaseEntity *pParent, int bFollow, const char *pszBone);
};

struct CGhostView {
	char m_pad0000[0x26c];
	const char *m_name26c;
	CCollisionProperty m_Collision;

	void SetSolid(int val)
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		m_Collision.sub_100dc480(val);
	}
	void AddSolidFlags(int flags)
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540, g_106b8540);
		m_Collision.AddSolidFlags(flags);
	}
};

struct CGhostGlobals {
	float m_f00, m_f04, m_f08;
	float m_curtime;	// 0x0c
};

extern CGhostGlobals *g_1070b228;
extern Vector g_1070d1b0;
extern Vector g_1070d9d0;
CBaseEntity *sub_100fbc90(const char *pszName, const Vector *pOrigin, const Vector *pAngles, float flParam);

void CWeaponThrown_Chang_Ghost::vfunc103()
{
	sub_100047be();
	m_f0910 = 128.0f;
	m_b0918 = 0;
	((CGhostSlots *)this)->slot93(9, 0);
	CGhostView *v = (CGhostView *)this;
	v->AddSolidFlags(4);
	v->SetSolid(0);
	m_f0924 = g_1070b228->m_curtime;
	m_f0928 = g_1070b228->m_curtime;
	((CBaseEntity *)this)->sub_100b3b00();
	CBaseEntity *pEmitter = sub_100fbc90("chang_ghost_bone_tree_emitter", &g_1070d1b0, &g_1070d9d0, -1.0f);
	if (pEmitter)
		((CGhostSlots *)pEmitter)->slot243((CBaseEntity *)this, 1, "Bip01 Spine");
	m_hEmitter92c = pEmitter;
}
// END FUNCTION

// FUNCTION: 0x103f0980 size=0x52
#include "CWeaponThrown_Chang_Ghost.h"
void CWeaponThrown_Chang_Ghost::vfunc104()
{
	engine->vfunc17("grenade_frag_emitter", 1);
	engine->vfunc17("grenade_concussion_emitter", 1);
	engine->vfunc17("grenade_smoke_emitter", 1);
	enginesound->vfunc0("weapons/ranged/grenade_pineapple/tic.wav", 0);
	sub_1001576c();
}
// END FUNCTION

// FUNCTION: 0x103f0cf0 size=0x3
#include "CWeaponThrown_Chang_Ghost.h"
void CWeaponThrown_Chang_Ghost::vfunc230(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x103f10e0 size=0x133
#include "CWeaponThrown_Chang_Ghost.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;
extern float g_104e1614;
extern float g_104e1624;
void sub_10002130();
void sub_10011a04();

// TARGET: CWeaponThrown_Chang_Ghost::vfunc372
void CWeaponThrown_Chang_Ghost::vfunc372(int a, const Vector *pDir)
{
    m_nTakeDamage = 2;
    m_iHealth = 1;
    m_nSequence = sub_1008dc40(0x22, -1);
    m_n08a8 = 0x22;
    m_n06f8 = 0;
    sub_10090950();
    m_n0914 = a;
    g_1070b244->vfunc2(-30, 30);
    g_1070b244->vfunc2(-30, 30);
    g_1070b244->vfunc2(-30, 30);
    m_flThrowSpeed = g_104e1614;
    Vector vecDir = *pDir;
    if (VectorNormalize(vecDir) > 0.000001f)
        vecDir *= m_flThrowSpeed;
    sub_100b2770(&vecDir.x);
    m_pfnTouch = (void *)sub_10002130;
    sub_100ac4e0((int)sub_10011a04, 0, 0);
    m_flNextThink = gpGlobals->curtime + 0.1f;
    m_flExpireTime = g_104e1624 + gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x103f12f0 size=0x6
#include "CWeaponThrown_Chang_Ghost.h"
namespace lifted {
extern char g_1067d694;
}
int CWeaponThrown_Chang_Ghost::vfunc362()
{
    return (int)&lifted::g_1067d694;
}
// END FUNCTION

// FUNCTION: 0x103f1310 size=0x6
#include "CWeaponThrown_Chang_Ghost.h"
int CWeaponThrown_Chang_Ghost::vfunc363()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103f1410 size=0x1e
#include "CWeaponThrown_Chang_Ghost.h"

void sub_100aa7b0(void *p);

// TARGET: CWeaponThrown_Chang_Ghost::vfunc5
CWeaponThrown_Chang_Ghost *CWeaponThrown_Chang_Ghost::vfunc5(unsigned int flags)
{
	sub_10013a57();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
