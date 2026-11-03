// CBreakableSurface: declared by pcdecomp transplant for 0x101135c0 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "Vector.h"
#include "COutputEvent.h"

void *sub_100aa720(unsigned int size);	// the entities' operator new (stub 0x1000db89)

class CBreakableSurface : public CBaseEntity
{
public:
    CBreakableSurface() : CBaseEntity(0) {}
    void *operator new(unsigned int size) { return sub_100aa720(size); }
    CBreakableSurface *vfunc5(unsigned int flags);
    void vfunc103();    // slot 103 (Spawn): CBreakable::vfunc103, then rejects the surface (Warning + remove) when its face check (+0x904) found several faces (1) or a face that is not a quad (2), else sets collision group 4 and clears the byte at +0x4c4 and the dword at +0x454; finally sets flag 0x20000000 and SetOccludesSound(1)
    virtual void vfunc130(int a);    // slot 130: CBaseEntity::vfunc130(a), then with the byte at +0x4c4 set: sub_100ac4e0(0x100154ec, 0, 0) and the dword at +0x17c = the global at 0x1070b228's +0xc
    void sub_1010d6a0();    // CBreakable::vfunc103 (stub 0x1000a10f), called directly
    void sub_101128d0(const Vector &vecPos, float *pX, float *pY);
    bool sub_101123b0(int nCol, int nRow);
    void sub_101132a0(int nCol, int nRow, const Vector *pForce, const Vector *pForcePos);    // breaks one pane and shatters it with the force at the force position
    void sub_10112a10();    // resets the pane grid (every cell of the m_nCells x m_nRows panes to -1.0f), sends the entity message 0 with the byte 1 to everybody but the player of this entity (a reliable entity message filter) and stores the pane count at +0x4cc
    void sub_10112b90(int nCol, int nRow);    // breaks one pane: for a cell inside the grid counts it (+0x4cc), sets its entry in the pane grid to -1.0f, sends the entity message 0 with the cell (0, col, row) to everybody but the player of this entity (reliable), arms the think function (stub 0x1000bb4a, 0x10112650) and makes it think now
    void sub_10112650();    // the think function (stub 0x1000bb4a)
    void sub_10113050(const Vector *pPos, const float *pAngles, const Vector *pForce, const Vector *pForcePos, float flWidth, float flHeight, int unused);    // the shatter effect: copies the position and the force, for the glass type (+0x4c8 == 1) moves the position back by 8 * the axis (+0x4ac), turns the force around (-0.75) and tints the front (0x59, 0x78, 0x53) and back (0x63, 0x4c, 0x15), else white; sends the temp entity ShatterSurface (slot 23, shard size 4.0f) to the players that can hear the position

    char m_pad03e0[0x454 - 0x3e0];
    int m_n454;
    EHANDLE m_hEnt458;
    char m_pad045c[0x46c - 0x45c];
    COutputEvent m_Out46c;
    COutputEvent m_Out484;
    int m_nCols49c;    // 0x49c: the number of rows of the pane grid
    int m_nRows4a0;    // 0x4a0: the number of cells of a row
    float m_flWidth;    // 0x4a4
    float m_flHeight;    // 0x4a8
    Vector m_vecAxis;    // 0x4ac
    Vector m_vecCorner;    // 0x4b8
    char m_b4c4;
    char m_pad04c5[3];
    int m_nSurfaceType4c8;    // 0x4c8: 1 = glass (tinted, force reversed and shortened)
    int m_nPanes4cc;    // 0x4cc
    float m_aflPanes[16][16];    // 0x4d0: the pane grid, 0x40 bytes per row
    int m_nFragility;	// 0x08d0
    Vector m_vLLVertex;	// 0x08d4
    Vector m_vULVertex;	// 0x08e0
    Vector m_vLRVertex;	// 0x08ec
    Vector m_vURVertex;	// 0x08f8
    int m_nFaceCheck;    // 0x904
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
    virtual bool vfunc74(int);	// slot 74: the game's own (0x1010e600)
    virtual void vfunc104();	// slot 104: the game's own (0x1010fec0)
    virtual bool vfunc110(const char *key, const char *value);	// slot 110: the game's own (0x1010d590)
    virtual void vfunc113();	// slot 113: the game's own (0x1010d8a0)
    virtual int vfunc117();	// slot 117: the game's own (0x1010d430)
};
