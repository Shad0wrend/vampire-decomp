// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c4430 size=0x2ba
#include "CNPC_VTzimisceRunner.h"
#include "CNPC_VTzimisce.h"
#include "globalvars.h"
#include "engineiface.h"
#include "Vector.h"

#define V4(x) virtual void x##0(); virtual void x##1(); virtual void x##2(); virtual void x##3();
#define V16(x) V4(x##a) V4(x##b) V4(x##c) V4(x##d)
#define V64(x) V16(x##a) V16(x##b) V16(x##c) V16(x##d)

struct RunnerEnemy {
	V64(a) V64(b) V64(c) virtual Vector *vfunc192(Vector *pOut);
};
struct RunnerSelf {
	V64(a) V64(b) V16(c) V4(d) V4(e) V4(f) V4(g) V4(h) virtual void i0(); virtual void i1(); virtual void i2();
	virtual RunnerEnemy *vfunc167();
	V64(j) V64(k) V64(l) V64(m) V64(n) V64(o) V16(p) V16(q) V4(r) V4(s) V4(t) virtual void u0(); virtual void u1(); virtual void u2();
	virtual bool vfunc599(RunnerEnemy *pEnemy);
	char m_pad0004[0x1b30 - 4];
	const char *m_pszSchedFile;	// 0x1b30
	int m_nSchedLine;	// 0x1b34
	char m_pad1b38[0x6078 - 0x1b38];
	char m_b6078;
	char m_pad6079[0x6268 - 0x6079];
	float m_f6268;
	float m_f626c;
	char m_pad6270[4];
	float m_f6274;

	bool sub_10269aa0(int condition);
	bool sub_10269d30(int condition);
	bool sub_102a11d0(const Vector *pVec);
	int Select();
};
extern CNPC_VTzimisceConVar *g_10924a1c;
extern float g_104454c4;
extern float g_104492b8;

inline int RunnerSelf::Select()
{
	RunnerSelf *self = this;
	RunnerEnemy *pEnemy = self->vfunc167();
	if (!self->m_b6078 && !self->vfunc599(pEnemy)) {
		float flMax = (g_10924a1c->vfunc1() ? g_104454c4 : g_10924a1c->m_f28) + g_104492b8;
		self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
		if (flMax < self->m_f6268) {
			self->m_nSchedLine = 0x2b8;
			return 0xe7;
		}
		self->m_nSchedLine = 0x2bc;
		return 0xe4;
	}
	if (self->sub_10269aa0(0x48)) {
		self->m_nSchedLine = 0x2c3;
		self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
		return 0xcd;
	}
	if (self->sub_10269d30(0xc)) {
		self->m_nSchedLine = 0x2c8;
		self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
		return 0xd5;
	}
	if (self->sub_10269aa0(0x51)) {
		self->m_nSchedLine = 0x2cd;
		self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
		return 0xdd;
	}
	bool bReady = false;
	if (self->m_f626c > 64.0f) {
		if (*(int *)&self->m_f6274 == 0xbf800000)
			self->m_f6274 = enginerandom->vfunc1(3.0f, 4.0f) + gpGlobals->curtime;
		else if (gpGlobals->curtime >= self->m_f6274)
			bReady = true;
	} else {
		*(int *)&self->m_f6274 = 0xbf800000;
	}
	if (self->sub_10269aa0(0x59)) {
		self->m_nSchedLine = 0x2e8;
		self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
		return 0x17;
	}
	if (!self->sub_10269aa0(9) && !self->sub_10269aa0(0x60)) {
		self->m_nSchedLine = 0x2fe;
		self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
		return 0xc7;
	}
	if (self->vfunc167()) {
		Vector v;
		if (self->sub_102a11d0(self->vfunc167()->vfunc192(&v))) {
			self->m_nSchedLine = 0x2f0;
			self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
			return 0xe1;
		}
	}
	if (!((g_10924a1c->vfunc1() ? g_104454c4 : g_10924a1c->m_f28) <= self->m_f6268) && !bReady) {
		self->m_nSchedLine = 0x2fa;
		self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
		return 0xd2;
	}
	self->m_nSchedLine = 0x2f6;
	self->m_pszSchedFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\NPC_VTzimisceRunner.cpp";
	return 0xcb;
}

int CNPC_VTzimisceRunner::vfunc604(int unused)
{
	return ((RunnerSelf *)this)->Select();
}
// END FUNCTION
