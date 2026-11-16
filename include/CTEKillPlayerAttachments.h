// CTEKillPlayerAttachments: kill-player-attachments temp entity (derived from the CBaseTempEntity head at +0x0: its
// constructor calls the head's, then stores its own vptr); only the vtable head is modelled.
#pragma once

#include "CBaseTempEntity.h"

class CTEKillPlayerAttachments : public CBaseTempEntityHead
{
public:
#ifdef PCD_INITIALIZERS	// only the initializer units declare it: elsewhere it moves registers (0x102f9cd0)
	~CTEKillPlayerAttachments();	// function 0x100659e0: the vtable, then the base's destructor body
#endif
	CTEKillPlayerAttachments(const char *name);  // 0x10065980
	virtual ServerClass *vfunc0();	// GetServerClass
	virtual int vfunc1();
	virtual CTEKillPlayerAttachments *vfunc2(unsigned int flags);  // scalar deleting destructor
	virtual void vfunc3(const float *pos, const float *ang);  // "Test": broadcasts the effect to every client (sets the flag at +0xc, then slot 4)
	virtual void vfunc4(void *pFilter, int delay);  // "Create": sends the effect to the recipients of pFilter

	void sub_1000afb0();  // destructor body

	int m_pad0004[2];
	int m_nField0c;  // 0x0c
};
