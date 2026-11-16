// PcdVirtual.h: PCD_VIRTUAL is `virtual` in the initializer units (PCD_INITIALIZERS) and nothing elsewhere, PCD_PURE is
// nothing there and `= 0` elsewhere. A slot that matched code calls as a plain member (QAE names) is a real virtual where
// a global's constructor needs the class's vtable; an interface's pure slots do not make the global's class abstract.
#pragma once

#ifdef PCD_INITIALIZERS
#define PCD_VIRTUAL virtual
#define PCD_PURE
#else
#define PCD_VIRTUAL
#define PCD_PURE = 0
#endif
