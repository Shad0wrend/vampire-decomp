// CUnknown1028fb70: an NPC class (real name not yet known; probably CAI_BaseNPC or a direct base) that derives its
// inspection ranges from the character's level, unless a fixed value was configured.
#pragma once

class CUnknown1028fb70
{
public:
	char m_pad0000[0x63b0];
	int m_nLevel;	// 0x63b0: the index into the per-level stat tables
	float m_flVisionOverride;	// 0x63b4: -1.0f when not configured
	float m_flVisionDistance;	// 0x63b8
	float m_flHearingOverride;	// 0x63bc: -1.0f when not configured
	float m_flHearingScalar;	// 0x63c0

	void sub_1028fb70();	// fills +0x63b8 / +0x63c0 from the configured overrides, else from the "Inspection_Vision_Distances" / "Inspection_Hearing_Scalars" stat tables at the level
};
