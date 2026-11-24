// CSpriteRendererSub: the first 0x18 bytes of C_SpriteRenderer (hand-made guess: the member whose constructor is
// 0x100c2450, called on C_Sprite + 0x410 by C_FireSmoke::C_FireSmoke before C_SpriteRenderer's inline body stores -1).
#pragma once

class CSpriteRendererSub
{
public:
	CSpriteRendererSub();
	int m_unk0;
	int m_unk4;
	int m_unk8;
	int m_unkc;
	int m_unk10;
	int m_unk14;
};
