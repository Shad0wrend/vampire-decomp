// CVStatList_t: list of stats (no vtable). Only the members the constructor touches are declared.
#pragma once

class CVStatList_t
{
public:
	int m_pad0000;
	int m_field04;
	int m_field08;
	int m_field0c;
	int m_field10;

	CVStatList_t(int a);
	~CVStatList_t();
	int sub_10010609(int a);
	int sub_10200fc0(int stat, int amount);	// "CVStatList_t::AddBase" (called through the stub at 0x1000e66a)
	int sub_10201100(int stat, int amount);	// "CVStatList_t::SubBase": scope trace, returns AddBase(stat, -amount)
	char sub_102008b0(int stat);	// "CVStatList_t::IsValidStat": 0 <= stat < m_field04
	int sub_10200ca0(int stat);	// "CVStatList_t::GetBase": scope trace, the base value of the stat (first dword array behind m_field08), 0 when the stat is invalid
	void sub_10200730();	// called by Bind (stub 0x1000f5bf)
	void sub_102007f0(int a, int *pSource, int c);	// "CVStatList_t::Bind": scope trace, stores a at +0, the source at +0xc, its count (dword at +4) at +4 and c at +8, then sub_10200730()
	bool sub_102017b0(int a, int b);	// "CVStatList_t::IsEqual": scope trace, true when sub_10010609(a) == sub_10010609(b)
	int sub_10201980();	// "CVStatList_t::GetHighestValueIndex": scope trace, index of the first stat with the highest sub_10010609 value, -1 when empty
	char sub_10201540();	// recomputes every stat value (stored in the array behind m_field08), true when one changed (stub 0x1000a1a0)
	char sub_10200d60(int value);	// "CVStatList_t::SetValue"-like worker taking one stack argument (stub 0x10005cbd), called by the VStatGet wrapper; returns a flag byte
	void sub_102008e0(int stat, int value);	// stat setter taking (stat, value) (stub 0x10011e46)
	int sub_10200b10(int stat);	// the upper limit of the stat (stub 0x10005cc7)
	void sub_10200be0(int stat, int value);	// "CVStatList_t::Set": scope trace, stores value (clamped to sub_10200b10(stat)) in the base value array behind m_field08 when the stat is valid
	void sub_10200a70(int stat, int source);	// "CVStatList_t::SetBaseToStatValue": scope trace, sets the stat to the value of the stat `source` (sub_10010609)
	void sub_102009b0(int stat);	// "CVStatList_t::SetBaseToDefault": scope trace, when the stat is valid sets it to the default value of its info record (the +0x0 object's entity value as argument)
	const char *sub_10201a40(int stat, char bTimed);	// "CVStatList_t::ToDetailedStr" (stub 0x10009214): scope trace, formats the stat's name, value and base value names into the buffer at 0x1074e548 and returns it; with bTimed appends the seconds left of the owner's timer
	const char *sub_102013a0(int stat);	// "CVStatList_t::GetBaseValueName": scope trace, the name of the entry the base value of the stat selects in the stat's table (info object at +0xc), "" when the stat is invalid
	const char *sub_10201470(int stat);	// "CVStatList_t::GetValueName": like sub_102013a0 but selects by the full stat value sub_10010609
	bool sub_10200ea0(int stat);	// "CVStatList_t::DecBase": scope trace, when the stat is valid and its base value is above the stat's minimum (value record of the info object at +0xc, evaluated for the owner entity of the object at +0) lowers it by one, tells the info's action list (+0x10c) about the change and returns true; else false (stub 0x1000ffb0 etc.)
	void sub_102016a0(int stat);	// "CVStatList_t::SetMax": scope trace, when the stat is valid moves the base value by (the stat's MaxBuy-like value record evaluated for the owner entity) - (the stat's current value) and tells the info's action list (+0x10c) about the change
	void sub_10201590(int stat);	// "CVStatList_t::SetMin": like SetMax with the stat's minimum value record (sub_101ff010)
	int sub_102012d0(int stat);	// "CVStatList_t::GetBoundedBase": 0 for an invalid stat, else the stat's base value with the owner's modifiers applied (sub_101f9bf0), clamped to the stat's upper value record (sub_101ff060) and then to its lower one (sub_101ff010), both evaluated for the owner entity
	int sub_10201190(int stat);	// "CVStatList_t::Get": scope trace, 0 for an invalid stat, else the base value with the owner's modifiers applied (CUnknown101f9c70::sub_101f9c70 of the info list's field at +0x2c), clamped to the stat's upper value record and then to its lower one
};

// The stat lists of a character: the object at +0x13a8 of a CBaseCombatCharacter (its CUtlVector of lists at +0x8:
// count at +0x14, elements at +0x18; the character's m_nStatLists / m_pStatLists). Find is the game's one lookup of
// the list of a type (out of line at 0x10183880, inlined by every function that looks a list up): its default list is
// one function-local static, so every such function inlines Find instead of a static of its own (link audit E).
struct CVStatListSet
{
	char m_pad0000[0x14];
	int m_nLists;	// 0x14
	CVStatList_t **m_pLists;	// 0x18

	static CVStatListSet *Of(void *pCharacter) { return (CVStatListSet *)((char *)pCharacter + 0x13a8); }

	CVStatList_t *Find(int type)
	{
		for (int i = 0; i < m_nLists; i++) {
			if (m_pLists[i]->m_field10 == type)
				return m_pLists[i];
		}
		static CVStatList_t s_default(-1);
		return &s_default;
	}
};

// The one-time-init guard of that lazy default list (the game shares it at 0x109f0b2a):
// use it (and a local `extern CVStatList_t g_109f0b40;`) instead of the inline static, whose COMDAT alias does not link here.
extern unsigned char g_109f0b2a;
