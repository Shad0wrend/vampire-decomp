// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101349e0 size=0xc2
#include "Pool.h"
#include "CBaseHandle.h"
#include "CBaseEntityList.h"

extern Pool g_105e5aac;
extern CBaseEntityList *g_102b8e98;

inline IHandleEntity *CBaseHandle::Get() const
{
	if (IsValid())
	{
		const CBaseEntityListEntry *pInfo = &g_102b8e98->m_EntPtrArray[GetEntryIndex()];
		if (pInfo->m_SerialNumber == GetSerialNumber())
			return (IHandleEntity *)pInfo->m_pEntity;
	}
	return 0;
}

inline CBaseHandle GetNetworkableHandle(int nEntIndex)
{
	if (g_102b8e98->m_EntPtrArray[nEntIndex].m_pEntity)
		return CBaseHandle(nEntIndex, g_102b8e98->m_EntPtrArray[nEntIndex].m_SerialNumber);
	else
		return CBaseHandle();
}

struct CSoundEnvelope
{
	float m_current;
	float m_dest;
	float m_delta;
	bool m_active;

	CSoundEnvelope()
	{
		m_current = 0.0f;
		m_dest = 0.0f;
		m_delta = 0.0f;
		m_active = false;
	}
};

struct CUnknown101bcef0
{
	char m_pad[0x28];
	void sub_101347f0();
	CUnknown101bcef0() { sub_101347f0(); }
};

struct CSoundPatch
{
	CSoundEnvelope m_pitch;
	CSoundEnvelope m_volume;
	int m_pad20[3];
	const char *m_iszSoundName;
	CBaseHandle m_hEntity;
	int m_pad34[4];
	CUnknown101bcef0 m_filter;

	CSoundPatch()
	{
		m_iszSoundName = 0;
	}

	static void *operator new(unsigned int nSize)
	{
		return g_105e5aac.sub_1010e3e0(nSize);
	}

	void sub_101337a0(void *filter, IHandleEntity *pEnt, int channel, const char *pSoundName, int soundlevel);
};

// TARGET: ?sub_101349e0@CUnknown101349e0@@QAEPAUCSoundPatch@@PAXHPBD@Z
struct CUnknown101349e0
{
	CSoundPatch *sub_101349e0(void *filter, int nEntIndex, const char *pSoundName);
};

CSoundPatch *CUnknown101349e0::sub_101349e0(void *filter, int nEntIndex, const char *pSoundName)
{
	CSoundPatch *pSound = new CSoundPatch;
	CBaseHandle hEnt = (nEntIndex != -1) ? GetNetworkableHandle(nEntIndex) : CBaseHandle(0, 0);
	pSound->sub_101337a0(filter, hEnt.Get(), 0, pSoundName, 75);
	return pSound;
}
// END FUNCTION
