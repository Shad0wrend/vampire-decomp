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
};

class CFlexAnimationTrack
{
public:
	virtual CFlexAnimationTrack *vfunc0(unsigned int flags);	// scalar deleting destructor

	void sub_1000fbaa();	// destructor body
	void sub_10074b10(int nList);	// removes the samples of list nList (0 or 1) whose time is negative or past the event's length
	void sub_10074820(int nList);	// sorts the samples of list nList by time (exchange sort), then runs sub_10074b10 on both lists
	void sub_100746e0(float flTime, float flValue, int nList);	// AddSample: appends a sample (value, time, unselected) to list nList (CUtlVector::AddToTail, inlined) and re-sorts the list (sub_10074820)

	char m_pad0004[0x14 - 4];
	CExpressionSampleList m_Samples[2];	// 0x14, 0x28
	char m_pad003c[0x4c - 0x3c];
	CUnknown10075aa0 *m_pEvent;	// 0x4c
};
