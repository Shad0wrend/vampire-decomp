// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x101b78e0 size=0xbd
#define V4(n) virtual void n##a(); virtual void n##b(); virtual void n##c(); virtual void n##d();
#define V16(n) V4(n##1) V4(n##2) V4(n##3) V4(n##4)
struct PanelV {
    V4(a) virtual void s4(); virtual void vfunc5(); virtual void s6(); virtual void s7();
    V16(b) V16(c) V16(d) virtual void s56(); virtual void vfunc57(int, int);
    V16(e) V16(f) V16(g) V16(h) virtual bool vfunc122();
    void sub_101a9890(int, int);
    void sub_101a98f0(int, int);
    void sub_101aab20(int *, int *);
};
struct GP {
    char pad0[0x58];
    PanelV *m_p58;
    int m5c;
    int m60;
    int pad64;
    int m68, m6c, m70, m74;
};
void __fastcall sub_101b78e0(GP *self, int edx, int dx, int dy)
{
    if (self->m_p58->vfunc122()) {
        int x = self->m68;
        int y = self->m6c;
        int w = self->m70;
        int h = self->m74;
        int minW, minH;
        self->m_p58->sub_101aab20(&minW, &minH);
        w += self->m5c * dx;
        if (self->m5c == -1) {
            if (w < minW)
                dx = self->m70 - minW;
            x += dx;
        }
        h += self->m60 * dy;
        if (self->m60 == -1) {
            if (h < minH)
                dy = self->m74 - minH;
            y += dy;
        }
        self->m_p58->sub_101a9890(x, y);
        self->m_p58->sub_101a98f0(w, h);
        self->m_p58->vfunc57(0, 0);
        self->m_p58->vfunc5();
    }
}
// END FUNCTION

// FUNCTION: 0x101b79f0 size=0xba
#define V4(n) virtual void n##a(); virtual void n##b(); virtual void n##c(); virtual void n##d();
struct O72 {
	V4(a) V4(b) V4(c) V4(d) V4(e) V4(f) V4(g) V4(h) V4(i) V4(j) V4(k) V4(l) V4(m) V4(n) V4(o) V4(p) V4(q) V4(r)
	virtual void at(int *, int *);
};
struct O1 { virtual void s0(); virtual void s1(int); virtual void s2(); virtual void *s3(); };
struct O20 {
	V4(a) V4(b) V4(c) V4(d) V4(e)
	virtual bool s20(void *, int);
};
struct P58 {
	virtual int s0(); virtual void s1(); virtual void s2(); virtual void s3(); virtual void s4(); virtual void s5();
	virtual void s6(); virtual void s7(); virtual void s8(); virtual void s9(); virtual void s10(); virtual void s11();
	virtual void s12(); virtual void s13(); virtual void s14(); virtual void s15(int);
	void sub_101a98c0(int *, int *);
	void sub_101a9920(int *, int *);
};
struct GP {
	virtual int g0();
	char pad4[0x58 - 4];
	P58 *m_p58;
	char pad5c[8];
	bool m_b64;
	char pad65[3];
	int m_i68, m_i6c, m_i70, m_i74, m_i78, m_i7c;
	void sub_101b79f0(int x);
};
O72 *sub_101ac8d0();
O1 *sub_101ac8b0();
O20 *sub_101ac900();
void GP::sub_101b79f0(int x) {
	if (!x) {
		int y;
		m_b64 = true;
		sub_101ac8d0()->at(&x, &y);
		m_i78 = x;
		m_i7c = y;
		m_p58->sub_101a98c0(&m_i68, &m_i6c);
		m_p58->sub_101a9920(&m_i70, &m_i74);
		sub_101ac8b0()->s1(g0());
		void *p = sub_101ac8b0()->s3();
		if (!p || !sub_101ac900()->s20(p, m_p58->s0()))
			m_p58->s15(0);
		m_p58->s5();
	}
}
// END FUNCTION
