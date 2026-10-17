#pragma once
struct CMeasureTsc {
    unsigned int m_lo, m_hi;
    CMeasureTsc() { m_lo = 0; m_hi = 0; }
};
class CMeasureSectionInstance {
public:
    virtual void vfunc0();
    int m_pad;
    CMeasureTsc m_tsc;
    int m_section;
    CMeasureSectionInstance(int section);
};
