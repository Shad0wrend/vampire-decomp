// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 5 blocks
#include "vampire.h"

// FUNCTION: 0x10232cb0 size=0x9d
extern char g_106b8540[];
extern void (__cdecl *g_109f3628)(const char *fmt);
int sub_100f4190(const char *pszName, int version, int a);
void sub_101ce440(int a, const char *pszMsg, int b, int c, int d, int e);

bool sub_10232cb0()
{
    const char *name = gpGlobals->mapname ? gpGlobals->mapname : g_106b8540;
    int r = sub_100f4190(name, gpGlobals->mapversion, 0);
    if (r == 0)
        return true;
    if (r == 1) {
        g_109f3628("\nAborting map_edit\nWorldcraft not running...\n\n");
        sub_101ce440(4, "Worldcraft not running...", 0, 0, 0, 0);
        engine->vfunc59("disconnect\n");
        return false;
    }
    g_109f3628("\nAborting map_edit\nWC/Engine map versions different...\n\n");
    sub_101ce440(4, "WC/Engine map versions different...", 0, 0, 0, 0);
    engine->vfunc59("disconnect\n");
    return false;
}
// END FUNCTION

// FUNCTION: 0x10232d80 size=0x11d
#include "Vector.h"
#include "CEntityVSlots.h"

extern int g_10552810;
extern Vector g_1070d1b0;
CEntityVSlots *sub_101cd9e0(int index);
void sub_10139610(const Vector *angles, Vector *forward, Vector *right, Vector *up);

Vector sub_10232d80()
{
	CEntityVSlots *pPlayer = sub_101cd9e0(g_10552810);
	if (!pPlayer)
		return g_1070d1b0;
	Vector fwd;
	sub_10139610((const Vector *)((char *)pPlayer + 0x206c), &fwd, 0, 0);
	Vector flat = fwd;
	flat.z = 0;
	VectorNormalize(flat);
	VectorNormalize(fwd);
	float flScale = 300.0f / DotProduct(flat, fwd);
	Vector scaled = fwd * flScale;
	Vector tmp;
	return scaled + *pPlayer->slot193(&tmp);
}
// END FUNCTION

// FUNCTION: 0x10232ef0 size=0x710
#include "CBaseEntity.h"
#include "CBaseEntity_ext.h"
#include "ScopeTrace.h"
#include "UTIL_Trace.h"
#include "Vector.h"
#include "CCollisionProperty.h"
#define A(n) virtual void a##n();
#define A10(p) A(p##0) A(p##1) A(p##2) A(p##3) A(p##4) A(p##5) A(p##6) A(p##7) A(p##8) A(p##9)
#define A100(p) A10(p##0) A10(p##1) A10(p##2) A10(p##3) A10(p##4) A10(p##5) A10(p##6) A10(p##7) A10(p##8) A10(p##9)
struct CSlotsView { A10(0) A10(1) A10(2) A10(3) A10(4) A10(5) A(60) A(61) virtual void s62(const Vector &p); A(63) A(64) A(65) A(66) A(67) A(68) A(69)
	A10(7) A10(8) A10(9) A(100) A(101) A(102) virtual void s103(); A(104) A(105) A(106) A(107) A(108) A(109)
	A10(11) A10(12) A10(13) A10(14) A10(15) A10(16) A10(17) A10(18) A(190) A(191) A(192) virtual Vector s193();
	A(194) A(195) A(196) A(197) A(198) A(199) A10(20) A10(21) A(220) A(221) A(222) A(223) A(224) A(225) A(226) A(227) A(228) A(229) A(230) A(231) A(232) A(233) A(234) A(235) A(236) A(237) A(238) A(239) A10(24) A10(25) A10(26) A10(27) A10(28) A10(29) };
struct CSlotsView2 { A100(0) A100(1) A10(20) A(210) A(211) A(212) A(213) A(214) A(215) A(216) A(217) A(218) A(219) virtual const Vector &s220(); };
struct CNodeV : CSlotsView2 { char m_pad[0x224 - 4]; unsigned int m_flags224; char m_pad2[0x454 - 0x228]; int *m_n454; };
struct CNodeV3 { virtual void v0(); virtual bool v1(); char m_pad[0x24]; float m_n28; };
extern CNodeV3 *g_109eee0c;
extern CNodeV *g_10934088;
extern char g_106b8540[];
extern float g_1070d1b0, g_1070d1b4, g_1070d1b8;
extern int g_109340d8;
extern char g_109340dc;
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }
char sub_10232cb0();
void sub_101cf600(CBaseEntity *);
void sub_101cf390(void *, const Vector *, const Vector *);
CSlotsView *sub_102d74c0();
const Vector *sub_102d6120(int);
const Vector *sub_102d6100(int);
void sub_102d7640();
Vector sub_10232d80();
void sub_10139610(void *ang, Vector *fwd, Vector *right, Vector *up);
void sub_101cd250(void *, unsigned int, int);
char sub_101cd390(void *ent, void *filter, float step);
int sub_100f4260(const char *name, int a, int x, int y, int z, int w);
CSlotsView *sub_10136580(const char *name);
void sub_10142aa0(const Vector *, const Vector *, const Vector *, int, int, int, int, float);
extern "C" double __cdecl floor(double);
__declspec(dllimport) void Msg(const char *, ...);

void sub_10232ef0(CBaseEntity *pEnt)
{
	if (!sub_10232cb0() || !pEnt)
		return;
	{
		ScopeTrace t("CBaseEntity::AddSolidFlags", STRINGR_F(pEnt->m_name26c));
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)pEnt + 0x270);
		pCol->sub_100dc580(*(unsigned short *)((char *)pCol + 0x44) | 4);
	}
	sub_101cf600(pEnt);
	Vector vecStart;
	vecStart.x = g_1070d1b0;
	vecStart.y = g_1070d1b4;
	vecStart.z = g_1070d1b8;
	int hull = g_109340d8;
	CGameTrace tr;
	if (g_109340dc) {
		vecStart = sub_10232d80();
		UTIL_TraceLine_Calls(((CSlotsView *)pEnt)->s193(), vecStart, 0x2400b, pEnt, 0, &tr);
		if (tr.m_fraction != 1.0)
			goto fail2;
	} else {
		Vector fwd;
		sub_10139610((char *)pEnt + 0x206c, &fwd, 0, 0);
		Vector vecEye = ((CSlotsView *)pEnt)->s193();
		Vector vecEnd = ((CSlotsView *)pEnt)->s193() + fwd * 56755.84f;
		UTIL_TraceLine_Calls(vecEye, vecEnd, 0x202400b, pEnt, 0, &tr);
		if (tr.m_fraction == 1.0)
			goto fail2;
		vecStart = *(Vector *)&tr.m_endpos;
		vecStart.z += 48.0f;
	}
	{
		CNodeV *pNode = (CNodeV *)sub_102d74c0();
		sub_101cf390(pNode, sub_102d6100(hull), sub_102d6120(hull));
		((CSlotsView *)pNode)->s62(vecStart);
		if (!g_109340dc) {
			sub_101cd250(pNode, 0x202400b, 0);
			vecStart = pNode->s220();
			CTraceFilterSimple filter(pNode, 0);
			float step;
			if (g_109eee0c->v1())
				step = 0;
			else
				step = g_109eee0c->m_n28;
			if (!sub_101cd390(pNode, &filter, step))
				goto fail;
		}
		Vector vecHull = pNode->s220();
		vecHull.z += 1.0f;
		const Vector *pMaxs = sub_102d6120(hull);
		const Vector *pMins = sub_102d6100(hull);
		UTIL_TraceHull_DebugCall(pNode->s220(), vecHull, *pMins, *pMaxs, 0x202400b, pNode, 0, &tr, 1, 0);
		if (tr.m_startsolid || tr.m_fraction != 1.0)
			goto fail;
		((CSlotsView *)pNode)->s62(Vector(floor(pNode->s220().x), floor(pNode->s220().y), floor(pNode->s220().z)));
		int res;
		if (g_109340dc) {
			int *pId = g_10934088->m_n454;
			const Vector &org = pNode->s220();
			res = sub_100f4260("info_node_air", *pId, *(int *)&org.x, *(int *)&pNode->s220().y, *(int *)&pNode->s220().z, 0);
		} else {
			Vector vecUp = pNode->s220();
			vecUp.z = vecUp.z + 24.0;
			((CSlotsView *)pNode)->s62(vecUp);
			int *pId = g_10934088->m_n454;
			const Vector &org = pNode->s220();
			res = sub_100f4260("info_node", *pId, *(int *)&org.x, *(int *)&pNode->s220().y, *(int *)&pNode->s220().z, 0);
		}
		if (res == 2) {
			Msg("Worldcraft failed on creation...\n");
			sub_102d7640();
		} else if (res == 0) {
			CNodeV *pNew;
			if (g_109340dc)
				pNew = (CNodeV *)sub_10136580("info_node_air");
			else
				pNew = (CNodeV *)sub_10136580("info_node");
			((CSlotsView *)pNew)->s62(pNode->s220());
			sub_102d7640();
			*(int *)&pNew->m_n454 = *g_10934088->m_n454;
			pNew->m_flags224 |= 0x1000000;
			((CSlotsView *)pNew)->s103();
		}
		goto done;
	}
fail:
	sub_102d7640();
fail2:
	sub_10142aa0(&vecStart, sub_102d6100(hull), sub_102d6120(hull), 0xff, 0, 0, 0, 0.1f);
done:
	{
		ScopeTrace t("CBaseEntity::SetSolid", STRINGR_F(pEnt->m_name26c));
		((CCollisionProperty *)((char *)pEnt + 0x270))->sub_100dc480(2);
	}
	sub_101cf600(pEnt);
}
// END FUNCTION

// FUNCTION: 0x102337d0 size=0xa2
#include "CAI_NetworkManager.h"
#include "CUnknown102f7970.h"
#include "Vector.h"

struct CAI_NodeV102337d0
{
	int m_pad0;
	int m_iID;
	Vector m_vOrigin;
	char m_pad14[0x70 - 0x14];
	int m_eNodeType;
	int GetId() const { return m_iID; }
	const Vector &GetOrigin() const { return m_vOrigin; }
	void SetType(int type) { m_eNodeType = type; }
};
struct CAI_EditOpsV102337d0
{
	char m_pad0[0xc];
	int *m_pNodeIndexTable;
};
struct CAI_MgrV102337d0 : CAI_NetworkManager
{
	CAI_EditOpsV102337d0 *GetEditOps() { return (CAI_EditOpsV102337d0 *)m_pNetwork; }
};

extern CAI_NodeV102337d0 *g_109340d4;	// CAI_NetworkEditTools::m_pLastDeletedNode
extern CAI_NetworkManager *g_10934088;	// g_pAINetworkManager
extern bool g_109340dc;	// CAI_NetworkEditTools::m_bAirEditMode

bool sub_10232cb0();
int sub_100f4260(const char *name, int type, float x, float y, float z, int a);
__declspec(dllimport) void Msg(const char *fmt, ...);

#define g_pAINetworkManager ((CAI_MgrV102337d0 *)g_10934088)

// TARGET: sub_102337d0
void sub_102337d0()
{
	if (!sub_10232cb0())
	{
		return;
	}

	if (g_109340d4)
	{
		Vector nodePos = g_109340d4->GetOrigin();

		int status;
		int	nOldWCID	= g_pAINetworkManager->GetEditOps()->m_pNodeIndexTable[g_109340d4->GetId()];

		if (g_109340dc)
		{
			status = sub_100f4260("info_node_air", nOldWCID, nodePos.x, nodePos.y, nodePos.z, false);
		}
		else
		{
			status = sub_100f4260("info_node", nOldWCID, nodePos.x, nodePos.y, nodePos.z, false);
		}
		if (status == 2)
		{
			Msg( "Worldcraft failed on creation...\n" );
		}
		else if (status == 0)
		{
			g_109340d4->SetType( 2 );
			g_10934088->sub_102f6610();
			g_109340d4 = 0;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x102338b0 size=0x10e
struct SLink { int pad; int m_iSrcID; int m_iDestID; };
struct SHolder { char pad[0xc]; int *m_pNodeIndexTable; void sub_102f7940(); };
struct SWorld { char pad[0x454]; SHolder *m_pEditOps; SHolder *GetEditOps() { return m_pEditOps; } };
struct SNode {
    int pad0;
    int m_iID;
    char pad1[0x68];
    int m_nType;
    unsigned int m_eNodeInfo;
    int m_nNumLinks;
    SLink **m_pLinks;
    int GetId() { return m_iID; }
    int NumLinks() { return m_nNumLinks; }
    SLink *GetLinkByIndex(int i) { return m_pLinks[i]; }
};
extern SWorld *g_10934088;
extern char g_109340dc;
extern SNode *g_109340d4;
extern void (*g_109f3628)(const char *, ...);
bool sub_10232cb0();
SNode *sub_101727a0(int, int);
int sub_100f43c0(int, int);
int sub_102cce10(int, int);
int sub_100f4410(int, int, int);

void sub_102338b0(int pPlayer)
{
    if (!sub_10232cb0())
        return;
    if (!pPlayer)
        return;

    int nNodeType = 2;
    if (g_109340dc)
        nNodeType = 3;

    SNode *pAINode = sub_101727a0(pPlayer, nNodeType);
    if (pAINode)
    {
        int status = sub_100f43c0(g_10934088->GetEditOps()->m_pNodeIndexTable[pAINode->GetId()], 0);
        if (status == 2)
        {
            g_109f3628("Worldcraft failed on deletion...\n");
        }
        else if (status == 0)
        {
            pAINode->m_nType = 1;
            pAINode->m_eNodeInfo |= 0x20000000;
            g_10934088->GetEditOps()->sub_102f7940();
            g_109340d4 = pAINode;

            for (int link = 0; link < pAINode->NumLinks(); link++)
            {
                int nSrcID = pAINode->GetLinkByIndex(link)->m_iSrcID;
                int nDstID = pAINode->GetLinkByIndex(link)->m_iDestID;
                if (sub_102cce10(nSrcID, nDstID))
                {
                    int nWCSrcID = g_10934088->GetEditOps()->m_pNodeIndexTable[nSrcID];
                    int nWCDstID = g_10934088->GetEditOps()->m_pNodeIndexTable[nDstID];
                    int status2 = sub_100f4410(nWCSrcID, nWCDstID, 0);
                    if (status2 == 2)
                    {
                        g_109f3628("Worldcraft failed on node link deletion...\n");
                    }
                }
            }
        }
    }
}
// END FUNCTION
