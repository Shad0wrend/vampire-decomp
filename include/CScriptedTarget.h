// CScriptedTarget: scripted target entity. Only what matched code needs (base chain not modelled: CBaseEntity at +0).
#pragma once

#include "CBaseEntity.h"

class CScriptedTarget : public CBaseEntity
{
public:
	virtual void vfunc103();	// slot 103 (Spawn): looks the global at 0x10938054 up once, SetSolid(0) (inlined scope trace), sub_100b3b00(), remembers the origin (slot 217) at +0x5f44, runs sub_1034d5b0() when the field at +0x5f50 is not set, then AddFlag2(0x10)
	void sub_1034d5b0();	// called through the stub at 0x10012be3

	char m_pad03e0[0x5f44 - 0x3e0];
	float m_vecOrigin5f44[3];	// 0x5f44
	int m_n5f50;	// 0x5f50
};
