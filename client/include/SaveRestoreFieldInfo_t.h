// SaveRestoreFieldInfo_t (Source saverestore.h): what a save / restore data ops object gets for one field.
#pragma once

struct typedescription_t;

struct SaveRestoreFieldInfo_t
{
	void *pField;	// 0x00: the field's data
	void *pOwner;	// 0x04: the object that holds the field
	typedescription_t *pTypeDesc;	// 0x08: the field's typedescription_t (field name at +4)
};
