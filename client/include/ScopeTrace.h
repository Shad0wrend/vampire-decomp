// ScopeTrace: the engine's scope-trace helper as the game's code inlines it. The constructor pushes a
// (function name, entity name, file/line placeholder) record on the trace stack at 0x109f3620 (depth at 0x109f3680),
// the destructor pops it, so a function that returns a value pops after the value was computed.
// Use it with the entity name expression: this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc.
// The three argument form (function, entity name, file) is the one the game keeps out of line in a function that is
// over VC6's inline budget (0x10037300, stub 0x1000c4dc).
#pragma once

struct ScopeTraceEntry
{
	const char *name;
	const void *file;
	const void *line;
};

extern int *g_101e3128;	// trace depth
extern ScopeTraceEntry *g_101e3124;	// trace stack
extern char g_102de300[];	// empty string
	// "NULL_ENTITY"

struct ScopeTrace
{
	ScopeTrace(const char *func, const char *name)
	{
		g_101e3124[*g_101e3128].name = func;
		g_101e3124[*g_101e3128].file = name;
		g_101e3124[*g_101e3128].line = g_102de300;
		(*g_101e3128)++;
	}
	ScopeTrace(const char *func, const char *name, const char *line)
	{
		g_101e3124[*g_101e3128].name = func;
		g_101e3124[*g_101e3128].file = name;
		g_101e3124[*g_101e3128].line = line;
		(*g_101e3128)++;
	}
	~ScopeTrace() { (*g_101e3128)--; }
};
