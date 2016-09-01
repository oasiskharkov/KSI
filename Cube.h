#ifndef _CUBE_H_
#define _CUBE_H_

#include "GeometricBody.h"

class Cube : public GeometricBody
{
private:
	// Cube side
	float m_fSide;
public:
	// Explicit constructor
	explicit Cube( float side = 1.0f );

	// Destructor
	~Cube( );

	// Calculate cube volume
	float volume( ) const override;

	// Calculate cube surface area
	float area( ) const override;

	// Make cube copy
	GeometricBody* makeCopy( ) const override;

	// Setup cube params
	void setParams( ) override;

	// Show cube params info
	void showParams( ) const override;

	// Get cube side
	float getSide( ) const;

	// Set cube side
	void setSide( float side ); 
};

inline float Cube::getSide( ) const
{
	return m_fSide;
}

inline void Cube::setSide( float side )
{
	m_fSide = side;
}

inline float Cube::volume( ) const
{
	return m_fSide * m_fSide * m_fSide;
}

inline float Cube::area( ) const
{
	return 6 * m_fSide * m_fSide;
}

inline GeometricBody* Cube::makeCopy( ) const
{
	return new Cube( m_fSide );
}

#endif