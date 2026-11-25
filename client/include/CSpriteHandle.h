// CSpriteHandle: the object the engine's sprite lookup returns (hand-made from 0x10081cd0, 0x10136f80, 0x10136f90)
#pragma once
class CSpriteHandle
{
public:
	int m_unk00;
	int m_unk04;
	int m_unk08;
	void *m_pMaterial;	// 0x0c
	void *m_unk10;
	void *m_unk14;
	void sub_10136f80(float);
	void sub_10136f90(int);
};
