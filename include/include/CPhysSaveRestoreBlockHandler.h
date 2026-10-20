#ifndef CPHYSSAVERESTOREBLOCKHANDLER_H
#define CPHYSSAVERESTOREBLOCKHANDLER_H

// Partial layout: bases not modelled yet (the vptr at 0 stands in for them).
class CPhysSaveRestoreBlockHandler {
public:
    virtual void vfunc1(int a);
    char _pad0[0x94];
    int m_field98;
    int m_field9c;
};

#endif
