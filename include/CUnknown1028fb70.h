// CUnknown1028fb70: an NPC class (real name not yet known; probably CAI_BaseNPC or a direct base) that derives its
// inspection ranges from the character's level, unless a fixed value was configured.
#pragma once

class CUnknown1028fb70
{
public:
	char m_pad0000[0x63b0];
	int m_nLevel;	// 0x63b0: the index into the per-level stat tables
	int m_nVisionOverride;	// 0x63b4: raw bits of a float, -1.0f when not configured
	float m_flVisionDistance;	// 0x63b8
	int m_nHearingOverride;	// 0x63bc: raw bits of a float, -1.0f when not configured
	float m_flHearingScalar;	// 0x63c0

	void sub_1028fb70();	// fills +0x63b8 / +0x63c0 from the configured overrides, else from the "Inspection Vision Distances" / "Inspection Hearing Scalars" stat tables at the level
};
