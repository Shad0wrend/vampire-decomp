// CAI_InterestTarget: one entry of the motor's facing queue (CUtlVector of 36 bytes, see CAI_Motor::GetFacingQueueOps).
// Only its size is modelled here.
#pragma once

struct CAI_InterestTarget
{
	char m_pad0000[0x24];
};
