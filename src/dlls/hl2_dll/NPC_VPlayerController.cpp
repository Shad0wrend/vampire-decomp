// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a4580 size=0xe6
#include "CNPC_VPlayerController.h"

unsigned int __cdecl sub_10009408(int a);

#define S(n) virtual void n();
#define S10(p) S(p##0) S(p##1) S(p##2) S(p##3) S(p##4) S(p##5) S(p##6) S(p##7) S(p##8) S(p##9)
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct PCOwner
{
	virtual void v0();
	virtual unsigned int *v1();
};

struct PCSlots
{
	S10(a0) S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8)
	S(a90) S(a91) S(a92) S(a93) S(a94) S(a95) S(a96)
	virtual PCOwner *slot97();
	S(a98) S(a99)
	S100(b) S100(c) S100(d)
	S10(e0) S(e10) S(e11) S(e12) S(e13) S(e14) S(e15)
	virtual void slot416(int a);
};

struct PCSub { char m_pad[0x80]; char m_bFlag80; };

struct PCRecord
{
	char m_b0;
	char m_b1;
	unsigned int m_n;
	PCRecord &operator=(const PCRecord &o)
	{
		m_b1 = o.m_b1;
		m_n = o.m_n;
		m_b0 = o.m_b0;
		return *this;
	}
};

struct PCFields
{
	char m_pad0000[0x1480];
	char m_b1480;
	char m_pad1481[0x5b84 - 0x1481];
	int m_n5b84;
	char m_pad5b88[0x5cdc - 0x5b88];
	PCSub *m_p5cdc;
	char m_pad5ce0[0x60ac - 0x5ce0];
	int m_n60ac;
	char m_pad60b0[0x6338 - 0x60b0];
	int m_n6338;
	int m_n633c;
	char m_pad6340[0x6348 - 0x6340];
	int m_nLimit[5];
	char m_pad635c[0x6360 - 0x635c];
	PCRecord m_rec6360;
	int m_n6368;
	char m_pad636c[0x641c - 0x636c];
	int m_n641c;
};

void CNPC_VPlayerController::vfunc420()
{
	PCFields *f = (PCFields *)this;
	sub_1000c531();
	f->m_n641c = 0;
	f->m_nLimit[0] = 999999;
	f->m_nLimit[1] = 999999;
	f->m_nLimit[2] = 999999;
	f->m_nLimit[3] = 999999;
	f->m_nLimit[4] = 999999;
	PCRecord r;
	unsigned int v = sub_10009408(0);
	r.m_n = ((((v & 0x68d8635) ^ 0xae8746f) + 0xffa91d8) & 0x197279ca) ^ v ^ 0xa641cacd;
	f->m_rec6360 = r;
	f->m_n6368 = 0;
	f->m_n6338 = 6;
	f->m_n633c = 6;
	((PCSlots *)this)->slot416(1);
	PCOwner *pOwner = ((PCSlots *)this)->slot97();
	if (pOwner)
		f->m_n60ac = *pOwner->v1();
	else
		f->m_n60ac = -1;
	f->m_n5b84 = 0;
	f->m_p5cdc->m_bFlag80 = 0;
	f->m_b1480 = 0;
}
// END FUNCTION

// FUNCTION: 0x103a46b0 size=0x32
extern char g_1064bc7c;
int __fastcall sub_1000df2b(char *self);

int __fastcall sub_103a46b0(char *self)
{
    int t = *(int *)(self + 0x5cc0);
    *(int *)(self + 0x1b2c) = 2;
    if (t - 1) {
        return sub_1000df2b(self);
    }
    *(char **)(self + 0x1b30) = &g_1064bc7c;
    *(int *)(self + 0x1b34) = 0xe6;
    return 0x6b;
}
// END FUNCTION
