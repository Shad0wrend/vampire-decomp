// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b4ff0 size=0x149
#include "CBaseEntity.h"
#include "CNPC_VTest.h"
#include "CNPC_VHuman.h"
#include "CAI_BaseNPC.h"

extern "C" __declspec(dllimport) void DevWarning(int level, const char *fmt, ...);

#define SV_V1(n) virtual void f##n();
#define SV_V10(p) SV_V1(p##0) SV_V1(p##1) SV_V1(p##2) SV_V1(p##3) SV_V1(p##4) SV_V1(p##5) SV_V1(p##6) SV_V1(p##7) SV_V1(p##8) SV_V1(p##9)
#define SV_V100(p) SV_V10(p##0) SV_V10(p##1) SV_V10(p##2) SV_V10(p##3) SV_V10(p##4) SV_V10(p##5) SV_V10(p##6) SV_V10(p##7) SV_V10(p##8) SV_V10(p##9)

class SVTestSlots
{
public:
	SV_V100(a) SV_V10(b0) SV_V10(b1) SV_V10(b2) SV_V10(b3) SV_V10(b4) SV_V10(b5)
	SV_V1(b60) SV_V1(b61) SV_V1(b62) SV_V1(b63) SV_V1(b64) SV_V1(b65) SV_V1(b66)
	virtual int vfunc167();
	SV_V1(b68) SV_V1(b69)
	SV_V10(f17) SV_V10(f18) SV_V10(f19)
	SV_V100(g) SV_V100(h)
	SV_V10(i40) SV_V10(i41) SV_V10(i42) SV_V10(i43) SV_V10(i44) SV_V10(i45)
	SV_V1(j60) SV_V1(j61)
	virtual char vfunc462();
};

struct SVTestView
{
	char pad0[0x1b38];
	int n1b38;
	const char *psz1b3c;
	int n1b40;
	char pad1[0x5cc0 - 0x1b44];
	int nState5cc0;
	volatile int nState5cc4;
};

int CNPC_VTest::vfunc461()
{
	SVTestView *v = (SVTestView *)this;
	CNPC_VHuman *pHuman = (CNPC_VHuman *)this;
	v->n1b38 = 0x23;
	switch (v->nState5cc0) {
	case 2:
		if (((SVTestSlots *)this)->vfunc167() == 0) {
			v->psz1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTest.cpp";
			v->n1b40 = 0x267;
			v->nState5cc4 = 3;
			DevWarning(2, "***Combat state with no enemy!\n");
			return v->nState5cc4;
		}
		if (pHuman->sub_10269d30(0x47)) {
			((CAI_BaseNPC *)this)->sub_10269b50(0x47);
			v->nState5cc4 = 0xb;
			int r = v->nState5cc4;
			v->n1b40 = 0x271;
			v->psz1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTest.cpp";
			return r;
		}
		break;
	case 0xb:
		if (pHuman->sub_10269d30(0x54)) {
			v->nState5cc4 = 2;
			int r = v->nState5cc4;
			v->n1b40 = 0x284;
			v->psz1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTest.cpp";
			return r;
		}
		if (pHuman->sub_10269d30(0x46)) {
			v->nState5cc4 = 2;
			int r = v->nState5cc4;
			v->n1b40 = 0x289;
			v->psz1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTest.cpp";
			return r;
		}
		if (((SVTestSlots *)this)->vfunc462()) {
			v->nState5cc4 = 1;
			int r = v->nState5cc4;
			v->n1b40 = 0x28e;
			v->psz1b3c = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTest.cpp";
			return r;
		}
		break;
	}
	return pHuman->sub_103851e0();
}
// END FUNCTION
