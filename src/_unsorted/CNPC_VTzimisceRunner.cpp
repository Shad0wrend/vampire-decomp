// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c28a0 size=0x6
#include "CNPC_VTzimisceRunner.h"
namespace lifted {
extern char g_1065d6ac;
}
CNPC_VTzimisceRunner::Datamap82 CNPC_VTzimisceRunner::vfunc82()
{
    return (CNPC_VTzimisceRunner::Datamap82)&lifted::g_1065d6ac;
}
// END FUNCTION

// FUNCTION: 0x103c2a00 size=0x6
extern unsigned char g_1065d74c;
// TARGET: sub_103c2a00
unsigned char sub_103c2a00()
{
    return g_1065d74c;
}
// END FUNCTION

// FUNCTION: 0x103c2a60 size=0x1d
#include "CNPC_VTzimisceRunner.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d224;
extern B g_10936c74;
int CNPC_VTzimisceRunner::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d224.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103c3040 size=0x3
#include "CNPC_VTzimisceRunner.h"
bool CNPC_VTzimisceRunner::vfunc399()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103c3060 size=0x3
#include "CNPC_VTzimisceRunner.h"
bool CNPC_VTzimisceRunner::vfunc400()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103c3080 size=0x3
#include "CNPC_VTzimisceRunner.h"
bool CNPC_VTzimisceRunner::vfunc325()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103c30a0 size=0x3
#include "CNPC_VTzimisceRunner.h"
bool CNPC_VTzimisceRunner::vfunc324()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103c30c0 size=0x3
#include "CNPC_VTzimisceRunner.h"
bool CNPC_VTzimisceRunner::vfunc329()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103c30e0 size=0x6
#include "CNPC_VTzimisceRunner.h"
namespace lifted {
extern char g_1093d1d8;
}
int CNPC_VTzimisceRunner::vfunc580()
{
    return (int)&lifted::g_1093d1d8;
}
// END FUNCTION

// FUNCTION: 0x103c3100 size=0x6
#include "CNPC_VTzimisceRunner.h"
namespace lifted {
extern int g_1065d754;
}
int CNPC_VTzimisceRunner::vfunc451()
{
    return lifted::g_1065d754;
}
// END FUNCTION

// FUNCTION: 0x103c3120 size=0x86
#include "CNPC_VTzimisceRunner.h"
#include "utlvector.h"

void sub_100aa7b0(void *pEntity);

CNPC_VTzimisceRunner *CNPC_VTzimisceRunner::vfunc5(unsigned int flags)
{
	((CUtlVector<int> *)((char *)this + 0x665c))->~CUtlVector<int>();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103c31e0 size=0x89
#include "CNPC_VTzimisceRunner.h"
struct CRunnerSoundSystem { virtual void vfunc0(const char *pszSound, int bPreload); };
extern CRunnerSoundSystem *g_1070b248;
extern const char *g_1065d680[2];
extern const char *g_1065d688[2];
extern const char *g_1065d690[4];
extern const char *g_1065d6a0[3];
extern char g_1065deb0[];
void sub_101d0ec0(const char *pszWeapon);
void CNPC_VTzimisceRunner::vfunc104()
{
	sub_100097b4();
	for (int i = 0; i < sizeof(g_1065d680) / sizeof(g_1065d680[0]); i++)
		g_1070b248->vfunc0(g_1065d680[i], 0);
	for (int j = 0; j < sizeof(g_1065d688) / sizeof(g_1065d688[0]); j++)
		g_1070b248->vfunc0(g_1065d688[j], 0);
	for (int k = 0; k < sizeof(g_1065d690) / sizeof(g_1065d690[0]); k++)
		g_1070b248->vfunc0(g_1065d690[k], 0);
	for (int l = 0; l < sizeof(g_1065d6a0) / sizeof(g_1065d6a0[0]); l++)
		g_1070b248->vfunc0(g_1065d6a0[l], 0);
	sub_101d0ec0(g_1065deb0);
}
// END FUNCTION

// FUNCTION: 0x103c32a0 size=0x3
#include "CNPC_VTzimisceRunner.h"
bool CNPC_VTzimisceRunner::vfunc70()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103c35a0 size=0x1c
#include "CNPC_VTzimisceRunner.h"

// TARGET: CNPC_VTzimisceRunner::vfunc433
void CNPC_VTzimisceRunner::vfunc433()
{
	sub_102b27f0();
	sub_10269b50(0xf);
	sub_10269b50(0xe);
}
// END FUNCTION

// FUNCTION: 0x103c3870 size=0xc0
#include "CNPC_VTzimisceRunner.h"
#include "CAI_Motor.h"
#include "CEntityVSlots.h"

void __fastcall sub_102e0b40(float *pMotor);

// TARGET: CNPC_VTzimisceRunner::vfunc444
void CNPC_VTzimisceRunner::vfunc444(int *pTask)
{
	if (*pTask < 0x122 || *pTask > 0x124) {
		sub_102aacf0(pTask);
		return;
	}
	sub_10280a50();
	if (((CEntityVSlots *)this)->slot167()) {
		sub_102e0b40((float *)m_pMotor);
		Vector vecPos = *((CEntityVSlots *)((CEntityVSlots *)this)->slot167())->slot217();
		m_pMotor->sub_102e20b0(&vecPos.x, -1.0f);
	}
	if (gpGlobals->curtime >= m_flTime5db4) {
		m_n63ec = 0;
		sub_10273e80(0);
	}
}
// END FUNCTION

// FUNCTION: 0x103c3960 size=0x58
#include "CNPC_VTzimisceRunner.h"

struct HandleEnt_ { virtual void f0(); virtual unsigned long *GetRefEHandle(); };
struct Unk65e8_ { bool sub_10008b98(void *p); };
struct Unk924edc_ { virtual void f0(); virtual void f1(); };
extern Unk924edc_ *g_10924edc;

bool CNPC_VTzimisceRunner::vfunc599(void *pEntity)
{
	HandleEnt_ *e = (HandleEnt_ *)pEntity;
	if (e)
		*(unsigned long *)((char *)this + 0x6678) = *e->GetRefEHandle();
	else
		*(unsigned long *)((char *)this + 0x6678) = 0xffffffff;
	if ((*(Unk65e8_ **)((char *)this + 0x65e8))->sub_10008b98(this))
	{
		g_10924edc->f1();
		*((bool *)this + 0x6078) = true;
		return true;
	}
	*((bool *)this + 0x6078) = false;
	return false;
}
// END FUNCTION

// FUNCTION: 0x103c39e0 size=0x64
#include "CNPC_VTzimisceRunner.h"

struct GlobalObj
{
	virtual void a0();
	virtual void a1();
};
extern GlobalObj *g_10924edc;

struct HandleEnt
{
	virtual void a0();
	virtual unsigned int *GetRefEHandle();
};

struct BehaviourObj
{
	bool sub_10015564(void *npc, int a);
};

// TARGET: CNPC_VTzimisceRunner::vfunc600
bool CNPC_VTzimisceRunner::vfunc600(void *pEntity)
{
	g_10924edc->a1();
	if (pEntity)
		*(unsigned int *)((char *)this + 0x6678) = *((HandleEnt *)pEntity)->GetRefEHandle();
	else
		*(unsigned int *)((char *)this + 0x6678) = 0xffffffff;
	if (!*((char *)this + 0x6078) && (*(BehaviourObj **)((char *)this + 0x65e8))->sub_10015564(this, 0))
	{
		*((char *)this + 0x6078) = 1;
		return true;
	}
	*((char *)this + 0x6078) = 0;
	return false;
}
// END FUNCTION

// FUNCTION: 0x103c3a70 size=0x2f
#include "CNPC_VTzimisceRunner.h"
#include "CUnknown1025ddd0.h"

struct CUnknown10924edcView
{
	virtual void vfunc0();
	virtual void vfunc1();
};

extern CUnknown10924edcView *g_10924edc;

// TARGET: CNPC_VTzimisceRunner::vfunc601
void CNPC_VTzimisceRunner::vfunc601(int unused)
{
	g_10924edc->vfunc1();
	((EHANDLE *)&m_h6678)->Set((CBaseEntity *)0);
	m_b6078 = 0;
	m_pBehaviour65e8->sub_1025ddd0(this);
}
// END FUNCTION

// FUNCTION: 0x103c3c40 size=0x44
#include "CNPC_VTzimisceRunner.h"
// TARGET: CNPC_VTzimisceRunner::vfunc130
void CNPC_VTzimisceRunner::vfunc130(int a)
{
	sub_102998c0(a);
	float size[3];
	size[0] = 50.0f;
	size[1] = 50.0f;
	size[2] = 82.0f;
	sub_1009b060(size);
	sub_100b3900(4);
}
// END FUNCTION

// FUNCTION: 0x103c3cb0 size=0x9
int sub_1000be92();

// TARGET: sub_103c3cb0
int sub_103c3cb0()
{
    return sub_1000be92() | 0x2000;
}
// END FUNCTION

// FUNCTION: 0x103c3cd0 size=0x30
#include "CNPC_VTzimisceRunner.h"
#include "CAI_BaseNPC.h"

void CNPC_VTzimisceRunner::vfunc335()
{
	((CAI_BaseNPC *)this)->sub_10273180(1);
	m_b6672 = 1;
	m_b5f2c = 0;
	m_f6674 = engine->vfunc119(0);
}
// END FUNCTION

// FUNCTION: 0x103c3d10 size=0x47
#include "CNPC_VTzimisceRunner.h"
#include "engineserver.h"
void CNPC_VTzimisceRunner::vfunc336()
{
    if (m_f6674 != engine->vfunc119(0)) {
        sub_10273070(1);
        m_b6672 = 0;
        m_b5f2c = 1;
    }
}
// END FUNCTION

// FUNCTION: 0x103c3d80 size=0x6e
#include "CNPC_VTzimisceRunner.h"
int CNPC_VTzimisceRunner::vfunc310(int act)
{
    if (*((char *)this + 0x6672)) {
        if (act == 1)
            return sub_10295750(0x1134);
        if (act == 9)
            return sub_10295750(0x1136);
        if (act == 0x13)
            return sub_10295750(0x1137);
        if (act == 3)
            return sub_10295750(0x1135);
        if (act == 0xf1)
            return sub_10295750(0x1134);
    }
    return sub_10295750(act);
}
// END FUNCTION

// FUNCTION: 0x103c3e10 size=0x159
#include "CAI_BaseNPCTroika.h"

struct TzimisceView : public CAI_BaseNPCTroika
{
    char m_pad65c0[0x6672 - 0x65c0];
    char m_b6672;	// 0x6672
    int sub_103c3e10(int activity);
};

int TzimisceView::sub_103c3e10(int activity)
{
    int act = sub_10295590(activity);
    if (m_b6672) {
        switch (act) {
        case 9:
            return 0x1136;
        case 0x13:
            return 0x1137;
        case 3:
            return 0x1135;
        case 1:
        case 0xf1:
            return 0x1134;
        }
    }
    return act;
}
// END FUNCTION

// FUNCTION: 0x103c3fd0 size=0x8
#include "CNPC_VTzimisceRunner.h"
namespace lifted {
int __stdcall sub_10014524(int);
}
int CNPC_VTzimisceRunner::vfunc588()
{
    return lifted::sub_10014524(1);
}
// END FUNCTION

// FUNCTION: 0x103c3ff0 size=0x120
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "CNPC_VTzimisceRunner.h"
#include "CUnknown1070b244.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b244 *g_1070b244;
extern CUnknown1070b248 *g_1070b248;
extern const char *g_1065d6a0[];

void CNPC_VTzimisceRunner::vfunc618()
{
	CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
	filter.MakeReliable();
	int edict = *(int *)((char *)this + 0x2e0);
	int idx = engine->vfunc35(edict);
	g_1070b248->vfunc3(&filter, idx, 4, g_1065d6a0[g_1070b244->vfunc2(0, 2)], 1.0f, 0.8f, 0, 100, 0, 0, 1, 0);
}
// END FUNCTION

// FUNCTION: 0x103c43f0 size=0xd
// TARGET: CNPC_VTzimisceRunner::vfunc320
#include "CNPC_VTzimisceRunner.h"
#include "CAI_BaseNPCTroika.h"

char CNPC_VTzimisceRunner::vfunc320(int a, int b)
{
    return ((CAI_BaseNPCTroika *)this)->CAI_BaseNPCTroika::vfunc320(a, 0x79);
}
// END FUNCTION
