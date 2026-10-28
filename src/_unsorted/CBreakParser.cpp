// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10191e90 size=0x1cf
#include <string.h>
#include <stdlib.h>
#include "CBreakParser.h"

__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);
extern "C" __declspec(dllimport) char *Q_strncat(char *pDest, const char *pSrc, int maxLen, int max_chars_to_copy);
void sub_101d03e0(void *pVector, const char *pszValue);

struct SBreakModel	// the break model record the parser fills
{
	float offset[3];	// 0x00
	char modelName[0x104];	// 0x0c
	float fadeTime;	// 0x110
	float health;	// 0x114
	int bodyIndex;	// 0x118
};

void CBreakParser::vfunc0(void *pData, const char *pszKey, const char *pszValue)
{
	SBreakModel *pModel = (SBreakModel *)pData;
	if (!strcmp(pszKey, "model")) {
		char szModel[0x400];
		Q_strncpy(szModel, pszValue, 0x104);
		if (_strnicmp(szModel, "models/", 7)) {
			Q_strncpy(pModel->modelName, "models/", 0x104);
			Q_strncat(pModel->modelName, szModel, 0x104, -1);
		} else {
			Q_strncpy(pModel->modelName, szModel, 0x104);
		}
		int nLength = strlen(pModel->modelName);
		if (nLength >= 4 && !_strcmpi(pModel->modelName + nLength - 4, ".mdl"))
			return;
		Q_strncat(pModel->modelName, ".mdl", 0x104, -1);
	} else if (!_strcmpi(pszKey, "offset")) {
		sub_101d03e0(pModel, pszValue);
	} else if (!_strcmpi(pszKey, "health")) {
		pModel->health = (float)atof(pszValue);
	} else if (!_strcmpi(pszKey, "fadetime")) {
		pModel->fadeTime = (float)atof(pszValue);
	} else if (!_strcmpi(pszKey, "bodyindex")) {
		pModel->bodyIndex = (int)atof(pszValue);
	}
}
// END FUNCTION

// FUNCTION: 0x101920e0 size=0x3c
#include "CBreakParser.h"

struct breakparams_t {
	float v[3];
	char flag;
	char pad0d[0x110 - 0xd];
	float f110;
	float f114;
	float f118;
};
extern float g_1070d1b0[3];

void CBreakParser::vfunc1(void *pData)
{
	breakparams_t *p = (breakparams_t *)pData;
	p->flag = 0;
	p->v[0] = g_1070d1b0[0];
	p->v[1] = g_1070d1b0[1];
	p->v[2] = g_1070d1b0[2];
	p->f114 = 1.0f;
	p->f110 = 0;
	p->f118 = 0;
}
// END FUNCTION
