// CCameraKeyFrame: declared by pcdecomp transplant for 0x100cc040 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CGlobalEntityList_Ent;

class CCameraKeyFrame
{
public:
	CCameraKeyFrame *vfunc5(unsigned int flags);
	void vfunc113();	// slot 113 (plain member): base vfunc113, then makes sure the field of view at +0x460 is 18.0 .. 2000.0 (else 8.95 / sin(18.75)), runs the value at +0x45c through the mathlib helper, finds the next key frame named by the string at +0x450 (dynamic_cast, stored at +0x454) and makes it point back at this one (+0x458); a key frame with a positive delay (+0x46c >= 0.05) and the flag at +0x464 folds that delay into the next frame's (+0x470) or its own, zeroes it and sets the byte at +0x47c on both
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226)

	char m_pad0000[0x450];
	const char *m_pszNext450;	// 0x450
	CCameraKeyFrame *m_pNext454;	// 0x454
	CCameraKeyFrame *m_pPrevious458;	// 0x458
	float m_fl45c;	// 0x45c
	float m_fl460;	// 0x460
	char m_b464;	// 0x464
	char m_pad0465[0x46c - 0x465];
	float m_flDelay46c;	// 0x46c
	float m_fl470;	// 0x470
	char m_pad0474[0x47c - 0x474];
	char m_b47c;	// 0x47c
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
