// CBaseLandmark: the "info_landmark" entity (RTTI .?AVCBaseLandmark@@, vtable 0x1045103c): a CPointEntity with eight
// entity outputs at +0x450 (0x18 bytes each), 0x510 bytes in all. Only what the entity factory needs.
#pragma once

struct datamap_t;

#include "CPointEntity.h"
#include "COutputEvent.h"

void *sub_100aa720(unsigned int nSize);	// the entities' operator new (stub 0x1000db89)

class CBaseLandmark : public CPointEntity
{
public:
	static void *operator new(unsigned int nSize) { return sub_100aa720(nSize); }

	virtual CPointEntity *vfunc5(unsigned int flags);	// scalar deleting destructor: the eight outputs, then the base body

	char m_pad0004[0x450 - 4];
	COutputEvent m_Output450;
	COutputEvent m_Output468;
	COutputEvent m_Output480;
	COutputEvent m_Output498;
	COutputEvent m_Output4b0;
	COutputEvent m_Output4c8;
	COutputEvent m_Output4e0;
	COutputEvent m_Output4f8;
public:
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10();
	virtual void vfunc11();
	virtual void vfunc12();
	virtual void vfunc13();
	virtual void vfunc14();
	virtual void vfunc15();
	virtual void vfunc16();
	virtual void vfunc17();
	virtual void vfunc18();
	virtual void vfunc19();
	virtual void vfunc20();
	virtual void vfunc21();
	virtual void vfunc22();
	virtual void vfunc23();
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
	virtual void vfunc36();
	virtual void vfunc37();
	virtual void vfunc38();
	virtual void vfunc39();
	virtual void vfunc40();
	virtual void vfunc41();
	virtual void vfunc42();
	virtual void vfunc43();
	virtual void vfunc44();
	virtual void vfunc45();
	virtual void vfunc46();
	virtual void vfunc47();
	virtual void vfunc48();
	virtual void vfunc49();
	virtual void vfunc50();
	virtual void vfunc51();
	virtual void vfunc52();
	virtual void vfunc53();
	virtual void vfunc54();
	virtual void vfunc55();
	virtual void vfunc56();
	virtual void vfunc57();
	virtual void vfunc58();
	virtual void vfunc59();
	virtual void vfunc60();
	virtual void vfunc61();
	virtual void vfunc62();
	virtual void vfunc63();
	virtual void vfunc64();
	virtual void vfunc65();
	virtual void vfunc66();
	virtual void vfunc67();
	virtual void vfunc68();
	virtual void vfunc69();
	virtual void vfunc70();
	virtual void vfunc71();
	virtual void vfunc72();
	virtual void vfunc73();
	virtual void vfunc74();
	virtual void vfunc75();
	virtual void vfunc76();
	virtual void vfunc77();
	virtual void vfunc78();
	virtual void vfunc79();
	virtual void vfunc80();
	virtual void vfunc81();
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	virtual Datamap82 vfunc82();
};
