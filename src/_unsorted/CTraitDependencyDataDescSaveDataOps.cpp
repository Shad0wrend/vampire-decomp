// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102054b0 size=0xb1
#include "CSave.h"
#include "CTraitDependencyDataDescSaveDataOps.h"
extern char g_106b8540[];
extern "C" unsigned int strlen(const char *);
#pragma intrinsic(strlen)

void CTraitDependencyDataDescSaveDataOps::vfunc0(SaveRestoreFieldInfo_t *pField, ISave *pSave)
{
#define pField ((CTraitDependencyField *)pField)
#define pSave ((CSave *)pSave)
    CTraitDependencyData *d = pField->m_pData;
    pSave->vfunc10(&d->m_type, 1);
    pSave->vfunc10(&d->m_value, 1);
    if (*(volatile int *)&d->m_value != -1) {
        switch (d->m_type) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 8:
            pSave->vfunc10(&d->m_value, 1);
            break;
        case 6: case 7: {
            const char *p = (const char *)d->m_value;
            const char *s = p ? p : g_106b8540;
            int len = strlen(s) + 1;
            pSave->vfunc10(&len, 1);
            pSave->vfunc20(s);
            break;
        }
        default:
            break;
        }
    }
    pSave->vfunc12(&d->m_flag, 1);
    pSave->vfunc10(&d->m_extra, 1);
#undef pSave
#undef pField
}
// END FUNCTION

// FUNCTION: 0x102055a0 size=0x92
#include "CTraitDependencyDataDescSaveDataOps.h"

struct RestoreIface {
	virtual void s0();
	virtual void s1();
	virtual void s2();
	virtual void s3();
	virtual void s4();
	virtual void s5();
	virtual void s6();
	virtual void s7();
	virtual void s8();
	virtual void s9();
	virtual void s10();
	virtual void s11();
	virtual void s12();
	virtual void s13();
	virtual int ReadInt();
	virtual void s15();
	virtual char ReadBool();
	virtual void s17();
	virtual void s18();
	virtual void s19();
	virtual void Read(void *pDest, int size, int count);
};

void sub_1000ca5e();

void CTraitDependencyDataDescSaveDataOps::vfunc1(SaveRestoreFieldInfo_t *pField, IRestore *pRestore)
{
#define pField ((CTraitDependencyField *)pField)
	RestoreIface *r = (RestoreIface *)pRestore;
	CTraitDependencyData *d = pField->m_pData;
	d->m_type = r->ReadInt();
	d->m_value = r->ReadInt();
	if (d->m_value != -1) {
		switch (d->m_type) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 8:
			d->m_value = r->ReadInt();
			break;
		case 6:
		case 7: {
			int count = r->ReadInt();
			r->Read(&d->m_value, 1, count);
			break;
		}
		case 9:
			d->m_value = (int)sub_1000ca5e;
			break;
		}
	}
	d->m_flag = r->ReadBool();
	d->m_extra = r->ReadInt();
#undef pField
}
// END FUNCTION

// FUNCTION: 0x10205670 size=0x5
#include "CTraitDependencyDataDescSaveDataOps.h"
bool CTraitDependencyDataDescSaveDataOps::vfunc2(SaveRestoreFieldInfo_t *a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10205690 size=0x3
#include "CTraitDependencyDataDescSaveDataOps.h"
void CTraitDependencyDataDescSaveDataOps::vfunc3(SaveRestoreFieldInfo_t *a0)
{
}
// END FUNCTION

// FUNCTION: 0x102056b0 size=0x5
#include "CTraitDependencyDataDescSaveDataOps.h"
bool CTraitDependencyDataDescSaveDataOps::vfunc4(SaveRestoreFieldInfo_t *a0, const char *a1)
{
    return 1;
}
// END FUNCTION
