// CVFeatList_t (RTTI .?AVCVFeatList_t@@): the feat list (the global 0x10739d08), 0x2bc bytes: the vtable (6 slots,
// vtable 0x10483558), the base VSupportList_t<CVFeat> at +4, 24-byte records read from +0x160, a CUtlVector at +0x2a8;
// the implicit destructor.
#pragma once

#include "CVFeat.h"
#include "utlvector.h"

// The base at +4: a list of owned pointers (0x1c bytes) whose destructor deletes every element, then the array.
template <class T> class VSupportList_t
{
public:
	VSupportList_t() : m_n0000(1), m_n0004(0), m_nAlloc(0), m_nCount(0), m_ppData(0) {}
	~VSupportList_t()
	{
		if (m_ppData) {
			for (int i = 0; i < m_nCount; i++) {
				delete m_ppData[i];
				m_ppData[i] = 0;
			}
			delete m_ppData;
			m_ppData = 0;
		}
		m_n0004 = 0;
		m_nCount = 0;
		m_nAlloc = 0;
	}

	int m_n0000;	// 0x00
	int m_n0004;	// 0x04
	int m_n0008;	// 0x08
	int m_n000c;	// 0x0c
	int m_nAlloc;	// 0x10
	int m_nCount;	// 0x14
	T **m_ppData;	// 0x18
};

struct CVFeatList_t_Record
{
	float m_value;
	char m_pad4[20];
};

class CVFeatList_t : public VSupportList_t<CVFeat>
{
public:
	virtual float vfunc0(int index);	// the integer at +0x160 + index * 0x18, as a float
	virtual float vfunc1(int index);
	virtual float vfunc2(int index);
	virtual float vfunc3(int index);
	virtual float vfunc4(int index);
	virtual float vfunc5(int index);	// the float at +0x160 + index * 0x18 (+0x14) when it is above 1.0, else 2.0

	char m_pad0020[0x168 - 0x20];
	CVFeatList_t_Record m_records[1];	// 0x168: the float of record i at +0x168 + i * 0x18 (count unknown)
	char m_pad0180[0x2a8 - 0x180];
	CUtlVector<int> m_vec2a8;	// 0x2a8
};
