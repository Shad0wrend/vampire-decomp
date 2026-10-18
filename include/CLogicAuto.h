// CLogicAuto: logic_auto entity. Declared flat (bases not recovered); only the members the matched functions touch.
#pragma once

class CLogicAuto
{
public:
	char m_pad0000[0x17c];
	float m_flTime;	// 0x17c

	void sub_10130d10();
};
