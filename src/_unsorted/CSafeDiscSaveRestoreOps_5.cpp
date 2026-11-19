// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1042f7b0 size=0x46
#include "CSafeDiscSaveRestoreOps_5.h"

int sub_10430280(unsigned int h);

#define HASH(x) (((((((x) & 0x2b5dc235) ^ 0xd0d39db6) - 0x3a63398c) & 0x54a23dca) ^ (x)) ^ 0xc8127e9d)

// TARGET: CSafeDiscSaveRestoreOps_5::vfunc0
void CSafeDiscSaveRestoreOps_5::vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave)
{
	int v = HASH((*(int **)fieldInfo)[2]);
	fieldInfo = (SaveRestoreFieldInfo_t *)sub_10430280(v);
	((CSafeDiscWriter *)pSave)->vfunc10((int *)&fieldInfo, 1);
}
// END FUNCTION

// FUNCTION: 0x1042f820 size=0x56
#include "CSafeDiscSaveRestoreOps_5.h"
unsigned int sub_104301d0(int x);

struct SDValue5
{
	char a;
	char b;
	unsigned int v;
	SDValue5 &operator=(const SDValue5 &o)
	{
		b = o.b;
		v = o.v;
		a = o.a;
		return *this;
	}
};

struct SDObj5
{
	int m_n0;
	SDValue5 m_val;
};

void CSafeDiscSaveRestoreOps_5::vfunc1(SaveRestoreFieldInfo_t *ppObject, IRestore *pRestore)
{
#define ppObject ((int **)ppObject)
#define pRestore ((CSafeDiscReader *)pRestore)
	SDObj5 *p = (SDObj5 *)*ppObject;
	SDValue5 tmp;
	unsigned int x = sub_104301d0(pRestore->vfunc14());
	tmp.v = (((x & 0x2b5dc235) ^ 0xd8c3dfa3) - 0x3a63398c & 0x54a23dca) ^ x ^ 0xc8127e9d;
	p->m_val = tmp;
#undef pRestore
#undef ppObject
}
// END FUNCTION
