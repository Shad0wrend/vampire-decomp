#pragma once
struct CMeasureTsc {
    unsigned int m_lo, m_hi;
    CMeasureTsc() { m_lo = 0; m_hi = 0; }
};
class CMeasureSectionInstance {
public:
    virtual CMeasureSectionInstance *vfunc0(unsigned int flags);
    int m_pad;
    CMeasureTsc m_tsc;
    int m_section;
    CMeasureSectionInstance(int section);
    ~CMeasureSectionInstance();	// 0x10247ac0: stops the sample and adds the elapsed cycles to the section
    	// as in CDataObjectAccessSystem (transplant)
};
