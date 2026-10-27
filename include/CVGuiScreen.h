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
	void sub_10231f40(const char *pszPanelName);	// creates the panel named pszPanelName through the global factory at 0x1070b23c (slot 3 with 0x10571c20, the name, 0, 0), stores the handle at +0x458 and sets the byte at +0x1b1
public:
    virtual datamap_t * vfunc82();
};
