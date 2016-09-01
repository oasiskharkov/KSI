#include "Parallelepiped.h"

Parallelepiped::Parallelepiped( float width, float depth, float height ) : GeometricBody( geometric_body::PARALLELEPIPED ), 
	m_fWidth( width ), m_fDepth( depth ), m_fHeight( height )
{

}

Parallelepiped::~Parallelepiped( )
{

}

void Parallelepiped::setParams( ) 
{
	std::cout << "Input parallelepiped width: ";
	float width;
	std::cin >> width;
	m_fWidth = width;

	std::cout << "Input parallelepiped depth: ";
	float depth;
	std::cin >> depth;
	m_fDepth = depth;

	std::cout << "Input parallelepiped height: ";
	float height;
	std::cin >> height;
	m_fHeight = height;
}

void Parallelepiped::showParams( ) const
{
	std::cout << "Width: " << m_fWidth << std::endl;
	std::cout << "Depth: " << m_fDepth << std::endl;
	std::cout << "Height: " << m_fHeight << std::endl;
}