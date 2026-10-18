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
