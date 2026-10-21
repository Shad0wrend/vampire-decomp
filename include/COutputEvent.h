// COutputEvent: an entity output (OnStartTouch etc.), 0x18 bytes; only its constructor, Fire and Restore are known.
// The constructor is the stub at 0x10002ddd (function 0x100cd2a0).
#pragma once

#include "CVariantCopy.h"

class CRestore;

class COutputEvent
{
public:
	COutputEvent();

	void sub_100cd660(void *pActivator, void *pCaller, float flDelay);	// "COutputEvent::FireOutput" (stub 0x10010794)
	void sub_100cd300(CVariantCopy value, void *pActivator, void *pCaller, float flDelay);	// "COutputEvent::FireOutput" with an explicit value (stub 0x10004f75)
	int sub_100cd870(CRestore *pRestore, int nElements);	// restores the output: the "Value" block, then nElements "EntityOutput" actions pushed onto the action list at +0x14; 0 when a read fails, else 1
	void sub_100cd2d0();	// the destructor body of the output (stub 0x10015708), called directly
	float sub_100cd260();	// "COutputEvent::GetMaxDelay" (stub 0x10005f10): the longest delay of the output's actions

	char m_data[0x18];
};
