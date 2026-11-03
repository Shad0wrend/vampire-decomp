// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10190b80 size=0x6
#include "datamap.h"
#include "COrnamentProp.h"
namespace lifted {
extern char g_1058d75c;
}
datamap_t * COrnamentProp::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058d75c);
}
// END FUNCTION

// FUNCTION: 0x10190c80 size=0x6
#include "COrnamentProp.h"
namespace lifted {
extern char g_1072b068;
}
int COrnamentProp::vfunc80()
{
    return (int)&lifted::g_1072b068;
}
// END FUNCTION

// FUNCTION: 0x10190ca0 size=0x3
#include "COrnamentProp.h"
int COrnamentProp::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10190f20 size=0x51
#include "COrnamentProp.h"
extern char g_106b8540[];
__declspec(dllimport) char *Q_strncpy(char *, const char *, int);
void __fastcall sub_10009cc3(COrnamentProp *p);
struct COrnamentPropView { char pad[0x7e0]; char m_szBuf[0x104]; };
void COrnamentProp::vfunc103()
{
    int dummy;
    const char *p = *vfunc9(&dummy);
    if (!p) p = g_106b8540;
    Q_strncpy(((COrnamentPropView *)this)->m_szBuf, p, 0x104);
    sub_10009cc3(this);
    vfunc122("prop_dynamic_ornament");
    sub_10190fa0();
}
// END FUNCTION

// FUNCTION: 0x10191090 size=0x1b
#include "COrnamentProp.h"

// TARGET: COrnamentProp::vfunc113
void COrnamentProp::vfunc113()
{
	if (m_name7dc.IsSet())
		sub_10191130(m_name7dc.String(), this);
}
// END FUNCTION

// FUNCTION: 0x10194490 size=0x57
#include "CCineNPC.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_10194490(unsigned int flags);
};

// TARGET: Helper::sub_10194490
void *Helper::sub_10194490(unsigned int flags)
{
	((CCineNPCSlot *)((char *)this + 0x7ac))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x794))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x77c))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x748))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x730))->sub_10015708();
	((CBaseAnimating *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
