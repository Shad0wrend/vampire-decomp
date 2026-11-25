#pragma once
#include "C_BaseAnimating.h"
#include "C_SpriteRenderer.h"
class C_LocalTempEntityPad : public C_BaseAnimating
{
public:
	char m_pad[0x790 - sizeof(C_BaseAnimating)];
};
class C_LocalTempEntity : public C_LocalTempEntityPad, public C_SpriteRenderer
{
public:
#ifdef CTEMPENTS_HEADER
	C_LocalTempEntity();
#else
	C_LocalTempEntity() {}
#endif
	void vfunc143(int, float);
	bool vfunc144();
	int m_unk7f0; int m_unk7f4; int m_unk7f8; int m_unk7fc; int m_unk800; int m_unk804; int m_unk808; int m_unk80c;
};
