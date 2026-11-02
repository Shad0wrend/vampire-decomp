// CFlexAnimationTrack: flex animation track. Declared flat (bases not recovered).
#pragma once

class CUnknown10075aa0;

struct CExpressionSampleStub	// 12 byte sample of a flex track
{
	float m_flValue;
	float m_flTime;
	int m_nFlags;
};

struct CExpressionSampleList	// 0x14 byte CUtlVector-like list of samples
{
	CExpressionSampleStub *m_pMemory;
	int m_nAlloc;
	int m_nGrow;
	int m_nSize;
	CExpressionSampleStub *m_pElements;
	CExpressionSampleList() : m_pMemory(0), m_nAlloc(0), m_nGrow(0), m_nSize(0), m_pElements(0) {}
};

class CFlexAnimationTrack
{
public:
	virtual CFlexAnimationTrack *vfunc0(unsigned int flags);	// scalar deleting destructor

	CFlexAnimationTrack(CUnknown10075aa0 *pEvent);	// 0x10073b80
	CFlexAnimationTrack(const CFlexAnimationTrack *pSrc);	// 0x10073c20: the copy constructor (ret 4, returns this): see sub_10074000, the two lists are Purge()d and filled by AddToTail of the source's samples
	void sub_10074000(const char *pszName);	// stub 0x1000d391, called by the copy constructor with the source's name (+4) or "" (0x106b8540) when null
	void sub_1000fbaa();	// destructor body
	void sub_10073e70();	// destructor body (real address behind the stub)
	void sub_10074b10(int nList);	// removes the samples of list nList (0 or 1) whose time is negative or past the event's length
	void sub_10074820(int nList);	// sorts the samples of list nList by time (exchange sort), then runs sub_10074b10 on both lists
	void sub_100746e0(float flTime, float flValue, int nList);	// AddSample: appends a sample (value, time, unselected) to list nList (CUtlVector::AddToTail, inlined) and re-sorts the list (sub_10074820)

	int m_n04;
	char m_b08;
	char m_b09;
	char m_pad000a[2];
	int m_n0c;
	int m_n10;
	CExpressionSampleList m_Samples[2];	// 0x14, 0x3c
	int m_n3c;
	int m_n40;
	int m_n44;
	int m_n48;
	CUnknown10075aa0 *m_pEvent;	// 0x4c
};
