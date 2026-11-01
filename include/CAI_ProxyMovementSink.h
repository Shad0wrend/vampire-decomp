// CAI_ProxyMovementSink (RTTI .?AVCAI_ProxyMovementSink@@): movement sink that forwards to another sink at +4.
// Only the members that decompiled code needs are declared.
#pragma once

#include "CAI_DefMovementSink.h"

class CAI_ProxyMovementSink : public CAI_DefMovementSink
{
public:
	CAI_ProxyMovementSink() : m_pTarget(0) {}
	void *m_pTarget;	// 0x04: the sink the proxy forwards to (null when none)

	bool vfunc2(int a, int b, int c);	// slot 2 (plain member) "OnFailedSteer": profiled as CAI_ProxyMSink_OnFailedSteer; true when the target sink answers its slot 2 with the three arguments
	bool vfunc3(int a, int b, int c);	// slot 3 (plain member) "OnFailedLocalNavigation": profiled as CAI_ProxyMSink_OnFailedLocalNavigation; true when the target sink answers its slot 3 with the three arguments
	bool vfunc4(int a, int b, int c);	// slot 4 (plain member) "OnInsufficientStopDist": profiled as CAI_ProxyMSink_OnInsufficientStopDist; true when the target sink answers its slot 4 with the three arguments
	bool vfunc1(int a, int b, int c);	// slot 1 (plain member) "OnObstructionPreSteer": profiled as CAI_ProxyMSink_OnObstructionPreSteer; true when the target sink answers its slot 1 with the three arguments
	bool vfunc7(int a, int b, int c, int d);	// slot 7 "OnMoveExecuteFailed": profiled as CAI_ProxyMSink_OnMoveExecuteFailed; true when the target sink answers its slot 7 with the same four arguments
	bool vfunc5(int a);	// slot 5 "OnMoveBlocked": profiled as CAI_ProxyMSink_OnMoveBlocked; true when the target sink answers its slot 5
	bool vfunc6(int a);	// slot 6 (plain member) \"OnMoveStalled\": profiled as CAI_ProxyMSink_OnMoveStalled; true when the target sink answers its slot 6 with a (the proxy forwards), else false
	float vfunc0();	// slot 0: the target's slot 0 value, or -1.0f when there is no target or it answers -1.0 (double)
};
