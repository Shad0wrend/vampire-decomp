// CStealthKillRules: stealth-kill target selection rules (name from the FindVictim scope trace string).
#pragma once

class CBaseEntity;
struct CSKRKeyValues;

class CStealthKillRules
{
public:
	float m_aTable0[20];	// 0x00
	float m_aTable1[20];	// 0x50
	int m_n0a0;	// 0xa0
	int m_n0a4;	// 0xa4
	int m_n0a8;	// 0xa8
	float m_f0ac;	// 0xac
	float m_flRange;	// 0xb0
	int m_aTable2[32];	// 0xb4
	int m_aTable3[32];	// 0x134

	float sub_101be1d0(CBaseEntity *pEntity);
	float sub_101bea90(CBaseEntity *pEntity);	// "CStealthKillRules::GetDeafZoneArc": scope trace, the arc of table 0 (+0x00) at the entity's feat value - 1 (feat of the active weapon's kind, 10 or else 9), 0.0f when there is no weapon or the index is out of range
	float sub_101be930(CBaseEntity *pEntity);	// "CStealthKillRules::GetDeafZoneArcDot": same lookup in table 1 (+0x50), else the constant at 0x104454c0
	void sub_101be0e0();	// "CStealthKillRules::FlushTable": scope trace, clears the four tables and sets the defaults (1, 10, 0, 3.0f, range 70.0f)
	void sub_101bebf0();	// called through the stub at 0x1000d625 by InitTable after FlushTable
	void sub_101be020();	// "CStealthKillRules::InitTable": scope trace, FlushTable, sub_101bebf0, then fills the float table at +0x50 with cos(table at +0x00 [i] * constants)
	void sub_101bedb0(CSKRKeyValues *pKeys, const char *pszName, float *pTable);	// "CStealthKillRules::LoadKey": scope trace; reads the 20 floats "1".."20" of the sub key pszName into pTable (each defaulting to the previous one, the first to 0); Warning "%s needs key values for '%s'!!" when the key is missing
	float sub_101bef50(int a, float b);	// "CStealthKillRules::ComputeMinDepth": scope trace; the range (+0xb0) minus the range times (the clamped position of a between the values at +0xa0 / +0xa4 minus that of b between the values at +0xa8 / +0xac), never below 0.0f
	static float sub_101beed0(float x, float lo, float hi);	// the position of x between lo and hi, clamped to 0..1 (cdecl; called by ComputeMinDepth with ecx still holding this)
};
