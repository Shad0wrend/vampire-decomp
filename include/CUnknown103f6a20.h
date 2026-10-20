// CUnknown103f6a20: object with a byte flag at +0x914 and an entity handle at +0x918 (a CTriggerBombSite once resolved); real name not yet known.
#pragma once

class CUnknown103f6a20
{
public:
	char m_pad0000[0x914];
	char m_b0914;
	char m_pad0915[3];
	volatile unsigned int m_hSite;	// 0x918

	void sub_103f6a20(void *pParam);	// clears the flag, then when the entity of the handle at +0x918 is a CTriggerBombSite (dynamic cast from CBaseTrigger) calls its sub_10211870(this, pParam)
};
