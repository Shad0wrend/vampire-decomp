// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1019ada0 size=0x6
#include "CPython_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_1055e570;
}
const char *CPython_SaveRestoreBlockHandler::GetBlockName()
{
    return &lifted::g_1055e570;
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

void CPython_SaveRestoreBlockHandler::Save(ISave *pSave)
{
	PyObj *pDump = sub_1019be80("cPickle", "dump");
	bool bOk = false;
	if (pDump) {
		Py_INCREF(pDump);
		if (PyCallable_Check(pDump)) {
			if (SaveOne((IWritePy *)pSave, pDump, g_1072b370)) {
				if (SaveOne((IWritePy *)pSave, pDump, g_1072b374))
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
#include "CPython_SaveRestoreBlockHandler.h"
#include "ISave.h"

extern char g_1058f650[];

void CPython_SaveRestoreBlockHandler::WriteSaveHeaders(ISave *pSave)
{
	pSave->vfunc8(g_1058f650, 1);
}
// END FUNCTION

// FUNCTION: 0x1019b0f0 size=0x2b
#include "CPython_SaveRestoreBlockHandler.h"

extern short g_1058f650;

void CPython_SaveRestoreBlockHandler::ReadRestoreHeaders(IRestore *pRestore)
{
	short version;
	((IRestorePy *)pRestore)->ReadShort(&version, 1, 0);
	m_bEnabled = (version == g_1058f650);
}
// END FUNCTION

// FUNCTION: 0x1019b130 size=0x1b7
#include "CPython_SaveRestoreBlockHandler.h"

struct PyObj;
struct PyType { int m_pad[6]; void (*tp_dealloc)(PyObj *); };
struct PyObj { int ob_refcnt; PyType *ob_type; };
struct CPyObjWrap : PyObj { int m_pad[2]; };
struct CPyObjVirt;

PyObj *sub_1019be80(const char *pszModule, const char *pszName);
CPyObjWrap *sub_1019bb10(CPyObjVirt *pObj, int nOffset);
extern "C" __declspec(dllimport) int PyCallable_Check(PyObj *op);
extern "C" __declspec(dllimport) PyObj *PyObject_CallFunction(PyObj *callable, const char *format, ...);
extern "C" __declspec(dllimport) void PyErr_Print();
extern PyObj *g_1072b370;
extern PyObj *g_1072b374;

#define Py_INCREF(op) ((op)->ob_refcnt++)
#define Py_DECREF(op) if (--(op)->ob_refcnt != 0) ; else (*(op)->ob_type->tp_dealloc)((PyObj *)(op))
#define Py_XDECREF(op) if ((op) == 0) ; else Py_DECREF(op)

void CPython_SaveRestoreBlockHandler::Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused)
{
	if (m_bEnabled) {
		PyObj *pFunc = sub_1019be80("cPickle", "load");
		if (pFunc) {
			Py_INCREF(pFunc);
			Py_XDECREF(g_1072b370);
			PyObj *pResult = 0;
			int n;
			{
				char bHas;
				((IRestorePy *)pRestore)->ReadBool(&bHas, 1, 0);
				if (bHas) {
					((IRestorePy *)pRestore)->ReadInt(&n, 1, 0);
					Py_INCREF(pFunc);
					if (PyCallable_Check(pFunc)) {
						CPyObjWrap *pWrap = sub_1019bb10((CPyObjVirt *)pRestore, n);
						if (pWrap) {
							pResult = PyObject_CallFunction(pFunc, "O", pWrap);
							Py_DECREF(pWrap);
						}
					}
					Py_DECREF(pFunc);
				}
			}
			g_1072b370 = pResult;
			Py_XDECREF(g_1072b374);
			pResult = 0;
			{
				char bHas;
				((IRestorePy *)pRestore)->ReadBool(&bHas, 1, 0);
				if (bHas) {
					((IRestorePy *)pRestore)->ReadInt(&n, 1, 0);
					Py_INCREF(pFunc);
					if (PyCallable_Check(pFunc)) {
						CPyObjWrap *pWrap = sub_1019bb10((CPyObjVirt *)pRestore, n);
						if (pWrap) {
							pResult = PyObject_CallFunction(pFunc, "O", pWrap);
							Py_DECREF(pWrap);
						}
					}
					Py_DECREF(pFunc);
				}
			}
			g_1072b374 = pResult;
			if (g_1072b370 == 0 || g_1072b374 == 0)
				PyErr_Print();
			Py_DECREF(pFunc);
		}
	}
}
// END FUNCTION
