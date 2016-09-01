#include "Menu.h"
#include "Service.h"
#include "ExtendedList.h"
#include "Cone.h"
#include "Cube.h"
#include "Cylinder.h"
#include "Parallelepiped.h"
#include "Pyramid.h"
#include "Sphere.h"

Menu::Menu( ) : m_list( new ExtendedList( ) )
{

}

Menu::~Menu( )
{
	delete m_list;
}

void Menu::operate( char choice )
{
	switch( choice )
	{
	case '1':
		addGeometricBodyToList( );
		break;
	case '2':
		m_list->showList( );
		break;
	case '3':
		insertCopyAfterN();
		break;
	case '4':
		m_list->clean( );
		std::cout << std::endl;
		break;
	case '5':
		std::cout << std::endl;
		std::cout << "List size: " << m_list->length( ) << std::endl;
		break;
	}
}

void Menu::runInvitationLoop( )
{
	char choice = '0';

	std::cout << "1. Add element to the list." << std::endl;
	std::cout << "2. Bypass list and show all elements information." << std::endl;
	std::cout << "3. Insert copy after the n-element." << std::endl;
	std::cout << "4. Clear the list." << std::endl;
	std::cout << "5. Show list size." << std::endl;

	do
	{
		std::cout << std::endl;
		std::cout << "Input option(1-5): ";
		choice = _getch( );
		if(choice < '1' || choice > '5') 
		{
			std::cout << "Uncorrect choice. Try again!" << std::endl;
		}
	} while( choice < '1' || choice > '5' );

	operate( choice ); 
}

void Menu::addGeometricBodyToList( )
{
	char choice = '0';
	GeometricBody* body;

	std::cout << std::endl;
	std::cout << "Choose geometric body type:" << std::endl;
	std::cout << "1. Cone." << std::endl;
	std::cout << "2. Cube." << std::endl;
	std::cout << "3. Cylinder." << std::endl;
	std::cout << "4. Parallelepiped." << std::endl;
	std::cout << "5. Pyramid." << std::endl;
	std::cout << "6. Sphere." << std::endl;

	do
	{
		std::cout << std::endl;
		std::cout << "Input option(1-6): ";
		choice = _getch( );
		if(choice < '1' || choice > '6') 
		{
			std::cout << "Uncorrect choice. Try again!" << std::endl;
		}
	} while( choice < '1' || choice > '6' );

	switch( choice )
	{
		case '1':
			body = new Cone( );
			break;
		case '2':
			body = new Cube( );
			break;
		case '3':
			body = new Cylinder( );
			break;
		case '4':
			body = new Parallelepiped( );
			break;
		case '5':
			body = new Pyramid( );
			break;
		case '6':
			body = new Sphere( );
			break;
	}
	std::cout << std::endl;
	body->setParams( );
	m_list->add( body );
}

void Menu::insertCopyAfterN( )
{
	size_t n;
	std::cout << std::endl;
	std::cout << "Input number of element after which insert a copy: ";
	std::cin >> n;
	m_list->insert( n );
}

void Menu::runMainLoop( )
{
	char choice = '0';
	do
	{
		runInvitationLoop( );
		std::cout << std::endl;
		std::cout << "Press any key to continue or 'n' to exit." << std::endl;
		std::cout << std::endl;
		choice = _getch( );
	} while ( choice != 'n' && choice != 'N' );
}