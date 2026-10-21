// COutputEvent: an entity output (OnStartTouch etc.), 0x18 bytes; only its constructor, Fire and Restore are known.
// The constructor is the stub at 0x10002ddd (function 0x100cd2a0).
#pragma once

class CRestore;

class COutputEvent
{
public:
	COutputEvent();

	void sub_100cd660(void *pActivator, void *pCaller, float flDelay);	// "COutputEvent::FireOutput" (stub 0x10010794)
	bool sub_100cd870(CRestore *pRestore, int nElements);	// restores the output: the "Value" block, then nElements "EntityOutput" actions pushed onto the action list at +0x14; false when a read fails

	char m_data[0x18];
};
