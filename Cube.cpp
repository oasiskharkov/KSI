#include "Cube.h"

Cube::Cube( float side ) : GeometricBody( geometric_body::CUBE ), m_fSide( side )
{

}

Cube::~Cube(void)
{

}

void Cube::setParams( ) 
{
	std::cout << "Input cube side: ";
	float side;
	std::cin >> side;
	m_fSide = side;
}

void Cube::showParams( ) const
{
	std::cout << "Side: " << m_fSide << std::endl;
}
