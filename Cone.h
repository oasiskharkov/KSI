#ifndef _CONE_H_
#define _CONE_H_

#include "GeometricBody.h"

class Cone : public GeometricBody
{
private:
	// Cone radius
	float m_fRadius;

	// Cone height
	float m_fHeight;
public:
	// Default constructor
	explicit Cone( float radius = 1.0f, float height = 1.0f );
	
	// Destructor
	~Cone( );

	// Calculate cone volume
	float volume( ) const override;

	// Calculate cone surface area
	float area( ) const override;

	// Make cube copy
	GeometricBody* makeCopy( ) const override;

	// Get cone radius
	float getRadius( ) const;

	// Get cone height
	float getHeight( ) const;

	// Set cone radius
	void setRadius( float radius );

	// Set cone height
	void setHeight( float height );
};

inline float Cone::volume( ) const
{
	return static_cast<float>(M_PI) * m_fRadius * m_fRadius * m_fHeight / 3.0f;
}

inline GeometricBody* Cone::makeCopy( ) const 
{
	return new Cone( m_fRadius, m_fHeight );
}

inline float Cone::getRadius( ) const
{
	return m_fRadius;
}

inline float Cone::getHeight( ) const
{
	return m_fHeight;
}

inline void Cone::setRadius( float radius )
{
	m_fRadius = radius;
}

inline void Cone::setHeight( float height )
{
	m_fHeight = height;
}

#endif

