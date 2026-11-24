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
};
