#ifndef _PARALLELEPIPED_H_
#define _PARALLELEPIPED_H_

#include "GeometricBody.h"

class Parallelepiped : public GeometricBody
{
private:
	// Parallelepiped width
	float m_fWidth;

	// Parallelepiped depth
	float m_fDepth;

	// Parallelepiped height
	float m_fHeight;
public:
	// Explicit constructor
	explicit Parallelepiped( float width = 1.0f, float depth = 1.0f, float height = 1.0f );

	// Destructor
	~Parallelepiped(void);

	// Calculate parallelepiped volume
	float volume( ) const override;

	// Calculate parallelepiped surface area
	float area( ) const override;

	// Make cube copy
	GeometricBody* makeCopy( ) const override;

	// Get parallelepiped width
	float getWidth( ) const;

	// Get parallelepiped depth
	float getDepth( ) const;

	// Get parallelepiped height
	float getHeight( ) const;

	// Set parallelepiped width
	void setWidth( float width );

	// Set parallelepiped depth
	void setDepth( float depth ); 

	// Set parallelepiped height
	void setHeight( float height );
};

inline float Parallelepiped::volume( ) const
{
	return m_fWidth * m_fDepth * m_fHeight;
}

inline float Parallelepiped::area( ) const
{
	return 2.0f * m_fWidth * m_fDepth + 2.0f * m_fDepth * m_fHeight + 2.0f * m_fWidth * m_fHeight;
}

inline GeometricBody* Parallelepiped::makeCopy( ) const
{
	return new Parallelepiped( m_fWidth, m_fDepth, m_fHeight );
}

inline float Parallelepiped::getWidth( ) const
{
	return m_fWidth;
}

inline float Parallelepiped::getDepth( ) const
{
	return m_fDepth;
}

inline float Parallelepiped::getHeight( ) const
{
	return m_fHeight;
}

inline void Parallelepiped::setWidth( float width )
{
	m_fWidth = width;
}

inline void Parallelepiped::setDepth( float depth )
{
	m_fDepth = depth;
}

inline void Parallelepiped::setHeight( float height )
{
	m_fHeight = height;
}



#endif
