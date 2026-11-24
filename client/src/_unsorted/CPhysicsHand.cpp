// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1005f610 size=0x96
#include "CPhysicsHand.h"
int sub_100cd100();
int sub_100cd0f0();
extern bool g_103eedf8;
extern bool g_103eedf9;
// TARGET: ??0CPhysicsHand@@QAE@H@Z
CPhysicsHand::CPhysicsHand(int a)
    : CManagedHudElement(a, (int)"PhysicsHand")
{
    sub_1005f750();
    vfunc63(0);
    sub_101a9890((sub_100cd100() - m_unk178) / 2, (sub_100cd0f0() - m_unk17c) / 2);
    m_b194 = true;
    m_b196 = false;
    m_b195 = false;
    m_n190 = 0xff;
    sub_1005f800();
    g_103eedf8 = false;
    g_103eedf9 = false;
}
// END FUNCTION

// FUNCTION: 0x1005f6e0 size=0x1e
#include "CPhysicsHand.h"

// VC6 writes CPhysicsHand's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CPhysicsHand *pcd_emit_1005f6e0(const CPhysicsHand &other) { return new CPhysicsHand(other); }

// TARGET: ??_GCPhysicsHand@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1005f700 size=0x42
#include "CPhysicsHand.h"
// TARGET: ??1CPhysicsHand@@UAE@XZ
CPhysicsHand::~CPhysicsHand()
{
	sub_101a9ff0(0);
	delete m_pChild1;
	delete m_pChild2;
}
// END FUNCTION

// FUNCTION: 0x1005f8a0 size=0x183
#include "CPhysicsHand.h"
#include "Vector.h"
#include "QAngle.h"

extern bool g_103eedf8;
extern bool g_103eedf9;
extern void sub_101090a0(const QAngle &angles, Vector *forward, Vector *right, Vector *up);

struct ViewSetup_1005f8a0
{
	char pad[0x50];
	QAngle angles;
};

struct ViewRender_1005f8a0
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual void v4();
	virtual void v5();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void v13();
	virtual const ViewSetup_1005f8a0 *v14();
};

extern ViewRender_1005f8a0 *g_102d43d8;

struct CPhysicsHandHelper
{
	void sub_1005f810();
	void sub_101a98c0(int &x, int &y);
};

struct CPhysicsHandSprite
{
	void sub_10059b70(int x, int y, int w, int h, int alpha);
};

// TARGET: CPhysicsHand::vfunc98
void CPhysicsHand::vfunc98()
{
	if (!vfunc107())
		return;

	((CPhysicsHandHelper *)this)->sub_1005f810();

	int x, y;
	((CPhysicsHandHelper *)this)->sub_101a98c0(x, y);

	if (m_b195 && m_n190 < 255)
	{
		m_n190 = (m_n190 + 5 > 255) ? 255 : (m_n190 + 5);
	}
	else if (m_b196 && m_n190 > 0)
	{
		m_n190 = (m_n190 - 5 < 0) ? 0 : (m_n190 - 5);
	}

	if (!g_103eedf8)
		return;

	x += m_unk180;
	y += m_unk184;

	if (!g_103eedf9)
	{
		if (m_pChild1)
		{
			((CPhysicsHandSprite *)m_pChild1)->sub_10059b70(x, y, m_unk178, m_unk17c, (m_n190 * 3) / 4);
		}
		m_unk188 = (int)(m_unk188 * 0.95);
		m_unk18c = (int)(m_unk18c * 0.95);
	}
	else
	{
		const ViewSetup_1005f8a0 *pView = g_102d43d8->v14();
		Vector forward, right, up;
		sub_101090a0(pView->angles, &forward, &right, &up);
		if (m_pChild2)
		{
			((CPhysicsHandSprite *)m_pChild2)->sub_10059b70(x, y, m_unk178, m_unk17c, (m_n190 * 3) / 4);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1005fa30 size=0x1
#include "CPhysicsHand.h"
void CPhysicsHand::vfunc97()
{
}
// END FUNCTION
