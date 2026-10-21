// CUnknown101aa210: an entity that looks for its NPC by name (field at +0x454): first through the global entity list
// by target name, then among the entities found by a sphere query (the radius value at +0x458 asked through slot 220);
// the NPC it wants is the object at +0x94 of the entity found. Real name not yet known (the neighbours at 0x101a9fa0 /
// 0x101aa390 look like a scripted camera / actor binding).
#pragma once

#define U101AA_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

class CUnknown101aa210
{
public:
	U101AA_V10(a0) U101AA_V10(a1) U101AA_V10(a2) U101AA_V10(a3) U101AA_V10(a4)
	U101AA_V10(a5) U101AA_V10(a6) U101AA_V10(a7) U101AA_V10(a8) U101AA_V10(a9)
	U101AA_V10(b0) U101AA_V10(b1) U101AA_V10(b2) U101AA_V10(b3) U101AA_V10(b4)
	U101AA_V10(b5) U101AA_V10(b6) U101AA_V10(b7) U101AA_V10(b8) U101AA_V10(b9)
	U101AA_V10(c0) U101AA_V10(c1)
	virtual float *vfunc220(int a, int b, int c);	// slot 220: the position used as the centre of the sphere query (three stack arguments: the value at +0x458, 0x2000, 0)

	char m_pad0004[0x454 - 4];
	const char *m_pszName454;	// 0x454: the name of the NPC wanted
	int m_n458;	// 0x458

	void *sub_101aa210();	// finds the NPC (the object at +0x94 of the entity found) that sub_101aa130 accepts: by target name first, then by the class name among the entities of a sphere query; 0 when there is none
	bool sub_101aa130(void *pNPC);	// stub 0x1000781a: whether the NPC can be used
};
