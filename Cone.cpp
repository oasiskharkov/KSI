#include "Cone.h"


Cone::Cone( float radius, float height ) : GeometricBody( geometric_body::CONE ), m_fRadius( radius ), m_fHeight( height )
{

}

Cone::~Cone( )
{

}

float Cone::area( ) const
{
	float hyp = sqrt( m_fHeight * m_fHeight + m_fRadius * m_fRadius );
	return static_cast<float>(M_PI) * m_fRadius * ( m_fRadius + hyp );
}
