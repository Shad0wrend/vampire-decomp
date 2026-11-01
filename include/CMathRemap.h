// CMathRemap (math_remap, RTTI CMathRemap : CLogicalEntity), vtable 0x104668d4, size 0x478: remaps a float input from
// [in min, in max] to [out min, out max]. Only what matched code needs.
// Constructor: CLogicalEntity (CBaseEntity(0), vtable 0x104475c4), the output's COutputEvent constructor, own vftable.
#pragma once

#include "CLogicalEntity.h"
#include "COutputEvent.h"

struct inputdata_t;
struct datamap_t;

class CMathRemap : public CLogicalEntity
{
public:
	void sub_101321f0(inputdata_t &inputdata);	// the "Value" input: the float of the input clamped to [in min, in max] (an out of range input is ignored when spawn flag 1 is set), remapped linearly to [out min, out max] and fired through the output (+0x460) for the activator

	float m_flInMin;	// 0x450
	float m_flInMax;	// 0x454
	float m_flOutMin;	// 0x458
	float m_flOutMax;	// 0x45c
	COutputEvent m_OutValue;	// 0x460
public:
    virtual datamap_t * vfunc82();
    virtual void vfunc103();
};
