// CDoorEventList: the 0x18-byte member objects (event lists) of the door entities (CBaseDoor, CRotDoor), released by sub_100cd2d0.
#pragma once

class CBaseEntity;

struct CDoorEventList
{
	char m_pad[0x18];

	void sub_100cd2d0();
	void sub_100cd660(CBaseEntity *pActivator, CBaseEntity *pCaller, int delay);	// fires the event list (stub 0x10010794)
};
