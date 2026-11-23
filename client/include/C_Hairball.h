// C_Hairball: client hairball entity (members from the constructor 0x1002c740)
#pragma once
#include "C_BaseEntity.h"
#include "CUtlMemory12.h"

struct HairVec36 { char *m_pMemory; int m_alloc; int m_grow; int m_Size; char *m_pElements;
	int sub_1002d4a0(int where, int num, const void *p); };
struct HairVec12 { CUtlMemory12 m_Memory; int m_Size; char *m_pElements;
	int sub_1002d570(int where, int num, const void *p); };

class C_Hairball : public C_BaseEntity
{
public:
	C_Hairball();
	char m_pad14[0x410 - 0x14];
	float m_flRadius;	// 0x410
	int m_nCount;	// 0x414
	int m_unk418;
	float m_unk41c;
	HairVec36 m_Vec420;
	HairVec12 m_Vec434;
	HairVec12 m_Vec448;
};
