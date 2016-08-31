#include "Parallelepiped.h"


Parallelepiped::Parallelepiped( float width, float depth, float height ) : GeometricBody( geometric_body::PARALLELEPIPED ), 
	m_fWidth( width ), m_fDepth( depth ), m_fHeight( height )
{

}

Parallelepiped::~Parallelepiped( )
{

}
