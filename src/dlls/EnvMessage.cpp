// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 7 blocks
#include "vampire.h"

// FUNCTION: 0x10101dd0 size=0x6
#include "datamap.h"
#include "CMessage.h"
namespace lifted {
extern char g_105694a8;
}
datamap_t * CMessage::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105694a8);
}
// END FUNCTION

// FUNCTION: 0x10101df0 size=0x5
int * sub_10101e30(void);
int * g_10709110 = ((int * (*)(int))sub_10101e30)(0);
// END FUNCTION

// FUNCTION: 0x10101e30 size=0x52
class ISaveRestoreOps;
struct datamap_t;
struct typedescription_t {
    int fieldType;
    const char *fieldName;
    int fieldOffset[2];
    unsigned short fieldSize;
    short flags;
    const char *externalName;
    ISaveRestoreOps *pSaveRestoreOps;
    void *inputFunc;
    datamap_t *td;
    int fieldSizeInBytes;
    int unk;
};
extern ISaveRestoreOps *g_1055dc70;
extern int g_105694a8[2];
void sub_1000a79a();

int *sub_10101e30()
{
    static typedescription_t dataDesc[] = {
        { 0, 0, {0, 0}, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 2, "m_iszMessage", {0x450, 0}, 1, 0x6, "message" },
        { 17, "m_sNoise", {0x460, 0}, 1, 0x6, "messagesound" },
        { 4, "m_MessageAttenuation", {0x458, 0}, 1, 0x6, "messageattenuation" },
        { 1, "m_MessageVolume", {0x454, 0}, 1, 0x6, "messagevolume" },
        { 1, "m_Radius", {0x45c, 0}, 1, 0x2 },
        { 0, "InputShowMessage", {0x0, 0}, 1, 0x8, "ShowMessage", 0, (void *)sub_1000a79a },
        { 10, "m_OnShowMessage", {0x464, 0}, 1, 0x16, "OnShowMessage", g_1055dc70 },
    };
    g_105694a8[1] = sizeof(dataDesc) / sizeof(dataDesc[0]) - 1;
    g_105694a8[0] = (int)&dataDesc[1];
    return g_105694a8;
}
// END FUNCTION

// FUNCTION: 0x10101eb0 size=0xfe
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CMessage.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CMessage::vfunc103()
{
    vfunc104();
    {
        ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    vfunc93(0, 0);
    switch (m_n458) {
    case 1: m_f45c = 1.25f; break;
    case 2: m_f45c = 0.8f; break;
    case 3: m_f45c = 0.0f; break;
    default: m_f45c = 60.0f; break;
    }
    float f; f = (float)((0.1 * m_f454));
    m_n458 = 0;
    m_f454 = f;
    if (f <= 0.0f)
        m_f454 = 1.0f;
}
// END FUNCTION

// FUNCTION: 0x10101ff0 size=0x21
#include "CMessage.h"
#include "CUnknown1070b248.h"

extern CUnknown1070b248 *g_1070b248;

struct string_t_v { const char *pszValue; };
inline const char *STRING_V(const string_t_v *s) { return s->pszValue ? s->pszValue : ""; }
struct CMsgView { char pad[0x460]; string_t_v m_snd; };

// TARGET: CMessage::vfunc104
void CMessage::vfunc104()
{
	CMsgView *v = (CMsgView *)this;
	if (v->m_snd.pszValue)
		g_1070b248->vfunc0(STRING_V(&v->m_snd), 0);
}
// END FUNCTION

// FUNCTION: 0x10102030 size=0x216
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CMessage.h"
#include "inputdata_t.h"
#include "CPASAttenuationFilter.h"
#include "CEntitySoundOriginView.h"
#include "engineserver.h"
#include "engineiface.h"

void sub_101ceb70(const char *pszMessage);
void sub_101cea60(const char *pszMessage, void *pPlayer);
void *sub_100ab250(void *pEdict);
void sub_101cd940(CBaseEntity *pEnt);

inline void *CBaseEntity_Instance(void *pEdict)
{
	ScopeTrace trace("CBaseEntity::Instance", g_106b8540);
	if (!pEdict)
		pEdict = engine->vfunc38(0);
	return sub_100ab250(pEdict);
}

// TARGET: CMessage::sub_10102030
void CMessage::sub_10102030(inputdata_t *inputdata)
{
	if (m_flags204 & 2) {
		sub_101ceb70(m_pszMessage450 ? m_pszMessage450 : g_106b8540);
	} else {
		void *pActivator = inputdata->pActivator;
		if (!pActivator || !*(int *)((char *)pActivator + 0xa8))
			pActivator = CBaseEntity_Instance(engine->vfunc38(1));
		if (pActivator)
			sub_101cea60(m_pszMessage450 ? m_pszMessage450 : g_106b8540, pActivator);
	}
	if (m_pszSound460) {
		CPASAttenuationFilter filter((CEntitySoundOriginView *)this);
		const char *pszSound = m_pszSound460 ? m_pszSound460 : g_106b8540;
		int edict = engine->vfunc35(m_pEdict2e0);
		enginesound->vfunc3(&filter, edict, 4, pszSound, m_f454, m_f45c, 0, 100, 0, 0, 1, 0);
	}
	if (m_flags204 & 1)
		sub_101cd940(this);
	m_OnShowMessage464.sub_100cd660(inputdata->pActivator, this, 0);
}
// END FUNCTION

// FUNCTION: 0x101022e0 size=0x2b
#include "CMessage.h"

struct CGargoyleMemberUnit {
	void sub_10015708();
};

struct CGargoyleBaseUnit {
	void sub_1000cb8a();
};

void __cdecl sub_10009fc5(void *p);

// TARGET: CMessage::vfunc5
CBaseEntity *CMessage::vfunc5(unsigned int flags)
{
	((CGargoyleMemberUnit *)((char *)this + 0x464))->sub_10015708();
	((CGargoyleBaseUnit *)this)->sub_1000cb8a();
	if (flags & 1)
		sub_10009fc5(this);
	return this;
}
// END FUNCTION
