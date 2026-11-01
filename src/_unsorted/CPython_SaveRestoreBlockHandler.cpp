// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019ada0 size=0x6
#include "CPython_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_1055e570;
}
int CPython_SaveRestoreBlockHandler::vfunc0()
{
    return (int)&lifted::g_1055e570;
}
// END FUNCTION

// FUNCTION: 0x1019adc0 size=0x252
#include "CPython_SaveRestoreBlockHandler.h"

struct PyObj;
struct PyType { int m_pad[6]; void (*tp_dealloc)(PyObj *); };
struct PyObj { int ob_refcnt; PyType *ob_type; };

PyObj *sub_1019be80(const char *pszModule, const char *pszName);
PyObj *sub_1019b9d0(IWritePy *pSave);
int sub_1019bae0(PyObj *pObj);
extern "C" __declspec(dllimport) int PyCallable_Check(PyObj *op);
extern "C" __declspec(dllimport) PyObj *PyObject_CallFunction(PyObj *callable, const char *format, ...);
extern "C" __declspec(dllimport) void PyErr_Print();
extern PyObj *g_1072b370;
extern PyObj *g_1072b374;

#define Py_INCREF(op) ((op)->ob_refcnt++)
#define Py_DECREF(op) if (--(op)->ob_refcnt != 0) ; else (*(op)->ob_type->tp_dealloc)((PyObj *)(op))

static __inline bool SaveOne(IWritePy *pSave, PyObj *pDump, PyObj *pObj)
{
	bool bWrote = false;
	if (pObj) {
		char bHas = 1;
		int nSize = 0;
		pSave->WriteBool(&bHas, 1);
		int nPos = pSave->Tell();
		pSave->WriteInt(&nSize, 1);
		PyObj *pWrap = sub_1019b9d0(pSave);
		if (pWrap) {
			PyObj *pRes = PyObject_CallFunction(pDump, "OO", pObj, pWrap);
			if (pRes) {
				bWrote = true;
				nSize = sub_1019bae0(pWrap);
				pSave->Seek(nPos);
				pSave->WriteInt(&nSize, 1);
				pSave->Seek(nPos + nSize + 4);
				Py_DECREF(pRes);
			}
			Py_DECREF(pWrap);
		}
	} else {
		char bNone = 0;
		pSave->WriteBool(&bNone, 1);
	}
	return bWrote;
}

void CPython_SaveRestoreBlockHandler::vfunc2(IWritePy *pSave)
{
	PyObj *pDump = sub_1019be80("cPickle", "dump");
	bool bOk = false;
	if (pDump) {
		Py_INCREF(pDump);
		if (PyCallable_Check(pDump)) {
			if (SaveOne(pSave, pDump, g_1072b370)) {
				if (SaveOne(pSave, pDump, g_1072b374))
					bOk = true;
			}
		}
		Py_DECREF(pDump);
	}
	if (!bOk)
		PyErr_Print();
}
// END FUNCTION

// FUNCTION: 0x1019b0c0 size=0x13
#include "vampire.h"

struct CUnknown1019b0c0
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(const void *pData, int a);
};

extern char g_1058f650[];

// TARGET: sub_1019b0c0
void __stdcall sub_1019b0c0(CUnknown1019b0c0 *pObj)
{
	pObj->v8(g_1058f650, 1);
}
// END FUNCTION

// FUNCTION: 0x1019b0f0 size=0x2b
#include "CPython_SaveRestoreBlockHandler.h"

extern short g_1058f650;

// TARGET: CPython_SaveRestoreBlockHandler::vfunc6
void CPython_SaveRestoreBlockHandler::vfunc6(IRestorePy *pRestore)
{
	short version;
	pRestore->ReadShort(&version, 1, 0);
	m_bEnabled = (version == g_1058f650);
}
// END FUNCTION
