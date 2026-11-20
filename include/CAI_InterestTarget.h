// CAI_InterestTarget: one entry of the motor's facing queue (CUtlVector of 36 bytes, see CAI_Motor::GetFacingQueueOps).
// Only its size is modelled here.
#pragma once

class CAI_InterestTarget
{
public:
	CAI_InterestTarget();	// 0x102d9150 (stub 0x1000823d): called on every element the facing queue's Restore adds

	char m_pad0000[0x24];
};
