// CUnknown10170eb0: an entity (probably CBasePlayer) with two entity handles at +0x10dc and +0x10e0; real class not yet known.
#pragma once

class CUnknown10170eb0
{
public:
	char m_pad0000[0x10dc];
	unsigned int m_hFirst;	// 0x10dc: handle of an entity answered by slot 313
	unsigned int m_hSecond;	// 0x10e0: handle of the entity whose classname is passed to slot 457

	void sub_10170eb0();	// when the second handle resolves (and the first one, if it resolves, answers slot 313 with true) calls slot 457(classname of the second entity or "", 0)
};
