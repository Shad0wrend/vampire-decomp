// PcdGuarded.h: how the initializer units spell a global VC6 built as an explicitly specialized static data member
// of a class template (`template <> T C<...>::s(args);`): constructed unguarded, destroyed once behind a bit of the
// unit's `_$S<n>` guard. The game's template and its argument are not known: the unsigned argument is the global's
// address, which pcdecomp reads from the mangled name like a g_<addr> placeholder.
#pragma once
#ifdef PCD_INITIALIZERS
template <unsigned int ADDR, class T> class PcdGuarded
{
public:
	static T s_object;
};
#endif
