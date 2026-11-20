// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1015d7c0 size=0x380
#include "vampire_all.h"
#include "CHL2_Player.h"
#include "CUtlMemory16.h"
#include "CUtlMemory64.h"
#include "CUtlMemory60.h"
#include "CUtlMemory72.h"
#include "CUtlMemory576.h"
#include "CBasePlayer.h"
#include "CBaseCombatCharacter.h"
#include "CBaseEntity.h"
#include "globalvars.h"
#include <string.h>

// The CBasePlayer constructor (the symbol map's ??0CBasePlayer@@QAE@XZ), defined as the constructor of a
// view: it calls the base constructor itself and writes the members by offset.
struct __declspec(novtable) CHL2_PlayerBase
{
	CHL2_PlayerBase();
	virtual void pa00();
};

#define M(T, o) (*(T *)((char *)this + (o)))

extern int vt_1046fbb4[];
extern int vt_10462854[];
extern int g_107260a0;
void *__fastcall sub_100df2d0(void *p);

struct CUnknown1018b790 { void sub_1018b790(); };
struct SInit { void sub_1011cc10(); };
struct CUnknown101ab5c0 { void sub_101ab5c0(int a); };
struct CObj1a1c { void sub_1017a270(); };

typedef MvsnSec::CSecureTypeBase<MvsnSec::CPfnTraits1, int, MvsnSec::CSecureCoderPfn<MvsnSec::CPfnTraits1, int>, MvsnSec::CSecureCoderBasic<MvsnSec::CPfnTraits1, int> > CSecure1cd0;

struct CVec16a { CUtlMemory16 m; int size; char *elems; __forceinline CVec16a() { m.sub_10184ea0(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec64 { CUtlMemory64 m; int size; char *elems; __forceinline CVec64() { m.sub_10184ee0(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec60 { CUtlMemory60 m; int size; char *elems; __forceinline CVec60() { m.sub_10184f20(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec16b { CUtlMemory16 m; int size; char *elems; __forceinline CVec16b() { m.sub_10184f90(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec72 { CUtlMemory72 m; int size; char *elems; __forceinline CVec72() { m.sub_10185010(0, 0); size = 0; elems = m.m_pMemory; } };
struct CVec576 { CUtlMemory576 m; int size; char *elems; __forceinline CVec576() { m.sub_10185060(0, 0); size = 0; elems = m.m_pMemory; } };
struct CMem1a1c { char d[0x23c]; __forceinline CMem1a1c() { ((CObj1a1c *)this)->sub_1017a270(); } };
struct CMem1e40 { char d[0x20f8 - 0x1e40]; __forceinline CMem1e40() { ((CUnknown1018b790 *)this)->sub_1018b790(); } };
struct CCmd235c { int *vptr; char d[0x60 - 4]; __forceinline CCmd235c() { vptr = vt_10462854; ((SInit *)this)->sub_1011cc10(); } };
struct CZero5 { int a, b, c, d, e; __forceinline CZero5() { a = 0; b = 0; c = 0; d = 0; e = 0; } };
struct CH5 { int a[5]; __forceinline CH5() { for (int i = 0; i < 5; i++) a[i] = -1; } };
struct CH2 { int a[2]; __forceinline CH2() { for (int i = 0; i < 2; i++) a[i] = -1; } };

struct CPlayerMembers
{
	char pad0[0x19b4];
	EHANDLE h19b4; int m19b8, m19bc;
	EHANDLE h19c0; int m19c4, m19c8;
	EHANDLE h19cc; int m19d0, m19d4;
	CVec16a v19d8;
	char pad19ec[0x1a1c - 0x19ec];
	CMem1a1c o1a1c;
	EHANDLE h1c58, h1c5c, h1c60, h1c64;
	char pad1c68[0x1cb8 - 0x1c68];
	EHANDLE h1cb8, h1cbc, h1cc0;
	char pad1cc4[0x1cd0 - 0x1cc4];
	CSecure1cd0 s1cd0;
	char pad1cdc[0x1d00 - 0x1cdc];
	EHANDLE h1d00;
	char pad1d04[0x1d3c - 0x1d04];
	CH5 h1d3c;
	EHANDLE h1d50;
	char pad1d54[0x1d64 - 0x1d54];
	EHANDLE h1d64;
	CVec64 v1d68;
	CVec60 v1d7c;
	CVec16b v1d90;
	EHANDLE h1da4;
	char pad1da8[0x1db0 - 0x1da8];
	EHANDLE h1db0;
	char pad1db4[0x1df0 - 0x1db4];
	EHANDLE h1df0;
	char pad1df4[0x1dfc - 0x1df4];
	EHANDLE h1dfc;
	int m1e00;
	EHANDLE h1e04;
	int m1e08, m1e0c;
	CVec72 v1e10;
	int m1e24;
	CVec576 v1e28;
	EHANDLE h1e3c;
	CMem1e40 o1e40;
	EHANDLE h20f8;
	char pad20fc[0x22e0 - 0x20fc];
	EHANDLE h22e0;
	char pad22e4[0x2308 - 0x22e4];
	CH2 h2308;
	char pad2310[0x235c - 0x2310];
	CCmd235c c235c;
	CZero5 z23bc;
};

CHL2_PlayerBase::CHL2_PlayerBase()
{
	((CBaseCombatCharacter *)this)->sub_10326de0();
	((CPlayerMembers *)this)->CPlayerMembers::CPlayerMembers();
	M(int *, 0) = vt_1046fbb4;
	((CBaseEntity *)this)->sub_100a4930();
	M(void *, 0xa8) = this;
	M(unsigned int, 0x268) |= 0x400;
	if (g_107260a0 != 0) {
		((CUnknown101ab5c0 *)&M(char, 0x2d4))->sub_101ab5c0(g_107260a0);
		g_107260a0 = 0;
	}
	M(float, 0x2340) = -1.0f;
	M(int, 0x1c44) = 0;
	M(int, 0x1c48) = 0;
	M(int, 0x1c4c) = 0;
	memset(&M(char, 0x1a98), 0x63, 0x44);
	memset(&M(char, 0x1b20), 0, 0x44);
	memset(&M(char, 0x1adc), 0, 0x44);
	M(int, 0x1b64) = 0;
	M(EHANDLE, 0x1c64) = (CBaseEntity *)0;
	M(int, 0x210) = 0;
	((CBasePlayer *)this)->CBasePlayer::vfunc443(0);
	M(int, 0xe98) = 0;
	M(char, 0x2354) = 0;
	M(char, 0x20f4) = 0;
	M(EHANDLE, 0x20f8) = (CBaseEntity *)0;
	M(int, 0x20cc) = 0;
	M(int, 0x13cc) = -1;
	M(unsigned int, 0x4c) |= 0x800;
	M(int, 0x1db8) = 0;
	M(int, 0x1db4) = 0;
	void *pDlg = operator new(0x34b4);
	M(void *, 0x1d24) = pDlg ? sub_100df2d0(pDlg) : 0;
	M(char, 0x1480) = 1;
	M(char, 0x1481) = 1;
	M(char, 0x1b6d) = 1;
	M(int, 0x1b70) = -1;
	M(char, 0x1b74) = 0;
	M(int, 0x1b78) = 0;
	M(int, 0x19f0) = 0;
	M(char, 0x19f4) = 0;
	M(char, 0x1cb0) = 0;
	M(char, 0x1cb1) = 0;
	M(int, 0x1568) = 0;
	M(int, 0x156c) = 0;
	M(float, 0x1de0) = -1.0f;
	M(int, 0x1df8) = 0;
	M(float, 0x1dec) = gpGlobals->curtime;
	M(int, 0x1e0c) = 0;
	M(int, 0x1e08) = -1;
	M(int, 0x1e04) = -1;
	M(int, 0x2454) = 0;
	M(int, 0x1e24) = 0;
	M(int, 0x158c) = 1;
	M(int, 0x1e3c) = -1;
	M(char, 0x1a14) = 0;
	M(EHANDLE, 0x1dfc) = (CBaseEntity *)0;
	M(char, 0x1df4) = 0;
	M(int, 0x245c) = 0;
	((CBasePlayer *)this)->sub_101835e0();
}
// END FUNCTION
