// COutputEvent: an entity output (OnStartTouch etc.), 0x18 bytes; only its constructor is known.
// The constructor is the stub at 0x10002ddd (function 0x100cd2a0).
#pragma once

class COutputEvent
{
public:
	COutputEvent();

	char m_data[0x18];
};
