// CUnknown101f9b70: the object embedded at +0x13dc of the client-side record that an entity points to at +0x9c
// (class not known yet). Only what recovered code needs.
#pragma once

class CUnknown101f9b70
{
public:
	int m_count;	// 0x00
	int m_ids[1];	// 0x04: m_count trait ids, inline

	int sub_10158060(int index);	// called through the stub at 0x1000264e
};
