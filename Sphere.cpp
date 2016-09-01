#include "Sphere.h"

Sphere::Sphere( float radius ) : GeometricBody( geometric_body::SPHERE ), m_fRadius( radius )
{

}

Sphere::~Sphere( )
{

}

void Sphere::setParams( ) 
{
	std::cout << "Input sphere radius: ";
	float radius;
	std::cin >> radius;
	m_fRadius = radius;
}

void Sphere::showParams( ) const
{
	std::cout << "Radius: " << m_fRadius << std::endl;
}