// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100575b0 size=0x1e
#include "CHudManager.h"

// VC6 writes CHudManager's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudManager *pcd_emit_100575b0(const CHudManager &other) { return new CHudManager(other); }

// TARGET: ??_GCHudManager@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10057640 size=0x1
#include "CHudManager.h"
void CHudManager::vfunc112()
{
}
// END FUNCTION

// FUNCTION: 0x10057f50 size=0x30
#include "CHudManager.h"
struct Elem_10057f50 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int v4(); virtual void v5(int); };
struct Node_10057f50 { Elem_10057f50 *m_pElem; Node_10057f50 *m_pNext; };
struct View_10057f50 { char pad[0x170]; Node_10057f50 *m_pHead; };
void CHudManager::vfunc113(int mask)
{
	for (Node_10057f50 *n = ((View_10057f50 *)this)->m_pHead; n; n = n->m_pNext)
	{
		if (mask & n->m_pElem->v4())
			n->m_pElem->v5(0);
	}
}
// END FUNCTION
