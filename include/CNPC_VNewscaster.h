// CNPC_VNewscaster: the newscaster NPC, a CAI_BaseNPC descendant.
// Declared standalone for now: the vtable slots are *not* modelled here, so the
// position of the virtual below is not its real slot (404). Give the class its
// real base and padding before making a virtual call through it.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct CNewscasterEntry	// 0x28 bytes: a heap string and four heap string pairs
{
	void *m_pName;
	void *m_pPair[4][2];
	int m_unused24;
};

struct CNewscasterList	// a CUtlVector<CNewscasterEntry>
{
	CNewscasterEntry *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	CNewscasterEntry *m_pElements;

	void RemoveFirst()	// CUtlVector::Remove(0): shifts the tail down and shrinks the size
	{
		int n = m_size - 1;
		if (n > 0)
			memmove(m_pMemory, m_pMemory + 1, n * sizeof(CNewscasterEntry));
		n = m_size - 1;
		m_size = n;
	}
};

class CNPC_VNewscaster
{
public:
	virtual int vfunc404(int unused);

	void sub_103a0d50();	// frees and removes every entry of both lists, then clears the byte at +0x6690

	char m_pad0004[0x665c - 4];
	CNewscasterList m_listA;	// 0x665c
	CNewscasterList m_listB;	// 0x6670
	char m_pad6684[0x6690 - 0x6684];
	char m_bFlag6690;
};
