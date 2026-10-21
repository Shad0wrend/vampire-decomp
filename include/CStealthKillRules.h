// CStealthKillRules: stealth-kill target selection rules (name from the FindVictim scope trace string).
#pragma once

class CBaseEntity;
struct CSKRKeyValues;

class CStealthKillRules
{
public:
	int m_aTable0[20];	// 0x00
	int m_aTable1[20];	// 0x50
	int m_n0a0;	// 0xa0
	int m_n0a4;	// 0xa4
	int m_n0a8;	// 0xa8
	float m_f0ac;	// 0xac
	float m_flRange;	// 0xb0
	int m_aTable2[32];	// 0xb4
	int m_aTable3[32];	// 0x134

	float sub_101be1d0(CBaseEntity *pEntity);
	void sub_101be0e0();	// "CStealthKillRules::FlushTable": scope trace, clears the four tables and sets the defaults (1, 10, 0, 3.0f, range 70.0f)
	void sub_101bebf0();	// called through the stub at 0x1000d625 by InitTable after FlushTable
	void sub_101be020();	// "CStealthKillRules::InitTable": scope trace, FlushTable, sub_101bebf0, then fills the float table at +0x50 with cos(table at +0x00 [i] * constants)
	void sub_101bedb0(CSKRKeyValues *pKeys, const char *pszName, float *pTable);	// "CStealthKillRules::LoadKey": scope trace; reads the 20 floats "1".."20" of the sub key pszName into pTable (each defaulting to the previous one, the first to 0); Warning "%s needs key values for '%s'!!" when the key is missing
};
