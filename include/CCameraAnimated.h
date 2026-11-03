// CCameraAnimated: animated camera entity (CBaseAnimating based); only what decompiled code needs.
#pragma once

struct datamap_t;

// 0x18-byte member objects of CCameraAnimated, released by sub_100cd2d0 (their destructor).
struct CCameraAnimatedItem
{
	char m_pad[0x18];

	void sub_100cd2d0();
};

class CCameraAnimated
{
public:
	char m_pad0000[0x730];
	CCameraAnimatedItem m_items730[8];
	char m_pad07f0[0x8];
	CCameraAnimatedItem m_item7f8;
	CCameraAnimatedItem m_item810;

	CCameraAnimated *sub_10071220();	// constructor body (camera_animated)
	void sub_1008b3c0(); // base class destructor
	CCameraAnimated *vfunc5(unsigned char flags); // scalar deleting destructor
	void vfunc104(); // slot 104: precaches the model
	void vfunc103();	// slot 103 "Spawn"-like: sets the model from the model name (slots 104, 105) or, without one, warns "missing modelname" with the origin and removes the entity
	void vfunc259(void *pEvent);	// slot 259 \"HandleAnimEvent\" override: event 0x3eb with a number 1..8 in its options fires the output of that number (the array at +0x730); anything else CBaseAnimating::vfunc259
	void sub_10091da0(void *pEvent);	// CBaseAnimating::vfunc259 (stub 0x10003f99), called directly
	const char *sub_1000b5cd();	// CBaseEntity::GetDebugName (stub 0x1000b5cd)
public:
	int vfunc80();
	int vfunc81();
	datamap_t * vfunc82();
	char m_pad0828[0x830 - 0x828];
};
