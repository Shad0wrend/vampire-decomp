// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10052eb0 size=0x1e
#include "CHudDialog.h"

// VC6 writes CHudDialog's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CHudDialog *pcd_emit_10052eb0(const CHudDialog &other) { return new CHudDialog(other); }

// TARGET: ??_GCHudDialog@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x10053080 size=0x6f
#include "CHudDialog.h"

class GBView
{
public:
	virtual void v0();
	virtual bool vfunc1();
	char m_pad0004[0x2c - 4];
	void *m_p2c;
};

struct CHudDialogView
{
	char m_pad1a4[0x1a4];
	float m_fl1a4;		// 0x1a4
	char m_pad1a8[0x1b1 - 0x1a8];
	bool m_b1b1;
	bool m_b1b2;
	bool m_b1b3;
	bool m_b1b4;
};

extern int g_103ee0f4;

bool CHudDialog::vfunc107()
{
	CHudDialogView *v = (CHudDialogView *)this;

	if ( !((GBView *)g_103ee0f4)->vfunc1() )
	{
		if ( ((GBView *)g_103ee0f4)->m_p2c )
			return false;
	}

	if ( v->m_b1b4 && ( v->m_b1b2 || v->m_b1b1 || v->m_b1b3 ) )
		return true;

	return v->m_fl1a4 > 0.0f;
}
// END FUNCTION

// FUNCTION: 0x10054440 size=0x1
#include "CHudDialog.h"
void CHudDialog::vfunc97()
{
}
// END FUNCTION

// FUNCTION: 0x10054550 size=0x75
#include "CHudDialog.h"
#include "ScopeTrace.h"

void CHudDialog::SetDrawLastPickEnabled(bool bEnabled)
{
    ScopeTrace trace("CHudDialog::SetDrawLastPickEnabled", "", "");
    if (*(bool *)((char *)this + 0x1b3) != bEnabled)
        *(char *)((char *)this + 0x190) = 1;
    *(bool *)((char *)this + 0x1b3) = bEnabled;
}
// END FUNCTION

// FUNCTION: 0x10054b50 size=0x7
#include "CHudDialog.h"
bool CHudDialog::vfunc116()
{
    return *(bool *)((char *)this + 0x1b4);
}
// END FUNCTION

// FUNCTION: 0x10054d10 size=0x69
#include "CHudDialog.h"
#include "ScopeTrace.h"

struct DialogView { char pad[0x18c]; int m_unk18c; };

void CHudDialog::ScrollDn()
{
	ScopeTrace scope("CHudDialog::ScrollDn", g_102de300);
	if ( ((DialogView *)this)->m_unk18c > 0 )
		((DialogView *)this)->m_unk18c--;
}
// END FUNCTION
