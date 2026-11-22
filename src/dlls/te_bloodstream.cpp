// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
#include "vampire.h"

// FUNCTION: 0x1005dfb0 size=0x1e
#include "CTEBloodStream.h"

// TARGET: CTEBloodStream::vfunc2
CTEBloodStream *CTEBloodStream::vfunc2(unsigned int flags)
{
	sub_100141d2();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1005dfe0 size=0xb
namespace lifted {
extern char g_1044dd24;
int sub_100021d0();
}
struct CUnknown1005dfe0 { int sub_1005dfe0(); };
int CUnknown1005dfe0::sub_1005dfe0()
{
    *(int *)this = (int)&lifted::g_1044dd24;
    return lifted::sub_100021d0();
}
// END FUNCTION

// FUNCTION: 0x1005e000 size=0x11c
#include "CTEBloodStream.h"
#include "CBroadcastRecipientFilter.h"
#include "CUnknown1070b244.h"

extern CUnknown1070b244 *g_1070b244;
void sub_10139610(const QAngle &angles, Vector *pForward, Vector *pRight, Vector *pUp);
void sub_10139500(const Vector &start, float scale, const Vector &dir, Vector &dest);

struct TVec : public Vector
{
};
TVec sub_101cfd80();

struct S_TESlots
{
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void s3();
	virtual void slot4(CRecipientFilter &filter, float delay);
};

void CTEBloodStream::vfunc3(const Vector &origin, const QAngle &angles)
{
	m_n24 = 0xf7;
	m_n28 = 0;
	m_n2c = 0;
	m_n30 = 0xff;
	m_n34 = g_1070b244->vfunc2(0x32, 0x96);
	Origin() = origin;
	Origin().z += 24.0f;
	Vector forward;
	sub_10139610(angles, &forward, 0, 0);
	forward.z = 0;
	VectorNormalize(forward);
	sub_10139500(Origin(), 50.0f, forward, Origin());
	Direction() = sub_101cfd80();
	CBroadcastRecipientFilter filter;
	((S_TESlots *)this)->slot4(filter, 0);
}
// END FUNCTION

// FUNCTION: 0x1005e170 size=0x39
#include "CTEBloodStream.h"
#include "IVEngineServerFull.h"


void CTEBloodStream::vfunc4(int a, int b)
{
	engine->vfunc103(a, b, this, vfunc0()->m_pTable, vfunc0()->m_ClassID);
}
// END FUNCTION

// FUNCTION: 0x1005e1c0 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_106c0d18;
extern char g_10541cc0[];
ServerClassReg g_106c0cfc("CTEBloodStream", &g_106c0d18, g_10541cc0);
// END FUNCTION

// FUNCTION: 0x1005e230 size=0x6
#include "CTEBloodStream.h"
namespace lifted {
extern char g_106c0cfc;
}
ServerClass * CTEBloodStream::vfunc0()
{
    return (ServerClass *)((int)&lifted::g_106c0cfc);
}
// END FUNCTION

// FUNCTION: 0x1005e250 size=0x3
#include "CTEBloodStream.h"
int CTEBloodStream::vfunc1()
{
    return 0;
}
// END FUNCTION
