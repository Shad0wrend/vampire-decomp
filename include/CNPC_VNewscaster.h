// CNPC_VNewscaster: the newscaster NPC, a CAI_BaseNPC descendant.
// Declared standalone for now: the vtable slots are *not* modelled here, so the
// position of the virtual below is not its real slot (404). Give the class its
// real base and padding before making a virtual call through it.
#pragma once

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);

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

	void PurgeMemory()	// CUtlMemory::Purge: frees an owned allocation
	{
		if (m_growSize != -1) {
			if (m_pMemory) {
				Plat_Free(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
	}

	void Destruct()	// ~CUtlVector: Purge (remove all, purge the memory, reset the debug pointer), then ~CUtlMemory
	{
		m_size = 0;
		PurgeMemory();
		m_pElements = m_pMemory;
		PurgeMemory();
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
	virtual int vfunc124();	// slot 124 "CNPC_VNewscaster::DrawDebugTextOverlays": scope trace (entity name), the Troika version's line count, plus sub_103a0ff0 of it while bit 0 of the byte at +0x224 is set (the position of this virtual is not its real slot)
	int sub_1029d4e0();	// CAI_BaseNPCTroika::vfunc124, called directly (stub 0x10006f64)
	int sub_103a0ff0(int nLines);	// the extra lines of the newscaster's own text (stub 0x10003bbb)

	void sub_103a0d50();	// frees and removes every entry of both lists, then clears the byte at +0x6690
	void sub_103a0420();	// slot 420 "CNPC_VNewscaster::...Reset": base slot 420 (sub_1000c531), then resets the counters at +0x6338..+0x6368 (999999 limits, scrambled value of sub_10009408(0) at +0x6364) and clears the flags
	void sub_1000c531();	// CAI_BaseNPCTroika::vfunc420, called directly
	CNPC_VNewscaster *vfunc5(unsigned int flags);	// scalar deleting destructor: destructs both lists (B, then A), the base (sub_1028d610), and frees the object when bit 0 of flags is set
	void sub_1028d610();	// base class destructor body (stub 0x100123af)
	void vfunc431();	// slot 431 "CNPC_VNewscaster::...": stamps curtime + 1.0f at +0x624c / +0x6250 and curtime at +0x625c / +0x6260, runs the Troika version and sub_103a0670 and, when the dev flag object allows and bit 0 of +0x224 is clear, the extra overlay lines sub_103a0ff0(0) (the position of this virtual is not its real slot)
	void sub_10292de0();	// CAI_BaseNPCTroika::vfunc431, called directly (stub 0x10002a7c)
	void sub_103a0670();	// stub 0x10003ef9, called directly

	char m_pad0004[0x224 - 4];
	char m_bFlags224;	// 0x224: bit 0 asks for the extra overlay lines
	char m_pad0225[0x26c - 0x225];
	const char *m_name26c;	// 0x26c: the entity name
	char m_pad0270[0x1480 - 0x270];
	char m_bFlag1480;
	char m_pad1481[0x5b84 - 0x1481];
	int m_n5b84;
	char m_pad5b88[0x5cdc - 0x5b88];
	CNewscasterSub5cdc *m_p5cdc;
	char m_pad5ce0[0x624c - 0x5ce0];
	float m_f624c;
	float m_f6250;
	char m_pad6254[0x625c - 0x6254];
	float m_f625c;
	float m_f6260;
	char m_pad6264[0x6338 - 0x6264];
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
