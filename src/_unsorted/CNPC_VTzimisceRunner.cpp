// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
