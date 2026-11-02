// UnreachableEnt_t: element of CUtlVector<UnreachableEnt_t> (0x14 bytes). Its constructor (sub_1027fbf0) stores
// -1 (an invalid entity handle) in the first dword; the rest is not recovered yet.
#pragma once

struct UnreachableEnt_t
{
	int m_hEnt;
	char m_pad[0x10];
};
