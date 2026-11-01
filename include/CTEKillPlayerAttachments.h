// CTEKillPlayerAttachments: kill-player-attachments temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEKillPlayerAttachments
{
public:
	CTEKillPlayerAttachments(const char *name);  // 0x10065980
	virtual int vfunc0();
	virtual int vfunc1();
	virtual CTEKillPlayerAttachments *vfunc2(unsigned int flags);	// scalar deleting destructor
	virtual void vfunc3(const float *pos, const float *ang);	// "Test": broadcasts the effect to every client (sets the flag at +0xc, then slot 4)
	virtual void vfunc4(void *pFilter, int delay);	// "Create": sends the effect to the recipients of pFilter

	void sub_1000afb0();	// destructor body

	int m_pad0004[2];
	int m_nField0c;	// 0x0c
};
