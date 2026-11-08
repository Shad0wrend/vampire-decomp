// element of the 512 rope nodes in CRopePhysics<512> (36 bytes, CRopeNode sized): its empty constructor
// (0x1042def0) is what the array constructor iterator calls
#pragma once

struct CRopeNodeInit
{
	char m_data[0x24];
	CRopeNodeInit() {}
};
