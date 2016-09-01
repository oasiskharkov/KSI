#include "Cylinder.h"

Cylinder::Cylinder( float radius, float height ) : GeometricBody( geometric_body::CYLINDER ),
	m_fRadius( radius ), m_fHeight( height )
{

}

Cylinder::~Cylinder( )
{

}

void Cylinder::setParams( ) 
{
	std::cout << "Input cylinder radius: ";
	float radius;
	std::cin >> radius;
	m_fRadius = radius;

	std::cout << "Input cylinder height: ";
	float height;
	std::cin >> height;
	m_fHeight = height;
}

void Cylinder::showParams( ) const
{
	std::cout << "Radius: " << m_fRadius << std::endl;
	std::cout << "Height: " << m_fHeight << std::endl;
}
