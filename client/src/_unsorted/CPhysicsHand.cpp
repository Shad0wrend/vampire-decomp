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

// FUNCTION: 0x1005fa30 size=0x1
#include "CPhysicsHand.h"
void CPhysicsHand::vfunc97()
{
}
// END FUNCTION
