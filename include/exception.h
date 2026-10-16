// class exception (C++ runtime std::exception, RTTI .?AVexception@@); vptr at +0, message at +4.
#pragma once

class exception
{
public:
	virtual void vfunc0();
	virtual const char *vfunc1() const;

	const char *m_what;
	int m_doFree;
};
