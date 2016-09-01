#ifndef _PYRAMID_H_
#define _PYRAMID_H_

#include "GeometricBody.h"

class Pyramid : public GeometricBody
{
private:
	// Pyramid side
	float m_fSide;

	// Pyramid height
	float m_fHeight;
public:
	// Explicit constructor 
	explicit Pyramid( float side = 1.0f, float height = 1.0f );

	// Destructor
	~Pyramid( );

	// Calculate pyramid volume
	float volume( ) const override;

	// Calculate pyramid surface area
	float area( ) const override;

	// Make pyramid copy
	GeometricBody* makeCopy( ) const override;

	// Setup pyramid params
	void setParams( ) override;

	// Show pyramid params info
	void showParams( ) const override;
	
	// Get pyramid side
	float getSide( ) const;

	// Get pyramid height
	float getHeight( ) const;

	// Set pyramid side
	void setSide( float side );

	// Set pyramid height
	void setHeight( float height );
};

inline float Pyramid::volume( ) const
{
	return m_fSide * m_fSide * m_fHeight * sqrt( 3.0f ) / 12.0f;
}

inline GeometricBody* Pyramid::makeCopy( ) const 
{
	return new Pyramid( m_fSide, m_fHeight );
}

inline float Pyramid::getSide( ) const
{
	return m_fSide;
}

inline float Pyramid::getHeight( ) const
{
	return m_fHeight;
}

inline void Pyramid::setSide( float side )
{
	m_fSide = side;
}

inline void Pyramid::setHeight( float height )
{
	m_fHeight = height;
}

#endif