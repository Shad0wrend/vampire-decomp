// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b9bc0 size=0x70
#include "vgui2__TextImage.h"

int sub_101ac8c0();

struct ISchemeTmp
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual int GetFont(const char *fontName);
};

struct ISchemeManagerTmp
{
	virtual void v0();
	virtual void v1();
	virtual void v2();
	virtual void v3();
	virtual ISchemeTmp *GetIScheme(unsigned long scheme);
};

vgui2::TextImage::TextImage(const char *text, unsigned long scheme)
	: Image()
{
	m_pText = 0;
	m_unk20 = 0;
	m_font = ((ISchemeManagerTmp *)sub_101ac8c0())->GetIScheme(scheme)->GetFont("Default");
	m_unk2c = 0xffff;
	m_unk28 = 0;
	m_unk20 = 0;
	m_unk22 = 0;
	m_unk30 = false;
	m_unk35 = true;
	vfunc27(text);
}
// END FUNCTION

// FUNCTION: 0x101b9c30 size=0x1e
#include "vgui2__TextImage.h"

// VC6 writes vgui2::TextImage's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
vgui2::TextImage *pcd_emit_101b9c30(const vgui2::TextImage &other) { return new vgui2::TextImage(other); }

// TARGET: ??_GTextImage@vgui2@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x101b9c50 size=0x1d
#include "vgui2__TextImage.h"
vgui2::TextImage::~TextImage()
{
	delete m_pText;
}
// END FUNCTION

// FUNCTION: 0x101b9d70 size=0x7c
#include "vgui2__TextImage.h"
extern "C" {
size_t wcslen(const unsigned short *);
unsigned short *wcscpy(unsigned short *, const unsigned short *);
}
void vgui2::TextImage::vfunc26(const unsigned short *text)
{
	short len = (short)wcslen(text);
	m_unk22 = len;
	if (len >= m_unk20) {
		delete m_pText;
		m_unk20 = m_unk22 + 1;
		m_pText = (char *)new char[m_unk20 * 2];
	}
	wcscpy((unsigned short *)m_pText, text);
	int w, h;
	vfunc33(&w, &h, (int)m_pText);
	vfunc9(w, h);
}
// END FUNCTION

// FUNCTION: 0x101b9df0 size=0x21
#include "vgui2__TextImage.h"
namespace lifted {
int sub_101ac920();
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual int f8(int, int, int); };
}
int vgui2::TextImage::vfunc28(int a0, int a1)
{
    return ((lifted::V *)(lifted::sub_101ac920()))->f8(*(int *)((char *)this + 0x1c), a0, a1);
}
// END FUNCTION

// FUNCTION: 0x101b9e20 size=0x59
#include "vgui2__TextImage.h"

struct CTextImageLayout
{
	char m_pad00[0x2c];
	int m_i2c;
};

class ILocalizeView
{
public:
	virtual void l0() = 0;
	virtual void l1() = 0;
	virtual void l2() = 0;
	virtual void l3() = 0;
	virtual void l4() = 0;
	virtual void l5() = 0;
	virtual void l6() = 0;
	virtual void l7() = 0;
	virtual void l8() = 0;
	virtual void l9() = 0;
	virtual void l10() = 0;
	virtual char *l11(unsigned short) = 0;
};

void *sub_101ac920();

extern "C" char *__cdecl strncpy(char *, const char *, unsigned int);

// TARGET: vgui2::TextImage::vfunc29
void vgui2::TextImage::vfunc29(char *buf, int size)
{
	CTextImageLayout *s = (CTextImageLayout *)this;
	if (s->m_i2c != 0xffff)
	{
		const char *txt = ((ILocalizeView *)sub_101ac920())->l11((unsigned short)s->m_i2c);
		buf[0] = '#';
		strncpy(buf + 1, txt, size - 1);
		buf[size - 1] = 0;
	}
	else
	{
		vfunc28((int)buf, size);
	}
}
// END FUNCTION

// FUNCTION: 0x101b9e80 size=0x39
#include "vgui2__TextImage.h"
struct TIView { char pad[0x1c]; int m1c; int m20; int m24; };
// TARGET: vgui2::TextImage::vfunc30
void vgui2::TextImage::vfunc30(int v)
{
    int local;
    ((TIView *)this)->m24 = v;
    vfunc33(&local, &v, ((TIView *)this)->m1c);
    vfunc9(local, v);
}
// END FUNCTION

// FUNCTION: 0x101b9ec0 size=0x4
#include "vgui2__TextImage.h"
int vgui2::TextImage::vfunc31()
{
    return *(int *)((char *)this + 0x24);
}
// END FUNCTION

// FUNCTION: 0x101b9ed0 size=0x1b
#include "vgui2__TextImage.h"
namespace lifted {
int __stdcall sub_101b6990(int, int);
}
int vgui2::TextImage::vfunc9(int a0, int a1)
{
    int t0 = lifted::sub_101b6990(a0, a1);
    *(int *)((char *)this + 0x28) = a0;
    return t0;
}
// END FUNCTION

// FUNCTION: 0x101ba7f0 size=0x19
#include "vgui2__TextImage.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31(); virtual void u32(); virtual int f33(int, int, int); };
}
int vgui2::TextImage::vfunc32(int a0, int a1)
{
    return ((lifted::V *)this)->f33(a0, a1, *(int *)((char *)this + 0x1c));
}
// END FUNCTION
