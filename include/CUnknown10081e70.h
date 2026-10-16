// CUnknown10081e70: object with a 245+ slot vtable whose slot 244 is called by a one-argument method; real name not yet known.
// The slots below are placeholders (16 per chain level) that keep the slot numbers right.
#pragma once

#define CU10081E70_V16(p) \
	virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); \
	virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); \
	virtual void p##8(); virtual void p##9(); virtual void p##a(); virtual void p##b(); \
	virtual void p##c(); virtual void p##d(); virtual void p##e(); virtual void p##f();

class CU10081e70_L0 { public: CU10081E70_V16(va) };
class CU10081e70_L1 : public CU10081e70_L0 { public: CU10081E70_V16(vb) };
class CU10081e70_L2 : public CU10081e70_L1 { public: CU10081E70_V16(vc) };
class CU10081e70_L3 : public CU10081e70_L2 { public: CU10081E70_V16(vd) };
class CU10081e70_L4 : public CU10081e70_L3 { public: CU10081E70_V16(ve) };
class CU10081e70_L5 : public CU10081e70_L4 { public: CU10081E70_V16(vf) };
class CU10081e70_L6 : public CU10081e70_L5 { public: CU10081E70_V16(vg) };
class CU10081e70_L7 : public CU10081e70_L6 { public: CU10081E70_V16(vh) };
class CU10081e70_L8 : public CU10081e70_L7 { public: CU10081E70_V16(vi) };
class CU10081e70_L9 : public CU10081e70_L8 { public: CU10081E70_V16(vj) };
class CU10081e70_L10 : public CU10081e70_L9 { public: CU10081E70_V16(vk) };
class CU10081e70_L11 : public CU10081e70_L10 { public: CU10081E70_V16(vl) };
class CU10081e70_L12 : public CU10081e70_L11 { public: CU10081E70_V16(vm) };
class CU10081e70_L13 : public CU10081e70_L12 { public: CU10081E70_V16(vn) };
class CU10081e70_L14 : public CU10081e70_L13 { public: CU10081E70_V16(vo) };

class CUnknown10081e70 : public CU10081e70_L14
{
public:
	virtual void vfunc240(); virtual void vfunc241(); virtual void vfunc242(); virtual void vfunc243();
	virtual void vfunc244();

	void sub_10081e70(int unused);
};
