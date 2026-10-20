// CUnknown10411630: object holding an entity handle at +0xab8 (not identified yet).
#pragma once

class CBaseEntity;

class CUnknown10411630
{
public:
	CBaseEntity *sub_10411630(float arg);	// the entity behind the handle at +0xab8 when it resolves, else sub_1000c955(arg)
	CBaseEntity *sub_1000c955(float arg);

	char m_pad0000[0xab8];
	unsigned int m_hEntity;	// 0x0ab8
};
