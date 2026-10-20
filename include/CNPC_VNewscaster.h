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

struct CNewscasterSub5cdc
{
	char m_pad[0x80];
	char m_bFlag80;
};

class CNPC_VNewscaster
{
public:
	virtual int vfunc404(int unused);

	void sub_103a0d50();	// frees and removes every entry of both lists, then clears the byte at +0x6690
	void sub_103a0420();	// slot 420 "CNPC_VNewscaster::...Reset": base slot 420 (sub_1000c531), then resets the counters at +0x6338..+0x6368 (999999 limits, scrambled value of sub_10009408(0) at +0x6364) and clears the flags
	void sub_1000c531();	// CAI_BaseNPCTroika::vfunc420, called directly

	char m_pad0004[0x1480 - 4];
	char m_bFlag1480;
	char m_pad1481[0x5b84 - 0x1481];
	int m_n5b84;
	char m_pad5b88[0x5cdc - 0x5b88];
	CNewscasterSub5cdc *m_p5cdc;
	char m_pad5ce0[0x6338 - 0x5ce0];
	int m_n6338;
	int m_n633c;
	char m_pad6340[0x6348 - 0x6340];
	int m_nLimit[5];	// 0x6348
	char m_pad635c[0x6360 - 0x635c];
	char m_b6360;
	char m_b6361;
	char m_pad6362[2];
	unsigned int m_n6364;
	int m_n6368;
	char m_pad636c[0x641c - 0x636c];
	int m_n641c;
	char m_pad6420[0x665c - 0x6420];
	CNewscasterList m_listA;	// 0x665c
	CNewscasterList m_listB;	// 0x6670
	char m_pad6684[0x6690 - 0x6684];
	char m_bFlag6690;
};
