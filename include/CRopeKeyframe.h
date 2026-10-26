// CRopeKeyframe: declared by pcdecomp transplant for 0x1019dd90 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CRopeKeyframe : public CBaseEntity
{
public:
	CRopeKeyframe *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	CRopeKeyframe *sub_1019dc80();	// as in CKeepUpright (transplant)
	virtual void vfunc104();	// slot 104 "Precache": appends ".vmt" to the material name at +0x488 when it lacks it, then precaches it (index at +0x46c)
	bool sub_1019ee40();	// switches this rope's state off (sub_1019f1f0(false)), then switches it on (sub_1019f1f0(true)) for every other rope entity of the same name; returns true
	void sub_1019f1f0(int nBit);	// clears bit nBit (1 << nBit) of the flags at +0x478 and sets the byte at +0x1b1 (worker, called through the stub at 0x10001da7)
	void sub_1019e310();	// "Spawn"-like: CBaseEntity::sub_100b3b00, sub_1019e5d0, clamps the segment count at +0x468 to 2..10, sub_1019e8b0(1), remembers whether the start / end point handles (+0x490 / +0x494) resolve in the bytes at +0x48c / +0x48d, sets the flag object at +0x1b0, the byte at +0x1b1, installs the think function (stub 0x10012247) and the next think time 0.1f
	void sub_1019e5d0();	// stub 0x1000cb03
	void sub_1019e8b0(int a);	// stub 0x1000f9ed
	bool sub_1019e110(float slack);	// measures the rope between the start and end entities (their origin, or their attachment when the attachment index is set) and stores the two values it gets back at +0x474 and +0x45c (marking the entity changed, byte +0x1b1); false when either entity is missing
	void sub_1019ddc0(CBaseEntity *pEnt, int iAttachment);	// "SetStartPoint" (stub 0x100144c0)
	void sub_1019de30(CBaseEntity *pEnt, int iAttachment);	// "SetEndPoint" (stub 0x10011603)
	void sub_1019f640(const char *pszMaterial);	// "SetMaterial" (stub 0x10004b83)
	static CRopeKeyframe *sub_1019dee0(CBaseEntity *pStartEnt, CBaseEntity *pEndEnt, int iStartAttachment, int iEndAttachment, int ropeWidth, const char *pszMaterial, int numSegments);	// "CRopeKeyframe::Create": creates a \"keyframe_rope\" between the two entities (attachments), spawns it with the given material, width and segment count (clamped to 2..10); null when the entity could not be created
	static CRopeKeyframe *sub_1019dfb0(CBaseEntity *pStartEnt, int iStartAttachment, int nSlack, int ropeWidth, const char *pszMaterial, int numSegments);	// "CRopeKeyframe::Create" with only a start point: creates a \"keyframe_rope\", sets the start point and no end point, clears the map file flag (+0x47c) and the simulate bit (0x40 of +0x454), spawns it with the material, stores the slack (+0x474) and width (+0x460) and the segment count clamped to 2..10; null when the entity could not be created
	void vfunc113();	// slot 113 "CRopeKeyframe::Activate" (plain member): base activate (sub_100a0bc0); for a rope made from the map file loads the cable material, finds the entity named at +0x458, ties the rope end to it (SetEndPoint) and the start to the rope itself, then Spawn
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226), called directly
	void sub_1019ebc0(int a, int b, CRopeKeyframe *pStop, int x, int y, int z);	// sends the rope message (user message 0 to every player but the one of this entity: the three dwords x, y, z) and passes the same arguments on to the rope behind the end point handle (+0x494) unless it is pStop
	void sub_1000a84e(int a, int b, CRopeKeyframe *pStop, int x, int y, int z);	// the jump stub of sub_1019ebc0, used by its recursive call

	char m_padRope03e0[0x454 - 0x3e0];
	unsigned int m_nRopeFlags;	// 0x0454: bit 6 (0x40) is cleared by Create
	const char *m_pszName458;	// 0x0458: compared case-insensitively with the entity name by sub_1019ee40
	int m_n45c;	// 0x045c
	float m_flWidth;	// 0x0460
	char m_padRope0464[0x468 - 0x464];
	int m_nSegments;	// 0x0468
	int m_nMaterialIndex;	// 0x046c: model index of the rope material, -1 until precached
	char m_padRope0470[0x474 - 0x470];
	int m_n474;	// 0x0474
	int m_n478;	// 0x0478: set to 1 by Create
	char m_bCreatedFromMapFile;	// 0x047c
	char m_padRope047d[0x490 - 0x47d];
	unsigned int m_hStartPoint;	// 0x0490
	unsigned int m_hEndPoint;	// 0x0494
	short m_iStartAttachment;	// 0x0498
	short m_iEndAttachment;	// 0x049a
};
