// CPython_SaveRestoreBlockHandler (RTTI .?AVCPython_SaveRestoreBlockHandler@@): save/restore block handler that
// hands the saved game data to the Python side (base CDefSaveRestoreBlockHandler not modelled).
#pragma once

// The restore stream as the Python block handler reads it: only the slots used so far are named.
class IRestorePy
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual int ReadShort(short *pValue, int count, int flags);	// slot 12
	virtual void v13(); virtual void v14();
	virtual int ReadInt(int *pValue, int count, int flags);	// slot 15
	virtual void v16();
	virtual int ReadBool(char *pValue, int count, int flags);	// slot 17
};

// The save stream as the Python block handler writes it: only the slots used so far are named.
class IWritePy
{
public:
	virtual int Tell();	// slot 0: the current position
	virtual void Seek(int nPos);	// slot 1
	virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
	virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void WriteInt(int *pValue, int count);	// slot 10
	virtual void v11();
	virtual void WriteBool(char *pValue, int count);	// slot 12
};

class CPython_SaveRestoreBlockHandler
{
public:
	virtual int vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(IWritePy *pSave);	// Save: pickles the two Python objects into the save stream (cPickle.dump)
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(IRestorePy *pRestore);	// Restore of the version: the Python side reads the version short and compares it with the game's version (m_bEnabled)
	virtual void vfunc7(IRestorePy *pRestore, int a, int b);	// Restore: with the Python side enabled, calls the restore callbacks of the Python module for the two saved blocks
	virtual void vfunc8();
	virtual void vfunc9();

	char m_bEnabled;	// 0x04: the Python side is running
};
