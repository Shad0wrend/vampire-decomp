// CBaseLandmark: the "info_landmark" entity (RTTI .?AVCBaseLandmark@@, vtable 0x1045103c): a CPointEntity with eight
// entity outputs at +0x450 (0x18 bytes each), 0x510 bytes in all. Only what the entity factory needs.
#pragma once

#include "CPointEntity.h"
#include "COutputEvent.h"

void *sub_100aa720(unsigned int nSize);	// the entities' operator new (stub 0x1000db89)

class CBaseLandmark : public CPointEntity
{
public:
	static void *operator new(unsigned int nSize) { return sub_100aa720(nSize); }

	char m_pad0004[0x450 - 4];
	COutputEvent m_Output450;
	COutputEvent m_Output468;
	COutputEvent m_Output480;
	COutputEvent m_Output498;
	COutputEvent m_Output4b0;
	COutputEvent m_Output4c8;
	COutputEvent m_Output4e0;
	COutputEvent m_Output4f8;
};
