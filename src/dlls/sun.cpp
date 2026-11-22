// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 12 blocks
#include "vampire.h"

// FUNCTION: 0x101c2100 size=0x6
#include "CSun.h"
namespace lifted {
extern char g_1072c7fc;
}
int CSun::vfunc80()
{
    return (int)&lifted::g_1072c7fc;
}
// END FUNCTION

// FUNCTION: 0x101c2120 size=0x3
#include "CSun.h"
int CSun::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101c2140 size=0xa
#include "SendTable.h"
SendTable g_1072c81c;
// END FUNCTION

// FUNCTION: 0x101c21c0 size=0x5
int sub_101c2200(void);
int g_1072c818 = ((int (*)(int))sub_101c2200)(0);
// END FUNCTION

// FUNCTION: 0x101c2200 size=0x121
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_10246700(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, int varProxy);	// SendPropVector
void sub_10003012();
void sub_1001303e();

extern SendTable g_1072c81c;

// TARGET: sub_101c2200
int sub_101c2200()
{
	static const char *pTableName = "DT_Sun";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10007bfd("m_clrRender", 0x1a0, 4, 32, 1, 0, (void *)sub_1001303e),
		sub_10246700("m_vDirection", 0x450, 12, 0, 32, 0.0f, -121121.121212f, (int)sub_10003012),
		sub_10007bfd("m_nLayers", 0x45c, 4, 3, 1, 0, 0),
		sub_10007bfd("m_bOn", 0x468, 4, 1, 1, 0, 0),
		sub_10007bfd("m_HorzSize", 0x460, 4, 10, 1, 0, 0),
		sub_10007bfd("m_VertSize", 0x464, 4, 10, 1, 0, 0),
	};
	g_1072c81c.sub_1000e8fe(props + 1, 6, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101c23b0 size=0x43
#include "platform.h"
#include "CSun.h"
void *sub_100aa720(int size);
extern char g_1059c880[];

// TARGET: env_sun
DLL_EXPORT CBaseEntity *env_sun()
{
	void *mem = sub_100aa720(0x46c);
	CSun *p;
	if (mem)
		p = ((CSun *)mem)->sub_101c24b0();
	else
		p = 0;
	p->vfunc106(g_1059c880);
	return p;
}
// END FUNCTION

// FUNCTION: 0x101c2420 size=0x6
#include "CSun.h"
namespace lifted {
extern char g_1059c5b0;
}
datamap_t * CSun::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059c5b0);
}
// END FUNCTION

// FUNCTION: 0x101c2440 size=0x5
int sub_101c2480(void);
int g_1072c7f8 = ((int (*)(int))sub_101c2480)(0);
// END FUNCTION

// FUNCTION: 0x101c2480 size=0x1a
namespace lifted {
extern int g_1059c5b0;
extern int g_1059c5b4;
extern char g_1059c5f4;
}
int sub_101c2480()
{
    lifted::g_1059c5b4 = 8;
    lifted::g_1059c5b0 = (int)&lifted::g_1059c5f4;
    return (int)&lifted::g_1059c5b0;
}
// END FUNCTION

// FUNCTION: 0x101c24b0 size=0x57
#include "CSun.h"
#include "CUnknown101466e0.h"

CSun::CSun() : CBaseEntity(0)
{
	m_vecDir.Init(0.0f, 0.0f, 1.0f);
	CUnknown101466e0 *p = (CUnknown101466e0 *)((char *)this + 0x1b0);
	p->sub_101466e0(1);
	*(int *)((char *)this + 0x468) = 1;
	*(unsigned int *)((char *)this + 0x268) |= 0x80;
}
// END FUNCTION

// FUNCTION: 0x101c2530 size=0x1e
#include "CSun.h"

void sub_100aa7b0(void *p);

// TARGET: CSun::vfunc5
CBaseEntity *CSun::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2560 size=0x7e
#include "CGlobalEntityList.h"
#include "CSun.h"
struct CSunView {
	char m_pad0[0x1b1];
	char m_bFlag1b1;
	char m_pad1[0x20c - 0x1b2];
	const char *m_pszTarget;
};
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

typedef Vector *(__fastcall *GetOriginFn)(void *);
#define GETORIGIN(p) ((*(GetOriginFn **)(p))[220](p))

// TARGET: CSun::vfunc113
void CSun::vfunc113()
{
	CSunView *pView = (CSunView *)this;
	const char *pszName = pView->m_pszTarget;
	if (!pszName)
		pszName = g_106b8540;
	CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pTarget) {
		m_vecDir = *GETORIGIN(this) - *GETORIGIN(pTarget);
		VectorNormalize(m_vecDir);
	}
	pView->m_bFlag1b1 = 1;
}
// END FUNCTION
