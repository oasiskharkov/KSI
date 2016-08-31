#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

class GeometricBody;

class LinkedList
{
private:
	GeometricBody* m_pHead;
public:
	LinkedList( );
	virtual ~LinkedList( );
	bool isEmpty( ) const;
	void clean( );
	void Add( GeometricBody* elem );
	void showList( ) const;
};

inline bool LinkedList::isEmpty( ) const
{
	return m_pHead == nullptr;
}

#endif

