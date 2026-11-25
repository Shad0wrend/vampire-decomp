// CHudDialog: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "CManagedHudElement.h"

class CHudDialog : public CManagedHudElement
{
public:
	virtual ~CHudDialog();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with CHudDialog's own function
	virtual void vfunc97();
	virtual void vfunc98();
	virtual bool vfunc107();
	virtual void vfunc112();
	// the slots CHudDialog adds to its base's vtable: 114-116, vfuncK at slot K
	virtual void vfunc114();
	virtual void vfunc115(int, int, int);
	virtual bool vfunc116();
	void sub_10054450(bool);
	int sub_10055650();
	int sub_10053f10(int flags, int n);
	int sub_10061450(int, int, int);
	void SetDrawLastPickEnabled(bool bEnabled);
	void ScrollDn();
	void ScrollUp();
	void sub_100544d0(bool bEnabled);
	void sub_10054bd0(bool bEnabled);
	char m_pad0008[0x5a84 - 0x8];
};
