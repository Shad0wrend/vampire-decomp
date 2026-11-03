// Python C API used by the server's Python bindings (PyServerSystem, the "vampire" module).
// The interpreter is imported: the game's code calls through the import slots, e.g.
// `call dword ptr [_imp__PyArg_ParseTuple (0x109f37a0)]`, so name the placeholder globals below
// (an indirect call through them encodes to the same bytes). Add the entries a function needs.
#pragma once

struct PyObject;
struct PyTypeObject;

extern int (*g_109f37a0)(PyObject *args, const char *format, ...);	// 0x109f37a0: PyArg_ParseTuple
extern PyObject *(*g_109f377c)();	// 0x109f377c: PyErr_Occurred
extern void (*g_109f37b4)(PyObject *exception, const char *message);	// 0x109f37b4: PyErr_SetString
extern PyObject *(*g_109f3798)(long value);	// 0x109f3798: PyInt_FromLong
extern PyObject **g_109f3780;	// 0x109f3780: the module slot of a Python exception object; pass *g_109f3780 to PyErr_SetString
