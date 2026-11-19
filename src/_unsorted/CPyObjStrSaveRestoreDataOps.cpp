// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100d0000 size=0x77
#define TEN(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SaveIf0 { TEN(a) };
struct SaveIf : SaveIf0 {
    virtual void WriteInt(int *p, int n);
    virtual void b1();
    virtual void WriteBool(bool *p, int n);
    virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
    virtual void b8(); virtual void b9();
    virtual void WriteString(const char *s);
};
struct PyObject { int ob_refcnt; void *ob_type; };
struct Field { PyObject **pField; };
__declspec(dllimport) extern char PyString_Type[];
__declspec(dllimport) char *PyString_AsString(PyObject *);
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)

struct CPySave {
    void sub_100d0000(Field *fieldInfo, SaveIf *pSave);
};

void CPySave::sub_100d0000(Field *fieldInfo, SaveIf *pSave)
{
    PyObject *obj = *fieldInfo->pField;
    bool isStr = obj != 0 && obj->ob_type == (void *)PyString_Type;
    pSave->WriteBool(&isStr, 1);
    if (isStr) {
        char *s = PyString_AsString(obj);
        int len = strlen(s);
        pSave->WriteInt(&len, 1);
        pSave->WriteString(s);
    }
}
// END FUNCTION

// FUNCTION: 0x100d00a0 size=0x70
#include "CPyObjStrSaveRestoreDataOps.h"
#define V5(a) virtual void a##0(); virtual void a##1(); virtual void a##2(); virtual void a##3(); virtual void a##4();
struct IRestoreLike {
    V5(a) V5(b)
    virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
    virtual int v14();
    virtual void f0(); virtual void f1(); virtual void v17(bool *out, int a, int b);
    virtual void g0(); virtual void g1(); virtual void g2();
    virtual void v21(char *buf, int a, int b);
};
extern void *(*g_109f37c8)(char *);
extern "C" void *malloc(unsigned);
extern "C" void free(void *);
void CPyObjStrSaveRestoreDataOps::vfunc1(SaveRestoreFieldInfo_t *field, IRestore *restore)
{
#define field ((void **)field)
#define restore ((IRestoreLike *)restore)
    void **dest = (void **)*field;
    bool has = false;
    restore->v17(&has, 1, 1);
    if (has) {
        int len = restore->v14() + 1;
        char *buf = (char *)malloc(len);
        restore->v21(buf, len, len);
        *dest = g_109f37c8(buf);
        free(buf);
    } else
        *dest = 0;
#undef restore
#undef field
}
// END FUNCTION

// FUNCTION: 0x100d0130 size=0x29
#include "CPyObjStrSaveRestoreDataOps.h"

extern void *g_109f37d0;

// TARGET: CPyObjStrSaveRestoreDataOps::vfunc2
bool CPyObjStrSaveRestoreDataOps::vfunc2(SaveRestoreFieldInfo_t *ppField)
{
	void **pObj = *(void ***)ppField;	// the field holds the Python object pointer's address
	return !(pObj && *pObj && *(void **)((char *)*pObj + 4) == g_109f37d0);	// empty unless a Python string
}
// END FUNCTION

// FUNCTION: 0x100d0170 size=0xf
#include "CPyObjStrSaveRestoreDataOps.h"
void CPyObjStrSaveRestoreDataOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
#define a0 ((int)a0)
    *(int *)((char *)(*(int *)((char *)a0))) = 0;
    a0;
#undef a0
}
// END FUNCTION

// FUNCTION: 0x100d0190 size=0x5
#include "CPyObjStrSaveRestoreDataOps.h"
bool CPyObjStrSaveRestoreDataOps::vfunc4(SaveRestoreFieldInfo_t *a0, const char *a1)
{
    return 0;
}
// END FUNCTION
