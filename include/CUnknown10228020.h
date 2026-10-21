// CUnknown10228020: loader of the precache data files (vdata\precache\Entities.txt and vdata\system\PreCache<n>.txt); real name not yet known.
#pragma once

class CUnknown10248a50;

class CUnknown10228020
{
public:
	char sub_10228020();	// loads the precache data files into key/value trees and processes each with sub_10228220; false when one could not be processed
	char sub_10228220(CUnknown10248a50 *pData);	// processes one loaded precache tree (stub 0x1000bec9)
};
