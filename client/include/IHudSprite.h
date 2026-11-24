// IHudSprite: skeleton from the game's RTTI; the game has no vtable of its own for it (vtable-slot skeletons, 2026-11-22)
// declared: its bases; nothing else yet (each class deriving from it lays out its slots as its own)
#pragma once

class IHudSprite
{
};

class CHudSpriteInner
{
public:
	void sub_10136f60(bool bAdditive);
	int sub_10136ff0(int frame, int x, int y, int a3);
	void sub_10137020(int a1, int x, int y, int a4, int a5, int a6);
};

struct El3d50;
class CHudSprite : public IHudSprite
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual int vfunc4(int, int);
	virtual int vfunc5(int idx, int unused);
	virtual void vfunc6();
	virtual void vfunc7(int a1, int x, int y, int a4, int a5, int a6);
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	int *sub_100f3e20(El3d50 *p);
	virtual void vfunc13(int frame, int x, int y, int a3);

	int m_unk04;
	int m_unk08;
	int m_unk0c;
	int m_unk10;
	int m_unk14;
	int m_unk18;
	int m_unk1c;
	int m_unk20;
	int m_unk24;
	int m_unk28;
	int m_unk2c;
	int m_unk30;
	int m_unk34;
	CHudSpriteInner *m_pSprite;	// 0x38
	void vfunc18(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
	int vfunc17(int);	// as in C_BaseEntity (transplant)
};
