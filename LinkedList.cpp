#include "LinkedList.h"
#include "GeometricBody.h"

LinkedList::LinkedList( ) : m_pTail( nullptr ), m_nSize( 0 )
{
	
}

LinkedList::~LinkedList( )
{
	clean( );
}

void LinkedList::clean( )
{
	while ( m_pTail != nullptr )
	{
		GeometricBody* temp = m_pTail;
		m_pTail = m_pTail->getNext( );
		delete temp;
	}
	m_nSize = 0;
}

void LinkedList::add( GeometricBody* elem )
{
	if( isEmpty( ) )
	{
		m_pTail = elem;
		m_pTail->setNext( nullptr );
	}
	else
	{
		auto next = m_pTail; 
		m_pTail = elem;
		m_pTail->setNext( next );
	}
	m_nSize++;
}

void LinkedList::showList( ) const
{
	if( isEmpty( ) ) 
	{
		std::cout << "List is empty!" << std::endl;
	}
	else
	{
		auto temp = m_pTail;
		while( temp != nullptr )
		{
			temp->showInfo( );
			temp = temp->getNext( );
		}
	}
}