// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 34 blocks
#include "vampire.h"

// FUNCTION: 0x10092b50 size=0xfb
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
#include "CUnknown100c7f30.h"

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)

struct SetupBonesSlots
{
	V100(a) V100(b)
	V10(c0)
	virtual void c10(); virtual void c11(); virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15(); virtual void c16();
	virtual void *slot217();
	virtual void c18();
	virtual void *slot219();
	V10(c2) V10(c3) V10(c4)
	virtual void c50(); virtual void c51(); virtual void c52(); virtual void c53(); virtual void c54();
	virtual void slot255(void *pOut, void *pBuf, CUnknown100c7f30 *pBits);
};

void sub_100142f4(void *hdr, void *angles, void *origin, void *pOut, void *pBuf, int a, int b, CUnknown100c7f30 *pBits);

void CBaseAnimating::vfunc257(int a, int b)
{
	char buf[0x15e0];
	char out[0x1068];
	char bitsMem[0x30];
	ScopeTrace trace("CBaseAnimating::SetupBones", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	void *hdr = sub_100952d0(-1);
	CUnknown100c7f30 *bits = (CUnknown100c7f30 *)bitsMem;
	bits->sub_100c7f30((CUnknown100c7f30Hdr *)hdr, b);
	SetupBonesSlots *s = (SetupBonesSlots *)this;
	s->slot255(out, buf, bits);
	sub_100142f4(hdr, s->slot219(), s->slot217(), out, buf, -1, a, bits);
}
// END FUNCTION

// FUNCTION: 0x10092c90 size=0x8e
#include "CBaseAnimating.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

int CBaseAnimating::sub_10092c90()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseAnimating::GetNumBones ";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	int *p = (int *)sub_100952d0(-1);
	if (p) {
		int r = p[0xf0 / 4];
		(*g_109f3680)--;
		return r;
	}
	(*g_109f3680)--;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10092d50 size=0x9b
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];
int sub_10004958(void *header, int name);

int CBaseAnimating::sub_10092d50(int name)
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::LookupAttachment";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	void *hdr = sub_100952d0(-1);
	if (!hdr) {
		(*g_109f3680)--;
		return 0;
	}
	int result = sub_10004958(hdr, name) + 1;
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10092e20 size=0x94
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseAnimating::sub_10092e20(int a, int b, int c)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::GetAttachment01";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	int r = sub_10005d12(sub_100060aa(a, b, c));
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10092ef0 size=0xca
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

void sub_10137ed0(float *pMatrix, float *pOut);
void sub_10138720(float *pMatrix, int nType, float *pOut);

bool CBaseAnimating::sub_10092ef0(int attachment, float *pOrigin, float *pAngles)
{
    ScopeTrace trace("CBaseAnimating::GetAttachment02", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    float matrix[12];
    if (((CEntityVSlots *)this)->slot262(attachment, matrix)) {
        sub_10137ed0(matrix, pAngles);
        sub_10138720(matrix, 3, pOrigin);
        return true;
    }
    return false;
}
// END FUNCTION

// FUNCTION: 0x10093000 size=0x162
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

#define AS10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define AS100(p) AS10(p##0) AS10(p##1) AS10(p##2) AS10(p##3) AS10(p##4) AS10(p##5) AS10(p##6) AS10(p##7) AS10(p##8) AS10(p##9)

// The animating entity's virtual table up to slot 256 (the bone matrix getter).
struct CAnimSlots
{
	AS100(a) AS100(b) AS10(c0) AS10(c1) AS10(c2) AS10(c3) AS10(c4)
	virtual void c50(); virtual void c51(); virtual void c52(); virtual void c53(); virtual void c54(); virtual void c55();
	virtual void vfunc256(int bone, float *pMatrix);
};

struct CAimEntHandle
{
	unsigned int m_Index;
	CBaseEntity *Get() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *e = &g_10566458->m_Slots[m_Index & 0x1fff];
		return e->m_Serial == (m_Index >> 13) ? (CBaseEntity *)e->m_pEntity : 0;
	}
};

void sub_10138df0(const float *pLocal, const char *pAttachmentMatrix, float *pOut);	// stub 0x1000a01a

// TARGET: CBaseAnimating::vfunc262
bool CBaseAnimating::vfunc262(int iAttachment, float *pMatrix)
{
    float matrix[12];
    ScopeTrace trace("CBaseAnimating::GetAttachment03", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    char *hdr = (char *)sub_100952d0(-1);
    if (!hdr || iAttachment < 1 || iAttachment > *(int *)(hdr + 0x148))
        return false;
    char *pAtt = hdr + *(int *)(hdr + 0x14c) + iAttachment * 0x3c - 0x3c;
    CBaseEntity *pOwner = ((CAimEntHandle *)((char *)this + 0x37c))->Get();
    if (pOwner) {
        CBaseAnimating *pChar = *(CBaseAnimating **)((char *)pOwner + 0x9c);
        if (pChar) {
            char *rec = hdr + *(int *)(hdr + 0xf4) + *(int *)(pAtt + 8) * 0xa0;
            int idx = pChar->sub_10092550((int)(rec + *(int *)rec));
            if (idx >= 0) {
                ((CAnimSlots *)pChar)->vfunc256(idx, matrix);
                goto Done;
            }
        }
    }
    ((CAnimSlots *)this)->vfunc256(*(int *)(pAtt + 8), matrix);
Done:
    sub_10138df0(matrix, pAtt + 0xc, pMatrix);
    return true;
}
// END FUNCTION

// FUNCTION: 0x100931d0 size=0x94
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

char CBaseAnimating::sub_100931d0(int a, int b, int c)
{
	const char *name = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::GetAttachmentLocal01";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char result = sub_100932a0(sub_10092d50(a), b, c);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x100932a0 size=0xc7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

void sub_10137ed0(const float *matrix, float *pOrigin);
void sub_10138720(const float *matrix, int a, float *pAngles);

// TARGET: CBaseAnimating::sub_100932a0
char CBaseAnimating::sub_100932a0(int attachment, int b, int c)
{
    float matrix[12];
    ScopeTrace trace("CBaseAnimating::GetAttachmentLocal02", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    if (sub_100933b0(attachment, matrix)) {
        sub_10137ed0(matrix, (float *)c);
        sub_10138720(matrix, 3, (float *)b);
        return 1;
    }
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100933b0 size=0xea
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

#define SV(n) virtual void s##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)
struct CAnimatingAttachSlotsX {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25)
	SV(260) SV(261)
	virtual bool s262(int iAttachment, float *pMatrix);
};

void sub_10138630(const float *pIn, float *pOut);
void sub_10138df0(const float *pA, const float *pB, float *pOut);

char CBaseAnimating::sub_100933b0(int iAttachment, float *pAttachmentToLocal)
{
	ScopeTrace trace("CBaseAnimating::GetAttachmentLocal03", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	float attachmentToWorld[12];
	float worldToEntity[12];
	if (!((CAnimatingAttachSlotsX *)this)->s262(iAttachment, attachmentToWorld))
		return 0;
	if ((unsigned char)(m_flags268 >> 11) & 1)
		vfunc98();
	sub_10138630((float *)((char *)this + 0x130), worldToEntity);
	sub_10138df0(worldToEntity, attachmentToWorld, pAttachmentToLocal);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x100934e0 size=0x189
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

struct EyeEyeball { int name; int bone; Vector org; char pad[0x8c - 0x14]; };
struct EyeModel { char pad[0xc0]; int numeyeballs; int eyeballindex;
	EyeEyeball *pEyeball(int i) { return (EyeEyeball *)((char *)this + eyeballindex) + i; } char pad2[0xe0 - 0xc8]; };
struct EyeBodypart { int name; int nummodels; int base; int modelindex;
	EyeModel *pModel(int i) { return (EyeModel *)((char *)this + modelindex) + i; } };
struct EyeHdr { char pad[0x140]; int numbodyparts; int bodypartindex;
	EyeBodypart *pBodypart(int i) { return (EyeBodypart *)((char *)this + bodypartindex) + i; } };

void sub_10137fe0(const Vector *in, const float *m, int out);
void sub_10137ed0(const float *m, int angles);

// TARGET: CBaseAnimating::sub_100934e0
void CBaseAnimating::sub_100934e0(int origin, int angles)
{
	ScopeTrace trace("CBaseAnimating::GetEyeballs", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	EyeHdr *pStudioHdr = (EyeHdr *)sub_100952d0(-1);
	if (!pStudioHdr)
		return;
	for (int iBodypart = 0; iBodypart < pStudioHdr->numbodyparts; iBodypart++)
	{
		EyeBodypart *pBodypart = pStudioHdr->pBodypart(iBodypart);
		for (int iModel = 0; iModel < pBodypart->nummodels; iModel++)
		{
			EyeModel *pModel = pBodypart->pModel(iModel);
			for (int iEyeball = 0; iEyeball < pModel->numeyeballs; iEyeball++)
			{
				EyeEyeball *pEyeball = pModel->pEyeball(iEyeball);
				float pmatrix[12];
				((CEntityVSlots *)this)->slot256(pEyeball->bone, pmatrix);
				sub_10137fe0(&pEyeball->org, pmatrix, origin);
				sub_10137ed0(pmatrix, angles);
			}
		}
	}
}
// END FUNCTION

// FUNCTION: 0x100936e0 size=0x155
#include "ScopeTrace.h"
#include "CBaseAnimating.h"
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }

struct StudioBlockX {
	char pad0[8];
	int start;
	int count;
	char pad1[0x74 - 0x10];
};

struct StudioX {
	char pad0[0x110];
	int nNodes;
	char pad1[0x194 - 0x114];
	int nBlocks;
	int ofsBlocks;
	StudioBlockX *pBlock(int i) const { return (StudioBlockX *)((char *)this + ofsBlocks) + i; }
	int GetNumSeq() const
	{
		if (nBlocks)
			return pBlock(nBlocks - 1)->start + pBlock(nBlocks - 1)->count;
		return nNodes;
	}
};

int __cdecl sub_10428ad0(void *pStudio, int iFrom, int iTo, int *pDirection);

int CBaseAnimating::sub_100936e0(int iFrom, int iTo, int *pDirection)
{
	ScopeTrace trace("CBaseAnimating::FindTransitionSequence", this ? (STRINGR_F(m_name26c)) : g_105387dc);
	if (!pDirection) {
		int direction = 1;
		int result = sub_1000af01(iFrom, iTo, &direction);
		if (direction == 1)
			return result;
	} else {
		int offset = 0;
		for (int model = -1; model < 2; model++) {
			StudioX *pStudio = (StudioX *)sub_100952d0(model);
			if (pStudio) {
				int count = pStudio->GetNumSeq();
				if (iFrom >= 0 && iFrom < count && iTo >= 0 && iTo < count)
					return sub_10428ad0(pStudio, iFrom, iTo, pDirection) + offset;
				offset += count;
				iFrom -= count;
				iTo -= count;
			}
		}
	}
	return -1;
}
// END FUNCTION

// FUNCTION: 0x100938a0 size=0x98
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseAnimating::sub_100938a0(int sequence)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::GetEntryNode";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char *pSeq = (char *)sub_1008d990(sequence);
	if (!pSeq) {
		(*g_109f3680)--;
		return 0;
	}
	int r = *(int *)(pSeq + 0x270);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10093970 size=0x98
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseAnimating::sub_10093970(int sequence)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::GetExitNode";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char *pSeq = (char *)sub_1008d990(sequence);
	if (!pSeq) {
		(*g_109f3680)--;
		return 0;
	}
	int r = *(int *)(pSeq + 0x274);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10093a40 size=0x98
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern float g_104454c4;	// file-scope zero

float CBaseAnimating::sub_10093a40(int sequence)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::GetExitPhase";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char *pSeq = (char *)sub_1008d990(sequence);
	if (!pSeq) {
		float r0 = g_104454c4;
		(*g_109f3680)--;
		return r0;
	}
	float r = *(float *)(pSeq + 0x280);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10093b10 size=0x98
#include "CBaseAnimating.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
void sub_1000c0c7(void *pStudioHdr, int *pBody, int group, int value);

void CBaseAnimating::sub_10093b10(int group, int value)
{
	const char *name;
	if (this) {
		name = m_name26c;
		if (!name)
			name = g_106b8540;
	} else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::SetBodygroup";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c0c7(sub_100952d0(-1), (int *)((char *)this + 0x67c), group, value);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x10093be0 size=0x94
#include "CBaseAnimating.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;
int sub_100061d6(void *pStudioHdr, int group, int a);

int CBaseAnimating::sub_10093be0(int a)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseAnimating::GetBodygroup";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	int result = sub_100061d6(sub_100952d0(-1), *(int *)((char *)this + 0x67c), a);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10093cb0 size=0x8d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

int sub_10006564(void *pStudio, int group);

// TARGET: CBaseAnimating::sub_10093cb0
int CBaseAnimating::sub_10093cb0(int group)
{
	ScopeTrace trace("CBaseAnimating::GetBodygroupName", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	return sub_10006564(sub_100952d0(-1), group);
}
// END FUNCTION

// FUNCTION: 0x10093d70 size=0x8d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

int sub_1000fce5(void *pStudio, const char *pszName);

// TARGET: CBaseAnimating::sub_10093d70
int CBaseAnimating::sub_10093d70(const char *pszName)
{
	ScopeTrace trace("CBaseAnimating::FindBodygroupByName", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	return sub_1000fce5(sub_100952d0(-1), pszName);
}
// END FUNCTION

// FUNCTION: 0x10093e30 size=0x8d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"

int sub_10015c8a(void *pStudio, int group);

// TARGET: CBaseAnimating::sub_10093e30
int CBaseAnimating::sub_10093e30(int group)
{
	ScopeTrace trace("CBaseAnimating::GetBodygroupCount", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	return sub_10015c8a(sub_100952d0(-1), group);
}
// END FUNCTION

// FUNCTION: 0x10093ef0 size=0x83
#include "CBaseAnimating.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

int sub_10004e99(void *pStudioHdr);

int CBaseAnimating::sub_10093ef0()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseAnimating::GetNumBodyGroups";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	int result = sub_10004e99(sub_100952d0(-1));
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10093fb0 size=0xe0
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
extern char g_1054fe04[];
int CBaseAnimating::sub_10093fb0(int sequence, float *pMins, float *pMaxs)
{
    ScopeTrace t(g_1054fe04, this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
    float *pSeq = (float *)sub_1008d990(sequence);
    if (!pSeq) {
        pMins[0] = 0;
        pMins[1] = 0;
        pMins[2] = 0;
        pMaxs[0] = 0;
        pMaxs[1] = 0;
        pMaxs[2] = 0;
        return 0;
    }
    pMins[0] = pSeq[0x1c / 4];
    pMins[1] = pSeq[0x20 / 4];
    pMins[2] = pSeq[0x24 / 4];
    pMaxs[0] = pSeq[0x28 / 4];
    pMaxs[1] = pSeq[0x2c / 4];
    pMaxs[2] = pSeq[0x30 / 4];
    return 1;
}
// END FUNCTION

// FUNCTION: 0x100940d0 size=0x208
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlmemory.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "Vector.h"
#include <math.h>

void sub_101cf390(int a, int b, int c);

void CBaseAnimating::SetSequenceBox()
{
	ScopeTrace trace("CBaseAnimating::SetSequenceBox",
	                 this ? (((CBaseEntity *)this)->m_name26c ? ((CBaseEntity *)this)->m_name26c : g_106b8540) : g_105387dc);

	Vector maxs;
	Vector bounds[2];
	Vector xvector, yvector;
	Vector rmin, rmax;
	float yaw;
	{
		Vector mins;
		if (!sub_10093fb0(*(int *)((char *)this + 0x6f0), mins.Base(), maxs.Base()))
			return;
		xvector.x = cos(yaw = ((CEntityVSlots *)this)->slot221()[0].y * 0.017453292519943295);
		bounds[0] = mins;
		bounds[1] = maxs;
		xvector.y = sin(yaw);
		xvector.z = 0;
		yvector.x = -sin(yaw);
		yvector.y = cos(yaw);
		yvector.z = 0;
	}
	{
		rmin.Init(9999.0f, 9999.0f, 9999.0f);
		rmax.Init(-9999.0f, -9999.0f, -9999.0f);
		Vector base, transformed;

		for (int i = 0; i <= 1; i++)
		{
			base.x = bounds[i].x;
			for (int j = 0; j <= 1; j++)
			{
				base.y = bounds[j].y;
				for (int k = 0; k <= 1; k++)
				{
					base.z = bounds[k].z;
					transformed.x = xvector.x * base.x + yvector.x * base.y;
					transformed.y = xvector.y * base.x + yvector.y * base.y;
					transformed.z = base.z;
					for (int l = 0; l < 3; l++)
					{
						if (transformed[l] < rmin[l])
							rmin[l] = transformed[l];
						if (transformed[l] > rmax[l])
							rmax[l] = transformed[l];
					}
				}
			}
		}
		rmin.z = 0;
		rmax.z = 1;
		sub_101cf390((int)this, (int)&rmin, (int)&rmax);
	}
}
// END FUNCTION

// FUNCTION: 0x10094370 size=0x7f
struct ScopeEnt { const char *a; const char *b; const char *c; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
int sub_1000155a(int);

struct CFakeEnt { char pad[0x26c]; const char *m_name; int sub_10094370(int a); };

int CFakeEnt::sub_10094370(int a)
{
    const char *n;
    if (this) {
        n = m_name;
        if (!n) n = "";
    } else
        n = "NULL ENTITY";
    g_109f3620[*g_109f3680].a = "CBaseAnimating::RegisterPrivateActivity";
    g_109f3620[*g_109f3680].b = n;
    g_109f3620[*g_109f3680].c = "";
    ++*g_109f3680;
    int r = sub_1000155a(a);
    --*g_109f3680;
    return r;
}
// END FUNCTION

// FUNCTION: 0x10094410 size=0xc8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "ScopeTrace.h"
extern void (__cdecl *g_109f3628)(const char *fmt, ...);
const char *sub_10412550(int iActivity);

void CBaseAnimating::sub_10094410(int iActivity)
{
	ScopeTrace trace("CBaseAnimating::ReportMissingActivity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	int tmp;
	const char *pszModel = *vfunc9(&tmp);
	if (!pszModel)
		pszModel = g_106b8540;
	const char *pszClass = m_classname11c;
	if (!pszClass)
		pszClass = g_106b8540;
	g_109f3628("%s(%s) has no sequence for act:%s (%s)\n", sub_100ab4f0(), pszClass, sub_10412550(iActivity), pszModel);
}
// END FUNCTION

// FUNCTION: 0x10094520 size=0x8e
#include "CBaseAnimating.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

int CBaseAnimating::sub_10094520()
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseAnimating::GetNumFlexControllers";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	int *hdr = (int *)sub_100952d0(-1);
	if (!hdr)
	{
		(*g_109f3680)--;
		return 0;
	}
	int result = hdr[0x58];
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x100945e0 size=0x9f
#include "CBaseAnimating.h"

struct ScopeTraceEntry_10094 { const char *a; const char *b; const char *c; };
extern ScopeTraceEntry_10094 *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

int CBaseAnimating::sub_100945e0(int index)
{
	const char *name;
	if (this != 0)
	{
		name = *(const char **)((char *)this + 0x26c);
		if (name == 0)
			name = g_106b8540;
	}
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::GetFlexDescFacs";
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char *hdr = (char *)sub_100952d0(-1);
	if (hdr == 0)
	{
		(*g_109f3680)--;
		return 0;
	}
	int *p = (int *)(hdr + *(int *)(hdr + 0x15c) + index * 4);
	int r = *p + (int)p;
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x100946b0 size=0xa3
#include "CBaseAnimating.h"

struct ScopeTraceEntry_t
{
	const char *m_pszFunc;
	const char *m_pszName;
	const char *m_pszExtra;
};

extern ScopeTraceEntry_t *g_109f3620;
extern int *g_109f3680;

const char *CBaseAnimating::sub_100946b0(int index)
{
	const char *name;
	if (this)
		name = m_name26c ? m_name26c : "";
	else
		name = "NULL ENTITY";
	g_109f3620[*g_109f3680].m_pszFunc = "CBaseAnimating::GetFlexControllerName";
	g_109f3620[*g_109f3680].m_pszName = name;
	g_109f3620[*g_109f3680].m_pszExtra = "";
	(*g_109f3680)++;
	char *hdr = (char *)sub_100952d0(-1);
	if (!hdr)
	{
		(*g_109f3680)--;
		return 0;
	}
	char *rec = hdr + *(int *)(hdr + 0x164) + index * 0x14;
	const char *result = rec + *(int *)(rec + 4);
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10094790 size=0xa2
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106b8540[];

int CBaseAnimating::sub_10094790(int index)
{
	const char *n = this ? (m_name26c ? m_name26c : g_106b8540) : "NULL ENTITY";
	g_109f3620[*g_109f3680].a = "CBaseAnimating::GetFlexControllerType";
	g_109f3620[*g_109f3680].b = n;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	char *hdr = (char *)sub_100952d0(-1);
	if (!hdr) {
		(*g_109f3680)--;
		return 0;
	}
	int *rec = (int *)(hdr + *(int *)(hdr + 0x164) + index * 0x14);
	int result = *rec + (int)rec;
	(*g_109f3680)--;
	return result;
}
// END FUNCTION

// FUNCTION: 0x10094870 size=0x113
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"
#include "QAngle.h"

void sub_10139610(const float *angles, float *forward, float *right, float *up);

struct CBaseAnimatingGSView
{
	char m_pad0000[0x654];
	float m_flGroundSpeed;	// 0x654
	char m_pad0658[0x6f0 - 0x658];
	int m_nSequence;	// 0x6f0
};

Vector CBaseAnimating::vfunc263()
{
	ScopeTrace trace("CBaseAnimating::GetGroundSpeedVelocity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	CBaseAnimatingGSView *v = (CBaseAnimatingGSView *)this;
	QAngle vecAngles;
	Vector vecForward;
	vecAngles.y = sub_1008fab0(v->m_nSequence);
	vecAngles.x = 0;
	vecAngles.z = 0;
	vecAngles.y += ((CEntityVSlots *)this)->slot221()->y;
	sub_10139610(&vecAngles.x, &vecForward.x, 0, 0);
	vecForward = vecForward * v->m_flGroundSpeed;
	return vecForward;
}
// END FUNCTION

// FUNCTION: 0x100949e0 size=0x135
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "Vector.h"
#include "CBaseAnimating.h"

void sub_100c5ee0(void *pStudioHdr, int nSequence, float flCycle, float *poseParameter, float *pVec);

struct AnimatingVelView
{
	char pad0[0x690];
	float m_flPoseParameter[1];
	char pad694[0x6f0 - 0x694];
	int m_nSequence;
	float m_flPlaybackRate;
	float m_flCycle;
};

float CBaseAnimating::sub_100949e0(float flInterval)
{
	ScopeTrace trace("CBaseAnimating::GetInstantaneousVelocity", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	AnimatingVelView *pView = (AnimatingVelView *)this;
	void *pStudioHdr = sub_100952d0(-1);
	if (!pStudioHdr)
		return 0;
	float flNextCycle = sub_10091230(pView->m_nSequence) * pView->m_flPlaybackRate * flInterval + pView->m_flCycle;
	Vector vecVelocity;
	sub_100c5ee0(pStudioHdr, pView->m_nSequence, flNextCycle, pView->m_flPoseParameter, &vecVelocity.x);
	vecVelocity *= pView->m_flPlaybackRate;
	return vecVelocity.Length();
}
// END FUNCTION

// FUNCTION: 0x10094b70 size=0x1c9
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern float g_104454c4;
void sub_100c5d10(void *pStudioHdr, int nSequence, float flCycleFrom, float flCycleTo, const float *pPoseParams, Vector *pDeltaPos, Vector *pDeltaAngles);
void sub_1013a7e0(const Vector *pIn, float flYaw, Vector *pOut);

float CBaseAnimating::sub_10094b70(float flInterval, char *pbLooped, float *pvecDelta, float *pvecAngles)
{
	ScopeTrace trace("CBaseAnimating::GetIntervalMovement", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	void *pStudioHdr = sub_100952d0(-1);
	if (!pStudioHdr)
		return g_104454c4;
	flInterval = sub_10091230(*(int *)((char *)this + 0x6f0)) * *(float *)((char *)this + 0x6f4) * flInterval + *(float *)((char *)this + 0x6f8);
	if (!*((char *)this + 0x65d) && flInterval > 1.0) {
		flInterval = 1.0f;
		*pbLooped = 1;
	} else {
		*pbLooped = 0;
	}
	Vector deltaPos;
	Vector deltaAngles;
	sub_100c5d10(pStudioHdr, *(int *)((char *)this + 0x6f0), *(float *)((char *)this + 0x6f8), flInterval, (float *)((char *)this + 0x690), &deltaPos, &deltaAngles);
	sub_1013a7e0(&deltaPos, ((CEntityVSlots *)this)->slot221()->y, &deltaPos);
	*(Vector *)pvecDelta = deltaPos + *((CEntityVSlots *)this)->slot220();
	pvecAngles[0] = 0;
	pvecAngles[1] = 0;
	pvecAngles[2] = 0;
	pvecAngles[1] = deltaAngles.y + ((CEntityVSlots *)this)->slot221()->y;
	return FastSqrt(deltaPos.y * deltaPos.y + deltaPos.x * deltaPos.x + deltaPos.z * deltaPos.z);
}
// END FUNCTION

// FUNCTION: 0x10094dc0 size=0xb2
#include "CBaseAnimating.h"
struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_105387dc[];
extern char g_106b8540[];
extern char g_10550028[];
extern float g_104454c4;
float __cdecl sub_100c61e0(void *pStudioHdr, int a, void *b, float c);

float CBaseAnimating::sub_10094dc0(float flCycle)
{
	const char *name = this ? (*(const char **)((char *)this + 0x26c) ? *(const char **)((char *)this + 0x26c) : g_106b8540) : g_105387dc;
	g_109f3620[*g_109f3680].a = g_10550028;
	g_109f3620[*g_109f3680].b = name;
	g_109f3620[*g_109f3680].c = g_106b8540;
	++*g_109f3680;
	void *pStudioHdr = sub_100952d0(-1);
	if (!pStudioHdr) {
		float f = g_104454c4;
		--*g_109f3680;
		return f;
	}
	float r = sub_100c61e0(pStudioHdr, *(int *)((char *)this + 0x6f0), (char *)this + 0x690, flCycle);
	--*g_109f3680;
	return r;
}
// END FUNCTION

// FUNCTION: 0x10094eb0 size=0x121
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseAnimating.h"
#include "QAngle.h"
#include "ScopeTrace.h"

void sub_100c5d10(void *pHdr, int iSequence, float flCycleStart, float flCycleEnd, float *pPoseParams, Vector *pDeltaPos, QAngle *pDeltaAngles);

bool CBaseAnimating::sub_10094eb0(int iSequence)
{
	ScopeTrace trace("CBaseAnimating::HasMovement", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	void *pstudiohdr = sub_100952d0(-1);
	if (!pstudiohdr)
		return false;
	QAngle deltaAngles;
	Vector deltaPos;
	sub_100c5d10(pstudiohdr, iSequence, 0.0f, 1.0f, (float *)((char *)this + 0x690), &deltaPos, &deltaAngles);
	if (FastSqrt(deltaPos.z * deltaPos.z + deltaPos.x * deltaPos.x + deltaPos.y * deltaPos.y) > 0.01 || deltaAngles.y != 0.0f)
		return true;
	return false;
}
// END FUNCTION

// FUNCTION: 0x10095030 size=0x202
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CVampireProjectile.h"
#include "CBaseAnimating.h"
#include "CAI_BaseNPC.h"
#include "ScopeTrace.h"
extern void sub_101cf4a0(CBaseEntity *, const char *);
extern void sub_100c7be0(void *, void *, void *, void *, void *);
extern void (*g_109f3628)(const char *, ...);

struct SStudio {
    char pad[0x18c];
    int numchains;
    int chainindex;
};

void CVampireProjectile::vfunc105(const char *pModelName)
{
    CBaseAnimating *self = (CBaseAnimating *)this;
    ScopeTrace trace("CBaseAnimating::SetModel", self ? (self->m_name26c ? self->m_name26c : g_106b8540) : g_105387dc, pModelName);
    int *d = (int *)self;
    char szOld[0x100];
    self->vfunc11(self->m_name26c ? self->m_name26c : g_106b8540);
    self->vfunc13(*(d + 0x47) ? (const char *)d[0x47] : g_106b8540);
    int oldType = self->vfunc8();
    if (*pModelName) {
        int idx = engine->vfunc20(pModelName);
        if (engine->vfunc21(idx) != 3)
            g_109f3628("Setting CBaseAnimating to non-studio model %s  (type:%i)\n", pModelName, engine->vfunc21(idx));
    }
    szOld[0] = 0;
    int *seq = (int *)self->sub_1008d990(*(0x1bc + d));
    if (seq) {
        const char *s = (const char *)seq + *seq;
        char c;
        char *o = szOld;
        do { c = *s++; *o++ = c; } while (c);
    }
    sub_101cf4a0(self, pModelName);
    if (!(!(!(self->vfunc8() != oldType)))) return; d[0x1cb] = 0;
        SStudio *studio = (SStudio *)self->sub_100952d0(-1);
        if (studio) {
            int i = 0;
            if (0 < studio->numchains) {
                int off = 0;
                do {
                    if (*(int *)(off + (char *)studio + studio->chainindex) < 0)
                        *(d + 0x1cb) |= 1 << i;
                    i++;
                    off += 0x1c;
                } while (i < studio->numchains);
            }
        }
        { int i = 0; while (2 > i) { sub_100c7be0((5 * (int)i) + (d + 0x171), self->sub_100952d0(i), 0x17b + d, self->sub_100952d0(-1), 0x185 + d); i++; } }
        if (!(szOld[0])) return; int s = self->sub_1008f7b0(szOld);
            d[0x1bc] = s;
            if (0 > s)
                ((CAI_BaseNPC *)this)->sub_10260a50(0);
            *(d + 0x67) |= 0x10;
}
// END FUNCTION
