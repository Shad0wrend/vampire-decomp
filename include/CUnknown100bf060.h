// CUnknown100bf060: character stream reader (error flag at +0x10); real name not yet known.
#pragma once

class CUnknown100bf060
{
public:
	char pad0[0x10];
	char m_error;

	char sub_10009494();
	bool sub_100bf060(char *buf, int size, char stopAtNewline, int *pLen);
	char *sub_100bf0f0(bool *pFailed);
};
