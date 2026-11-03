// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10199f40 size=0x1e
#include "PyServerSystem.h"

// TARGET: PyServerSystem::vfunc8
PyServerSystem *PyServerSystem::vfunc8(unsigned int flags)
{
	sub_1000cfbd();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1019a3d0 size=0x82
#include "PyServerSystem.h"

struct PyObject;
struct PyTypeObject {
    char pad[0x18];
    void (*tp_dealloc)(PyObject *);
};
struct PyObject {
    int ob_refcnt;
    PyTypeObject *ob_type;
};

extern PyObject *(*g_109f3714)(void);
extern PyObject *(*g_109f37c8)(const char *);
extern int (*g_109f3710)(PyObject *, PyObject *);
extern int g_1072b364;
extern int g_1072b36c;
extern PyObject *g_1072b370;
extern PyObject *g_1072b374;

#define XDECREF(op) \
    if (op) { \
        if (--(op)->ob_refcnt == 0) \
            (*(op)->ob_type->tp_dealloc)(op); \
    }

void PyServerSystem::vfunc1()
{
    PyObject *dict = g_109f3714();
    PyObject *name = g_109f37c8("vampire");
    if (dict && name)
        g_109f3710(dict, name);
    g_1072b364 = 0;
    g_1072b36c = 0;
    XDECREF(g_1072b370);
    XDECREF(g_1072b374);
}
// END FUNCTION

// FUNCTION: 0x1019a490 size=0x3e
#include "vampire.h"

extern int (*g_109f36fc)(const char *pszCommand);
extern int g_1059195c;
int sub_1019b380(int a);
void sub_1019be10(const char *pszModule, int value, int *pValue);

// TARGET: sub_1019a490
void sub_1019a490()
{
    int (*pfnRun)(const char *) = g_109f36fc;
    pfnRun("import __main__");
    pfnRun("from vampire import *");
    pfnRun("from vamputil import *");
    sub_1019be10("__main__", sub_1019b380(0), &g_1059195c);
}
// END FUNCTION

// FUNCTION: 0x1019a4e0 size=0x307
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include <string.h>
#include "PyServerSystem.h"
#include "ScopeTrace.h"
#include "globalvars.h"
#include "engineserver.h"

extern "C" __declspec(dllimport) int PyRun_SimpleString(const char *);
extern void (__cdecl *g_109f364c)(const char *fmt, ...);
extern void (__cdecl *g_109f3630)(const char *fmt, ...);
extern "C" __declspec(dllimport) int Q_snprintf(char *buf, int n, const char *fmt, ...);
void sub_101d2850(char *psz, int n);

struct PyUnk4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void *vfunc4(); };
struct PyEdict40 { char pad[0x40]; PyUnk4 *pUnk; };
struct PyWorld458 { char pad[0x458]; const char *pszName; };

void PyServerSystem::vfunc3()
{
	void *pWorld;
	PyEdict40 *pEdict = (PyEdict40 *)engine->vfunc38(0);
	{
		ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
		if (!pEdict)
			pEdict = (PyEdict40 *)engine->vfunc38(0);
		if (pEdict && pEdict->pUnk)
			pWorld = pEdict->pUnk->vfunc4();
		else
			pWorld = 0;
	}
	if (!pWorld) {
		g_109f364c("Null World Entity pointer in LevelInitPostEntity");
		return;
	}
	const char *pszName = ((PyWorld458 *)pWorld)->pszName ? ((PyWorld458 *)pWorld)->pszName : g_106b8540;
	if (pszName && *pszName) {
		char szGameDir[128];
		engine->vfunc89(szGameDir);
		while (1) {
			char *p = strstr(szGameDir, "\\");
			if (!p)
				break;
			*p = '/';
		}
		char buf[256];
		memset(buf, 0, sizeof(buf));
		strcat(buf, "sys.path.append(\"");
		strcat(buf, szGameDir);
		strcat(buf, "/python/");
		strcat(buf, pszName);
		strcat(buf, "\")");
		if (PyRun_SimpleString(buf) == -1)
			g_109f3630("Error while adding level script path.");
		memset(buf, 0, sizeof(buf));
		strcat(buf, "from ");
		strcat(buf, pszName);
		strcat(buf, " import *");
		if (PyRun_SimpleString(buf) == -1) {
			g_109f3630("\n\n\n\n+++++++++++++++Python Error!+++++++++++++++\n\nError while importing level script. : %s\n+++++++++++++++\n\n\n\n", buf);
			return;
		}
		char szPatch[128];
		Q_snprintf(szPatch, 128, "%s_patch()", gpGlobals->mapname ? gpGlobals->mapname : g_106b8540);
		_strlwr(szPatch);
		sub_101d2850(szPatch, 0x100);
	}
}
// END FUNCTION

// FUNCTION: 0x1019a8c0 size=0x1
#include "PyServerSystem.h"
void PyServerSystem::vfunc4()
{
}
// END FUNCTION
