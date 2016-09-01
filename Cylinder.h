#ifndef _CYLINDER_H_
#define _CYLINDER_H_

#include "GeometricBody.h"

class Cylinder : public GeometricBody
{
private:
	// Cylinder radius
	float m_fRadius;

	// Cylinder height
	float m_fHeight;
public:
	// Default constructor
	explicit Cylinder( float radius = 1.0f, float height = 1.0f );
	
	// Destructor
	~Cylinder( );

	// Calculate cylinder volume
	float volume( ) const override;

	// Calculate cylinder surface area
	float area( ) const override;

	// Make cylinder copy
	GeometricBody* makeCopy( ) const override;

	// Setup cylinder params
	void setParams( ) override;

	// Show cylinder params info
	void showParams( ) const override;

	// Get cylinder radius
	float getRadius( ) const;

	// Get cylinder height
	float getHeight( ) const;

	// Set cylinder radius
	void setRadius( float radius );

	// Set cylinder height
	void setHeight( float height );
};

inline float Cylinder::volume( ) const
{
	return static_cast<float>( M_PI ) * m_fRadius * m_fRadius * m_fHeight;
}

inline float Cylinder::area( ) const
{
	return static_cast<float>( M_PI ) * m_fRadius * 2.0f * (  m_fRadius + m_fHeight );
}

inline GeometricBody* Cylinder::makeCopy( ) const 
{
	return new Cylinder( m_fRadius, m_fHeight );
}

inline float Cylinder::getRadius( ) const
{
	return m_fRadius;
}

inline float Cylinder::getHeight( ) const
{
	return m_fHeight;
}

inline void Cylinder::setRadius( float radius )
{
	m_fRadius = radius;
}

inline void Cylinder::setHeight( float height )
{
	m_fHeight = height;
}

#endif