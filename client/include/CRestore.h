// CRestore: save-game restore context (RTTI .?AVCRestore@@, vtable 0x10477084, 35 slots; only the first slots are modelled).
#pragma once

#include "IRestore.h"
#include "Vector.h"

struct CRestoreField;
struct typedescription_t;
class CBaseEntity;

extern void (*g_101e30fc)(void *);	// Plat_Free

// The CUtlVector<int> that CRestore starts with (memory, allocation count, grow size, size, element pointer).
struct CRestoreVec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;

	CRestoreVec() { m_pMemory = 0; m_allocationCount = 0; m_growSize = 0; m_size = 0; m_pElements = 0; }
	~CRestoreVec()
	{
		void (*pfnFree)(void *) = g_101e30fc;
		m_size = 0;
		if (m_growSize != -1)
		{
			if (m_pMemory)
			{
				pfnFree(m_pMemory);
				m_pMemory = 0;
			}
			m_allocationCount = 0;
		}
		m_pElements = m_pMemory;
		if (m_growSize != -1 && m_pMemory)
			pfnFree(m_pMemory);
	}
	void EnsureCapacity(int num);
};

struct CRestoreSaveEnt	// the record the save index maps to (stub 0x10012ff8 / 0x101a2410): entity index at +4, entity handle at +0x10
{
	char m_pad0000[4];
	int m_nIndex;	// 0x04
	char m_pad0008[8];
	unsigned int m_hEntity;	// 0x10
};

class CRestore : public IRestore
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
		// slot 1 with the position (the same function as the slot's, called by ReadBasic-like seeks): seek within the save section
	virtual int vfunc2(CBaseEntity *pEnt, int map);	// reads the entity's data description block
	virtual int vfunc3(int a, int b, int c, int d, int e);	// stub 0x10004b65 for 0x101a1b70, "CRestore::ReadFields"-like; real types (changing them breaks matched callers that pass ints, so a worker should cast): (const char *pszName, void *pBaseData, int nBaseOffset, typedescription_t *pFields, int fieldCount), returns int (1 / 0). pszName is hashed (inlined CSaveRestoreBuffer::TokenHash on the record at +0x18: ror 4 / xor over the chars, % count at +0x10, linear probe through the table at +0x14 with an inlined strcmp; Warning "...COMPLETELY FULL!"), the token read with slot 13 must match, else Msg "Expected %s found %s!" and rewind min(4, remaining) bytes, return 0; then slot 4(pBaseData, pFields, fieldCount) and, slot 14 times: slot 9 reads a field header, sub_101a17c0(name of the token, pFields, fieldCount, &start), sub_101a1780(field) -> sub_101a1750(&header, nBaseOffset + field+8, field) (stub 0x1000b39d), else sub_101a2020(header size); returns 1

		// walks the chain of descriptions (p->m_pParent at +0xc, parents first) and calls slot 3 with the five dwords of each; stub 0x10004f70

		// the jump stub of sub_101a1f00, used by its recursive call

	// Slots 4..28 (slot 7 and slot 16 are the plain members below).
	virtual void vfunc4(void *pBaseData, typedescription_t *pFields, int fieldCount);	// "CRestore::EmptyFields": clears every readable field (custom ops Empty, embedded tables recursively, else zero fill)
	virtual void vfunc5(); virtual void vfunc6(void *pData); virtual void vfunc7(unsigned short *pValue); virtual void vfunc8(); virtual void vfunc9(unsigned short *pValue);	// slot 9: reads two shorts (slot 13) into pValue, or the short-read tail when null
	
	virtual int vfunc10(); virtual const char *vfunc11(int token);	// slot 11: the token string at index `token` of the table behind m_pData (+0x10 count, +0x14 array of const char*); "<<illegal>>" out of range, the empty string (0x106b8540) for a null entry
	virtual unsigned int vfunc12(int a, int b, int c);	// slot 12: halves the count min(2*b, c) (when c is set) after 0x1000fe9d(a, n) and, when short of c, 0x1000910b(c - n)
	virtual short vfunc13(); virtual int vfunc14();	// slot 14: reads a count (used by the memory list restore)
	virtual int vfunc15(int *pValues, int count, int nBytesAvailable);	// "CRestore::ReadInt": reads up to count ints into pValues, returns the number read
	virtual void s16();
	virtual int vfunc17(void *p, int count, int nBytesAvailable);	// slot 17 ("CRestore::ReadBool"-like): reads up to count bytes into pValues; its first argument is used as an int (see sub_1000fe9d)
	virtual int vfunc18(float *pValues, int count, int nBytesAvailable);	// slot 18 ("CRestore::ReadFloat"-like): reads up to count floats into pValues, returns the number read
	virtual int vfunc19(void *p, int count, int nBytesAvailable);	// slot 19: reads up to nBytesAvailable bytes into p (sub_101a1f90), skipping the rest (sub_1000910b); returns the number read
	virtual int vfunc20(int *pValues, int count, int nBytesAvailable);	// "CRestore::ReadString" (string pool ids): reads up to count zero terminated strings from the buffer, stores the pooled id of each (0 for an empty one) in pValues, then skips the rest of the nBytesAvailable bytes; returns the number read
	virtual void vfunc21(char *pDest, int n, int a);	// slot 21: sub_101a1f70 (the record's int at +4 as the source), sub_1000910b(a), then Q_strncpy(pDest, source, n)
	virtual int vfunc22(Vector *pValues, int count, int nBytesAvailable);	// slot 22 "CRestore::ReadVector": reads up to count vectors, returns the number read
	virtual int vfunc23(int); virtual int vfunc24(float *pValues, int count, int nBytesAvailable);	// slot 24: slot 18 into pValues, then adds the float at m_pData2 + 0x12e8 to each value read (in place)
	virtual int vfunc25(Vector *pValues, int count, int nBytesAvailable);	// slot 25 "CRestore::ReadPosition": slot 22, then adds the landmark offset of the save data (+0x12dc when the flag at +0x12c4 is set, else the zero vector at 0x1070d1b0) to every vector read
	virtual void s26();
	virtual int vfunc27(void *pBase, int *pValues, int count, int nBytesAvailable);	// slot 27: used by ReadField for field type 0x13

	virtual int vfunc28(CBaseEntity **pValues, int count, int nBytesAvailable);	// "CRestore::ReadEntityPtr": reads entity indexes (slot 15) and maps each to the entity (sub_101a2390), zero-filling the rest
	virtual int vfunc29(int *pValues, int count, int nBytesAvailable);	// "CRestore::ReadEdictPtr": like slot 28 but stores the edict (+0x2e0) of each entity (0 when it does not resolve); reads through slot 15 into a 256 dword buffer, zero-filling up to the third argument
	virtual int vfunc30(unsigned int *pValues, int count, int nBytesAvailable);	// "CRestore::ReadEHandle": like slot 29 but stores the entity handle (slot 1 of the entity, -1 when it does not resolve); zero-fills up to the third argument
	virtual int vfunc31(int *pValues, int count, int nBytesAvailable);	// slot 31: like slot 30 on the save index records (sub_101a2410): -1 when there is none, the record's live entity handle (+0x10), else minus the record's index (+4) when that is within 1..0xfffe (otherwise -1); zero-fills up to the third argument

	CRestore(void *pData);	// 0x101a12a0

	// Searches the field table starting from the remembered position, wrapping around.
		// "CRestore::ReadField": dispatches on the field type (0xb..0x13) to the matching read slot, "Bad field type" warning otherwise (stub 0x10001f5a)
		// dispatches on the field type: <= 10 CSave::sub_101a1520 (basic write), else sub_101a2820 (ReadField)
		// "CRestore::ShouldReadField" (stub 0x100092cd)
	void sub_1012a6d0(unsigned short *pValue);	// slot 7: calls slot 9(pValue), then appends slot 0() + *pValue to the vector at +4
	void sub_1012ab60(void *pData, int size);	// reads size bytes into pData
	int sub_1012ab50();	// CUnknown101a1f70::sub_101a1f70 (stub 0x10007df6), the int at the record of +0x18, called directly
		// the callee of slots 12 / 17 (stub 0x1000fe9d)
		// the callee of slots 12 / 17 (stub 0x1000910b): the short-read tail
	char vfunc16();	// slot 16: reads one byte
	CBaseEntity *sub_1012ae60(int index);	// the entity of the given save index (stub 0x10014a3d)
	CRestoreSaveEnt *sub_1012aec0(int index);	// the save index record (stub 0x10012ff8)
		// reads the string stored under pszName into the size byte buffer pDest (stub 0x10004728)

	CRestoreVec m_vec;	// 0x0004
	void *m_pData;	// 0x0018
	char *m_pData2;	// 0x001c: m_pData + 0x18, or null
	int m_field20;
	bool m_bField24;
public:
	virtual bool vfunc32();
	virtual int vfunc33();
	virtual void *vfunc34(unsigned char bFree);	// slot 34: its own deleting destructor (0x101a1400, matched through the view SRestore); declared only
};
