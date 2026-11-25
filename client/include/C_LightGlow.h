// C_LightGlow: hand header (destructor slot 8; CGlowOverlay member at +0x414)
#pragma once
#include "C_BaseEntity.h"
#include "CGlowOverlay.h"

class C_LightGlow : public C_BaseEntity
{
public:
	char m_unk_pad[0x414 - sizeof(C_BaseEntity)];
	CGlowOverlay m_Glow;
};
