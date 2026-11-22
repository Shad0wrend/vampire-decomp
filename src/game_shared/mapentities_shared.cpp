// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 1 block
#include "vampire.h"

// FUNCTION: 0x10136ee0 size=0x102
#include "CEntityMapData.h"
#include <string.h>

extern char *g_10579478;
extern char *(__cdecl *g_109f3890)(char *dest, const char *src, int maxLen);
extern void (__cdecl *g_109f362c)(const char *fmt, ...);
const char *sub_10136ce0(const char *data, char *token, char *separators);

bool CEntityMapData::sub_10136ee0(char *keyName, char *value)
{
	char token[256];
	char *(__cdecl *copy)(char *, const char *, int);
	unsigned int len;
	char *pSave = m_pCurrentKey;
	m_pCurrentKey = (char *)sub_10136ce0(m_pCurrentKey, token, g_10579478);
	if (token[0] == '}') {
		m_pCurrentKey = pSave;
		return false;
	}
	if (!m_pCurrentKey)
		goto eof;
	copy = g_109f3890;
	copy(keyName, token, 256);
	len = strlen(keyName);
	if (len != 0) {
		do {
			if (keyName[len - 1] != ' ')
				break;
			keyName[len - 1] = 0;
		} while (--len);
	}
	m_pCurrentKey = (char *)sub_10136ce0(m_pCurrentKey, token, g_10579478);
	if (!m_pCurrentKey) {
eof:
		g_109f362c("CEntityMapData::GetNextKey: EOF without closing brace\n");
		return false;
	}
	if (token[0] == '}') {
		g_109f362c("CEntityMapData::GetNextKey: closing brace without data\n");
		return false;
	}
	copy(value, token, 256);
	return true;
}
// END FUNCTION
