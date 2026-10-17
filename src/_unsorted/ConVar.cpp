// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10245cf0 size=0x6e
#include "ConVar.h"
extern "C" double atof(const char *);
extern int (*g_109f388c)(char *, int, const char *, ...);

void ConVar::vfunc7(const char *value)
{
    float fNewValue = (float)atof(value);
    char tempVal[32];
    if (vfunc10(&fNewValue)) {
        g_109f388c(tempVal, 32, "%f", fNewValue);
        value = tempVal;
    }
    m_fValue = fNewValue;
    m_nValue = (int)m_fValue;
    vfunc11(value);
}
// END FUNCTION

// FUNCTION: 0x10245f50 size=0x68
extern int (*g_109f388c)(char *, int, const char *, ...);
struct SConVar {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual bool ClampValue(float &f);
    virtual void ChangeStringValue(const char *s);
    char pad[0x18 - 4];
    int m_nFlags;
    char pad2[0x28 - 0x1c];
    float m_fValue;
    int m_nValue;
    void sub_10245f50(int nValue);
};
// TARGET: SConVar::sub_10245f50
void SConVar::sub_10245f50(int nValue)
{
    float fValue = (float)nValue;
    if (ClampValue(fValue))
        nValue = (int)fValue;
    m_fValue = fValue;
    m_nValue = nValue;
    if (!(m_nFlags & 0x1000)) {
        char tempVal[32];
        g_109f388c(tempVal, sizeof(tempVal), "%d", nValue);
        ChangeStringValue(tempVal);
    }
}
// END FUNCTION
