// CUnknown101b3a10: sound-script helper that expands the "<gender>" placeholder of a sound name for a character
// (name provisional; its sibling at 0x101b3830 expands both genders).
#pragma once

class CUnknown101b3a10
{
public:
	int sub_1012ec90(void *pCharacter);	// the gender of the character as 0 (unknown) / 1 (male) / 2 (female); the stub at 0x1001475e always answers 0
	void sub_1012eb70(void *pCharacter, const char *pszSrc, char *pszDest, int nDest);	// copies pszSrc to pszDest (nDest bytes) and, when it holds the "<gender>" placeholder and the character's gender is known, rewrites it as the text before the placeholder, "male" or "female", and the text after it
};
