// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 13 blocks
#include "vampire.h"

// FUNCTION: 0x10050620 size=0x6
#include "CBaseTempEntity.h"
#include "ServerClass.h"
namespace lifted {
extern char g_106bdca0;
}
ServerClass * CBaseTempEntity::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106bdca0);
}
// END FUNCTION

// FUNCTION: 0x10050640 size=0x3
#include "CBaseTempEntity.h"
int CBaseTempEntity::vfunc1()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10050660 size=0xa
#include "SendTable.h"
SendTable g_106bdcc0;
// END FUNCTION

// FUNCTION: 0x100506e0 size=0x5
int sub_10050720(void);
int g_106bdcbc = ((int (*)(int))sub_10050720)(0);
// END FUNCTION

// FUNCTION: 0x10050720 size=0x59
#include "SendProp.h"
struct CUnknown10247240 { void sub_10247240(int a, int b, int c); };
SendProp sub_10246af0(const char *name, int a, int b, int c, int d, int e, void *f);
extern CUnknown10247240 g_106bdcc0;
extern int g_106bdd34;
extern int g_1053dfac;
int sub_10050720()
{
	static SendProp s_dummy = sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0);
	g_106bdcc0.sub_10247240((int)&g_106bdd34, 0, g_1053dfac);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100507c0 size=0x6
namespace lifted {
extern int g_106bdd3c;
}
int sub_100507c0()
{
    return lifted::g_106bdd3c;
}
// END FUNCTION

// FUNCTION: 0x100507e0 size=0x20
#include "vampire.h"
#include "CBaseTempEntity.h"
extern char g_1044ba10;
extern void *g_106bdd3c;
// TARGET: CBaseTempEntity::CBaseTempEntity
CBaseTempEntity::CBaseTempEntity(const char *name)
{
    *(void **)this = &g_1044ba10;
    *(const char **)((char *)this + 4) = name;
    *(void **)((char *)this + 8) = g_106bdd3c;
    g_106bdd3c = this;
}
// END FUNCTION

// FUNCTION: 0x10050810 size=0x1e
#include "CBaseTempEntity.h"

// TARGET: CBaseTempEntity::vfunc2
CBaseTempEntity *CBaseTempEntity::vfunc2(unsigned int flags)
{
	sub_100021d0();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10050840 size=0x7
namespace lifted {
extern char g_1044ba10;
}
struct CUnknown10050840 { void sub_10050840(); };
void CUnknown10050840::sub_10050840()
{
    *(int *)this = (int)&lifted::g_1044ba10;
}
// END FUNCTION

// FUNCTION: 0x10050860 size=0xd
#include "CUnknown10050860.h"

extern char g_1053e044[];

const char *CUnknown10050860::sub_10050860()
{
	if (m_pszName)
		return m_pszName;
	return g_1053e044;
}
// END FUNCTION

// FUNCTION: 0x10050880 size=0x4
struct CUnknown10050880 { int sub_10050880(); };
int CUnknown10050880::sub_10050880()
{
    return *(int *)((char *)this + 8);
}
// END FUNCTION

// FUNCTION: 0x100508a0 size=0x1
#include "CBaseTempEntity.h"
void CBaseTempEntity::vfunc5()
{
}
// END FUNCTION

// FUNCTION: 0x100508c0 size=0xbd
#include "CBaseTempEntity.h"
#include "CBroadcastRecipientFilter.h"

extern "C" __declspec(dllimport) void Msg(const char *, ...);
void sub_10139610(const QAngle *pAngles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10005ab5(const Vector &start, float flScale, const Vector &direction, Vector &dest);

void CBaseTempEntity::vfunc3(const Vector &origin, const QAngle &angles)
{
	Msg("%s\n", m_pszName);
	Vector forward;
	sub_10139610(&angles, &forward, 0, 0);
	Vector vecEnd;
	sub_10005ab5(origin, 20.0f, forward, vecEnd);
	CBroadcastRecipientFilter filter;
	vfunc4(filter, 0.0f);
}
// END FUNCTION
