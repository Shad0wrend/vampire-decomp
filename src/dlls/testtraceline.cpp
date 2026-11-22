// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 13 blocks
#include "vampire.h"

// FUNCTION: 0x1006b6a0 size=0x6
#include "CTestTraceline.h"
namespace lifted {
extern char g_106c7af0;
}
int CTestTraceline::vfunc80()
{
    return (int)&lifted::g_106c7af0;
}
// END FUNCTION

// FUNCTION: 0x1006b6c0 size=0x3
#include "CTestTraceline.h"
int CTestTraceline::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1006b6e0 size=0xa
#include "SendTable.h"
SendTable g_106c7b10;
// END FUNCTION

// FUNCTION: 0x1006b760 size=0x5
int sub_1006b7a0(void);
int g_106c7b0c = ((int (*)(int))sub_1006b7a0)(0);
// END FUNCTION

// FUNCTION: 0x1006b7a0 size=0x1da
#include "SendProp.h"

class SendTable
{
public:
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);	// SendTable::Construct (stub 0x1000e8fe)
};

SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int extra, void *proxy);
SendProp sub_10246510(const char *name, int offset, int size, int bits, int flags, float low, float high, void *proxy);
void sub_10006aeb();
extern SendTable g_106c7b10;
extern const char *g_10545fc4;

// TARGET: sub_1006b7a0
int sub_1006b7a0()
{
	static SendProp g_SendProps[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246af0("m_clrRender.r", 0x1a0, 1, 8, 1, 0, 0),
		sub_10246af0("m_clrRender.g", 0x1a1, 1, 8, 1, 0, 0),
		sub_10246af0("m_clrRender.b", 0x1a2, 1, 8, 1, 0, 0),
		sub_10246af0("m_clrRender.a", 0x1a3, 1, 8, 1, 0, 0),
		sub_10246510("m_vecAbsOrigin[0]", 0x404, 4, 0x13, 0, -16384.0f, 16384.0f, (void *)sub_10006aeb),
		sub_10246510("m_vecAbsOrigin[1]", 0x408, 4, 0x13, 0, -16384.0f, 16384.0f, (void *)sub_10006aeb),
		sub_10246510("m_vecAbsOrigin[2]", 0x40c, 4, 0x13, 0, -16384.0f, 16384.0f, (void *)sub_10006aeb),
		sub_10246510("m_angAbsRotation[0]", 0x410, 4, 0x13, 0, -16384.0f, 16384.0f, (void *)sub_10006aeb),
		sub_10246510("m_angAbsRotation[1]", 0x414, 4, 0x13, 0, -16384.0f, 16384.0f, (void *)sub_10006aeb),
		sub_10246510("m_angAbsRotation[2]", 0x418, 4, 0x13, 0, -16384.0f, 16384.0f, (void *)sub_10006aeb),
	};
	g_106c7b10.sub_10247240(g_SendProps + 1, 10, g_10545fc4);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x1006ba30 size=0x4b
#include "platform.h"
#include "CConstraintAnchor.h"
#include "CBaseEntity.h"
void *sub_100aa720(unsigned int size);
extern char g_1044e1cc[];	// CTestTraceline vftable
extern const char g_105461c8[];

// TARGET: test_traceline
DLL_EXPORT CBaseEntity *test_traceline()
{
	void *mem = sub_100aa720(0x450);
	CBaseEntity *p;
	if (mem) {
		((CConstraintAnchorBase *)mem)->sub_1009d980(0);
		*(void **)mem = g_1044e1cc;
		p = (CBaseEntity *)mem;
	} else {
		p = 0;
	}
	p->vfunc106(g_105461c8);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1006baa0 size=0x6
#include "datamap.h"
#include "CTestTraceline.h"
namespace lifted {
extern char g_10545fc8;
}
datamap_t *CTestTraceline::vfunc82()
{
    return (datamap_t *)&lifted::g_10545fc8;
}
// END FUNCTION

// FUNCTION: 0x1006bac0 size=0x5
int sub_1006bb00(void);
int g_106c7700 = ((int (*)(int))sub_1006bb00)(0);
// END FUNCTION

// FUNCTION: 0x1006bb00 size=0x1a
namespace lifted {
extern int g_10545fc8;
extern int g_10545fcc;
extern char g_1054600c;
}
int sub_1006bb00()
{
    lifted::g_10545fcc = 1;
    lifted::g_10545fc8 = (int)&lifted::g_1054600c;
    return (int)&lifted::g_10545fc8;
}
// END FUNCTION

// FUNCTION: 0x1006bb30 size=0x3d
#include "vampire.h"
#include "CTestTraceline.h"

void sub_10003f62();

// TARGET: CTestTraceline::vfunc103
void CTestTraceline::vfunc103()
{
    unsigned char bColor = 0xff;
    *((unsigned char *)this + 0x1a3) = bColor;
    *((unsigned char *)this + 0x1a2) = bColor;
    *((unsigned char *)this + 0x1a1) = bColor;
    *((unsigned char *)this + 0x1a0) = bColor;
    *(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.01;
    sub_100ac4e0((void *)sub_10003f62, 0, 0);
}
// END FUNCTION

// FUNCTION: 0x1006bb80 size=0xe6
#include <math.h>
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "ConVar.h"


struct CTraceSpinEntity : CBaseEntity
{
	void sub_1006bb80();
};

// TARGET: CTraceSpinEntity::sub_1006bb80
void CTraceSpinEntity::sub_1006bb80()
{
	static ConVar traceline_spin("traceline_spin", "1", 0);
	if (traceline_spin.GetBool())
	{
		float s = sin(gpGlobals->curtime);
		Vector ang = *(Vector *)((CEntityVSlots *)this)->slot221();
		ang.x = (s * s * s + 1.0f + 1.0) * 90.0;
		ang.y = gpGlobals->curtime * 10.0f;
		vfunc64(&ang.x);
	}
	m_flNextThink = gpGlobals->curtime + 0.01;
}
// END FUNCTION

// FUNCTION: 0x1006bcd0 size=0x5
#include "CTestTraceline.h"
bool CTestTraceline::vfunc86(int a0, int a1, int a2, int a3, int a4)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x1006bcf0 size=0x1e
#include "CTestTraceline.h"

void sub_100aa7b0(void *p);

// TARGET: CTestTraceline::vfunc5
CTestTraceline *CTestTraceline::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
