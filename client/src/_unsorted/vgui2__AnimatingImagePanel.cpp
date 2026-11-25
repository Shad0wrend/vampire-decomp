// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101c55d0 size=0x10
#include "vgui2__AnimatingImagePanel.h"
namespace lifted {
int sub_101ab2f0();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual int f6(); };
}
void vgui2::AnimatingImagePanel::vfunc101()
{
    lifted::sub_101ab2f0();
    ((lifted::V *)this)->f6();
}
// END FUNCTION

// FUNCTION: 0x101c55e0 size=0xcd
#include "vgui2__AnimatingImagePanel.h"
#include "utlvector.h"

struct AnimV
{
	char pad[0x64];
	CUtlVector<void *> m_Images;
};

struct ImageView
{
	virtual void v0();
	virtual void v1();
	virtual void v2(int *w, int *h);
};

struct PanelHelper
{
	void sub_101a98f0(int w, int h);
};

void vgui2::AnimatingImagePanel::vfunc107(void *pImage)
{
	((AnimV *)this)->m_Images.AddToTail(pImage);
	if (pImage)
	{
		int w, h;
		((ImageView *)pImage)->v2(&w, &h);
		((PanelHelper *)this)->sub_101a98f0(w, h);
	}
}
// END FUNCTION

// FUNCTION: 0x101c56b0 size=0x86
#include "vgui2__AnimatingImagePanel.h"
#include <stdio.h>
struct SchemeV108 { virtual void v0(); virtual void *GetImage(const char *name); };
struct SchemeMgrV108 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual SchemeV108 *GetScheme(int id); };
SchemeMgrV108 *sub_101ac8c0();
// TARGET: vgui2::AnimatingImagePanel::vfunc108
void vgui2::AnimatingImagePanel::vfunc108(const char *pszPrefix, int nFrames)
{
	SchemeV108 *pScheme = sub_101ac8c0()->GetScheme(sub_101aa220());
	m_i70 = 0;
	for (int i = 1; i <= nFrames; i++)
	{
		char filename[512];
		sprintf(filename, "%s%d", pszPrefix, i);
		vfunc107(pScheme->GetImage(filename));
	}
}
// END FUNCTION

// FUNCTION: 0x101c5740 size=0x48
#include "vgui2__AnimatingImagePanel.h"
struct ImgView { virtual void Paint(); };
struct AIPView {
    char pad[0x58]; int m_iCur; char pad2[0x64 - 0x5c]; ImgView **m_pFrames; int m_u68; int m_u6c; int m_nFrames;
};
struct SurfView11 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10();
    virtual void Slot11(int, int, int, int);
};
SurfView11 *sub_101ac8d0();
// TARGET: vgui2::AnimatingImagePanel::vfunc97
void vgui2::AnimatingImagePanel::vfunc97()
{
    AIPView *v = (AIPView *)this;
    if (v->m_iCur >= 0 && v->m_iCur < v->m_nFrames && v->m_pFrames[v->m_iCur]) {
        sub_101ac8d0()->Slot11(255, 255, 255, 255);
        v->m_pFrames[v->m_iCur]->Paint();
    }
}
// END FUNCTION

// FUNCTION: 0x101c5790 size=0x49
struct Sys { virtual void a0(){} virtual void a1(){} virtual void a2(){} virtual void a3(){} virtual int GetTimeMillis(){return 0;} };
Sys *sub_101ac8e0();
struct View { virtual void v0(){} virtual void v1(){} virtual void v2(){} virtual void v3(){} virtual void v4(){} virtual void v5(){} virtual void Repaint(){}
 int pad[(0x58-4)/4]; int m_iCur; int m_iNext; int p60; void *p64; int p68; int p6c; int m_iCount;
 bool IsValid(int i) { return i >= 0 && i < m_iCount; } };
void __fastcall sub_101c5790(View *self) {
 if (sub_101ac8e0()->GetTimeMillis() >= self->m_iNext) {
  self->m_iNext = sub_101ac8e0()->GetTimeMillis() + 100;
  if (!self->IsValid(++self->m_iCur)) self->m_iCur = 0;
  self->Repaint();
 }
}
// END FUNCTION

// FUNCTION: 0x101c57e0 size=0x27
#include "vgui2__AnimatingImagePanel.h"
namespace lifted {
extern char g_102da744;
struct C101ab750 { int sub_101ab750(int); };
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual int f14(int, int); };
}
int vgui2::AnimatingImagePanel::vfunc76(int a0)
{
    int t0 = ((lifted::C101ab750 *)this)->sub_101ab750(a0);
    if ((*(int *)((char *)this + 0x78)) != 0) {
        return ((lifted::V *)a0)->f14((int)&lifted::g_102da744, *(int *)((char *)this + 0x78));
    }
    return t0;
}
// END FUNCTION

// FUNCTION: 0x101c5810 size=0x78
#include <string.h>
#include "vgui2__AnimatingImagePanel.h"

struct KVv
{
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4();
	virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8();
	virtual int GetInt(const char *key, int def);
	virtual float GetFloat(const char *key, float def);
	virtual const char *GetString(const char *key, const char *def);
};

struct PanelInvoke { void sub_101ab4e0(int); };

void vgui2::AnimatingImagePanel::vfunc75(int kv_)
{
	KVv *kv = (KVv *)kv_;
	((PanelInvoke *)this)->sub_101ab4e0(kv_);
	const char *image = kv->GetString("image", 0);
	if (image)
	{
		delete *(char **)((char *)this + 0x78);
		*(char **)((char *)this + 0x78) = new char[strlen(image) + 1];
		strcpy(*(char **)((char *)this + 0x78), image);
		vfunc108(*(char **)((char *)this + 0x78), kv->GetInt("frames", 0));
	}
}
// END FUNCTION

// FUNCTION: 0x101c5890 size=0x23
#include "vgui2__AnimatingImagePanel.h"
namespace lifted {
extern char g_102da754;
extern char g_1067b4a0;
int sub_101ab860();
int sub_101d3192(int, int, int, int);
}
int vgui2::AnimatingImagePanel::vfunc77()
{
    lifted::sub_101d3192((int)&lifted::g_1067b4a0, 0x400, (int)&lifted::g_102da754, lifted::sub_101ab860());
    return (int)&lifted::g_1067b4a0;
}
// END FUNCTION

// FUNCTION: 0x101c5910 size=0x6
#include "vgui2__AnimatingImagePanel.h"
namespace lifted {
extern char g_102da708;
}
int vgui2::AnimatingImagePanel::vfunc102()
{
    return (int)&lifted::g_102da708;
}
// END FUNCTION
