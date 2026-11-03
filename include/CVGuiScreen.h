// CVGuiScreen: declared by pcdecomp transplant for 0x102320c0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CVGuiScreen : public CBaseEntity
{
public:
	CVGuiScreen *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	virtual void vfunc103();
	virtual bool vfunc110(const char *key, const char *value);	// slot 110 "CVGuiScreen::KeyValue": "panelname" creates the panel, anything else goes to the base
	void sub_10231f40(const char *pszPanelName);	// creates the panel named pszPanelName through the global factory at 0x1070b23c (slot 3 with 0x10571c20, the name, 0, 0), stores the handle at +0x458 and sets the byte at +0x1b1
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
	char m_pad03e0[0x450 - 0x3e0];
	float m_flWidth;	// 0x0450
	float m_flHeight;	// 0x0454
	int m_nPanelName;	// 0x0458
	int m_nAttachmentIndex;	// 0x045c
	int m_nOverlayMaterial;	// 0x0460
	int m_fScreenFlags;	// 0x0464
};
