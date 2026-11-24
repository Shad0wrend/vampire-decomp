// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x1015ff30 size=0x2d
#include "StatDefault.h"
// TARGET: ??0StatDefault@@QAE@H@Z
StatDefault::StatDefault(int arg)
{
	a[0] = arg;
	a[3] = a[5] = a[4] = 0;
	m_block18.sub_10160670();
}
// END FUNCTION
