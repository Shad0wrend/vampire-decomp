// StatDefault2: default stat object used by a second stat-list lookup (name provisional).
#pragma once

struct StatDefault2
{
	int m_type;	// 0x0
	int m_pad04[2];
	int m_nFlags0c;	// 0xc
	int m_pad10[2];
	int *m_pFlags18;	// 0x18
	int m_nFlags1c;	// 0x1c
	int m_pad20[2];
	int *m_pFlags28;	// 0x28
	StatDefault2(int);
	~StatDefault2();
};

extern int g_1073a34c;
extern StatDefault2 **g_1073a350;

inline StatDefault2 *FindStatDefault2(int type)
{
	for (int i = 0; i < g_1073a34c; i++) {
		if (g_1073a350[i]->m_type == type)
			return g_1073a350[i];
	}
	static StatDefault2 s_default(-1);
	return &s_default;
}
