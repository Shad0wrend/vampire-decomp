// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x100eea80 size=0x45
#include "PrecacheEffectGlow.h"
struct IMat {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(int); virtual void v13(int);
};
struct IMatSys {
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
	virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
	virtual IMat *FindMaterial(const char *name, bool *found, bool complain);
};
extern IMatSys *g_104a57ec;
extern const char *g_102bba80;
// TARGET: PrecacheEffectGlow::ClientEffectRegister::vfunc0
void PrecacheEffectGlow::ClientEffectRegister::vfunc0(bool on) {
	bool found;
	bool *pf = &found;
	const char *name = g_102bba80;
	IMat *m = g_104a57ec->FindMaterial(name, pf, true);
	if (found && m) {
		if (on)
			m->v12(0);
		else
			m->v13(0);
	}
}
// END FUNCTION
