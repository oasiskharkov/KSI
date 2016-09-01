#include "Pyramid.h"

Pyramid::Pyramid( float side, float height ) : GeometricBody( geometric_body::PYRAMID ),
	m_fSide( side ), m_fHeight( height )
{

}

Pyramid::~Pyramid( )
{

}

float Pyramid::area( ) const
{
	float bottom = m_fSide * m_fSide * sqrt( 3.0f ) / 4.0f;
	
	float hyp = sqrt( m_fSide * m_fSide / 12.0f + m_fHeight * m_fHeight );

	float sides = 3.0f * m_fSide * hyp / 2.0f;

	return sides + bottom;
} 

void Pyramid::setParams( ) 
{
	std::cout << "Input pyramid side: ";
	float side;
	std::cin >> side;
	m_fSide = side;

	std::cout << "Input pyramid height: ";
	float height;
	std::cin >> height;
	m_fHeight = height;
}

void Pyramid::showParams( ) const
{
	std::cout << "Side: " << m_fSide << std::endl;
	std::cout << "Height: " << m_fHeight << std::endl;
}