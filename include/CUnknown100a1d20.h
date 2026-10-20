// CUnknown100a1d20: stand-in for CBaseEntity (target name at +0x20c, name pointer at +0x26c); kept apart so the shared CBaseEntity headers are not touched.
#pragma once

class CUnknown100a1d20
{
public:
	char m_pad0000[0x20c];
	const char *m_target20c;	// 0x20c
	char m_pad0210[0x26c - 0x210];
	const char *m_name26c;	// 0x26c

	void *sub_100a1d20();	// "CBaseEntity::GetNextTarget" (slot 172): scope trace (entity name), the entity found by the global entity list (0x106eb5d8, sub_100f7770) for the target name, null without a target
};
