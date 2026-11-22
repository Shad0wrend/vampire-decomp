// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 10 blocks
#include "vampire.h"

// FUNCTION: 0x10062b30 size=0x6
#include "CTEFootprintDecal.h"
namespace lifted {
extern char g_106c2ffc;
}
ServerClass * CTEFootprintDecal::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c2ffc);
}
// END FUNCTION

// FUNCTION: 0x10062b50 size=0x3
#include "CTEFootprintDecal.h"
int CTEFootprintDecal::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10062b70 size=0xa
#include "SendTable.h"
SendTable g_106c2fe0;
// END FUNCTION

// FUNCTION: 0x10062bf0 size=0x5
int sub_10062c30(void);
int g_106c2fdc = ((int (*)(int))sub_10062c30)(0);
// END FUNCTION

// FUNCTION: 0x10062c30 size=0x11a
#include "SendProp.h"

class SendTable
{
public:
	void sub_1000e8fe(SendProp *pProps, int nProps, const char *pNetTableName);	// Init
};

SendProp sub_10007bfd(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int arg6, void *proxy);	// SendPropInt
SendProp sub_1000bf2d(const char *pVarName, int offset, SendTable *pTable, void *proxy);	// SendPropDataTable
SendProp sub_10246700(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLow, float fHigh, int varProxy);	// SendPropVector
void sub_10009539();
void sub_10003012();

extern SendTable g_106c2fe0;
extern SendTable *g_1053dfa8;

// TARGET: sub_10062c30
int sub_10062c30()
{
	static const char *pTableName = "DT_TEFootprintDecal";
	static SendProp props[] = {
		sub_10007bfd("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_1000bf2d("baseclass", 0, g_1053dfa8, (void *)sub_10009539),
		sub_10246700("m_vecOrigin", 12, 12, -1, 2, 0.0f, -121121.121212f, (int)sub_10003012),
		sub_10246700("m_vecDirection", 24, 12, -1, 2, 0.0f, -121121.121212f, (int)sub_10003012),
		sub_10007bfd("m_nEntity", 0x24, 4, 11, 1, 0, 0),
		sub_10007bfd("m_nIndex", 0x28, 4, 8, 1, 0, 0),
		sub_10007bfd("m_chMaterialType", 0x2c, 1, 8, 1, 0, 0),
	};
	g_106c2fe0.sub_1000e8fe(props + 1, 6, pTableName);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10062dd0 size=0xa
#define PCD_INITIALIZERS
#include "CTEFootprintDecal.h"
CTEFootprintDecal g_106c2fac("Footprint Decal");
// END FUNCTION

// FUNCTION: 0x10062e50 size=0x2e
#include "CTEFootprintDecal.h"

struct CBaseTempEntityHeadUnit {
	void sub_10015334(const char *name);
};

extern void *vt_1044deb4[];

// TARGET: CTEFootprintDecal::sub_10062e50
CTEFootprintDecal *CTEFootprintDecal::sub_10062e50(const char *name)
{
	((CBaseTempEntityHeadUnit *)this)->sub_10015334(name);
	*(void ***)this = vt_1044deb4;
	int *p = (int *)((char *)this + 0xc);
	p[0] = 0;
	p[1] = 0;
	p[2] = 0;
	p[6] = 0;
	p[7] = 0;
	*(char *)((char *)this + 0x2c) = 0x43;
	return this;
}
// END FUNCTION

// FUNCTION: 0x10062e90 size=0x1e
#include "CTEFootprintDecal.h"

// TARGET: CTEFootprintDecal::vfunc2
CBaseTempEntity *CTEFootprintDecal::vfunc2(unsigned int flags)
{
	sub_100059d4();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10062ec0 size=0xb
namespace lifted {
extern char g_1044deb4;
int sub_100021d0();
}
struct CUnknown10062ec0 { int sub_10062ec0(); };
int CUnknown10062ec0::sub_10062ec0()
{
    *(int *)this = (int)&lifted::g_1044deb4;
    return lifted::sub_100021d0();
}
// END FUNCTION

// FUNCTION: 0x10062ee0 size=0x39
#include "CTEFootprintDecal.h"
#include "IVEngineServerFull.h"


void CTEFootprintDecal::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION
