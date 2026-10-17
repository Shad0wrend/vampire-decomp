#pragma once
class CMeasureSectionInstance {
public:
    virtual void vfunc0();
    int m_pad;
    unsigned int m_tsc[2];
    int m_section;
    CMeasureSectionInstance(int section);
};
