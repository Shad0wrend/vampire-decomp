// CRestore: save-game restore context (RTTI .?AVCRestore@@, vtable 0x10477084, 35 slots; only the first slots are modelled).
#pragma once

struct CRestoreField;
class CBaseEntity;

class CRestore
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual int vfunc2(CBaseEntity *pEnt, int map);	// reads the entity's data description block

	// Searches the field table starting from the remembered position, wrapping around.
	CRestoreField *sub_101a17c0(const char *name, CRestoreField *fields, int count, int *pStart);
	void sub_101a1f90(void *pData, int size);	// reads size bytes into pData
	char vfunc16();	// slot 16: reads one byte
};
