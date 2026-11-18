// CCameraKeyFrame (RTTI CCameraKeyFrame : CLogicalEntity : CBaseEntity), vtable 0x104536ec, size 0x4b0.
// Constructor (the factory camera_keyframe, 0x100cb580): CBaseEntity(0), CLogicalEntity vftable, the two outputs
// (+0x480, +0x498), CCameraKeyFrame vftable.
#pragma once

#include "CLogicalEntity.h"
#include "COutputEvent.h"

struct datamap_t;

class CGlobalEntityList_Ent;

class CCameraKeyFrame : public CLogicalEntity
{
public:
	CCameraKeyFrame() {}
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void vfunc113();	// slot 113: base vfunc113, then makes sure the field of view at +0x460 is 18.0 .. 2000.0 (else 8.95 / sin(18.75)), runs the value at +0x45c through the mathlib helper, finds the next key frame named by the string at +0x450 (dynamic_cast, stored at +0x454) and makes it point back at this one (+0x458); a key frame with a positive delay (+0x46c >= 0.05) and the flag at +0x464 folds that delay into the next frame's (+0x470) or its own, zeroes it and sets the byte at +0x47c on both
	void sub_100a0bc0();	// CBaseEntity::vfunc113 (stub 0x10001226)

	const char *m_pszNext450;	// 0x450
	CCameraKeyFrame *m_pNext454;	// 0x454
	CCameraKeyFrame *m_pPrevious458;	// 0x458
	float m_fl45c;	// 0x45c
	float m_fl460;	// 0x460
	char m_b464;	// 0x464
	char m_pad0465[0x468 - 0x465];
	float m_flMoveSpeed;	// 0x0468
	float m_flDelay46c;	// 0x46c
	float m_fl470;	// 0x470
	float m_flRateIn;	// 0x0474
	float m_flRateOut;	// 0x0478
	char m_b47c;	// 0x47c
	char m_pad047d[0x480 - 0x47d];
	COutputEvent m_Output480;	// 0x480: constructed by the factory (0x10002ddd)
	COutputEvent m_Output498;	// 0x498
public:
	datamap_t * vfunc82();
};
