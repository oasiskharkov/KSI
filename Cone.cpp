#include "Cone.h"

Cone::Cone( float radius, float height ) : GeometricBody( geometric_body::CONE ),
	m_fRadius( radius ), m_fHeight( height )
{

}

Cone::~Cone( )
{

}

float Cone::area( ) const
{
	float hyp = sqrt( m_fHeight * m_fHeight + m_fRadius * m_fRadius );
	return static_cast<float>( M_PI ) * m_fRadius * ( m_fRadius + hyp );
}

void Cone::setParams( ) 
{
	std::cout << "Input cone radius: ";
	float radius;
	std::cin >> radius;
	m_fRadius = radius;

	std::cout << "Input cone height: ";
	float height;
	std::cin >> height;
	m_fHeight = height;
}

void Cone::showParams( ) const
{
	std::cout << "Radius: " << m_fRadius << std::endl;
	std::cout << "Height: " << m_fHeight << std::endl;
}