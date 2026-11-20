// CBreakableSurface : CBreakable (the game's RTTI; vtable 0x1045fb5c, 242 slots). It declares the slots whose game
// word differs from CBreakable's vtable (0x1045ed3c): 5, 80, 81, 82, 103, 104, 130, 141, 142.
#pragma once
#include "CBreakable.h"
#include "Vector.h"
#include "COutputEvent.h"

struct CTakeDamageInfo;

class CBreakableSurface : public CBreakable
{
public:
    CBreakableSurface() {}
    virtual int vfunc142(CTakeDamageInfo *pInfo);	// slot 142 (0x10110b20)
    virtual void vfunc141(CTakeDamageInfo *pInfo, const Vector *pVecDir, CGameTrace *pTrace);    // slot 141 "CBreakableSurface::TraceAttack" (0x10110da0, ret 12): arg1 CTakeDamageInfo (+0x2c attacker, +0x30 damage, +0x38 damage type; attacker's CVDmg_t::sub_101fb200 / sub_101faa70 when set), arg2 the direction (scaled by 500 / 1000 for the shatter force), arg3 the trace (startpos +0, endpos +0xc; the hit point is endpos). Order: slot 140 (attacker filter, +0x230) == 0 -> return; health (+0x210) -= damage (ftol); fires m_Out484 (+0x484, COutputEvent::sub_100cd300 with a CVariantCopy) and m_Out46c (+0x46c) when the byte at +0x4c4 is set; returns while health > 0; damage-type bits 0x4000086 break the pane at the hit cell (sub_101128d0 gives the cell, sub_101132a0(col,row,force,pos) breaks it and the neighbours by the 0.2/0.8 fractions), bit 0x40 shatters an area (type 1 glass: radius 4 cells via slot 2 of the random stream g_1070b244; else the pane grid at +0x4d0 with sub_10113050 shards); ends with sub_10112a10 (reset) or a reliable entity message (CEntityMessageFilter, UserMessageBegin slot 65, write slot 67(3), MessageEnd slot 66)
    void *operator new(unsigned int size) { return sub_100aa720(size); }
    virtual CBaseEntity *vfunc5(unsigned int flags);
    void vfunc103();    // slot 103 (Spawn): CBreakable::vfunc103 (a direct call), then rejects the surface (Warning + remove) when its face check (+0x904) found several faces (1) or a face that is not a quad (2), else sets collision group 4 and clears the byte at +0x4c4 and the dword at +0x454; finally sets flag 0x20000000 and SetOccludesSound(1)
    virtual void vfunc130(int a);    // slot 130: CBaseEntity::vfunc130(a), then with the byte at +0x4c4 set: sub_100ac4e0(0x100154ec, 0, 0) and the dword at +0x17c = the global at 0x1070b228's +0xc
    void sub_101128d0(const Vector &vecPos, float *pX, float *pY);
    void sub_101104c0(CBaseEntity *pOther);
    bool sub_101123b0(int nCol, int nRow);
    void sub_10112d50(int nCol, int nRow);
    void sub_101132a0(int nCol, int nRow, const Vector *pForce, const Vector *pForcePos);    // breaks one pane and shatters it with the force at the force position
    void sub_1010ff40();
    void sub_10112a10();    // resets the pane grid (every cell of the m_nCells x m_nRows panes to -1.0f), sends the entity message 0 with the byte 1 to everybody but the player of this entity (a reliable entity message filter) and stores the pane count at +0x4cc
    void sub_10112b90(int nCol, int nRow);    // breaks one pane: for a cell inside the grid counts it (+0x4cc), sets its entry in the pane grid to -1.0f, sends the entity message 0 with the cell (0, col, row) to everybody but the player of this entity (reliable), arms the think function (stub 0x1000bb4a, 0x10112650) and makes it think now
    void sub_10111ba0(const Vector *pExt, CBaseEntity *pAttacker);
    void sub_10112650();
    void sub_10111ba0(int a, const Vector *pVec);    // the think function (stub 0x1000bb4a)
    void sub_10113050(const Vector *pPos, const float *pAngles, const Vector *pForce, const Vector *pForcePos, float flWidth, float flHeight, int unused);    // the shatter effect: copies the position and the force, for the glass type (+0x4c8 == 1) moves the position back by 8 * the axis (+0x4ac), turns the force around (-0.75) and tints the front (0x59, 0x78, 0x53) and back (0x63, 0x4c, 0x15), else white; sends the temp entity ShatterSurface (slot 23, shard size 4.0f) to the players that can hear the position

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
    virtual void vfunc104();	// slot 104: the game's own (0x1010fec0)
};
