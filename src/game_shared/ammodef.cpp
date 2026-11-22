// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x10427790 size=0xfe
#include "CUnknown10427700.h"

struct ICvarFind { virtual void v0(); virtual void v1(); virtual void *FindVar(const char *name); };
extern ICvarFind *g_1070b234;
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

void CUnknown10427700::sub_10427790(const char *name, int a, int b, const char *plrCvar, const char *npcCvar, const char *carryCvar)
{
	if (!sub_10427700(name, a, b))
		return;
	if (plrCvar) {
		m_entries[m_nEntries].m_pPlrCvar = g_1070b234->FindVar(plrCvar);
		if (!m_entries[m_nEntries].m_pPlrCvar)
			Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", name, plrCvar);
		m_entries[m_nEntries].m_plrDmg = -1;
	}
	if (npcCvar) {
		m_entries[m_nEntries].m_pNpcCvar = g_1070b234->FindVar(npcCvar);
		if (!m_entries[m_nEntries].m_pNpcCvar)
			Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", name, npcCvar);
		m_entries[m_nEntries].m_npcDmg = -1;
	}
	if (carryCvar) {
		m_entries[m_nEntries].m_pCarryCvar = g_1070b234->FindVar(carryCvar);
		if (!m_entries[m_nEntries].m_pCarryCvar)
			Msg("ERROR: Ammo (%s) found no CVar named (%s)\n", name, carryCvar);
		m_entries[m_nEntries].m_maxCarry = -1;
	}
	m_nEntries++;
}
// END FUNCTION
