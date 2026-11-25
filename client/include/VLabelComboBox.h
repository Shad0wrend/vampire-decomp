// VLabelComboBox: skeleton from the game's RTTI (pcdecomp gdtors)
// declared: its bases, its destructor, the game's vtable slots it adds or fills (vtable-slot layer, 2026-11-22)
// the destructor is slot 20 of its vtable; the virtual functions before it are not declared yet
#pragma once
#include "vgui2__LabelComboBox.h"

class VLabelComboBox : public vgui2::LabelComboBox
{
public:
	virtual ~VLabelComboBox();
public:	// vtable-slot layer (2026-11-22), from the game's vtables
	// the base slots the game's vtable fills with VLabelComboBox's own function
	virtual int vfunc74(int);
	virtual void vfunc98();
	virtual void vfunc101();
	VLabelComboBox *sub_101763c0(vgui2::Panel *parent, const char *panelName);
	char m_pad0004[0x104 - 0x4];
};
