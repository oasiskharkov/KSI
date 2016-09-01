#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

class GeometricBody;

class LinkedList
{
protected:
	// Pointer to the tail of the list 
	GeometricBody* m_pTail;

	// List size
	size_t m_nSize;
public:
	// Constructor 
	LinkedList( );

	// Virtual destructor
	virtual ~LinkedList( );

	// Is list empty
	bool isEmpty( ) const;

	// Clear list 
	void clean( );

	// Add element
	void add( GeometricBody* elem );

	// Show list information
	void showList( ) const;

	// Get list size
	size_t length( ) const; 
};

inline bool LinkedList::isEmpty( ) const
{
	return m_pTail == nullptr;
}

inline size_t LinkedList::length( ) const
{
	return m_nSize;
}

#endif