#pragma once
#include "CSpriteRendererSub.h"
class C_SpriteRenderer
{
public:
	~C_SpriteRenderer();
	C_SpriteRenderer() { m_unk18 = -1; }
	CSpriteRendererSub m_sub;
	int m_unk18;
	int m_unk1c;
	int m_unk20;
	int m_unk24;
	int m_unk28;
	int m_unk2c;
	int m_unk30;
	int m_unk34;
	int m_unk38;
	int m_unk3c;
	int m_unk40;
	int m_unk44;
	int m_unk48;
	int m_unk4c;
	int m_unk50;
	int m_unk54;
	int m_unk58;
	int m_unk5c;
};
