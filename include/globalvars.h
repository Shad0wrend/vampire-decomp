#pragma once
// gpGlobals: the engine's global variables, pointed to by g_1070b228. Offsets read from the matched sources; names
// after the public Source SDK where the offsets agree. The type and the pointer live in a namespace so sources that
// still declare their own `extern X *g_1070b228;` keep compiling (the judge resolves both to the same address).
namespace EngineGlobals {
struct CGlobalVars {
	float realtime;           // 0x00
	int framecount;           // 0x04
	float absoluteframetime;  // 0x08
	float curtime;            // 0x0c
	float frametime;          // 0x10
	int maxClients;           // 0x14
	int m_n18;                // 0x18
	int m_n1c;                // 0x1c
	int m_n20;                // 0x20
	const char *mapname;      // 0x24
	int mapversion;           // 0x28: passed beside the map name
	int m_n2c;                // 0x2c
	bool m_b30;               // 0x30
	bool m_b31;               // 0x31
	bool m_b32;               // 0x32
	char m_pad33[1];
	int m_n34;                // 0x34
	int m_nEdicts;            // 0x38: loop bound over the entity slots
};
extern CGlobalVars *g_1070b228;
}
#define gpGlobals EngineGlobals::g_1070b228
