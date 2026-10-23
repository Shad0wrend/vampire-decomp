// CBaseFlex: entity with flex animation (CBaseAnimatingOverlay -> CBaseAnimating -> ... -> CBaseEntity). Bases flattened.
#pragma once
#include "CBaseEntity.h"

struct CBaseFlexItemObject	// the object an item at +0xa58 refers to
{
	int sub_100029c8();	// the object's type (the dword at +0; stub 0x100029c8 for 0x10075b70)
	bool sub_1000695b();	// whether the float at +0x188 is set, i.e. not -1.0f (stub 0x1000695b for 0x10075f30)
};

struct CBaseFlexItem	// 0x1c byte element
{
	CBaseFlexItemObject *m_pObject;
	int m_n04;
	char m_b08;
	char m_pad09[0x1c - 9];
};

struct CFlexPlayerTrack	// the object a flex request (+0) animates; real name not yet known
{
	float sub_10076b30();	// a duration (stub 0x10014835)
	float sub_10077f10(float flFraction);	// stub 0x10008a4e: sets the position inside the track from a fraction
	float sub_10076280(float flWeight);	// stub 0x10002900: applies a weight
};

struct CFlexPlayerSource	// the object a flex request (+4) reads from; real name not yet known
{
	float sub_1007dfa0();	// a weight (stub 0x1000b9a1)
};

struct CFlexRequest	// the argument of CBaseFlex::vfunc291
{
	CFlexPlayerTrack *m_pTrack;	// 0x00
	CFlexPlayerSource *m_pSource;	// 0x04
	int m_n08;
	int m_n0c;	// 0x0c: negative when the request is unused
	int m_nSequence;	// 0x10
	float m_flStartTime;	// 0x14
};

class CBaseFlex : public CBaseEntity
{
public:
	void sub_100b5b00(const float *v);	// slot 277 override: stores three floats at +0x848
	void sub_100b5ce0();	// slot 276 override: toggles the int at +0x854
	void vfunc287(CBaseFlexItemObject *pObject);	// slot 287: removes the item of the vector at +0xa58 that refers to pObject (calls its sub_100029c8, clears the item and shifts the following ones down)
	void vfunc285(int nKey);	// slot 285: clears the item vector when nKey is 0, else removes every item whose second field (+4) equals nKey, like slot 287
	float vfunc281(int index);	// slot 281 "GetFlexWeight"-like: the flex controller index's value at +0x858 scaled from 0..1 into the controller's range (its two floats at +0xc / +0x10), 0.0f for an index outside the model's controllers
	void vfunc291(CFlexRequest *pRequest);	// slot 291 (plain member): for a request with a track, a source and a non-negative index: sets the track's position from the time since the request started over the track's duration and applies the source's weight to the track
	float sub_10091080(int sequence);	// CBaseAnimating member (stub 0x10009813), returns a float

	char m_pad03e0[0x848 - 0x3e0];
	float m_vec848[3];
	int m_toggle854;
	float m_flFlexWeight[(0xa58 - 0x858) / 4];	// 0x858
	CBaseFlexItem *m_pItems;	// 0xa58
	int m_nItemsAlloc;
	int m_nItemsGrow;
	int m_nItems;	// 0xa64
	CBaseFlex *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100152ad();	// as in CPhysForce (transplant)
	CBaseFlex *sub_100b58d0();	// as in CKeepUpright (transplant)
	void sub_100b5970();	// the destructor body (called through stub 0x100152ad)
};
