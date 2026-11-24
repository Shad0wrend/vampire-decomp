// type_info: the CRT's run-time type information class (VC6 typeinfo.h without its exception dependency).
// typeid(x).name() is the call the game makes (0x101d2d9b); declared here so a source can use typeid.
#pragma once

class type_info
{
public:
	virtual ~type_info();
	int operator==(const type_info &rhs) const;
	int operator!=(const type_info &rhs) const;
	int before(const type_info &rhs) const;
	const char *name() const;
	const char *raw_name() const;
private:
	void *_m_data;
	char _m_d_name[1];
	type_info(const type_info &rhs);
	type_info &operator=(const type_info &rhs);
};
