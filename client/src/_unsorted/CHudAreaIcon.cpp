// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "client.h"

// FUNCTION: 0x10051d40 size=0x5b
#include "CHudAreaIcon.h"
// TARGET: ??1CHudAreaIcon@@UAE@XZ
CHudAreaIcon::~CHudAreaIcon()
{
	if (m_p178)
		delete m_p178;
	if (m_p19c)
		delete m_p19c;
	if (m_p1a0)
		delete m_p1a0;
	if (m_p1a4)
		delete m_p1a4;
}
// END FUNCTION
