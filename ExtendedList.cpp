#include "ExtendedList.h"
#include "GeometricBody.h"

void ExtendedList::insert( size_t n )
{
	size_t pos = 1;
	GeometricBody* temp = m_pTail;
	while( temp != nullptr )
	{
		if( n == pos )
		{
			auto next = temp->getNext( );
			auto elem = temp->makeCopy( );
			elem->setNext( next );
			temp->setNext( elem );
			m_nSize++;
			break;
		}
		pos++;
		temp = temp->getNext( );
	}

	if( n > pos ) 
	{
		std::cout << "Position number is greater than the length of the list!" << std::endl;
	}
}