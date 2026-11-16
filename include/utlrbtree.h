// utlrbtree.h: Source's CUtlRBTree<T, I> (tier1 utlrbtree.h, 2004 public SDK form) as the game compiled it.
// Use it for every red-black tree of the game: the tree functions (NewNode, Insert, InsertAt, LinkToParent,
// InsertRebalance, RotateLeft / RotateRight, Find, FindInsertionPosition, RemoveAt, RemoveRebalance, FreeNode,
// RemoveAll, Purge) are its members, and callers write t.Insert(x), t.Find(x), t.Element(i), t.RemoveAll().
//
// Layout: m_LessFunc +0, m_Elements (CUtlMemory<Node_t>: memory +4, allocation count +8, grow size +0xc), then
// m_Root, m_NumElements, m_FirstFree, m_TotalElements (I each: 2-byte words at +0x10/+0x12/+0x14/+0x16 for the default
// unsigned short, 4-byte at +0x10/+0x14/+0x18/+0x1c for int). Node_t = Links_t { m_Left, m_Right, m_Parent, m_Tag }
// then the element (T): node size = 4 * sizeof(I) + sizeof(T), e.g. 12 bytes for CUtlRBTree<int>.
//
// The const Links(i) holds the tree's sentinel node, a guarded function-local static that the game keeps once per
// instance (per T and I): `test byte ptr [guard], 1; jne` then the four stores 0xffff, 0xffff, 0xffff, 1 (BLACK).
// The judge places it where the game's code has it; every function of one instance shares it, so one instance = one
// T. Reads (Parent / LeftChild / RightChild / Color / IsRed / IsBlack) go through it; writes (SetParent / SetLeftChild
// / SetRightChild / SetColor) go to the node directly (`mov word ptr [mem + i*N + 4], ...`). As with CUtlVector,
// VC6 decides which inline calls it expands: a `call` to an out-of-line Links / Grow / RotateLeft of the instance is
// its choice, not a different source. An out-of-line copy is per instance: rename_symbol the address the game calls
// to the name the judge asks for (e.g. ?Links@?$CUtlRBTree@HG@@IBEABULinks_t@1@G@Z).
// Every member is inline: the game expands FindInsertionPosition into Insert, Grow into NewNode, InsertRebalance into
// LinkToParent where its budget allows.
// RemoveNode is RemoveAt without the final FreeNode / --m_NumElements (the older SDK split it: the caller frees).
#pragma once

#include "utlmemory.h"

template <class T, class I = unsigned short>
class CUtlRBTree
{
public:
	typedef bool (*LessFunc_t)(T const &, T const &);

	CUtlRBTree(int growSize = 0, int initSize = 0, LessFunc_t lessfunc = 0);
	~CUtlRBTree();

	T &Element(I i);
	T const &Element(I i) const;
	T &operator[](I i);
	T const &operator[](I i) const;

	I Root() const;
	unsigned int Count() const;
	I MaxElement() const;

	I Parent(I i) const;
	I LeftChild(I i) const;
	I RightChild(I i) const;

	bool IsLeftChild(I i) const;
	bool IsRightChild(I i) const;
	bool IsRoot(I i) const;
	bool IsLeaf(I i) const;
	bool IsValidIndex(I i) const;

	static I InvalidIndex();

	void SetLessFunc(LessFunc_t func);

	I NewNode();
	I InsertAt(I parent, bool leftchild);
	I Insert(T const &insert);
	I Find(T const &search) const;
	void RemoveAt(I i);
	void RemoveNode(I i);
	bool Remove(T const &remove);
	void RemoveAll();
	void Purge();
	void FreeNode(I i);

	I FirstInorder() const;
	I NextInorder(I i) const;
	I PrevInorder(I i) const;
	I LastInorder() const;

	enum NodeColor_t { RED = 0, BLACK };

	struct Links_t
	{
		I m_Left;
		I m_Right;
		I m_Parent;
		I m_Tag;
	};

	struct Node_t : public Links_t
	{
		T m_Data;
	};

	void SetParent(I i, I parent);
	void SetLeftChild(I i, I child);
	void SetRightChild(I i, I child);
	void LinkToParent(I i, I parent, bool isLeft);

	Links_t const &Links(I i) const;
	Links_t &Links(I i);

	bool IsRed(I i) const;
	bool IsBlack(I i) const;
	NodeColor_t Color(I i) const;
	void SetColor(I i, NodeColor_t c);

	void RotateLeft(I i);
	void RotateRight(I i);
	void InsertRebalance(I i);
	void RemoveRebalance(I i);
	void FindInsertionPosition(T const &insert, I &parent, bool &leftchild);

	LessFunc_t m_LessFunc;
	CUtlMemory<Node_t> m_Elements;
	I m_Root;
	I m_NumElements;
	I m_FirstFree;
	I m_TotalElements;
};

template <class T, class I>
inline CUtlRBTree<T, I>::CUtlRBTree(int growSize, int initSize, LessFunc_t lessfunc)
	: m_LessFunc(lessfunc), m_Elements(growSize, initSize), m_Root(InvalidIndex()), m_NumElements(0),
	  m_FirstFree(InvalidIndex()), m_TotalElements(0)
{
}

template <class T, class I>
inline CUtlRBTree<T, I>::~CUtlRBTree()
{
	// empty as in the 2003 and 2004 SDK: the nodes' memory goes with m_Elements' own destructor
}

template <class T, class I>
inline T &CUtlRBTree<T, I>::Element(I i)
{
	return m_Elements[i].m_Data;
}

template <class T, class I>
inline T const &CUtlRBTree<T, I>::Element(I i) const
{
	return m_Elements[i].m_Data;
}

template <class T, class I>
inline T &CUtlRBTree<T, I>::operator[](I i)
{
	return Element(i);
}

template <class T, class I>
inline T const &CUtlRBTree<T, I>::operator[](I i) const
{
	return Element(i);
}

template <class T, class I>
inline I CUtlRBTree<T, I>::Root() const
{
	return m_Root;
}

template <class T, class I>
inline unsigned int CUtlRBTree<T, I>::Count() const
{
	return (unsigned int)m_NumElements;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::MaxElement() const
{
	return (I)m_TotalElements;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::Parent(I i) const
{
	return Links(i).m_Parent;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::LeftChild(I i) const
{
	return Links(i).m_Left;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::RightChild(I i) const
{
	return Links(i).m_Right;
}

template <class T, class I>
inline bool CUtlRBTree<T, I>::IsLeftChild(I i) const
{
	return LeftChild(Parent(i)) == i;
}

template <class T, class I>
inline bool CUtlRBTree<T, I>::IsRightChild(I i) const
{
	return RightChild(Parent(i)) == i;
}

template <class T, class I>
inline bool CUtlRBTree<T, I>::IsRoot(I i) const
{
	return i == m_Root;
}

template <class T, class I>
inline bool CUtlRBTree<T, I>::IsLeaf(I i) const
{
	return (LeftChild(i) == InvalidIndex()) && (RightChild(i) == InvalidIndex());
}

template <class T, class I>
inline bool CUtlRBTree<T, I>::IsValidIndex(I i) const
{
	return LeftChild(i) != i;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::InvalidIndex()
{
	return (I)~0;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::SetLessFunc(LessFunc_t func)
{
	m_LessFunc = func;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::SetParent(I i, I parent)
{
	Links(i).m_Parent = parent;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::SetLeftChild(I i, I child)
{
	Links(i).m_Left = child;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::SetRightChild(I i, I child)
{
	Links(i).m_Right = child;
}

template <class T, class I>
inline typename CUtlRBTree<T, I>::Links_t const &CUtlRBTree<T, I>::Links(I i) const
{
	// sentinel node, makes life easier
	static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), CUtlRBTree<T, I>::BLACK };

	return (i != InvalidIndex()) ? *(Links_t *)&m_Elements[i] : *(Links_t *)&s_Sentinel;
}

template <class T, class I>
inline typename CUtlRBTree<T, I>::Links_t &CUtlRBTree<T, I>::Links(I i)
{
	return *(Links_t *)(i * sizeof(Node_t) + (char *)m_Elements.m_pMemory);
}

template <class T, class I>
inline bool CUtlRBTree<T, I>::IsRed(I i) const
{
	return (Links(i).m_Tag == RED);
}

template <class T, class I>
inline bool CUtlRBTree<T, I>::IsBlack(I i) const
{
	return (Links(i).m_Tag == BLACK);
}

template <class T, class I>
inline typename CUtlRBTree<T, I>::NodeColor_t CUtlRBTree<T, I>::Color(I i) const
{
	return (NodeColor_t)Links(i).m_Tag;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::SetColor(I i, typename CUtlRBTree<T, I>::NodeColor_t c)
{
	Links(i).m_Tag = (I)c;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::NewNode()
{
	I newElem;

	// nothing in the free list; add
	if (m_FirstFree == InvalidIndex()) {
		if (m_Elements.NumAllocated() == m_TotalElements)
			m_Elements.Grow();
		newElem = m_TotalElements++;
	} else {
		newElem = m_FirstFree;
		m_FirstFree = RightChild(m_FirstFree);
	}

	return newElem;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::FreeNode(I i)
{
	Destruct(&Element(i));
	SetLeftChild(i, i);	// not in the tree
	SetRightChild(i, m_FirstFree);
	m_FirstFree = i;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::RotateLeft(I elem)
{
	I rightchild = RightChild(elem);
	SetRightChild(elem, LeftChild(rightchild));
	if (LeftChild(rightchild) != InvalidIndex())
		SetParent(LeftChild(rightchild), elem);

	if (rightchild != InvalidIndex())
		SetParent(rightchild, Parent(elem));
	if (!IsRoot(elem)) {
		if (IsLeftChild(elem))
			SetLeftChild(Parent(elem), rightchild);
		else
			SetRightChild(Parent(elem), rightchild);
	} else
		m_Root = rightchild;

	SetLeftChild(rightchild, elem);
	if (elem != InvalidIndex())
		SetParent(elem, rightchild);
}

template <class T, class I>
inline void CUtlRBTree<T, I>::RotateRight(I elem)
{
	I leftchild = LeftChild(elem);
	SetLeftChild(elem, RightChild(leftchild));
	if (RightChild(leftchild) != InvalidIndex())
		SetParent(RightChild(leftchild), elem);

	if (leftchild != InvalidIndex())
		SetParent(leftchild, Parent(elem));
	if (!IsRoot(elem)) {
		if (IsRightChild(elem))
			SetRightChild(Parent(elem), leftchild);
		else
			SetLeftChild(Parent(elem), leftchild);
	} else
		m_Root = leftchild;

	SetRightChild(leftchild, elem);
	if (elem != InvalidIndex())
		SetParent(elem, leftchild);
}

template <class T, class I>
inline void CUtlRBTree<T, I>::InsertRebalance(I elem)
{
	while (!IsRoot(elem) && (Color(Parent(elem)) == RED)) {
		I parent = Parent(elem);
		I grandparent = Parent(parent);

		// we have a violation
		if (IsLeftChild(parent)) {
			I uncle = RightChild(grandparent);
			if (IsRed(uncle)) {
				// uncle is RED
				SetColor(parent, BLACK);
				SetColor(uncle, BLACK);
				SetColor(grandparent, RED);
				elem = grandparent;
			} else {
				// uncle is BLACK
				if (IsRightChild(elem)) {
					// make elem a left child, will change parent and grandparent
					elem = parent;
					RotateLeft(elem);
					parent = Parent(elem);
					grandparent = Parent(parent);
				}
				// recolour and rotate
				SetColor(parent, BLACK);
				SetColor(grandparent, RED);
				RotateRight(grandparent);
			}
		} else {
			// mirror image of the above
			I uncle = LeftChild(grandparent);
			if (IsRed(uncle)) {
				// uncle is RED
				SetColor(parent, BLACK);
				SetColor(uncle, BLACK);
				SetColor(grandparent, RED);
				elem = grandparent;
			} else {
				// uncle is BLACK
				if (IsLeftChild(elem)) {
					// make elem a right child, will change parent and grandparent
					elem = parent;
					RotateRight(parent);
					parent = Parent(elem);
					grandparent = Parent(parent);
				}
				// recolour and rotate
				SetColor(parent, BLACK);
				SetColor(grandparent, RED);
				RotateLeft(grandparent);
			}
		}
	}
	SetColor(m_Root, BLACK);
}

template <class T, class I>
inline void CUtlRBTree<T, I>::LinkToParent(I i, I parent, bool isLeft)
{
	Links_t &elem = Links(i);
	elem.m_Parent = parent;
	elem.m_Left = elem.m_Right = InvalidIndex();
	elem.m_Tag = RED;

	// insert the node in the tree
	if (parent != InvalidIndex()) {
		if (isLeft)
			Links(parent).m_Left = i;
		else
			Links(parent).m_Right = i;
	} else {
		m_Root = i;
	}

	InsertRebalance(i);
}

template <class T, class I>
inline I CUtlRBTree<T, I>::InsertAt(I parent, bool leftchild)
{
	I i = NewNode();
	LinkToParent(i, parent, leftchild);
	++m_NumElements;
	return i;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::FindInsertionPosition(T const &insert, I &parent, bool &leftchild)
{
	// find where the node belongs
	I current = m_Root;
	parent = InvalidIndex();
	leftchild = false;
	while (current != InvalidIndex()) {
		parent = current;
		if (m_LessFunc(insert, Element(current))) {
			leftchild = true;
			current = LeftChild(current);
		} else {
			leftchild = false;
			current = RightChild(current);
		}
	}
}

template <class T, class I>
inline I CUtlRBTree<T, I>::Insert(T const &insert)
{
	// copy constructs the element in
	I parent;
	bool leftchild;
	FindInsertionPosition(insert, parent, leftchild);
	I newNode = InsertAt(parent, leftchild);
	CopyConstruct(&Element(newNode), insert);
	return newNode;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::Find(T const &search) const
{
	I current = m_Root;
	while (current != InvalidIndex()) {
		if (m_LessFunc(search, Element(current)))
			current = LeftChild(current);
		else if (m_LessFunc(Element(current), search))
			current = RightChild(current);
		else
			break;
	}
	return current;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::RemoveRebalance(I elem)
{
	while (elem != m_Root && IsBlack(elem)) {
		I parent = Parent(elem);

		// elem is the left child of its parent
		if (elem == LeftChild(parent)) {
			I sibling = RightChild(parent);
			if (IsRed(sibling)) {
				SetColor(sibling, BLACK);
				SetColor(parent, RED);
				RotateLeft(parent);

				// we may have a new parent now
				parent = Parent(elem);
				sibling = RightChild(parent);
			}
			if ((IsBlack(LeftChild(sibling))) && (IsBlack(RightChild(sibling)))) {
				if (sibling != InvalidIndex())
					SetColor(sibling, RED);
				elem = parent;
			} else {
				if (IsBlack(RightChild(sibling))) {
					SetColor(LeftChild(sibling), BLACK);
					SetColor(sibling, RED);
					RotateRight(sibling);

					// the rotation may have changed this
					parent = Parent(elem);
					sibling = RightChild(parent);
				}
				SetColor(sibling, Color(parent));
				SetColor(parent, BLACK);
				SetColor(RightChild(sibling), BLACK);
				RotateLeft(parent);
				elem = m_Root;
			}
		} else {
			// elem is the right child of its parent
			I sibling = LeftChild(parent);
			if (IsRed(sibling)) {
				SetColor(sibling, BLACK);
				SetColor(parent, RED);
				RotateRight(parent);

				// we may have a new parent now
				parent = Parent(elem);
				sibling = LeftChild(parent);
			}
			if ((IsBlack(RightChild(sibling))) && (IsBlack(LeftChild(sibling)))) {
				if (sibling != InvalidIndex())
					SetColor(sibling, RED);
				elem = parent;
			} else {
				if (IsBlack(LeftChild(sibling))) {
					SetColor(RightChild(sibling), BLACK);
					SetColor(sibling, RED);
					RotateLeft(sibling);

					// the rotation may have changed this
					parent = Parent(elem);
					sibling = LeftChild(parent);
				}
				SetColor(sibling, Color(parent));
				SetColor(parent, BLACK);
				SetColor(LeftChild(sibling), BLACK);
				RotateRight(parent);
				elem = m_Root;
			}
		}
	}
	SetColor(elem, BLACK);
}

template <class T, class I>
inline void CUtlRBTree<T, I>::RemoveAt(I elem)
{
	if (elem != InvalidIndex()) {
		I y, x;

		if ((LeftChild(elem) == InvalidIndex()) || (RightChild(elem) == InvalidIndex())) {
			// y has a NIL node as a child
			y = elem;
		} else {
			// find the tree successor with a NIL node as a child
			y = RightChild(elem);
			while (LeftChild(y) != InvalidIndex())
				y = LeftChild(y);
		}

		// x is y's only child
		if (LeftChild(y) != InvalidIndex())
			x = LeftChild(y);
		else
			x = RightChild(y);

		// remove y from the parent chain
		if (x != InvalidIndex())
			SetParent(x, Parent(y));
		if (!IsRoot(y)) {
			if (IsLeftChild(y))
				SetLeftChild(Parent(y), x);
			else
				SetRightChild(Parent(y), x);
		} else
			m_Root = x;

		// store this off now, y's colour is reset below
		NodeColor_t ycolor = Color(y);
		if (y != elem) {
			// hook y in to link to what elem linked to
			SetParent(y, Parent(elem));
			SetRightChild(y, RightChild(elem));
			SetLeftChild(y, LeftChild(elem));

			if (!IsRoot(elem)) {
				if (IsLeftChild(elem))
					SetLeftChild(Parent(elem), y);
				else
					SetRightChild(Parent(elem), y);
			} else
				m_Root = y;

			if (LeftChild(y) != InvalidIndex())
				SetParent(LeftChild(y), y);
			if (RightChild(y) != InvalidIndex())
				SetParent(RightChild(y), y);

			SetColor(y, Color(elem));
		}

		if ((x != InvalidIndex()) && (ycolor == BLACK))
			RemoveRebalance(x);

		FreeNode(elem);
		--m_NumElements;
	}
}

template <class T, class I>
inline void CUtlRBTree<T, I>::RemoveNode(I elem)
{
	if (elem != InvalidIndex()) {
		I x, y;

		if ((LeftChild(elem) == InvalidIndex()) || (RightChild(elem) == InvalidIndex())) {
			// y has a NIL node as a child
			y = elem;
		} else {
			// find the tree successor with a NIL node as a child
			y = RightChild(elem);
			while (LeftChild(y) != InvalidIndex())
				y = LeftChild(y);
		}

		// x is y's only child
		if (LeftChild(y) != InvalidIndex())
			x = LeftChild(y);
		else
			x = RightChild(y);

		// remove y from the parent chain
		if (x != InvalidIndex())
			SetParent(x, Parent(y));
		if (!IsRoot(y)) {
			if (IsLeftChild(y))
				SetLeftChild(Parent(y), x);
			else
				SetRightChild(Parent(y), x);
		} else
			m_Root = x;

		// store this off now, y's colour is reset below
		NodeColor_t ycolor = Color(y);
		if (y != elem) {
			// hook y in to link to what elem linked to
			SetParent(y, Parent(elem));
			SetRightChild(y, RightChild(elem));
			SetLeftChild(y, LeftChild(elem));

			if (!IsRoot(elem)) {
				if (IsLeftChild(elem))
					SetLeftChild(Parent(elem), y);
				else
					SetRightChild(Parent(elem), y);
			} else
				m_Root = y;

			if (LeftChild(y) != InvalidIndex())
				SetParent(LeftChild(y), y);
			if (RightChild(y) != InvalidIndex())
				SetParent(RightChild(y), y);

			SetColor(y, Color(elem));
		}

		if ((x != InvalidIndex()) && (ycolor == BLACK))
			RemoveRebalance(x);
	}
}

template <class T, class I>
inline bool CUtlRBTree<T, I>::Remove(T const &search)
{
	I node = Find(search);
	if (node != InvalidIndex()) {
		RemoveAt(node);
		return true;
	}
	return false;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::RemoveAll()
{
	// destruct every node in the tree, in order, then put every node on the free list
	I node = FirstInorder();
	while (node != InvalidIndex()) {
		Destruct(&Element(node));
		node = NextInorder(node);
	}
	I prev = InvalidIndex();
	for (int i = (int)m_TotalElements; --i >= 0; ) {
		I idx = (I)i;
		SetRightChild(idx, prev);
		SetLeftChild(idx, idx);
		prev = idx;
	}
	m_FirstFree = m_TotalElements ? (I)0 : InvalidIndex();
	m_Root = InvalidIndex();
	m_NumElements = 0;
}

template <class T, class I>
inline void CUtlRBTree<T, I>::Purge()
{
	RemoveAll();
	m_FirstFree = InvalidIndex();
	m_TotalElements = 0;
	m_Elements.Purge();
}

template <class T, class I>
inline I CUtlRBTree<T, I>::FirstInorder() const
{
	I i = m_Root;
	while (LeftChild(i) != InvalidIndex())
		i = LeftChild(i);
	return i;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::NextInorder(I i) const
{
	if (RightChild(i) != InvalidIndex()) {
		i = RightChild(i);
		while (LeftChild(i) != InvalidIndex())
			i = LeftChild(i);
		return i;
	}

	I parent = Parent(i);
	while (IsRightChild(i)) {
		i = parent;
		if (i == InvalidIndex())
			break;
		parent = Parent(i);
	}
	return parent;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::PrevInorder(I i) const
{
	if (LeftChild(i) != InvalidIndex()) {
		i = LeftChild(i);
		while (RightChild(i) != InvalidIndex())
			i = RightChild(i);
		return i;
	}

	I parent = Parent(i);
	while (IsLeftChild(i)) {
		i = parent;
		if (i == InvalidIndex())
			break;
		parent = Parent(i);
	}
	return parent;
}

template <class T, class I>
inline I CUtlRBTree<T, I>::LastInorder() const
{
	I i = m_Root;
	while (RightChild(i) != InvalidIndex())
		i = RightChild(i);
	return i;
}
