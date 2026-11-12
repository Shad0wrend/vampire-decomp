// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100df590 size=0x1b0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "Vector.h"
#include "utlvector.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);

struct CDialogHistoryLine
{
	char m_szText[0x1000];
	int m_nKey;
};

// CUtlMemory<CDialogHistoryLine> / CUtlVector<CDialogHistoryLine>: the out-of-line copies are 0x100eb1a0 (Purge) and
// 0x100eb130 (RemoveAll)
struct CDialogHistoryMemory
{
	CDialogHistoryLine *m_pMemory;
	int m_nAllocationCount;
	int m_nGrowSize;

	bool IsExternallyAllocated() const { return m_nGrowSize == -1; }
	CDialogHistoryLine *Base() { return m_pMemory; }
	void sub_100eb1a0();	// Purge
	~CDialogHistoryMemory()
	{
		if (!IsExternallyAllocated()) {
			if (m_pMemory) {
				Plat_Free((void *)m_pMemory);
				m_pMemory = 0;
			}
			m_nAllocationCount = 0;
		}
	}
};

struct CDialogHistory
{
	CDialogHistoryMemory m_Memory;
	int m_Size;
	CDialogHistoryLine *m_pElements;

	void sub_100eb130();	// RemoveAll
	~CDialogHistory()
	{
		sub_100eb130();
		m_Memory.sub_100eb1a0();
		m_pElements = m_Memory.Base();
	}
};

struct CDialogVec3348 : CUtlVector<int>
{
};

struct CDialog
{
	char m_pad0[0x32f8];
	CDialogHistory m_vec32f8;	// 0x32f8
	CUtlVector<int> m_vec330c;	// 0x330c
	CUtlVector<int> m_vec3320;	// 0x3320
	CUtlVector<int> m_vec3334;	// 0x3334
	CDialogVec3348 m_vec3348;	// 0x3348
	CUtlVector<int> m_vec335c;	// 0x335c
	CUtlVector<int> m_vec3370;	// 0x3370
	CUtlVector<int> m_vec3384;	// 0x3384

	void sub_100e5770();	// unload
	~CDialog();
};

CDialog::~CDialog()
{
	ScopeTrace trace("CDialog::~CDialog", g_106b8540);
	sub_100e5770();
}
// END FUNCTION
