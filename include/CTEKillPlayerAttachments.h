// CTEKillPlayerAttachments: kill-player-attachments temp entity. Declared flat (bases not recovered); only the vtable head is modelled.
#pragma once

class CTEKillPlayerAttachments
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual CTEKillPlayerAttachments *vfunc2(unsigned int flags);	// scalar deleting destructor

	void sub_1000afb0();	// destructor body
};
