#include "LinkedList.h"
#include "GeometricBody.h"

LinkedList::LinkedList( )
{
	m_pHead = nullptr;
}

LinkedList::~LinkedList(void)
{
	clean( );
}

void LinkedList::clean( )
{
	while (m_pHead != nullptr)
	{
		GeometricBody* temp = m_pHead;
		m_pHead = m_pHead->getNext( );
		delete temp;
	}
}

void LinkedList::Add( GeometricBody* elem )
{
	if( isEmpty( ) )
	{
		m_pHead = elem;
		m_pHead->setNext( nullptr );
	}
	else
	{
		auto next = m_pHead; 
		m_pHead = elem;
		m_pHead->setNext( next );
	}
}

void LinkedList::showList( ) const
{
	if( isEmpty( ) ) 
	{
		std::cout << "List is empty!" << std::endl;
	}
	else
	{
		auto temp = m_pHead;
		while( temp != nullptr )
		{
			temp->showInfo( );
			temp = temp->getNext( );
		}
	}
}
