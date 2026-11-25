// CHudManager: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CBasePanel.h"

struct SHudElem { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual int GetFlags(); virtual void Show(int); virtual bool IsHidden(); };
struct SHudNode { SHudElem *m_pElem; SHudNode *m_pNext; };
class CHudManager : public CBasePanel
{
public:
	virtual ~CHudManager();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the slots CHudManager adds to its base's vtable: 112-116, vfuncK at slot K
	virtual void vfunc112();
	virtual void vfunc113(int);
	virtual void vfunc114(int);
	virtual void vfunc115(int);
	virtual bool vfunc116(int);
	SHudNode *m_pHead;
	SHudNode *m_pLists174[8];
};
