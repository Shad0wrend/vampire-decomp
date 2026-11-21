// CUnknown101ddc30: a discipline effect record loaded from a key file ("DisciplineFX" sub key at +0, the "Source" and
// "Affects" values at +4 / +8); real name not yet known.
#pragma once

struct CUnknown101ddc30Kv	// a KeyValues-like object: slot 13 = GetString(key, default)
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12();
	virtual const char *vfunc13(const char *pszKey, const char *pszDefault);
};

class CUnknown101ddc30
{
public:
	CUnknown101ddc30Kv *m_pKv;	// 0x00: the "DisciplineFX" sub key
	int m_nSource;	// 0x04
	int m_nAffects;	// 0x08

	bool sub_10148150(CUnknown101ddc30Kv *pKV);	// loads the record from the key file; always false
	void sub_10148120();	// the constructor body (stub 0x10003936)
};
