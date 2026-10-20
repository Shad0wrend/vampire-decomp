// CUnknown10159700: an entity-like object (vtable pointer at +0) with a toggle state at +0x4f8; real name not yet known.
// Its Use handler (vtable slot 173) is sub_10159700; slots 241..243 are modelled through the vtable pointer.
#pragma once

class CUnknown10159700
{
public:
	void **m_vtbl;
	char pad04[0x1f0 - 4];
	int m_field1f0;
	char pad1f4[0x4f8 - 0x1f4];
	int m_state;

	void sub_10159700(int activator, int caller, int useType, float value);
};
