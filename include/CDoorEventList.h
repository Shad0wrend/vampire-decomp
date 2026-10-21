// CDoorEventList: the 0x18-byte member objects (event lists) of the door entities (CBaseDoor, CRotDoor), released by sub_100cd2d0.
#pragma once

struct CDoorEventList
{
	char m_pad[0x18];

	void sub_100cd2d0();
};
