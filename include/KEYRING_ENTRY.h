// KEYRING_ENTRY: element of the CUtlVector<KEYRING_ENTRY> a keyring item saves with DEFINE_UTLVECTOR (0xc0 bytes;
// the name is the first 0x60 bytes, the fields are not recovered yet).
#pragma once

struct KEYRING_ENTRY
{
	char m_data[0xc0];
};
