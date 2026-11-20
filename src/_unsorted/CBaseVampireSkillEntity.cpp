// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020a770 size=0x6
#include "CBaseVampireSkillEntity.h"
#include "datamap.h"
namespace lifted {
extern char g_105aa150;
}
datamap_t *CBaseVampireSkillEntity::vfunc82()
{
    return (datamap_t *)&lifted::g_105aa150;
}
// END FUNCTION

// FUNCTION: 0x1020ab00 size=0x6d
#include "CBaseVampireSkillEntity.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseEntity *CBaseVampireSkillEntity::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x7f4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7dc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7c4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x794))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1020ab90 size=0x18
#include "CBaseVampireSkillEntity.h"
struct CUnknownGlobals1070b228 { int m_pad[3]; int m_unkc; };
extern CUnknownGlobals1070b228 *g_1070b228;
void CBaseVampireSkillEntity::vfunc103()
{
	sub_10012eef();
	m_unk788 = g_1070b228->m_unkc;
}
// END FUNCTION

// FUNCTION: 0x1020ac50 size=0xb
#include "CBaseVampireSkillEntity.h"
void CBaseVampireSkillEntity::vfunc272()
{
	m_unk78c = 0;
}
// END FUNCTION

// FUNCTION: 0x1020acb0 size=0xc8
#include "CAI_BaseNPC.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseVampireSkillEntity.h"
#include "CVFeat_t.h"

struct CGlobalVars_1020acb0
{
	char m_pad0000[0xc];
	int m_nCurTime;	// 0x0c: curtime, copied as a plain dword
};
extern CGlobalVars_1020acb0 *g_1070b228;

// the vtable of the skill entity up to slot 272 (the entity's own vfunc272 is a plain member there)
struct CSkillSlots272
{
	CAI_NPC_V(0) CAI_NPC_V(1) CAI_NPC_V(2) CAI_NPC_V(3) CAI_NPC_V(4) CAI_NPC_V(5) CAI_NPC_V(6) CAI_NPC_V(7) CAI_NPC_V(8) CAI_NPC_V(9)
	CAI_NPC_V10(1) CAI_NPC_V10(2) CAI_NPC_V10(3) CAI_NPC_V10(4) CAI_NPC_V10(5) CAI_NPC_V10(6) CAI_NPC_V10(7) CAI_NPC_V10(8) CAI_NPC_V10(9)
	CAI_NPC_V10(10) CAI_NPC_V10(11) CAI_NPC_V10(12) CAI_NPC_V10(13) CAI_NPC_V10(14) CAI_NPC_V10(15) CAI_NPC_V10(16) CAI_NPC_V10(17) CAI_NPC_V10(18) CAI_NPC_V10(19)
	CAI_NPC_V10(20) CAI_NPC_V10(21) CAI_NPC_V10(22) CAI_NPC_V10(23) CAI_NPC_V10(24) CAI_NPC_V10(25) CAI_NPC_V10(26)
	CAI_NPC_V(270) CAI_NPC_V(271)
	virtual void vfunc272();
};

void CBaseVampireSkillEntity::vfunc39(void *pEntity)
{
	sub_100a4fe0(pEntity);
	m_unk788 = g_1070b228->m_nCurTime;
	int nFeat = 0;
	if (m_n784 == 1)
		nFeat = CVFeatSet::Find(0)->sub_101e56e0(pEntity);
	else if (m_n784 == 2)
		nFeat = CVFeatSet::Find(2)->sub_101e56e0(pEntity);
	if (m_n790 < nFeat)
		((CSkillSlots272 *)this)->vfunc272();
}
// END FUNCTION

// FUNCTION: 0x1020adc0 size=0xae
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseVampireSkillEntity.h"
#include "CVFeat_t.h"

void CBaseVampireSkillEntity::vfunc42(void *pEntity)
{
	sub_100a5030(pEntity);
	if (m_n784 == 1)
		m_n790 = CVFeatSet::Find(0)->sub_101e56e0(pEntity);
	else if (m_n784 == 2)
		m_n790 = CVFeatSet::Find(2)->sub_101e56e0(pEntity);
}
// END FUNCTION

// FUNCTION: 0x1020b090 size=0xe2
#include "CBaseEntity.h"
#include "CBaseVampireSkillEntity.h"
#include "CUnknown10739d08.h"
#include "COutputEvent.h"

#define SLA(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SLB(p) SLA(p##0) SLA(p##1) SLA(p##2) SLA(p##3) SLA(p##4) SLA(p##5) SLA(p##6) SLA(p##7) SLA(p##8) SLA(p##9)
struct SkillVT1020b090 {
	SLB(a) SLB(b)
	SLA(c0) SLA(c1) SLA(c2) SLA(c3) SLA(c4) SLA(c5)
	virtual void s260(); virtual void s261(); virtual void s262(); virtual void s263(); virtual void s264();
	virtual void s265(); virtual void s266(); virtual void s267(); virtual void s268();
	virtual void v269(CBaseEntity *pPlayer);
	virtual void v270(CBaseEntity *pPlayer);
	virtual void v271(CBaseEntity *pPlayer);
};
struct CMsgPlayerView;
struct PlayerView1020b090 {
	char pad[0xa8];
	CMsgPlayerView *m_pView;
};
extern CUnknown10739d08 g_10739d08;
void sub_101cebc0(CMsgPlayerView *pPlayer, int a, int b);

int *CBaseVampireSkillEntity::vfunc267(int *pOut, CBaseEntity *pPlayer)
{
	m_unk788 = *(int *)&gpGlobals->curtime;
	switch (m_n784) {
	case 1:
		m_n780 = g_10739d08.sub_101e7ea0(pPlayer, this, 0).m_nOutcome;
		break;
	case 2:
		m_n780 = g_10739d08.sub_101e8100(pPlayer, this, 0).m_nOutcome;
		break;
	}
	((COutputEvent *)&m_items794[4])->sub_100cd660(pPlayer, this, 0.0f);
	if (m_n780 >= 3)
		((SkillVT1020b090 *)this)->v270(pPlayer);
	else if (m_n780 == 0) {
		sub_101cebc0(((PlayerView1020b090 *)pPlayer)->m_pView, 2, 0);
		((SkillVT1020b090 *)this)->v269(pPlayer);
	} else
		((SkillVT1020b090 *)this)->v271(pPlayer);
	*pOut = m_n780;
	return pOut;
}
// END FUNCTION

// FUNCTION: 0x1020b1c0 size=0x1a
#include "CBaseEntity.h"
#include "CBaseVampireSkillEntity.h"
#include "UTIL_BloodStream.h"

int CBaseVampireSkillEntity::vfunc268(CBaseEntity *pEntity)
{
	if (g_1070ba0c->vfunc21())
		return m_n77c;
	return m_n77c;
}
// END FUNCTION

// FUNCTION: 0x1020b1f0 size=0x58
#include "CBaseVampireSkillEntity.h"

extern void *g_1074f04c;
extern void (*g_109f3630)(const char *fmt, ...);
extern char g_105addcc[];

struct CUnknownHelper1020b1f0 {
    void sub_10010794(int a, void *owner, int b);
};

struct CUnknownBotch1020b1f0 {
    char m_pad0000[0x2c];
    int m_f2c;
};

struct CUnknownReport1020b1f0 {
    char *sub_1000b5cd();
};

// TARGET: CBaseVampireSkillEntity::vfunc269
void CBaseVampireSkillEntity::vfunc269(int a)
{
    m_unk78c++;
    ((CUnknownHelper1020b1f0 *)((char *)this + 0x7c4))->sub_10010794(a, this, 0);
    char ok = ((char (__fastcall *)(void *))(*(void ***)g_1074f04c)[1])(g_1074f04c);
    if (ok == 0) {
        CUnknownBotch1020b1f0 *o = (CUnknownBotch1020b1f0 *)g_1074f04c;
        if (o->m_f2c != 0) {
            char *s = ((CUnknownReport1020b1f0 *)this)->sub_1000b5cd();
            g_109f3630(g_105addcc, s);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1020b270 size=0x58
#include "CBaseVampireSkillEntity.h"

extern void *g_1074f04c;
extern void (*g_109f3630)(const char *fmt, ...);
extern char g_105addf4[];

struct CUnknownHelper1020b270 {
    void sub_10010794(int a, void *owner, int b);
};

struct CUnknownBotch1020b270 {
    char m_pad0000[0x2c];
    int m_f2c;
};

struct CUnknownReport1020b270 {
    char *sub_1000b5cd();
};

// TARGET: CBaseVampireSkillEntity::vfunc270
void CBaseVampireSkillEntity::vfunc270(int a)
{
    m_unk78c++;
    ((CUnknownHelper1020b270 *)((char *)this + 0x794))->sub_10010794(a, this, 0);
    char ok = ((char (__fastcall *)(void *))(*(void ***)g_1074f04c)[1])(g_1074f04c);
    if (ok == 0) {
        CUnknownBotch1020b270 *o = (CUnknownBotch1020b270 *)g_1074f04c;
        if (o->m_f2c != 0) {
            char *s = ((CUnknownReport1020b270 *)this)->sub_1000b5cd();
            g_109f3630(g_105addf4, s);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1020b2f0 size=0x58
#include "CBaseVampireSkillEntity.h"

extern void *g_1074f04c;
extern void (*g_109f3630)(const char *fmt, ...);
extern char g_105ade1c[];

struct CUnknownHelper1020b2f0 {
    void sub_10010794(int a, void *owner, int b);
};

struct CUnknownBotch1020b2f0 {
    char m_pad0000[0x2c];
    int m_f2c;
};

struct CUnknownReport1020b2f0 {
    char *sub_1000b5cd();
};

// TARGET: CBaseVampireSkillEntity::vfunc271
void CBaseVampireSkillEntity::vfunc271(int a)
{
    m_unk78c++;
    ((CUnknownHelper1020b2f0 *)((char *)this + 0x7ac))->sub_10010794(a, this, 0);
    char ok = ((char (__fastcall *)(void *))(*(void ***)g_1074f04c)[1])(g_1074f04c);
    if (ok == 0) {
        CUnknownBotch1020b2f0 *o = (CUnknownBotch1020b2f0 *)g_1074f04c;
        if (o->m_f2c != 0) {
            char *s = ((CUnknownReport1020b2f0 *)this)->sub_1000b5cd();
            g_109f3630(g_105ade1c, s);
        }
    }
}
// END FUNCTION
