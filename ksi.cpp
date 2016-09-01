#include "Service.h"
#include "Menu.h"

int main( ) 
{
	// Checks for memory leak if debug build
	#if defined( DEBUG ) | defined( _DEBUG )
		_CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );	
	#endif

	Menu m;
	m.runMainLoop( );

	return 0;
}