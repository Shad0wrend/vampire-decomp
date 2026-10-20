// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b6e90 size=0xe1
#include "CNPC_VNewscaster.h"
#include "CNPC_VTzimisce.h"

void sub_100aa7b0(void *p);

CNPC_VTzimisce *CNPC_VTzimisce::vfunc5(unsigned int flags)
{
	((CNewscasterList *)((char *)this + 0x6690))->Destruct();
	((CNewscasterList *)((char *)this + 0x665c))->Destruct();
	sub_1028d610();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b70f0 size=0x1d
#include "CNPC_VTzimisce.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093ccc4;
extern B g_10936c74;
int CNPC_VTzimisce::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093ccc4.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b92a0 size=0x8f
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_101aeb60(int, const char *, float, int, int, int);

// TARGET: CNPC_VTzimisce::vfunc488
void CNPC_VTzimisce::vfunc488()
{
    int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
    int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
    float c = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
    sub_101aeb60(m_n02e0, "SPI_DIES", c, b, 0, a);
    v487();
}
// END FUNCTION

// FUNCTION: 0x103b9380 size=0x8f
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int ent, const char *anim, float a, int b, int c, int d);
void CNPC_VTzimisce::vfunc490()
{
	if (vfunc486()) {
		int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
		int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
		float c = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
		sub_10002414(m_n02e0, "SPI_IDLE", c, b, 0, a);
	}
}
// END FUNCTION

// FUNCTION: 0x103b9440 size=0x8f
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int ent, const char *anim, float a, int b, int c, int d);
void CNPC_VTzimisce::vfunc618()
{
	if (vfunc486()) {
		int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
		int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
		float c = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
		sub_10002414(m_n02e0, "SPI_FIDGET", c, b, 0, a);
	}
}
// END FUNCTION

// FUNCTION: 0x103b9980 size=0x92
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc621()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_ATTACK_HIT", c, b, 0, a);
	sub_103b9f90(2, 0.5f);
}
// END FUNCTION

// FUNCTION: 0x103b9a50 size=0x92
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc622()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_ATTACK_HIT_MASSIVE", c, b, 0, a);
	sub_103b9f90(2, 0.5f);
}
// END FUNCTION

// FUNCTION: 0x103b9b20 size=0x84
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc623()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_RUNNING", c, b, 0, a);
}
// END FUNCTION

// FUNCTION: 0x103b9be0 size=0x84
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc624()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_LAND_HARD", c, b, 0, a);
}
// END FUNCTION

// FUNCTION: 0x103b9ca0 size=0x84
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc625()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_JUMP_ATTACK", c, b, 0, a);
}
// END FUNCTION

// FUNCTION: 0x103b9d60 size=0x92
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int, const char *, float, int, int, int);

void CNPC_VTzimisce::vfunc626()
{
	int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
	int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
	float c = g_1093cebc->vfunc1() ? 0 : g_1093cebc->m_f28;
	sub_10002414(m_n02e0, "SPI_AGGRO", c, b, 0, a);
	sub_103b9f90(2, 2.0f);
}
// END FUNCTION

// FUNCTION: 0x103b9e30 size=0x8f
#include "CNPC_VTzimisce.h"
extern CNPC_VTzimisceConVar *g_1093cf94;
extern CNPC_VTzimisceConVar *g_1093cfdc;
extern CNPC_VTzimisceConVar *g_1093cebc;
void sub_10002414(int ent, const char *anim, float a, int b, int c, int d);
void CNPC_VTzimisce::vfunc627()
{
	if (vfunc486()) {
		int a = g_1093cf94->vfunc1() ? 0 : g_1093cf94->m_n2c;
		int b = g_1093cfdc->vfunc1() ? 0 : g_1093cfdc->m_n2c;
		float c = g_1093cebc->vfunc1() ? 0.0f : g_1093cebc->m_f28;
		sub_10002414(m_n02e0, "SPI_FIDGET", c, b, 0, a);
	}
}
// END FUNCTION

// FUNCTION: 0x103bde40 size=0x66
#include "CNPC_VTzimisce.h"
#include "CAI_BaseNPCTroika.h"
#include "CUnknown10381be0.h"

int CNPC_VTzimisce::sub_103bde40(int activity)
{
    if (((CUnknown10381be0 *)this)->sub_103be130()) {
        if (*(char *)((char *)this + 0x6688)) {
            switch (activity) {
            case 1:
                return 0xfc;
            case 9:
            case 0x13:
                return 0xfe;
            }
        } else {
            switch (activity) {
            case 1:
                return 0xfd;
            case 9:
            case 0x13:
                return 0xff;
            }
        }
    }
    return ((CAI_BaseNPCTroika *)this)->sub_10295590(activity);
}
// END FUNCTION

// FUNCTION: 0x103bf580 size=0x70
#include "CNPC_VTzimisce.h"

struct SEnt { int pad; };
struct SHandleEntry { SEnt *p; unsigned serial; int pad; };
struct SEntList { int pad; SHandleEntry e[1]; };
extern SEntList *g_10566458;

void *CNPC_VTzimisce::sub_103bf580(void *pDefault)
{
    switch (m_state) {
    case 1:
        if (vfunc167())
            return vfunc167()->vfunc220();
        break;
    case 2:
        break;
    default:
        return pDefault;
    }
    unsigned h = m_hTarget;
    if (h != 0xffffffff) {
        SHandleEntry *he = &g_10566458->e[h & 0x1fff];
        if (he->serial == (h >> 13) && he->p != 0)
            return m_posBuf;
    }
    return pDefault;
}
// END FUNCTION

// FUNCTION: 0x103bfa00 size=0x18
#include "CNPC_VTzimisce.h"

char CNPC_VTzimisce::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION
