// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1040bed0 size=0x72
#include "CGrabController.h"
extern float g_1070d9d0[3];

CGrabController::CGrabController()
{
    m_f2c = 1.0f;
    m_f30 = 0.0f;
    m_f38 = 0.0f;
    m_f3c = 0.0f;
    m_f24 = 1000.0f;
    m_f1c = 21600.0f;
    m_f28 = 2000.0f;
    m_f20 = 21600.0f;
    m_h14c.m_Index = -1;
    m_v150[0] = g_1070d9d0[0];
    m_v150[1] = g_1070d9d0[1];
    m_v150[2] = g_1070d9d0[2];
    m_b15c = 0;
}
// END FUNCTION
