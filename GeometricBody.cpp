#include "GeometricBody.h"


GeometricBody::GeometricBody( geometric_body type ) : m_eBodyType( type )
{

}

GeometricBody::~GeometricBody( )
{

}

void GeometricBody::showInfo( ) const
{
	std::string type;
	switch ( m_eBodyType )
	{
	case geometric_body::CUBE:
		type = "Cube";
		break;
	case geometric_body::CONE:
		type = "Cone";
		break;
	case geometric_body::CYLINDER:
		type = "Cylinder";
		break;
	case geometric_body::PARALLELEPIPED:
		type = "Parallelepiped";
		break;
	case geometric_body::PYRAMID:
		type = "Pyramid";
		break;
	case geometric_body::SPHERE:
		type = "Sphere";
		break;
	}

	std::cout << "Geometric body type: " << type << std::endl;
	std::cout << "Volume: " << volume( ) << std::endl;
	std::cout << "Surface area: " << area( ) << std::endl; 
}

