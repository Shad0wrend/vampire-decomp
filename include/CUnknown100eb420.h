// CUnknown100eb420: a parameter block whose model name pointer sits at +0x10 (the layout of
// CDisciplineParticleParams). Only the method that decompiled code needs is declared.
#pragma once

class CUnknown100eb420
{
public:
	char m_pad0000[0x10];
	const char *m_pszModel;	// +0x10

	bool sub_100eb420();	// true when a model name is set
};
