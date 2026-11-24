// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1003b570 size=0x1e
#include "CTempEnts.h"

// VC6 writes CTempEnts's scalar deleting destructor where it emits the class's vtable; `new` in a function
// nothing calls makes it emit both here
CTempEnts *pcd_emit_1003b570() { return new CTempEnts; }

// TARGET: ??_GCTempEnts@@UAEPAXI@Z
// END FUNCTION

// FUNCTION: 0x1003c710 size=0x162
#include "CTempEnts.h"

struct color32
{
    unsigned char r, g, b, a;
};

struct model_t;

struct IVModelInfo_1003c710
{
    virtual void v0();
    virtual void v1();
    virtual const model_t *GetModel(int modelIndex);
    virtual void v3();
    virtual void v4();
    virtual int GetModelFrameCount(const model_t *model);
};

struct IUniformRandomStream_1003c710
{
    virtual void SetSeed(int iSeed);
    virtual float RandomFloat(float flMinVal, float flMaxVal);
    virtual int RandomInt(int iMinVal, int iMaxVal);
};

struct IVEngineClient_1003c710
{
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38();
    virtual float Time(int);
};

struct LocalTempEnt_1003c710
{
    char pad_0[0x48];
    int m_nRenderMode;      // 0x48
    int m_nRenderFX;        // 0x4c
    color32 m_clrRender;    // 0x50
    char pad_54[0x758];
    int flags;              // 0x7ac
    float die;              // 0x7b0
    float m_flFrameMax;     // 0x7b4
    char pad_7b8[0x0c];
    int m_nField7c4;        // 0x7c4
    char pad_7c8[0x24];
    int m_nRenderAmt;       // 0x7ec
    float m_flSpriteScale;  // 0x7f0
    char pad_7f4[0x04];
    float m_flFrameRate;    // 0x7f8
    float m_flFrame;        // 0x7fc

    void sub_1003a840(float x, float y, float z);
    void sub_1009f6c0(int axis, float val);
};

struct CTempEnts_Helper
{
    LocalTempEnt_1003c710 *sub_1003cf20(const void *pos, const model_t *pModel);
};

extern IVModelInfo_1003c710 *g_104a57f8;
extern IUniformRandomStream_1003c710 *g_104a5738;
extern IVEngineClient_1003c710 *g_104a57d4;

void CTempEnts::vfunc4(const void *pos, int r, int g, int b, int a, int modelIndex, float flUnused, float flSize)
{
    if (!modelIndex)
        return;

    const model_t *pModel = g_104a57f8->GetModel(modelIndex);
    if (!pModel)
        return;

    int frameCount = g_104a57f8->GetModelFrameCount(pModel);

    color32 color;
    color.r = r;
    color.g = g;
    color.b = b;
    color.a = a;

    LocalTempEnt_1003c710 *pTemp = ((CTempEnts_Helper *)this)->sub_1003cf20(pos, pModel);
    if (!pTemp)
        return;

    pTemp->m_nRenderMode = 2;
    pTemp->m_nRenderFX = 19;
    pTemp->m_flSpriteScale = g_104a5738->RandomFloat(flSize / 25.0f, flSize / 35.0f);
    pTemp->m_clrRender = color;
    pTemp->flags = 0x100;
    pTemp->m_nRenderAmt = pTemp->m_clrRender.a;
    pTemp->sub_1003a840(0.0f, 0.0f, 0.0f);

    pTemp->m_flFrameRate = (float)(frameCount * 4);
    float fFrameCount = (float)frameCount;
    pTemp->die = g_104a57d4->Time(0) + (fFrameCount / pTemp->m_flFrameRate);
    pTemp->m_flFrame = 0.0f;
    pTemp->m_flFrameMax = fFrameCount;
    pTemp->m_nField7c4 = 0;

    pTemp->sub_1009f6c0(2, (float)g_104a5738->RandomInt(0, 360));
}
// END FUNCTION

// FUNCTION: 0x1003cc90 size=0x39
#include "CTempEnts.h"
namespace lifted {
struct V { virtual void u0(); virtual void u1(); virtual void u2(); virtual void u3(); virtual void u4(); virtual void u5(); virtual void u6(); virtual void u7(); virtual void u8(); virtual void u9(); virtual void u10(); virtual void u11(); virtual void u12(); virtual void u13(); virtual void u14(); virtual void u15(); virtual void u16(); virtual void u17(); virtual void u18(); virtual void u19(); virtual void u20(); virtual void u21(); virtual void u22(); virtual void u23(); virtual void u24(); virtual int f25(int, int, int, int, int, int, int); virtual int f26(int, int, int, int, int, int, int); };
}
int CTempEnts::vfunc6(int a0, int a1, int a2, int a3, char a4, int a5, int a6, int a7, int a8)
{
    if (a4 != 0) {
        return ((lifted::V *)this)->f25(a0, a1, a3, a5, a6, a7, a8);
    }
    return ((lifted::V *)this)->f26(a0, a1, a3, a5, a6, a7, a8);
}
// END FUNCTION

// FUNCTION: 0x1003d610 size=0x21
#include "CTempEnts.h"
namespace lifted {
int sub_10044870(int, int, int, int, int);
}
int CTempEnts::vfunc22(int a0, int a1, int a2)
{
    return lifted::sub_10044870(a0, a1, 0x3f400000, a2, 0);
}
// END FUNCTION

// FUNCTION: 0x1003d740 size=0x21
#include "CTempEnts.h"
namespace lifted {
int sub_10044870(int, int, int, int, int);
}
int CTempEnts::vfunc24(int a0, int a1, int a2)
{
    return lifted::sub_10044870(a0, a1, 0x3f800000, a2, 0);
}
// END FUNCTION
