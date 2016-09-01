#ifndef _MENU_H_
#define _MENU_H_

class ExtendedList;

class Menu
{
private:
	// Extended list
	ExtendedList* m_list;

	// Operate
	void operate( char choice );

	// Run invitation loop
	void runInvitationLoop( );

	// Add geometric body to the list
	void addGeometricBodyToList( );

	// Insert copy to the list after n-element 
	void insertCopyAfterN();
public:
	// Constructor
	Menu( );
	
	// Destructor
	~Menu( );
	
	// Run main loop
	void runMainLoop( );
};

#endif