// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 12 blocks
#include "vampire.h"

// FUNCTION: 0x102466d0 size=0x1e
#include "SendProp.h"

// TARGET: SendProp::vfunc0
SendProp *SendProp::vfunc0(unsigned int flags)
{
	sub_1000648d();
	if (flags & 1)
		operator delete(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10246700 size=0x120
#include "SendProp.h"

SendProp sub_10246700(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, float fLowValue, float fHighValue, int varProxy)
{
	SendProp ret;
	ret.m_n08 = 2;
	ret.m_pszVarName = pVarName;
	ret.m_n4c = offset;
	ret.m_n0c = nBits;
	ret.m_nFlags = flags;
	ret.m_n14 = fLowValue;
	ret.m_n18 = fHighValue;
	ret.m_n38 = (float)((1 << ret.m_n0c) - 1) / (ret.m_n18 - ret.m_n14);
	ret.m_n40 = varProxy;
	if (ret.m_nFlags & 0x26)
		ret.m_n0c = 0;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10246870 size=0xfe
#include "SendProp.h"

SendProp sub_10246870(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int varProxy)
{
	SendProp ret;
	ret.m_n08 = 1;
	ret.m_pszVarName = pVarName;
	ret.m_n4c = offset;
	ret.m_n0c = nBits;
	ret.m_n38 = (float)((1 << nBits) - 1) * (1.0f / 360.0f);
	ret.m_nFlags = flags;
	ret.m_n14 = 0;
	ret.m_n18 = 360.0f;
	ret.m_n40 = varProxy;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x102469b0 size=0xfe
#include "SendProp.h"

SendProp sub_102469b0(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int varProxy)
{
	SendProp ret;
	ret.m_n08 = 2;
	ret.m_pszVarName = pVarName;
	ret.m_n4c = offset;
	ret.m_n0c = nBits;
	ret.m_n38 = (float)((1 << nBits) - 1) * (1.0f / 360.0f);
	ret.m_nFlags = flags;
	ret.m_n14 = 0;
	ret.m_n18 = 360.0f;
	ret.m_n40 = varProxy;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10246af0 size=0x145
#include "SendProp.h"
void sub_100065cd();
void sub_10010767();
void sub_10003f44();
void sub_1000f308();
void sub_1000c84c();
void sub_1000a399();

SendProp sub_10246af0(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int p7, void *proxy)
{
    SendProp ret;
    if (!proxy) {
        if (sizeofVar == 1)
            proxy = sub_100065cd;
        else if (sizeofVar == 2)
            proxy = sub_10010767;
        else {
            proxy = sub_10003f44;
            if (sizeofVar != 4)
                proxy = sub_100065cd;
        }
    }
    if (nBits == -1)
        nBits = sizeofVar * 8;
    ret.m_n08 = 0;
    ret.m_pszVarName = pVarName;
    ret.m_n4c = offset;
    ret.m_n0c = nBits;
    ret.m_nFlags = flags;
    ret.m_n1c = p7;
    ret.m_n40 = (int)proxy;
    if (flags & 1) {
        if (proxy == sub_100065cd) {
            proxy = sub_1000f308;
            ret.m_n40 = (int)proxy;
        } else if (proxy == sub_10010767) {
            proxy = sub_1000c84c;
            ret.m_n40 = (int)proxy;
        } else if (proxy == sub_10003f44) {
            proxy = sub_1000a399;
            ret.m_n40 = (int)proxy;
        }
    }
    return ret;
}
// END FUNCTION

// FUNCTION: 0x10246ca0 size=0xd5
#include "SendProp.h"

SendProp sub_10246ca0(const char *pszVarName, int a2, int a3, int a4, int a5)
{
	SendProp ret;
	ret.m_pszVarName = pszVarName;
	ret.m_n4c = a2;
	ret.m_n10 = a3;
	ret.m_n08 = 3;
	ret.m_nFlags = a4;
	ret.m_n40 = a5;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10246dc0 size=0xe4
#include "SendProp.h"

void sub_10009539();
void sub_10011cac();

SendProp sub_10246dc0(const char *pVarName, int a, int b, void *pProxy)
{
    SendProp ret;
    ret.m_n08 = 5;
    ret.m_pszVarName = pVarName;
    ret.m_n4c = a;
    ret.m_n48 = b;
    ret.m_n44 = (int)pProxy;
    if (pProxy == (void *)sub_10009539 || pProxy == (void *)sub_10011cac)
        ret.m_nFlags = 0x200;
    return ret;
}
// END FUNCTION

// FUNCTION: 0x10246ef0 size=0xdf
#include "SendProp.h"

void sub_10247010();

SendProp sub_10246ef0(int a1, int a2, const char *pszName, int a4)
{
	SendProp ret;
	ret.m_n28 = a1;
	ret.m_n2c = a2;
	ret.m_pszVarName = pszName;
	ret.m_n08 = 4;
	ret.m_n40 = (int)sub_10247010;
	ret.m_n20 = 0;
	ret.m_n24 = a4;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10247010 size=0x1
void sub_10247010()
{
}
// END FUNCTION

// FUNCTION: 0x10247030 size=0xc2
#include "SendProp.h"

SendProp sub_10247030(const char *pszDataTableName, const char *pszPropName)
{
	SendProp ret;
	ret.m_nFlags = 0x40;
	ret.m_pszExcludeDTName = pszDataTableName;
	ret.m_pszVarName = pszPropName;
	return ret;
}
// END FUNCTION

// FUNCTION: 0x10247140 size=0x50
#include "SendProp.h"

SendProp::SendProp()
{
    m_pszVarName = 0;
    m_n4c = 0;
    m_n48 = 0;
    m_n40 = 0;
    m_pszExcludeDTName = 0;
    m_n10 = 0;
    m_n08 = 0;
    m_nFlags = 0;
    m_n0c = 0;
    m_n14 = 0;
    m_n18 = 0;
    m_n1c = 0;
    m_n20 = 0;
    m_n24 = 0;
    m_n28 = 1;
    m_n2c = -1;
    m_b50 = 0xfe;
    m_n04 = 0;
    m_n38 = 0;
    m_n44 = 0;
}
// END FUNCTION

// FUNCTION: 0x102471b0 size=0x7
#include "SendProp.h"

SendProp::~SendProp()
{
}
// END FUNCTION
