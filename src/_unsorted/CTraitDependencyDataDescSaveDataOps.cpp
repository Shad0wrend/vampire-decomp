// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

void CTraitDependencyDataDescSaveDataOps::vfunc1(CTraitDependencyField *pField, void *pRestore)
{
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
}
// END FUNCTION
