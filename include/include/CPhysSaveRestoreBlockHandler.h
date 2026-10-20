#ifndef CPHYSSAVERESTOREBLOCKHANDLER_H
#define CPHYSSAVERESTOREBLOCKHANDLER_H

// Partial layout: bases not modelled yet.
class CPhysSaveRestoreBlockHandler {
public:
    char _pad0[0x98];
    int m_field98;
    int m_field9c;
    virtual void vfunc1(int a);
};

#endif
