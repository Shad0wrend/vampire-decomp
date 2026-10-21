// CUnknown10207dd0: the global object at 0x1074f028 that a character hands its inventory changes to (real name not yet known).
#pragma once

struct CUnknown10207dd0Name	// the object the template lookup hands back: its getter points at the model name pointer
{
	const char **sub_100077a7();	// stub 0x100077a7
};

class CUnknown10207dd0
{
public:
	void sub_10207dd0(void *pCharacter, int a);	// stub 0x100135ca (forwards its arguments to the worker at 0x10207c70)
	CUnknown10207dd0Name *sub_10207c40(void *pCharacter, void *ppWeapon, int bMale);	// stub 0x10001de8: looks the character's default stat item up (the call ignores this)
};
