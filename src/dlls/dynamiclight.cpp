// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 15 blocks
#include "vampire.h"

// FUNCTION: 0x10056460 size=0x6
#include "datamap.h"
#include "CDynamicLight.h"
namespace lifted {
extern char g_1053f0b0;
}
datamap_t *CDynamicLight::vfunc82()
{
    return (datamap_t *)&lifted::g_1053f0b0;
}
// END FUNCTION

// FUNCTION: 0x10056480 size=0x5
int sub_100564c0(void);
int g_106be160 = ((int (*)(int))sub_100564c0)(0);
// END FUNCTION

// FUNCTION: 0x100564c0 size=0x1a
namespace lifted {
extern int g_1053f0b0;
extern int g_1053f0b4;
extern char g_1053f0f4;
}
int sub_100564c0()
{
    lifted::g_1053f0b4 = 0xd;
    lifted::g_1053f0b0 = (int)&lifted::g_1053f0f4;
    return (int)&lifted::g_1053f0b0;
}
// END FUNCTION

// FUNCTION: 0x100564f0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106bdddc;
extern char g_1053f330[];
ServerClassReg g_106be148("CDynamicLight", &g_106bdddc, g_1053f330);
// END FUNCTION

// FUNCTION: 0x10056560 size=0x6
#include "CDynamicLight.h"
namespace lifted {
extern char g_106be148;
}
int CDynamicLight::vfunc80()
{
    return (int)&lifted::g_106be148;
}
// END FUNCTION

// FUNCTION: 0x10056580 size=0x3
#include "CDynamicLight.h"
int CDynamicLight::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100565a0 size=0xa
#include "SendTable.h"
SendTable g_106bdddc;
// END FUNCTION

// FUNCTION: 0x10056620 size=0x5
int sub_10056660(void);
int g_106bddd8 = ((int (*)(int))sub_10056660)(0);
// END FUNCTION

// FUNCTION: 0x10056660 size=0x192
#include "SendProp.h"

class SendTable
{
public:
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);	// SendTable::Construct (stub 0x1000e8fe)
};

SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int extra, void *proxy);
SendProp sub_10246510(const char *name, int offset, int size, int bits, int flags, float low, float high, void *proxy);
SendProp sub_10246dc0(const char *name, int offset, int pTable, void *proxy);
void sub_10009539();
void sub_10006aeb();
extern SendTable g_106bdddc;
extern const char *g_1053f33c;
extern int g_1055282c;

// TARGET: sub_10056660
int sub_10056660()
{
	static SendProp g_SendProps[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_1055282c, (void *)sub_10009539),
		sub_10246af0("m_Flags", 0x451, 1, 2, 1, 0, 0),
		sub_10246af0("m_LightStyle", 0x452, 1, 4, 1, 0, 0),
		sub_10246510("m_Radius", 0x454, 4, 0, 4, 0.0f, -121121.121121f, (void *)sub_10006aeb),
		sub_10246af0("m_Exponent", 0x458, 4, 8, 0, 0, 0),
		sub_10246510("m_InnerAngle", 0x45c, 4, 8, 0, 0.0f, 360.0f, (void *)sub_10006aeb),
		sub_10246510("m_OuterAngle", 0x460, 4, 8, 0, 0.0f, 360.0f, (void *)sub_10006aeb),
		sub_10246510("m_SpotRadius", 0x464, 4, 0, 4, 0.0f, -121121.121121f, (void *)sub_10006aeb),
		sub_10246af0("m_nAttachment", 0x468, 4, 4, 1, 0, 0),
	};
	g_106bdddc.sub_10247240(g_SendProps + 1, 9, g_1053f33c);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100568a0 size=0x10e
#include "CEntityVSlots.h"
#include "CDynamicLight.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" double atof(const char *);
extern "C" int atoi(const char *);

void sub_101d0630(unsigned char *pColor, const char *pszValue);

bool CDynamicLight::vfunc110(const char *szKeyName, const char *szValue)
{
	if (!_strcmpi(szKeyName, "_light")) {
		sub_101d0630((unsigned char *)&szValue, szValue);
		*((unsigned char *)this + 0x1a0) = ((unsigned char *)&szValue)[0];
		*((unsigned char *)this + 0x1a1) = ((unsigned char *)&szValue)[1];
		*((unsigned char *)this + 0x1a2) = ((unsigned char *)&szValue)[2];
		return true;
	}
	if (!_strcmpi(szKeyName, "pitch")) {
		*(float *)&szValue = (float)atof(szValue);
		if (*(float *)&szValue != 0.0f) {
			CEntityVSlots *pEnt = (CEntityVSlots *)this;
			Vector *pAngles = pEnt->slot219();
			Vector vecAngles = *pAngles;
			vecAngles.x = -*(float *)&szValue;
			pEnt->slot218(&vecAngles);
			return true;
		}
	} else {
		if (!_strcmpi(szKeyName, "spawnflags"))
			*((unsigned char *)this + 0x450) = *((unsigned char *)this + 0x451) = (unsigned char)atoi(szValue);
		else
			return sub_1009e430(szKeyName, szValue);
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10056a00 size=0x16
struct CUnknown10056a00 { char sub_10056a00(int); };
char CUnknown10056a00::sub_10056a00(int a0)
{
    *(char *)((char *)this + 0x453) = 1;
    *(char *)((char *)this + 0x451) = *(char *)((char *)this + 0x450);
    return *(char *)((char *)this + 0x450);
}
// END FUNCTION

// FUNCTION: 0x10056a30 size=0x11
struct CUnknown10056a30 { void sub_10056a30(int); };
void CUnknown10056a30::sub_10056a30(int a0)
{
    *(char *)((char *)this + 0x451) = 3;
    *(char *)((char *)this + 0x453) = 0;
}
// END FUNCTION

// FUNCTION: 0x10056a60 size=0x14
#include "CUnknown10056a00.h"

void CUnknown10056a00::sub_10056a60()
{
	if (m_bFlag453)
		sub_10056a30();
	else
		sub_10056a00();
}
// END FUNCTION

// FUNCTION: 0x10056a90 size=0xaf
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CDynamicLight.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define SL100(p) SL10(p##0) SL10(p##1) SL10(p##2) SL10(p##3) SL10(p##4) SL10(p##5) SL10(p##6) SL10(p##7) SL10(p##8) SL10(p##9)

struct CLightSlots
{
	SL100(a0)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
	virtual void v104();
};

extern char g_1070d1b0[];
extern void sub_101cf390(CDynamicLight *, void *, void *);

void CDynamicLight::vfunc103()
{
	((CLightSlots *)this)->v104();
	{
		const char *pszName = *(const char **)((char *)this + 0x26c);
		ScopeTrace trace("CBaseEntity::SetSolid", pszName ? pszName : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	*((char *)this + 0x453) = 1;
	sub_101cf390(this, g_1070d1b0, g_1070d1b0);
	((CBaseEntity *)this)->sub_100b3b00();
	*(unsigned int *)((char *)this + 0x268) |= 0x80;
}
// END FUNCTION

// FUNCTION: 0x10056b70 size=0x1e
#include "CDynamicLight.h"

void sub_100aa7b0(void *p);

// TARGET: CDynamicLight::vfunc5
CDynamicLight *CDynamicLight::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
