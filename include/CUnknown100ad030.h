// CUnknown100ad030: stand-in for CBaseEntity (name pointer at +0x26c); kept apart so the shared CBaseEntity headers are not touched.
#pragma once

#include "inputdata_t.h"

class CUnknown100ad030
{
public:
	char m_pad0000[0x26c];
	const char *m_name26c;	// 0x26c

	void sub_100a04e0(const char *pszParentName, void *pActivator);	// "CBaseEntity::SetParent" by name (stub 0x1000dac1)
	void sub_100ad030(inputdata_t *pInput);	// "CBaseEntity::InputSetParent": scope trace (entity name), SetParent(string value of the input or null, activator)
};
