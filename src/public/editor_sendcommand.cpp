// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 10 blocks
#include "vampire.h"

// FUNCTION: 0x100f4140 size=0x3e
extern "C" __declspec(dllimport) int Q_snprintf(char *buf, int size, const char *fmt, ...);
void __cdecl sub_100f4490(char *cmd, int a);
void sub_100f4140(const char *name, int id, int a)
{
	char buf[260];
	Q_snprintf(buf, sizeof(buf), "session_begin %s %d", name, id);
	sub_100f4490(buf, a);
}
// END FUNCTION

// FUNCTION: 0x100f4190 size=0x3e
extern "C" __declspec(dllimport) int Q_snprintf(char *buf, int size, const char *fmt, ...);
void __cdecl sub_100f4490(char *cmd, int a);
void sub_100f4190(const char *name, int id, int a)
{
	char buf[260];
	Q_snprintf(buf, sizeof(buf), "map_check_version %s %d", name, id);
	sub_100f4490(buf, a);
}
// END FUNCTION

// FUNCTION: 0x100f41e0 size=0x5c
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
void sub_100f4490(char *pszCommand, int a);
void sub_100f41e0(int pszClassname, float x, float y, float z, int a)
{
	char szCommand[260];
	Q_snprintf(szCommand, sizeof(szCommand), "entity_create %s %g %g %g", pszClassname, (double)x, (double)y, (double)z);
	sub_100f4490(szCommand, a);
}
// END FUNCTION

// FUNCTION: 0x100f4260 size=0x64
extern int (*g_109f388c)(char *, int, const char *, ...);
extern char g_10565604[];
void sub_100f4490(char *, int);
void sub_100f4260(int a, int b, float x, float y, float z, int c)
{
    char buf[260];
    g_109f388c(buf, 260, g_10565604, a, b, (double)x, (double)y, (double)z);
    sub_100f4490(buf, c);
}
// END FUNCTION

// FUNCTION: 0x100f42f0 size=0x3e
extern "C" __declspec(dllimport) int Q_snprintf(char *buf, int size, const char *fmt, ...);
void __cdecl sub_100f4490(char *cmd, int a);
void sub_100f42f0(const char *name, int id, int a)
{
	char buf[260];
	Q_snprintf(buf, sizeof(buf), "nodelink_create %d %d", name, id);
	sub_100f4490(buf, a);
}
// END FUNCTION

// FUNCTION: 0x100f4340 size=0x5c
extern "C" __declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
void sub_100f4490(char *pszCommand, int a);
void sub_100f4340(int pszClassname, float x, float y, float z, int a)
{
	char szCommand[260];
	Q_snprintf(szCommand, sizeof(szCommand), "entity_delete %s %g %g %g", pszClassname, (double)x, (double)y, (double)z);
	sub_100f4490(szCommand, a);
}
// END FUNCTION

// FUNCTION: 0x100f43c0 size=0x39
extern void *g_109f388c;
void sub_1000e354(const char *buf, int p);
void sub_100f4490(const char *buf, int p);

// TARGET: sub_100f43c0
void sub_100f43c0(int nNode, int p2)
{
    char buf[260];
    ((int (__cdecl *)(char *, int, const char *, ...))g_109f388c)(buf, 260, "node_delete %d", nNode);
    sub_1000e354(buf, p2);
}
// END FUNCTION

// FUNCTION: 0x100f4410 size=0x3e
extern "C" __declspec(dllimport) int Q_snprintf(char *buf, int size, const char *fmt, ...);
void __cdecl sub_100f4490(char *cmd, int a);
void sub_100f4410(const char *name, int id, int a)
{
	char buf[260];
	Q_snprintf(buf, sizeof(buf), "nodelink_delete %d %d", name, id);
	sub_100f4490(buf, a);
}
// END FUNCTION

// FUNCTION: 0x100f4460 size=0x13
namespace lifted {
extern char g_10565690;
int sub_1000e354(int, int);
}
int sub_100f4460(int a0)
{
    return lifted::sub_1000e354((int)&lifted::g_10565690, a0);
}
// END FUNCTION

// FUNCTION: 0x100f4490 size=0xf0
extern "C" {
__declspec(dllimport) void *__stdcall FindWindowA(const char *, const char *);
__declspec(dllimport) int __stdcall SendMessageA(void *, unsigned, unsigned, void *);
__declspec(dllimport) int __stdcall MessageBoxA(void *, const char *, const char *, unsigned);
__declspec(dllimport) int __cdecl Q_snprintf(char *, int, const char *, ...);
unsigned strlen(const char *);
}
#pragma intrinsic(strlen)
struct CopyData { int a; unsigned cb; const char *p; };

int sub_100f4490(const char *cmd, bool report)
{
    char buf[1024];
    void *hWnd = FindWindowA("Worldcraft_ShellMessageWnd", "Worldcraft_ShellMessageWnd");
    if (hWnd) {
        CopyData cd;
        cd.p = cmd;
        cd.cb = strlen(cmd) + 1;
        cd.a = 0;
        if (!SendMessageA(hWnd, 0x4a, 0, &cd)) {
            if (report) {
                Q_snprintf(buf, 1024, "Worldcraft did not accept the command: \n\n\"%s\"\n\n Make sure the command is valid and that Worldcraft is still running properly.", cmd);
                MessageBoxA(0, buf, "Editor_SendCommand Error", 0);
            }
            return 2;
        }
        return 0;
    }
    if (report) {
        Q_snprintf(buf, 1024, "Could not contact Worldcraft to send the command: \n\n\"%s\"\n\n Worldcraft does not appear to be running.", cmd);
        MessageBoxA(0, buf, "Editor_SendCommand Error", 0);
    }
    return 1;
}
// END FUNCTION
