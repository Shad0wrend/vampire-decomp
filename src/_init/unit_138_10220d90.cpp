// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10220d90 size=0xa
#define PCD_INITIALIZERS
#include "QuestJournal.h"
QuestJournal g_1074f8f8;
// END FUNCTION

// FUNCTION: 0x10222150 size=0xa
#define PCD_INITIALIZERS
#include "CExperienceTable.h"
CExperienceTable g_10750930;
// END FUNCTION

// FUNCTION: 0x10222b60 size=0xa
#include "ConCommand.h"
void sub_10222ad0(void);
ConCommand g_1074f8a8("dump_experience_table", sub_10222ad0, "", 0, 0);
// END FUNCTION

// FUNCTION: 0x10222d10 size=0xa
#include "ConCommand.h"
void sub_10222bf0(void);
ConCommand g_1074f8d0("dump_quest_table", sub_10222bf0, "", 0, 0);
// END FUNCTION
