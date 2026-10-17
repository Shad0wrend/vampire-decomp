// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10349400 size=0x69
struct TScope {
	const char *name;
	void *a;
	void *b;
};
extern int *g_109f3680;
extern TScope *g_109f3620;
extern char g_10624248[];
extern char g_106b8540[];

struct TOps {
	bool sub_10349400(int **p);
};

bool TOps::sub_10349400(int **p)
{
	g_109f3620[*g_109f3680].name = g_10624248;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	bool r = **p == 0;
	(*g_109f3680)--;
	return r;
}
// END FUNCTION
