#ifndef _EXTENDED_LIST_H_
#define _EXTENDED_LIST_H_

#include "LinkedList.h"

class ExtendedList : public LinkedList
{
public:
	// Insert copy after n-element
	void insert( size_t n );
};

#endif