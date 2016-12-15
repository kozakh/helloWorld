#include "application.h"

Application::Application ( int argc, char * argv [] )
{
	this -> argc = argc;
	this -> argv = argv;
	m = new Model;
	v = new View ( m );
	m -> registerObserver ( v );
}
Application::~Application ()
{
	delete m;
	delete v;
}
int Application::run ()
{
	char * data = (char *) "Hello, world!";
	m -> setData ( data, strlen ( data ) + 1 );

	return 0;
}