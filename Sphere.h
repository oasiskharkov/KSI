#ifndef _SPHERE_H_
#define _SPHERE_H_

#include "GeometricBody.h"

class Sphere : public GeometricBody
{
private:
	// Sphere radius
	float m_fRadius;
public:
	// Explicit constructor
	explicit Sphere( float radius = 1.0f );

	// Destructor
	~Sphere( );

	// Calculate sphere volume
	float volume( ) const override;

	// Calculate sphere surface area
	float area( ) const override;

	// Make sphere copy
	GeometricBody* makeCopy( ) const override;

	// Setup sphere params
	void setParams( ) override;

	// Show sphere params info
	void showParams( ) const override;
	
	// Get sphere radius
	float getRadius( ) const;

	// Set sphere radius
	void setRadius( float radius );
};

inline float Sphere::volume( ) const
{
	return static_cast<float>( M_PI ) * m_fRadius * m_fRadius * m_fRadius * 4.0f / 3.0f;
}

inline float Sphere::area( ) const
{
	return static_cast<float>( M_PI ) * m_fRadius * m_fRadius * 4.0f ;
}

inline GeometricBody* Sphere::makeCopy( ) const 
{
	return new Sphere( m_fRadius );
}

inline float Sphere::getRadius( ) const
{
	return m_fRadius;
}

inline void Sphere::setRadius( float radius )
{
	m_fRadius = radius;
}

#endif