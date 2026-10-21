// COutputEvent: an entity output (OnStartTouch etc.), 0x18 bytes; only its constructor and Fire are known.
// The constructor is the stub at 0x10002ddd (function 0x100cd2a0).
#pragma once

class COutputEvent
{
public:
	COutputEvent();

	void sub_100cd660(void *pActivator, void *pCaller, float flDelay);	// "COutputEvent::FireOutput" (stub 0x10010794)

	char m_data[0x18];
};
