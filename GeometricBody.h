#ifndef _GEOMETRIC_BODY_H_
#define _GEOMETRIC_BODY_H_

#include "Service.h"

class GeometricBody
{
private:
	// Body type
	geometric_body m_eBodyType;

	// Next element
	GeometricBody* m_pNext;
public:
	// Constructor
	GeometricBody( geometric_body type );
	
	// Virtual destructor 
	virtual ~GeometricBody( );
	
	// Calculate body volume
	virtual float volume( ) const = 0 ;

	// Calculate surface area
	virtual float area( ) const = 0;

	// Create object copy 
	virtual GeometricBody* makeCopy( ) const = 0;

	// Set geometric body params
	virtual void setParams( ) = 0;

	// Show geometric body params info
	virtual void showParams( ) const = 0;

	// Show body info
	void showInfo( ) const; 

	// Get body type
	geometric_body getBodyType( );

	// Get next element
	GeometricBody* getNext( ) const;

	// Set next element
	void setNext( GeometricBody* next );	
};

inline geometric_body GeometricBody::getBodyType( )
{
	return m_eBodyType;
}

inline GeometricBody* GeometricBody::getNext( ) const
{
	return m_pNext;
}

inline void GeometricBody::setNext( GeometricBody* next )
{
	m_pNext = next;
}

#endif