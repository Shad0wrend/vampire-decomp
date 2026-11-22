// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1030bfb0 size=0x6
#include "CAI_SaveRestoreBlockHandler.h"
namespace lifted {
extern char g_106129e0;
}
const char *CAI_SaveRestoreBlockHandler::GetBlockName()
{
    return &lifted::g_106129e0;
}
// END FUNCTION

// FUNCTION: 0x1030bfd0 size=0x163
#include "CSave.h"
#include "CAI_SaveRestoreBlockHandler.h"
#include "CUnknown102652d0.h"

#define V(n) virtual void s##n();
#define V10(p) V(p##0) V(p##1) V(p##2) V(p##3) V(p##4) V(p##5) V(p##6) V(p##7) V(p##8) V(p##9)
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct NpcV {
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9)
    V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
    V100(1) V100(2) V100(3) V100(4)
    V10(50) V10(51) V10(52) V10(53)
    V(540)
    virtual const char *s541();
    char pad[0x5bb0 - 4];
    int a5bb0;
    char pad2[0x5da4 - 0x5bb4];
    int a5da4;
};

#define W(n) virtual void w##n();
struct SaveW {
    W(0) W(1)
    virtual void w2(void *p, const char *s);
    W(3) W(4) W(5) W(6) W(7)
    virtual void w8(int *p, int n);
    W(9) W(10) W(11) W(12) W(13) W(14) W(15) W(16)
    virtual void w17(const char *name, const char **p, int n);
    W(18) W(19) W(20) W(21) W(22) W(23) W(24) W(25) W(26) W(27) W(28) W(29) W(30) W(31)
    virtual void w32(NpcV **p, int n);
};

struct AINameNode { AINameNode *next; const char *name; };
extern AINameNode *g_10936c68;
extern char g_106b8540[];
extern char g_10614c70[];
extern char g_1060dde8[];
extern CUnknown102652d0 g_1090fe10;

void CAI_SaveRestoreBlockHandler::Save(ISave *pSave)
{
    SaveW *s = (SaveW *)pSave;
    int count = 0;
    AINameNode *p;
    for (p = g_10936c68; p; p = p->next)
        count++;
    s->w8(&count, 1);
    for (p = g_10936c68; p; p = p->next) {
        const char *name = p->name;
        if (!name) name = g_106b8540;
        const char *str = *name ? name : 0;
        s->w17(g_106b8540, &str, 1);
        s->w2(p, g_10614c70);
    }
    int n = 0;
    NpcV **arr = (NpcV **)g_1090fe10.sub_102652d0();
    int i;
    for (i = 0; i < g_1090fe10.sub_102652f0(); i++) {
        NpcV *e0 = arr[i];
        if ((e0->a5bb0 > 0 || !e0->a5da4) && e0->s541())
            n++;
    }
    s->w8(&n, 1);
    NpcV *e;
    for (i = 0; i < g_1090fe10.sub_102652f0(); i++) {
        if ((arr[i]->a5bb0 > 0 || !arr[i]->a5da4) && arr[i]->s541()) {
            e = arr[i];
            s->w32(&e, 1);
            const char *nm = arr[i]->s541();
            s->w2((void *)nm, g_1060dde8);
        }
    }
}
// END FUNCTION

// FUNCTION: 0x1030c1a0 size=0x13
#include "CAI_SaveRestoreBlockHandler.h"
#include "ISave.h"

extern char g_10612968[];

void CAI_SaveRestoreBlockHandler::WriteSaveHeaders(ISave *pSave)
{
	pSave->vfunc8(g_10612968, 1);
}
// END FUNCTION

// FUNCTION: 0x1030c1d0 size=0x2b
#include "CPython_SaveRestoreBlockHandler.h"
#include "CAI_SaveRestoreBlockHandler.h"

extern short g_10612968;

void CAI_SaveRestoreBlockHandler::ReadRestoreHeaders(IRestore *pRestore)
{
	short version;
	((IRestorePy *)pRestore)->ReadShort(&version, 1, 0);
	m_bField4 = (version == g_10612968);
}
// END FUNCTION

// FUNCTION: 0x1030c210 size=0x124
#include "CBaseEntity.h"
#include "CAI_SaveRestoreBlockHandler.h"
#include "CRestore.h"
#include "CUnknown102652d0.h"
#include "CUnknown103164c0.h"
#include "CUnknown102e06f0.h"
#include "CAI_BaseNPC.h"

int sub_10315790(int);
extern int g_10614c70;
extern int g_1060dde8;

struct CSquadLocal
{
	char m[sizeof(CUnknown103164c0)];
	CSquadLocal() { ((CUnknown103164c0 *)m)->sub_10316560(); }
	~CSquadLocal() { ((CUnknown103164c0 *)m)->sub_10316440(); }
};

struct CVecLocal
{
	CUnknown102e06f0 m;
	CVecLocal() { m.sub_102e06f0(); }
	~CVecLocal() { m.sub_102e0730(); }
};

void CAI_SaveRestoreBlockHandler::Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused)
{
	CAI_BaseNPC **ppEnts = (CAI_BaseNPC **)g_1090fe10.sub_102652d0();
	for (int i = 0; i < g_1090fe10.sub_102652f0(); i++)
		ppEnts[i]->vfunc545();

	if (m_bField4)
	{
		CSquadLocal squad;
		CBaseEntity *pEnt;
		int strId;
		short n = pRestore->vfunc13();
		for (int i = n; i != 0; i--)
		{
			int sz = pRestore->vfunc10();
			pRestore->vfunc20(&strId, 1, sz);
			const char *p = (const char *)sub_10315790(strId);
			if (!p)
				p = (const char *)&squad;
			pRestore->vfunc2((CBaseEntity *)p, (int)&g_10614c70);
		}
		CVecLocal vec;
		unsigned short m = pRestore->vfunc13();
		if (m != 0)
		{
			unsigned int j = m;
			do
			{
				pRestore->vfunc28(&pEnt, 1, 0);
				if (pEnt)
				{
					CBaseEntity *s = (CBaseEntity *)((CAI_BaseNPC *)pEnt)->vfunc541();
					pRestore->vfunc2(s, (int)&g_1060dde8);
				}
				else
					pRestore->vfunc2((CBaseEntity *)&vec, (int)&g_1060dde8);
				j--;
			} while (j != 0);
		}
	}
}
// END FUNCTION
