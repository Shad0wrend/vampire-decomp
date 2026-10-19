// class CSave (RTTI .?AVCSave@@), primary vtable 0x10476fbc, 40 slots.
// Only the slots that decompiled code needs have their signature; the rest are placeholders.
#pragma once

class CSave
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5(const void *p);
	virtual void vfunc6();
	virtual void vfunc7(int a, int b, int count);	// forwards to sub_101a05b0 with the count doubled (shorts to bytes)
	virtual void vfunc8();
	virtual void vfunc9();
	virtual bool vfunc10(const void *pData, int nBytes);	// WriteInt
	virtual void vfunc11();
	virtual void vfunc12(const void *pData, int count);
	virtual void vfunc13();
	virtual bool vfunc14(const void *pData, int nBytes);
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20(const char *pString);	// WriteString
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23(const void *pData, int count);	// WriteVector
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26();
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29();
	virtual void vfunc30();
	virtual void vfunc31();
	virtual void vfunc32();
	virtual void vfunc33();
	virtual void vfunc34();
	virtual void vfunc35();
	virtual void vfunc36(const void *pData, int count);	// WriteEHandle
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();

	char m_pad0004[0x18];
	void *m_pEntityBlock;	// +0x1c: block holding the entity table (count at +0x1318, entries at +0x131c)

	int sub_101a08f0(void *pEntity);	// index of the entity in the table, or -1
	void sub_101a05b0(int a, int bytes, int b);
	bool sub_1000643d(const void *pData, int nBits);	// as in CUnknown100bde40 (transplant)
};
