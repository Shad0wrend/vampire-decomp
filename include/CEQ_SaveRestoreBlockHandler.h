// CEQ_SaveRestoreBlockHandler (RTTI .?AVCEQ_SaveRestoreBlockHandler@@): save/restore block handler (base CDefSaveRestoreBlockHandler not modelled).
#pragma once

// Restore interface as seen by the block handlers: only the read slot used so far is named.
class IRestoreRead
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual int ReadShort(short *pValue, int count, int flags);	// slot 12
};

class CEQ_SaveRestoreBlockHandler
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(IRestoreRead *pRestore);	// reads the block version and remembers whether it matches
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();

	bool m_bVersionMatches;	// 0x04
};
