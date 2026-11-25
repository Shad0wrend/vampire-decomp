// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1004a660 size=0xc
#include "CResultProxy.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual int f3(int); };
}
void CResultProxy::vfunc2()
{
    if (((int)this) != 0) {
        ((lifted::V *)this)->f3(1);
    }
}
// END FUNCTION

// FUNCTION: 0x100e32e0 size=0x1e
#include "CResultProxy.h"

// VC6 writes CResultProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CResultProxy *pcd_emit_100e32e0(const CResultProxy &other) { return new CResultProxy(other); }

// TARGET: ??_GCResultProxy@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x100e3310 size=0xae
#include "CResultProxy.h"
#include "CKeyValuesX.h"
extern "C" char *strchr(const char *, int);
extern "C" long strtol(const char *, char **, int);
extern int (*g_101e3188)(char *, const char *, int);
struct IMaterialV { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void *FindVar(const char *name, bool *found, bool complain); };
struct CResultView { int vt; void *m_pResult; int m_Index; };
bool CResultProxy::vfunc0(void *pMaterial, void *pKeyValues)
{
	CKeyValuesX *kv = (CKeyValuesX *)pKeyValues;
	IMaterialV *mat = (IMaterialV *)pMaterial;
	CResultView *self = (CResultView *)this;
	char str[256];
	bool found;
	const char *pVarName = kv->sub_10128590("resultVar", "");
	if (!pVarName)
		return false;
	if (strchr(pVarName, '[')) {
		g_101e3188(str, pVarName, 256);
		char *pIndex = strchr(str, '[');
		*pIndex = 0;
		pIndex++;
		char *end;
		self->m_Index = strtol(pIndex, &end, 10);
		pVarName = str;
	} else {
		self->m_Index = -1;
	}
	self->m_pResult = mat->FindVar(pVarName, &found, true);
	return (bool)(found != false);
}
// END FUNCTION
