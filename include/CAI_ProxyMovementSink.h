// CAI_ProxyMovementSink (RTTI .?AVCAI_ProxyMovementSink@@): movement sink that forwards to another sink at +4.
// Only the members that decompiled code needs are declared.
#pragma once

#include "CAI_DefMovementSink.h"

class CAI_ProxyMovementSink : public CAI_DefMovementSink
{
public:
	void *m_pTarget;	// 0x04: the sink the proxy forwards to (null when none)

	float vfunc0();	// slot 0: the target's slot 0 value, or -1.0f when there is no target or it answers -1.0 (double)
};
