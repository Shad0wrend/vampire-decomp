// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101766a0 size=0x1e
#include "CharEditCharPanel.h"

// VC6 writes CharEditCharPanel's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CharEditCharPanel *pcd_emit_101766a0(const CharEditCharPanel &other) { return new CharEditCharPanel(other); }

// TARGET: ??_GCharEditCharPanel@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10177370 size=0xb7
#include "CharEditCharPanel.h"
#include <string.h>

extern void sub_10179840();

struct IEngine_10177370
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual void v25(); virtual void v26();
	virtual void v27(const char *cmd, int flag);
};

struct CCharEditPanel_10177370
{
	char m_pad0[0x274];
	int m_unk274;
	void sub_101733d0(int a);
	void sub_101744c0(int a);
};

struct CHud_10177370
{
	CCharEditPanel_10177370 *sub_100f0ed0(const char *name);
};

struct CCharEditCharPanel_10177370
{
	void sub_10177a20();
};

extern CHud_10177370 g_104cfe38;
extern IEngine_10177370 *g_104a57d4;

// TARGET: ?vfunc78@CharEditCharPanel@@UAEXH@Z
void CharEditCharPanel::vfunc78(int command)
{
	const char *pszCommand = (const char *)command;
	if (!_strcmpi(pszCommand, "refresh"))
	{
		((CCharEditCharPanel_10177370 *)this)->sub_10177a20();
	}
	else if (!_strcmpi(pszCommand, "play"))
	{
		sub_10179840();
		CCharEditPanel_10177370 *pPanel = g_104cfe38.sub_100f0ed0("CharEditPanel");
		pPanel->sub_101733d0(0);
		pPanel->m_unk274 = 0;
		g_104a57d4->v27("vclan teamchoose done", 1);
	}
	else if (!_strcmpi(pszCommand, "next"))
	{
		CCharEditPanel_10177370 *pPanel = g_104cfe38.sub_100f0ed0("CharEditPanel");
		pPanel->sub_101744c0(1);
	}
	else
	{
		typedef vgui2::Panel BaseClass;
		BaseClass::vfunc78(command);
	}
}
// END FUNCTION

// FUNCTION: 0x10177990 size=0x6
#include "CharEditCharPanel.h"
namespace lifted {
extern char g_102d0928;
}
int CharEditCharPanel::vfunc102()
{
    return (int)&lifted::g_102d0928;
}
// END FUNCTION

// FUNCTION: 0x10177a00 size=0x1
#include "CharEditCharPanel.h"
void CharEditCharPanel::vfunc119()
{
}
// END FUNCTION

// FUNCTION: 0x10177ad0 size=0x28
#include "CharEditCharPanel.h"
namespace lifted {
struct C10177ea0 { int sub_10177ea0(); };
struct C10177eb0 { int sub_10177eb0(); };
struct C101a99f0 { int sub_101a99f0(int); };
}
int CharEditCharPanel::vfunc21(int a0)
{
    int t0 = ((lifted::C101a99f0 *)this)->sub_101a99f0(a0);
    if (((char)a0) != 0) {
        return ((lifted::C10177eb0 *)this)->sub_10177eb0();
    }
    return ((lifted::C10177ea0 *)this)->sub_10177ea0();
}
// END FUNCTION

// FUNCTION: 0x10177b00 size=0x10
#include "CharEditCharPanel.h"
namespace lifted {
struct C10176f80 { int sub_10176f80(); };
struct C101ab2f0 { int sub_101ab2f0(); };
}
void CharEditCharPanel::vfunc101()
{
    ((lifted::C101ab2f0 *)this)->sub_101ab2f0();
    ((lifted::C10176f80 *)this)->sub_10176f80();
}
// END FUNCTION
