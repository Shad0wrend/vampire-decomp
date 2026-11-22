// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c1dd0 size=0x3
#include "vgui2__BuildGroup.h"
void vgui2::BuildGroup::vfunc20(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x101c1de0 size=0x2eb
struct KV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
	virtual void SetPtr(const char *name, void *p);
	KV *sub_101b5670(const char *name);
};
struct IInputV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11();
	virtual bool IsKeyDown(int code);
};
struct IVGuiV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void PostMessage(int to, KV *msg, int from, float delay);
};
struct PH { virtual int GetVPanel(); };
struct PanelV {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void Repaint();
	virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
	virtual void v30();
	virtual PanelV *GetParent();
	void sub_101a9980(int *x, int *y, int *w, int *h);
	void sub_101a98f0(int w, int h);
	void sub_101a9890(int x, int y);
};
IInputV *sub_101ac8b0();
IVGuiV *sub_101ac8f0();
void *sub_101b6840(int size);
struct BG {
	virtual void v0(); virtual void v1();
	virtual PanelV *GetPanel();
	int m_unk4;
	int m_stepX;
	int m_stepY;
	char pad[0x58 - 0x10];
	PH *m_pOwner;
	void sub_101c2310(PanelV *p);
	void sub_101c1de0(int code, PanelV *panel);
};
// TARGET: BG::sub_101c1de0
void BG::sub_101c1de0(int code, PanelV *panel)
{
	int dx = 0, dy = 0;
	if (!sub_101ac8b0()->IsKeyDown(0x51))
		sub_101ac8b0()->IsKeyDown(0x52);
	bool b1 = sub_101ac8b0()->IsKeyDown(0x4f) || sub_101ac8b0()->IsKeyDown(0x50);
	bool b2 = sub_101ac8b0()->IsKeyDown(0x53) || sub_101ac8b0()->IsKeyDown(0x54);
	switch (code)
	{
	case 89: dx = -m_stepX; break;
	case 91: dx = m_stepX; break;
	case 88: dy = -m_stepY; break;
	case 90: dy = m_stepY; break;
	case 73:
		{
			KV *kv = 0;
			KV *t = (KV *)sub_101b6840(0x1c);
			if (t)
				kv = t->sub_101b5670("DeletePanel");
			sub_101ac8f0()->PostMessage(m_pOwner->GetVPanel(), kv, 0, 0);
		}
		break;
	}
	if (b2)
	{
		KV *kv;
		switch (code)
		{
		case 0xd:
			kv = (KV *)sub_101b6840(0x1c);
			if (kv)
				kv = kv->sub_101b5670("Copy");
			else
				kv = 0;
			sub_101ac8f0()->PostMessage(m_pOwner->GetVPanel(), kv, 0, 0);
			break;
		case 0x20:
			kv = (KV *)sub_101b6840(0x1c);
			if (kv)
				kv = kv->sub_101b5670("Paste");
			else
				kv = 0;
			sub_101ac8f0()->PostMessage(m_pOwner->GetVPanel(), kv, 0, 0);
			break;
		case 0x24:
			kv = (KV *)sub_101b6840(0x1c);
			if (kv)
				kv = kv->sub_101b5670("Undo");
			else
				kv = 0;
			sub_101ac8f0()->PostMessage(m_pOwner->GetVPanel(), kv, 0, 0);
			break;
		}
	}
	if (dx || dy)
	{
		int x, y, w, h;
		panel->sub_101a9980(&x, &y, &w, &h);
		if (b1)
			panel->sub_101a98f0(w + dx, h + dy);
		else
			panel->sub_101a9890(x + dx, y + dy);
		sub_101c2310(panel);
		panel->Repaint();
		if (panel->GetParent())
			panel->GetParent()->Repaint();
		if (m_pOwner)
		{
			KV *kv = (KV *)sub_101b6840(0x1c);
			if (kv)
				kv = kv->sub_101b5670("SetActiveControl");
			else
				kv = 0;
			kv->SetPtr("PanelPtr", GetPanel());
			sub_101ac8f0()->PostMessage(m_pOwner->GetVPanel(), kv, 0, 0);
		}
	}
}
// END FUNCTION
