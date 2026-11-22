// CDebugOverlayPanel: skeleton from the game's RTTI (vtable-slot skeletons, 2026-11-22)
// declared: its bases, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22) (its vtable has no deleting destructor: no virtual destructor)
#pragma once
#include "IDebugOverlayPanel.h"

class CDebugOverlayPanel : public IDebugOverlayPanel
{
public:	// vtable-slot layer (2026-11-22), from the game's vtables
    // the slots CDebugOverlayPanel adds to its base's vtable: 0-1, vfuncK at slot K
    virtual void vfunc0();
    virtual void vfunc1();
};
