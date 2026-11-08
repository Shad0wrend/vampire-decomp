// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10220ed0 size=0xe2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "QuestJournal.h"
#include "utlvector.h"
#include "ScopeTrace.h"

struct QJVecs
{
	CUtlVector<int> a;
	CUtlVector<int> b;
};

QuestJournal::~QuestJournal()
{
	{
		ScopeTrace t("QuestJournal::~QuestJournal", g_106b8540);
		sub_102210f0();
	}
	((QJVecs *)this)->~QJVecs();
}
// END FUNCTION
