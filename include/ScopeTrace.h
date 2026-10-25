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

extern int *g_109f3680;	// trace depth
extern ScopeTraceEntry *g_109f3620;	// trace stack
extern char g_106b8540[];	// empty string
extern char g_105387dc[];	// "NULL_ENTITY"

struct ScopeTrace
{
	ScopeTrace(const char *func, const char *name)
	{
		g_109f3620[*g_109f3680].name = func;
		g_109f3620[*g_109f3680].file = name;
		g_109f3620[*g_109f3680].line = g_106b8540;
		(*g_109f3680)++;
	}
	ScopeTrace(const char *func, const char *name, const char *line)
	{
		g_109f3620[*g_109f3680].name = func;
		g_109f3620[*g_109f3680].file = name;
		g_109f3620[*g_109f3680].line = line;
		(*g_109f3680)++;
	}
	~ScopeTrace() { (*g_109f3680)--; }
};
