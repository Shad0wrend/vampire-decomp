// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 2 blocks
#include "vampire.h"

// FUNCTION: 0x101b24d0 size=0x7b
struct ChanEnt { int value; const char *name; };
extern ChanEnt g_10598c78[7];
extern char g_10599140[];
extern char g_105990e8[];
extern int (*g_109f3848)(const char *, const char *, int);
extern int (*g_109f3880)(const char *, const char *);
extern void (*g_109f3630)(const char *, ...);
extern "C" unsigned strlen(const char *);
extern "C" int atoi(const char *);
int sub_101b24d0(const char *s)
{
    if (!s)
        return 0;
    if (g_109f3848(s, g_10599140, strlen(g_10599140)) != 0)
        return atoi(s);
    int (*cmp)(const char *, const char *) = g_109f3880;
    int i = 0;
    do {
        if (cmp(s, g_10598c78[i].name) == 0)
            return g_10598c78[i].value;
        i++;
    } while (i < 7);
    g_109f3630(g_105990e8, s);
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101b2570 size=0x88
#include "CUnknown101b2570.h"

extern "C" __declspec(dllimport) int Q_strcasecmp(const char *a, const char *b);
extern "C" __declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int maxLen);
SFloatPair sub_1012f640(const char *s);

void CUnknown101b2570::sub_101b2570(const char *pitch)
{
	if (Q_strcasecmp(pitch, "PITCH_NORM") == 0) {
		m_pitch.a = 100.0f;
		m_pitch.b = 0.0f;
	} else if (Q_strcasecmp(pitch, "PITCH_LOW") == 0) {
		m_pitch.a = 95.0f;
		m_pitch.b = 0.0f;
	} else if (Q_strcasecmp(pitch, "PITCH_HIGH") == 0) {
		m_pitch.a = 120.0f;
		m_pitch.b = 0.0f;
	} else {
		m_pitch = sub_1012f640(pitch);
	}
	Q_strncpy(m_szPitch, pitch, 32);
}
// END FUNCTION
