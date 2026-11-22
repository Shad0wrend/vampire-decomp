// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 12 blocks
#include "vampire.h"

// FUNCTION: 0x100f50e0 size=0x6
#include "CEntityFlame.h"
namespace lifted {
extern char g_10565b94;
}
datamap_t * CEntityFlame::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10565b94);
}
// END FUNCTION

// FUNCTION: 0x100f5100 size=0x5
int sub_100f5140(void);
int g_106eb534 = ((int (*)(int))sub_100f5140)(0);
// END FUNCTION

// FUNCTION: 0x100f5140 size=0x1a
namespace lifted {
extern int g_10565b94;
extern int g_10565b98;
extern char g_10565bdc;
}
int sub_100f5140()
{
    lifted::g_10565b98 = 2;
    lifted::g_10565b94 = (int)&lifted::g_10565bdc;
    return (int)&lifted::g_10565b94;
}
// END FUNCTION

// FUNCTION: 0x100f5170 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106eb3fc;
extern char g_10565c34[];
ServerClassReg g_106eb41c("CEntityFlame", &g_106eb3fc, g_10565c34);
// END FUNCTION

// FUNCTION: 0x100f51e0 size=0x6
#include "CEntityFlame.h"
namespace lifted {
extern char g_106eb41c;
}
int CEntityFlame::vfunc80()
{
    return (int)&lifted::g_106eb41c;
}
// END FUNCTION

// FUNCTION: 0x100f5200 size=0x3
#include "CEntityFlame.h"
int CEntityFlame::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100f5220 size=0xa
#include "SendTable.h"
SendTable g_106eb3fc;
// END FUNCTION

// FUNCTION: 0x100f52a0 size=0x5
int sub_100f52e0(void);
int g_106eb3f8 = ((int (*)(int))sub_100f52e0)(0);
// END FUNCTION

// FUNCTION: 0x100f52e0 size=0x9b
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);	// SendPropDataTable
SendProp sub_10006cc1(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLowValue, float fHighValue, void *proxy);	// SendPropVector
void sub_10009539();
void sub_10006aeb();

extern SendTable g_106eb3fc;
extern SendTable *g_1055282c;

// TARGET: sub_100f52e0
int sub_100f52e0()
{
	static const char *pTableName = "DT_EntityFlame";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1055282c, (void *)sub_10009539),
		sub_10006cc1("m_flSize", 0x450, 0x4, 0x10, 4, 0.0f, -121121.121121f, (void *)sub_10006aeb),
	};
	g_106eb3fc.sub_1000e8fe(props + 1, 2, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100f53e0 size=0x43
#include "platform.h"
#include "CEntityFlame.h"
void *sub_100aa720(int size);
extern char g_105660a0[];

// TARGET: entityflame
DLL_EXPORT CBaseEntity *entityflame()
{
	void *mem = sub_100aa720(0x458);
	CEntityFlame *p;
	if (mem)
		p = ((CEntityFlame *)mem)->sub_100f5450();
	else
		p = 0;
	p->vfunc106(g_105660a0);
	return p;
}
// END FUNCTION

// FUNCTION: 0x100f5450 size=0x28
#include "CEntityFlame.h"

extern int vt_104554f4[];

struct CConstraintAnchorBaseStub {
	void sub_100090fc(int a);
};

// TARGET: CEntityFlame::sub_100f5450
CEntityFlame *CEntityFlame::sub_100f5450()
{
	((CConstraintAnchorBaseStub *)this)->sub_100090fc(0);
	*(int **)this = vt_104554f4;
	*(int *)((char *)this + 0x450) = 0;
	*(int *)((char *)this + 0x454) = 0;
	return this;
}
// END FUNCTION

// FUNCTION: 0x100f5490 size=0x1e
#include "CEntityFlame.h"

void sub_100aa7b0(void *p);

// TARGET: CEntityFlame::vfunc5
CBaseEntity *CEntityFlame::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
