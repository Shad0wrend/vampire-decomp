// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1010d1d0 size=0x8c
#include "CEqualsProxy.h"
#include "Vector.h"

struct CProxyValue
{
	virtual void v0();
	virtual void v1();
	virtual void SetFloatValue(float);
	virtual float GetFloatValue();
	virtual void SetIntValue(int);
	virtual int GetIntValue();
	virtual void v6();
	virtual void v7();
	virtual void v8();
	virtual void v9();
	virtual void v10();
	virtual void v11();
	virtual void v12();
	virtual void SetVecValue(float *, int);
	virtual void v14();
	virtual void v15();
	virtual void GetVecValue(float *, int);
	virtual int VectorSize();
	virtual void v18();
	virtual void v19();
	virtual void v20();
	virtual void v21();
	virtual void v22();
	virtual int GetType();
};

// TARGET: CEqualsProxy::vfunc1
void CEqualsProxy::vfunc1(int)
{
	int type, vecSize;
	sub_100e3560(&type, &vecSize);
	switch (type)
	{
	case 0:
		sub_100e33c0(((CProxyValue *)m_unk0c)->GetFloatValue());
		break;
	case 2:
		{
			Vector vec;
			((CProxyValue *)m_unk0c)->GetVecValue(vec.Base(), vecSize);
			((CProxyValue *)m_unk04)->SetVecValue(vec.Base(), vecSize);
		}
		break;
	case 4:
		((CProxyValue *)m_unk04)->SetIntValue(((CProxyValue *)m_unk0c)->GetIntValue());
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x1010d2c0 size=0x1e
#include "CEqualsProxy.h"

// VC6 writes CEqualsProxy's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CEqualsProxy *pcd_emit_1010d2c0() { return new CEqualsProxy; }

// TARGET: ??_GCEqualsProxy@@UAEPAXI@Z
// END FUNCTION
