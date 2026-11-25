// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101710a0 size=0xb4
#include "CLabelHeader.h"

struct ITextImgLocal
{
	virtual void u00(); virtual void u01(); virtual void u02(); virtual void u03();
	virtual void u04(); virtual void u05(); virtual void u06(); virtual void u07();
	virtual void u08(); virtual void u09(); virtual void u10(); virtual void u11();
	virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15();
	virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19();
	virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23();
	virtual void u24(); virtual void u25(); virtual void u26();
	virtual void SetText(const char *text);
	virtual void u28(); virtual void u29(); virtual void u30();
	virtual unsigned long GetFont();
};

struct CDualImgLocal
{
	char pad0[0x1c];
	ITextImgLocal *m_pImages[2];
	ITextImgLocal *GetImage(int idx) { return m_pImages[idx]; }
};

struct ISurfaceLocal
{
	virtual void u00(); virtual void u01(); virtual void u02(); virtual void u03();
	virtual void u04(); virtual void u05(); virtual void u06(); virtual void u07();
	virtual void u08(); virtual void u09(); virtual void u10(); virtual void u11();
	virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15();
	virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19();
	virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23();
	virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27();
	virtual void u28(); virtual void u29(); virtual void u30(); virtual void u31();
	virtual void u32(); virtual void u33(); virtual void u34(); virtual void u35();
	virtual void u36(); virtual void u37(); virtual void u38(); virtual void u39();
	virtual void u40(); virtual void u41(); virtual void u42(); virtual void u43();
	virtual void u44(); virtual void u45(); virtual void u46(); virtual void u47();
	virtual void u48(); virtual void u49(); virtual void u50(); virtual void u51();
	virtual void u52(); virtual void u53(); virtual void u54(); virtual void u55();
	virtual void u56(); virtual void u57(); virtual void u58(); virtual void u59();
	virtual void u60(); virtual void u61(); virtual void u62(); virtual void u63();
	virtual void GetCharABCwide(unsigned long font, int ch, int &a, int &b, int &c);
};

extern ISurfaceLocal *sub_101ac8d0();
extern int sub_100cd100();

// TARGET: CLabelHeader::vfunc138
void CLabelHeader::vfunc138(int textBufferLen, const char *text)
{
	CDualImgLocal *&dualImage = *(CDualImgLocal **)((char *)this + 0xb8);
	int &gap = *(int *)((char *)this + 0xc0);

	dualImage->GetImage(0)->SetText(text);

	unsigned long font = dualImage->GetImage(0)->GetFont();
	gap = 0;
	for (const char *ch = text; *ch != 0; ch++)
	{
		int a, b, c;
		sub_101ac8d0()->GetCharABCwide(font, *ch, a, b, c);
		gap += (a + b + c);
	}

	gap += (sub_100cd100() / 640.0) * 5.0;
}
// END FUNCTION

// FUNCTION: 0x10171320 size=0xe
#include "CLabelHeader.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual void u25(); virtual void u26(); virtual void u27(); virtual void u28(); virtual void u29(); virtual int f30(); };
}
void CLabelHeader::vfunc118()
{
    ((lifted::V *)(*(int *)((char *)(*(int *)((char *)this + 0xb8)) + 0x1c)))->f30();
}
// END FUNCTION

// FUNCTION: 0x10171330 size=0x37
#include "CLabelHeader.h"
// TARGET: ??_GCLabelHeader@@UAEPAXI@Z
CLabelHeader *pcd_emit_10171330() { return new CLabelHeader(0, 0, 0); }
// END FUNCTION
