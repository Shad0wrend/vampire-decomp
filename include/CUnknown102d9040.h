// CUnknown102d9040: CUtlVector-like list of 0x24-byte timed-entry records (size at +0xc, element pointer at +0x10); real name not yet known.
#pragma once

#include "CUnknown102d9150.h"
#include "CUnknown102d9170.h"

class CBaseEntity;

struct CUnknown102d9040Entry : public CUnknown102d9150
{
	float m_vec[3];	// 0x08
	float m_flStart;	// 0x14
	float m_flEnd;	// 0x18
	float m_flRate;	// 0x1c
	int m_unk20;
};

class CUnknown102d9040 : public CUnknown102d9170
{
public:
	int m_nSize;	// 0x0c
	CUnknown102d9040Entry *m_pElements;	// 0x10

	void sub_102d9040(int a, CBaseEntity *pEnt, const float *vec, int arg4, float duration, float amount);	// appends a record: id, the entity's handle (-1 for none), a vector, the start time (curtime), the end time (curtime + duration) and amount / duration
	void sub_102d8e50(const float *vec, int arg4, float duration, float amount);	// removes the first record with exactly this vector, then appends a new one for it (sub_102d9040(1, 0, vec, ...))
	void sub_102d8f20(CBaseEntity *pEnt, const float *vec, float flValue, float duration, float amount);	// removes the record of pEnt (when its start time is now and its float field +0x20 is not below flValue, flValue is replaced by it), then appends a new one with the id 2 (sub_102d9040; flValue goes through as its raw dword arg4)
	void sub_102d8cf0(CBaseEntity *pEnt, int flValue, float duration, float amount);	// as sub_102d8f20 without a vector: removes the record of pEnt whose rate (+0x1c) is 0 (flValue is a float passed as raw dword bits), then appends a new one with the id 0 and a zero vector
};
