// CLogicAuto: logic_auto entity. Declared flat (bases not recovered); only the members the matched functions touch.
#pragma once

class CLogicAuto
{
public:
	char m_pad0000[0x17c];
	float m_flTime;	// 0x17c
	char m_pad0180[0x204 - 0x180];
	unsigned int m_flags204;	// 0x204

	void vfunc130(int a);	// slot 130 "OnRestore": CBaseEntity::vfunc130(a), then schedules the next think 0.2s ahead (when a is set, or bit 1 of the flags at +0x204)
	void sub_10130d10();
	void vfunc134();
};
