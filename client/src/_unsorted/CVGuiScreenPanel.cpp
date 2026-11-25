// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100c8c80 size=0x1e
#include "CVGuiScreenPanel.h"

// VC6 writes CVGuiScreenPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CVGuiScreenPanel *pcd_emit_100c8c80(const CVGuiScreenPanel &other) { return new CVGuiScreenPanel(other); }

// TARGET: ??_GCVGuiScreenPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100c8cd0 size=0x90
#include "CVGuiScreenPanel.h"
#include "C_BaseEntity.h"
#include "CKeyValuesX.h"
struct VGuiScreenInitData_t { C_BaseEntity *m_pEntity; };
struct IV {
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9();
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7(); virtual void b8(); virtual void b9();
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
	virtual void d0(); virtual void d1(); virtual void d2(); virtual void d3(); virtual void d4(); virtual void d5(); virtual void d6(); virtual void d7(); virtual void d8(); virtual void d9();
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3(); virtual void e4(); virtual void e5(); virtual void e6(); virtual void e7(); virtual void e8(); virtual void e9();
	virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void f4(); virtual void f5(); virtual void f6(); virtual void f7(); virtual void f8(); virtual void f9();
	virtual void g0(); virtual void g1(); virtual void g2(); virtual void g3(); virtual void g4(); virtual void g5(); virtual void g6(); virtual void g7(); virtual void g8(); virtual void g9();
	virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8(); virtual void h9();
	virtual void i0(); virtual void i1(); virtual void i2(); virtual void i3(); virtual void i4(); virtual void i5(); virtual void i6(); virtual void i7(); virtual void i8(); virtual void i9();
	virtual void j0(); virtual void j1(); virtual void j2(); virtual void j3(); virtual void j4(); virtual void j5(); virtual void j6(); virtual void j7(); virtual void j8(); virtual void j9();
	virtual void k0(); virtual void k1(); virtual void k2(); virtual void k3(); virtual void k4(); virtual void k5(); virtual void k6();
	virtual void LoadControlSettings(const char *);
};
bool CVGuiScreenPanel::vfunc118(int a1, int a2)
{
	CKeyValuesX *pKeyValues = (CKeyValuesX *)a1;
	VGuiScreenInitData_t *pInitData = (VGuiScreenInitData_t *)a2;
	if (pInitData->m_pEntity)
		m_unk78 = *pInitData->m_pEntity->vfunc1();
	else
		m_unk78 = -1;
	const char *pResFile = pKeyValues->sub_10128590("resfile", "");
	if (pResFile[0] != 0)
		((IV *)this)->LoadControlSettings(pResFile);
	int nWidth = pKeyValues->sub_101284c0("pixelswide", 240);
	int nHeight = pKeyValues->sub_101284c0("pixelshigh", 160);
	if (nWidth <= 0 || nHeight <= 0)
		return false;
	sub_101a9950(0, 0, nWidth, nHeight);
	return true;
}
// END FUNCTION

// FUNCTION: 0x100c8d60 size=0x62
#include <stddef.h>
#include "CVGuiScreenPanel.h"
#include "CBitmapButton.h"

void *sub_101ac650(size_t size);
extern int (*g_101e31bc)(const char *, const char *, int);

// TARGET: sub_100c8d60
vgui2::Panel *CVGuiScreenPanel::sub_100c8d60(vgui2::Panel *parent, const char *controlName)
{
	if (!g_101e31bc(controlName, "MaterialButton", 20))
	{
		CBitmapButton *p = (CBitmapButton *)sub_101ac650(0x224);
		if (p)
			return p->sub_10164210(parent, "BitmapButton", "");
		return 0;
	}
	return sub_101b5230(parent, controlName);
}
// END FUNCTION
