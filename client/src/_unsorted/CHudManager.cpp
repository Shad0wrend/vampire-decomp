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

// FUNCTION: 0x10057f80 size=0x30
#include "CHudManager.h"
struct IHE { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int v4(); virtual void v5(int); };
struct HNode { IHE *m_p; HNode *m_pNext; };
void CHudManager::vfunc114(int mask)
{
	for (HNode *n = *(HNode **)((char *)this + 0x170); n; n = n->m_pNext) {
		if (mask & n->m_p->v4())
			n->m_p->v5(1);
	}
}
// END FUNCTION

// FUNCTION: 0x10057fb0 size=0x44
#include "CHudManager.h"
void CHudManager::vfunc115(int flags)
{
	for (SHudNode *p = m_pHead; p; p = p->m_pNext)
	{
		if (flags & p->m_pElem->GetFlags())
		{
			if (p->m_pElem->IsHidden())
				p->m_pElem->Show(0);
			else
				p->m_pElem->Show(1);
		}
	}
}
// END FUNCTION

// FUNCTION: 0x10058000 size=0x3b
#include "CHudManager.h"
struct IHudFlagObj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int GetFlags(); virtual void v5(); virtual bool Test(); };
struct CHudNode58 { IHudFlagObj *m_pObj; CHudNode58 *m_pNext; };
// TARGET: CHudManager::vfunc116
bool CHudManager::vfunc116(int flags)
{
	for (CHudNode58 *p = *(CHudNode58 **)((char *)this + 0x170); p; p = p->m_pNext)
	{
		if ((flags & p->m_pObj->GetFlags()) && p->m_pObj->Test())
			return true;
	}
	return false;
}
// END FUNCTION
