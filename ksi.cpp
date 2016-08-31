#include "service.h"
#include "LinkedList.h"
#include "GeometricBody.h"
#include "Cube.h"

int main( ) 
{
	// Checks for memory leak if debug build
	#if defined( DEBUG ) | defined( _DEBUG )
		_CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );	
	#endif

	LinkedList l;

	l.Add( new Cube( 1.0f ) );
	l.Add( new Cube( 2.0f ) );
	l.Add( new Cube( 3.0f ) );
	l.Add( new Cube( 4.0f ) );
	l.Add( new Cube( 5.0f ) );

	l.showList( );
	return 0;
}