// CVisToggleView: a panel-like object with vfunc21 = SetVisible(bool), vfunc22 = IsVisible(); CStatRowGroupView: a group of such objects.
#pragma once
class CVisToggleView
{
public:
	virtual void vf0(); virtual void vf1(); virtual void vf2(); virtual void vf3(); virtual void vf4();
	virtual void vf5(); virtual void vf6(); virtual void vf7(); virtual void vf8(); virtual void vf9();
	virtual void vf10(); virtual void vf11(); virtual void vf12(); virtual void vf13(); virtual void vf14();
	virtual void vf15(); virtual void vf16(); virtual void vf17(); virtual void vf18(); virtual void vf19();
	virtual void vf20();
	virtual void SetVisible(bool bVisible);
	virtual bool IsVisible();
};

struct CStatRowView
{
	CVisToggleView *m_pFirst;
	int m_unk04;
	int m_unk08;
	CVisToggleView *m_pCells[5];
	int m_unk20;
};

class CStatRowGroupView
{
public:
	int m_unk00[8];
	CVisToggleView *m_pLabel;	// +0x20
	int m_unk24[4];
	int m_nRows;	// +0x34
	int m_unk38;
	CStatRowView *m_pRows;	// +0x3c
	int m_unk40;
	CVisToggleView *m_pLast;	// +0x44
	void sub_10180840(bool bVisible);
};
