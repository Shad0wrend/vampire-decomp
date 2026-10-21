// class CSave (RTTI .?AVCSave@@), primary vtable 0x10476fbc, 40 slots.
// Only the slots that decompiled code needs have their signature; the rest are placeholders.
#pragma once

struct typedescription_t;
struct CSaveEdict;

class CSave
{
public:
	virtual int vfunc0();	// current position
	virtual void vfunc1(int pos);	// seek
	virtual void vfunc2();
	virtual int vfunc3(int a, int b, int c, int d, int e);	// "CSave::WriteFields" (name, base data, root map, fields, field count): stub 0x1000b258, returns 1
	virtual void vfunc4();
	virtual void vfunc5(const void *p);	// pushes the current position on the section stack (vector at +4) after sub_101a05f0(p, 0)
	virtual void vfunc6();	// pops the section stack, writes the section size
	virtual void vfunc7(int a, int b, int count);	// forwards to sub_101a05b0 with the count doubled (shorts to bytes)
	virtual void vfunc8();
	virtual void vfunc9(const char *pszName, void *pData, int count);	// writes count ints (called by vfunc37 with the entity indices)
	virtual bool vfunc10(const void *pData, int nBytes);	// WriteInt
	virtual void vfunc11();
	virtual void vfunc12(const void *pData, int count);
	virtual void vfunc13();
	virtual bool vfunc14(const void *pData, int nBytes);
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17(const char *pszName, void *pData, int count);	// slot used by WriteField for field types 0x10 / 0x11
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20(const char *pString);	// WriteString
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23(const void *pData, int count);	// WriteVector
	virtual void vfunc24();
	virtual void vfunc25();
	virtual void vfunc26(const char *pszName, void *pData, int count);	// slot used by WriteField for field type 0xf
	virtual void vfunc27();
	virtual void vfunc28();
	virtual void vfunc29(const char *pszName, void *pData, int count);	// slot used by WriteField for field type 0xe
	virtual void vfunc30();
	virtual void vfunc31(void *pBase, const char *pszName, void *pData, int count);	// slot used by WriteField for field type 0x13
	virtual void vfunc32();
	virtual void vfunc33(const char *pszName, void *pData, int count);	// slot used by WriteField for field type 0xb
	virtual void vfunc34();
	virtual void vfunc35(const char *pszName, void *pData, int count);	// slot used by WriteField for field type 0xd
	virtual void vfunc36(const void *pData, int count);	// WriteEHandle
	virtual void vfunc37(const char *pszName, void *pData, int count);	// slot used by WriteField for field type 0xc: converts the entity handles to entity table indices (sub_101a08f0) and writes them through slot 9
	virtual void vfunc38();
	virtual void vfunc39();

	CSave(void *pData);	// stub 0x10009bf6

	int *m_pSections;	// +0x04: section start stack
	char m_pad0008[0x8];
	int m_nSections;	// +0x10
	char m_pad0014[0x8];
	void *m_pEntityBlock;	// +0x1c: block holding the entity table (count at +0x1318, entries at +0x131c)

	int sub_101a08f0(void *pEntity);	// index of the entity in the table, or -1
	int sub_101a0830(CSaveEdict *pEdict);	// "CSave::EntityIndex" (edict): -1 for null, else sub_101a08f0 of the entity of the edict (CBaseEntity::Instance scope trace around slot 4 of the object at edict+0x40)
	void sub_101a05b0(int a, int bytes, int b);
	void sub_101a05f0(const void *p, int a);	// called by vfunc5 through the stub at 0x1000950c
	bool sub_1000643d(const void *pData, int nBits);	// as in CUnknown100bde40 (transplant)
	bool sub_101a1140(int a, void *pData, void *pBase, typedescription_t *pField);	// "CSave::WriteField": dispatches on the field type (0xb..0x13) to the matching write slot, "Bad field type" warning otherwise
	CSave *sub_1019f870(void *pBuffer);	// the CSave constructor (the stub at 0x10009bf6): vtable, +0x18 = pBuffer, +0x1c = pBuffer + 0x18 (0 for null), room for 0x20 elements in the char vector at +4
	void sub_1016f0f0(const char *pszName, char *pData, int size);	// writes the size byte string pData under pszName (stub 0x100139b7)
	bool sub_1019fe10(void *pData, typedescription_t *pField);	// "CSave::IsFieldNonEmpty"-like (recursive, stub 0x10015aaf): whether the field holds data that has to be saved: embedded structures (type 9) are checked field by field, custom fields (type 10) ask their save/restore ops (slot 2), everything else is tested for all-zero bytes (sub_101a0570)
	int sub_101a0570(const void *pData, int nBytes);	// whether the bytes are all zero (stub 0x100041d8)
	int sub_101a01f0(const void *pBaseData, typedescription_t *pFields, int nFields);	// the number of fields that have to be saved (stub 0x100143da)
	bool sub_101a01c0(const char *pszName, void *pData, void *pRootMap, typedescription_t *pField);	// writes one field (stub 0x1000b0fa); false when it failed
};
