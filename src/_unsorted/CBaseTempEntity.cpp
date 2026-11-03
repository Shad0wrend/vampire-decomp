// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
